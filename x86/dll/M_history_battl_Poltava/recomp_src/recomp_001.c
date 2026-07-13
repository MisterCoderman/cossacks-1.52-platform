#include "recomp.h"

/* FUN_10007890 @ 0x12b97890 (10 bytes, 5 insns) */
void f_12b97890(void) {
  FTRACE(0x12b97890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97890 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97891 mov ebp, esp */
  EBP = (ESP);
  /* 12b97893 mov eax, 1 */
  EAX = (0x1u);
  /* 12b97898 pop ebp */
  EBP = (pop32());
  /* 12b97899 ret  */
  ESPCHK(0x12b97890u, _esp0);
  ESP += 4; return;
}

/* FUN_100078a0 @ 0x12b978a0 (173 bytes, 59 insns) */
void f_12b978a0(void) {
  FTRACE(0x12b978a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b978a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b978a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b978a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b978a6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b978aa jbe 0x12b978b3 */
  if ((C.cf||C.zf)) goto L_12b978b3;
  /* 12b978ac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b978ae jmp 0x12b97949 */
  goto L_12b97949;
L_12b978b3:;
  /* 12b978b3 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b978b5 call 0x12b973d0 */
  push32(0x12b978bau); f_12b973d0();
  /* 12b978ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b978bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b978c0 push eax */
  push32((uint32_t)(EAX));
  /* 12b978c1 call 0x12b97cd0 */
  push32(0x12b978c6u); f_12b97cd0();
  /* 12b978c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b978c9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b978cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b978d0 je 0x12b97911 */
  if (C.zf) goto L_12b97911;
  /* 12b978d2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b978d9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b978dc cmp ecx, dword ptr [0x12bbdc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bbdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b978e2 ja 0x12b97902 */
  if ((!C.cf&&!C.zf)) goto L_12b97902;
  /* 12b978e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b978e7 push edx */
  push32((uint32_t)(EDX));
  /* 12b978e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b978eb push eax */
  push32((uint32_t)(EAX));
  /* 12b978ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b978ef push ecx */
  push32((uint32_t)(ECX));
  /* 12b978f0 call 0x12b98ba0 */
  push32(0x12b978f5u); f_12b98ba0();
  /* 12b978f5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b978f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b978fa je 0x12b97902 */
  if (C.zf) goto L_12b97902;
  /* 12b978fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b978ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b97902:;
  /* 12b97902 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97904 call 0x12b97470 */
  push32(0x12b97909u); f_12b97470();
  /* 12b97909 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9790c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9790f jmp 0x12b97949 */
  goto L_12b97949;
L_12b97911:;
  /* 12b97911 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97913 call 0x12b97470 */
  push32(0x12b97918u); f_12b97470();
  /* 12b97918 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9791b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9791f jne 0x12b97928 */
  if (!C.zf) goto L_12b97928;
  /* 12b97921 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12b97928:;
  /* 12b97928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9792b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9792e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12b97930 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12b97933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97936 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97937 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9793a push edx */
  push32((uint32_t)(EDX));
  /* 12b9793b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12b9793d mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97942 push eax */
  push32((uint32_t)(EAX));
  /* 12b97943 call dword ptr [0x12bc1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1318))), 0x12b97949u);
L_12b97949:;
  /* 12b97949 mov esp, ebp */
  ESP = (EBP);
  /* 12b9794b pop ebp */
  EBP = (pop32());
  /* 12b9794c ret  */
  ESPCHK(0x12b978a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007950 @ 0x12b97950 (490 bytes, 165 insns) */
void f_12b97950(void) {
  FTRACE(0x12b97950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97950 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97951 mov ebp, esp */
  EBP = (ESP);
  /* 12b97953 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97956 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9795a jne 0x12b9796d */
  if (!C.zf) goto L_12b9796d;
  /* 12b9795c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9795f push eax */
  push32((uint32_t)(EAX));
  /* 12b97960 call 0x12b977a0 */
  push32(0x12b97965u); f_12b977a0();
  /* 12b97965 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97968 jmp 0x12b97b36 */
  goto L_12b97b36;
L_12b9796d:;
  /* 12b9796d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97971 jne 0x12b97986 */
  if (!C.zf) goto L_12b97986;
  /* 12b97973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97976 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97977 call 0x12b97b40 */
  push32(0x12b9797cu); f_12b97b40();
  /* 12b9797c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9797f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97981 jmp 0x12b97b36 */
  goto L_12b97b36;
L_12b97986:;
  /* 12b97986 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9798d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97991 ja 0x12b97b09 */
  if ((!C.cf&&!C.zf)) goto L_12b97b09;
  /* 12b97997 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97999 call 0x12b973d0 */
  push32(0x12b9799eu); f_12b973d0();
  /* 12b9799e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b979a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b979a4 push edx */
  push32((uint32_t)(EDX));
  /* 12b979a5 call 0x12b97cd0 */
  push32(0x12b979aau); f_12b97cd0();
  /* 12b979aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b979ad mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b979b0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b979b4 je 0x12b97acc */
  if (C.zf) goto L_12b97acc;
  /* 12b979ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b979bd cmp eax, dword ptr [0x12bbdc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbdc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b979c3 ja 0x12b97a40 */
  if ((!C.cf&&!C.zf)) goto L_12b97a40;
  /* 12b979c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b979c8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b979c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b979cc push edx */
  push32((uint32_t)(EDX));
  /* 12b979cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b979d0 push eax */
  push32((uint32_t)(EAX));
  /* 12b979d1 call 0x12b98ba0 */
  push32(0x12b979d6u); f_12b98ba0();
  /* 12b979d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b979d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b979db je 0x12b979e5 */
  if (C.zf) goto L_12b979e5;
  /* 12b979dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b979e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b979e3 jmp 0x12b97a40 */
  goto L_12b97a40;
L_12b979e5:;
  /* 12b979e5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b979e8 push edx */
  push32((uint32_t)(EDX));
  /* 12b979e9 call 0x12b98360 */
  push32(0x12b979eeu); f_12b98360();
  /* 12b979ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b979f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b979f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b979f8 je 0x12b97a40 */
  if (C.zf) goto L_12b97a40;
  /* 12b979fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b979fd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12b97a00 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97a03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b97a06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97a09 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97a0c jae 0x12b97a16 */
  if (!C.cf) goto L_12b97a16;
  /* 12b97a0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97a11 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b97a14 jmp 0x12b97a1c */
  goto L_12b97a1c;
L_12b97a16:;
  /* 12b97a16 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97a19 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12b97a1c:;
  /* 12b97a1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97a1f push edx */
  push32((uint32_t)(EDX));
  /* 12b97a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97a23 push eax */
  push32((uint32_t)(EAX));
  /* 12b97a24 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97a27 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97a28 call 0x12b9a2b0 */
  push32(0x12b97a2du); f_12b9a2b0();
  /* 12b97a2d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97a30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97a33 push edx */
  push32((uint32_t)(EDX));
  /* 12b97a34 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97a37 push eax */
  push32((uint32_t)(EAX));
  /* 12b97a38 call 0x12b97d90 */
  push32(0x12b97a3du); f_12b97d90();
  /* 12b97a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97a40:;
  /* 12b97a40 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97a44 jne 0x12b97ac0 */
  if (!C.zf) goto L_12b97ac0;
  /* 12b97a46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97a4a jne 0x12b97a53 */
  if (!C.zf) goto L_12b97a53;
  /* 12b97a4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12b97a53:;
  /* 12b97a53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97a56 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97a59 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12b97a5c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12b97a5f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97a62 push edx */
  push32((uint32_t)(EDX));
  /* 12b97a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97a65 mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97a6a push eax */
  push32((uint32_t)(EAX));
  /* 12b97a6b call dword ptr [0x12bc12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d8))), 0x12b97a71u);
  /* 12b97a71 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b97a74 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97a78 je 0x12b97ac0 */
  if (C.zf) goto L_12b97ac0;
  /* 12b97a7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97a7d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b97a80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97a83 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b97a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97a89 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97a8c jae 0x12b97a96 */
  if (!C.cf) goto L_12b97a96;
  /* 12b97a8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97a91 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12b97a94 jmp 0x12b97a9c */
  goto L_12b97a9c;
L_12b97a96:;
  /* 12b97a96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97a99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12b97a9c:;
  /* 12b97a9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b97a9f push eax */
  push32((uint32_t)(EAX));
  /* 12b97aa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97aa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97aa7 push edx */
  push32((uint32_t)(EDX));
  /* 12b97aa8 call 0x12b9a2b0 */
  push32(0x12b97aadu); f_12b9a2b0();
  /* 12b97aad add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97ab3 push eax */
  push32((uint32_t)(EAX));
  /* 12b97ab4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97ab7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97ab8 call 0x12b97d90 */
  push32(0x12b97abdu); f_12b97d90();
  /* 12b97abd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b97ac0:;
  /* 12b97ac0 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97ac2 call 0x12b97470 */
  push32(0x12b97ac7u); f_12b97470();
  /* 12b97ac7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97aca jmp 0x12b97b09 */
  goto L_12b97b09;
L_12b97acc:;
  /* 12b97acc push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97ace call 0x12b97470 */
  push32(0x12b97ad3u); f_12b97470();
  /* 12b97ad3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ad6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97ada jne 0x12b97ae3 */
  if (!C.zf) goto L_12b97ae3;
  /* 12b97adc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12b97ae3:;
  /* 12b97ae3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97ae6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ae9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12b97aec mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12b97aef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97af2 push eax */
  push32((uint32_t)(EAX));
  /* 12b97af3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97af6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97af9 mov edx, dword ptr [0x12bc0e2c] */
  EDX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97aff push edx */
  push32((uint32_t)(EDX));
  /* 12b97b00 call dword ptr [0x12bc1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1318))), 0x12b97b06u);
  /* 12b97b06 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b97b09:;
  /* 12b97b09 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97b0d jne 0x12b97b18 */
  if (!C.zf) goto L_12b97b18;
  /* 12b97b0f cmp dword ptr [0x12bbf670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97b16 jne 0x12b97b1d */
  if (!C.zf) goto L_12b97b1d;
L_12b97b18:;
  /* 12b97b18 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97b1b jmp 0x12b97b36 */
  goto L_12b97b36;
L_12b97b1d:;
  /* 12b97b1d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97b20 push eax */
  push32((uint32_t)(EAX));
  /* 12b97b21 call 0x12b97710 */
  push32(0x12b97b26u); f_12b97710();
  /* 12b97b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b97b2b jne 0x12b97b31 */
  if (!C.zf) goto L_12b97b31;
  /* 12b97b2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97b2f jmp 0x12b97b36 */
  goto L_12b97b36;
L_12b97b31:;
  /* 12b97b31 jmp 0x12b97986 */
  goto L_12b97986;
L_12b97b36:;
  /* 12b97b36 mov esp, ebp */
  ESP = (EBP);
  /* 12b97b38 pop ebp */
  EBP = (pop32());
  /* 12b97b39 ret  */
  ESPCHK(0x12b97950u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b40 @ 0x12b97b40 (104 bytes, 38 insns) */
void f_12b97b40(void) {
  FTRACE(0x12b97b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97b40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97b41 mov ebp, esp */
  EBP = (ESP);
  /* 12b97b43 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97b44 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97b48 jne 0x12b97b4c */
  if (!C.zf) goto L_12b97b4c;
  /* 12b97b4a jmp 0x12b97ba4 */
  goto L_12b97ba4;
L_12b97b4c:;
  /* 12b97b4c push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97b4e call 0x12b973d0 */
  push32(0x12b97b53u); f_12b973d0();
  /* 12b97b53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97b59 push eax */
  push32((uint32_t)(EAX));
  /* 12b97b5a call 0x12b97cd0 */
  push32(0x12b97b5fu); f_12b97cd0();
  /* 12b97b5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b97b65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97b69 je 0x12b97b87 */
  if (C.zf) goto L_12b97b87;
  /* 12b97b6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97b6e push ecx */
  push32((uint32_t)(ECX));
  /* 12b97b6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97b72 push edx */
  push32((uint32_t)(EDX));
  /* 12b97b73 call 0x12b97d90 */
  push32(0x12b97b78u); f_12b97d90();
  /* 12b97b78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b7b push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97b7d call 0x12b97470 */
  push32(0x12b97b82u); f_12b97470();
  /* 12b97b82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b85 jmp 0x12b97ba4 */
  goto L_12b97ba4;
L_12b97b87:;
  /* 12b97b87 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97b89 call 0x12b97470 */
  push32(0x12b97b8eu); f_12b97470();
  /* 12b97b8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97b94 push eax */
  push32((uint32_t)(EAX));
  /* 12b97b95 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97b97 mov ecx, dword ptr [0x12bc0e2c] */
  ECX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97b9d push ecx */
  push32((uint32_t)(ECX));
  /* 12b97b9e call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b97ba4u);
L_12b97ba4:;
  /* 12b97ba4 mov esp, ebp */
  ESP = (EBP);
  /* 12b97ba6 pop ebp */
  EBP = (pop32());
  /* 12b97ba7 ret  */
  ESPCHK(0x12b97b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb0 @ 0x12b97bb0 (116 bytes, 34 insns) */
void f_12b97bb0(void) {
  FTRACE(0x12b97bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12b97bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b97bb4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12b97bbb push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97bbd call 0x12b973d0 */
  push32(0x12b97bc2u); f_12b973d0();
  /* 12b97bc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97bc5 call 0x12b992c0 */
  push32(0x12b97bcau); f_12b992c0();
  /* 12b97bca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b97bcc jge 0x12b97bd5 */
  if ((C.sf==C.of)) goto L_12b97bd5;
  /* 12b97bce mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12b97bd5:;
  /* 12b97bd5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12b97bd7 call 0x12b97470 */
  push32(0x12b97bdcu); f_12b97470();
  /* 12b97bdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97bdf push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97be1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97be3 mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97be8 push eax */
  push32((uint32_t)(EAX));
  /* 12b97be9 call dword ptr [0x12bc1230] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1230))), 0x12b97befu);
  /* 12b97bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b97bf1 jne 0x12b97c1d */
  if (!C.zf) goto L_12b97c1d;
  /* 12b97bf3 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b97bf9u);
  /* 12b97bf9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97bfc jne 0x12b97c16 */
  if (!C.zf) goto L_12b97c16;
  /* 12b97bfe call 0x12b9b8b0 */
  push32(0x12b97c03u); f_12b9b8b0();
  /* 12b97c03 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12b97c09 call 0x12b9b8a0 */
  push32(0x12b97c0eu); f_12b9b8a0();
  /* 12b97c0e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12b97c14 jmp 0x12b97c1d */
  goto L_12b97c1d;
L_12b97c16:;
  /* 12b97c16 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12b97c1d:;
  /* 12b97c1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97c20 mov esp, ebp */
  ESP = (EBP);
  /* 12b97c22 pop ebp */
  EBP = (pop32());
  /* 12b97c23 ret  */
  ESPCHK(0x12b97bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c30 @ 0x12b97c30 (10 bytes, 5 insns) */
void f_12b97c30(void) {
  FTRACE(0x12b97c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97c31 mov ebp, esp */
  EBP = (ESP);
  /* 12b97c33 call 0x12b97bb0 */
  push32(0x12b97c38u); f_12b97bb0();
  /* 12b97c38 pop ebp */
  EBP = (pop32());
  /* 12b97c39 ret  */
  ESPCHK(0x12b97c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c40 @ 0x12b97c40 (10 bytes, 5 insns) */
void f_12b97c40(void) {
  FTRACE(0x12b97c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97c40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97c41 mov ebp, esp */
  EBP = (ESP);
  /* 12b97c43 mov eax, dword ptr [0x12bbdc94] */
  EAX = (r32((uint32_t)(0x12bbdc94)));
  /* 12b97c48 pop ebp */
  EBP = (pop32());
  /* 12b97c49 ret  */
  ESPCHK(0x12b97c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c50 @ 0x12b97c50 (31 bytes, 11 insns) */
void f_12b97c50(void) {
  FTRACE(0x12b97c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97c50 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97c51 mov ebp, esp */
  EBP = (ESP);
  /* 12b97c53 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97c5a jbe 0x12b97c60 */
  if ((C.cf||C.zf)) goto L_12b97c60;
  /* 12b97c5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97c5e jmp 0x12b97c6d */
  goto L_12b97c6d;
L_12b97c60:;
  /* 12b97c60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97c63 mov dword ptr [0x12bbdc94], eax */
  w32((uint32_t)(0x12bbdc94), (EAX));
  /* 12b97c68 mov eax, 1 */
  EAX = (0x1u);
L_12b97c6d:;
  /* 12b97c6d pop ebp */
  EBP = (pop32());
  /* 12b97c6e ret  */
  ESPCHK(0x12b97c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c70 @ 0x12b97c70 (89 bytes, 20 insns) */
void f_12b97c70(void) {
  FTRACE(0x12b97c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97c71 mov ebp, esp */
  EBP = (ESP);
  /* 12b97c73 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12b97c78 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b97c7a mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b97c7f push eax */
  push32((uint32_t)(EAX));
  /* 12b97c80 call dword ptr [0x12bc12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d8))), 0x12b97c86u);
  /* 12b97c86 mov dword ptr [0x12bc0e28], eax */
  w32((uint32_t)(0x12bc0e28), (EAX));
  /* 12b97c8b cmp dword ptr [0x12bc0e28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97c92 jne 0x12b97c98 */
  if (!C.zf) goto L_12b97c98;
  /* 12b97c94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97c96 jmp 0x12b97cc7 */
  goto L_12b97cc7;
L_12b97c98:;
  /* 12b97c98 mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b97c9e mov dword ptr [0x12bc0e1c], ecx */
  w32((uint32_t)(0x12bc0e1c), (ECX));
  /* 12b97ca4 mov dword ptr [0x12bc0e20], 0 */
  w32((uint32_t)(0x12bc0e20), (0x0u));
  /* 12b97cae mov dword ptr [0x12bc0e24], 0 */
  w32((uint32_t)(0x12bc0e24), (0x0u));
  /* 12b97cb8 mov dword ptr [0x12bc0e08], 0x10 */
  w32((uint32_t)(0x12bc0e08), (0x10u));
  /* 12b97cc2 mov eax, 1 */
  EAX = (0x1u);
L_12b97cc7:;
  /* 12b97cc7 pop ebp */
  EBP = (pop32());
  /* 12b97cc8 ret  */
  ESPCHK(0x12b97c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cd0 @ 0x12b97cd0 (85 bytes, 29 insns) */
void f_12b97cd0(void) {
  FTRACE(0x12b97cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12b97cd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97cd6 mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b97cdb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b97cde mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b97ce4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ce6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b97ce9 mov edx, dword ptr [0x12bc0e28] */
  EDX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b97cef mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b97cf2:;
  /* 12b97cf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97cf5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97cf8 jae 0x12b97d1f */
  if (!C.cf) goto L_12b97d1f;
  /* 12b97cfa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97cfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97d00 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97d03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b97d06 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97d0d jae 0x12b97d14 */
  if (!C.cf) goto L_12b97d14;
  /* 12b97d0f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97d12 jmp 0x12b97d21 */
  goto L_12b97d21;
L_12b97d14:;
  /* 12b97d14 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97d17 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97d1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b97d1d jmp 0x12b97cf2 */
  goto L_12b97cf2;
L_12b97d1f:;
  /* 12b97d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b97d21:;
  /* 12b97d21 mov esp, ebp */
  ESP = (EBP);
  /* 12b97d23 pop ebp */
  EBP = (pop32());
  /* 12b97d24 ret  */
  ESPCHK(0x12b97cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d30 @ 0x12b97d30 (95 bytes, 33 insns) */
void f_12b97d30(void) {
  FTRACE(0x12b97d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97d31 mov ebp, esp */
  EBP = (ESP);
  /* 12b97d33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97d39 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97d3c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97d3f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b97d42 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97d45 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12b97d48 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b97d4b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b97d50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97d53 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b97d55 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97d58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b97d5b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b97d5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b97d5f jne 0x12b97d81 */
  if (!C.zf) goto L_12b97d81;
  /* 12b97d61 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97d64 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12b97d67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b97d69 jne 0x12b97d81 */
  if (!C.zf) goto L_12b97d81;
  /* 12b97d6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b97d6e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b97d74 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b97d76 je 0x12b97d81 */
  if (C.zf) goto L_12b97d81;
  /* 12b97d78 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12b97d7f jmp 0x12b97d88 */
  goto L_12b97d88;
L_12b97d81:;
  /* 12b97d81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12b97d88:;
  /* 12b97d88 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97d8b mov esp, ebp */
  ESP = (EBP);
  /* 12b97d8d pop ebp */
  EBP = (pop32());
  /* 12b97d8e ret  */
  ESPCHK(0x12b97d30u, _esp0);
  ESP += 4; return;
}

/* FUN_10007d90 @ 0x12b97d90 (1485 bytes, 453 insns) */
void f_12b97d90(void) {
  FTRACE(0x12b97d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b97d90 push ebp */
  push32((uint32_t)(EBP));
  /* 12b97d91 mov ebp, esp */
  EBP = (ESP);
  /* 12b97d93 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97d96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97d99 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b97d9c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12b97d9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97da2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97da5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97da8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b97dab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b97dae shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12b97db1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b97db4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97db7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b97dbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97dc0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12b97dc7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b97dca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b97dcd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97dd0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b97dd3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b97dd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b97dd8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97ddb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12b97dde mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b97de1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97de4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12b97de7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97dea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b97dec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12b97def mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b97df2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12b97df5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b97df8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b97dfb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b97dfe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b97e00 jne 0x12b97f28 */
  if (!C.zf) goto L_12b97f28;
  /* 12b97e06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b97e09 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b97e0c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97e0f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b97e12 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97e16 jbe 0x12b97e1f */
  if ((C.cf||C.zf)) goto L_12b97e1f;
  /* 12b97e18 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12b97e1f:;
  /* 12b97e1f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97e22 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97e25 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b97e28 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97e2b jne 0x12b97f01 */
  if (!C.zf) goto L_12b97f01;
  /* 12b97e31 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97e35 jae 0x12b97e96 */
  if (!C.cf) goto L_12b97e96;
  /* 12b97e37 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b97e3c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b97e3f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b97e41 not eax */
  EAX = (~(EAX));
  /* 12b97e43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97e46 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97e49 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12b97e4d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b97e4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97e52 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97e55 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12b97e59 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97e5c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97e5f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12b97e62 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b97e65 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97e68 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97e6b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12b97e6e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97e71 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97e74 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b97e78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b97e7a jne 0x12b97e94 */
  if (!C.zf) goto L_12b97e94;
  /* 12b97e7c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b97e81 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b97e84 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b97e86 not eax */
  EAX = (~(EAX));
  /* 12b97e88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97e8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b97e8d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b97e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97e92 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b97e94:;
  /* 12b97e94 jmp 0x12b97f01 */
  goto L_12b97f01;
L_12b97e96:;
  /* 12b97e96 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b97e99 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97e9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b97ea1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b97ea3 not edx */
  EDX = (~(EDX));
  /* 12b97ea5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97ea8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97eab mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12b97eb2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97eb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97eb7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97eba mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12b97ec1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97ec4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ec7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b97eca sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b97ecd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97ed0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ed3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12b97ed6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97ed9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97edc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b97ee0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b97ee2 jne 0x12b97f01 */
  if (!C.zf) goto L_12b97f01;
  /* 12b97ee4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b97ee7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97eea mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b97eef shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b97ef1 not edx */
  EDX = (~(EDX));
  /* 12b97ef3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97ef6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b97ef9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b97efb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b97efe mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12b97f01:;
  /* 12b97f01 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97f04 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b97f07 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97f0a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b97f0d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12b97f10 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97f13 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b97f16 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b97f19 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b97f1c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b97f1f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b97f22 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97f25 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12b97f28:;
  /* 12b97f28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b97f2b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12b97f2e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97f31 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b97f34 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97f38 jbe 0x12b97f41 */
  if ((C.cf||C.zf)) goto L_12b97f41;
  /* 12b97f3a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12b97f41:;
  /* 12b97f41 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97f44 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b97f47 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b97f49 jne 0x12b980a5 */
  if (!C.zf) goto L_12b980a5;
  /* 12b97f4f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b97f52 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97f55 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12b97f58 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b97f5b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12b97f5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97f61 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12b97f64 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97f68 jbe 0x12b97f71 */
  if ((C.cf||C.zf)) goto L_12b97f71;
  /* 12b97f6a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12b97f71:;
  /* 12b97f71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b97f74 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97f77 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12b97f7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b97f7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b97f80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b97f83 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12b97f86 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97f8a jbe 0x12b97f93 */
  if ((C.cf||C.zf)) goto L_12b97f93;
  /* 12b97f8c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12b97f93:;
  /* 12b97f93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b97f96 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97f99 je 0x12b9809f */
  if (C.zf) goto L_12b9809f;
  /* 12b97f9f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b97fa2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b97fa5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b97fa8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97fab jne 0x12b98081 */
  if (!C.zf) goto L_12b98081;
  /* 12b97fb1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b97fb5 jae 0x12b98016 */
  if (!C.cf) goto L_12b98016;
  /* 12b97fb7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b97fbc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b97fbf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b97fc1 not edx */
  EDX = (~(EDX));
  /* 12b97fc3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97fc6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97fc9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12b97fcd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b97fcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b97fd2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97fd5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12b97fd9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97fdc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97fdf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b97fe2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b97fe5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97fe8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97feb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12b97fee mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b97ff1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b97ff4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b97ff8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b97ffa jne 0x12b98014 */
  if (!C.zf) goto L_12b98014;
  /* 12b97ffc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98001 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98004 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98006 not edx */
  EDX = (~(EDX));
  /* 12b98008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9800b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9800d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9800f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98012 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b98014:;
  /* 12b98014 jmp 0x12b98081 */
  goto L_12b98081;
L_12b98016:;
  /* 12b98016 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98019 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9801c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98021 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98023 not eax */
  EAX = (~(EAX));
  /* 12b98025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98028 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b9802b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12b98032 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98034 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98037 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b9803a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12b98041 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98044 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98047 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12b9804a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b9804d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98050 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98053 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12b98056 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98059 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9805c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98060 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98062 jne 0x12b98081 */
  if (!C.zf) goto L_12b98081;
  /* 12b98064 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98067 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9806a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b9806f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98071 not eax */
  EAX = (~(EAX));
  /* 12b98073 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98076 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98079 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9807b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9807e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b98081:;
  /* 12b98081 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98084 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b98087 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b9808a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9808d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b98090 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98093 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b98096 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98099 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b9809c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12b9809f:;
  /* 12b9809f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b980a2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12b980a5:;
  /* 12b980a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b980a8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b980ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b980ad jne 0x12b980bb */
  if (!C.zf) goto L_12b980bb;
  /* 12b980af mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b980b2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b980b5 je 0x12b981cb */
  if (C.zf) goto L_12b981cb;
L_12b980bb:;
  /* 12b980bb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b980be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b980c1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12b980c4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b980c7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b980cd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b980d0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b980d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980d6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b980d9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12b980dc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b980df mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980e2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12b980e5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980e8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b980eb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980ee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b980f1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980f4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b980f7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b980fa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b980fd jne 0x12b981cb */
  if (!C.zf) goto L_12b981cb;
  /* 12b98103 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98107 jae 0x12b98164 */
  if (!C.cf) goto L_12b98164;
  /* 12b98109 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b9810c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9810f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98113 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98116 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98119 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b9811c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9811f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98122 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98125 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12b98128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9812a jne 0x12b98142 */
  if (!C.zf) goto L_12b98142;
  /* 12b9812c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98131 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98134 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98139 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9813b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9813d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98140 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b98142:;
  /* 12b98142 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98147 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9814a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b9814c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9814f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98152 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12b98156 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98158 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9815b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b9815e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12b98162 jmp 0x12b981cb */
  goto L_12b981cb;
L_12b98164:;
  /* 12b98164 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98167 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9816a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b9816e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b98171 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98174 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b98177 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9817a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b9817d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98180 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12b98183 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98185 jne 0x12b981a2 */
  if (!C.zf) goto L_12b981a2;
  /* 12b98187 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9818a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9818d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98192 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98197 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9819a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9819c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9819f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12b981a2:;
  /* 12b981a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b981a5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b981a8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b981ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b981af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b981b2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b981b5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12b981bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b981be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b981c1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12b981c4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12b981cb:;
  /* 12b981cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b981ce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b981d1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b981d3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b981d6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b981d9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b981dc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12b981df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b981e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b981e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b981e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b981ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b981ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b981ef cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b981f2 jne 0x12b98359 */
  if (!C.zf) goto L_12b98359;
  /* 12b981f8 cmp dword ptr [0x12bc0e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b981ff je 0x12b98348 */
  if (C.zf) goto L_12b98348;
  /* 12b98205 mov eax, dword ptr [0x12bc0e18] */
  EAX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b9820a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12b9820d mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98213 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b98216 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98218 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b9821b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12b98220 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b98225 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98228 push eax */
  push32((uint32_t)(EAX));
  /* 12b98229 call dword ptr [0x12bc12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f8))), 0x12b9822fu);
  /* 12b9822f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98234 mov ecx, dword ptr [0x12bc0e18] */
  ECX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b9823a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b9823c mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98241 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b98244 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98246 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9824c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b9824f mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98254 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b98257 mov edx, dword ptr [0x12bc0e18] */
  EDX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b9825d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12b98268 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9826d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b98270 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12b98273 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b98276 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9827b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9827e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12b98281 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98287 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9828a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12b9828e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98290 jne 0x12b982a6 */
  if (!C.zf) goto L_12b982a6;
  /* 12b98292 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98298 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b9829b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12b9829d mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b982a3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12b982a6:;
  /* 12b982a6 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b982ac cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b982b0 jne 0x12b98348 */
  if (!C.zf) goto L_12b98348;
  /* 12b982b6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b982bb push 0 */
  push32((uint32_t)(0x0u));
  /* 12b982bd mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b982c2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b982c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b982c6 call dword ptr [0x12bc12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f8))), 0x12b982ccu);
  /* 12b982cc mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b982d2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b982d5 push eax */
  push32((uint32_t)(EAX));
  /* 12b982d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b982d8 mov ecx, dword ptr [0x12bc0e2c] */
  ECX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b982de push ecx */
  push32((uint32_t)(ECX));
  /* 12b982df call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b982e5u);
  /* 12b982e5 mov edx, dword ptr [0x12bc0e24] */
  EDX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b982eb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b982ee mov eax, dword ptr [0x12bc0e28] */
  EAX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b982f3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b982f5 mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b982fb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b982fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98300 push eax */
  push32((uint32_t)(EAX));
  /* 12b98301 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98307 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9830a push edx */
  push32((uint32_t)(EDX));
  /* 12b9830b mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b98310 push eax */
  push32((uint32_t)(EAX));
  /* 12b98311 call 0x12b9b8c0 */
  push32(0x12b98316u); f_12b9b8c0();
  /* 12b98316 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98319 mov ecx, dword ptr [0x12bc0e24] */
  ECX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b9831f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98322 mov dword ptr [0x12bc0e24], ecx */
  w32((uint32_t)(0x12bc0e24), (ECX));
  /* 12b98328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9832b cmp edx, dword ptr [0x12bc0e20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12bc0e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98331 jbe 0x12b9833c */
  if ((C.cf||C.zf)) goto L_12b9833c;
  /* 12b98333 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98336 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98339 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12b9833c:;
  /* 12b9833c mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b98342 mov dword ptr [0x12bc0e1c], ecx */
  w32((uint32_t)(0x12bc0e1c), (ECX));
L_12b98348:;
  /* 12b98348 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9834b mov dword ptr [0x12bc0e20], edx */
  w32((uint32_t)(0x12bc0e20), (EDX));
  /* 12b98351 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98354 mov dword ptr [0x12bc0e18], eax */
  w32((uint32_t)(0x12bc0e18), (EAX));
L_12b98359:;
  /* 12b98359 mov esp, ebp */
  ESP = (EBP);
  /* 12b9835b pop ebp */
  EBP = (pop32());
  /* 12b9835c ret  */
  ESPCHK(0x12b97d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008360 @ 0x12b98360 (1334 bytes, 427 insns) */
void f_12b98360(void) {
  FTRACE(0x12b98360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b98360 push ebp */
  push32((uint32_t)(EBP));
  /* 12b98361 mov ebp, esp */
  EBP = (ESP);
  /* 12b98363 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98366 push esi */
  push32((uint32_t)(ESI));
  /* 12b98367 mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b9836c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9836f mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b98375 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98377 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12b9837a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9837d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98380 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12b98383 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12b98386 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98389 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12b9838c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9838f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b98392 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98396 jge 0x12b983ac */
  if ((C.sf==C.of)) goto L_12b983ac;
  /* 12b98398 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9839b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9839e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b983a0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b983a3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12b983aa jmp 0x12b983c1 */
  goto L_12b983c1;
L_12b983ac:;
  /* 12b983ac mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b983b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b983b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b983b9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b983bc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b983be mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12b983c1:;
  /* 12b983c1 mov ecx, dword ptr [0x12bc0e1c] */
  ECX = (r32((uint32_t)(0x12bc0e1c)));
  /* 12b983c7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12b983ca:;
  /* 12b983ca mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b983cd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b983d0 jae 0x12b983f6 */
  if (!C.cf) goto L_12b983f6;
  /* 12b983d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b983d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b983d8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12b983da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b983dd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b983e0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12b983e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b983e5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b983e7 je 0x12b983eb */
  if (C.zf) goto L_12b983eb;
  /* 12b983e9 jmp 0x12b983f6 */
  goto L_12b983f6;
L_12b983eb:;
  /* 12b983eb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b983ee add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b983f1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b983f4 jmp 0x12b983ca */
  goto L_12b983ca;
L_12b983f6:;
  /* 12b983f6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b983f9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b983fc jne 0x12b984dd */
  if (!C.zf) goto L_12b984dd;
  /* 12b98402 mov eax, dword ptr [0x12bc0e28] */
  EAX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b98407 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12b9840a:;
  /* 12b9840a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9840d cmp ecx, dword ptr [0x12bc0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98413 jae 0x12b98439 */
  if (!C.cf) goto L_12b98439;
  /* 12b98415 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98418 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9841b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12b9841d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98420 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98423 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12b98426 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98428 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9842a je 0x12b9842e */
  if (C.zf) goto L_12b9842e;
  /* 12b9842c jmp 0x12b98439 */
  goto L_12b98439;
L_12b9842e:;
  /* 12b9842e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98431 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98434 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98437 jmp 0x12b9840a */
  goto L_12b9840a;
L_12b98439:;
  /* 12b98439 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9843c cmp ecx, dword ptr [0x12bc0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98442 jne 0x12b984dd */
  if (!C.zf) goto L_12b984dd;
L_12b98448:;
  /* 12b98448 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9844b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9844e jae 0x12b98466 */
  if (!C.cf) goto L_12b98466;
  /* 12b98450 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98453 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98457 je 0x12b9845b */
  if (C.zf) goto L_12b9845b;
  /* 12b98459 jmp 0x12b98466 */
  goto L_12b98466;
L_12b9845b:;
  /* 12b9845b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9845e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98461 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b98464 jmp 0x12b98448 */
  goto L_12b98448;
L_12b98466:;
  /* 12b98466 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98469 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9846c jne 0x12b984b7 */
  if (!C.zf) goto L_12b984b7;
  /* 12b9846e mov eax, dword ptr [0x12bc0e28] */
  EAX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b98473 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12b98476:;
  /* 12b98476 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98479 cmp ecx, dword ptr [0x12bc0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9847f jae 0x12b98497 */
  if (!C.cf) goto L_12b98497;
  /* 12b98481 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98484 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98488 je 0x12b9848c */
  if (C.zf) goto L_12b9848c;
  /* 12b9848a jmp 0x12b98497 */
  goto L_12b98497;
L_12b9848c:;
  /* 12b9848c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9848f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98492 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98495 jmp 0x12b98476 */
  goto L_12b98476;
L_12b98497:;
  /* 12b98497 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9849a cmp ecx, dword ptr [0x12bc0e1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b984a0 jne 0x12b984b7 */
  if (!C.zf) goto L_12b984b7;
  /* 12b984a2 call 0x12b988a0 */
  push32(0x12b984a7u); f_12b988a0();
  /* 12b984a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b984aa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b984ae jne 0x12b984b7 */
  if (!C.zf) goto L_12b984b7;
  /* 12b984b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b984b2 jmp 0x12b98891 */
  goto L_12b98891;
L_12b984b7:;
  /* 12b984b7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b984ba push edx */
  push32((uint32_t)(EDX));
  /* 12b984bb call 0x12b989b0 */
  push32(0x12b984c0u); f_12b989b0();
  /* 12b984c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b984c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b984c6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b984c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b984cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b984ce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b984d1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b984d4 jne 0x12b984dd */
  if (!C.zf) goto L_12b984dd;
  /* 12b984d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b984d8 jmp 0x12b98891 */
  goto L_12b98891;
L_12b984dd:;
  /* 12b984dd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b984e0 mov dword ptr [0x12bc0e1c], edx */
  w32((uint32_t)(0x12bc0e1c), (EDX));
  /* 12b984e6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b984e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b984ec mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12b984ef mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b984f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b984f4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12b984f7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b984fb je 0x12b98520 */
  if (C.zf) goto L_12b98520;
  /* 12b984fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98500 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98503 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b98506 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12b9850a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9850d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98510 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98513 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12b9851a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12b9851c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9851e jne 0x12b98555 */
  if (!C.zf) goto L_12b98555;
L_12b98520:;
  /* 12b98520 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12b98527:;
  /* 12b98527 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9852a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9852d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b98530 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12b98534 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98537 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9853a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12b9853d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12b98544 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12b98546 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98548 jne 0x12b98555 */
  if (!C.zf) goto L_12b98555;
  /* 12b9854a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9854d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98550 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12b98553 jmp 0x12b98527 */
  goto L_12b98527;
L_12b98555:;
  /* 12b98555 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98558 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9855e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98561 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12b98568 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9856b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12b98572 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98575 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98578 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9857b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12b9857f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12b98582 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98586 jne 0x12b985a2 */
  if (!C.zf) goto L_12b985a2;
  /* 12b98588 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12b9858f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98592 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98595 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b98598 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12b9859f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12b985a2:;
  /* 12b985a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b985a6 jl 0x12b985bb */
  if ((C.sf!=C.of)) goto L_12b985bb;
  /* 12b985a8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b985ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b985ad mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12b985b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b985b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b985b6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12b985b9 jmp 0x12b985a2 */
  goto L_12b985a2;
L_12b985bb:;
  /* 12b985bb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b985be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b985c1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12b985c5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b985c8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b985cb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b985cd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b985d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b985d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b985d6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12b985d9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b985dc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12b985df cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b985e3 jle 0x12b985ec */
  if ((C.zf||C.sf!=C.of)) goto L_12b985ec;
  /* 12b985e5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12b985ec:;
  /* 12b985ec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b985ef cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b985f2 je 0x12b98810 */
  if (C.zf) goto L_12b98810;
  /* 12b985f8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b985fb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b985fe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98601 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98604 jne 0x12b986da */
  if (!C.zf) goto L_12b986da;
  /* 12b9860a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9860e jge 0x12b9866f */
  if ((C.sf==C.of)) goto L_12b9866f;
  /* 12b98610 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98615 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98618 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b9861a not eax */
  EAX = (~(EAX));
  /* 12b9861c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9861f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98622 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12b98626 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98628 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9862b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9862e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12b98632 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98635 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98638 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12b9863b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b9863e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98641 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98644 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12b98647 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9864a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9864d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98651 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98653 jne 0x12b9866d */
  if (!C.zf) goto L_12b9866d;
  /* 12b98655 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b9865a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9865d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b9865f not eax */
  EAX = (~(EAX));
  /* 12b98661 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98664 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b98666 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b98668 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9866b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b9866d:;
  /* 12b9866d jmp 0x12b986da */
  goto L_12b986da;
L_12b9866f:;
  /* 12b9866f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98672 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98675 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b9867a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b9867c not edx */
  EDX = (~(EDX));
  /* 12b9867e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98681 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98684 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12b9868b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9868d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98690 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98693 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12b9869a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9869d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b986a0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b986a3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b986a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b986a9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b986ac mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12b986af mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b986b2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b986b5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b986b9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b986bb jne 0x12b986da */
  if (!C.zf) goto L_12b986da;
  /* 12b986bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b986c0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b986c3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b986c8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b986ca not edx */
  EDX = (~(EDX));
  /* 12b986cc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b986cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b986d2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b986d4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b986d7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12b986da:;
  /* 12b986da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b986dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b986e0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b986e3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b986e6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12b986e9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b986ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b986ef mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b986f2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b986f5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b986f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b986fc je 0x12b98810 */
  if (C.zf) goto L_12b98810;
  /* 12b98702 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98705 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98708 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12b9870b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9870e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98711 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98714 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98717 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b9871a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9871d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98720 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b98723 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98726 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98729 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12b9872c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9872f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98732 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98735 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12b98738 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9873b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9873e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98741 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98744 jne 0x12b98810 */
  if (!C.zf) goto L_12b98810;
  /* 12b9874a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9874e jge 0x12b987aa */
  if ((C.sf==C.of)) goto L_12b987aa;
  /* 12b98750 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98753 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98756 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b9875a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b9875d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98760 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12b98763 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b98765 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98768 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9876b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12b9876e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98770 jne 0x12b98788 */
  if (!C.zf) goto L_12b98788;
  /* 12b98772 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98777 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9877a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b9877c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9877f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b98781 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b98783 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98786 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b98788:;
  /* 12b98788 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b9878d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98790 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98792 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98795 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98798 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12b9879c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9879e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b987a1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b987a4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12b987a8 jmp 0x12b98810 */
  goto L_12b98810;
L_12b987aa:;
  /* 12b987aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b987ad add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b987b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b987b4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b987b7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b987ba mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12b987bd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b987bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b987c2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b987c5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12b987c8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b987ca jne 0x12b987e7 */
  if (!C.zf) goto L_12b987e7;
  /* 12b987cc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b987cf sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b987d2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b987d7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b987d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b987dc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b987df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b987e1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b987e4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b987e7:;
  /* 12b987e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b987ea sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b987ed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b987f2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b987f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b987f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b987fa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12b98801 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98803 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98806 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98809 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12b98810:;
  /* 12b98810 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98814 je 0x12b9882a */
  if (C.zf) goto L_12b9882a;
  /* 12b98816 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98819 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9881c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b9881e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98821 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98824 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b98827 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12b9882a:;
  /* 12b9882a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9882d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98830 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b98833 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98836 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98839 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9883c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9883e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98841 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98844 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98847 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9884a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12b9884d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98850 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b98852 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98855 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b98857 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9885a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9885d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b9885f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98861 jne 0x12b98883 */
  if (!C.zf) goto L_12b98883;
  /* 12b98863 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98866 cmp eax, dword ptr [0x12bc0e20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9886c jne 0x12b98883 */
  if (!C.zf) goto L_12b98883;
  /* 12b9886e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98871 cmp ecx, dword ptr [0x12bc0e18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98877 jne 0x12b98883 */
  if (!C.zf) goto L_12b98883;
  /* 12b98879 mov dword ptr [0x12bc0e20], 0 */
  w32((uint32_t)(0x12bc0e20), (0x0u));
L_12b98883:;
  /* 12b98883 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12b98886 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98889 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12b9888b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9888e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12b98891:;
  /* 12b98891 pop esi */
  ESI = (pop32());
  /* 12b98892 mov esp, ebp */
  ESP = (EBP);
  /* 12b98894 pop ebp */
  EBP = (pop32());
  /* 12b98895 ret  */
  ESPCHK(0x12b98360u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a0 @ 0x12b988a0 (271 bytes, 78 insns) */
void f_12b988a0(void) {
  FTRACE(0x12b988a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b988a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b988a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b988a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b988a4 mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b988a9 cmp eax, dword ptr [0x12bc0e08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0e08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b988af jne 0x12b988fb */
  if (!C.zf) goto L_12b988fb;
  /* 12b988b1 mov ecx, dword ptr [0x12bc0e08] */
  ECX = (r32((uint32_t)(0x12bc0e08)));
  /* 12b988b7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b988ba imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b988bd push ecx */
  push32((uint32_t)(ECX));
  /* 12b988be mov edx, dword ptr [0x12bc0e28] */
  EDX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b988c4 push edx */
  push32((uint32_t)(EDX));
  /* 12b988c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b988c7 mov eax, dword ptr [0x12bc0e2c] */
  EAX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b988cc push eax */
  push32((uint32_t)(EAX));
  /* 12b988cd call dword ptr [0x12bc1318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1318))), 0x12b988d3u);
  /* 12b988d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b988d6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b988da jne 0x12b988e3 */
  if (!C.zf) goto L_12b988e3;
  /* 12b988dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b988de jmp 0x12b989ab */
  goto L_12b989ab;
L_12b988e3:;
  /* 12b988e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b988e6 mov dword ptr [0x12bc0e28], ecx */
  w32((uint32_t)(0x12bc0e28), (ECX));
  /* 12b988ec mov edx, dword ptr [0x12bc0e08] */
  EDX = (r32((uint32_t)(0x12bc0e08)));
  /* 12b988f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b988f5 mov dword ptr [0x12bc0e08], edx */
  w32((uint32_t)(0x12bc0e08), (EDX));
L_12b988fb:;
  /* 12b988fb mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b98900 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b98903 mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b98909 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9890b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9890e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12b98913 push 8 */
  push32((uint32_t)(0x8u));
  /* 12b98915 mov edx, dword ptr [0x12bc0e2c] */
  EDX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b9891b push edx */
  push32((uint32_t)(EDX));
  /* 12b9891c call dword ptr [0x12bc12d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d8))), 0x12b98922u);
  /* 12b98922 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98925 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12b98928 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9892b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9892f jne 0x12b98935 */
  if (!C.zf) goto L_12b98935;
  /* 12b98931 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98933 jmp 0x12b989ab */
  goto L_12b989ab;
L_12b98935:;
  /* 12b98935 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b98937 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12b9893c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12b98941 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b98943 call dword ptr [0x12bc131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc131c))), 0x12b98949u);
  /* 12b98949 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9894c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12b9894f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98952 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98956 jne 0x12b98972 */
  if (!C.zf) goto L_12b98972;
  /* 12b98958 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9895b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9895e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9895f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b98961 mov edx, dword ptr [0x12bc0e2c] */
  EDX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b98967 push edx */
  push32((uint32_t)(EDX));
  /* 12b98968 call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b9896eu);
  /* 12b9896e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98970 jmp 0x12b989ab */
  goto L_12b989ab;
L_12b98972:;
  /* 12b98972 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98975 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9897b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9897e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12b98985 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98988 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12b9898f mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b98994 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98997 mov dword ptr [0x12bc0e24], eax */
  w32((uint32_t)(0x12bc0e24), (EAX));
  /* 12b9899c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9899f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b989a2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12b989a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b989ab:;
  /* 12b989ab mov esp, ebp */
  ESP = (EBP);
  /* 12b989ad pop ebp */
  EBP = (pop32());
  /* 12b989ae ret  */
  ESPCHK(0x12b988a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x12b989b0 (494 bytes, 149 insns) */
void f_12b989b0(void) {
  FTRACE(0x12b989b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b989b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b989b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b989b3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b989b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b989b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b989bc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12b989bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b989c2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b989c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b989c8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12b989cf:;
  /* 12b989cf cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b989d3 jl 0x12b989e8 */
  if ((C.sf!=C.of)) goto L_12b989e8;
  /* 12b989d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b989d8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12b989da mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b989dd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b989e0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b989e3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12b989e6 jmp 0x12b989cf */
  goto L_12b989cf;
L_12b989e8:;
  /* 12b989e8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b989eb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b989f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b989f4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12b989fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b989fe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12b98a05 jmp 0x12b98a10 */
  goto L_12b98a10;
L_12b98a07:;
  /* 12b98a07 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98a0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98a0d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12b98a10:;
  /* 12b98a10 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98a14 jge 0x12b98a36 */
  if ((C.sf==C.of)) goto L_12b98a36;
  /* 12b98a16 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98a19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98a1c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12b98a1f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98a22 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98a25 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98a28 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12b98a2b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98a2e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98a31 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12b98a34 jmp 0x12b98a07 */
  goto L_12b98a07;
L_12b98a36:;
  /* 12b98a36 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98a39 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12b98a3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98a3f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b98a42 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98a44 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b98a47 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b98a49 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12b98a4e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b98a53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98a56 push edx */
  push32((uint32_t)(EDX));
  /* 12b98a57 call dword ptr [0x12bc131c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc131c))), 0x12b98a5du);
  /* 12b98a5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b98a5f jne 0x12b98a69 */
  if (!C.zf) goto L_12b98a69;
  /* 12b98a61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b98a64 jmp 0x12b98b9a */
  goto L_12b98b9a;
L_12b98a69:;
  /* 12b98a69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98a6c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98a71 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12b98a74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98a77 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b98a7a jmp 0x12b98a88 */
  goto L_12b98a88;
L_12b98a7c:;
  /* 12b98a7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98a7f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98a85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b98a88:;
  /* 12b98a88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98a8b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98a8e ja 0x12b98aed */
  if ((!C.cf&&!C.zf)) goto L_12b98aed;
  /* 12b98a90 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98a93 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12b98a9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98a9d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12b98aa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98aaa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98aad mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98ab0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98ab3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12b98ab9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98abc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ac2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98ac5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b98ac8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98acb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98ad1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98ad4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b98ad7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98ada add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98adf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b98ae2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b98ae5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12b98aeb jmp 0x12b98a7c */
  goto L_12b98a7c;
L_12b98aed:;
  /* 12b98aed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98af0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98af6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12b98af9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98afc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98aff mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b02 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12b98b05 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b98b0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98b0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98b11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b14 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12b98b17 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98b1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98b1d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b20 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12b98b23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b26 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b98b29 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b98b2c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98b2f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98b32 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12b98b35 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98b38 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98b3b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12b98b43 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98b46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98b49 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12b98b54 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98b57 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12b98b5b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98b5e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12b98b61 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b98b64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98b67 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12b98b6a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98b6c jne 0x12b98b7d */
  if (!C.zf) goto L_12b98b7d;
  /* 12b98b6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98b71 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98b74 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b98b77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98b7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b98b7d:;
  /* 12b98b7d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98b82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98b85 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98b87 not edx */
  EDX = (~(EDX));
  /* 12b98b89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98b8c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b98b8f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98b91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98b94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b98b97 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12b98b9a:;
  /* 12b98b9a mov esp, ebp */
  ESP = (EBP);
  /* 12b98b9c pop ebp */
  EBP = (pop32());
  /* 12b98b9d ret  */
  ESPCHK(0x12b989b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba0 @ 0x12b98ba0 (1515 bytes, 489 insns) */
void f_12b98ba0(void) {
  FTRACE(0x12b98ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b98ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b98ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12b98ba3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98ba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b98ba9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98bac and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12b98bae mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12b98bb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98bb4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12b98bb7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12b98bba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98bbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b98bc0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98bc3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b98bc6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b98bc9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12b98bcc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b98bcf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98bd2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b98bd8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98bdb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12b98be2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b98be5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b98be8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98beb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12b98bee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98bf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b98bf3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98bf6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12b98bf9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98bfc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98bff mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12b98c02 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98c05 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b98c07 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b98c0a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98c0d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98c10 jle 0x12b98ec6 */
  if ((C.zf||C.sf!=C.of)) goto L_12b98ec6;
  /* 12b98c16 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98c19 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b98c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98c1e jne 0x12b98c2b */
  if (!C.zf) goto L_12b98c2b;
  /* 12b98c20 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98c23 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98c26 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98c29 jle 0x12b98c32 */
  if ((C.zf||C.sf!=C.of)) goto L_12b98c32;
L_12b98c2b:;
  /* 12b98c2b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98c2d jmp 0x12b99187 */
  goto L_12b99187;
L_12b98c32:;
  /* 12b98c32 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98c35 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12b98c38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98c3b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b98c3e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98c42 jbe 0x12b98c4b */
  if ((C.cf||C.zf)) goto L_12b98c4b;
  /* 12b98c44 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12b98c4b:;
  /* 12b98c4b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98c4e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98c51 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98c54 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98c57 jne 0x12b98d2d */
  if (!C.zf) goto L_12b98d2d;
  /* 12b98c5d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98c61 jae 0x12b98cc2 */
  if (!C.cf) goto L_12b98cc2;
  /* 12b98c63 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98c68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98c6b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98c6d not edx */
  EDX = (~(EDX));
  /* 12b98c6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98c72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98c75 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12b98c79 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98c7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98c7e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98c81 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12b98c85 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98c88 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98c8b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b98c8e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b98c91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98c94 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98c97 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12b98c9a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98c9d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ca0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b98ca4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98ca6 jne 0x12b98cc0 */
  if (!C.zf) goto L_12b98cc0;
  /* 12b98ca8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98cad mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98cb0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98cb2 not edx */
  EDX = (~(EDX));
  /* 12b98cb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98cb7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b98cb9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98cbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b98cc0:;
  /* 12b98cc0 jmp 0x12b98d2d */
  goto L_12b98d2d;
L_12b98cc2:;
  /* 12b98cc2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98cc5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98cc8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98ccd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98ccf not eax */
  EAX = (~(EAX));
  /* 12b98cd1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98cd4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98cd7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12b98cde and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98ce0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98ce3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98ce6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12b98ced mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98cf0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98cf3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12b98cf6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b98cf9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98cfc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98cff mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12b98d02 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98d05 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98d08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98d0c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98d0e jne 0x12b98d2d */
  if (!C.zf) goto L_12b98d2d;
  /* 12b98d10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98d13 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98d16 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98d1b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98d1d not eax */
  EAX = (~(EAX));
  /* 12b98d1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98d22 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98d25 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b98d27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98d2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b98d2d:;
  /* 12b98d2d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d30 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b98d33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d36 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98d39 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b98d3c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b98d42 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d45 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b98d48 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12b98d4b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98d4e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98d51 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98d54 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b98d57 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98d5b jle 0x12b98ea7 */
  if ((C.zf||C.sf!=C.of)) goto L_12b98ea7;
  /* 12b98d61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98d64 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98d67 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12b98d6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98d6d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b98d70 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98d73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b98d76 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98d7a jbe 0x12b98d83 */
  if ((C.cf||C.zf)) goto L_12b98d83;
  /* 12b98d7c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12b98d83:;
  /* 12b98d83 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98d86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b98d89 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12b98d8c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b98d8f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d92 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98d95 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98d98 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b98d9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98d9e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98da1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12b98da4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b98da7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98daa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12b98dad mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98db0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98db3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98db6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b98db9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98dbc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98dbf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98dc2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98dc5 jne 0x12b98e93 */
  if (!C.zf) goto L_12b98e93;
  /* 12b98dcb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98dcf jae 0x12b98e2c */
  if (!C.cf) goto L_12b98e2c;
  /* 12b98dd1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98dd4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98dd7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98ddb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98dde add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98de1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b98de4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b98de7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98dea add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ded mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12b98df0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98df2 jne 0x12b98e0a */
  if (!C.zf) goto L_12b98e0a;
  /* 12b98df4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98df9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98dfc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98dfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98e01 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b98e03 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98e08 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b98e0a:;
  /* 12b98e0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98e0f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98e12 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98e14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98e17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e1a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12b98e1e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98e20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98e23 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e26 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12b98e2a jmp 0x12b98e93 */
  goto L_12b98e93;
L_12b98e2c:;
  /* 12b98e2c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e2f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98e32 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98e36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e39 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98e3c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b98e3f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b98e42 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e45 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98e48 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12b98e4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98e4d jne 0x12b98e6a */
  if (!C.zf) goto L_12b98e6a;
  /* 12b98e4f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98e52 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98e55 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98e5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98e5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98e5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b98e62 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98e64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98e67 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12b98e6a:;
  /* 12b98e6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98e6d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98e70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98e75 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98e7a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e7d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12b98e84 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98e86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98e89 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98e8c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12b98e93:;
  /* 12b98e93 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98e96 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98e99 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b98e9b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98e9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ea1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98ea4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12b98ea7:;
  /* 12b98ea7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98eaa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ead mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98eb0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b98eb2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98eb5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98eb8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98ebb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ebe mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12b98ec1 jmp 0x12b99182 */
  goto L_12b99182;
L_12b98ec6:;
  /* 12b98ec6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98ec9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98ecc jge 0x12b99182 */
  if ((C.sf==C.of)) goto L_12b99182;
  /* 12b98ed2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98ed5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ed8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98edb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b98edd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b98ee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ee3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98ee6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ee9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12b98eec mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b98eef add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ef2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12b98ef5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98ef8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98efb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b98efe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b98f01 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12b98f04 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98f07 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b98f0a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98f0e jbe 0x12b98f17 */
  if ((C.cf||C.zf)) goto L_12b98f17;
  /* 12b98f10 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12b98f17:;
  /* 12b98f17 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98f1a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b98f1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b98f1f jne 0x12b99060 */
  if (!C.zf) goto L_12b99060;
  /* 12b98f25 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b98f28 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12b98f2b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98f2e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b98f31 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98f35 jbe 0x12b98f3e */
  if ((C.cf||C.zf)) goto L_12b98f3e;
  /* 12b98f37 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12b98f3e:;
  /* 12b98f3e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98f41 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b98f44 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b98f47 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98f4a jne 0x12b99020 */
  if (!C.zf) goto L_12b99020;
  /* 12b98f50 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b98f54 jae 0x12b98fb5 */
  if (!C.cf) goto L_12b98fb5;
  /* 12b98f56 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98f5b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98f5e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98f60 not edx */
  EDX = (~(EDX));
  /* 12b98f62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98f65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98f68 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12b98f6c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b98f6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98f71 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98f74 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12b98f78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98f7b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98f7e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12b98f81 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b98f84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98f87 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98f8a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12b98f8d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98f90 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98f93 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b98f97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b98f99 jne 0x12b98fb3 */
  if (!C.zf) goto L_12b98fb3;
  /* 12b98f9b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b98fa0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98fa3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b98fa5 not edx */
  EDX = (~(EDX));
  /* 12b98fa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98faa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b98fac and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98fae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b98fb1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12b98fb3:;
  /* 12b98fb3 jmp 0x12b99020 */
  goto L_12b99020;
L_12b98fb5:;
  /* 12b98fb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b98fb8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b98fbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b98fc0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b98fc2 not eax */
  EAX = (~(EAX));
  /* 12b98fc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98fc7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98fca mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12b98fd1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b98fd3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b98fd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98fd9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12b98fe0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98fe3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98fe6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12b98fe9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b98fec mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98fef add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ff2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12b98ff5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b98ff8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b98ffb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b98fff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b99001 jne 0x12b99020 */
  if (!C.zf) goto L_12b99020;
  /* 12b99003 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b99006 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99009 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b9900e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b99010 not eax */
  EAX = (~(EAX));
  /* 12b99012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99015 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b99018 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9901a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9901d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b99020:;
  /* 12b99020 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b99023 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b99026 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b99029 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9902c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b9902f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b99032 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b99035 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b99038 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b9903b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12b9903e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99041 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99044 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b99047 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9904a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12b9904d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99050 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b99053 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99057 jbe 0x12b99060 */
  if ((C.cf||C.zf)) goto L_12b99060;
  /* 12b99059 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12b99060:;
  /* 12b99060 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99063 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99066 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12b99069 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b9906c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9906f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b99072 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b99075 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b99078 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9907b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9907e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b99081 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b99084 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99087 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12b9908a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9908d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b99090 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99093 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12b99096 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99099 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9909c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9909f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b990a2 jne 0x12b9916e */
  if (!C.zf) goto L_12b9916e;
  /* 12b990a8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b990ac jae 0x12b99108 */
  if (!C.cf) goto L_12b99108;
  /* 12b990ae mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b990b1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b990b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b990b8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b990bb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b990be mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12b990c1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b990c3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b990c6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b990c9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12b990cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b990ce jne 0x12b990e6 */
  if (!C.zf) goto L_12b990e6;
  /* 12b990d0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b990d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b990d8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b990da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b990dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b990df or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b990e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b990e4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b990e6:;
  /* 12b990e6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b990eb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b990ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b990f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b990f3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b990f6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12b990fa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b990fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b990ff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b99102 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12b99106 jmp 0x12b9916e */
  goto L_12b9916e;
L_12b99108:;
  /* 12b99108 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9910b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9910e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12b99112 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b99115 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99118 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12b9911b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9911d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b99120 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99123 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12b99126 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b99128 jne 0x12b99145 */
  if (!C.zf) goto L_12b99145;
  /* 12b9912a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9912d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99130 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12b99135 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12b99137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9913a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9913d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9913f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99142 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12b99145:;
  /* 12b99145 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99148 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9914b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b99150 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b99152 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99155 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b99158 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12b9915f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99161 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99164 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b99167 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12b9916e:;
  /* 12b9916e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99171 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99174 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b99176 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99179 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9917c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9917f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12b99182:;
  /* 12b99182 mov eax, 1 */
  EAX = (0x1u);
L_12b99187:;
  /* 12b99187 mov esp, ebp */
  ESP = (EBP);
  /* 12b99189 pop ebp */
  EBP = (pop32());
  /* 12b9918a ret  */
  ESPCHK(0x12b98ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x12b99190 (304 bytes, 79 insns) */
void f_12b99190(void) {
  FTRACE(0x12b99190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99190 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99191 mov ebp, esp */
  EBP = (ESP);
  /* 12b99193 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99194 cmp dword ptr [0x12bc0e20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9919b je 0x12b992bc */
  if (C.zf) goto L_12b992bc;
  /* 12b991a1 mov eax, dword ptr [0x12bc0e18] */
  EAX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b991a6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12b991a9 mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b991af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b991b2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b991b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b991b7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12b991bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b991c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b991c4 push eax */
  push32((uint32_t)(EAX));
  /* 12b991c5 call dword ptr [0x12bc12f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f8))), 0x12b991cbu);
  /* 12b991cb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b991d0 mov ecx, dword ptr [0x12bc0e18] */
  ECX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b991d6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b991d8 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b991dd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b991e0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12b991e2 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b991e8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b991eb mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b991f0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b991f3 mov edx, dword ptr [0x12bc0e18] */
  EDX = (r32((uint32_t)(0x12bc0e18)));
  /* 12b991f9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12b99204 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99209 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9920c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12b9920f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12b99212 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99217 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9921a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12b9921d mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99223 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b99226 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12b9922a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9922c jne 0x12b99242 */
  if (!C.zf) goto L_12b99242;
  /* 12b9922e mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99234 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b99237 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12b99239 mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9923f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12b99242:;
  /* 12b99242 mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99248 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9924c jne 0x12b992b2 */
  if (!C.zf) goto L_12b992b2;
  /* 12b9924e cmp dword ptr [0x12bc0e24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0e24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99255 jle 0x12b992b2 */
  if ((C.zf||C.sf!=C.of)) goto L_12b992b2;
  /* 12b99257 mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9925c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9925f push ecx */
  push32((uint32_t)(ECX));
  /* 12b99260 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b99262 mov edx, dword ptr [0x12bc0e2c] */
  EDX = (r32((uint32_t)(0x12bc0e2c)));
  /* 12b99268 push edx */
  push32((uint32_t)(EDX));
  /* 12b99269 call dword ptr [0x12bc12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12f4))), 0x12b9926fu);
  /* 12b9926f mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b99274 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b99277 mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b9927d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9927f mov edx, dword ptr [0x12bc0e20] */
  EDX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99285 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99288 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9928a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9928b mov eax, dword ptr [0x12bc0e20] */
  EAX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b99290 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99293 push eax */
  push32((uint32_t)(EAX));
  /* 12b99294 mov ecx, dword ptr [0x12bc0e20] */
  ECX = (r32((uint32_t)(0x12bc0e20)));
  /* 12b9929a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9929b call 0x12b9b8c0 */
  push32(0x12b992a0u); f_12b9b8c0();
  /* 12b992a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b992a3 mov edx, dword ptr [0x12bc0e24] */
  EDX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b992a9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b992ac mov dword ptr [0x12bc0e24], edx */
  w32((uint32_t)(0x12bc0e24), (EDX));
L_12b992b2:;
  /* 12b992b2 mov dword ptr [0x12bc0e20], 0 */
  w32((uint32_t)(0x12bc0e20), (0x0u));
L_12b992bc:;
  /* 12b992bc mov esp, ebp */
  ESP = (EBP);
  /* 12b992be pop ebp */
  EBP = (pop32());
  /* 12b992bf ret  */
  ESPCHK(0x12b99190u, _esp0);
  ESP += 4; return;
}

/* FUN_100092c0 @ 0x12b992c0 (1565 bytes, 343 insns) */
void f_12b992c0(void) {
  FTRACE(0x12b992c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b992c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b992c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b992c3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b992c9 mov eax, dword ptr [0x12bc0e24] */
  EAX = (r32((uint32_t)(0x12bc0e24)));
  /* 12b992ce imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b992d1 push eax */
  push32((uint32_t)(EAX));
  /* 12b992d2 mov ecx, dword ptr [0x12bc0e28] */
  ECX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b992d8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b992d9 call dword ptr [0x12bc12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12cc))), 0x12b992dfu);
  /* 12b992df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b992e1 je 0x12b992eb */
  if (C.zf) goto L_12b992eb;
  /* 12b992e3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b992e6 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b992eb:;
  /* 12b992eb mov edx, dword ptr [0x12bc0e28] */
  EDX = (r32((uint32_t)(0x12bc0e28)));
  /* 12b992f1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12b992f7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12b99301 jmp 0x12b99312 */
  goto L_12b99312;
L_12b99303:;
  /* 12b99303 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12b99309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9930c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12b99312:;
  /* 12b99312 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12b99318 cmp ecx, dword ptr [0x12bc0e24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0e24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9931e jge 0x12b998d7 */
  if ((C.sf==C.of)) goto L_12b998d7;
  /* 12b99324 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b9932a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9932d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12b99333 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12b99338 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12b9933e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9933f call dword ptr [0x12bc12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12cc))), 0x12b99345u);
  /* 12b99345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99347 je 0x12b99353 */
  if (C.zf) goto L_12b99353;
  /* 12b99349 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12b9934e jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99353:;
  /* 12b99353 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b99359 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9935c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12b99362 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12b99368 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9936e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b99371 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b99377 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9937a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9937d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12b99387 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12b99391 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b99398 jmp 0x12b993a3 */
  goto L_12b993a3;
L_12b9939a:;
  /* 12b9939a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9939d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b993a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12b993a3:;
  /* 12b993a3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b993a7 jge 0x12b9989b */
  if ((C.sf==C.of)) goto L_12b9989b;
  /* 12b993ad mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12b993b7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12b993c1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12b993cb mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12b993d5 jmp 0x12b993e6 */
  goto L_12b993e6;
L_12b993d7:;
  /* 12b993d7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12b993dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b993e0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12b993e6:;
  /* 12b993e6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b993ed jge 0x12b99402 */
  if ((C.sf==C.of)) goto L_12b99402;
  /* 12b993ef mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12b993f5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12b99400 jmp 0x12b993d7 */
  goto L_12b993d7;
L_12b99402:;
  /* 12b99402 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99406 jl 0x12b9983d */
  if ((C.sf!=C.of)) goto L_12b9983d;
  /* 12b9940c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12b99411 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12b99417 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99418 call dword ptr [0x12bc12cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12cc))), 0x12b9941eu);
  /* 12b9941e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99420 je 0x12b9942c */
  if (C.zf) goto L_12b9942c;
  /* 12b99422 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12b99427 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b9942c:;
  /* 12b9942c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12b99432 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b99435 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12b9943f jmp 0x12b99450 */
  goto L_12b99450;
L_12b99441:;
  /* 12b99441 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12b99447 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9944a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12b99450:;
  /* 12b99450 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99457 jge 0x12b995d4 */
  if ((C.sf==C.of)) goto L_12b995d4;
  /* 12b9945d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99460 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99463 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12b99469 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b9946f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99475 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12b9947b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b99481 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99485 jne 0x12b99492 */
  if (!C.zf) goto L_12b99492;
  /* 12b99487 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12b9948d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99490 je 0x12b9949c */
  if (C.zf) goto L_12b9949c;
L_12b99492:;
  /* 12b99492 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12b99497 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b9949c:;
  /* 12b9949c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b994a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b994a4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12b994aa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12b994b0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12b994b6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12b994bc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b994bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b994c1 je 0x12b994f9 */
  if (C.zf) goto L_12b994f9;
  /* 12b994c3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12b994c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b994cc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12b994d2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b994dc jle 0x12b994e8 */
  if ((C.zf||C.sf!=C.of)) goto L_12b994e8;
  /* 12b994de mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12b994e3 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b994e8:;
  /* 12b994e8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12b994ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b994f1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12b994f7 jmp 0x12b9953b */
  goto L_12b9953b;
L_12b994f9:;
  /* 12b994f9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12b994ff sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b99502 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99505 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12b9950b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99512 jle 0x12b9951e */
  if ((C.zf||C.sf!=C.of)) goto L_12b9951e;
  /* 12b99514 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12b9951e:;
  /* 12b9951e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12b99524 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12b9952b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9952e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12b99534 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12b9953b:;
  /* 12b9953b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99542 jl 0x12b9955d */
  if ((C.sf!=C.of)) goto L_12b9955d;
  /* 12b99544 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12b9954a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9954d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9954f jne 0x12b9955d */
  if (!C.zf) goto L_12b9955d;
  /* 12b99551 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9955b jle 0x12b99567 */
  if ((C.zf||C.sf!=C.of)) goto L_12b99567;
L_12b9955d:;
  /* 12b9955d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12b99562 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99567:;
  /* 12b99567 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b9956d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99573 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b99576 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9957c je 0x12b99588 */
  if (C.zf) goto L_12b99588;
  /* 12b9957e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12b99583 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99588:;
  /* 12b99588 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b9958e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99594 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12b9959a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b995a0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b995a6 jb 0x12b9949c */
  if (C.cf) goto L_12b9949c;
  /* 12b995ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b995b2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b995b8 je 0x12b995c4 */
  if (C.zf) goto L_12b995c4;
  /* 12b995ba mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12b995bf jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b995c4:;
  /* 12b995c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b995c7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b995cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b995cf jmp 0x12b99441 */
  goto L_12b99441;
L_12b995d4:;
  /* 12b995d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b995d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b995d9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b995df je 0x12b995eb */
  if (C.zf) goto L_12b995eb;
  /* 12b995e1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12b995e6 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b995eb:;
  /* 12b995eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b995ee mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12b995f4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12b995fb jmp 0x12b99606 */
  goto L_12b99606;
L_12b995fd:;
  /* 12b995fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99600 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99603 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12b99606:;
  /* 12b99606 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9960a jge 0x12b9983d */
  if ((C.sf==C.of)) goto L_12b9983d;
  /* 12b99610 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12b9961a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12b99620 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12b99626:;
  /* 12b99626 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b9962c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9962f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12b99635 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b9963b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99641 je 0x12b9976a */
  if (C.zf) goto L_12b9976a;
  /* 12b99647 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9964a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12b99650 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99657 je 0x12b9976a */
  if (C.zf) goto L_12b9976a;
  /* 12b9965d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b99663 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99669 jb 0x12b9967e */
  if (C.cf) goto L_12b9967e;
  /* 12b9966b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12b99671 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99676 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9967c jb 0x12b99688 */
  if (C.cf) goto L_12b99688;
L_12b9967e:;
  /* 12b9967e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12b99683 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99688:;
  /* 12b99688 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b9968e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12b99694 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12b9969a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12b996a0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b996a3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b996a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996a9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b996ae mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12b996b4:;
  /* 12b996b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996b7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b996bd je 0x12b996de */
  if (C.zf) goto L_12b996de;
  /* 12b996bf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996c2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b996c8 jne 0x12b996cc */
  if (!C.zf) goto L_12b996cc;
  /* 12b996ca jmp 0x12b996de */
  goto L_12b996de;
L_12b996cc:;
  /* 12b996cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b996d1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12b996d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996d7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b996d9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b996dc jmp 0x12b996b4 */
  goto L_12b996b4;
L_12b996de:;
  /* 12b996de mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b996e1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b996e7 jne 0x12b996f3 */
  if (!C.zf) goto L_12b996f3;
  /* 12b996e9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12b996ee jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b996f3:;
  /* 12b996f3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b996f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b996fb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b996fe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99701 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12b99707 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9970e jle 0x12b9971a */
  if ((C.zf||C.sf!=C.of)) goto L_12b9971a;
  /* 12b99710 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12b9971a:;
  /* 12b9971a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12b99720 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99723 je 0x12b9972f */
  if (C.zf) goto L_12b9972f;
  /* 12b99725 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12b9972a jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b9972f:;
  /* 12b9972f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b99735 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b99738 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9973e je 0x12b9974a */
  if (C.zf) goto L_12b9974a;
  /* 12b99740 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12b99745 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b9974a:;
  /* 12b9974a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12b99750 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12b99756 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12b9975c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9975f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12b99765 jmp 0x12b99626 */
  goto L_12b99626;
L_12b9976a:;
  /* 12b9976a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99771 je 0x12b997e1 */
  if (C.zf) goto L_12b997e1;
  /* 12b99773 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99777 jge 0x12b997ab */
  if ((C.sf==C.of)) goto L_12b997ab;
  /* 12b99779 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b9977e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99781 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b99783 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12b99789 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9978b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12b99791 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b99796 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b99799 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b9979b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12b997a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b997a3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12b997a9 jmp 0x12b997e1 */
  goto L_12b997e1;
L_12b997ab:;
  /* 12b997ab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b997ae sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b997b1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b997b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b997b8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12b997be or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b997c0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12b997c6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b997c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b997cc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12b997d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12b997d3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12b997d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12b997db mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12b997e1:;
  /* 12b997e1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12b997e7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b997ea cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b997f0 jne 0x12b99804 */
  if (!C.zf) goto L_12b99804;
  /* 12b997f2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b997f5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12b997fb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99802 je 0x12b9980e */
  if (C.zf) goto L_12b9980e;
L_12b99804:;
  /* 12b99804 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12b99809 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b9980e:;
  /* 12b9980e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12b99814 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b99817 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9981d je 0x12b99829 */
  if (C.zf) goto L_12b99829;
  /* 12b9981f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12b99824 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99829:;
  /* 12b99829 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12b9982f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99832 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12b99838 jmp 0x12b995fd */
  goto L_12b995fd;
L_12b9983d:;
  /* 12b9983d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99840 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12b99846 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12b9984c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99850 jne 0x12b9986a */
  if (!C.zf) goto L_12b9986a;
  /* 12b99852 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99855 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12b9985b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12b99861 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99868 je 0x12b99871 */
  if (C.zf) goto L_12b99871;
L_12b9986a:;
  /* 12b9986a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12b9986f jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b99871:;
  /* 12b99871 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12b99877 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9987d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12b99883 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b99886 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9988b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b9988e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99891 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12b99893 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b99896 jmp 0x12b9939a */
  goto L_12b9939a;
L_12b9989b:;
  /* 12b9989b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b998a1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12b998a7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b998a9 jne 0x12b998bc */
  if (!C.zf) goto L_12b998bc;
  /* 12b998ab mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b998b1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12b998b7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b998ba je 0x12b998c3 */
  if (C.zf) goto L_12b998c3;
L_12b998bc:;
  /* 12b998bc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12b998c1 jmp 0x12b998d9 */
  goto L_12b998d9;
L_12b998c3:;
  /* 12b998c3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12b998c9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b998cc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12b998d2 jmp 0x12b99303 */
  goto L_12b99303;
L_12b998d7:;
  /* 12b998d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b998d9:;
  /* 12b998d9 mov esp, ebp */
  ESP = (EBP);
  /* 12b998db pop ebp */
  EBP = (pop32());
  /* 12b998dc ret  */
  ESPCHK(0x12b992c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098e0 @ 0x12b998e0 (250 bytes, 92 insns) */
void f_12b998e0(void) {
  FTRACE(0x12b998e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b998e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b998e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b998e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b998e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b998e7 push esi */
  push32((uint32_t)(ESI));
  /* 12b998e8 push edi */
  push32((uint32_t)(EDI));
  /* 12b998e9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12b998ec mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b998ef lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12b998f2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12b998f5:;
  /* 12b998f5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b998f9 jne 0x12b99919 */
  if (!C.zf) goto L_12b99919;
  /* 12b998fb push 0x12bbb60c */
  push32((uint32_t)(0x12bbb60cu));
  /* 12b99900 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b99902 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12b99904 push 0x12bbb600 */
  push32((uint32_t)(0x12bbb600u));
  /* 12b99909 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9990b call 0x12b92a90 */
  push32(0x12b99910u); f_12b92a90();
  /* 12b99910 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99913 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99916 jne 0x12b99919 */
  if (!C.zf) goto L_12b99919;
  /* 12b99918 int3  */
  x86_unimpl("int3 @ 0x12b99918");
L_12b99919:;
  /* 12b99919 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9991b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9991d jne 0x12b998f5 */
  if (!C.zf) goto L_12b998f5;
L_12b9991f:;
  /* 12b9991f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99923 jne 0x12b99943 */
  if (!C.zf) goto L_12b99943;
  /* 12b99925 push 0x12bbb5f0 */
  push32((uint32_t)(0x12bbb5f0u));
  /* 12b9992a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9992c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12b9992e push 0x12bbb600 */
  push32((uint32_t)(0x12bbb600u));
  /* 12b99933 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b99935 call 0x12b92a90 */
  push32(0x12b9993au); f_12b92a90();
  /* 12b9993a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9993d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99940 jne 0x12b99943 */
  if (!C.zf) goto L_12b99943;
  /* 12b99942 int3  */
  x86_unimpl("int3 @ 0x12b99942");
L_12b99943:;
  /* 12b99943 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99947 jne 0x12b9991f */
  if (!C.zf) goto L_12b9991f;
  /* 12b99949 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9994c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12b99953 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99959 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b9995c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9995f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99962 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b99964 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99967 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12b9996e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b99971 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99972 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b99975 push edx */
  push32((uint32_t)(EDX));
  /* 12b99976 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99979 push eax */
  push32((uint32_t)(EAX));
  /* 12b9997a call 0x12b9a960 */
  push32(0x12b9997fu); f_12b9a960();
  /* 12b9997f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99982 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b99985 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99988 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9998b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9998e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99991 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b99994 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99997 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9999b jl 0x12b999bf */
  if ((C.sf!=C.of)) goto L_12b999bf;
  /* 12b9999d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b999a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b999a2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12b999a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b999a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b999ad mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12b999b0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b999b3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b999b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b999b8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b999bb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b999bd jmp 0x12b999d0 */
  goto L_12b999d0;
L_12b999bf:;
  /* 12b999bf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b999c2 push edx */
  push32((uint32_t)(EDX));
  /* 12b999c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b999c5 call 0x12b9a6e0 */
  push32(0x12b999cau); f_12b9a6e0();
  /* 12b999ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b999cd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12b999d0:;
  /* 12b999d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b999d3 pop edi */
  EDI = (pop32());
  /* 12b999d4 pop esi */
  ESI = (pop32());
  /* 12b999d5 pop ebx */
  EBX = (pop32());
  /* 12b999d6 mov esp, ebp */
  ESP = (EBP);
  /* 12b999d8 pop ebp */
  EBP = (pop32());
  /* 12b999d9 ret  */
  ESPCHK(0x12b998e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100099e0 @ 0x12b999e0 (183 bytes, 58 insns) */
void f_12b999e0(void) {
  FTRACE(0x12b999e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b999e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b999e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b999e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b999e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b999e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b999ec cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b999f1 ja 0x12b99a0a */
  if ((!C.cf&&!C.zf)) goto L_12b99a0a;
  /* 12b999f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b999f6 mov edx, dword ptr [0x12bbdc98] */
  EDX = (r32((uint32_t)(0x12bbdc98)));
  /* 12b999fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b999fe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12b99a02 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12b99a05 jmp 0x12b99a93 */
  goto L_12b99a93;
L_12b99a0a:;
  /* 12b99a0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99a0d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12b99a10 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b99a16 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b99a1c mov edx, dword ptr [0x12bbdc98] */
  EDX = (r32((uint32_t)(0x12bbdc98)));
  /* 12b99a22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99a24 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12b99a28 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12b99a2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99a2f je 0x12b99a53 */
  if (C.zf) goto L_12b99a53;
  /* 12b99a31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99a34 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12b99a37 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b99a3d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12b99a40 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12b99a43 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12b99a46 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12b99a4a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12b99a51 jmp 0x12b99a64 */
  goto L_12b99a64;
L_12b99a53:;
  /* 12b99a53 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12b99a56 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12b99a59 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12b99a5d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12b99a64:;
  /* 12b99a64 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b99a66 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b99a68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b99a6a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12b99a6d push ecx */
  push32((uint32_t)(ECX));
  /* 12b99a6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99a71 push edx */
  push32((uint32_t)(EDX));
  /* 12b99a72 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12b99a75 push eax */
  push32((uint32_t)(EAX));
  /* 12b99a76 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b99a78 call 0x12b9bc00 */
  push32(0x12b99a7du); f_12b9bc00();
  /* 12b99a7d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99a82 jne 0x12b99a88 */
  if (!C.zf) goto L_12b99a88;
  /* 12b99a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99a86 jmp 0x12b99a93 */
  goto L_12b99a93;
L_12b99a88:;
  /* 12b99a88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99a8b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b99a90 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12b99a93:;
  /* 12b99a93 mov esp, ebp */
  ESP = (EBP);
  /* 12b99a95 pop ebp */
  EBP = (pop32());
  /* 12b99a96 ret  */
  ESPCHK(0x12b999e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009aa0 @ 0x12b99aa0 (836 bytes, 238 insns) */
void f_12b99aa0(void) {
  FTRACE(0x12b99aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99aa1 mov ebp, esp */
  EBP = (ESP);
  /* 12b99aa3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99aa6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99aa8 call 0x12b973d0 */
  push32(0x12b99aadu); f_12b973d0();
  /* 12b99aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99ab0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99ab3 push eax */
  push32((uint32_t)(EAX));
  /* 12b99ab4 call 0x12b99df0 */
  push32(0x12b99ab9u); f_12b99df0();
  /* 12b99ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99abc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b99abf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99ac2 cmp ecx, dword ptr [0x12bc0b64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0b64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99ac8 jne 0x12b99adb */
  if (!C.zf) goto L_12b99adb;
  /* 12b99aca push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99acc call 0x12b97470 */
  push32(0x12b99ad1u); f_12b97470();
  /* 12b99ad1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99ad4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99ad6 jmp 0x12b99de0 */
  goto L_12b99de0;
L_12b99adb:;
  /* 12b99adb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99adf jne 0x12b99afc */
  if (!C.zf) goto L_12b99afc;
  /* 12b99ae1 call 0x12b99ed0 */
  push32(0x12b99ae6u); f_12b99ed0();
  /* 12b99ae6 call 0x12b99f50 */
  push32(0x12b99aebu); f_12b99f50();
  /* 12b99aeb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99aed call 0x12b97470 */
  push32(0x12b99af2u); f_12b97470();
  /* 12b99af2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99af5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99af7 jmp 0x12b99de0 */
  goto L_12b99de0;
L_12b99afc:;
  /* 12b99afc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b99b03 jmp 0x12b99b0e */
  goto L_12b99b0e;
L_12b99b05:;
  /* 12b99b05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99b08 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99b0b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b99b0e:;
  /* 12b99b0e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99b12 jae 0x12b99c5f */
  if (!C.cf) goto L_12b99c5f;
  /* 12b99b18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99b1b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b99b1e mov ecx, dword ptr [eax + 0x12bbdeb8] */
  ECX = (r32((uint32_t)(EAX + 0x12bbdeb8)));
  /* 12b99b24 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99b27 jne 0x12b99c5a */
  if (!C.zf) goto L_12b99c5a;
  /* 12b99b2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b99b34 jmp 0x12b99b3f */
  goto L_12b99b3f;
L_12b99b36:;
  /* 12b99b36 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99b39 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99b3c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12b99b3f:;
  /* 12b99b3f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99b46 jae 0x12b99b54 */
  if (!C.cf) goto L_12b99b54;
  /* 12b99b48 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99b4b mov byte ptr [eax + 0x12bc0d00], 0 */
  w8((uint32_t)(EAX + 0x12bc0d00), (0x0u));
  /* 12b99b52 jmp 0x12b99b36 */
  goto L_12b99b36;
L_12b99b54:;
  /* 12b99b54 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b99b5b jmp 0x12b99b66 */
  goto L_12b99b66;
L_12b99b5d:;
  /* 12b99b5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99b60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99b63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12b99b66:;
  /* 12b99b66 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99b6a jae 0x12b99be7 */
  if (!C.cf) goto L_12b99be7;
  /* 12b99b6c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99b6f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b99b72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99b75 lea ecx, [edx + eax*8 + 0x12bbdec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12bbdec8));
  /* 12b99b7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b99b7f jmp 0x12b99b8a */
  goto L_12b99b8a;
L_12b99b81:;
  /* 12b99b81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99b84 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99b87 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b99b8a:;
  /* 12b99b8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99b8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b99b8f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b99b91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b99b93 je 0x12b99be2 */
  if (C.zf) goto L_12b99be2;
  /* 12b99b95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99b98 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99b9a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12b99b9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99b9f je 0x12b99be2 */
  if (C.zf) goto L_12b99be2;
  /* 12b99ba1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99ba4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99ba6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b99ba8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b99bab jmp 0x12b99bb6 */
  goto L_12b99bb6;
L_12b99bad:;
  /* 12b99bad mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99bb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99bb3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12b99bb6:;
  /* 12b99bb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b99bb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99bbb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12b99bbe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99bc1 ja 0x12b99be0 */
  if ((!C.cf&&!C.zf)) goto L_12b99be0;
  /* 12b99bc3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99bc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99bc9 mov dl, byte ptr [eax + 0x12bc0d01] */
  DL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b99bcf or dl, byte ptr [ecx + 0x12bbdeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12bbdeb0))); DL = (_r); fl_logic(_r,8); }
  /* 12b99bd5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99bd8 mov byte ptr [eax + 0x12bc0d01], dl */
  w8((uint32_t)(EAX + 0x12bc0d01), (DL));
  /* 12b99bde jmp 0x12b99bad */
  goto L_12b99bad;
L_12b99be0:;
  /* 12b99be0 jmp 0x12b99b81 */
  goto L_12b99b81;
L_12b99be2:;
  /* 12b99be2 jmp 0x12b99b5d */
  goto L_12b99b5d;
L_12b99be7:;
  /* 12b99be7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99bea mov dword ptr [0x12bc0b64], ecx */
  w32((uint32_t)(0x12bc0b64), (ECX));
  /* 12b99bf0 mov dword ptr [0x12bc0bec], 1 */
  w32((uint32_t)(0x12bc0bec), (0x1u));
  /* 12b99bfa mov edx, dword ptr [0x12bc0b64] */
  EDX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b99c00 push edx */
  push32((uint32_t)(EDX));
  /* 12b99c01 call 0x12b99e50 */
  push32(0x12b99c06u); f_12b99e50();
  /* 12b99c06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99c09 mov dword ptr [0x12bc0e04], eax */
  w32((uint32_t)(0x12bc0e04), (EAX));
  /* 12b99c0e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b99c15 jmp 0x12b99c20 */
  goto L_12b99c20;
L_12b99c17:;
  /* 12b99c17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99c1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99c1d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b99c20:;
  /* 12b99c20 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99c24 jae 0x12b99c44 */
  if (!C.cf) goto L_12b99c44;
  /* 12b99c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99c29 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b99c2c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99c2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99c32 mov cx, word ptr [ecx + eax*2 + 0x12bbdebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12bbdebc)));
  /* 12b99c3a mov word ptr [edx*2 + 0x12bc0be0], cx */
  w16((uint32_t)(EDX*2 + 0x12bc0be0), (CX));
  /* 12b99c42 jmp 0x12b99c17 */
  goto L_12b99c17;
L_12b99c44:;
  /* 12b99c44 call 0x12b99f50 */
  push32(0x12b99c49u); f_12b99f50();
  /* 12b99c49 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99c4b call 0x12b97470 */
  push32(0x12b99c50u); f_12b97470();
  /* 12b99c50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99c53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99c55 jmp 0x12b99de0 */
  goto L_12b99de0;
L_12b99c5a:;
  /* 12b99c5a jmp 0x12b99b05 */
  goto L_12b99b05;
L_12b99c5f:;
  /* 12b99c5f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12b99c62 push edx */
  push32((uint32_t)(EDX));
  /* 12b99c63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99c66 push eax */
  push32((uint32_t)(EAX));
  /* 12b99c67 call dword ptr [0x12bc1320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1320))), 0x12b99c6du);
  /* 12b99c6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99c70 jne 0x12b99db2 */
  if (!C.zf) goto L_12b99db2;
  /* 12b99c76 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b99c7d jmp 0x12b99c88 */
  goto L_12b99c88;
L_12b99c7f:;
  /* 12b99c7f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99c82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99c85 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12b99c88:;
  /* 12b99c88 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99c8f jae 0x12b99c9d */
  if (!C.cf) goto L_12b99c9d;
  /* 12b99c91 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99c94 mov byte ptr [edx + 0x12bc0d00], 0 */
  w8((uint32_t)(EDX + 0x12bc0d00), (0x0u));
  /* 12b99c9b jmp 0x12b99c7f */
  goto L_12b99c7f;
L_12b99c9d:;
  /* 12b99c9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99ca0 mov dword ptr [0x12bc0b64], eax */
  w32((uint32_t)(0x12bc0b64), (EAX));
  /* 12b99ca5 mov dword ptr [0x12bc0e04], 0 */
  w32((uint32_t)(0x12bc0e04), (0x0u));
  /* 12b99caf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99cb3 jbe 0x12b99d6e */
  if ((C.cf||C.zf)) goto L_12b99d6e;
  /* 12b99cb9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12b99cbc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12b99cbf jmp 0x12b99cca */
  goto L_12b99cca;
L_12b99cc1:;
  /* 12b99cc1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99cc4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99cc7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12b99cca:;
  /* 12b99cca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99ccd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b99ccf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b99cd1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b99cd3 je 0x12b99d1c */
  if (C.zf) goto L_12b99d1c;
  /* 12b99cd5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99cd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99cda mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12b99cdd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b99cdf je 0x12b99d1c */
  if (C.zf) goto L_12b99d1c;
  /* 12b99ce1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99ce4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99ce6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b99ce8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b99ceb jmp 0x12b99cf6 */
  goto L_12b99cf6;
L_12b99ced:;
  /* 12b99ced mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99cf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99cf3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12b99cf6:;
  /* 12b99cf6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b99cf9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99cfb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12b99cfe cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99d01 ja 0x12b99d1a */
  if ((!C.cf&&!C.zf)) goto L_12b99d1a;
  /* 12b99d03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99d06 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b99d0c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12b99d0f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99d12 mov byte ptr [edx + 0x12bc0d01], cl */
  w8((uint32_t)(EDX + 0x12bc0d01), (CL));
  /* 12b99d18 jmp 0x12b99ced */
  goto L_12b99ced;
L_12b99d1a:;
  /* 12b99d1a jmp 0x12b99cc1 */
  goto L_12b99cc1;
L_12b99d1c:;
  /* 12b99d1c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12b99d23 jmp 0x12b99d2e */
  goto L_12b99d2e;
L_12b99d25:;
  /* 12b99d25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99d28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99d2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12b99d2e:;
  /* 12b99d2e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99d35 jae 0x12b99d4e */
  if (!C.cf) goto L_12b99d4e;
  /* 12b99d37 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99d3a mov dl, byte ptr [ecx + 0x12bc0d01] */
  DL = (r8((uint32_t)(ECX + 0x12bc0d01)));
  /* 12b99d40 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12b99d43 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b99d46 mov byte ptr [eax + 0x12bc0d01], dl */
  w8((uint32_t)(EAX + 0x12bc0d01), (DL));
  /* 12b99d4c jmp 0x12b99d25 */
  goto L_12b99d25;
L_12b99d4e:;
  /* 12b99d4e mov ecx, dword ptr [0x12bc0b64] */
  ECX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b99d54 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99d55 call 0x12b99e50 */
  push32(0x12b99d5au); f_12b99e50();
  /* 12b99d5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99d5d mov dword ptr [0x12bc0e04], eax */
  w32((uint32_t)(0x12bc0e04), (EAX));
  /* 12b99d62 mov dword ptr [0x12bc0bec], 1 */
  w32((uint32_t)(0x12bc0bec), (0x1u));
  /* 12b99d6c jmp 0x12b99d78 */
  goto L_12b99d78;
L_12b99d6e:;
  /* 12b99d6e mov dword ptr [0x12bc0bec], 0 */
  w32((uint32_t)(0x12bc0bec), (0x0u));
L_12b99d78:;
  /* 12b99d78 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b99d7f jmp 0x12b99d8a */
  goto L_12b99d8a;
L_12b99d81:;
  /* 12b99d81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99d84 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99d87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12b99d8a:;
  /* 12b99d8a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99d8e jae 0x12b99d9f */
  if (!C.cf) goto L_12b99d9f;
  /* 12b99d90 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b99d93 mov word ptr [eax*2 + 0x12bc0be0], 0 */
  w16((uint32_t)(EAX*2 + 0x12bc0be0), (0x0u));
  /* 12b99d9d jmp 0x12b99d81 */
  goto L_12b99d81;
L_12b99d9f:;
  /* 12b99d9f call 0x12b99f50 */
  push32(0x12b99da4u); f_12b99f50();
  /* 12b99da4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99da6 call 0x12b97470 */
  push32(0x12b99dabu); f_12b97470();
  /* 12b99dab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99dae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99db0 jmp 0x12b99de0 */
  goto L_12b99de0;
L_12b99db2:;
  /* 12b99db2 cmp dword ptr [0x12bbf678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99db9 je 0x12b99dd3 */
  if (C.zf) goto L_12b99dd3;
  /* 12b99dbb call 0x12b99ed0 */
  push32(0x12b99dc0u); f_12b99ed0();
  /* 12b99dc0 call 0x12b99f50 */
  push32(0x12b99dc5u); f_12b99f50();
  /* 12b99dc5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99dc7 call 0x12b97470 */
  push32(0x12b99dccu); f_12b97470();
  /* 12b99dcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99dcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b99dd1 jmp 0x12b99de0 */
  goto L_12b99de0;
L_12b99dd3:;
  /* 12b99dd3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b99dd5 call 0x12b97470 */
  push32(0x12b99ddau); f_12b97470();
  /* 12b99dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99ddd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b99de0:;
  /* 12b99de0 mov esp, ebp */
  ESP = (EBP);
  /* 12b99de2 pop ebp */
  EBP = (pop32());
  /* 12b99de3 ret  */
  ESPCHK(0x12b99aa0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12b99df0 (89 bytes, 21 insns) */
void f_12b99df0(void) {
  FTRACE(0x12b99df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99df0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99df1 mov ebp, esp */
  EBP = (ESP);
  /* 12b99df3 mov dword ptr [0x12bbf678], 0 */
  w32((uint32_t)(0x12bbf678), (0x0u));
  /* 12b99dfd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99e01 jne 0x12b99e15 */
  if (!C.zf) goto L_12b99e15;
  /* 12b99e03 mov dword ptr [0x12bbf678], 1 */
  w32((uint32_t)(0x12bbf678), (0x1u));
  /* 12b99e0d call dword ptr [0x12bc1328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1328))), 0x12b99e13u);
  /* 12b99e13 jmp 0x12b99e47 */
  goto L_12b99e47;
L_12b99e15:;
  /* 12b99e15 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99e19 jne 0x12b99e2d */
  if (!C.zf) goto L_12b99e2d;
  /* 12b99e1b mov dword ptr [0x12bbf678], 1 */
  w32((uint32_t)(0x12bbf678), (0x1u));
  /* 12b99e25 call dword ptr [0x12bc1324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1324))), 0x12b99e2bu);
  /* 12b99e2b jmp 0x12b99e47 */
  goto L_12b99e47;
L_12b99e2d:;
  /* 12b99e2d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99e31 jne 0x12b99e44 */
  if (!C.zf) goto L_12b99e44;
  /* 12b99e33 mov dword ptr [0x12bbf678], 1 */
  w32((uint32_t)(0x12bbf678), (0x1u));
  /* 12b99e3d mov eax, dword ptr [0x12bbf698] */
  EAX = (r32((uint32_t)(0x12bbf698)));
  /* 12b99e42 jmp 0x12b99e47 */
  goto L_12b99e47;
L_12b99e44:;
  /* 12b99e44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12b99e47:;
  /* 12b99e47 pop ebp */
  EBP = (pop32());
  /* 12b99e48 ret  */
  ESPCHK(0x12b99df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e50 @ 0x12b99e50 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12b99e50(void) {
  FTRACE(0x12b99e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99e50 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99e51 mov ebp, esp */
  EBP = (ESP);
  /* 12b99e53 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99e54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b99e57 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b99e5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99e5d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99e63 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b99e66 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99e6a ja 0x12b99e9a */
  if ((!C.cf&&!C.zf)) goto L_12b99e9a;
  /* 12b99e6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99e6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99e71 mov dl, byte ptr [eax + 0x12b99eb4] */
  DL = (r8((uint32_t)(EAX + 0x12b99eb4)));
  /* 12b99e77 jmp dword ptr [edx*4 + 0x12b99ea0] */
  switch (EDX) {
    case 0: goto L_12b99e7e;
    case 1: goto L_12b99e85;
    case 2: goto L_12b99e8c;
    case 3: goto L_12b99e93;
    case 4: goto L_12b99e9a;
    default: x86_unimpl("switch@0x12b99e77 out of table"); return;
  }
L_12b99e7e:;
  /* 12b99e7e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12b99e83 jmp 0x12b99e9c */
  goto L_12b99e9c;
L_12b99e85:;
  /* 12b99e85 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12b99e8a jmp 0x12b99e9c */
  goto L_12b99e9c;
L_12b99e8c:;
  /* 12b99e8c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12b99e91 jmp 0x12b99e9c */
  goto L_12b99e9c;
L_12b99e93:;
  /* 12b99e93 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12b99e98 jmp 0x12b99e9c */
  goto L_12b99e9c;
L_12b99e9a:;
  /* 12b99e9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b99e9c:;
  /* 12b99e9c mov esp, ebp */
  ESP = (EBP);
  /* 12b99e9e pop ebp */
  EBP = (pop32());
  /* 12b99e9f ret  */
  ESPCHK(0x12b99e50u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12b99ed0 (116 bytes, 29 insns) */
void f_12b99ed0(void) {
  FTRACE(0x12b99ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99ed1 mov ebp, esp */
  EBP = (ESP);
  /* 12b99ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b99edb jmp 0x12b99ee6 */
  goto L_12b99ee6;
L_12b99edd:;
  /* 12b99edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99ee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99ee3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b99ee6:;
  /* 12b99ee6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99eed jge 0x12b99efb */
  if ((C.sf==C.of)) goto L_12b99efb;
  /* 12b99eef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99ef2 mov byte ptr [ecx + 0x12bc0d00], 0 */
  w8((uint32_t)(ECX + 0x12bc0d00), (0x0u));
  /* 12b99ef9 jmp 0x12b99edd */
  goto L_12b99edd;
L_12b99efb:;
  /* 12b99efb mov dword ptr [0x12bc0b64], 0 */
  w32((uint32_t)(0x12bc0b64), (0x0u));
  /* 12b99f05 mov dword ptr [0x12bc0bec], 0 */
  w32((uint32_t)(0x12bc0bec), (0x0u));
  /* 12b99f0f mov dword ptr [0x12bc0e04], 0 */
  w32((uint32_t)(0x12bc0e04), (0x0u));
  /* 12b99f19 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b99f20 jmp 0x12b99f2b */
  goto L_12b99f2b;
L_12b99f22:;
  /* 12b99f22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99f25 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99f28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b99f2b:;
  /* 12b99f2b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99f2f jge 0x12b99f40 */
  if ((C.sf==C.of)) goto L_12b99f40;
  /* 12b99f31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99f34 mov word ptr [eax*2 + 0x12bc0be0], 0 */
  w16((uint32_t)(EAX*2 + 0x12bc0be0), (0x0u));
  /* 12b99f3e jmp 0x12b99f22 */
  goto L_12b99f22;
L_12b99f40:;
  /* 12b99f40 mov esp, ebp */
  ESP = (EBP);
  /* 12b99f42 pop ebp */
  EBP = (pop32());
  /* 12b99f43 ret  */
  ESPCHK(0x12b99ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009f50 @ 0x12b99f50 (770 bytes, 175 insns) */
void f_12b99f50(void) {
  FTRACE(0x12b99f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b99f50 push ebp */
  push32((uint32_t)(EBP));
  /* 12b99f51 mov ebp, esp */
  EBP = (ESP);
  /* 12b99f53 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b99f59 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12b99f5f push eax */
  push32((uint32_t)(EAX));
  /* 12b99f60 mov ecx, dword ptr [0x12bc0b64] */
  ECX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b99f66 push ecx */
  push32((uint32_t)(ECX));
  /* 12b99f67 call dword ptr [0x12bc1320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1320))), 0x12b99f6du);
  /* 12b99f6d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99f70 jne 0x12b9a189 */
  if (!C.zf) goto L_12b9a189;
  /* 12b99f76 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12b99f80 jmp 0x12b99f91 */
  goto L_12b99f91;
L_12b99f82:;
  /* 12b99f82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b99f88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99f8b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12b99f91:;
  /* 12b99f91 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b99f9b jae 0x12b99fb2 */
  if (!C.cf) goto L_12b99fb2;
  /* 12b99f9d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b99fa3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12b99fa9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12b99fb0 jmp 0x12b99f82 */
  goto L_12b99f82;
L_12b99fb2:;
  /* 12b99fb2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12b99fb9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12b99fbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b99fc2 jmp 0x12b99fcd */
  goto L_12b99fcd;
L_12b99fc4:;
  /* 12b99fc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99fc7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99fca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b99fcd:;
  /* 12b99fcd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99fd0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b99fd2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b99fd4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b99fd6 je 0x12b9a018 */
  if (C.zf) goto L_12b9a018;
  /* 12b99fd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99fdb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b99fdd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b99fdf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12b99fe5 jmp 0x12b99ff6 */
  goto L_12b99ff6;
L_12b99fe7:;
  /* 12b99fe7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b99fed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b99ff0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12b99ff6:;
  /* 12b99ff6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b99ff9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b99ffb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12b99ffe cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a004 ja 0x12b9a016 */
  if ((!C.cf&&!C.zf)) goto L_12b9a016;
  /* 12b9a006 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a00c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12b9a014 jmp 0x12b99fe7 */
  goto L_12b99fe7;
L_12b9a016:;
  /* 12b9a016 jmp 0x12b99fc4 */
  goto L_12b99fc4;
L_12b9a018:;
  /* 12b9a018 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a01a mov eax, dword ptr [0x12bc0e04] */
  EAX = (r32((uint32_t)(0x12bc0e04)));
  /* 12b9a01f push eax */
  push32((uint32_t)(EAX));
  /* 12b9a020 mov ecx, dword ptr [0x12bc0b64] */
  ECX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b9a026 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a027 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12b9a02d push edx */
  push32((uint32_t)(EDX));
  /* 12b9a02e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a033 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12b9a039 push eax */
  push32((uint32_t)(EAX));
  /* 12b9a03a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9a03c call 0x12b9bc00 */
  push32(0x12b9a041u); f_12b9bc00();
  /* 12b9a041 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a044 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a046 mov ecx, dword ptr [0x12bc0b64] */
  ECX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b9a04c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a04d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a052 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12b9a058 push edx */
  push32((uint32_t)(EDX));
  /* 12b9a059 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a05e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12b9a064 push eax */
  push32((uint32_t)(EAX));
  /* 12b9a065 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a06a mov ecx, dword ptr [0x12bc0e04] */
  ECX = (r32((uint32_t)(0x12bc0e04)));
  /* 12b9a070 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a071 call 0x12b9bdc0 */
  push32(0x12b9a076u); f_12b9bdc0();
  /* 12b9a076 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a079 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a07b mov edx, dword ptr [0x12bc0b64] */
  EDX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b9a081 push edx */
  push32((uint32_t)(EDX));
  /* 12b9a082 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a087 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12b9a08d push eax */
  push32((uint32_t)(EAX));
  /* 12b9a08e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9a093 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12b9a099 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a09a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12b9a09f mov edx, dword ptr [0x12bc0e04] */
  EDX = (r32((uint32_t)(0x12bc0e04)));
  /* 12b9a0a5 push edx */
  push32((uint32_t)(EDX));
  /* 12b9a0a6 call 0x12b9bdc0 */
  push32(0x12b9a0abu); f_12b9bdc0();
  /* 12b9a0ab add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a0ae mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12b9a0b8 jmp 0x12b9a0c9 */
  goto L_12b9a0c9;
L_12b9a0ba:;
  /* 12b9a0ba mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a0c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a0c3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12b9a0c9:;
  /* 12b9a0c9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a0d3 jae 0x12b9a184 */
  if (!C.cf) goto L_12b9a184;
  /* 12b9a0d9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a0df xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a0e1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12b9a0e9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a0ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9a0ee je 0x12b9a126 */
  if (C.zf) goto L_12b9a126;
  /* 12b9a0f0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a0f6 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b9a0fc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12b9a0ff mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a105 mov byte ptr [edx + 0x12bc0d01], cl */
  w8((uint32_t)(EDX + 0x12bc0d01), (CL));
  /* 12b9a10b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a111 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a117 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12b9a11e mov byte ptr [eax + 0x12bc0c00], dl */
  w8((uint32_t)(EAX + 0x12bc0c00), (DL));
  /* 12b9a124 jmp 0x12b9a17f */
  goto L_12b9a17f;
L_12b9a126:;
  /* 12b9a126 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a12c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a12e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12b9a136 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a139 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9a13b je 0x12b9a172 */
  if (C.zf) goto L_12b9a172;
  /* 12b9a13d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a143 mov al, byte ptr [edx + 0x12bc0d01] */
  AL = (r8((uint32_t)(EDX + 0x12bc0d01)));
  /* 12b9a149 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12b9a14b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a151 mov byte ptr [ecx + 0x12bc0d01], al */
  w8((uint32_t)(ECX + 0x12bc0d01), (AL));
  /* 12b9a157 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a15d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a163 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12b9a16a mov byte ptr [edx + 0x12bc0c00], cl */
  w8((uint32_t)(EDX + 0x12bc0c00), (CL));
  /* 12b9a170 jmp 0x12b9a17f */
  goto L_12b9a17f;
L_12b9a172:;
  /* 12b9a172 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a178 mov byte ptr [edx + 0x12bc0c00], 0 */
  w8((uint32_t)(EDX + 0x12bc0c00), (0x0u));
L_12b9a17f:;
  /* 12b9a17f jmp 0x12b9a0ba */
  goto L_12b9a0ba;
L_12b9a184:;
  /* 12b9a184 jmp 0x12b9a24e */
  goto L_12b9a24e;
L_12b9a189:;
  /* 12b9a189 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12b9a193 jmp 0x12b9a1a4 */
  goto L_12b9a1a4;
L_12b9a195:;
  /* 12b9a195 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a19b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a19e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12b9a1a4:;
  /* 12b9a1a4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a1ae jae 0x12b9a24e */
  if (!C.cf) goto L_12b9a24e;
  /* 12b9a1b4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a1bb jb 0x12b9a1f8 */
  if (C.cf) goto L_12b9a1f8;
  /* 12b9a1bd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a1c4 ja 0x12b9a1f8 */
  if ((!C.cf&&!C.zf)) goto L_12b9a1f8;
  /* 12b9a1c6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a1cc mov dl, byte ptr [ecx + 0x12bc0d01] */
  DL = (r8((uint32_t)(ECX + 0x12bc0d01)));
  /* 12b9a1d2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12b9a1d5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a1db mov byte ptr [eax + 0x12bc0d01], dl */
  w8((uint32_t)(EAX + 0x12bc0d01), (DL));
  /* 12b9a1e1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a1e7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a1ea mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a1f0 mov byte ptr [edx + 0x12bc0c00], cl */
  w8((uint32_t)(EDX + 0x12bc0c00), (CL));
  /* 12b9a1f6 jmp 0x12b9a249 */
  goto L_12b9a249;
L_12b9a1f8:;
  /* 12b9a1f8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a1ff jb 0x12b9a23c */
  if (C.cf) goto L_12b9a23c;
  /* 12b9a201 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a208 ja 0x12b9a23c */
  if ((!C.cf&&!C.zf)) goto L_12b9a23c;
  /* 12b9a20a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a210 mov cl, byte ptr [eax + 0x12bc0d01] */
  CL = (r8((uint32_t)(EAX + 0x12bc0d01)));
  /* 12b9a216 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12b9a219 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a21f mov byte ptr [edx + 0x12bc0d01], cl */
  w8((uint32_t)(EDX + 0x12bc0d01), (CL));
  /* 12b9a225 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a22b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a22e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a234 mov byte ptr [ecx + 0x12bc0c00], al */
  w8((uint32_t)(ECX + 0x12bc0c00), (AL));
  /* 12b9a23a jmp 0x12b9a249 */
  goto L_12b9a249;
L_12b9a23c:;
  /* 12b9a23c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12b9a242 mov byte ptr [edx + 0x12bc0c00], 0 */
  w8((uint32_t)(EDX + 0x12bc0c00), (0x0u));
L_12b9a249:;
  /* 12b9a249 jmp 0x12b9a195 */
  goto L_12b9a195;
L_12b9a24e:;
  /* 12b9a24e mov esp, ebp */
  ESP = (EBP);
  /* 12b9a250 pop ebp */
  EBP = (pop32());
  /* 12b9a251 ret  */
  ESPCHK(0x12b99f50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a260 @ 0x12b9a260 (23 bytes, 9 insns) */
void f_12b9a260(void) {
  FTRACE(0x12b9a260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a260 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9a261 mov ebp, esp */
  EBP = (ESP);
  /* 12b9a263 cmp dword ptr [0x12bc0bec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0bec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a26a je 0x12b9a273 */
  if (C.zf) goto L_12b9a273;
  /* 12b9a26c mov eax, dword ptr [0x12bc0b64] */
  EAX = (r32((uint32_t)(0x12bc0b64)));
  /* 12b9a271 jmp 0x12b9a275 */
  goto L_12b9a275;
L_12b9a273:;
  /* 12b9a273 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9a275:;
  /* 12b9a275 pop ebp */
  EBP = (pop32());
  /* 12b9a276 ret  */
  ESPCHK(0x12b9a260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a280 @ 0x12b9a280 (34 bytes, 10 insns) */
void f_12b9a280(void) {
  FTRACE(0x12b9a280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a280 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9a281 mov ebp, esp */
  EBP = (ESP);
  /* 12b9a283 cmp dword ptr [0x12bc0fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a28a jne 0x12b9a2a0 */
  if (!C.zf) goto L_12b9a2a0;
  /* 12b9a28c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12b9a28e call 0x12b99aa0 */
  push32(0x12b9a293u); f_12b99aa0();
  /* 12b9a293 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a296 mov dword ptr [0x12bc0fb0], 1 */
  w32((uint32_t)(0x12bc0fb0), (0x1u));
L_12b9a2a0:;
  /* 12b9a2a0 pop ebp */
  EBP = (pop32());
  /* 12b9a2a1 ret  */
  ESPCHK(0x12b9a280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2b0 @ 0x12b9a2b0 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12b9a2b0(void) {
  FTRACE(0x12b9a2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9a2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9a2b3 push edi */
  push32((uint32_t)(EDI));
  /* 12b9a2b4 push esi */
  push32((uint32_t)(ESI));
  /* 12b9a2b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9a2b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9a2bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a2be mov eax, ecx */
  EAX = (ECX);
  /* 12b9a2c0 mov edx, ecx */
  EDX = (ECX);
  /* 12b9a2c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a2c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a2c6 jbe 0x12b9a2d0 */
  if ((C.cf||C.zf)) goto L_12b9a2d0;
  /* 12b9a2c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a2ca jb 0x12b9a448 */
  if (C.cf) goto L_12b9a448;
L_12b9a2d0:;
  /* 12b9a2d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b9a2d6 jne 0x12b9a2ec */
  if (!C.zf) goto L_12b9a2ec;
  /* 12b9a2d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a2db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a2de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a2e1 jb 0x12b9a30c */
  if (C.cf) goto L_12b9a30c;
  /* 12b9a2e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a2e5 jmp dword ptr [edx*4 + 0x12b9a3f8] */
  switch (EDX) {
    case 0: goto L_12b9a408;
    case 1: goto L_12b9a410;
    case 2: goto L_12b9a41c;
    case 3: goto L_12b9a430;
    default: x86_unimpl("switch@0x12b9a2e5 out of table"); return;
  }
L_12b9a2ec:;
  /* 12b9a2ec mov eax, edi */
  EAX = (EDI);
  /* 12b9a2ee mov edx, 3 */
  EDX = (0x3u);
  /* 12b9a2f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a2f6 jb 0x12b9a304 */
  if (C.cf) goto L_12b9a304;
  /* 12b9a2f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a2fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a2fd jmp dword ptr [eax*4 + 0x12b9a310] */
  switch (EAX) {
    case 1: goto L_12b9a320;
    case 2: goto L_12b9a34c;
    case 3: goto L_12b9a370;
    default: x86_unimpl("switch@0x12b9a2fd out of table"); return;
  }
L_12b9a304:;
  /* 12b9a304 jmp dword ptr [ecx*4 + 0x12b9a408] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12b9a408)))); return;
  /* 12b9a30b nop  */
  /* nop */
L_12b9a30c:;
  /* 12b9a30c jmp dword ptr [ecx*4 + 0x12b9a38c] */
  switch (ECX) {
    case 0: goto L_12b9a3ef;
    case 1: goto L_12b9a3dc;
    case 2: goto L_12b9a3d4;
    case 3: goto L_12b9a3cc;
    case 4: goto L_12b9a3c4;
    case 5: goto L_12b9a3bc;
    case 6: goto L_12b9a3b4;
    case 7: goto L_12b9a3ac;
    default: x86_unimpl("switch@0x12b9a30c out of table"); return;
  }
  /* 12b9a313 nop  */
  /* nop */
L_12b9a320:;
  /* 12b9a320 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a322 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a324 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a326 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a329 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a32c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a32f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a332 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a335 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a338 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a33b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a33e jb 0x12b9a30c */
  if (C.cf) goto L_12b9a30c;
  /* 12b9a340 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a342 jmp dword ptr [edx*4 + 0x12b9a3f8] */
  switch (EDX) {
    case 0: goto L_12b9a408;
    case 1: goto L_12b9a410;
    case 2: goto L_12b9a41c;
    case 3: goto L_12b9a430;
    default: x86_unimpl("switch@0x12b9a342 out of table"); return;
  }
  /* 12b9a349 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a34c:;
  /* 12b9a34c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a34e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a350 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a352 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a355 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a358 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a35b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a35e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a361 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a364 jb 0x12b9a30c */
  if (C.cf) goto L_12b9a30c;
  /* 12b9a366 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a368 jmp dword ptr [edx*4 + 0x12b9a3f8] */
  switch (EDX) {
    case 0: goto L_12b9a408;
    case 1: goto L_12b9a410;
    case 2: goto L_12b9a41c;
    case 3: goto L_12b9a430;
    default: x86_unimpl("switch@0x12b9a368 out of table"); return;
  }
  /* 12b9a36f nop  */
  /* nop */
L_12b9a370:;
  /* 12b9a370 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a372 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a374 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a376 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b9a377 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a37a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b9a37b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a37e jb 0x12b9a30c */
  if (C.cf) goto L_12b9a30c;
  /* 12b9a380 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a382 jmp dword ptr [edx*4 + 0x12b9a3f8] */
  switch (EDX) {
    case 0: goto L_12b9a408;
    case 1: goto L_12b9a410;
    case 2: goto L_12b9a41c;
    case 3: goto L_12b9a430;
    default: x86_unimpl("switch@0x12b9a382 out of table"); return;
  }
  /* 12b9a389 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a3ac:;
  /* 12b9a3ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12b9a3b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12b9a3b4:;
  /* 12b9a3b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12b9a3b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12b9a3bc:;
  /* 12b9a3bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12b9a3c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12b9a3c4:;
  /* 12b9a3c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12b9a3c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12b9a3cc:;
  /* 12b9a3cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12b9a3d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12b9a3d4:;
  /* 12b9a3d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12b9a3d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12b9a3dc:;
  /* 12b9a3dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12b9a3e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12b9a3e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12b9a3eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a3ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12b9a3ef:;
  /* 12b9a3ef jmp dword ptr [edx*4 + 0x12b9a3f8] */
  switch (EDX) {
    case 0: goto L_12b9a408;
    case 1: goto L_12b9a410;
    case 2: goto L_12b9a41c;
    case 3: goto L_12b9a430;
    default: x86_unimpl("switch@0x12b9a3ef out of table"); return;
  }
  /* 12b9a3f6 mov edi, edi */
  EDI = (EDI);
L_12b9a408:;
  /* 12b9a408 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a40b pop esi */
  ESI = (pop32());
  /* 12b9a40c pop edi */
  EDI = (pop32());
  /* 12b9a40d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a40e ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a40f nop  */
  /* nop */
L_12b9a410:;
  /* 12b9a410 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a412 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a417 pop esi */
  ESI = (pop32());
  /* 12b9a418 pop edi */
  EDI = (pop32());
  /* 12b9a419 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a41a ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a41b nop  */
  /* nop */
L_12b9a41c:;
  /* 12b9a41c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a41e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a420 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a423 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a426 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a429 pop esi */
  ESI = (pop32());
  /* 12b9a42a pop edi */
  EDI = (pop32());
  /* 12b9a42b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a42c ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a42d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a430:;
  /* 12b9a430 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9a432 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9a434 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a437 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a43a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a43d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a440 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a443 pop esi */
  ESI = (pop32());
  /* 12b9a444 pop edi */
  EDI = (pop32());
  /* 12b9a445 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a446 ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a447 nop  */
  /* nop */
L_12b9a448:;
  /* 12b9a448 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12b9a44c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12b9a450 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b9a456 jne 0x12b9a47c */
  if (!C.zf) goto L_12b9a47c;
  /* 12b9a458 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a45b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a45e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a461 jb 0x12b9a470 */
  if (C.cf) goto L_12b9a470;
  /* 12b9a463 std  */
  C.df=1;
  /* 12b9a464 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a466 cld  */
  C.df=0;
  /* 12b9a467 jmp dword ptr [edx*4 + 0x12b9a590] */
  switch (EDX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a467 out of table"); return;
  }
  /* 12b9a46e mov edi, edi */
  EDI = (EDI);
L_12b9a470:;
  /* 12b9a470 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9a472 jmp dword ptr [ecx*4 + 0x12b9a540] */
  switch (ECX) {
    case 0: goto L_12b9a587;
    default: x86_unimpl("switch@0x12b9a472 out of table"); return;
  }
  /* 12b9a479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a47c:;
  /* 12b9a47c mov eax, edi */
  EAX = (EDI);
  /* 12b9a47e mov edx, 3 */
  EDX = (0x3u);
  /* 12b9a483 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a486 jb 0x12b9a494 */
  if (C.cf) goto L_12b9a494;
  /* 12b9a488 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a48b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a48d jmp dword ptr [eax*4 + 0x12b9a498] */
  switch (EAX) {
    case 1: goto L_12b9a4a8;
    case 2: goto L_12b9a4c8;
    case 3: goto L_12b9a4f0;
    default: x86_unimpl("switch@0x12b9a48d out of table"); return;
  }
L_12b9a494:;
  /* 12b9a494 jmp dword ptr [ecx*4 + 0x12b9a590] */
  switch (ECX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a494 out of table"); return;
  }
  /* 12b9a49b nop  */
  /* nop */
L_12b9a4a8:;
  /* 12b9a4a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a4ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a4ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a4b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12b9a4b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a4b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12b9a4b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a4b8 jb 0x12b9a470 */
  if (C.cf) goto L_12b9a470;
  /* 12b9a4ba std  */
  C.df=1;
  /* 12b9a4bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a4bd cld  */
  C.df=0;
  /* 12b9a4be jmp dword ptr [edx*4 + 0x12b9a590] */
  switch (EDX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a4be out of table"); return;
  }
  /* 12b9a4c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a4c8:;
  /* 12b9a4c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a4cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a4cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a4d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a4d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a4d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a4d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a4dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a4df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a4e2 jb 0x12b9a470 */
  if (C.cf) goto L_12b9a470;
  /* 12b9a4e4 std  */
  C.df=1;
  /* 12b9a4e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a4e7 cld  */
  C.df=0;
  /* 12b9a4e8 jmp dword ptr [edx*4 + 0x12b9a590] */
  switch (EDX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a4e8 out of table"); return;
  }
  /* 12b9a4ef nop  */
  /* nop */
L_12b9a4f0:;
  /* 12b9a4f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a4f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a4f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a4f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a4fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a4fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a501 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9a504 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a507 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a50a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a50d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a510 jb 0x12b9a470 */
  if (C.cf) goto L_12b9a470;
  /* 12b9a516 std  */
  C.df=1;
  /* 12b9a517 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9a519 cld  */
  C.df=0;
  /* 12b9a51a jmp dword ptr [edx*4 + 0x12b9a590] */
  switch (EDX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a51a out of table"); return;
  }
  /* 12b9a521 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12b9a524 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 12b9a525 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 12b9a526 mov ecx, 0xb9a54c12 */
  ECX = (0xb9a54c12u);
  /* 12b9a52b adc dl, byte ptr [ebp - 0x47] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBP + -0x47))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9a52f adc bl, byte ptr [ebp - 0x47] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EBP + -0x47))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9a533 adc ah, byte ptr [ebp - 0x47] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EBP + -0x47))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9a537 adc ch, byte ptr [ebp - 0x47] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBP + -0x47))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9a53b adc dh, byte ptr [ebp - 0x47] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EBP + -0x47))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9a544 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12b9a548 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12b9a54c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12b9a550 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12b9a554 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12b9a558 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12b9a55c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12b9a560 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12b9a564 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12b9a568 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12b9a56c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12b9a570 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12b9a574 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12b9a578 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12b9a57c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12b9a583 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a585 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12b9a587:;
  /* 12b9a587 jmp dword ptr [edx*4 + 0x12b9a590] */
  switch (EDX) {
    case 0: goto L_12b9a5a0;
    case 1: goto L_12b9a5a8;
    case 2: goto L_12b9a5b8;
    case 3: goto L_12b9a5cc;
    default: x86_unimpl("switch@0x12b9a587 out of table"); return;
  }
  /* 12b9a58e mov edi, edi */
  EDI = (EDI);
L_12b9a5a0:;
  /* 12b9a5a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a5a3 pop esi */
  ESI = (pop32());
  /* 12b9a5a4 pop edi */
  EDI = (pop32());
  /* 12b9a5a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a5a6 ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a5a7 nop  */
  /* nop */
L_12b9a5a8:;
  /* 12b9a5a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a5ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a5ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a5b1 pop esi */
  ESI = (pop32());
  /* 12b9a5b2 pop edi */
  EDI = (pop32());
  /* 12b9a5b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a5b4 ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a5b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9a5b8:;
  /* 12b9a5b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a5bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a5be mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a5c1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a5c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a5c7 pop esi */
  ESI = (pop32());
  /* 12b9a5c8 pop edi */
  EDI = (pop32());
  /* 12b9a5c9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a5ca ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
  /* 12b9a5cb nop  */
  /* nop */
L_12b9a5cc:;
  /* 12b9a5cc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9a5cf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9a5d2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9a5d5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9a5d8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9a5db mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9a5de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a5e1 pop esi */
  ESI = (pop32());
  /* 12b9a5e2 pop edi */
  EDI = (pop32());
  /* 12b9a5e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9a5e4 ret  */
  ESPCHK(0x12b9a2b0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12b9a5f0 (104 bytes, 43 insns) */
void f_12b9a5f0(void) {
  FTRACE(0x12b9a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a5f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9a5f1 push esi */
  push32((uint32_t)(ESI));
  /* 12b9a5f2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12b9a5f6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a5f8 jne 0x12b9a612 */
  if (!C.zf) goto L_12b9a612;
  /* 12b9a5fa mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12b9a5fe mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9a602 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a604 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a606 mov ebx, eax */
  EBX = (EAX);
  /* 12b9a608 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b9a60c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a60e mov edx, ebx */
  EDX = (EBX);
  /* 12b9a610 jmp 0x12b9a653 */
  goto L_12b9a653;
L_12b9a612:;
  /* 12b9a612 mov ecx, eax */
  ECX = (EAX);
  /* 12b9a614 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12b9a618 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9a61c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12b9a620:;
  /* 12b9a620 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12b9a622 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12b9a624 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12b9a626 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12b9a628 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a62a jne 0x12b9a620 */
  if (!C.zf) goto L_12b9a620;
  /* 12b9a62c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a62e mov esi, eax */
  ESI = (EAX);
  /* 12b9a630 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12b9a634 mov ecx, eax */
  ECX = (EAX);
  /* 12b9a636 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12b9a63a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12b9a63c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a63e jb 0x12b9a64e */
  if (C.cf) goto L_12b9a64e;
  /* 12b9a640 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a644 ja 0x12b9a64e */
  if ((!C.cf&&!C.zf)) goto L_12b9a64e;
  /* 12b9a646 jb 0x12b9a64f */
  if (C.cf) goto L_12b9a64f;
  /* 12b9a648 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a64c jbe 0x12b9a64f */
  if ((C.cf||C.zf)) goto L_12b9a64f;
L_12b9a64e:;
  /* 12b9a64e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12b9a64f:;
  /* 12b9a64f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a651 mov eax, esi */
  EAX = (ESI);
L_12b9a653:;
  /* 12b9a653 pop esi */
  ESI = (pop32());
  /* 12b9a654 pop ebx */
  EBX = (pop32());
  /* 12b9a655 ret 0x10 */
  ESPCHK(0x12b9a5f0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12b9a660 (117 bytes, 44 insns) */
void f_12b9a660(void) {
  FTRACE(0x12b9a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a660 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9a661 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12b9a665 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a667 jne 0x12b9a681 */
  if (!C.zf) goto L_12b9a681;
  /* 12b9a669 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9a66d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b9a671 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a673 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a675 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b9a679 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a67b mov eax, edx */
  EAX = (EDX);
  /* 12b9a67d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a67f jmp 0x12b9a6d1 */
  goto L_12b9a6d1;
L_12b9a681:;
  /* 12b9a681 mov ecx, eax */
  ECX = (EAX);
  /* 12b9a683 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9a687 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12b9a68b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12b9a68f:;
  /* 12b9a68f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12b9a691 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12b9a693 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12b9a695 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12b9a697 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a699 jne 0x12b9a68f */
  if (!C.zf) goto L_12b9a68f;
  /* 12b9a69b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9a69d mov ecx, eax */
  ECX = (EAX);
  /* 12b9a69f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12b9a6a3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12b9a6a4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12b9a6a8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a6aa jb 0x12b9a6ba */
  if (C.cf) goto L_12b9a6ba;
  /* 12b9a6ac cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a6b0 ja 0x12b9a6ba */
  if ((!C.cf&&!C.zf)) goto L_12b9a6ba;
  /* 12b9a6b2 jb 0x12b9a6c2 */
  if (C.cf) goto L_12b9a6c2;
  /* 12b9a6b4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a6b8 jbe 0x12b9a6c2 */
  if ((C.cf||C.zf)) goto L_12b9a6c2;
L_12b9a6ba:;
  /* 12b9a6ba sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a6be sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12b9a6c2:;
  /* 12b9a6c2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a6c6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a6ca neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9a6cc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9a6ce sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12b9a6d1:;
  /* 12b9a6d1 pop ebx */
  EBX = (pop32());
  /* 12b9a6d2 ret 0x10 */
  ESPCHK(0x12b9a660u, _esp0);
  ESP += 20; return;
}

/* FUN_1000a6e0 @ 0x12b9a6e0 (628 bytes, 214 insns) */
void f_12b9a6e0(void) {
  FTRACE(0x12b9a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9a6e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a6e6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9a6e7 push esi */
  push32((uint32_t)(ESI));
  /* 12b9a6e8 push edi */
  push32((uint32_t)(EDI));
L_12b9a6e9:;
  /* 12b9a6e9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a6ed jne 0x12b9a70d */
  if (!C.zf) goto L_12b9a70d;
  /* 12b9a6ef push 0x12bbb6b8 */
  push32((uint32_t)(0x12bbb6b8u));
  /* 12b9a6f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a6f6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12b9a6f8 push 0x12bbb6ac */
  push32((uint32_t)(0x12bbb6acu));
  /* 12b9a6fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9a6ff call 0x12b92a90 */
  push32(0x12b9a704u); f_12b92a90();
  /* 12b9a704 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a707 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a70a jne 0x12b9a70d */
  if (!C.zf) goto L_12b9a70d;
  /* 12b9a70c int3  */
  x86_unimpl("int3 @ 0x12b9a70c");
L_12b9a70d:;
  /* 12b9a70d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a711 jne 0x12b9a6e9 */
  if (!C.zf) goto L_12b9a6e9;
  /* 12b9a713 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9a716 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9a719 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a71c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9a71f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b9a722 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a725 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a728 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a72e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9a730 je 0x12b9a73f */
  if (C.zf) goto L_12b9a73f;
  /* 12b9a732 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a735 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9a738 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a73b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9a73d je 0x12b9a755 */
  if (C.zf) goto L_12b9a755;
L_12b9a73f:;
  /* 12b9a73f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a742 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9a745 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12b9a747 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a74a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12b9a74d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a750 jmp 0x12b9a94d */
  goto L_12b9a94d;
L_12b9a755:;
  /* 12b9a755 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a758 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9a75b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a75e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a760 je 0x12b9a7ac */
  if (C.zf) goto L_12b9a7ac;
  /* 12b9a762 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a765 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12b9a76c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a76f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9a772 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a775 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a777 je 0x12b9a795 */
  if (C.zf) goto L_12b9a795;
  /* 12b9a779 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a77c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a77f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9a782 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b9a784 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a787 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a78a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a78d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a790 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12b9a793 jmp 0x12b9a7ac */
  goto L_12b9a7ac;
L_12b9a795:;
  /* 12b9a795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a798 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a79b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a79e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7a1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12b9a7a4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a7a7 jmp 0x12b9a94d */
  goto L_12b9a94d;
L_12b9a7ac:;
  /* 12b9a7ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7af mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a7b2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a7b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7b8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12b9a7bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7be mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a7c1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a7c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7c7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12b9a7ca mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7cd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12b9a7d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9a7db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9a7de mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b9a7e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a7e4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9a7e7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a7ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9a7ef jne 0x12b9a81f */
  if (!C.zf) goto L_12b9a81f;
  /* 12b9a7f1 cmp dword ptr [ebp - 8], 0x12bbe140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12bbe140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a7f8 je 0x12b9a803 */
  if (C.zf) goto L_12b9a803;
  /* 12b9a7fa cmp dword ptr [ebp - 8], 0x12bbe160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12bbe160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a801 jne 0x12b9a813 */
  if (!C.zf) goto L_12b9a813;
L_12b9a803:;
  /* 12b9a803 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a806 push edx */
  push32((uint32_t)(EDX));
  /* 12b9a807 call 0x12b9c650 */
  push32(0x12b9a80cu); f_12b9c650();
  /* 12b9a80c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a80f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a811 jne 0x12b9a81f */
  if (!C.zf) goto L_12b9a81f;
L_12b9a813:;
  /* 12b9a813 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a816 push eax */
  push32((uint32_t)(EAX));
  /* 12b9a817 call 0x12b9c580 */
  push32(0x12b9a81cu); f_12b9c580();
  /* 12b9a81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9a81f:;
  /* 12b9a81f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a822 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9a825 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9a82b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9a82d je 0x12b9a90b */
  if (C.zf) goto L_12b9a90b;
L_12b9a833:;
  /* 12b9a833 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a836 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a839 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12b9a83b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a83e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9a840 jge 0x12b9a863 */
  if ((C.sf==C.of)) goto L_12b9a863;
  /* 12b9a842 push 0x12bbb66c */
  push32((uint32_t)(0x12bbb66cu));
  /* 12b9a847 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a849 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12b9a84e push 0x12bbb6ac */
  push32((uint32_t)(0x12bbb6acu));
  /* 12b9a853 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9a855 call 0x12b92a90 */
  push32(0x12b9a85au); f_12b92a90();
  /* 12b9a85a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a85d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a860 jne 0x12b9a863 */
  if (!C.zf) goto L_12b9a863;
  /* 12b9a862 int3  */
  x86_unimpl("int3 @ 0x12b9a862");
L_12b9a863:;
  /* 12b9a863 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a865 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a867 jne 0x12b9a833 */
  if (!C.zf) goto L_12b9a833;
  /* 12b9a869 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a86c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a86f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12b9a871 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a874 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9a877 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a87a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b9a87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a880 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a883 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9a885 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a888 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b9a88b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a88e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a891 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b9a894 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a898 jle 0x12b9a8b6 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9a8b6;
  /* 12b9a89a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9a89d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a89e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a8a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9a8a4 push eax */
  push32((uint32_t)(EAX));
  /* 12b9a8a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a8a8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a8a9 call 0x12b9c270 */
  push32(0x12b9a8aeu); f_12b9c270();
  /* 12b9a8ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a8b1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9a8b4 jmp 0x12b9a8fe */
  goto L_12b9a8fe;
L_12b9a8b6:;
  /* 12b9a8b6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a8ba je 0x12b9a8d9 */
  if (C.zf) goto L_12b9a8d9;
  /* 12b9a8bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a8bf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12b9a8c2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a8c5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a8c8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9a8cb mov ecx, dword ptr [edx*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9a8d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a8d4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12b9a8d7 jmp 0x12b9a8e0 */
  goto L_12b9a8e0;
L_12b9a8d9:;
  /* 12b9a8d9 mov dword ptr [ebp - 0x14], 0x12bbda60 */
  w32((uint32_t)(EBP + -0x14), (0x12bbda60u));
L_12b9a8e0:;
  /* 12b9a8e0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9a8e3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12b9a8e7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9a8ec je 0x12b9a8fe */
  if (C.zf) goto L_12b9a8fe;
  /* 12b9a8ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9a8f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9a8f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a8f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a8f6 call 0x12b9c120 */
  push32(0x12b9a8fbu); f_12b9c120();
  /* 12b9a8fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9a8fe:;
  /* 12b9a8fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a901 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9a904 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12b9a907 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12b9a909 jmp 0x12b9a929 */
  goto L_12b9a929;
L_12b9a90b:;
  /* 12b9a90b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9a912 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9a915 push edx */
  push32((uint32_t)(EDX));
  /* 12b9a916 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12b9a919 push eax */
  push32((uint32_t)(EAX));
  /* 12b9a91a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9a91d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9a91e call 0x12b9c270 */
  push32(0x12b9a923u); f_12b9c270();
  /* 12b9a923 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a926 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9a929:;
  /* 12b9a929 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9a92c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a92f je 0x12b9a945 */
  if (C.zf) goto L_12b9a945;
  /* 12b9a931 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a934 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9a937 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a93a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9a93d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12b9a940 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9a943 jmp 0x12b9a94d */
  goto L_12b9a94d;
L_12b9a945:;
  /* 12b9a945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9a948 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12b9a94d:;
  /* 12b9a94d pop edi */
  EDI = (pop32());
  /* 12b9a94e pop esi */
  ESI = (pop32());
  /* 12b9a94f pop ebx */
  EBX = (pop32());
  /* 12b9a950 mov esp, ebp */
  ESP = (EBP);
  /* 12b9a952 pop ebp */
  EBP = (pop32());
  /* 12b9a953 ret  */
  ESPCHK(0x12b9a6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a960 @ 0x12b9a960 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12b9a960(void) {
  FTRACE(0x12b9a960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9a960 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9a961 mov ebp, esp */
  EBP = (ESP);
  /* 12b9a963 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9a969 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9a96a push esi */
  push32((uint32_t)(ESI));
  /* 12b9a96b push edi */
  push32((uint32_t)(EDI));
  /* 12b9a96c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b9a973 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12b9a97d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12b9a984:;
  /* 12b9a984 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9a987 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b9a989 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12b9a98c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9a990 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9a993 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9a996 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12b9a999 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9a99b je 0x12b9b577 */
  if (C.zf) goto L_12b9b577;
  /* 12b9a9a1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a9a8 jl 0x12b9b577 */
  if ((C.sf!=C.of)) goto L_12b9b577;
  /* 12b9a9ae movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9a9b2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a9b5 jl 0x12b9a9d6 */
  if ((C.sf!=C.of)) goto L_12b9a9d6;
  /* 12b9a9b7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9a9bb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9a9be jg 0x12b9a9d6 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9a9d6;
  /* 12b9a9c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9a9c4 movsx ecx, byte ptr [eax + 0x12bbb6a4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12bbb6a4))));
  /* 12b9a9cb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9a9ce mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12b9a9d4 jmp 0x12b9a9e0 */
  goto L_12b9a9e0;
L_12b9a9d6:;
  /* 12b9a9d6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12b9a9e0:;
  /* 12b9a9e0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12b9a9e6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b9a9e9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9a9ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9a9ef movsx edx, byte ptr [ecx + eax*8 + 0x12bbb6c4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12bbb6c4))));
  /* 12b9a9f7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12b9a9fa mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b9a9fd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9aa00 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12b9aa06 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9aa0d ja 0x12b9b572 */
  if ((!C.cf&&!C.zf)) goto L_12b9b572;
  /* 12b9aa13 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12b9aa19 jmp dword ptr [ecx*4 + 0x12b9b584] */
  switch (ECX) {
    case 0: goto L_12b9aa20;
    case 1: goto L_12b9aaba;
    case 2: goto L_12b9aafc;
    case 3: goto L_12b9ab6b;
    case 4: goto L_12b9abc3;
    case 5: goto L_12b9abd2;
    case 6: goto L_12b9ac1e;
    case 7: goto L_12b9acb1;
    case 8: goto L_12b9ab48;
    case 9: goto L_12b9ab53;
    case 10: goto L_12b9ab3e;
    case 11: goto L_12b9ab33;
    case 12: goto L_12b9ab5e;
    case 13: goto L_12b9ab66;
    default: x86_unimpl("switch@0x12b9aa19 out of table"); return;
  }
L_12b9aa20:;
  /* 12b9aa20 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12b9aa27 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9aa2a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9aa30 mov eax, dword ptr [0x12bbdc98] */
  EAX = (r32((uint32_t)(0x12bbdc98)));
  /* 12b9aa35 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9aa37 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12b9aa3b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9aa41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9aa43 je 0x12b9aa9d */
  if (C.zf) goto L_12b9aa9d;
  /* 12b9aa45 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12b9aa4b push edx */
  push32((uint32_t)(EDX));
  /* 12b9aa4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9aa4f push eax */
  push32((uint32_t)(EAX));
  /* 12b9aa50 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9aa54 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9aa55 call 0x12b9b690 */
  push32(0x12b9aa5au); f_12b9b690();
  /* 12b9aa5a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9aa5d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9aa60 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9aa62 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12b9aa65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9aa68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9aa6b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12b9aa6e:;
  /* 12b9aa6e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9aa72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9aa74 jne 0x12b9aa97 */
  if (!C.zf) goto L_12b9aa97;
  /* 12b9aa76 push 0x12bbb744 */
  push32((uint32_t)(0x12bbb744u));
  /* 12b9aa7b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9aa7d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12b9aa82 push 0x12bbb738 */
  push32((uint32_t)(0x12bbb738u));
  /* 12b9aa87 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9aa89 call 0x12b92a90 */
  push32(0x12b9aa8eu); f_12b92a90();
  /* 12b9aa8e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9aa91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9aa94 jne 0x12b9aa97 */
  if (!C.zf) goto L_12b9aa97;
  /* 12b9aa96 int3  */
  x86_unimpl("int3 @ 0x12b9aa96");
L_12b9aa97:;
  /* 12b9aa97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9aa99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9aa9b jne 0x12b9aa6e */
  if (!C.zf) goto L_12b9aa6e;
L_12b9aa9d:;
  /* 12b9aa9d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12b9aaa3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9aaa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9aaa7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9aaa8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9aaac push eax */
  push32((uint32_t)(EAX));
  /* 12b9aaad call 0x12b9b690 */
  push32(0x12b9aab2u); f_12b9b690();
  /* 12b9aab2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9aab5 jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9aaba:;
  /* 12b9aaba mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9aac1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9aac4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12b9aaca mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12b9aad0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12b9aad6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12b9aadc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12b9aadf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9aae6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12b9aaf0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12b9aaf7 jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9aafc:;
  /* 12b9aafc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9ab00 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12b9ab06 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12b9ab0c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ab0f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12b9ab15 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ab1c ja 0x12b9ab66 */
  if ((!C.cf&&!C.zf)) goto L_12b9ab66;
  /* 12b9ab1e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12b9ab24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ab26 mov al, byte ptr [ecx + 0x12b9b5bc] */
  AL = (r8((uint32_t)(ECX + 0x12b9b5bc)));
  /* 12b9ab2c jmp dword ptr [eax*4 + 0x12b9b5a4] */
  switch (EAX) {
    case 0: goto L_12b9ab48;
    case 1: goto L_12b9ab53;
    case 2: goto L_12b9ab3e;
    case 3: goto L_12b9ab33;
    case 4: goto L_12b9ab5e;
    case 5: goto L_12b9ab66;
    default: x86_unimpl("switch@0x12b9ab2c out of table"); return;
  }
L_12b9ab33:;
  /* 12b9ab33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab36 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9ab39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9ab3c jmp 0x12b9ab66 */
  goto L_12b9ab66;
L_12b9ab3e:;
  /* 12b9ab3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab41 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12b9ab43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9ab46 jmp 0x12b9ab66 */
  goto L_12b9ab66;
L_12b9ab48:;
  /* 12b9ab48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab4b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9ab4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9ab51 jmp 0x12b9ab66 */
  goto L_12b9ab66;
L_12b9ab53:;
  /* 12b9ab53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab56 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12b9ab59 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9ab5c jmp 0x12b9ab66 */
  goto L_12b9ab66;
L_12b9ab5e:;
  /* 12b9ab5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab61 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12b9ab63 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9ab66:;
  /* 12b9ab66 jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9ab6b:;
  /* 12b9ab6b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9ab6f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ab72 jne 0x12b9aba7 */
  if (!C.zf) goto L_12b9aba7;
  /* 12b9ab74 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12b9ab77 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ab78 call 0x12b9b7a0 */
  push32(0x12b9ab7du); f_12b9b7a0();
  /* 12b9ab7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ab80 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12b9ab86 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ab8d jge 0x12b9aba5 */
  if ((C.sf==C.of)) goto L_12b9aba5;
  /* 12b9ab8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ab92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12b9ab94 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9ab97 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12b9ab9d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9ab9f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12b9aba5:;
  /* 12b9aba5 jmp 0x12b9abbe */
  goto L_12b9abbe;
L_12b9aba7:;
  /* 12b9aba7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12b9abad imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9abb0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9abb4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12b9abb8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12b9abbe:;
  /* 12b9abbe jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9abc3:;
  /* 12b9abc3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12b9abcd jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9abd2:;
  /* 12b9abd2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9abd6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9abd9 jne 0x12b9ac02 */
  if (!C.zf) goto L_12b9ac02;
  /* 12b9abdb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12b9abde push eax */
  push32((uint32_t)(EAX));
  /* 12b9abdf call 0x12b9b7a0 */
  push32(0x12b9abe4u); f_12b9b7a0();
  /* 12b9abe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9abe7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12b9abed cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9abf4 jge 0x12b9ac00 */
  if ((C.sf==C.of)) goto L_12b9ac00;
  /* 12b9abf6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12b9ac00:;
  /* 12b9ac00 jmp 0x12b9ac19 */
  goto L_12b9ac19;
L_12b9ac02:;
  /* 12b9ac02 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12b9ac08 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9ac0b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9ac0f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12b9ac13 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12b9ac19:;
  /* 12b9ac19 jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9ac1e:;
  /* 12b9ac1e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9ac22 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12b9ac28 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12b9ac2e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ac31 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12b9ac37 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ac3e ja 0x12b9acac */
  if ((!C.cf&&!C.zf)) goto L_12b9acac;
  /* 12b9ac40 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12b9ac46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ac48 mov al, byte ptr [ecx + 0x12b9b5e1] */
  AL = (r8((uint32_t)(ECX + 0x12b9b5e1)));
  /* 12b9ac4e jmp dword ptr [eax*4 + 0x12b9b5cd] */
  switch (EAX) {
    case 0: goto L_12b9ac60;
    case 1: goto L_12b9ac99;
    case 2: goto L_12b9ac55;
    case 3: goto L_12b9aca3;
    case 4: goto L_12b9acac;
    default: x86_unimpl("switch@0x12b9ac4e out of table"); return;
  }
L_12b9ac55:;
  /* 12b9ac55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ac58 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9ac5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9ac5e jmp 0x12b9acac */
  goto L_12b9acac;
L_12b9ac60:;
  /* 12b9ac60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ac63 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9ac66 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ac69 jne 0x12b9ac8b */
  if (!C.zf) goto L_12b9ac8b;
  /* 12b9ac6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ac6e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12b9ac72 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ac75 jne 0x12b9ac8b */
  if (!C.zf) goto L_12b9ac8b;
  /* 12b9ac77 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ac7a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ac7d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12b9ac80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ac83 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12b9ac86 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9ac89 jmp 0x12b9ac97 */
  goto L_12b9ac97;
L_12b9ac8b:;
  /* 12b9ac8b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12b9ac92 jmp 0x12b9aa20 */
  goto L_12b9aa20;
L_12b9ac97:;
  /* 12b9ac97 jmp 0x12b9acac */
  goto L_12b9acac;
L_12b9ac99:;
  /* 12b9ac99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ac9c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12b9ac9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9aca1 jmp 0x12b9acac */
  goto L_12b9acac;
L_12b9aca3:;
  /* 12b9aca3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9aca6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12b9aca9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9acac:;
  /* 12b9acac jmp 0x12b9b572 */
  goto L_12b9b572;
L_12b9acb1:;
  /* 12b9acb1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9acb5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12b9acbb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12b9acc1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9acc4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12b9acca cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9acd1 ja 0x12b9b397 */
  if ((!C.cf&&!C.zf)) goto L_12b9b397;
  /* 12b9acd7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12b9acdd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9acdf mov cl, byte ptr [edx + 0x12b9b64c] */
  CL = (r8((uint32_t)(EDX + 0x12b9b64c)));
  /* 12b9ace5 jmp dword ptr [ecx*4 + 0x12b9b610] */
  switch (ECX) {
    case 0: goto L_12b9acec;
    case 1: goto L_12b9af80;
    case 2: goto L_12b9ae10;
    case 3: goto L_12b9b0b9;
    case 4: goto L_12b9ad7b;
    case 5: goto L_12b9ad01;
    case 6: goto L_12b9b08b;
    case 7: goto L_12b9af90;
    case 8: goto L_12b9af35;
    case 9: goto L_12b9b105;
    case 10: goto L_12b9b0af;
    case 11: goto L_12b9ae26;
    case 12: goto L_12b9b0a3;
    case 13: goto L_12b9b0c5;
    case 14: goto L_12b9b397;
    default: x86_unimpl("switch@0x12b9ace5 out of table"); return;
  }
L_12b9acec:;
  /* 12b9acec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9acef and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9acf4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9acf6 jne 0x12b9ad01 */
  if (!C.zf) goto L_12b9ad01;
  /* 12b9acf8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9acfb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12b9acfe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9ad01:;
  /* 12b9ad01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ad04 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9ad0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9ad0c je 0x12b9ad47 */
  if (C.zf) goto L_12b9ad47;
  /* 12b9ad0e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12b9ad11 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ad12 call 0x12b9b7e0 */
  push32(0x12b9ad17u); f_12b9b7e0();
  /* 12b9ad17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ad1a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12b9ad1e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12b9ad22 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ad23 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12b9ad29 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ad2a call 0x12b9c8c0 */
  push32(0x12b9ad2fu); f_12b9c8c0();
  /* 12b9ad2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ad32 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b9ad35 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ad39 jge 0x12b9ad45 */
  if ((C.sf==C.of)) goto L_12b9ad45;
  /* 12b9ad3b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12b9ad45:;
  /* 12b9ad45 jmp 0x12b9ad6d */
  goto L_12b9ad6d;
L_12b9ad47:;
  /* 12b9ad47 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12b9ad4a push eax */
  push32((uint32_t)(EAX));
  /* 12b9ad4b call 0x12b9b7a0 */
  push32(0x12b9ad50u); f_12b9b7a0();
  /* 12b9ad50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ad53 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12b9ad5a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12b9ad60 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12b9ad66 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12b9ad6d:;
  /* 12b9ad6d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12b9ad73 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b9ad76 jmp 0x12b9b397 */
  goto L_12b9b397;
L_12b9ad7b:;
  /* 12b9ad7b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12b9ad7e push eax */
  push32((uint32_t)(EAX));
  /* 12b9ad7f call 0x12b9b7a0 */
  push32(0x12b9ad84u); f_12b9b7a0();
  /* 12b9ad84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ad87 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12b9ad8d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ad94 je 0x12b9ada2 */
  if (C.zf) goto L_12b9ada2;
  /* 12b9ad96 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12b9ad9c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ada0 jne 0x12b9adbc */
  if (!C.zf) goto L_12b9adbc;
L_12b9ada2:;
  /* 12b9ada2 mov edx, dword ptr [0x12bbdfb0] */
  EDX = (r32((uint32_t)(0x12bbdfb0)));
  /* 12b9ada8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b9adab mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9adae push eax */
  push32((uint32_t)(EAX));
  /* 12b9adaf call 0x12b96800 */
  push32(0x12b9adb4u); f_12b96800();
  /* 12b9adb4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9adb7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b9adba jmp 0x12b9ae0b */
  goto L_12b9ae0b;
L_12b9adbc:;
  /* 12b9adbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9adbf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9adc5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9adc7 je 0x12b9adec */
  if (C.zf) goto L_12b9adec;
  /* 12b9adc9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12b9adcf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12b9add2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9add5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12b9addb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12b9adde shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12b9ade0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b9ade3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12b9adea jmp 0x12b9ae0b */
  goto L_12b9ae0b;
L_12b9adec:;
  /* 12b9adec mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12b9adf3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12b9adf9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9adfc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12b9adff mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12b9ae05 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12b9ae08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12b9ae0b:;
  /* 12b9ae0b jmp 0x12b9b397 */
  goto L_12b9b397;
L_12b9ae10:;
  /* 12b9ae10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ae13 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9ae19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9ae1b jne 0x12b9ae26 */
  if (!C.zf) goto L_12b9ae26;
  /* 12b9ae1d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ae20 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12b9ae23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9ae26:;
  /* 12b9ae26 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ae2d jne 0x12b9ae3b */
  if (!C.zf) goto L_12b9ae3b;
  /* 12b9ae2f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12b9ae39 jmp 0x12b9ae47 */
  goto L_12b9ae47;
L_12b9ae3b:;
  /* 12b9ae3b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12b9ae41 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12b9ae47:;
  /* 12b9ae47 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12b9ae4d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12b9ae53 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12b9ae56 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ae57 call 0x12b9b7a0 */
  push32(0x12b9ae5cu); f_12b9b7a0();
  /* 12b9ae5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ae5f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9ae62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ae65 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ae6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ae6c je 0x12b9aed6 */
  if (C.zf) goto L_12b9aed6;
  /* 12b9ae6e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ae72 jne 0x12b9ae7d */
  if (!C.zf) goto L_12b9ae7d;
  /* 12b9ae74 mov ecx, dword ptr [0x12bbdfb4] */
  ECX = (r32((uint32_t)(0x12bbdfb4)));
  /* 12b9ae7a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12b9ae7d:;
  /* 12b9ae7d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12b9ae84 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9ae87 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12b9ae8d:;
  /* 12b9ae8d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12b9ae93 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12b9ae99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ae9c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12b9aea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9aea4 je 0x12b9aec6 */
  if (C.zf) goto L_12b9aec6;
  /* 12b9aea6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12b9aeac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9aeae mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12b9aeb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9aeb3 je 0x12b9aec6 */
  if (C.zf) goto L_12b9aec6;
  /* 12b9aeb5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12b9aebb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9aebe mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12b9aec4 jmp 0x12b9ae8d */
  goto L_12b9ae8d;
L_12b9aec6:;
  /* 12b9aec6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12b9aecc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9aecf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12b9aed1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12b9aed4 jmp 0x12b9af30 */
  goto L_12b9af30;
L_12b9aed6:;
  /* 12b9aed6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9aeda jne 0x12b9aee4 */
  if (!C.zf) goto L_12b9aee4;
  /* 12b9aedc mov eax, dword ptr [0x12bbdfb0] */
  EAX = (r32((uint32_t)(0x12bbdfb0)));
  /* 12b9aee1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12b9aee4:;
  /* 12b9aee4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9aee7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12b9aeed:;
  /* 12b9aeed mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12b9aef3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12b9aef9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9aefc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12b9af02 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9af04 je 0x12b9af24 */
  if (C.zf) goto L_12b9af24;
  /* 12b9af06 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12b9af0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9af0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9af11 je 0x12b9af24 */
  if (C.zf) goto L_12b9af24;
  /* 12b9af13 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12b9af19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9af1c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12b9af22 jmp 0x12b9aeed */
  goto L_12b9aeed;
L_12b9af24:;
  /* 12b9af24 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12b9af2a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9af2d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12b9af30:;
  /* 12b9af30 jmp 0x12b9b397 */
  goto L_12b9b397;
L_12b9af35:;
  /* 12b9af35 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12b9af38 push edx */
  push32((uint32_t)(EDX));
  /* 12b9af39 call 0x12b9b7a0 */
  push32(0x12b9af3eu); f_12b9b7a0();
  /* 12b9af3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9af41 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12b9af47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9af4a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9af4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9af4f je 0x12b9af63 */
  if (C.zf) goto L_12b9af63;
  /* 12b9af51 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12b9af57 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12b9af5e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12b9af61 jmp 0x12b9af71 */
  goto L_12b9af71;
L_12b9af63:;
  /* 12b9af63 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12b9af69 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12b9af6f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12b9af71:;
  /* 12b9af71 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12b9af7b jmp 0x12b9b397 */
  goto L_12b9b397;
L_12b9af80:;
  /* 12b9af80 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12b9af87 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12b9af8a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9af8d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12b9af90:;
  /* 12b9af90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9af93 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12b9af95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9af98 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12b9af9e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12b9afa1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9afa8 jge 0x12b9afb6 */
  if ((C.sf==C.of)) goto L_12b9afb6;
  /* 12b9afaa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12b9afb4 jmp 0x12b9afd2 */
  goto L_12b9afd2;
L_12b9afb6:;
  /* 12b9afb6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9afbd jne 0x12b9afd2 */
  if (!C.zf) goto L_12b9afd2;
  /* 12b9afbf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9afc3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9afc6 jne 0x12b9afd2 */
  if (!C.zf) goto L_12b9afd2;
  /* 12b9afc8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12b9afd2:;
  /* 12b9afd2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9afd5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9afd8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12b9afdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9afde sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9afe1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9afe3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9afe6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12b9afec mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12b9aff2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9aff5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9aff6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12b9affc push edx */
  push32((uint32_t)(EDX));
  /* 12b9affd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9b001 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b002 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b005 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b006 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12b9b00c push edx */
  push32((uint32_t)(EDX));
  /* 12b9b00d call dword ptr [0x12bbe3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbe3a0))), 0x12b9b013u);
  /* 12b9b013 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b016 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b019 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b01e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b020 je 0x12b9b038 */
  if (C.zf) goto L_12b9b038;
  /* 12b9b022 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b029 jne 0x12b9b038 */
  if (!C.zf) goto L_12b9b038;
  /* 12b9b02b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b02e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b02f call dword ptr [0x12bbe3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbe3ac))), 0x12b9b035u);
  /* 12b9b035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b038:;
  /* 12b9b038 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12b9b03c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b03f jne 0x12b9b05a */
  if (!C.zf) goto L_12b9b05a;
  /* 12b9b041 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b044 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b04b jne 0x12b9b05a */
  if (!C.zf) goto L_12b9b05a;
  /* 12b9b04d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b050 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b051 call dword ptr [0x12bbe3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbe3a4))), 0x12b9b057u);
  /* 12b9b057 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b05a:;
  /* 12b9b05a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b05d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9b060 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b063 jne 0x12b9b077 */
  if (!C.zf) goto L_12b9b077;
  /* 12b9b065 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b068 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12b9b06b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9b06e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b071 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b074 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12b9b077:;
  /* 12b9b077 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b07a push eax */
  push32((uint32_t)(EAX));
  /* 12b9b07b call 0x12b96800 */
  push32(0x12b9b080u); f_12b96800();
  /* 12b9b080 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b083 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b9b086 jmp 0x12b9b397 */
  goto L_12b9b397;
L_12b9b08b:;
  /* 12b9b08b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b08e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b091 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9b094 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12b9b09e jmp 0x12b9b125 */
  goto L_12b9b125;
L_12b9b0a3:;
  /* 12b9b0a3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12b9b0ad jmp 0x12b9b125 */
  goto L_12b9b125;
L_12b9b0af:;
  /* 12b9b0af mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12b9b0b9:;
  /* 12b9b0b9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12b9b0c3 jmp 0x12b9b0cf */
  goto L_12b9b0cf;
L_12b9b0c5:;
  /* 12b9b0c5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12b9b0cf:;
  /* 12b9b0cf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12b9b0d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b0dc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b0e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b0e4 je 0x12b9b103 */
  if (C.zf) goto L_12b9b103;
  /* 12b9b0e6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12b9b0ed mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12b9b0f3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b0f6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12b9b0fc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12b9b103:;
  /* 12b9b103 jmp 0x12b9b125 */
  goto L_12b9b125;
L_12b9b105:;
  /* 12b9b105 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12b9b10f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b112 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b118 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9b11a je 0x12b9b125 */
  if (C.zf) goto L_12b9b125;
  /* 12b9b11c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b11f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12b9b122 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9b125:;
  /* 12b9b125 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b128 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b12d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b12f je 0x12b9b14e */
  if (C.zf) goto L_12b9b14e;
  /* 12b9b131 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12b9b134 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b135 call 0x12b9b7c0 */
  push32(0x12b9b13au); f_12b9b7c0();
  /* 12b9b13a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b13d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12b9b143 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12b9b149 jmp 0x12b9b1df */
  goto L_12b9b1df;
L_12b9b14e:;
  /* 12b9b14e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b151 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b154 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b156 je 0x12b9b1a0 */
  if (C.zf) goto L_12b9b1a0;
  /* 12b9b158 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b15b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b15e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b160 je 0x12b9b180 */
  if (C.zf) goto L_12b9b180;
  /* 12b9b162 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12b9b165 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b166 call 0x12b9b7a0 */
  push32(0x12b9b16bu); f_12b9b7a0();
  /* 12b9b16b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b16e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12b9b171 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9b172 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12b9b178 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12b9b17e jmp 0x12b9b19e */
  goto L_12b9b19e;
L_12b9b180:;
  /* 12b9b180 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12b9b183 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b184 call 0x12b9b7a0 */
  push32(0x12b9b189u); f_12b9b7a0();
  /* 12b9b189 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b18c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b191 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9b192 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12b9b198 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12b9b19e:;
  /* 12b9b19e jmp 0x12b9b1df */
  goto L_12b9b1df;
L_12b9b1a0:;
  /* 12b9b1a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b1a3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b1a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b1a8 je 0x12b9b1c5 */
  if (C.zf) goto L_12b9b1c5;
  /* 12b9b1aa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12b9b1ad push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b1ae call 0x12b9b7a0 */
  push32(0x12b9b1b3u); f_12b9b7a0();
  /* 12b9b1b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b1b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9b1b7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12b9b1bd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12b9b1c3 jmp 0x12b9b1df */
  goto L_12b9b1df;
L_12b9b1c5:;
  /* 12b9b1c5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12b9b1c8 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b1c9 call 0x12b9b7a0 */
  push32(0x12b9b1ceu); f_12b9b7a0();
  /* 12b9b1ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b1d1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b1d3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12b9b1d9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12b9b1df:;
  /* 12b9b1df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b1e2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b1e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b1e7 je 0x12b9b227 */
  if (C.zf) goto L_12b9b227;
  /* 12b9b1e9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b1f0 jg 0x12b9b227 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9b227;
  /* 12b9b1f2 jl 0x12b9b1fd */
  if ((C.sf!=C.of)) goto L_12b9b1fd;
  /* 12b9b1f4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b1fb jae 0x12b9b227 */
  if (!C.cf) goto L_12b9b227;
L_12b9b1fd:;
  /* 12b9b1fd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12b9b203 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9b205 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12b9b20b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b20e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9b210 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12b9b216 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12b9b21c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b21f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12b9b222 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9b225 jmp 0x12b9b23f */
  goto L_12b9b23f;
L_12b9b227:;
  /* 12b9b227 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12b9b22d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12b9b233 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12b9b239 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12b9b23f:;
  /* 12b9b23f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b242 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b248 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b24a jne 0x12b9b267 */
  if (!C.zf) goto L_12b9b267;
  /* 12b9b24c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12b9b252 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12b9b258 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b25b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12b9b261 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12b9b267:;
  /* 12b9b267 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b26e jge 0x12b9b27c */
  if ((C.sf==C.of)) goto L_12b9b27c;
  /* 12b9b270 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12b9b27a jmp 0x12b9b285 */
  goto L_12b9b285;
L_12b9b27c:;
  /* 12b9b27c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b27f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b282 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9b285:;
  /* 12b9b285 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12b9b28b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b291 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b293 jne 0x12b9b29c */
  if (!C.zf) goto L_12b9b29c;
  /* 12b9b295 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12b9b29c:;
  /* 12b9b29c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12b9b29f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12b9b2a2:;
  /* 12b9b2a2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12b9b2a8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12b9b2ae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b2b1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12b9b2b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b2b9 jg 0x12b9b2cf */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9b2cf;
  /* 12b9b2bb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12b9b2c1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b2c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9b2c9 je 0x12b9b350 */
  if (C.zf) goto L_12b9b350;
L_12b9b2cf:;
  /* 12b9b2cf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12b9b2d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9b2d6 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b2d7 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b2d8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12b9b2de push edx */
  push32((uint32_t)(EDX));
  /* 12b9b2df mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12b9b2e5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b2e6 call 0x12b9a660 */
  push32(0x12b9b2ebu); f_12b9a660();
  /* 12b9b2eb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b2ee mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12b9b2f4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12b9b2fa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9b2fb push edx */
  push32((uint32_t)(EDX));
  /* 12b9b2fc push eax */
  push32((uint32_t)(EAX));
  /* 12b9b2fd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12b9b303 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b304 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12b9b30a push edx */
  push32((uint32_t)(EDX));
  /* 12b9b30b call 0x12b9a5f0 */
  push32(0x12b9b310u); f_12b9a5f0();
  /* 12b9b310 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12b9b316 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12b9b31c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b323 jle 0x12b9b337 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9b337;
  /* 12b9b325 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12b9b32b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b331 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12b9b337:;
  /* 12b9b337 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b33a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12b9b340 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12b9b342 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b345 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b348 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9b34b jmp 0x12b9b2a2 */
  goto L_12b9b2a2;
L_12b9b350:;
  /* 12b9b350 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12b9b353 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b356 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b9b359 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b35c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b35f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b9b362 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b365 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b36a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b36c je 0x12b9b397 */
  if (C.zf) goto L_12b9b397;
  /* 12b9b36e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b371 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9b374 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b377 jne 0x12b9b37f */
  if (!C.zf) goto L_12b9b37f;
  /* 12b9b379 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b37d jne 0x12b9b397 */
  if (!C.zf) goto L_12b9b397;
L_12b9b37f:;
  /* 12b9b37f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b382 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b385 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9b388 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b38b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12b9b38e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9b391 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b394 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12b9b397:;
  /* 12b9b397 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b39e jne 0x12b9b572 */
  if (!C.zf) goto L_12b9b572;
  /* 12b9b3a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b3a7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b3aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b3ac je 0x12b9b3fd */
  if (C.zf) goto L_12b9b3fd;
  /* 12b9b3ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b3b1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b3b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9b3b9 je 0x12b9b3cb */
  if (C.zf) goto L_12b9b3cb;
  /* 12b9b3bb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12b9b3c2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12b9b3c9 jmp 0x12b9b3fd */
  goto L_12b9b3fd;
L_12b9b3cb:;
  /* 12b9b3cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b3ce and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b3d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b3d3 je 0x12b9b3e5 */
  if (C.zf) goto L_12b9b3e5;
  /* 12b9b3d5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12b9b3dc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12b9b3e3 jmp 0x12b9b3fd */
  goto L_12b9b3fd;
L_12b9b3e5:;
  /* 12b9b3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b3e8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b3ed je 0x12b9b3fd */
  if (C.zf) goto L_12b9b3fd;
  /* 12b9b3ef mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12b9b3f6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12b9b3fd:;
  /* 12b9b3fd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12b9b403 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b406 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b409 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12b9b40f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b412 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b415 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b417 jne 0x12b9b435 */
  if (!C.zf) goto L_12b9b435;
  /* 12b9b419 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b41f push eax */
  push32((uint32_t)(EAX));
  /* 12b9b420 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b423 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b424 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12b9b42a push edx */
  push32((uint32_t)(EDX));
  /* 12b9b42b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12b9b42d call 0x12b9b710 */
  push32(0x12b9b432u); f_12b9b710();
  /* 12b9b432 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b435:;
  /* 12b9b435 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b43b push eax */
  push32((uint32_t)(EAX));
  /* 12b9b43c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b43f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b440 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9b443 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b444 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12b9b44a push eax */
  push32((uint32_t)(EAX));
  /* 12b9b44b call 0x12b9b750 */
  push32(0x12b9b450u); f_12b9b750();
  /* 12b9b450 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b456 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b459 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9b45b je 0x12b9b483 */
  if (C.zf) goto L_12b9b483;
  /* 12b9b45d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b460 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b463 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b465 jne 0x12b9b483 */
  if (!C.zf) goto L_12b9b483;
  /* 12b9b467 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b46d push eax */
  push32((uint32_t)(EAX));
  /* 12b9b46e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b471 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b472 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12b9b478 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b479 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12b9b47b call 0x12b9b710 */
  push32(0x12b9b480u); f_12b9b710();
  /* 12b9b480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b483:;
  /* 12b9b483 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b487 je 0x12b9b531 */
  if (C.zf) goto L_12b9b531;
  /* 12b9b48d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b491 jle 0x12b9b531 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9b531;
  /* 12b9b497 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b49a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12b9b4a0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9b4a3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12b9b4a9:;
  /* 12b9b4a9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12b9b4af mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12b9b4b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b4b8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12b9b4be test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b4c0 je 0x12b9b52f */
  if (C.zf) goto L_12b9b52f;
  /* 12b9b4c2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12b9b4c8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12b9b4cb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12b9b4d2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12b9b4d9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b4da lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12b9b4e0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b4e1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12b9b4e7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b4ea mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12b9b4f0 call 0x12b9c8c0 */
  push32(0x12b9b4f5u); f_12b9c8c0();
  /* 12b9b4f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b4f8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12b9b4fe cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b505 jg 0x12b9b509 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9b509;
  /* 12b9b507 jmp 0x12b9b52f */
  goto L_12b9b52f;
L_12b9b509:;
  /* 12b9b509 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b50f push eax */
  push32((uint32_t)(EAX));
  /* 12b9b510 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b513 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b514 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12b9b51a push edx */
  push32((uint32_t)(EDX));
  /* 12b9b51b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12b9b521 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b522 call 0x12b9b750 */
  push32(0x12b9b527u); f_12b9b750();
  /* 12b9b527 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b52a jmp 0x12b9b4a9 */
  goto L_12b9b4a9;
L_12b9b52f:;
  /* 12b9b52f jmp 0x12b9b54c */
  goto L_12b9b54c;
L_12b9b531:;
  /* 12b9b531 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b537 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b538 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b53b push edx */
  push32((uint32_t)(EDX));
  /* 12b9b53c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9b53f push eax */
  push32((uint32_t)(EAX));
  /* 12b9b540 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9b543 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b544 call 0x12b9b750 */
  push32(0x12b9b549u); f_12b9b750();
  /* 12b9b549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b54c:;
  /* 12b9b54c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b54f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b552 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9b554 je 0x12b9b572 */
  if (C.zf) goto L_12b9b572;
  /* 12b9b556 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12b9b55c push eax */
  push32((uint32_t)(EAX));
  /* 12b9b55d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b560 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b561 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12b9b567 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b568 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12b9b56a call 0x12b9b710 */
  push32(0x12b9b56fu); f_12b9b710();
  /* 12b9b56f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9b572:;
  /* 12b9b572 jmp 0x12b9a984 */
  goto L_12b9a984;
L_12b9b577:;
  /* 12b9b577 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12b9b57d pop edi */
  EDI = (pop32());
  /* 12b9b57e pop esi */
  ESI = (pop32());
  /* 12b9b57f pop ebx */
  EBX = (pop32());
  /* 12b9b580 mov esp, ebp */
  ESP = (EBP);
  /* 12b9b582 pop ebp */
  EBP = (pop32());
  /* 12b9b583 ret  */
  ESPCHK(0x12b9a960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b690 @ 0x12b9b690 (119 bytes, 44 insns) */
void f_12b9b690(void) {
  FTRACE(0x12b9b690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b690 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b691 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b693 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b697 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9b69a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b69d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6a0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12b9b6a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6a6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b6aa jl 0x12b9b6d2 */
  if ((C.sf!=C.of)) goto L_12b9b6d2;
  /* 12b9b6ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9b6b1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12b9b6b4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12b9b6b6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12b9b6ba and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9b6c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9b6c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6c6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b9b6c8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b6cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6ce mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b9b6d0 jmp 0x12b9b6e5 */
  goto L_12b9b6e5;
L_12b9b6d2:;
  /* 12b9b6d2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b6d5 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b6d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b6d9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b6da call 0x12b9a6e0 */
  push32(0x12b9b6dfu); f_12b9a6e0();
  /* 12b9b6df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b6e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9b6e5:;
  /* 12b9b6e5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b6e9 jne 0x12b9b6f6 */
  if (!C.zf) goto L_12b9b6f6;
  /* 12b9b6eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b6ee mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12b9b6f4 jmp 0x12b9b703 */
  goto L_12b9b703;
L_12b9b6f6:;
  /* 12b9b6f6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b6f9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b9b6fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b6fe mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b701 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12b9b703:;
  /* 12b9b703 mov esp, ebp */
  ESP = (EBP);
  /* 12b9b705 pop ebp */
  EBP = (pop32());
  /* 12b9b706 ret  */
  ESPCHK(0x12b9b690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b710 @ 0x12b9b710 (53 bytes, 23 insns) */
void f_12b9b710(void) {
  FTRACE(0x12b9b710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b710 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b711 mov ebp, esp */
  EBP = (ESP);
L_12b9b713:;
  /* 12b9b713 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b716 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b719 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b71c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12b9b71f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b721 jle 0x12b9b743 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9b743;
  /* 12b9b723 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9b726 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b727 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b72a push eax */
  push32((uint32_t)(EAX));
  /* 12b9b72b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b72e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b72f call 0x12b9b690 */
  push32(0x12b9b734u); f_12b9b690();
  /* 12b9b734 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b737 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9b73a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b73d jne 0x12b9b741 */
  if (!C.zf) goto L_12b9b741;
  /* 12b9b73f jmp 0x12b9b743 */
  goto L_12b9b743;
L_12b9b741:;
  /* 12b9b741 jmp 0x12b9b713 */
  goto L_12b9b713;
L_12b9b743:;
  /* 12b9b743 pop ebp */
  EBP = (pop32());
  /* 12b9b744 ret  */
  ESPCHK(0x12b9b710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x12b9b750 (74 bytes, 31 insns) */
void f_12b9b750(void) {
  FTRACE(0x12b9b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b750 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b751 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b753 push ecx */
  push32((uint32_t)(ECX));
L_12b9b754:;
  /* 12b9b754 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b757 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b75a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b75d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12b9b760 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9b762 jle 0x12b9b796 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9b796;
  /* 12b9b764 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9b767 push edx */
  push32((uint32_t)(EDX));
  /* 12b9b768 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b76b push eax */
  push32((uint32_t)(EAX));
  /* 12b9b76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b76f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9b772 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9b775 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b778 push eax */
  push32((uint32_t)(EAX));
  /* 12b9b779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b77c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b77f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12b9b782 call 0x12b9b690 */
  push32(0x12b9b787u); f_12b9b690();
  /* 12b9b787 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b78a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9b78d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b790 jne 0x12b9b794 */
  if (!C.zf) goto L_12b9b794;
  /* 12b9b792 jmp 0x12b9b796 */
  goto L_12b9b796;
L_12b9b794:;
  /* 12b9b794 jmp 0x12b9b754 */
  goto L_12b9b754;
L_12b9b796:;
  /* 12b9b796 mov esp, ebp */
  ESP = (EBP);
  /* 12b9b798 pop ebp */
  EBP = (pop32());
  /* 12b9b799 ret  */
  ESPCHK(0x12b9b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x12b9b7a0 (26 bytes, 12 insns) */
void f_12b9b7a0(void) {
  FTRACE(0x12b9b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b7a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7a8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b7ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b9b7b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7b5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b9b7b8 pop ebp */
  EBP = (pop32());
  /* 12b9b7b9 ret  */
  ESPCHK(0x12b9b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c0 @ 0x12b9b7c0 (31 bytes, 14 insns) */
void f_12b9b7c0(void) {
  FTRACE(0x12b9b7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b7c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7c8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b7cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b9b7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7d5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b7d8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12b9b7da mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9b7dd pop ebp */
  EBP = (pop32());
  /* 12b9b7de ret  */
  ESPCHK(0x12b9b7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x12b9b7e0 (27 bytes, 12 insns) */
void f_12b9b7e0(void) {
  FTRACE(0x12b9b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b7e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7e6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7e8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b7eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7ee mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12b9b7f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b7f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9b7f5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12b9b7f9 pop ebp */
  EBP = (pop32());
  /* 12b9b7fa ret  */
  ESPCHK(0x12b9b7e0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12b9b800 (145 bytes, 42 insns) */
void f_12b9b800(void) {
  FTRACE(0x12b9b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b800 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b801 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b803 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9b804 call 0x12b9b8b0 */
  push32(0x12b9b809u); f_12b9b8b0();
  /* 12b9b809 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b80c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b9b80e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9b815 jmp 0x12b9b820 */
  goto L_12b9b820;
L_12b9b817:;
  /* 12b9b817 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b81a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b81d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9b820:;
  /* 12b9b820 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b824 jae 0x12b9b84a */
  if (!C.cf) goto L_12b9b84a;
  /* 12b9b826 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b829 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b82c cmp ecx, dword ptr [eax*8 + 0x12bbdfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12bbdfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b833 jne 0x12b9b848 */
  if (!C.zf) goto L_12b9b848;
  /* 12b9b835 call 0x12b9b8a0 */
  push32(0x12b9b83au); f_12b9b8a0();
  /* 12b9b83a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9b83d mov ecx, dword ptr [edx*8 + 0x12bbdfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12bbdfbc)));
  /* 12b9b844 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b9b846 jmp 0x12b9b88d */
  goto L_12b9b88d;
L_12b9b848:;
  /* 12b9b848 jmp 0x12b9b817 */
  goto L_12b9b817;
L_12b9b84a:;
  /* 12b9b84a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b84e jb 0x12b9b863 */
  if (C.cf) goto L_12b9b863;
  /* 12b9b850 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b854 ja 0x12b9b863 */
  if ((!C.cf&&!C.zf)) goto L_12b9b863;
  /* 12b9b856 call 0x12b9b8a0 */
  push32(0x12b9b85bu); f_12b9b8a0();
  /* 12b9b85b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12b9b861 jmp 0x12b9b88d */
  goto L_12b9b88d;
L_12b9b863:;
  /* 12b9b863 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b86a jb 0x12b9b882 */
  if (C.cf) goto L_12b9b882;
  /* 12b9b86c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b873 ja 0x12b9b882 */
  if ((!C.cf&&!C.zf)) goto L_12b9b882;
  /* 12b9b875 call 0x12b9b8a0 */
  push32(0x12b9b87au); f_12b9b8a0();
  /* 12b9b87a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12b9b880 jmp 0x12b9b88d */
  goto L_12b9b88d;
L_12b9b882:;
  /* 12b9b882 call 0x12b9b8a0 */
  push32(0x12b9b887u); f_12b9b8a0();
  /* 12b9b887 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12b9b88d:;
  /* 12b9b88d mov esp, ebp */
  ESP = (EBP);
  /* 12b9b88f pop ebp */
  EBP = (pop32());
  /* 12b9b890 ret  */
  ESPCHK(0x12b9b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8a0 @ 0x12b9b8a0 (13 bytes, 6 insns) */
void f_12b9b8a0(void) {
  FTRACE(0x12b9b8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b8a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b8a3 call 0x12b93410 */
  push32(0x12b9b8a8u); f_12b93410();
  /* 12b9b8a8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b8ab pop ebp */
  EBP = (pop32());
  /* 12b9b8ac ret  */
  ESPCHK(0x12b9b8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x12b9b8b0 (13 bytes, 6 insns) */
void f_12b9b8b0(void) {
  FTRACE(0x12b9b8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b8b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b8b3 call 0x12b93410 */
  push32(0x12b9b8b8u); f_12b93410();
  /* 12b9b8b8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b8bb pop ebp */
  EBP = (pop32());
  /* 12b9b8bc ret  */
  ESPCHK(0x12b9b8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x12b9b8c0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_12b9b8c0(void) {
  FTRACE(0x12b9b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9b8c3 push edi */
  push32((uint32_t)(EDI));
  /* 12b9b8c4 push esi */
  push32((uint32_t)(ESI));
  /* 12b9b8c5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9b8c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9b8cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9b8ce mov eax, ecx */
  EAX = (ECX);
  /* 12b9b8d0 mov edx, ecx */
  EDX = (ECX);
  /* 12b9b8d2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b8d4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b8d6 jbe 0x12b9b8e0 */
  if ((C.cf||C.zf)) goto L_12b9b8e0;
  /* 12b9b8d8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b8da jb 0x12b9ba58 */
  if (C.cf) goto L_12b9ba58;
L_12b9b8e0:;
  /* 12b9b8e0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b9b8e6 jne 0x12b9b8fc */
  if (!C.zf) goto L_12b9b8fc;
  /* 12b9b8e8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9b8eb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b8ee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b8f1 jb 0x12b9b91c */
  if (C.cf) goto L_12b9b91c;
  /* 12b9b8f3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9b8f5 jmp dword ptr [edx*4 + 0x12b9ba08] */
  switch (EDX) {
    case 0: goto L_12b9ba18;
    case 1: goto L_12b9ba20;
    case 2: goto L_12b9ba2c;
    case 3: goto L_12b9ba40;
    default: x86_unimpl("switch@0x12b9b8f5 out of table"); return;
  }
L_12b9b8fc:;
  /* 12b9b8fc mov eax, edi */
  EAX = (EDI);
  /* 12b9b8fe mov edx, 3 */
  EDX = (0x3u);
  /* 12b9b903 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9b906 jb 0x12b9b914 */
  if (C.cf) goto L_12b9b914;
  /* 12b9b908 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9b90b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b90d jmp dword ptr [eax*4 + 0x12b9b920] */
  switch (EAX) {
    case 1: goto L_12b9b930;
    case 2: goto L_12b9b95c;
    case 3: goto L_12b9b980;
    default: x86_unimpl("switch@0x12b9b90d out of table"); return;
  }
L_12b9b914:;
  /* 12b9b914 jmp dword ptr [ecx*4 + 0x12b9ba18] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12b9ba18)))); return;
  /* 12b9b91b nop  */
  /* nop */
L_12b9b91c:;
  /* 12b9b91c jmp dword ptr [ecx*4 + 0x12b9b99c] */
  switch (ECX) {
    case 0: goto L_12b9b9ff;
    case 1: goto L_12b9b9ec;
    case 2: goto L_12b9b9e4;
    case 3: goto L_12b9b9dc;
    case 4: goto L_12b9b9d4;
    case 5: goto L_12b9b9cc;
    case 6: goto L_12b9b9c4;
    case 7: goto L_12b9b9bc;
    default: x86_unimpl("switch@0x12b9b91c out of table"); return;
  }
  /* 12b9b923 nop  */
  /* nop */
L_12b9b930:;
  /* 12b9b930 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b932 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9b934 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9b936 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9b939 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9b93c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9b93f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9b942 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9b945 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b948 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b94b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b94e jb 0x12b9b91c */
  if (C.cf) goto L_12b9b91c;
  /* 12b9b950 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9b952 jmp dword ptr [edx*4 + 0x12b9ba08] */
  switch (EDX) {
    case 0: goto L_12b9ba18;
    case 1: goto L_12b9ba20;
    case 2: goto L_12b9ba2c;
    case 3: goto L_12b9ba40;
    default: x86_unimpl("switch@0x12b9b952 out of table"); return;
  }
  /* 12b9b959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9b95c:;
  /* 12b9b95c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b95e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9b960 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9b962 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9b965 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9b968 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9b96b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b96e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b971 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b974 jb 0x12b9b91c */
  if (C.cf) goto L_12b9b91c;
  /* 12b9b976 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9b978 jmp dword ptr [edx*4 + 0x12b9ba08] */
  switch (EDX) {
    case 0: goto L_12b9ba18;
    case 1: goto L_12b9ba20;
    case 2: goto L_12b9ba2c;
    case 3: goto L_12b9ba40;
    default: x86_unimpl("switch@0x12b9b978 out of table"); return;
  }
  /* 12b9b97f nop  */
  /* nop */
L_12b9b980:;
  /* 12b9b980 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9b982 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9b984 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9b986 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b9b987 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9b98a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12b9b98b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9b98e jb 0x12b9b91c */
  if (C.cf) goto L_12b9b91c;
  /* 12b9b990 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9b992 jmp dword ptr [edx*4 + 0x12b9ba08] */
  switch (EDX) {
    case 0: goto L_12b9ba18;
    case 1: goto L_12b9ba20;
    case 2: goto L_12b9ba2c;
    case 3: goto L_12b9ba40;
    default: x86_unimpl("switch@0x12b9b992 out of table"); return;
  }
  /* 12b9b999 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9b9bc:;
  /* 12b9b9bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12b9b9c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12b9b9c4:;
  /* 12b9b9c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12b9b9c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12b9b9cc:;
  /* 12b9b9cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12b9b9d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12b9b9d4:;
  /* 12b9b9d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12b9b9d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12b9b9dc:;
  /* 12b9b9dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12b9b9e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12b9b9e4:;
  /* 12b9b9e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12b9b9e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12b9b9ec:;
  /* 12b9b9ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12b9b9f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12b9b9f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12b9b9fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9b9fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12b9b9ff:;
  /* 12b9b9ff jmp dword ptr [edx*4 + 0x12b9ba08] */
  switch (EDX) {
    case 0: goto L_12b9ba18;
    case 1: goto L_12b9ba20;
    case 2: goto L_12b9ba2c;
    case 3: goto L_12b9ba40;
    default: x86_unimpl("switch@0x12b9b9ff out of table"); return;
  }
  /* 12b9ba06 mov edi, edi */
  EDI = (EDI);
L_12b9ba18:;
  /* 12b9ba18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ba1b pop esi */
  ESI = (pop32());
  /* 12b9ba1c pop edi */
  EDI = (pop32());
  /* 12b9ba1d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9ba1e ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9ba1f nop  */
  /* nop */
L_12b9ba20:;
  /* 12b9ba20 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9ba22 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9ba24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ba27 pop esi */
  ESI = (pop32());
  /* 12b9ba28 pop edi */
  EDI = (pop32());
  /* 12b9ba29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9ba2a ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9ba2b nop  */
  /* nop */
L_12b9ba2c:;
  /* 12b9ba2c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9ba2e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9ba30 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9ba33 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9ba36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ba39 pop esi */
  ESI = (pop32());
  /* 12b9ba3a pop edi */
  EDI = (pop32());
  /* 12b9ba3b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9ba3c ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9ba3d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9ba40:;
  /* 12b9ba40 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9ba42 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12b9ba44 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9ba47 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9ba4a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9ba4d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9ba50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ba53 pop esi */
  ESI = (pop32());
  /* 12b9ba54 pop edi */
  EDI = (pop32());
  /* 12b9ba55 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9ba56 ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9ba57 nop  */
  /* nop */
L_12b9ba58:;
  /* 12b9ba58 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12b9ba5c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12b9ba60 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12b9ba66 jne 0x12b9ba8c */
  if (!C.zf) goto L_12b9ba8c;
  /* 12b9ba68 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9ba6b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9ba6e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ba71 jb 0x12b9ba80 */
  if (C.cf) goto L_12b9ba80;
  /* 12b9ba73 std  */
  C.df=1;
  /* 12b9ba74 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9ba76 cld  */
  C.df=0;
  /* 12b9ba77 jmp dword ptr [edx*4 + 0x12b9bba0] */
  switch (EDX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9ba77 out of table"); return;
  }
  /* 12b9ba7e mov edi, edi */
  EDI = (EDI);
L_12b9ba80:;
  /* 12b9ba80 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9ba82 jmp dword ptr [ecx*4 + 0x12b9bb50] */
  switch (ECX) {
    case 0: goto L_12b9bb97;
    default: x86_unimpl("switch@0x12b9ba82 out of table"); return;
  }
  /* 12b9ba89 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9ba8c:;
  /* 12b9ba8c mov eax, edi */
  EAX = (EDI);
  /* 12b9ba8e mov edx, 3 */
  EDX = (0x3u);
  /* 12b9ba93 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ba96 jb 0x12b9baa4 */
  if (C.cf) goto L_12b9baa4;
  /* 12b9ba98 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ba9b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ba9d jmp dword ptr [eax*4 + 0x12b9baa8] */
  switch (EAX) {
    case 1: goto L_12b9bab8;
    case 2: goto L_12b9bad8;
    case 3: goto L_12b9bb00;
    default: x86_unimpl("switch@0x12b9ba9d out of table"); return;
  }
L_12b9baa4:;
  /* 12b9baa4 jmp dword ptr [ecx*4 + 0x12b9bba0] */
  switch (ECX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9baa4 out of table"); return;
  }
  /* 12b9baab nop  */
  /* nop */
L_12b9bab8:;
  /* 12b9bab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9babb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9babd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bac0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12b9bac1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9bac4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12b9bac5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bac8 jb 0x12b9ba80 */
  if (C.cf) goto L_12b9ba80;
  /* 12b9baca std  */
  C.df=1;
  /* 12b9bacb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9bacd cld  */
  C.df=0;
  /* 12b9bace jmp dword ptr [edx*4 + 0x12b9bba0] */
  switch (EDX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9bace out of table"); return;
  }
  /* 12b9bad5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9bad8:;
  /* 12b9bad8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9badb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9badd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bae0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9bae3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9bae6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9bae9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9baec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9baef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9baf2 jb 0x12b9ba80 */
  if (C.cf) goto L_12b9ba80;
  /* 12b9baf4 std  */
  C.df=1;
  /* 12b9baf5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9baf7 cld  */
  C.df=0;
  /* 12b9baf8 jmp dword ptr [edx*4 + 0x12b9bba0] */
  switch (EDX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9baf8 out of table"); return;
  }
  /* 12b9baff nop  */
  /* nop */
L_12b9bb00:;
  /* 12b9bb00 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9bb03 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9bb05 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bb08 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9bb0b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9bb0e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9bb11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12b9bb14 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9bb17 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9bb1a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9bb1d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bb20 jb 0x12b9ba80 */
  if (C.cf) goto L_12b9ba80;
  /* 12b9bb26 std  */
  C.df=1;
  /* 12b9bb27 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12b9bb29 cld  */
  C.df=0;
  /* 12b9bb2a jmp dword ptr [edx*4 + 0x12b9bba0] */
  switch (EDX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9bb2a out of table"); return;
  }
  /* 12b9bb31 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12b9bb34 push esp */
  push32((uint32_t)(ESP));
  /* 12b9bb35 mov ebx, 0xbb5c12b9 */
  EBX = (0xbb5c12b9u);
  /* 12b9bb3a mov ecx, 0xb9bb6412 */
  ECX = (0xb9bb6412u);
  /* 12b9bb3f adc ch, byte ptr [ebx + edi*4 - 0x47] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX + EDI*4 + -0x47))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9bb43 adc dh, byte ptr [ebx + edi*4 - 0x47] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EBX + EDI*4 + -0x47))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9bb47 adc bh, byte ptr [ebx + edi*4 - 0x47] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + EDI*4 + -0x47))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12b9bb54 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12b9bb58 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12b9bb5c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12b9bb60 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12b9bb64 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12b9bb68 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12b9bb6c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12b9bb70 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12b9bb74 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12b9bb78 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12b9bb7c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12b9bb80 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12b9bb84 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12b9bb88 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12b9bb8c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12b9bb93 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bb95 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12b9bb97:;
  /* 12b9bb97 jmp dword ptr [edx*4 + 0x12b9bba0] */
  switch (EDX) {
    case 0: goto L_12b9bbb0;
    case 1: goto L_12b9bbb8;
    case 2: goto L_12b9bbc8;
    case 3: goto L_12b9bbdc;
    default: x86_unimpl("switch@0x12b9bb97 out of table"); return;
  }
  /* 12b9bb9e mov edi, edi */
  EDI = (EDI);
L_12b9bbb0:;
  /* 12b9bbb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bbb3 pop esi */
  ESI = (pop32());
  /* 12b9bbb4 pop edi */
  EDI = (pop32());
  /* 12b9bbb5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9bbb6 ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9bbb7 nop  */
  /* nop */
L_12b9bbb8:;
  /* 12b9bbb8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9bbbb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bbbe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bbc1 pop esi */
  ESI = (pop32());
  /* 12b9bbc2 pop edi */
  EDI = (pop32());
  /* 12b9bbc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9bbc4 ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9bbc5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9bbc8:;
  /* 12b9bbc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9bbcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bbce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9bbd1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9bbd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bbd7 pop esi */
  ESI = (pop32());
  /* 12b9bbd8 pop edi */
  EDI = (pop32());
  /* 12b9bbd9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9bbda ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
  /* 12b9bbdb nop  */
  /* nop */
L_12b9bbdc:;
  /* 12b9bbdc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12b9bbdf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12b9bbe2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12b9bbe5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12b9bbe8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12b9bbeb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12b9bbee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bbf1 pop esi */
  ESI = (pop32());
  /* 12b9bbf2 pop edi */
  EDI = (pop32());
  /* 12b9bbf3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9bbf4 ret  */
  ESPCHK(0x12b9b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc00 @ 0x12b9bc00 (421 bytes, 148 insns) */
void f_12b9bc00(void) {
  FTRACE(0x12b9bc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9bc00 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9bc01 mov ebp, esp */
  EBP = (ESP);
  /* 12b9bc03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12b9bc05 push 0x12bbb760 */
  push32((uint32_t)(0x12bbb760u));
  /* 12b9bc0a push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12b9bc0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12b9bc15 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bc16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12b9bc1d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bc20 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9bc21 push esi */
  push32((uint32_t)(ESI));
  /* 12b9bc22 push edi */
  push32((uint32_t)(EDI));
  /* 12b9bc23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12b9bc26 cmp dword ptr [0x12bbf67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bc2d jne 0x12b9bc7e */
  if (!C.zf) goto L_12b9bc7e;
  /* 12b9bc2f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12b9bc32 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bc33 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bc35 push 0x12bbb758 */
  push32((uint32_t)(0x12bbb758u));
  /* 12b9bc3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bc3c call dword ptr [0x12bc1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1330))), 0x12b9bc42u);
  /* 12b9bc42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9bc44 je 0x12b9bc52 */
  if (C.zf) goto L_12b9bc52;
  /* 12b9bc46 mov dword ptr [0x12bbf67c], 1 */
  w32((uint32_t)(0x12bbf67c), (0x1u));
  /* 12b9bc50 jmp 0x12b9bc7e */
  goto L_12b9bc7e;
L_12b9bc52:;
  /* 12b9bc52 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12b9bc55 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bc56 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bc58 push 0x12bbb754 */
  push32((uint32_t)(0x12bbb754u));
  /* 12b9bc5d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bc5f push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bc61 call dword ptr [0x12bc1314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1314))), 0x12b9bc67u);
  /* 12b9bc67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9bc69 je 0x12b9bc77 */
  if (C.zf) goto L_12b9bc77;
  /* 12b9bc6b mov dword ptr [0x12bbf67c], 2 */
  w32((uint32_t)(0x12bbf67c), (0x2u));
  /* 12b9bc75 jmp 0x12b9bc7e */
  goto L_12b9bc7e;
L_12b9bc77:;
  /* 12b9bc77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bc79 jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bc7e:;
  /* 12b9bc7e cmp dword ptr [0x12bbf67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bc85 jne 0x12b9bcb5 */
  if (!C.zf) goto L_12b9bcb5;
  /* 12b9bc87 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bc8b jne 0x12b9bc96 */
  if (!C.zf) goto L_12b9bc96;
  /* 12b9bc8d mov edx, dword ptr [0x12bbf688] */
  EDX = (r32((uint32_t)(0x12bbf688)));
  /* 12b9bc93 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12b9bc96:;
  /* 12b9bc96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9bc99 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bc9a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9bc9d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bc9e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bca1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bca5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bca6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12b9bca9 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bcaa call dword ptr [0x12bc1314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1314))), 0x12b9bcb0u);
  /* 12b9bcb0 jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bcb5:;
  /* 12b9bcb5 cmp dword ptr [0x12bbf67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bcbc jne 0x12b9bda6 */
  if (!C.zf) goto L_12b9bda6;
  /* 12b9bcc2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bcc6 jne 0x12b9bcd1 */
  if (!C.zf) goto L_12b9bcd1;
  /* 12b9bcc8 mov edx, dword ptr [0x12bbf698] */
  EDX = (r32((uint32_t)(0x12bbf698)));
  /* 12b9bcce mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12b9bcd1:;
  /* 12b9bcd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bcd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bcd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9bcd8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bcd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bcdc push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bcdd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12b9bce0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9bce2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9bce4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9bce7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bcea push edx */
  push32((uint32_t)(EDX));
  /* 12b9bceb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9bcee push eax */
  push32((uint32_t)(EAX));
  /* 12b9bcef call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12b9bcf5u);
  /* 12b9bcf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9bcf8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bcfc jne 0x12b9bd05 */
  if (!C.zf) goto L_12b9bd05;
  /* 12b9bcfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bd00 jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bd05:;
  /* 12b9bd05 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9bd0c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9bd0f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b9bd11 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bd14 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12b9bd16 call 0x12b96b70 */
  push32(0x12b9bd1bu); f_12b96b70();
  /* 12b9bd1b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12b9bd1e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12b9bd21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9bd24 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b9bd27 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9bd2a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12b9bd2c push edx */
  push32((uint32_t)(EDX));
  /* 12b9bd2d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bd2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bd32 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bd33 call 0x12b97740 */
  push32(0x12b9bd38u); f_12b97740();
  /* 12b9bd38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bd3b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12b9bd42 jmp 0x12b9bd5b */
  goto L_12b9bd5b;
  /* 12b9bd44 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9bd49 ret  */
  ESPCHK(0x12b9bc00u, _esp0);
  ESP += 4; return;
  /* 12b9bd4a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9bd4d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b9bd54 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9bd5b:;
  /* 12b9bd5b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bd5f jne 0x12b9bd65 */
  if (!C.zf) goto L_12b9bd65;
  /* 12b9bd61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bd63 jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bd65:;
  /* 12b9bd65 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9bd68 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bd69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bd6c push edx */
  push32((uint32_t)(EDX));
  /* 12b9bd6d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9bd70 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bd71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bd74 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bd75 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bd77 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9bd7a push edx */
  push32((uint32_t)(EDX));
  /* 12b9bd7b call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12b9bd81u);
  /* 12b9bd81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b9bd84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bd88 jne 0x12b9bd8e */
  if (!C.zf) goto L_12b9bd8e;
  /* 12b9bd8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bd8c jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bd8e:;
  /* 12b9bd8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9bd91 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bd92 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9bd95 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bd96 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bd99 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bd9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bd9d push eax */
  push32((uint32_t)(EAX));
  /* 12b9bd9e call dword ptr [0x12bc1330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1330))), 0x12b9bda4u);
  /* 12b9bda4 jmp 0x12b9bda8 */
  goto L_12b9bda8;
L_12b9bda6:;
  /* 12b9bda6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9bda8:;
  /* 12b9bda8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12b9bdab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9bdae mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12b9bdb5 pop edi */
  EDI = (pop32());
  /* 12b9bdb6 pop esi */
  ESI = (pop32());
  /* 12b9bdb7 pop ebx */
  EBX = (pop32());
  /* 12b9bdb8 mov esp, ebp */
  ESP = (EBP);
  /* 12b9bdba pop ebp */
  EBP = (pop32());
  /* 12b9bdbb ret  */
  ESPCHK(0x12b9bc00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdc0 @ 0x12b9bdc0 (727 bytes, 263 insns) */
void f_12b9bdc0(void) {
  FTRACE(0x12b9bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9bdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9bdc1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9bdc3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12b9bdc5 push 0x12bbb770 */
  push32((uint32_t)(0x12bbb770u));
  /* 12b9bdca push 0x12b9cad8 */
  push32((uint32_t)(0x12b9cad8u));
  /* 12b9bdcf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12b9bdd5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bdd6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12b9bddd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bde0 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9bde1 push esi */
  push32((uint32_t)(ESI));
  /* 12b9bde2 push edi */
  push32((uint32_t)(EDI));
  /* 12b9bde3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12b9bde6 cmp dword ptr [0x12bbf6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bded jne 0x12b9be46 */
  if (!C.zf) goto L_12b9be46;
  /* 12b9bdef push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bdf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bdf3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bdf5 push 0x12bbb758 */
  push32((uint32_t)(0x12bbb758u));
  /* 12b9bdfa push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9bdff push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9be01 call dword ptr [0x12bc1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1338))), 0x12b9be07u);
  /* 12b9be07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9be09 je 0x12b9be17 */
  if (C.zf) goto L_12b9be17;
  /* 12b9be0b mov dword ptr [0x12bbf6a0], 1 */
  w32((uint32_t)(0x12bbf6a0), (0x1u));
  /* 12b9be15 jmp 0x12b9be46 */
  goto L_12b9be46;
L_12b9be17:;
  /* 12b9be17 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9be19 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9be1b push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9be1d push 0x12bbb754 */
  push32((uint32_t)(0x12bbb754u));
  /* 12b9be22 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9be27 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9be29 call dword ptr [0x12bc1334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1334))), 0x12b9be2fu);
  /* 12b9be2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9be31 je 0x12b9be3f */
  if (C.zf) goto L_12b9be3f;
  /* 12b9be33 mov dword ptr [0x12bbf6a0], 2 */
  w32((uint32_t)(0x12bbf6a0), (0x2u));
  /* 12b9be3d jmp 0x12b9be46 */
  goto L_12b9be46;
L_12b9be3f:;
  /* 12b9be3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9be41 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9be46:;
  /* 12b9be46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9be4a jle 0x12b9be5f */
  if ((C.zf||C.sf!=C.of)) goto L_12b9be5f;
  /* 12b9be4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9be4f push eax */
  push32((uint32_t)(EAX));
  /* 12b9be50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9be53 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9be54 call 0x12b9c0d0 */
  push32(0x12b9be59u); f_12b9c0d0();
  /* 12b9be59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9be5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12b9be5f:;
  /* 12b9be5f cmp dword ptr [0x12bbf6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9be66 jne 0x12b9be8b */
  if (!C.zf) goto L_12b9be8b;
  /* 12b9be68 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12b9be6b push edx */
  push32((uint32_t)(EDX));
  /* 12b9be6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9be6f push eax */
  push32((uint32_t)(EAX));
  /* 12b9be70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9be73 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9be74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9be77 push edx */
  push32((uint32_t)(EDX));
  /* 12b9be78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9be7b push eax */
  push32((uint32_t)(EAX));
  /* 12b9be7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9be7f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9be80 call dword ptr [0x12bc1334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1334))), 0x12b9be86u);
  /* 12b9be86 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9be8b:;
  /* 12b9be8b cmp dword ptr [0x12bbf6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9be92 jne 0x12b9c0af */
  if (!C.zf) goto L_12b9c0af;
  /* 12b9be98 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9be9c jne 0x12b9bea7 */
  if (!C.zf) goto L_12b9bea7;
  /* 12b9be9e mov edx, dword ptr [0x12bbf698] */
  EDX = (r32((uint32_t)(0x12bbf698)));
  /* 12b9bea4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12b9bea7:;
  /* 12b9bea7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bea9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9beab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9beae push eax */
  push32((uint32_t)(EAX));
  /* 12b9beaf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9beb2 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9beb3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12b9beb6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9beb8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9beba and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9bebd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bec0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bec1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12b9bec4 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bec5 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12b9becbu);
  /* 12b9becb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12b9bece cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bed2 jne 0x12b9bedb */
  if (!C.zf) goto L_12b9bedb;
  /* 12b9bed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bed6 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bedb:;
  /* 12b9bedb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9bee2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9bee5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b9bee7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9beea and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12b9beec call 0x12b96b70 */
  push32(0x12b9bef1u); f_12b96b70();
  /* 12b9bef1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12b9bef4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12b9bef7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9befa mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b9befd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12b9bf04 jmp 0x12b9bf1d */
  goto L_12b9bf1d;
  /* 12b9bf06 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9bf0b ret  */
  ESPCHK(0x12b9bdc0u, _esp0);
  ESP += 4; return;
  /* 12b9bf0c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9bf0f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12b9bf16 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9bf1d:;
  /* 12b9bf1d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bf21 jne 0x12b9bf2a */
  if (!C.zf) goto L_12b9bf2a;
  /* 12b9bf23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bf25 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bf2a:;
  /* 12b9bf2a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9bf2d push edx */
  push32((uint32_t)(EDX));
  /* 12b9bf2e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bf31 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bf32 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9bf35 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bf36 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9bf39 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bf3a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9bf3c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12b9bf3f push eax */
  push32((uint32_t)(EAX));
  /* 12b9bf40 call dword ptr [0x12bc132c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc132c))), 0x12b9bf46u);
  /* 12b9bf46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9bf48 jne 0x12b9bf51 */
  if (!C.zf) goto L_12b9bf51;
  /* 12b9bf4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bf4c jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bf51:;
  /* 12b9bf51 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bf53 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9bf55 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9bf58 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bf59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bf5c push edx */
  push32((uint32_t)(EDX));
  /* 12b9bf5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bf60 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bf61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bf64 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bf65 call dword ptr [0x12bc1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1338))), 0x12b9bf6bu);
  /* 12b9bf6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b9bf6e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bf72 jne 0x12b9bf7b */
  if (!C.zf) goto L_12b9bf7b;
  /* 12b9bf74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bf76 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bf7b:;
  /* 12b9bf7b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bf7e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9bf84 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9bf86 je 0x12b9bfcb */
  if (C.zf) goto L_12b9bfcb;
  /* 12b9bf88 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bf8c je 0x12b9bfc6 */
  if (C.zf) goto L_12b9bfc6;
  /* 12b9bf8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9bf91 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9bf94 jle 0x12b9bf9d */
  if ((C.zf||C.sf!=C.of)) goto L_12b9bf9d;
  /* 12b9bf96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bf98 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bf9d:;
  /* 12b9bf9d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12b9bfa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bfa1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9bfa4 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bfa5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9bfa8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bfa9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9bfac push ecx */
  push32((uint32_t)(ECX));
  /* 12b9bfad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9bfb0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9bfb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9bfb4 push eax */
  push32((uint32_t)(EAX));
  /* 12b9bfb5 call dword ptr [0x12bc1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1338))), 0x12b9bfbbu);
  /* 12b9bfbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9bfbd jne 0x12b9bfc6 */
  if (!C.zf) goto L_12b9bfc6;
  /* 12b9bfbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9bfc1 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9bfc6:;
  /* 12b9bfc6 jmp 0x12b9c0aa */
  goto L_12b9c0aa;
L_12b9bfcb:;
  /* 12b9bfcb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9bfce mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12b9bfd1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9bfd8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9bfdb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b9bfdd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9bfe0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12b9bfe2 call 0x12b96b70 */
  push32(0x12b9bfe7u); f_12b96b70();
  /* 12b9bfe7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12b9bfea mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12b9bfed mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12b9bff0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12b9bff3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12b9bffa jmp 0x12b9c013 */
  goto L_12b9c013;
  /* 12b9bffc mov eax, 1 */
  EAX = (0x1u);
  /* 12b9c001 ret  */
  ESPCHK(0x12b9bdc0u, _esp0);
  ESP += 4; return;
  /* 12b9c002 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9c005 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12b9c00c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9c013:;
  /* 12b9c013 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c017 jne 0x12b9c020 */
  if (!C.zf) goto L_12b9c020;
  /* 12b9c019 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c01b jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9c020:;
  /* 12b9c020 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9c023 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c024 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9c027 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c028 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9c02b push edx */
  push32((uint32_t)(EDX));
  /* 12b9c02c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9c02f push eax */
  push32((uint32_t)(EAX));
  /* 12b9c030 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c033 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c034 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c037 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c038 call dword ptr [0x12bc1338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1338))), 0x12b9c03eu);
  /* 12b9c03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c040 jne 0x12b9c046 */
  if (!C.zf) goto L_12b9c046;
  /* 12b9c042 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c044 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9c046:;
  /* 12b9c046 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c04a jne 0x12b9c07a */
  if (!C.zf) goto L_12b9c07a;
  /* 12b9c04c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c04e push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c050 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c052 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c054 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9c057 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c058 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9c05b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c05c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12b9c061 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12b9c064 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c065 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12b9c06bu);
  /* 12b9c06b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b9c06e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c072 jne 0x12b9c078 */
  if (!C.zf) goto L_12b9c078;
  /* 12b9c074 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c076 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9c078:;
  /* 12b9c078 jmp 0x12b9c0aa */
  goto L_12b9c0aa;
L_12b9c07a:;
  /* 12b9c07a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c07c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c07e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12b9c081 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c082 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12b9c085 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c086 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9c089 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c08a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9c08d push eax */
  push32((uint32_t)(EAX));
  /* 12b9c08e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12b9c093 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12b9c096 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c097 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12b9c09du);
  /* 12b9c09d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b9c0a0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c0a4 jne 0x12b9c0aa */
  if (!C.zf) goto L_12b9c0aa;
  /* 12b9c0a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c0a8 jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9c0aa:;
  /* 12b9c0aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9c0ad jmp 0x12b9c0b1 */
  goto L_12b9c0b1;
L_12b9c0af:;
  /* 12b9c0af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9c0b1:;
  /* 12b9c0b1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12b9c0b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9c0b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12b9c0be pop edi */
  EDI = (pop32());
  /* 12b9c0bf pop esi */
  ESI = (pop32());
  /* 12b9c0c0 pop ebx */
  EBX = (pop32());
  /* 12b9c0c1 mov esp, ebp */
  ESP = (EBP);
  /* 12b9c0c3 pop ebp */
  EBP = (pop32());
  /* 12b9c0c4 ret  */
  ESPCHK(0x12b9bdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x12b9c0d0 (80 bytes, 32 insns) */
void f_12b9c0d0(void) {
  FTRACE(0x12b9c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c0d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c0d6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c0d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9c0dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c0df mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9c0e2:;
  /* 12b9c0e2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c0e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c0e8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c0eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9c0ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9c0f0 je 0x12b9c107 */
  if (C.zf) goto L_12b9c107;
  /* 12b9c0f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c0f5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9c0f8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9c0fa je 0x12b9c107 */
  if (C.zf) goto L_12b9c107;
  /* 12b9c0fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c0ff add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c102 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c105 jmp 0x12b9c0e2 */
  goto L_12b9c0e2;
L_12b9c107:;
  /* 12b9c107 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c10a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9c10d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9c10f jne 0x12b9c119 */
  if (!C.zf) goto L_12b9c119;
  /* 12b9c111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c114 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c117 jmp 0x12b9c11c */
  goto L_12b9c11c;
L_12b9c119:;
  /* 12b9c119 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12b9c11c:;
  /* 12b9c11c mov esp, ebp */
  ESP = (EBP);
  /* 12b9c11e pop ebp */
  EBP = (pop32());
  /* 12b9c11f ret  */
  ESPCHK(0x12b9c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c120 @ 0x12b9c120 (130 bytes, 43 insns) */
void f_12b9c120(void) {
  FTRACE(0x12b9c120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c120 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c121 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c123 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c127 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c12d jae 0x12b9c151 */
  if (!C.cf) goto L_12b9c151;
  /* 12b9c12f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c132 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c135 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c138 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c13b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c13e mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c145 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9c14a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c14d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9c14f jne 0x12b9c16c */
  if (!C.zf) goto L_12b9c16c;
L_12b9c151:;
  /* 12b9c151 call 0x12b9b8a0 */
  push32(0x12b9c156u); f_12b9b8a0();
  /* 12b9c156 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9c15c call 0x12b9b8b0 */
  push32(0x12b9c161u); f_12b9b8b0();
  /* 12b9c161 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9c167 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c16a jmp 0x12b9c19e */
  goto L_12b9c19e;
L_12b9c16c:;
  /* 12b9c16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c16f push edx */
  push32((uint32_t)(EDX));
  /* 12b9c170 call 0x12b9d0c0 */
  push32(0x12b9c175u); f_12b9d0c0();
  /* 12b9c175 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c178 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9c17b push eax */
  push32((uint32_t)(EAX));
  /* 12b9c17c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c17f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c180 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c183 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c184 call 0x12b9c1b0 */
  push32(0x12b9c189u); f_12b9c1b0();
  /* 12b9c189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c18c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c18f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c192 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c193 call 0x12b9d150 */
  push32(0x12b9c198u); f_12b9d150();
  /* 12b9c198 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9c19e:;
  /* 12b9c19e mov esp, ebp */
  ESP = (EBP);
  /* 12b9c1a0 pop ebp */
  EBP = (pop32());
  /* 12b9c1a1 ret  */
  ESPCHK(0x12b9c120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x12b9c1b0 (178 bytes, 56 insns) */
void f_12b9c1b0(void) {
  FTRACE(0x12b9c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c1b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c1b9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c1ba call 0x12b9cf40 */
  push32(0x12b9c1bfu); f_12b9cf40();
  /* 12b9c1bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c1c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9c1c5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c1c9 jne 0x12b9c1de */
  if (!C.zf) goto L_12b9c1de;
  /* 12b9c1cb call 0x12b9b8a0 */
  push32(0x12b9c1d0u); f_12b9b8a0();
  /* 12b9c1d0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9c1d6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c1d9 jmp 0x12b9c25e */
  goto L_12b9c25e;
L_12b9c1de:;
  /* 12b9c1de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9c1e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c1e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c1e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c1e7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c1e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9c1eb push eax */
  push32((uint32_t)(EAX));
  /* 12b9c1ec call dword ptr [0x12bc133c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc133c))), 0x12b9c1f2u);
  /* 12b9c1f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9c1f5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c1f9 jne 0x12b9c206 */
  if (!C.zf) goto L_12b9c206;
  /* 12b9c1fb call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9c201u);
  /* 12b9c201 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c204 jmp 0x12b9c20d */
  goto L_12b9c20d;
L_12b9c206:;
  /* 12b9c206 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b9c20d:;
  /* 12b9c20d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c211 je 0x12b9c224 */
  if (C.zf) goto L_12b9c224;
  /* 12b9c213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c216 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c217 call 0x12b9b800 */
  push32(0x12b9c21cu); f_12b9b800();
  /* 12b9c21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c21f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c222 jmp 0x12b9c25e */
  goto L_12b9c25e;
L_12b9c224:;
  /* 12b9c224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c227 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12b9c22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c22d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c230 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c233 mov ecx, dword ptr [edx*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9c23a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12b9c23e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12b9c241 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c244 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c247 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c24a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c24d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c250 mov eax, dword ptr [eax*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9c257 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12b9c25b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b9c25e:;
  /* 12b9c25e mov esp, ebp */
  ESP = (EBP);
  /* 12b9c260 pop ebp */
  EBP = (pop32());
  /* 12b9c261 ret  */
  ESPCHK(0x12b9c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c270 @ 0x12b9c270 (130 bytes, 43 insns) */
void f_12b9c270(void) {
  FTRACE(0x12b9c270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c270 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c271 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c273 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c274 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c277 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c27d jae 0x12b9c2a1 */
  if (!C.cf) goto L_12b9c2a1;
  /* 12b9c27f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c282 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c285 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c288 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c28b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c28e mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c295 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9c29a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c29d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9c29f jne 0x12b9c2bc */
  if (!C.zf) goto L_12b9c2bc;
L_12b9c2a1:;
  /* 12b9c2a1 call 0x12b9b8a0 */
  push32(0x12b9c2a6u); f_12b9b8a0();
  /* 12b9c2a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9c2ac call 0x12b9b8b0 */
  push32(0x12b9c2b1u); f_12b9b8b0();
  /* 12b9c2b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9c2b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c2ba jmp 0x12b9c2ee */
  goto L_12b9c2ee;
L_12b9c2bc:;
  /* 12b9c2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c2bf push edx */
  push32((uint32_t)(EDX));
  /* 12b9c2c0 call 0x12b9d0c0 */
  push32(0x12b9c2c5u); f_12b9d0c0();
  /* 12b9c2c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c2c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9c2cb push eax */
  push32((uint32_t)(EAX));
  /* 12b9c2cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c2cf push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c2d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c2d3 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c2d4 call 0x12b9c300 */
  push32(0x12b9c2d9u); f_12b9c300();
  /* 12b9c2d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c2dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c2df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c2e2 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c2e3 call 0x12b9d150 */
  push32(0x12b9c2e8u); f_12b9d150();
  /* 12b9c2e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c2eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9c2ee:;
  /* 12b9c2ee mov esp, ebp */
  ESP = (EBP);
  /* 12b9c2f0 pop ebp */
  EBP = (pop32());
  /* 12b9c2f1 ret  */
  ESPCHK(0x12b9c270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c300 @ 0x12b9c300 (627 bytes, 182 insns) */
void f_12b9c300(void) {
  FTRACE(0x12b9c300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c300 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c301 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c303 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c309 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12b9c310 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9c313 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12b9c319 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c31d jne 0x12b9c326 */
  if (!C.zf) goto L_12b9c326;
  /* 12b9c31f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c321 jmp 0x12b9c56f */
  goto L_12b9c56f;
L_12b9c326:;
  /* 12b9c326 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c329 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c32f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c332 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c335 mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c33c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9c341 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c344 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9c346 je 0x12b9c358 */
  if (C.zf) goto L_12b9c358;
  /* 12b9c348 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9c34a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c34c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c34f push edx */
  push32((uint32_t)(EDX));
  /* 12b9c350 call 0x12b9c1b0 */
  push32(0x12b9c355u); f_12b9c1b0();
  /* 12b9c355 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9c358:;
  /* 12b9c358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c35b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c35e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c361 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c364 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c367 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9c36e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12b9c373 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c37a je 0x12b9c48c */
  if (C.zf) goto L_12b9c48c;
  /* 12b9c380 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c383 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9c386 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12b9c38d:;
  /* 12b9c38d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c390 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c393 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c396 jae 0x12b9c48a */
  if (!C.cf) goto L_12b9c48a;
  /* 12b9c39c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12b9c3a2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b9c3a5:;
  /* 12b9c3a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c3a8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12b9c3ae sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c3b0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c3b6 jge 0x12b9c417 */
  if ((C.sf==C.of)) goto L_12b9c417;
  /* 12b9c3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c3bb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c3be cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c3c1 jae 0x12b9c417 */
  if (!C.cf) goto L_12b9c417;
  /* 12b9c3c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c3c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b9c3c8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12b9c3ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c3d1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c3d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c3d7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12b9c3de cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c3e1 jne 0x12b9c401 */
  if (!C.zf) goto L_12b9c401;
  /* 12b9c3e3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12b9c3e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c3ec mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12b9c3f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c3f5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12b9c3f8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c3fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c3fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12b9c401:;
  /* 12b9c401 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c404 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12b9c40a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12b9c40c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c40f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c412 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9c415 jmp 0x12b9c3a5 */
  goto L_12b9c3a5;
L_12b9c417:;
  /* 12b9c417 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c419 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12b9c41f push edx */
  push32((uint32_t)(EDX));
  /* 12b9c420 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c423 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12b9c429 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c42b push eax */
  push32((uint32_t)(EAX));
  /* 12b9c42c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12b9c432 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c433 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c436 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c439 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c43c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c43f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c442 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9c449 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12b9c44c push eax */
  push32((uint32_t)(EAX));
  /* 12b9c44d call dword ptr [0x12bc1274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1274))), 0x12b9c453u);
  /* 12b9c453 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c455 je 0x12b9c47a */
  if (C.zf) goto L_12b9c47a;
  /* 12b9c457 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9c45a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c460 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12b9c463 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c466 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12b9c46c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c46e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c474 jge 0x12b9c478 */
  if ((C.sf==C.of)) goto L_12b9c478;
  /* 12b9c476 jmp 0x12b9c48a */
  goto L_12b9c48a;
L_12b9c478:;
  /* 12b9c478 jmp 0x12b9c485 */
  goto L_12b9c485;
L_12b9c47a:;
  /* 12b9c47a call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9c480u);
  /* 12b9c480 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9c483 jmp 0x12b9c48a */
  goto L_12b9c48a;
L_12b9c485:;
  /* 12b9c485 jmp 0x12b9c38d */
  goto L_12b9c38d;
L_12b9c48a:;
  /* 12b9c48a jmp 0x12b9c4dc */
  goto L_12b9c4dc;
L_12b9c48c:;
  /* 12b9c48c push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c48e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12b9c494 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c495 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9c498 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c49c push eax */
  push32((uint32_t)(EAX));
  /* 12b9c49d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c4a0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c4a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c4a6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c4a9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c4ac mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c4b3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12b9c4b6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c4b7 call dword ptr [0x12bc1274] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1274))), 0x12b9c4bdu);
  /* 12b9c4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c4bf je 0x12b9c4d3 */
  if (C.zf) goto L_12b9c4d3;
  /* 12b9c4c1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9c4c8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12b9c4ce mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12b9c4d1 jmp 0x12b9c4dc */
  goto L_12b9c4dc;
L_12b9c4d3:;
  /* 12b9c4d3 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9c4d9u);
  /* 12b9c4d9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9c4dc:;
  /* 12b9c4dc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c4e0 jne 0x12b9c566 */
  if (!C.zf) goto L_12b9c566;
  /* 12b9c4e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c4ea je 0x12b9c51a */
  if (C.zf) goto L_12b9c51a;
  /* 12b9c4ec cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c4f0 jne 0x12b9c509 */
  if (!C.zf) goto L_12b9c509;
  /* 12b9c4f2 call 0x12b9b8a0 */
  push32(0x12b9c4f7u); f_12b9b8a0();
  /* 12b9c4f7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9c4fd call 0x12b9b8b0 */
  push32(0x12b9c502u); f_12b9b8b0();
  /* 12b9c502 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9c505 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12b9c507 jmp 0x12b9c515 */
  goto L_12b9c515;
L_12b9c509:;
  /* 12b9c509 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9c50c push edx */
  push32((uint32_t)(EDX));
  /* 12b9c50d call 0x12b9b800 */
  push32(0x12b9c512u); f_12b9b800();
  /* 12b9c512 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9c515:;
  /* 12b9c515 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c518 jmp 0x12b9c56f */
  goto L_12b9c56f;
L_12b9c51a:;
  /* 12b9c51a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c51d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c520 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c523 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c526 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c529 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9c530 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12b9c535 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c538 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c53a je 0x12b9c54b */
  if (C.zf) goto L_12b9c54b;
  /* 12b9c53c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c53f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9c542 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c545 jne 0x12b9c54b */
  if (!C.zf) goto L_12b9c54b;
  /* 12b9c547 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c549 jmp 0x12b9c56f */
  goto L_12b9c56f;
L_12b9c54b:;
  /* 12b9c54b call 0x12b9b8a0 */
  push32(0x12b9c550u); f_12b9b8a0();
  /* 12b9c550 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12b9c556 call 0x12b9b8b0 */
  push32(0x12b9c55bu); f_12b9b8b0();
  /* 12b9c55b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9c561 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c564 jmp 0x12b9c56f */
  goto L_12b9c56f;
L_12b9c566:;
  /* 12b9c566 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9c569 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12b9c56f:;
  /* 12b9c56f mov esp, ebp */
  ESP = (EBP);
  /* 12b9c571 pop ebp */
  EBP = (pop32());
  /* 12b9c572 ret  */
  ESPCHK(0x12b9c300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c580 @ 0x12b9c580 (199 bytes, 68 insns) */
void f_12b9c580(void) {
  FTRACE(0x12b9c580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c580 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c581 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c583 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c584 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9c585 push esi */
  push32((uint32_t)(ESI));
  /* 12b9c586 push edi */
  push32((uint32_t)(EDI));
L_12b9c587:;
  /* 12b9c587 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c58b jne 0x12b9c5ab */
  if (!C.zf) goto L_12b9c5ab;
  /* 12b9c58d push 0x12bbb6b8 */
  push32((uint32_t)(0x12bbb6b8u));
  /* 12b9c592 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c594 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12b9c596 push 0x12bbb788 */
  push32((uint32_t)(0x12bbb788u));
  /* 12b9c59b push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9c59d call 0x12b92a90 */
  push32(0x12b9c5a2u); f_12b92a90();
  /* 12b9c5a2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c5a5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c5a8 jne 0x12b9c5ab */
  if (!C.zf) goto L_12b9c5ab;
  /* 12b9c5aa int3  */
  x86_unimpl("int3 @ 0x12b9c5aa");
L_12b9c5ab:;
  /* 12b9c5ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c5ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c5af jne 0x12b9c587 */
  if (!C.zf) goto L_12b9c587;
  /* 12b9c5b1 mov ecx, dword ptr [0x12bbf6a4] */
  ECX = (r32((uint32_t)(0x12bbf6a4)));
  /* 12b9c5b7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c5ba mov dword ptr [0x12bbf6a4], ecx */
  w32((uint32_t)(0x12bbf6a4), (ECX));
  /* 12b9c5c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c5c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9c5c6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12b9c5c8 push 0x12bbb788 */
  push32((uint32_t)(0x12bbb788u));
  /* 12b9c5cd push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9c5cf push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12b9c5d4 call 0x12b939d0 */
  push32(0x12b9c5d9u); f_12b939d0();
  /* 12b9c5d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c5dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c5df mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12b9c5e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c5e5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c5e9 je 0x12b9c606 */
  if (C.zf) goto L_12b9c606;
  /* 12b9c5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c5ee mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9c5f1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9c5f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c5f7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12b9c5fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c5fd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12b9c604 jmp 0x12b9c62b */
  goto L_12b9c62b;
L_12b9c606:;
  /* 12b9c606 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c609 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9c60c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c60f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c612 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12b9c615 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c618 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c61b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c61e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12b9c621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c624 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12b9c62b:;
  /* 12b9c62b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c62e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c631 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9c634 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b9c636 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c639 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12b9c640 pop edi */
  EDI = (pop32());
  /* 12b9c641 pop esi */
  ESI = (pop32());
  /* 12b9c642 pop ebx */
  EBX = (pop32());
  /* 12b9c643 mov esp, ebp */
  ESP = (EBP);
  /* 12b9c645 pop ebp */
  EBP = (pop32());
  /* 12b9c646 ret  */
  ESPCHK(0x12b9c580u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12b9c650 (50 bytes, 17 insns) */
void f_12b9c650(void) {
  FTRACE(0x12b9c650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c650 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c651 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c653 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c656 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c65c jb 0x12b9c662 */
  if (C.cf) goto L_12b9c662;
  /* 12b9c65e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c660 jmp 0x12b9c680 */
  goto L_12b9c680;
L_12b9c662:;
  /* 12b9c662 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c665 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c668 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c66b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c66e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c671 mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c678 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9c67d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12b9c680:;
  /* 12b9c680 pop ebp */
  EBP = (pop32());
  /* 12b9c681 ret  */
  ESPCHK(0x12b9c650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x12b9c690 (300 bytes, 80 insns) */
void f_12b9c690(void) {
  FTRACE(0x12b9c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c690 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c691 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c693 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c694 cmp dword ptr [0x12bc0b60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0b60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c69b jne 0x12b9c6a9 */
  if (!C.zf) goto L_12b9c6a9;
  /* 12b9c69d mov dword ptr [0x12bc0b60], 0x200 */
  w32((uint32_t)(0x12bc0b60), (0x200u));
  /* 12b9c6a7 jmp 0x12b9c6bc */
  goto L_12b9c6bc;
L_12b9c6a9:;
  /* 12b9c6a9 cmp dword ptr [0x12bc0b60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12bc0b60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c6b0 jge 0x12b9c6bc */
  if ((C.sf==C.of)) goto L_12b9c6bc;
  /* 12b9c6b2 mov dword ptr [0x12bc0b60], 0x14 */
  w32((uint32_t)(0x12bc0b60), (0x14u));
L_12b9c6bc:;
  /* 12b9c6bc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12b9c6c1 push 0x12bbb794 */
  push32((uint32_t)(0x12bbb794u));
  /* 12b9c6c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9c6c8 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b9c6ca mov eax, dword ptr [0x12bc0b60] */
  EAX = (r32((uint32_t)(0x12bc0b60)));
  /* 12b9c6cf push eax */
  push32((uint32_t)(EAX));
  /* 12b9c6d0 call 0x12b93de0 */
  push32(0x12b9c6d5u); f_12b93de0();
  /* 12b9c6d5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c6d8 mov dword ptr [0x12bbf818], eax */
  w32((uint32_t)(0x12bbf818), (EAX));
  /* 12b9c6dd cmp dword ptr [0x12bbf818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c6e4 jne 0x12b9c725 */
  if (!C.zf) goto L_12b9c725;
  /* 12b9c6e6 mov dword ptr [0x12bc0b60], 0x14 */
  w32((uint32_t)(0x12bc0b60), (0x14u));
  /* 12b9c6f0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12b9c6f5 push 0x12bbb794 */
  push32((uint32_t)(0x12bbb794u));
  /* 12b9c6fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9c6fc push 4 */
  push32((uint32_t)(0x4u));
  /* 12b9c6fe mov ecx, dword ptr [0x12bc0b60] */
  ECX = (r32((uint32_t)(0x12bc0b60)));
  /* 12b9c704 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c705 call 0x12b93de0 */
  push32(0x12b9c70au); f_12b93de0();
  /* 12b9c70a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c70d mov dword ptr [0x12bbf818], eax */
  w32((uint32_t)(0x12bbf818), (EAX));
  /* 12b9c712 cmp dword ptr [0x12bbf818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c719 jne 0x12b9c725 */
  if (!C.zf) goto L_12b9c725;
  /* 12b9c71b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12b9c71d call 0x12b92940 */
  push32(0x12b9c722u); f_12b92940();
  /* 12b9c722 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9c725:;
  /* 12b9c725 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9c72c jmp 0x12b9c737 */
  goto L_12b9c737;
L_12b9c72e:;
  /* 12b9c72e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c731 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c734 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9c737:;
  /* 12b9c737 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c73b jge 0x12b9c756 */
  if ((C.sf==C.of)) goto L_12b9c756;
  /* 12b9c73d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c740 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c743 add eax, 0x12bbe120 */
  { uint32_t _a=(EAX),_b=(0x12bbe120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c748 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c74b mov edx, dword ptr [0x12bbf818] */
  EDX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9c751 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12b9c754 jmp 0x12b9c72e */
  goto L_12b9c72e;
L_12b9c756:;
  /* 12b9c756 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9c75d jmp 0x12b9c768 */
  goto L_12b9c768;
L_12b9c75f:;
  /* 12b9c75f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c762 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c765 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9c768:;
  /* 12b9c768 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c76c jge 0x12b9c7b8 */
  if ((C.sf==C.of)) goto L_12b9c7b8;
  /* 12b9c76e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c771 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c774 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c777 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c77a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c77d mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c784 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c788 je 0x12b9c7a6 */
  if (C.zf) goto L_12b9c7a6;
  /* 12b9c78a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c78d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c790 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c793 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9c796 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9c799 mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9c7a0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c7a4 jne 0x12b9c7b6 */
  if (!C.zf) goto L_12b9c7b6;
L_12b9c7a6:;
  /* 12b9c7a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9c7a9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9c7ac mov dword ptr [ecx + 0x12bbe130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12bbe130), (0xffffffffu));
L_12b9c7b6:;
  /* 12b9c7b6 jmp 0x12b9c75f */
  goto L_12b9c75f;
L_12b9c7b8:;
  /* 12b9c7b8 mov esp, ebp */
  ESP = (EBP);
  /* 12b9c7ba pop ebp */
  EBP = (pop32());
  /* 12b9c7bb ret  */
  ESPCHK(0x12b9c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x12b9c7c0 (26 bytes, 9 insns) */
void f_12b9c7c0(void) {
  FTRACE(0x12b9c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c7c3 call 0x12b9d3c0 */
  push32(0x12b9c7c8u); f_12b9d3c0();
  /* 12b9c7c8 movsx eax, byte ptr [0x12bbf4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12bbf4bc))));
  /* 12b9c7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9c7d1 je 0x12b9c7d8 */
  if (C.zf) goto L_12b9c7d8;
  /* 12b9c7d3 call 0x12b9d180 */
  push32(0x12b9c7d8u); f_12b9d180();
L_12b9c7d8:;
  /* 12b9c7d8 pop ebp */
  EBP = (pop32());
  /* 12b9c7d9 ret  */
  ESPCHK(0x12b9c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7e0 @ 0x12b9c7e0 (61 bytes, 20 insns) */
void f_12b9c7e0(void) {
  FTRACE(0x12b9c7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c7e3 cmp dword ptr [ebp + 8], 0x12bbe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12bbe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c7ea jb 0x12b9c80e */
  if (C.cf) goto L_12b9c80e;
  /* 12b9c7ec cmp dword ptr [ebp + 8], 0x12bbe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12bbe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c7f3 ja 0x12b9c80e */
  if ((!C.cf&&!C.zf)) goto L_12b9c80e;
  /* 12b9c7f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c7f8 sub eax, 0x12bbe120 */
  { uint32_t _a=(EAX),_b=(0x12bbe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c7fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c800 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c803 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c804 call 0x12b973d0 */
  push32(0x12b9c809u); f_12b973d0();
  /* 12b9c809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c80c jmp 0x12b9c81b */
  goto L_12b9c81b;
L_12b9c80e:;
  /* 12b9c80e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c811 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c814 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c815 call dword ptr [0x12bc1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1304))), 0x12b9c81bu);
L_12b9c81b:;
  /* 12b9c81b pop ebp */
  EBP = (pop32());
  /* 12b9c81c ret  */
  ESPCHK(0x12b9c7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x12b9c820 (41 bytes, 16 insns) */
void f_12b9c820(void) {
  FTRACE(0x12b9c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c820 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c821 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c823 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c827 jge 0x12b9c83a */
  if ((C.sf==C.of)) goto L_12b9c83a;
  /* 12b9c829 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c82c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c82f push eax */
  push32((uint32_t)(EAX));
  /* 12b9c830 call 0x12b973d0 */
  push32(0x12b9c835u); f_12b973d0();
  /* 12b9c835 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c838 jmp 0x12b9c847 */
  goto L_12b9c847;
L_12b9c83a:;
  /* 12b9c83a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c83d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c840 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c841 call dword ptr [0x12bc1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1304))), 0x12b9c847u);
L_12b9c847:;
  /* 12b9c847 pop ebp */
  EBP = (pop32());
  /* 12b9c848 ret  */
  ESPCHK(0x12b9c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c850 @ 0x12b9c850 (61 bytes, 20 insns) */
void f_12b9c850(void) {
  FTRACE(0x12b9c850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c850 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c851 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c853 cmp dword ptr [ebp + 8], 0x12bbe120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12bbe120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c85a jb 0x12b9c87e */
  if (C.cf) goto L_12b9c87e;
  /* 12b9c85c cmp dword ptr [ebp + 8], 0x12bbe380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12bbe380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c863 ja 0x12b9c87e */
  if ((!C.cf&&!C.zf)) goto L_12b9c87e;
  /* 12b9c865 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c868 sub eax, 0x12bbe120 */
  { uint32_t _a=(EAX),_b=(0x12bbe120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c86d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9c870 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c873 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c874 call 0x12b97470 */
  push32(0x12b9c879u); f_12b97470();
  /* 12b9c879 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c87c jmp 0x12b9c88b */
  goto L_12b9c88b;
L_12b9c87e:;
  /* 12b9c87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c881 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c884 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c885 call dword ptr [0x12bc1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1308))), 0x12b9c88bu);
L_12b9c88b:;
  /* 12b9c88b pop ebp */
  EBP = (pop32());
  /* 12b9c88c ret  */
  ESPCHK(0x12b9c850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c890 @ 0x12b9c890 (41 bytes, 16 insns) */
void f_12b9c890(void) {
  FTRACE(0x12b9c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c890 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c891 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c893 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c897 jge 0x12b9c8aa */
  if ((C.sf==C.of)) goto L_12b9c8aa;
  /* 12b9c899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c89c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c89f push eax */
  push32((uint32_t)(EAX));
  /* 12b9c8a0 call 0x12b97470 */
  push32(0x12b9c8a5u); f_12b97470();
  /* 12b9c8a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c8a8 jmp 0x12b9c8b7 */
  goto L_12b9c8b7;
L_12b9c8aa:;
  /* 12b9c8aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c8ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c8b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c8b1 call dword ptr [0x12bc1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1308))), 0x12b9c8b7u);
L_12b9c8b7:;
  /* 12b9c8b7 pop ebp */
  EBP = (pop32());
  /* 12b9c8b8 ret  */
  ESPCHK(0x12b9c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c8c0 @ 0x12b9c8c0 (119 bytes, 34 insns) */
void f_12b9c8c0(void) {
  FTRACE(0x12b9c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c8c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c8c6 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12b9c8cb call dword ptr [0x12bc1288] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1288))), 0x12b9c8d1u);
  /* 12b9c8d1 cmp dword ptr [0x12bbf804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c8d8 je 0x12b9c8f8 */
  if (C.zf) goto L_12b9c8f8;
  /* 12b9c8da push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12b9c8df call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b9c8e5u);
  /* 12b9c8e5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9c8e7 call 0x12b973d0 */
  push32(0x12b9c8ecu); f_12b973d0();
  /* 12b9c8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c8ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9c8f6 jmp 0x12b9c8ff */
  goto L_12b9c8ff;
L_12b9c8f8:;
  /* 12b9c8f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b9c8ff:;
  /* 12b9c8ff mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12b9c903 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c904 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c907 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c908 call 0x12b9c940 */
  push32(0x12b9c90du); f_12b9c940();
  /* 12b9c90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c910 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9c913 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c917 je 0x12b9c925 */
  if (C.zf) goto L_12b9c925;
  /* 12b9c919 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9c91b call 0x12b97470 */
  push32(0x12b9c920u); f_12b97470();
  /* 12b9c920 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9c923 jmp 0x12b9c930 */
  goto L_12b9c930;
L_12b9c925:;
  /* 12b9c925 push 0x12bbf814 */
  push32((uint32_t)(0x12bbf814u));
  /* 12b9c92a call dword ptr [0x12bc1278] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1278))), 0x12b9c930u);
L_12b9c930:;
  /* 12b9c930 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9c933 mov esp, ebp */
  ESP = (EBP);
  /* 12b9c935 pop ebp */
  EBP = (pop32());
  /* 12b9c936 ret  */
  ESPCHK(0x12b9c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x12b9c940 (160 bytes, 50 insns) */
void f_12b9c940(void) {
  FTRACE(0x12b9c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c940 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c941 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9c946 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c94a jne 0x12b9c953 */
  if (!C.zf) goto L_12b9c953;
  /* 12b9c94c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c94e jmp 0x12b9c9dc */
  goto L_12b9c9dc;
L_12b9c953:;
  /* 12b9c953 cmp dword ptr [0x12bbf688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c95a jne 0x12b9c98a */
  if (!C.zf) goto L_12b9c98a;
  /* 12b9c95c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9c95f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c964 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c969 jle 0x12b9c97b */
  if ((C.zf||C.sf!=C.of)) goto L_12b9c97b;
  /* 12b9c96b call 0x12b9b8a0 */
  push32(0x12b9c970u); f_12b9b8a0();
  /* 12b9c970 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12b9c976 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c979 jmp 0x12b9c9dc */
  goto L_12b9c9dc;
L_12b9c97b:;
  /* 12b9c97b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c97e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12b9c981 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12b9c983 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9c988 jmp 0x12b9c9dc */
  goto L_12b9c9dc;
L_12b9c98a:;
  /* 12b9c98a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9c991 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12b9c994 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c995 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c997 mov ecx, dword ptr [0x12bbdea4] */
  ECX = (r32((uint32_t)(0x12bbdea4)));
  /* 12b9c99d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c99e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9c9a1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9c9a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9c9a4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12b9c9a7 push eax */
  push32((uint32_t)(EAX));
  /* 12b9c9a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12b9c9ad mov ecx, dword ptr [0x12bbf698] */
  ECX = (r32((uint32_t)(0x12bbf698)));
  /* 12b9c9b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9c9b4 call dword ptr [0x12bc12e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12e0))), 0x12b9c9bau);
  /* 12b9c9ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9c9bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c9c1 je 0x12b9c9c9 */
  if (C.zf) goto L_12b9c9c9;
  /* 12b9c9c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9c9c7 je 0x12b9c9d9 */
  if (C.zf) goto L_12b9c9d9;
L_12b9c9c9:;
  /* 12b9c9c9 call 0x12b9b8a0 */
  push32(0x12b9c9ceu); f_12b9b8a0();
  /* 12b9c9ce mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12b9c9d4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9c9d7 jmp 0x12b9c9dc */
  goto L_12b9c9dc;
L_12b9c9d9:;
  /* 12b9c9d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9c9dc:;
  /* 12b9c9dc mov esp, ebp */
  ESP = (EBP);
  /* 12b9c9de pop ebp */
  EBP = (pop32());
  /* 12b9c9df ret  */
  ESPCHK(0x12b9c940u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12b9c9e0 (32 bytes, 18 insns) */
void f_12b9c9e0(void) {
  FTRACE(0x12b9c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9c9e3 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9c9e4 push esi */
  push32((uint32_t)(ESI));
  /* 12b9c9e5 push edi */
  push32((uint32_t)(EDI));
  /* 12b9c9e6 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9c9e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c9e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9c9eb push 0x12b9c9f8 */
  push32((uint32_t)(0x12b9c9f8u));
  /* 12b9c9f0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12b9c9f3 call 0x12ba412c */
  push32(0x12b9c9f8u); f_12ba412c();
  /* 12b9c9f8 pop ebp */
  EBP = (pop32());
  /* 12b9c9f9 pop edi */
  EDI = (pop32());
  /* 12b9c9fa pop esi */
  ESI = (pop32());
  /* 12b9c9fb pop ebx */
  EBX = (pop32());
  /* 12b9c9fc mov esp, ebp */
  ESP = (EBP);
  /* 12b9c9fe pop ebp */
  EBP = (pop32());
  /* 12b9c9ff ret  */
  ESPCHK(0x12b9c9e0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12b9ca22 (104 bytes, 33 insns) */
void f_12b9ca22(void) {
  FTRACE(0x12b9ca22u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9ca22 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9ca23 push esi */
  push32((uint32_t)(ESI));
  /* 12b9ca24 push edi */
  push32((uint32_t)(EDI));
  /* 12b9ca25 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12b9ca29 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ca2a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12b9ca2c push 0x12b9ca00 */
  push32((uint32_t)(0x12b9ca00u));
  /* 12b9ca31 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12b9ca38 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12b9ca3f:;
  /* 12b9ca3f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12b9ca43 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9ca46 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9ca49 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ca4c je 0x12b9ca7c */
  if (C.zf) goto L_12b9ca7c;
  /* 12b9ca4e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ca52 je 0x12b9ca7c */
  if (C.zf) goto L_12b9ca7c;
  /* 12b9ca54 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12b9ca57 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12b9ca5a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12b9ca5e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12b9ca61 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ca66 jne 0x12b9ca7a */
  if (!C.zf) goto L_12b9ca7a;
  /* 12b9ca68 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12b9ca6d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12b9ca71 call 0x12b9cab6 */
  push32(0x12b9ca76u); f_12b9cab6();
  /* 12b9ca76 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12b9ca7au);
L_12b9ca7a:;
  /* 12b9ca7a jmp 0x12b9ca3f */
  goto L_12b9ca3f;
L_12b9ca7c:;
  /* 12b9ca7c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12b9ca83 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ca86 pop edi */
  EDI = (pop32());
  /* 12b9ca87 pop esi */
  ESI = (pop32());
  /* 12b9ca88 pop ebx */
  EBX = (pop32());
  /* 12b9ca89 ret  */
  ESPCHK(0x12b9ca22u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cab6 @ 0x12b9cab6 (24 bytes, 10 insns) */
void f_12b9cab6(void) {
  FTRACE(0x12b9cab6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cab6 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9cab7 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9cab8 mov ebx, 0x12bbe3b8 */
  EBX = (0x12bbe3b8u);
  /* 12b9cabd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cac0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12b9cac3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12b9cac6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12b9cac9 pop ecx */
  ECX = (pop32());
  /* 12b9caca pop ebx */
  EBX = (pop32());
  /* 12b9cacb ret 4 */
  ESPCHK(0x12b9cab6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cb95 @ 0x12b9cb95 (27 bytes, 11 insns) */
void f_12b9cb95(void) {
  FTRACE(0x12b9cb95u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cb95 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9cb96 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b9cb9a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12b9cb9c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12b9cb9f push eax */
  push32((uint32_t)(EAX));
  /* 12b9cba0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b9cba3 push eax */
  push32((uint32_t)(EAX));
  /* 12b9cba4 call 0x12b9ca22 */
  push32(0x12b9cba9u); f_12b9ca22();
  /* 12b9cba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cbac pop ebp */
  EBP = (pop32());
  /* 12b9cbad ret 4 */
  ESPCHK(0x12b9cb95u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cbb0 @ 0x12b9cbb0 (482 bytes, 138 insns) */
void f_12b9cbb0(void) {
  FTRACE(0x12b9cbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9cbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9cbb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9cbb6 push esi */
  push32((uint32_t)(ESI));
  /* 12b9cbb7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12b9cbbe push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12b9cbc0 call 0x12b973d0 */
  push32(0x12b9cbc5u); f_12b973d0();
  /* 12b9cbc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cbc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9cbcf jmp 0x12b9cbda */
  goto L_12b9cbda;
L_12b9cbd1:;
  /* 12b9cbd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cbd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cbd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9cbda:;
  /* 12b9cbda cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cbde jge 0x12b9cd80 */
  if ((C.sf==C.of)) goto L_12b9cd80;
  /* 12b9cbe4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cbe7 cmp dword ptr [ecx*4 + 0x12bc0e60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12bc0e60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cbef je 0x12b9cce6 */
  if (C.zf) goto L_12b9cce6;
  /* 12b9cbf5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cbf8 mov eax, dword ptr [edx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9cbff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9cc02 jmp 0x12b9cc0d */
  goto L_12b9cc0d;
L_12b9cc04:;
  /* 12b9cc04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc07 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9cc0d:;
  /* 12b9cc0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cc10 mov eax, dword ptr [edx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9cc17 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc1c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cc1f jae 0x12b9ccd6 */
  if (!C.cf) goto L_12b9ccd6;
  /* 12b9cc25 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b9cc2c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9cc2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9cc31 jne 0x12b9ccd1 */
  if (!C.zf) goto L_12b9ccd1;
  /* 12b9cc37 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc3a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cc3e jne 0x12b9cc79 */
  if (!C.zf) goto L_12b9cc79;
  /* 12b9cc40 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9cc42 call 0x12b973d0 */
  push32(0x12b9cc47u); f_12b973d0();
  /* 12b9cc47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc4d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cc51 jne 0x12b9cc6f */
  if (!C.zf) goto L_12b9cc6f;
  /* 12b9cc53 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc56 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc59 push edx */
  push32((uint32_t)(EDX));
  /* 12b9cc5a call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b9cc60u);
  /* 12b9cc60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc63 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9cc66 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12b9cc6f:;
  /* 12b9cc6f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9cc71 call 0x12b97470 */
  push32(0x12b9cc76u); f_12b97470();
  /* 12b9cc76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9cc79:;
  /* 12b9cc79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc7c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc7f push eax */
  push32((uint32_t)(EAX));
  /* 12b9cc80 call dword ptr [0x12bc1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1304))), 0x12b9cc86u);
  /* 12b9cc86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc89 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12b9cc8d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9cc90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9cc92 je 0x12b9cca6 */
  if (C.zf) goto L_12b9cca6;
  /* 12b9cc94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cc97 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cc9a push eax */
  push32((uint32_t)(EAX));
  /* 12b9cc9b call dword ptr [0x12bc1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1308))), 0x12b9cca1u);
  /* 12b9cca1 jmp 0x12b9cc04 */
  goto L_12b9cc04;
L_12b9cca6:;
  /* 12b9cca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cca9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12b9ccaf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9ccb2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9ccb5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9ccb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ccbb sub eax, dword ptr [edx*4 + 0x12bc0e60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12bc0e60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ccc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9ccc3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12b9ccc8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12b9ccca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cccc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9cccf jmp 0x12b9ccd6 */
  goto L_12b9ccd6;
L_12b9ccd1:;
  /* 12b9ccd1 jmp 0x12b9cc04 */
  goto L_12b9cc04;
L_12b9ccd6:;
  /* 12b9ccd6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ccda je 0x12b9cce1 */
  if (C.zf) goto L_12b9cce1;
  /* 12b9ccdc jmp 0x12b9cd80 */
  goto L_12b9cd80;
L_12b9cce1:;
  /* 12b9cce1 jmp 0x12b9cd7b */
  goto L_12b9cd7b;
L_12b9cce6:;
  /* 12b9cce6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12b9cce8 push 0x12bbb79c */
  push32((uint32_t)(0x12bbb79cu));
  /* 12b9cced push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ccef push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12b9ccf4 call 0x12b939d0 */
  push32(0x12b9ccf9u); f_12b939d0();
  /* 12b9ccf9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ccfc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9ccff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cd03 je 0x12b9cd79 */
  if (C.zf) goto L_12b9cd79;
  /* 12b9cd05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cd08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd0b mov dword ptr [eax*4 + 0x12bc0e60], ecx */
  w32((uint32_t)(EAX*4 + 0x12bc0e60), (ECX));
  /* 12b9cd12 mov edx, dword ptr [0x12bc0f9c] */
  EDX = (r32((uint32_t)(0x12bc0f9c)));
  /* 12b9cd18 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cd1b mov dword ptr [0x12bc0f9c], edx */
  w32((uint32_t)(0x12bc0f9c), (EDX));
  /* 12b9cd21 jmp 0x12b9cd2c */
  goto L_12b9cd2c;
L_12b9cd23:;
  /* 12b9cd23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd26 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cd29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9cd2c:;
  /* 12b9cd2c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cd2f mov edx, dword ptr [ecx*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9cd36 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cd3c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cd3f jae 0x12b9cd64 */
  if (!C.cf) goto L_12b9cd64;
  /* 12b9cd41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd44 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12b9cd48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd4b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12b9cd51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd54 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12b9cd58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9cd5b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12b9cd62 jmp 0x12b9cd23 */
  goto L_12b9cd23;
L_12b9cd64:;
  /* 12b9cd64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9cd67 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9cd6a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9cd6d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9cd70 push edx */
  push32((uint32_t)(EDX));
  /* 12b9cd71 call 0x12b9d0c0 */
  push32(0x12b9cd76u); f_12b9d0c0();
  /* 12b9cd76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9cd79:;
  /* 12b9cd79 jmp 0x12b9cd80 */
  goto L_12b9cd80;
L_12b9cd7b:;
  /* 12b9cd7b jmp 0x12b9cbd1 */
  goto L_12b9cbd1;
L_12b9cd80:;
  /* 12b9cd80 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12b9cd82 call 0x12b97470 */
  push32(0x12b9cd87u); f_12b97470();
  /* 12b9cd87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9cd8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9cd8d pop esi */
  ESI = (pop32());
  /* 12b9cd8e mov esp, ebp */
  ESP = (EBP);
  /* 12b9cd90 pop ebp */
  EBP = (pop32());
  /* 12b9cd91 ret  */
  ESPCHK(0x12b9cbb0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12b9cda0 (183 bytes, 57 insns) */
void f_12b9cda0(void) {
  FTRACE(0x12b9cda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cda0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9cda1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9cda3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9cda4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cda7 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cdad jae 0x12b9ce3a */
  if (!C.cf) goto L_12b9ce3a;
  /* 12b9cdb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cdb6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9cdb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cdbc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9cdbf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9cdc2 mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9cdc9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cdcd jne 0x12b9ce3a */
  if (!C.zf) goto L_12b9ce3a;
  /* 12b9cdcf cmp dword ptr [0x12bbf47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cdd6 jne 0x12b9ce1a */
  if (!C.zf) goto L_12b9ce1a;
  /* 12b9cdd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cddb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9cdde cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cde2 je 0x12b9cdf2 */
  if (C.zf) goto L_12b9cdf2;
  /* 12b9cde4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cde8 je 0x12b9ce00 */
  if (C.zf) goto L_12b9ce00;
  /* 12b9cdea cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cdee je 0x12b9ce0e */
  if (C.zf) goto L_12b9ce0e;
  /* 12b9cdf0 jmp 0x12b9ce1a */
  goto L_12b9ce1a;
L_12b9cdf2:;
  /* 12b9cdf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9cdf5 push edx */
  push32((uint32_t)(EDX));
  /* 12b9cdf6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12b9cdf8 call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9cdfeu);
  /* 12b9cdfe jmp 0x12b9ce1a */
  goto L_12b9ce1a;
L_12b9ce00:;
  /* 12b9ce00 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ce03 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ce04 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12b9ce06 call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9ce0cu);
  /* 12b9ce0c jmp 0x12b9ce1a */
  goto L_12b9ce1a;
L_12b9ce0e:;
  /* 12b9ce0e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ce11 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ce12 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12b9ce14 call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9ce1au);
L_12b9ce1a:;
  /* 12b9ce1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce1d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12b9ce20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce23 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ce26 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9ce29 mov ecx, dword ptr [edx*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9ce30 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ce33 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12b9ce36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ce38 jmp 0x12b9ce53 */
  goto L_12b9ce53;
L_12b9ce3a:;
  /* 12b9ce3a call 0x12b9b8a0 */
  push32(0x12b9ce3fu); f_12b9b8a0();
  /* 12b9ce3f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9ce45 call 0x12b9b8b0 */
  push32(0x12b9ce4au); f_12b9b8b0();
  /* 12b9ce4a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9ce50 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b9ce53:;
  /* 12b9ce53 mov esp, ebp */
  ESP = (EBP);
  /* 12b9ce55 pop ebp */
  EBP = (pop32());
  /* 12b9ce56 ret  */
  ESPCHK(0x12b9cda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce60 @ 0x12b9ce60 (216 bytes, 63 insns) */
void f_12b9ce60(void) {
  FTRACE(0x12b9ce60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9ce60 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9ce61 mov ebp, esp */
  EBP = (ESP);
  /* 12b9ce63 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ce64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce67 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ce6d jae 0x12b9cf1b */
  if (!C.cf) goto L_12b9cf1b;
  /* 12b9ce73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce76 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9ce79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce7c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9ce7f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9ce82 mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9ce89 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9ce8e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9ce91 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9ce93 je 0x12b9cf1b */
  if (C.zf) goto L_12b9cf1b;
  /* 12b9ce99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ce9c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12b9ce9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cea2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9cea5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9cea8 mov ecx, dword ptr [edx*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9ceaf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ceb3 je 0x12b9cf1b */
  if (C.zf) goto L_12b9cf1b;
  /* 12b9ceb5 cmp dword ptr [0x12bbf47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cebc jne 0x12b9cefa */
  if (!C.zf) goto L_12b9cefa;
  /* 12b9cebe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cec1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9cec4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cec8 je 0x12b9ced8 */
  if (C.zf) goto L_12b9ced8;
  /* 12b9ceca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cece je 0x12b9cee4 */
  if (C.zf) goto L_12b9cee4;
  /* 12b9ced0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ced4 je 0x12b9cef0 */
  if (C.zf) goto L_12b9cef0;
  /* 12b9ced6 jmp 0x12b9cefa */
  goto L_12b9cefa;
L_12b9ced8:;
  /* 12b9ced8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9ceda push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12b9cedc call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9cee2u);
  /* 12b9cee2 jmp 0x12b9cefa */
  goto L_12b9cefa;
L_12b9cee4:;
  /* 12b9cee4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9cee6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12b9cee8 call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9ceeeu);
  /* 12b9ceee jmp 0x12b9cefa */
  goto L_12b9cefa;
L_12b9cef0:;
  /* 12b9cef0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9cef2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12b9cef4 call dword ptr [0x12bc1344] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1344))), 0x12b9cefau);
L_12b9cefa:;
  /* 12b9cefa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cefd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9cf00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf03 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9cf06 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9cf09 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9cf10 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12b9cf17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9cf19 jmp 0x12b9cf34 */
  goto L_12b9cf34;
L_12b9cf1b:;
  /* 12b9cf1b call 0x12b9b8a0 */
  push32(0x12b9cf20u); f_12b9b8a0();
  /* 12b9cf20 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9cf26 call 0x12b9b8b0 */
  push32(0x12b9cf2bu); f_12b9b8b0();
  /* 12b9cf2b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9cf31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b9cf34:;
  /* 12b9cf34 mov esp, ebp */
  ESP = (EBP);
  /* 12b9cf36 pop ebp */
  EBP = (pop32());
  /* 12b9cf37 ret  */
  ESPCHK(0x12b9ce60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x12b9cf40 (102 bytes, 30 insns) */
void f_12b9cf40(void) {
  FTRACE(0x12b9cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9cf41 mov ebp, esp */
  EBP = (ESP);
  /* 12b9cf43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf46 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9cf4c jae 0x12b9cf8b */
  if (!C.cf) goto L_12b9cf8b;
  /* 12b9cf4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf51 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9cf54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf57 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9cf5a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9cf5d mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9cf64 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9cf69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9cf6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9cf6e je 0x12b9cf8b */
  if (C.zf) goto L_12b9cf8b;
  /* 12b9cf70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf73 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12b9cf76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cf79 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9cf7c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9cf7f mov ecx, dword ptr [edx*4 + 0x12bc0e60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12bc0e60)));
  /* 12b9cf86 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12b9cf89 jmp 0x12b9cfa4 */
  goto L_12b9cfa4;
L_12b9cf8b:;
  /* 12b9cf8b call 0x12b9b8a0 */
  push32(0x12b9cf90u); f_12b9b8a0();
  /* 12b9cf90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9cf96 call 0x12b9b8b0 */
  push32(0x12b9cf9bu); f_12b9b8b0();
  /* 12b9cf9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9cfa1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12b9cfa4:;
  /* 12b9cfa4 pop ebp */
  EBP = (pop32());
  /* 12b9cfa5 ret  */
  ESPCHK(0x12b9cf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfb0 @ 0x12b9cfb0 (260 bytes, 83 insns) */
void f_12b9cfb0(void) {
  FTRACE(0x12b9cfb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9cfb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9cfb1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9cfb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9cfb6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9cfba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9cfbd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9cfc0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9cfc2 je 0x12b9cfcd */
  if (C.zf) goto L_12b9cfcd;
  /* 12b9cfc4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9cfc7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12b9cfca mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12b9cfcd:;
  /* 12b9cfcd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9cfd0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9cfd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9cfd8 je 0x12b9cfe2 */
  if (C.zf) goto L_12b9cfe2;
  /* 12b9cfda mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9cfdd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12b9cfdf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12b9cfe2:;
  /* 12b9cfe2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9cfe5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9cfeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9cfed je 0x12b9cff8 */
  if (C.zf) goto L_12b9cff8;
  /* 12b9cfef mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9cff2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12b9cff5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12b9cff8:;
  /* 12b9cff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9cffb push eax */
  push32((uint32_t)(EAX));
  /* 12b9cffc call dword ptr [0x12bc12c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c0))), 0x12b9d002u);
  /* 12b9d002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9d005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d009 jne 0x12b9d022 */
  if (!C.zf) goto L_12b9d022;
  /* 12b9d00b call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9d011u);
  /* 12b9d011 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d012 call 0x12b9b800 */
  push32(0x12b9d017u); f_12b9b800();
  /* 12b9d017 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d01a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d01d jmp 0x12b9d0b0 */
  goto L_12b9d0b0;
L_12b9d022:;
  /* 12b9d022 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d026 jne 0x12b9d033 */
  if (!C.zf) goto L_12b9d033;
  /* 12b9d028 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9d02b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12b9d02e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12b9d031 jmp 0x12b9d042 */
  goto L_12b9d042;
L_12b9d033:;
  /* 12b9d033 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d037 jne 0x12b9d042 */
  if (!C.zf) goto L_12b9d042;
  /* 12b9d039 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9d03c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12b9d03f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12b9d042:;
  /* 12b9d042 call 0x12b9cbb0 */
  push32(0x12b9d047u); f_12b9cbb0();
  /* 12b9d047 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9d04a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d04e jne 0x12b9d06b */
  if (!C.zf) goto L_12b9d06b;
  /* 12b9d050 call 0x12b9b8a0 */
  push32(0x12b9d055u); f_12b9b8a0();
  /* 12b9d055 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12b9d05b call 0x12b9b8b0 */
  push32(0x12b9d060u); f_12b9b8b0();
  /* 12b9d060 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12b9d066 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d069 jmp 0x12b9d0b0 */
  goto L_12b9d0b0;
L_12b9d06b:;
  /* 12b9d06b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d06e push eax */
  push32((uint32_t)(EAX));
  /* 12b9d06f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d072 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d073 call 0x12b9cda0 */
  push32(0x12b9d078u); f_12b9cda0();
  /* 12b9d078 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d07b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9d07e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12b9d081 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12b9d084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d087 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9d08a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d08d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d090 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d093 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9d09a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12b9d09d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12b9d0a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d0a5 call 0x12b9d150 */
  push32(0x12b9d0aau); f_12b9d150();
  /* 12b9d0aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d0ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b9d0b0:;
  /* 12b9d0b0 mov esp, ebp */
  ESP = (EBP);
  /* 12b9d0b2 pop ebp */
  EBP = (pop32());
  /* 12b9d0b3 ret  */
  ESPCHK(0x12b9cfb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0c0 @ 0x12b9d0c0 (134 bytes, 44 insns) */
void f_12b9d0c0(void) {
  FTRACE(0x12b9d0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d0c7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9d0ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d0cd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d0d0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d0d3 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9d0da add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d0dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12b9d0df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d0e2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d0e6 jne 0x12b9d121 */
  if (!C.zf) goto L_12b9d121;
  /* 12b9d0e8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9d0ea call 0x12b973d0 */
  push32(0x12b9d0efu); f_12b973d0();
  /* 12b9d0ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d0f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d0f5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d0f9 jne 0x12b9d117 */
  if (!C.zf) goto L_12b9d117;
  /* 12b9d0fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d0fe add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d101 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d102 call dword ptr [0x12bc1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1300))), 0x12b9d108u);
  /* 12b9d108 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d10b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9d10e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d111 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d114 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12b9d117:;
  /* 12b9d117 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12b9d119 call 0x12b97470 */
  push32(0x12b9d11eu); f_12b97470();
  /* 12b9d11e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9d121:;
  /* 12b9d121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d124 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9d127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d12a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d12d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d130 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9d137 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12b9d13b push eax */
  push32((uint32_t)(EAX));
  /* 12b9d13c call dword ptr [0x12bc1304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1304))), 0x12b9d142u);
  /* 12b9d142 mov esp, ebp */
  ESP = (EBP);
  /* 12b9d144 pop ebp */
  EBP = (pop32());
  /* 12b9d145 ret  */
  ESPCHK(0x12b9d0c0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12b9d150 (38 bytes, 13 insns) */
void f_12b9d150(void) {
  FTRACE(0x12b9d150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d150 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d151 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d153 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d156 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9d159 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d15c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d15f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d162 mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9d169 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12b9d16d push eax */
  push32((uint32_t)(EAX));
  /* 12b9d16e call dword ptr [0x12bc1308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1308))), 0x12b9d174u);
  /* 12b9d174 pop ebp */
  EBP = (pop32());
  /* 12b9d175 ret  */
  ESPCHK(0x12b9d150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x12b9d180 (218 bytes, 63 insns) */
void f_12b9d180(void) {
  FTRACE(0x12b9d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d180 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d181 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d183 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d186 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9d18d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d18f call 0x12b973d0 */
  push32(0x12b9d194u); f_12b973d0();
  /* 12b9d194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d197 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12b9d19e jmp 0x12b9d1a9 */
  goto L_12b9d1a9;
L_12b9d1a0:;
  /* 12b9d1a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d1a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d1a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b9d1a9:;
  /* 12b9d1a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d1ac cmp ecx, dword ptr [0x12bc0b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d1b2 jge 0x12b9d249 */
  if ((C.sf==C.of)) goto L_12b9d249;
  /* 12b9d1b8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d1bb mov eax, dword ptr [0x12bbf818] */
  EAX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d1c0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d1c4 je 0x12b9d244 */
  if (C.zf) goto L_12b9d244;
  /* 12b9d1c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d1c9 mov edx, dword ptr [0x12bbf818] */
  EDX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d1cf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12b9d1d2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9d1d5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d1db test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9d1dd je 0x12b9d201 */
  if (C.zf) goto L_12b9d201;
  /* 12b9d1df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d1e2 mov eax, dword ptr [0x12bbf818] */
  EAX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d1e7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12b9d1ea push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d1eb call 0x12b9df70 */
  push32(0x12b9d1f0u); f_12b9df70();
  /* 12b9d1f0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d1f3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d1f6 je 0x12b9d201 */
  if (C.zf) goto L_12b9d201;
  /* 12b9d1f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d1fb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d1fe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12b9d201:;
  /* 12b9d201 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d205 jl 0x12b9d244 */
  if ((C.sf!=C.of)) goto L_12b9d244;
  /* 12b9d207 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d20a mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d210 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12b9d213 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d216 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d217 call dword ptr [0x12bc12c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12c8))), 0x12b9d21du);
  /* 12b9d21d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d21f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d222 mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d228 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12b9d22b push edx */
  push32((uint32_t)(EDX));
  /* 12b9d22c call 0x12b94460 */
  push32(0x12b9d231u); f_12b94460();
  /* 12b9d231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d234 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d237 mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d23d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12b9d244:;
  /* 12b9d244 jmp 0x12b9d1a0 */
  goto L_12b9d1a0;
L_12b9d249:;
  /* 12b9d249 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d24b call 0x12b97470 */
  push32(0x12b9d250u); f_12b97470();
  /* 12b9d250 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d256 mov esp, ebp */
  ESP = (EBP);
  /* 12b9d258 pop ebp */
  EBP = (pop32());
  /* 12b9d259 ret  */
  ESPCHK(0x12b9d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d260 @ 0x12b9d260 (68 bytes, 26 insns) */
void f_12b9d260(void) {
  FTRACE(0x12b9d260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d260 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d261 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d263 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d264 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d268 jne 0x12b9d276 */
  if (!C.zf) goto L_12b9d276;
  /* 12b9d26a push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9d26c call 0x12b9d3d0 */
  push32(0x12b9d271u); f_12b9d3d0();
  /* 12b9d271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d274 jmp 0x12b9d2a0 */
  goto L_12b9d2a0;
L_12b9d276:;
  /* 12b9d276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d279 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d27a call 0x12b9c7e0 */
  push32(0x12b9d27fu); f_12b9c7e0();
  /* 12b9d27f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d285 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d286 call 0x12b9d2b0 */
  push32(0x12b9d28bu); f_12b9d2b0();
  /* 12b9d28b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d28e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9d291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d294 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d295 call 0x12b9c850 */
  push32(0x12b9d29au); f_12b9c850();
  /* 12b9d29a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d29d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9d2a0:;
  /* 12b9d2a0 mov esp, ebp */
  ESP = (EBP);
  /* 12b9d2a2 pop ebp */
  EBP = (pop32());
  /* 12b9d2a3 ret  */
  ESPCHK(0x12b9d260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2b0 @ 0x12b9d2b0 (65 bytes, 26 insns) */
void f_12b9d2b0(void) {
  FTRACE(0x12b9d2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d2b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d2b6 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d2b7 call 0x12b9d300 */
  push32(0x12b9d2bcu); f_12b9d300();
  /* 12b9d2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d2bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d2c1 je 0x12b9d2c8 */
  if (C.zf) goto L_12b9d2c8;
  /* 12b9d2c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d2c6 jmp 0x12b9d2ef */
  goto L_12b9d2ef;
L_12b9d2c8:;
  /* 12b9d2c8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d2cb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9d2ce and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9d2d4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9d2d6 je 0x12b9d2ed */
  if (C.zf) goto L_12b9d2ed;
  /* 12b9d2d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d2db mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9d2de push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d2df call 0x12b9e0c0 */
  push32(0x12b9d2e4u); f_12b9e0c0();
  /* 12b9d2e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d2e7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9d2e9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d2eb jmp 0x12b9d2ef */
  goto L_12b9d2ef;
L_12b9d2ed:;
  /* 12b9d2ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9d2ef:;
  /* 12b9d2ef pop ebp */
  EBP = (pop32());
  /* 12b9d2f0 ret  */
  ESPCHK(0x12b9d2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x12b9d300 (183 bytes, 62 insns) */
void f_12b9d300(void) {
  FTRACE(0x12b9d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d300 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d301 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d303 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d306 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9d30d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d310 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9d313 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d316 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9d319 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9d31c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d31f jne 0x12b9d39b */
  if (!C.zf) goto L_12b9d39b;
  /* 12b9d321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d324 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9d327 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d32d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9d32f je 0x12b9d39b */
  if (C.zf) goto L_12b9d39b;
  /* 12b9d331 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d334 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d337 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12b9d339 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d33c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9d33f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d343 jle 0x12b9d39b */
  if ((C.zf||C.sf!=C.of)) goto L_12b9d39b;
  /* 12b9d345 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d348 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d349 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d34c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9d34f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d350 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d353 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12b9d356 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d357 call 0x12b9c270 */
  push32(0x12b9d35cu); f_12b9c270();
  /* 12b9d35c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d35f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d362 jne 0x12b9d385 */
  if (!C.zf) goto L_12b9d385;
  /* 12b9d364 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d367 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9d36a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9d370 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9d372 je 0x12b9d383 */
  if (C.zf) goto L_12b9d383;
  /* 12b9d374 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d377 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9d37a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d37d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d380 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12b9d383:;
  /* 12b9d383 jmp 0x12b9d39b */
  goto L_12b9d39b;
L_12b9d385:;
  /* 12b9d385 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d388 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9d38b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d38e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d391 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12b9d394 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9d39b:;
  /* 12b9d39b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d39e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d3a1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b9d3a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9d3a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d3a9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12b9d3b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d3b3 mov esp, ebp */
  ESP = (EBP);
  /* 12b9d3b5 pop ebp */
  EBP = (pop32());
  /* 12b9d3b6 ret  */
  ESPCHK(0x12b9d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x12b9d3c0 (15 bytes, 7 insns) */
void f_12b9d3c0(void) {
  FTRACE(0x12b9d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d3c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9d3c5 call 0x12b9d3d0 */
  push32(0x12b9d3cau); f_12b9d3d0();
  /* 12b9d3ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d3cd pop ebp */
  EBP = (pop32());
  /* 12b9d3ce ret  */
  ESPCHK(0x12b9d3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3d0 @ 0x12b9d3d0 (319 bytes, 94 insns) */
void f_12b9d3d0(void) {
  FTRACE(0x12b9d3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d3d1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d3d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d3d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9d3dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9d3e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d3e6 call 0x12b973d0 */
  push32(0x12b9d3ebu); f_12b973d0();
  /* 12b9d3eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d3ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9d3f5 jmp 0x12b9d400 */
  goto L_12b9d400;
L_12b9d3f7:;
  /* 12b9d3f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d3fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d3fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9d400:;
  /* 12b9d400 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d403 cmp ecx, dword ptr [0x12bc0b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12bc0b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d409 jge 0x12b9d4f3 */
  if ((C.sf==C.of)) goto L_12b9d4f3;
  /* 12b9d40f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d412 mov eax, dword ptr [0x12bbf818] */
  EAX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d417 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d41b je 0x12b9d4ee */
  if (C.zf) goto L_12b9d4ee;
  /* 12b9d421 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d424 mov edx, dword ptr [0x12bbf818] */
  EDX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d42a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12b9d42d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12b9d430 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9d436 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9d438 je 0x12b9d4ee */
  if (C.zf) goto L_12b9d4ee;
  /* 12b9d43e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d441 mov eax, dword ptr [0x12bbf818] */
  EAX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d446 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12b9d449 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d44a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d44d push edx */
  push32((uint32_t)(EDX));
  /* 12b9d44e call 0x12b9c820 */
  push32(0x12b9d453u); f_12b9c820();
  /* 12b9d453 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d456 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d459 mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d45f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12b9d462 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9d465 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d46c je 0x12b9d4d5 */
  if (C.zf) goto L_12b9d4d5;
  /* 12b9d46e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d472 jne 0x12b9d499 */
  if (!C.zf) goto L_12b9d499;
  /* 12b9d474 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d477 mov edx, dword ptr [0x12bbf818] */
  EDX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d47d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12b9d480 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d481 call 0x12b9d2b0 */
  push32(0x12b9d486u); f_12b9d2b0();
  /* 12b9d486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d489 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d48c je 0x12b9d497 */
  if (C.zf) goto L_12b9d497;
  /* 12b9d48e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d491 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d494 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9d497:;
  /* 12b9d497 jmp 0x12b9d4d5 */
  goto L_12b9d4d5;
L_12b9d499:;
  /* 12b9d499 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d49d jne 0x12b9d4d5 */
  if (!C.zf) goto L_12b9d4d5;
  /* 12b9d49f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d4a2 mov eax, dword ptr [0x12bbf818] */
  EAX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d4a7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12b9d4aa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9d4ad and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9d4b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9d4b2 je 0x12b9d4d5 */
  if (C.zf) goto L_12b9d4d5;
  /* 12b9d4b4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d4b7 mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d4bd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12b9d4c0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d4c1 call 0x12b9d2b0 */
  push32(0x12b9d4c6u); f_12b9d2b0();
  /* 12b9d4c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d4c9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d4cc jne 0x12b9d4d5 */
  if (!C.zf) goto L_12b9d4d5;
  /* 12b9d4ce mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12b9d4d5:;
  /* 12b9d4d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d4d8 mov ecx, dword ptr [0x12bbf818] */
  ECX = (r32((uint32_t)(0x12bbf818)));
  /* 12b9d4de mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12b9d4e1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d4e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d4e5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d4e6 call 0x12b9c890 */
  push32(0x12b9d4ebu); f_12b9c890();
  /* 12b9d4eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9d4ee:;
  /* 12b9d4ee jmp 0x12b9d3f7 */
  goto L_12b9d3f7;
L_12b9d4f3:;
  /* 12b9d4f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d4f5 call 0x12b97470 */
  push32(0x12b9d4fau); f_12b97470();
  /* 12b9d4fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d4fd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d501 jne 0x12b9d508 */
  if (!C.zf) goto L_12b9d508;
  /* 12b9d503 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9d506 jmp 0x12b9d50b */
  goto L_12b9d50b;
L_12b9d508:;
  /* 12b9d508 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b9d50b:;
  /* 12b9d50b mov esp, ebp */
  ESP = (EBP);
  /* 12b9d50d pop ebp */
  EBP = (pop32());
  /* 12b9d50e ret  */
  ESPCHK(0x12b9d3d0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12b9d510 (15 bytes, 7 insns) */
void f_12b9d510(void) {
  FTRACE(0x12b9d510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d510 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d511 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d513 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d515 call 0x12b92940 */
  push32(0x12b9d51au); f_12b92940();
  /* 12b9d51a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d51d pop ebp */
  EBP = (pop32());
  /* 12b9d51e ret  */
  ESPCHK(0x12b9d510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d520 @ 0x12b9d520 (1007 bytes, 269 insns) */
void f_12b9d520(void) {
  FTRACE(0x12b9d520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d520 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d521 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d523 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d529 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d52d jl 0x12b9d535 */
  if ((C.sf!=C.of)) goto L_12b9d535;
  /* 12b9d52f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d533 jle 0x12b9d53c */
  if ((C.zf||C.sf!=C.of)) goto L_12b9d53c;
L_12b9d535:;
  /* 12b9d535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d537 jmp 0x12b9d90b */
  goto L_12b9d90b;
L_12b9d53c:;
  /* 12b9d53c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9d53e call 0x12b973d0 */
  push32(0x12b9d543u); f_12b973d0();
  /* 12b9d543 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d546 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9d54d mov eax, dword ptr [0x12bbf804] */
  EAX = (r32((uint32_t)(0x12bbf804)));
  /* 12b9d552 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d555 mov dword ptr [0x12bbf804], eax */
  w32((uint32_t)(0x12bbf804), (EAX));
L_12b9d55a:;
  /* 12b9d55a cmp dword ptr [0x12bbf814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d561 je 0x12b9d56d */
  if (C.zf) goto L_12b9d56d;
  /* 12b9d563 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9d565 call dword ptr [0x12bc1348] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1348))), 0x12b9d56bu);
  /* 12b9d56b jmp 0x12b9d55a */
  goto L_12b9d55a;
L_12b9d56d:;
  /* 12b9d56d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d571 je 0x12b9d5b1 */
  if (C.zf) goto L_12b9d5b1;
  /* 12b9d573 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d577 je 0x12b9d591 */
  if (C.zf) goto L_12b9d591;
  /* 12b9d579 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d57c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d580 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d581 call 0x12b9d910 */
  push32(0x12b9d586u); f_12b9d910();
  /* 12b9d586 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d589 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12b9d58f jmp 0x12b9d5a3 */
  goto L_12b9d5a3;
L_12b9d591:;
  /* 12b9d591 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d594 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d597 mov ecx, dword ptr [eax + 0x12bbe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12bbe4dc)));
  /* 12b9d59d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12b9d5a3:;
  /* 12b9d5a3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12b9d5a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b9d5ac jmp 0x12b9d8eb */
  goto L_12b9d8eb;
L_12b9d5b1:;
  /* 12b9d5b1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12b9d5b8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9d5bf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d5c3 je 0x12b9d8e3 */
  if (C.zf) goto L_12b9d8e3;
  /* 12b9d5c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d5cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9d5cf cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d5d2 jne 0x12b9d7f4 */
  if (!C.zf) goto L_12b9d7f4;
  /* 12b9d5d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d5db movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12b9d5df cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d5e2 jne 0x12b9d7f4 */
  if (!C.zf) goto L_12b9d7f4;
  /* 12b9d5e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d5eb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12b9d5ef cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d5f2 jne 0x12b9d7f4 */
  if (!C.zf) goto L_12b9d7f4;
  /* 12b9d5f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d5fb mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12b9d601:;
  /* 12b9d601 push 0x12bbb7ec */
  push32((uint32_t)(0x12bbb7ecu));
  /* 12b9d606 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12b9d60c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d60d call 0x12b9f770 */
  push32(0x12b9d612u); f_12b9f770();
  /* 12b9d612 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d615 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12b9d61b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d622 je 0x12b9d64d */
  if (C.zf) goto L_12b9d64d;
  /* 12b9d624 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d62a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d630 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12b9d636 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d63d je 0x12b9d64d */
  if (C.zf) goto L_12b9d64d;
  /* 12b9d63f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d645 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9d648 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d64b jne 0x12b9d673 */
  if (!C.zf) goto L_12b9d673;
L_12b9d64d:;
  /* 12b9d64d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d651 je 0x12b9d66c */
  if (C.zf) goto L_12b9d66c;
  /* 12b9d653 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9d655 call 0x12b97470 */
  push32(0x12b9d65au); f_12b97470();
  /* 12b9d65a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d65d mov edx, dword ptr [0x12bbf804] */
  EDX = (r32((uint32_t)(0x12bbf804)));
  /* 12b9d663 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d666 mov dword ptr [0x12bbf804], edx */
  w32((uint32_t)(0x12bbf804), (EDX));
L_12b9d66c:;
  /* 12b9d66c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d66e jmp 0x12b9d90b */
  goto L_12b9d90b;
L_12b9d673:;
  /* 12b9d673 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12b9d67a jmp 0x12b9d685 */
  goto L_12b9d685;
L_12b9d67c:;
  /* 12b9d67c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d67f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d682 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12b9d685:;
  /* 12b9d685 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d689 jg 0x12b9d6d3 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9d6d3;
  /* 12b9d68b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12b9d691 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d692 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12b9d698 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d699 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d69c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d69f mov ecx, dword ptr [eax + 0x12bbe4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12bbe4d8)));
  /* 12b9d6a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d6a6 call 0x12b9f730 */
  push32(0x12b9d6abu); f_12b9f730();
  /* 12b9d6ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d6ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d6b0 jne 0x12b9d6d1 */
  if (!C.zf) goto L_12b9d6d1;
  /* 12b9d6b2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d6b5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d6b8 mov eax, dword ptr [edx + 0x12bbe4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12bbe4d8)));
  /* 12b9d6be push eax */
  push32((uint32_t)(EAX));
  /* 12b9d6bf call 0x12b96800 */
  push32(0x12b9d6c4u); f_12b96800();
  /* 12b9d6c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d6c7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d6cd jne 0x12b9d6d1 */
  if (!C.zf) goto L_12b9d6d1;
  /* 12b9d6cf jmp 0x12b9d6d3 */
  goto L_12b9d6d3;
L_12b9d6d1:;
  /* 12b9d6d1 jmp 0x12b9d67c */
  goto L_12b9d67c;
L_12b9d6d3:;
  /* 12b9d6d3 push 0x12bbb7e8 */
  push32((uint32_t)(0x12bbb7e8u));
  /* 12b9d6d8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d6de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d6e1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12b9d6e7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d6ed push edx */
  push32((uint32_t)(EDX));
  /* 12b9d6ee call 0x12b9f6f0 */
  push32(0x12b9d6f3u); f_12b9f6f0();
  /* 12b9d6f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d6f6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12b9d6fc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d703 jne 0x12b9d739 */
  if (!C.zf) goto L_12b9d739;
  /* 12b9d705 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d70b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9d70e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d711 je 0x12b9d739 */
  if (C.zf) goto L_12b9d739;
  /* 12b9d713 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d717 je 0x12b9d732 */
  if (C.zf) goto L_12b9d732;
  /* 12b9d719 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9d71b call 0x12b97470 */
  push32(0x12b9d720u); f_12b97470();
  /* 12b9d720 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d723 mov edx, dword ptr [0x12bbf804] */
  EDX = (r32((uint32_t)(0x12bbf804)));
  /* 12b9d729 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d72c mov dword ptr [0x12bbf804], edx */
  w32((uint32_t)(0x12bbf804), (EDX));
L_12b9d732:;
  /* 12b9d732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d734 jmp 0x12b9d90b */
  goto L_12b9d90b;
L_12b9d739:;
  /* 12b9d739 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d73d jg 0x12b9d78a */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9d78a;
  /* 12b9d73f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12b9d745 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d746 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d74c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d74d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12b9d753 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d754 call 0x12b971f0 */
  push32(0x12b9d759u); f_12b971f0();
  /* 12b9d759 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d75c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12b9d762 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12b9d76a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12b9d770 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d771 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d774 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d775 call 0x12b9d910 */
  push32(0x12b9d77au); f_12b9d910();
  /* 12b9d77a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d77d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d77f je 0x12b9d78a */
  if (C.zf) goto L_12b9d78a;
  /* 12b9d781 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d784 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d787 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9d78a:;
  /* 12b9d78a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9d790 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d796 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12b9d79c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12b9d7a2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9d7a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d7a7 je 0x12b9d7b8 */
  if (C.zf) goto L_12b9d7b8;
  /* 12b9d7a9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12b9d7af add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d7b2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12b9d7b8:;
  /* 12b9d7b8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12b9d7be movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9d7c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d7c3 jne 0x12b9d601 */
  if (!C.zf) goto L_12b9d601;
  /* 12b9d7c9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d7cd je 0x12b9d7dc */
  if (C.zf) goto L_12b9d7dc;
  /* 12b9d7cf call 0x12b9dab0 */
  push32(0x12b9d7d4u); f_12b9dab0();
  /* 12b9d7d4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12b9d7da jmp 0x12b9d7e6 */
  goto L_12b9d7e6;
L_12b9d7dc:;
  /* 12b9d7dc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12b9d7e6:;
  /* 12b9d7e6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12b9d7ec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9d7ef jmp 0x12b9d8e1 */
  goto L_12b9d8e1;
L_12b9d7f4:;
  /* 12b9d7f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d7f7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d7f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9d7fa push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9d7fc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12b9d802 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d803 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d806 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d807 call 0x12b9dbb0 */
  push32(0x12b9d80cu); f_12b9dbb0();
  /* 12b9d80c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d80f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9d812 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d816 je 0x12b9d8e1 */
  if (C.zf) goto L_12b9d8e1;
  /* 12b9d81c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12b9d823 jmp 0x12b9d82e */
  goto L_12b9d82e;
L_12b9d825:;
  /* 12b9d825 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d828 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d82b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12b9d82e:;
  /* 12b9d82e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d832 jg 0x12b9d890 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9d890;
  /* 12b9d834 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d838 je 0x12b9d88e */
  if (C.zf) goto L_12b9d88e;
  /* 12b9d83a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d83d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d840 mov ecx, dword ptr [eax + 0x12bbe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12bbe4dc)));
  /* 12b9d846 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d847 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12b9d84d push edx */
  push32((uint32_t)(EDX));
  /* 12b9d84e call 0x12b9f660 */
  push32(0x12b9d853u); f_12b9f660();
  /* 12b9d853 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d858 je 0x12b9d885 */
  if (C.zf) goto L_12b9d885;
  /* 12b9d85a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12b9d860 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d861 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12b9d864 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d865 call 0x12b9d910 */
  push32(0x12b9d86au); f_12b9d910();
  /* 12b9d86a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d86d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d86f je 0x12b9d87c */
  if (C.zf) goto L_12b9d87c;
  /* 12b9d871 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d874 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d877 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12b9d87a jmp 0x12b9d883 */
  goto L_12b9d883;
L_12b9d87c:;
  /* 12b9d87c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12b9d883:;
  /* 12b9d883 jmp 0x12b9d88e */
  goto L_12b9d88e;
L_12b9d885:;
  /* 12b9d885 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9d888 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d88b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12b9d88e:;
  /* 12b9d88e jmp 0x12b9d825 */
  goto L_12b9d825;
L_12b9d890:;
  /* 12b9d890 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d894 je 0x12b9d8bb */
  if (C.zf) goto L_12b9d8bb;
  /* 12b9d896 call 0x12b9dab0 */
  push32(0x12b9d89bu); f_12b9dab0();
  /* 12b9d89b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9d89e push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d8a0 mov ecx, dword ptr [0x12bbe4dc] */
  ECX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9d8a6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d8a7 call 0x12b94460 */
  push32(0x12b9d8acu); f_12b94460();
  /* 12b9d8ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d8af mov dword ptr [0x12bbe4dc], 0 */
  w32((uint32_t)(0x12bbe4dc), (0x0u));
  /* 12b9d8b9 jmp 0x12b9d8e1 */
  goto L_12b9d8e1;
L_12b9d8bb:;
  /* 12b9d8bb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d8bf je 0x12b9d8ce */
  if (C.zf) goto L_12b9d8ce;
  /* 12b9d8c1 call 0x12b9dab0 */
  push32(0x12b9d8c6u); f_12b9dab0();
  /* 12b9d8c6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12b9d8cc jmp 0x12b9d8d8 */
  goto L_12b9d8d8;
L_12b9d8ce:;
  /* 12b9d8ce mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12b9d8d8:;
  /* 12b9d8d8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12b9d8de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12b9d8e1:;
  /* 12b9d8e1 jmp 0x12b9d8eb */
  goto L_12b9d8eb;
L_12b9d8e3:;
  /* 12b9d8e3 call 0x12b9dab0 */
  push32(0x12b9d8e8u); f_12b9dab0();
  /* 12b9d8e8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b9d8eb:;
  /* 12b9d8eb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d8ef je 0x12b9d908 */
  if (C.zf) goto L_12b9d908;
  /* 12b9d8f1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12b9d8f3 call 0x12b97470 */
  push32(0x12b9d8f8u); f_12b97470();
  /* 12b9d8f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d8fb mov eax, dword ptr [0x12bbf804] */
  EAX = (r32((uint32_t)(0x12bbf804)));
  /* 12b9d900 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d903 mov dword ptr [0x12bbf804], eax */
  w32((uint32_t)(0x12bbf804), (EAX));
L_12b9d908:;
  /* 12b9d908 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b9d90b:;
  /* 12b9d90b mov esp, ebp */
  ESP = (EBP);
  /* 12b9d90d pop ebp */
  EBP = (pop32());
  /* 12b9d90e ret  */
  ESPCHK(0x12b9d520u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x12b9d910 (403 bytes, 117 insns) */
void f_12b9d910(void) {
  FTRACE(0x12b9d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9d910 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9d911 mov ebp, esp */
  EBP = (ESP);
  /* 12b9d913 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9d919 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d91c push eax */
  push32((uint32_t)(EAX));
  /* 12b9d91d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12b9d923 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d924 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12b9d92a push edx */
  push32((uint32_t)(EDX));
  /* 12b9d92b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12b9d931 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d932 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9d935 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d936 call 0x12b9dbb0 */
  push32(0x12b9d93bu); f_12b9dbb0();
  /* 12b9d93b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d93e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9d940 jne 0x12b9d949 */
  if (!C.zf) goto L_12b9d949;
  /* 12b9d942 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d944 jmp 0x12b9da9f */
  goto L_12b9da9f;
L_12b9d949:;
  /* 12b9d949 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12b9d94e push 0x12bbb7f0 */
  push32((uint32_t)(0x12bbb7f0u));
  /* 12b9d953 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9d955 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12b9d95b push edx */
  push32((uint32_t)(EDX));
  /* 12b9d95c call 0x12b96800 */
  push32(0x12b9d961u); f_12b96800();
  /* 12b9d961 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d964 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d967 push eax */
  push32((uint32_t)(EAX));
  /* 12b9d968 call 0x12b939d0 */
  push32(0x12b9d96du); f_12b939d0();
  /* 12b9d96d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d970 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9d973 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9d977 jne 0x12b9d980 */
  if (!C.zf) goto L_12b9d980;
  /* 12b9d979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9d97b jmp 0x12b9da9f */
  goto L_12b9da9f;
L_12b9d980:;
  /* 12b9d980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d983 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d986 mov ecx, dword ptr [eax + 0x12bbe4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12bbe4dc)));
  /* 12b9d98c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9d98f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d992 mov eax, dword ptr [edx*4 + 0x12bbf680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12bbf680)));
  /* 12b9d999 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9d99c push 6 */
  push32((uint32_t)(0x6u));
  /* 12b9d99e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d9a1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d9a4 add ecx, 0x12bbf6d0 */
  { uint32_t _a=(ECX),_b=(0x12bbf6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d9aa push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d9ab lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12b9d9ae push edx */
  push32((uint32_t)(EDX));
  /* 12b9d9af call 0x12b9a2b0 */
  push32(0x12b9d9b4u); f_12b9a2b0();
  /* 12b9d9b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d9b7 mov eax, dword ptr [0x12bbf698] */
  EAX = (r32((uint32_t)(0x12bbf698)));
  /* 12b9d9bc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b9d9bf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12b9d9c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d9c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9d9c9 push edx */
  push32((uint32_t)(EDX));
  /* 12b9d9ca call 0x12b96980 */
  push32(0x12b9d9cfu); f_12b96980();
  /* 12b9d9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9d9d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d9d5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9d9d8 mov dword ptr [ecx + 0x12bbe4dc], eax */
  w32((uint32_t)(ECX + 0x12bbe4dc), (EAX));
  /* 12b9d9de mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12b9d9e4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9d9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9d9ed mov dword ptr [eax*4 + 0x12bbf680], edx */
  w32((uint32_t)(EAX*4 + 0x12bbf680), (EDX));
  /* 12b9d9f4 push 6 */
  push32((uint32_t)(0x6u));
  /* 12b9d9f6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12b9d9fc push ecx */
  push32((uint32_t)(ECX));
  /* 12b9d9fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9da00 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9da03 add edx, 0x12bbf6d0 */
  { uint32_t _a=(EDX),_b=(0x12bbf6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9da09 push edx */
  push32((uint32_t)(EDX));
  /* 12b9da0a call 0x12b9a2b0 */
  push32(0x12b9da0fu); f_12b9a2b0();
  /* 12b9da0f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9da12 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9da16 jne 0x12b9da23 */
  if (!C.zf) goto L_12b9da23;
  /* 12b9da18 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9da1e mov dword ptr [0x12bbf698], eax */
  w32((uint32_t)(0x12bbf698), (EAX));
L_12b9da23:;
  /* 12b9da23 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9da27 jne 0x12b9da35 */
  if (!C.zf) goto L_12b9da35;
  /* 12b9da29 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12b9da2f mov dword ptr [0x12bbf69c], ecx */
  w32((uint32_t)(0x12bbf69c), (ECX));
L_12b9da35:;
  /* 12b9da35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9da38 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9da3b call dword ptr [edx + 0x12bbe4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12bbe4e0))), 0x12b9da41u);
  /* 12b9da41 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9da43 je 0x12b9da7c */
  if (C.zf) goto L_12b9da7c;
  /* 12b9da45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9da48 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9da4b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9da4e mov dword ptr [eax + 0x12bbe4dc], ecx */
  w32((uint32_t)(EAX + 0x12bbe4dc), (ECX));
  /* 12b9da54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9da56 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9da59 push edx */
  push32((uint32_t)(EDX));
  /* 12b9da5a call 0x12b94460 */
  push32(0x12b9da5fu); f_12b94460();
  /* 12b9da5f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9da62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9da65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9da68 mov dword ptr [eax*4 + 0x12bbf680], ecx */
  w32((uint32_t)(EAX*4 + 0x12bbf680), (ECX));
  /* 12b9da6f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9da72 mov dword ptr [0x12bbf698], edx */
  w32((uint32_t)(0x12bbf698), (EDX));
  /* 12b9da78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9da7a jmp 0x12b9da9f */
  goto L_12b9da9f;
L_12b9da7c:;
  /* 12b9da7c cmp dword ptr [ebp - 0xc], 0x12bbe3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12bbe3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9da83 je 0x12b9da93 */
  if (C.zf) goto L_12b9da93;
  /* 12b9da85 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9da87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9da8a push eax */
  push32((uint32_t)(EAX));
  /* 12b9da8b call 0x12b94460 */
  push32(0x12b9da90u); f_12b94460();
  /* 12b9da90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9da93:;
  /* 12b9da93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9da96 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9da99 mov eax, dword ptr [ecx + 0x12bbe4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12bbe4dc)));
L_12b9da9f:;
  /* 12b9da9f mov esp, ebp */
  ESP = (EBP);
  /* 12b9daa1 pop ebp */
  EBP = (pop32());
  /* 12b9daa2 ret  */
  ESPCHK(0x12b9d910u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dab0 @ 0x12b9dab0 (256 bytes, 72 insns) */
void f_12b9dab0(void) {
  FTRACE(0x12b9dab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9dab0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9dab1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9dab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9dab6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12b9dabd cmp dword ptr [0x12bbe4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbe4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dac4 jne 0x12b9dae4 */
  if (!C.zf) goto L_12b9dae4;
  /* 12b9dac6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12b9dacb push 0x12bbb7f0 */
  push32((uint32_t)(0x12bbb7f0u));
  /* 12b9dad0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9dad2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12b9dad7 call 0x12b939d0 */
  push32(0x12b9dadcu); f_12b939d0();
  /* 12b9dadc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dadf mov dword ptr [0x12bbe4dc], eax */
  w32((uint32_t)(0x12bbe4dc), (EAX));
L_12b9dae4:;
  /* 12b9dae4 mov eax, dword ptr [0x12bbe4dc] */
  EAX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9dae9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12b9daec mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12b9daf3 jmp 0x12b9dafe */
  goto L_12b9dafe;
L_12b9daf5:;
  /* 12b9daf5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9daf8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dafb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12b9dafe:;
  /* 12b9dafe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9db01 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9db04 mov eax, dword ptr [edx + 0x12bbe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12bbe4dc)));
  /* 12b9db0a push eax */
  push32((uint32_t)(EAX));
  /* 12b9db0b push 0x12bbb7fc */
  push32((uint32_t)(0x12bbb7fcu));
  /* 12b9db10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9db13 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9db16 mov edx, dword ptr [ecx + 0x12bbe4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12bbe4d8)));
  /* 12b9db1c push edx */
  push32((uint32_t)(EDX));
  /* 12b9db1d push 3 */
  push32((uint32_t)(0x3u));
  /* 12b9db1f mov eax, dword ptr [0x12bbe4dc] */
  EAX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9db24 push eax */
  push32((uint32_t)(EAX));
  /* 12b9db25 call 0x12b9dd50 */
  push32(0x12b9db2au); f_12b9dd50();
  /* 12b9db2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9db2d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9db31 jge 0x12b9db79 */
  if ((C.sf==C.of)) goto L_12b9db79;
  /* 12b9db33 push 0x12bbb7e8 */
  push32((uint32_t)(0x12bbb7e8u));
  /* 12b9db38 mov ecx, dword ptr [0x12bbe4dc] */
  ECX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9db3e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9db3f call 0x12b96990 */
  push32(0x12b9db44u); f_12b96990();
  /* 12b9db44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9db47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9db4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9db4d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9db50 mov eax, dword ptr [edx + 0x12bbe4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12bbe4dc)));
  /* 12b9db56 push eax */
  push32((uint32_t)(EAX));
  /* 12b9db57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9db5a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9db5d mov edx, dword ptr [ecx + 0x12bbe4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12bbe4dc)));
  /* 12b9db63 push edx */
  push32((uint32_t)(EDX));
  /* 12b9db64 call 0x12b9f660 */
  push32(0x12b9db69u); f_12b9f660();
  /* 12b9db69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9db6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9db6e je 0x12b9db77 */
  if (C.zf) goto L_12b9db77;
  /* 12b9db70 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12b9db77:;
  /* 12b9db77 jmp 0x12b9dba7 */
  goto L_12b9dba7;
L_12b9db79:;
  /* 12b9db79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9db7d jne 0x12b9db86 */
  if (!C.zf) goto L_12b9db86;
  /* 12b9db7f mov eax, dword ptr [0x12bbe4dc] */
  EAX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9db84 jmp 0x12b9dbac */
  goto L_12b9dbac;
L_12b9db86:;
  /* 12b9db86 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9db88 mov eax, dword ptr [0x12bbe4dc] */
  EAX = (r32((uint32_t)(0x12bbe4dc)));
  /* 12b9db8d push eax */
  push32((uint32_t)(EAX));
  /* 12b9db8e call 0x12b94460 */
  push32(0x12b9db93u); f_12b94460();
  /* 12b9db93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9db96 mov dword ptr [0x12bbe4dc], 0 */
  w32((uint32_t)(0x12bbe4dc), (0x0u));
  /* 12b9dba0 mov eax, dword ptr [0x12bbe4f4] */
  EAX = (r32((uint32_t)(0x12bbe4f4)));
  /* 12b9dba5 jmp 0x12b9dbac */
  goto L_12b9dbac;
L_12b9dba7:;
  /* 12b9dba7 jmp 0x12b9daf5 */
  goto L_12b9daf5;
L_12b9dbac:;
  /* 12b9dbac mov esp, ebp */
  ESP = (EBP);
  /* 12b9dbae pop ebp */
  EBP = (pop32());
  /* 12b9dbaf ret  */
  ESPCHK(0x12b9dab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dbb0 @ 0x12b9dbb0 (388 bytes, 115 insns) */
void f_12b9dbb0(void) {
  FTRACE(0x12b9dbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9dbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9dbb1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9dbb3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9dbb9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dbbd jne 0x12b9dbc6 */
  if (!C.zf) goto L_12b9dbc6;
  /* 12b9dbbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dbc1 jmp 0x12b9dd30 */
  goto L_12b9dd30;
L_12b9dbc6:;
  /* 12b9dbc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dbc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9dbcc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dbcf jne 0x12b9dc20 */
  if (!C.zf) goto L_12b9dc20;
  /* 12b9dbd1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dbd4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12b9dbd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dbda jne 0x12b9dc20 */
  if (!C.zf) goto L_12b9dc20;
  /* 12b9dbdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9dbdf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12b9dbe2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9dbe5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12b9dbe9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dbed je 0x12b9dc09 */
  if (C.zf) goto L_12b9dc09;
  /* 12b9dbef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9dbf2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12b9dbf7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9dbfa mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12b9dc00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9dc03 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12b9dc09:;
  /* 12b9dc09 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dc0d je 0x12b9dc18 */
  if (C.zf) goto L_12b9dc18;
  /* 12b9dc0f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9dc12 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12b9dc18:;
  /* 12b9dc18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9dc1b jmp 0x12b9dd30 */
  goto L_12b9dd30;
L_12b9dc20:;
  /* 12b9dc20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dc23 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dc24 push 0x12bbe450 */
  push32((uint32_t)(0x12bbe450u));
  /* 12b9dc29 call 0x12b9f660 */
  push32(0x12b9dc2eu); f_12b9f660();
  /* 12b9dc2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dc31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dc33 je 0x12b9dce8 */
  if (C.zf) goto L_12b9dce8;
  /* 12b9dc39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dc3c push edx */
  push32((uint32_t)(EDX));
  /* 12b9dc3d push 0x12bbe3cc */
  push32((uint32_t)(0x12bbe3ccu));
  /* 12b9dc42 call 0x12b9f660 */
  push32(0x12b9dc47u); f_12b9f660();
  /* 12b9dc47 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dc4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dc4c je 0x12b9dce8 */
  if (C.zf) goto L_12b9dce8;
  /* 12b9dc52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dc55 push eax */
  push32((uint32_t)(EAX));
  /* 12b9dc56 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12b9dc5c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dc5d call 0x12b9dda0 */
  push32(0x12b9dc62u); f_12b9dda0();
  /* 12b9dc62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dc65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dc67 je 0x12b9dc70 */
  if (C.zf) goto L_12b9dc70;
  /* 12b9dc69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dc6b jmp 0x12b9dd30 */
  goto L_12b9dd30;
L_12b9dc70:;
  /* 12b9dc70 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12b9dc76 push edx */
  push32((uint32_t)(EDX));
  /* 12b9dc77 push 0x12bbf6a8 */
  push32((uint32_t)(0x12bbf6a8u));
  /* 12b9dc7c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12b9dc82 push eax */
  push32((uint32_t)(EAX));
  /* 12b9dc83 call 0x12b9f7b0 */
  push32(0x12b9dc88u); f_12b9f7b0();
  /* 12b9dc88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dc8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dc8d jne 0x12b9dc96 */
  if (!C.zf) goto L_12b9dc96;
  /* 12b9dc8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dc91 jmp 0x12b9dd30 */
  goto L_12b9dd30;
L_12b9dc96:;
  /* 12b9dc96 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9dc98 mov cx, word ptr [0x12bbf6ac] */
  CX = (r16((uint32_t)(0x12bbf6ac)));
  /* 12b9dc9f mov dword ptr [0x12bbf6b0], ecx */
  w32((uint32_t)(0x12bbf6b0), (ECX));
  /* 12b9dca5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12b9dcab push edx */
  push32((uint32_t)(EDX));
  /* 12b9dcac push 0x12bbe450 */
  push32((uint32_t)(0x12bbe450u));
  /* 12b9dcb1 call 0x12b9df00 */
  push32(0x12b9dcb6u); f_12b9df00();
  /* 12b9dcb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dcb9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dcbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9dcbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9dcc1 je 0x12b9dcd6 */
  if (C.zf) goto L_12b9dcd6;
  /* 12b9dcc3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dcc6 push edx */
  push32((uint32_t)(EDX));
  /* 12b9dcc7 push 0x12bbe3cc */
  push32((uint32_t)(0x12bbe3ccu));
  /* 12b9dccc call 0x12b96980 */
  push32(0x12b9dcd1u); f_12b96980();
  /* 12b9dcd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dcd4 jmp 0x12b9dce8 */
  goto L_12b9dce8;
L_12b9dcd6:;
  /* 12b9dcd6 push 0x12bbe450 */
  push32((uint32_t)(0x12bbe450u));
  /* 12b9dcdb push 0x12bbe3cc */
  push32((uint32_t)(0x12bbe3ccu));
  /* 12b9dce0 call 0x12b96980 */
  push32(0x12b9dce5u); f_12b96980();
  /* 12b9dce5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9dce8:;
  /* 12b9dce8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dcec je 0x12b9dd01 */
  if (C.zf) goto L_12b9dd01;
  /* 12b9dcee push 6 */
  push32((uint32_t)(0x6u));
  /* 12b9dcf0 push 0x12bbf6a8 */
  push32((uint32_t)(0x12bbf6a8u));
  /* 12b9dcf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9dcf8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9dcf9 call 0x12b9a2b0 */
  push32(0x12b9dcfeu); f_12b9a2b0();
  /* 12b9dcfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9dd01:;
  /* 12b9dd01 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dd05 je 0x12b9dd1a */
  if (C.zf) goto L_12b9dd1a;
  /* 12b9dd07 push 4 */
  push32((uint32_t)(0x4u));
  /* 12b9dd09 push 0x12bbf6b0 */
  push32((uint32_t)(0x12bbf6b0u));
  /* 12b9dd0e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12b9dd11 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dd12 call 0x12b9a2b0 */
  push32(0x12b9dd17u); f_12b9a2b0();
  /* 12b9dd17 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9dd1a:;
  /* 12b9dd1a push 0x12bbe450 */
  push32((uint32_t)(0x12bbe450u));
  /* 12b9dd1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9dd22 push edx */
  push32((uint32_t)(EDX));
  /* 12b9dd23 call 0x12b96980 */
  push32(0x12b9dd28u); f_12b96980();
  /* 12b9dd28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dd2b mov eax, 0x12bbe450 */
  EAX = (0x12bbe450u);
L_12b9dd30:;
  /* 12b9dd30 mov esp, ebp */
  ESP = (EBP);
  /* 12b9dd32 pop ebp */
  EBP = (pop32());
  /* 12b9dd33 ret  */
  ESPCHK(0x12b9dbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd40 @ 0x12b9dd40 (7 bytes, 5 insns) */
void f_12b9dd40(void) {
  FTRACE(0x12b9dd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9dd40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9dd41 mov ebp, esp */
  EBP = (ESP);
  /* 12b9dd43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dd45 pop ebp */
  EBP = (pop32());
  /* 12b9dd46 ret  */
  ESPCHK(0x12b9dd40u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12b9dd50 (79 bytes, 28 insns) */
void f_12b9dd50(void) {
  FTRACE(0x12b9dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9dd51 mov ebp, esp */
  EBP = (ESP);
  /* 12b9dd53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9dd56 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12b9dd59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9dd5c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9dd63 jmp 0x12b9dd6e */
  goto L_12b9dd6e;
L_12b9dd65:;
  /* 12b9dd65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9dd68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dd6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12b9dd6e:;
  /* 12b9dd6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9dd71 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dd74 jge 0x12b9dd94 */
  if ((C.sf==C.of)) goto L_12b9dd94;
  /* 12b9dd76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9dd79 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dd7c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9dd7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9dd82 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12b9dd85 push edx */
  push32((uint32_t)(EDX));
  /* 12b9dd86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dd89 push eax */
  push32((uint32_t)(EAX));
  /* 12b9dd8a call 0x12b96990 */
  push32(0x12b9dd8fu); f_12b96990();
  /* 12b9dd8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dd92 jmp 0x12b9dd65 */
  goto L_12b9dd65;
L_12b9dd94:;
  /* 12b9dd94 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9dd9b mov esp, ebp */
  ESP = (EBP);
  /* 12b9dd9d pop ebp */
  EBP = (pop32());
  /* 12b9dd9e ret  */
  ESPCHK(0x12b9dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dda0 @ 0x12b9dda0 (349 bytes, 122 insns) */
void f_12b9dda0(void) {
  FTRACE(0x12b9dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9dda1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9dda3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9dda6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12b9ddab push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9ddad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ddb0 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ddb1 call 0x12b97740 */
  push32(0x12b9ddb6u); f_12b97740();
  /* 12b9ddb6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ddb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ddbc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9ddbf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9ddc1 jne 0x12b9ddca */
  if (!C.zf) goto L_12b9ddca;
  /* 12b9ddc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ddc5 jmp 0x12b9def9 */
  goto L_12b9def9;
L_12b9ddca:;
  /* 12b9ddca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ddcd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9ddd0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ddd3 jne 0x12b9de00 */
  if (!C.zf) goto L_12b9de00;
  /* 12b9ddd5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9ddd8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12b9dddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ddde je 0x12b9de00 */
  if (C.zf) goto L_12b9de00;
  /* 12b9dde0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9dde3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dde6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dde7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ddea add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ddf0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ddf1 call 0x12b96980 */
  push32(0x12b9ddf6u); f_12b96980();
  /* 12b9ddf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ddf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ddfb jmp 0x12b9def9 */
  goto L_12b9def9;
L_12b9de00:;
  /* 12b9de00 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12b9de07 jmp 0x12b9de12 */
  goto L_12b9de12;
L_12b9de09:;
  /* 12b9de09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9de0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de0f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9de12:;
  /* 12b9de12 push 0x12bbb800 */
  push32((uint32_t)(0x12bbb800u));
  /* 12b9de17 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9de1a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9de1b call 0x12b9f6f0 */
  push32(0x12b9de20u); f_12b9f6f0();
  /* 12b9de20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de23 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12b9de26 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de2a jne 0x12b9de34 */
  if (!C.zf) goto L_12b9de34;
  /* 12b9de2c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9de2f jmp 0x12b9def9 */
  goto L_12b9def9;
L_12b9de34:;
  /* 12b9de34 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9de37 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de3a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9de3c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12b9de3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de43 jne 0x12b9de6a */
  if (!C.zf) goto L_12b9de6a;
  /* 12b9de45 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de49 jge 0x12b9de6a */
  if ((C.sf==C.of)) goto L_12b9de6a;
  /* 12b9de4b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9de4f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de52 je 0x12b9de6a */
  if (C.zf) goto L_12b9de6a;
  /* 12b9de54 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9de57 push edx */
  push32((uint32_t)(EDX));
  /* 12b9de58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9de5b push eax */
  push32((uint32_t)(EAX));
  /* 12b9de5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9de5f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9de60 call 0x12b971f0 */
  push32(0x12b9de65u); f_12b971f0();
  /* 12b9de65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de68 jmp 0x12b9ded0 */
  goto L_12b9ded0;
L_12b9de6a:;
  /* 12b9de6a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de6e jne 0x12b9de98 */
  if (!C.zf) goto L_12b9de98;
  /* 12b9de70 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de74 jge 0x12b9de98 */
  if ((C.sf==C.of)) goto L_12b9de98;
  /* 12b9de76 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9de7a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de7d je 0x12b9de98 */
  if (C.zf) goto L_12b9de98;
  /* 12b9de7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9de82 push eax */
  push32((uint32_t)(EAX));
  /* 12b9de83 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9de86 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9de87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9de8a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de8d push edx */
  push32((uint32_t)(EDX));
  /* 12b9de8e call 0x12b971f0 */
  push32(0x12b9de93u); f_12b971f0();
  /* 12b9de93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9de96 jmp 0x12b9ded0 */
  goto L_12b9ded0;
L_12b9de98:;
  /* 12b9de98 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9de9c jne 0x12b9decb */
  if (!C.zf) goto L_12b9decb;
  /* 12b9de9e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9dea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dea4 je 0x12b9deaf */
  if (C.zf) goto L_12b9deaf;
  /* 12b9dea6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9deaa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9dead jne 0x12b9decb */
  if (!C.zf) goto L_12b9decb;
L_12b9deaf:;
  /* 12b9deaf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9deb2 push edx */
  push32((uint32_t)(EDX));
  /* 12b9deb3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9deb6 push eax */
  push32((uint32_t)(EAX));
  /* 12b9deb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9deba add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dec0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dec1 call 0x12b971f0 */
  push32(0x12b9dec6u); f_12b971f0();
  /* 12b9dec6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dec9 jmp 0x12b9ded0 */
  goto L_12b9ded0;
L_12b9decb:;
  /* 12b9decb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dece jmp 0x12b9def9 */
  goto L_12b9def9;
L_12b9ded0:;
  /* 12b9ded0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9ded4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ded7 jne 0x12b9dedb */
  if (!C.zf) goto L_12b9dedb;
  /* 12b9ded9 jmp 0x12b9def7 */
  goto L_12b9def7;
L_12b9dedb:;
  /* 12b9dedb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12b9dedf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dee1 jne 0x12b9dee5 */
  if (!C.zf) goto L_12b9dee5;
  /* 12b9dee3 jmp 0x12b9def7 */
  goto L_12b9def7;
L_12b9dee5:;
  /* 12b9dee5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9dee8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9deeb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12b9deef mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12b9def2 jmp 0x12b9de09 */
  goto L_12b9de09;
L_12b9def7:;
  /* 12b9def7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9def9:;
  /* 12b9def9 mov esp, ebp */
  ESP = (EBP);
  /* 12b9defb pop ebp */
  EBP = (pop32());
  /* 12b9defc ret  */
  ESPCHK(0x12b9dda0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12b9df00 (101 bytes, 36 insns) */
void f_12b9df00(void) {
  FTRACE(0x12b9df00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9df00 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9df01 mov ebp, esp */
  EBP = (ESP);
  /* 12b9df03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9df06 push eax */
  push32((uint32_t)(EAX));
  /* 12b9df07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9df0a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9df0b call 0x12b96980 */
  push32(0x12b9df10u); f_12b96980();
  /* 12b9df10 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9df13 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9df16 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12b9df1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9df1c je 0x12b9df38 */
  if (C.zf) goto L_12b9df38;
  /* 12b9df1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9df21 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9df24 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9df25 push 0x12bbb808 */
  push32((uint32_t)(0x12bbb808u));
  /* 12b9df2a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9df2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9df2f push edx */
  push32((uint32_t)(EDX));
  /* 12b9df30 call 0x12b9dd50 */
  push32(0x12b9df35u); f_12b9dd50();
  /* 12b9df35 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9df38:;
  /* 12b9df38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9df3b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12b9df42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9df44 je 0x12b9df63 */
  if (C.zf) goto L_12b9df63;
  /* 12b9df46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9df49 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9df4f push edx */
  push32((uint32_t)(EDX));
  /* 12b9df50 push 0x12bbb804 */
  push32((uint32_t)(0x12bbb804u));
  /* 12b9df55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9df57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9df5a push eax */
  push32((uint32_t)(EAX));
  /* 12b9df5b call 0x12b9dd50 */
  push32(0x12b9df60u); f_12b9dd50();
  /* 12b9df60 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9df63:;
  /* 12b9df63 pop ebp */
  EBP = (pop32());
  /* 12b9df64 ret  */
  ESPCHK(0x12b9df00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df70 @ 0x12b9df70 (130 bytes, 50 insns) */
void f_12b9df70(void) {
  FTRACE(0x12b9df70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9df70 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9df71 mov ebp, esp */
  EBP = (ESP);
  /* 12b9df73 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9df74 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9df75 push esi */
  push32((uint32_t)(ESI));
  /* 12b9df76 push edi */
  push32((uint32_t)(EDI));
  /* 12b9df77 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9df7e:;
  /* 12b9df7e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9df82 jne 0x12b9dfa2 */
  if (!C.zf) goto L_12b9dfa2;
  /* 12b9df84 push 0x12bbb818 */
  push32((uint32_t)(0x12bbb818u));
  /* 12b9df89 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9df8b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12b9df8d push 0x12bbb80c */
  push32((uint32_t)(0x12bbb80cu));
  /* 12b9df92 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9df94 call 0x12b92a90 */
  push32(0x12b9df99u); f_12b92a90();
  /* 12b9df99 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9df9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9df9f jne 0x12b9dfa2 */
  if (!C.zf) goto L_12b9dfa2;
  /* 12b9dfa1 int3  */
  x86_unimpl("int3 @ 0x12b9dfa1");
L_12b9dfa2:;
  /* 12b9dfa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9dfa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9dfa6 jne 0x12b9df7e */
  if (!C.zf) goto L_12b9df7e;
  /* 12b9dfa8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dfab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9dfae and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9dfb1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9dfb3 je 0x12b9dfc1 */
  if (C.zf) goto L_12b9dfc1;
  /* 12b9dfb5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dfb8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12b9dfbf jmp 0x12b9dfe8 */
  goto L_12b9dfe8;
L_12b9dfc1:;
  /* 12b9dfc1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dfc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9dfc5 call 0x12b9c7e0 */
  push32(0x12b9dfcau); f_12b9c7e0();
  /* 12b9dfca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dfcd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dfd0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9dfd1 call 0x12b9e000 */
  push32(0x12b9dfd6u); f_12b9e000();
  /* 12b9dfd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9dfd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9dfdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9dfdf push eax */
  push32((uint32_t)(EAX));
  /* 12b9dfe0 call 0x12b9c850 */
  push32(0x12b9dfe5u); f_12b9c850();
  /* 12b9dfe5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9dfe8:;
  /* 12b9dfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9dfeb pop edi */
  EDI = (pop32());
  /* 12b9dfec pop esi */
  ESI = (pop32());
  /* 12b9dfed pop ebx */
  EBX = (pop32());
  /* 12b9dfee mov esp, ebp */
  ESP = (EBP);
  /* 12b9dff0 pop ebp */
  EBP = (pop32());
  /* 12b9dff1 ret  */
  ESPCHK(0x12b9df70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e000 @ 0x12b9e000 (190 bytes, 67 insns) */
void f_12b9e000(void) {
  FTRACE(0x12b9e000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9e000 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9e001 mov ebp, esp */
  EBP = (ESP);
  /* 12b9e003 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9e006 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9e007 push esi */
  push32((uint32_t)(ESI));
  /* 12b9e008 push edi */
  push32((uint32_t)(EDI));
  /* 12b9e009 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12b9e010 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e013 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12b9e016:;
  /* 12b9e016 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e01a jne 0x12b9e03a */
  if (!C.zf) goto L_12b9e03a;
  /* 12b9e01c push 0x12bbb6b8 */
  push32((uint32_t)(0x12bbb6b8u));
  /* 12b9e021 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9e023 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12b9e025 push 0x12bbb80c */
  push32((uint32_t)(0x12bbb80cu));
  /* 12b9e02a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e02c call 0x12b92a90 */
  push32(0x12b9e031u); f_12b92a90();
  /* 12b9e031 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e034 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e037 jne 0x12b9e03a */
  if (!C.zf) goto L_12b9e03a;
  /* 12b9e039 int3  */
  x86_unimpl("int3 @ 0x12b9e039");
L_12b9e03a:;
  /* 12b9e03a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e03c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9e03e jne 0x12b9e016 */
  if (!C.zf) goto L_12b9e016;
  /* 12b9e040 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e043 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12b9e046 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e04b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9e04d je 0x12b9e0aa */
  if (C.zf) goto L_12b9e0aa;
  /* 12b9e04f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e052 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e053 call 0x12b9d300 */
  push32(0x12b9e058u); f_12b9d300();
  /* 12b9e058 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e05b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9e05e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e061 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e062 call 0x12ba0680 */
  push32(0x12b9e067u); f_12ba0680();
  /* 12b9e067 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e06a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e06d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9e070 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e071 call 0x12ba0550 */
  push32(0x12b9e076u); f_12ba0550();
  /* 12b9e076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9e07b jge 0x12b9e086 */
  if ((C.sf==C.of)) goto L_12b9e086;
  /* 12b9e07d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12b9e084 jmp 0x12b9e0aa */
  goto L_12b9e0aa;
L_12b9e086:;
  /* 12b9e086 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e089 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e08d je 0x12b9e0aa */
  if (C.zf) goto L_12b9e0aa;
  /* 12b9e08f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e091 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e094 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12b9e097 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e098 call 0x12b94460 */
  push32(0x12b9e09du); f_12b94460();
  /* 12b9e09d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e0a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e0a3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12b9e0aa:;
  /* 12b9e0aa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e0ad mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12b9e0b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e0b7 pop edi */
  EDI = (pop32());
  /* 12b9e0b8 pop esi */
  ESI = (pop32());
  /* 12b9e0b9 pop ebx */
  EBX = (pop32());
  /* 12b9e0ba mov esp, ebp */
  ESP = (EBP);
  /* 12b9e0bc pop ebp */
  EBP = (pop32());
  /* 12b9e0bd ret  */
  ESPCHK(0x12b9e000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0c0 @ 0x12b9e0c0 (210 bytes, 63 insns) */
void f_12b9e0c0(void) {
  FTRACE(0x12b9e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9e0c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e0c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e0c7 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e0cd jae 0x12b9e0f1 */
  if (!C.cf) goto L_12b9e0f1;
  /* 12b9e0cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e0d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12b9e0d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e0d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9e0db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9e0de mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12b9e0e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12b9e0ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e0ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9e0ef jne 0x12b9e104 */
  if (!C.zf) goto L_12b9e104;
L_12b9e0f1:;
  /* 12b9e0f1 call 0x12b9b8a0 */
  push32(0x12b9e0f6u); f_12b9b8a0();
  /* 12b9e0f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9e0fc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e0ff jmp 0x12b9e18e */
  goto L_12b9e18e;
L_12b9e104:;
  /* 12b9e104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e107 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e108 call 0x12b9d0c0 */
  push32(0x12b9e10du); f_12b9d0c0();
  /* 12b9e10d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e113 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12b9e116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e119 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e11c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12b9e11f mov edx, dword ptr [eax*4 + 0x12bc0e60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12bc0e60)));
  /* 12b9e126 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12b9e12b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9e130 je 0x12b9e16d */
  if (C.zf) goto L_12b9e16d;
  /* 12b9e132 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e135 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e136 call 0x12b9cf40 */
  push32(0x12b9e13bu); f_12b9cf40();
  /* 12b9e13b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e13e push eax */
  push32((uint32_t)(EAX));
  /* 12b9e13f call dword ptr [0x12bc12d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12d4))), 0x12b9e145u);
  /* 12b9e145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9e147 jne 0x12b9e154 */
  if (!C.zf) goto L_12b9e154;
  /* 12b9e149 call dword ptr [0x12bc12b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc12b4))), 0x12b9e14fu);
  /* 12b9e14f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9e152 jmp 0x12b9e15b */
  goto L_12b9e15b;
L_12b9e154:;
  /* 12b9e154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12b9e15b:;
  /* 12b9e15b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e15f jne 0x12b9e163 */
  if (!C.zf) goto L_12b9e163;
  /* 12b9e161 jmp 0x12b9e17f */
  goto L_12b9e17f;
L_12b9e163:;
  /* 12b9e163 call 0x12b9b8b0 */
  push32(0x12b9e168u); f_12b9b8b0();
  /* 12b9e168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e16b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12b9e16d:;
  /* 12b9e16d call 0x12b9b8a0 */
  push32(0x12b9e172u); f_12b9b8a0();
  /* 12b9e172 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12b9e178 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12b9e17f:;
  /* 12b9e17f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e182 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e183 call 0x12b9d150 */
  push32(0x12b9e188u); f_12b9d150();
  /* 12b9e188 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e18b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12b9e18e:;
  /* 12b9e18e mov esp, ebp */
  ESP = (EBP);
  /* 12b9e190 pop ebp */
  EBP = (pop32());
  /* 12b9e191 ret  */
  ESPCHK(0x12b9e0c0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12b9e1a0 (219 bytes, 64 insns) */
void f_12b9e1a0(void) {
  FTRACE(0x12b9e1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9e1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9e1a1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9e1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e1a4 cmp dword ptr [0x12bbf694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e1ab je 0x12b9e241 */
  if (C.zf) goto L_12b9e241;
  /* 12b9e1b1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12b9e1b3 push 0x12bbb828 */
  push32((uint32_t)(0x12bbb828u));
  /* 12b9e1b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e1ba push 0xac */
  push32((uint32_t)(0xacu));
  /* 12b9e1bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e1c1 call 0x12b93de0 */
  push32(0x12b9e1c6u); f_12b93de0();
  /* 12b9e1c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e1c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9e1cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e1d0 jne 0x12b9e1dc */
  if (!C.zf) goto L_12b9e1dc;
  /* 12b9e1d2 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9e1d7 jmp 0x12b9e277 */
  goto L_12b9e277;
L_12b9e1dc:;
  /* 12b9e1dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e1df push eax */
  push32((uint32_t)(EAX));
  /* 12b9e1e0 call 0x12b9e280 */
  push32(0x12b9e1e5u); f_12b9e280();
  /* 12b9e1e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e1e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9e1ea je 0x12b9e20d */
  if (C.zf) goto L_12b9e20d;
  /* 12b9e1ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e1ef push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e1f0 call 0x12b9e810 */
  push32(0x12b9e1f5u); f_12b9e810();
  /* 12b9e1f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e1f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e1fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e1fd push edx */
  push32((uint32_t)(EDX));
  /* 12b9e1fe call 0x12b94460 */
  push32(0x12b9e203u); f_12b94460();
  /* 12b9e203 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e206 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9e20b jmp 0x12b9e277 */
  goto L_12b9e277;
L_12b9e20d:;
  /* 12b9e20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e210 mov dword ptr [0x12bbec98], eax */
  w32((uint32_t)(0x12bbec98), (EAX));
  /* 12b9e215 mov ecx, dword ptr [0x12bbf6b4] */
  ECX = (r32((uint32_t)(0x12bbf6b4)));
  /* 12b9e21b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e21c call 0x12b9e810 */
  push32(0x12b9e221u); f_12b9e810();
  /* 12b9e221 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e224 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e226 mov edx, dword ptr [0x12bbf6b4] */
  EDX = (r32((uint32_t)(0x12bbf6b4)));
  /* 12b9e22c push edx */
  push32((uint32_t)(EDX));
  /* 12b9e22d call 0x12b94460 */
  push32(0x12b9e232u); f_12b94460();
  /* 12b9e232 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e235 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e238 mov dword ptr [0x12bbf6b4], eax */
  w32((uint32_t)(0x12bbf6b4), (EAX));
  /* 12b9e23d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e23f jmp 0x12b9e277 */
  goto L_12b9e277;
L_12b9e241:;
  /* 12b9e241 mov dword ptr [0x12bbec98], 0x12bbeca0 */
  w32((uint32_t)(0x12bbec98), (0x12bbeca0u));
  /* 12b9e24b mov ecx, dword ptr [0x12bbf6b4] */
  ECX = (r32((uint32_t)(0x12bbf6b4)));
  /* 12b9e251 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e252 call 0x12b9e810 */
  push32(0x12b9e257u); f_12b9e810();
  /* 12b9e257 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e25a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e25c mov edx, dword ptr [0x12bbf6b4] */
  EDX = (r32((uint32_t)(0x12bbf6b4)));
  /* 12b9e262 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e263 call 0x12b94460 */
  push32(0x12b9e268u); f_12b94460();
  /* 12b9e268 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e26b mov dword ptr [0x12bbf6b4], 0 */
  w32((uint32_t)(0x12bbf6b4), (0x0u));
  /* 12b9e275 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9e277:;
  /* 12b9e277 mov esp, ebp */
  ESP = (EBP);
  /* 12b9e279 pop ebp */
  EBP = (pop32());
  /* 12b9e27a ret  */
  ESPCHK(0x12b9e1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x12b9e280 (1423 bytes, 533 insns) */
void f_12b9e280(void) {
  FTRACE(0x12b9e280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9e280 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9e281 mov ebp, esp */
  EBP = (ESP);
  /* 12b9e283 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9e286 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12b9e28d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e28f mov ax, word ptr [0x12bbf6ee] */
  AX = (r16((uint32_t)(0x12bbf6ee)));
  /* 12b9e295 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9e298 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e29a mov cx, word ptr [0x12bbf6f0] */
  CX = (r16((uint32_t)(0x12bbf6f0)));
  /* 12b9e2a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9e2a4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e2a8 jne 0x12b9e2b2 */
  if (!C.zf) goto L_12b9e2b2;
  /* 12b9e2aa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9e2ad jmp 0x12b9e80b */
  goto L_12b9e80b;
L_12b9e2b2:;
  /* 12b9e2b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e2b5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e2b8 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e2b9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12b9e2bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e2be push eax */
  push32((uint32_t)(EAX));
  /* 12b9e2bf push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e2c1 call 0x12ba1b90 */
  push32(0x12b9e2c6u); f_12ba1b90();
  /* 12b9e2c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e2c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e2cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e2ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e2d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e2d4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e2d7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e2d8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12b9e2da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e2dd push eax */
  push32((uint32_t)(EAX));
  /* 12b9e2de push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e2e0 call 0x12ba1b90 */
  push32(0x12b9e2e5u); f_12ba1b90();
  /* 12b9e2e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e2e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e2eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e2ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e2f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e2f3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e2f6 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e2f7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12b9e2f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e2fc push eax */
  push32((uint32_t)(EAX));
  /* 12b9e2fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e2ff call 0x12ba1b90 */
  push32(0x12b9e304u); f_12ba1b90();
  /* 12b9e304 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e307 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e30a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e30c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e30f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e312 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e315 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e316 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12b9e318 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e31b push eax */
  push32((uint32_t)(EAX));
  /* 12b9e31c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e31e call 0x12ba1b90 */
  push32(0x12b9e323u); f_12ba1b90();
  /* 12b9e323 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e326 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e329 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e32b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e32e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e331 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e334 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e335 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12b9e337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e33a push eax */
  push32((uint32_t)(EAX));
  /* 12b9e33b push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e33d call 0x12ba1b90 */
  push32(0x12b9e342u); f_12ba1b90();
  /* 12b9e342 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e345 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e348 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e34a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e34d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e350 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e353 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e354 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12b9e356 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e359 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e35a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e35c call 0x12ba1b90 */
  push32(0x12b9e361u); f_12ba1b90();
  /* 12b9e361 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e367 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e369 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e36c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e36f push edx */
  push32((uint32_t)(EDX));
  /* 12b9e370 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12b9e372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e375 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e376 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e378 call 0x12ba1b90 */
  push32(0x12b9e37du); f_12ba1b90();
  /* 12b9e37d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e380 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e383 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e385 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e388 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e38b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e38e push edx */
  push32((uint32_t)(EDX));
  /* 12b9e38f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12b9e391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e394 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e395 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e397 call 0x12ba1b90 */
  push32(0x12b9e39cu); f_12ba1b90();
  /* 12b9e39c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e39f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e3a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e3a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e3a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e3aa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3ad push edx */
  push32((uint32_t)(EDX));
  /* 12b9e3ae push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12b9e3b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e3b3 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e3b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e3b6 call 0x12ba1b90 */
  push32(0x12b9e3bbu); f_12ba1b90();
  /* 12b9e3bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e3c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e3c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e3c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e3c9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3cc push edx */
  push32((uint32_t)(EDX));
  /* 12b9e3cd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12b9e3cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e3d2 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e3d5 call 0x12ba1b90 */
  push32(0x12b9e3dau); f_12ba1b90();
  /* 12b9e3da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e3e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e3e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e3e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e3e8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3eb push edx */
  push32((uint32_t)(EDX));
  /* 12b9e3ec push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12b9e3ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e3f1 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e3f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e3f4 call 0x12ba1b90 */
  push32(0x12b9e3f9u); f_12ba1b90();
  /* 12b9e3f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e3fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e3ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e401 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e404 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e407 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e40a push edx */
  push32((uint32_t)(EDX));
  /* 12b9e40b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12b9e40d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e410 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e411 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e413 call 0x12ba1b90 */
  push32(0x12b9e418u); f_12ba1b90();
  /* 12b9e418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e41b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e41e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e420 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e426 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e429 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e42a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12b9e42c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e42f push eax */
  push32((uint32_t)(EAX));
  /* 12b9e430 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e432 call 0x12ba1b90 */
  push32(0x12b9e437u); f_12ba1b90();
  /* 12b9e437 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e43a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e43d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e43f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e442 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e445 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e448 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e449 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12b9e44b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e44e push eax */
  push32((uint32_t)(EAX));
  /* 12b9e44f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e451 call 0x12ba1b90 */
  push32(0x12b9e456u); f_12ba1b90();
  /* 12b9e456 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e459 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e45c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e45e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e461 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e464 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e467 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e468 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12b9e46a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e46d push eax */
  push32((uint32_t)(EAX));
  /* 12b9e46e push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e470 call 0x12ba1b90 */
  push32(0x12b9e475u); f_12ba1b90();
  /* 12b9e475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e478 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e47b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e47d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e480 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e483 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e486 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e487 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12b9e489 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e48c push eax */
  push32((uint32_t)(EAX));
  /* 12b9e48d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e48f call 0x12ba1b90 */
  push32(0x12b9e494u); f_12ba1b90();
  /* 12b9e494 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e497 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e49a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e49c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e49f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e4a2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4a5 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e4a6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12b9e4a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e4ab push eax */
  push32((uint32_t)(EAX));
  /* 12b9e4ac push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e4ae call 0x12ba1b90 */
  push32(0x12b9e4b3u); f_12ba1b90();
  /* 12b9e4b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e4b9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e4bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e4be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e4c1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4c4 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e4c5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12b9e4c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e4ca push eax */
  push32((uint32_t)(EAX));
  /* 12b9e4cb push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e4cd call 0x12ba1b90 */
  push32(0x12b9e4d2u); f_12ba1b90();
  /* 12b9e4d2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e4d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e4da mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e4dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e4e0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4e3 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e4e4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12b9e4e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e4e9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e4ea push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e4ec call 0x12ba1b90 */
  push32(0x12b9e4f1u); f_12ba1b90();
  /* 12b9e4f1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e4f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e4f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e4f9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e4fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e4ff add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e502 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e503 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12b9e505 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e508 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e509 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e50b call 0x12ba1b90 */
  push32(0x12b9e510u); f_12ba1b90();
  /* 12b9e510 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e513 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e516 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e518 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e51b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e51e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e521 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e522 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12b9e524 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e527 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e528 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e52a call 0x12ba1b90 */
  push32(0x12b9e52fu); f_12ba1b90();
  /* 12b9e52f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e532 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e535 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e537 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e53a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e53d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e540 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e541 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12b9e543 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e546 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e547 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e549 call 0x12ba1b90 */
  push32(0x12b9e54eu); f_12ba1b90();
  /* 12b9e54e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e551 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e554 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e556 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e559 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e55c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e55f push edx */
  push32((uint32_t)(EDX));
  /* 12b9e560 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12b9e562 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e565 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e566 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e568 call 0x12ba1b90 */
  push32(0x12b9e56du); f_12ba1b90();
  /* 12b9e56d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e570 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e573 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e575 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e578 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e57b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e57e push edx */
  push32((uint32_t)(EDX));
  /* 12b9e57f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12b9e581 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e584 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e585 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e587 call 0x12ba1b90 */
  push32(0x12b9e58cu); f_12ba1b90();
  /* 12b9e58c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e58f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e592 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e594 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e597 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e59a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e59d push edx */
  push32((uint32_t)(EDX));
  /* 12b9e59e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12b9e5a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e5a3 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e5a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e5a6 call 0x12ba1b90 */
  push32(0x12b9e5abu); f_12ba1b90();
  /* 12b9e5ab add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e5b1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e5b3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e5b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e5b9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5bc push edx */
  push32((uint32_t)(EDX));
  /* 12b9e5bd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12b9e5bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e5c2 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e5c5 call 0x12ba1b90 */
  push32(0x12b9e5cau); f_12ba1b90();
  /* 12b9e5ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e5d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e5d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e5d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e5d8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5db push edx */
  push32((uint32_t)(EDX));
  /* 12b9e5dc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12b9e5de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e5e1 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e5e2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e5e4 call 0x12ba1b90 */
  push32(0x12b9e5e9u); f_12ba1b90();
  /* 12b9e5e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e5ef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e5f1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e5f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e5f7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e5fa push edx */
  push32((uint32_t)(EDX));
  /* 12b9e5fb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12b9e5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e600 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e601 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e603 call 0x12ba1b90 */
  push32(0x12b9e608u); f_12ba1b90();
  /* 12b9e608 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e60b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e60e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e610 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e613 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e616 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e619 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e61a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12b9e61c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e61f push eax */
  push32((uint32_t)(EAX));
  /* 12b9e620 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e622 call 0x12ba1b90 */
  push32(0x12b9e627u); f_12ba1b90();
  /* 12b9e627 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e62a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e62d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e62f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e632 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e635 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e638 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e639 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12b9e63b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e63e push eax */
  push32((uint32_t)(EAX));
  /* 12b9e63f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e641 call 0x12ba1b90 */
  push32(0x12b9e646u); f_12ba1b90();
  /* 12b9e646 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e649 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e64c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e64e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e651 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e654 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e657 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e658 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12b9e65a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e65d push eax */
  push32((uint32_t)(EAX));
  /* 12b9e65e push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e660 call 0x12ba1b90 */
  push32(0x12b9e665u); f_12ba1b90();
  /* 12b9e665 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e668 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e66b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e66d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e670 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e673 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e676 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e677 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12b9e679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e67c push eax */
  push32((uint32_t)(EAX));
  /* 12b9e67d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e67f call 0x12ba1b90 */
  push32(0x12b9e684u); f_12ba1b90();
  /* 12b9e684 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e687 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e68a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e68c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e68f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e692 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e698 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e699 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12b9e69b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e69e push eax */
  push32((uint32_t)(EAX));
  /* 12b9e69f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e6a1 call 0x12ba1b90 */
  push32(0x12b9e6a6u); f_12ba1b90();
  /* 12b9e6a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e6ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e6ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e6b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e6b4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6ba push edx */
  push32((uint32_t)(EDX));
  /* 12b9e6bb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12b9e6bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e6c0 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e6c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e6c3 call 0x12ba1b90 */
  push32(0x12b9e6c8u); f_12ba1b90();
  /* 12b9e6c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e6ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e6d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e6d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e6d6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6dc push edx */
  push32((uint32_t)(EDX));
  /* 12b9e6dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12b9e6df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e6e2 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e6e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e6e5 call 0x12ba1b90 */
  push32(0x12b9e6eau); f_12ba1b90();
  /* 12b9e6ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e6f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e6f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e6f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e6f8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e6fe push edx */
  push32((uint32_t)(EDX));
  /* 12b9e6ff push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12b9e701 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e704 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e705 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e707 call 0x12ba1b90 */
  push32(0x12b9e70cu); f_12ba1b90();
  /* 12b9e70c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e70f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e712 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e714 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e717 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e71a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e720 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e721 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12b9e723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e726 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e727 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e729 call 0x12ba1b90 */
  push32(0x12b9e72eu); f_12ba1b90();
  /* 12b9e72e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e731 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e734 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e736 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e739 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e73c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e742 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e743 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12b9e745 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e748 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e749 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e74b call 0x12ba1b90 */
  push32(0x12b9e750u); f_12ba1b90();
  /* 12b9e750 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e753 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e756 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e758 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e75e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e764 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e765 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12b9e767 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e76a push eax */
  push32((uint32_t)(EAX));
  /* 12b9e76b push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e76d call 0x12ba1b90 */
  push32(0x12b9e772u); f_12ba1b90();
  /* 12b9e772 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e775 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e778 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e77a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e77d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e780 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e786 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e787 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12b9e789 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9e78c push eax */
  push32((uint32_t)(EAX));
  /* 12b9e78d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e78f call 0x12ba1b90 */
  push32(0x12b9e794u); f_12ba1b90();
  /* 12b9e794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e79a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e79c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e79f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e7a2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e7a8 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e7a9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12b9e7ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e7ae push eax */
  push32((uint32_t)(EAX));
  /* 12b9e7af push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e7b1 call 0x12ba1b90 */
  push32(0x12b9e7b6u); f_12ba1b90();
  /* 12b9e7b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e7b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e7bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e7be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e7c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e7c4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e7ca push edx */
  push32((uint32_t)(EDX));
  /* 12b9e7cb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12b9e7cd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e7d0 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e7d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e7d3 call 0x12ba1b90 */
  push32(0x12b9e7d8u); f_12ba1b90();
  /* 12b9e7d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e7db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e7de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e7e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e7e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e7e6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e7ec push edx */
  push32((uint32_t)(EDX));
  /* 12b9e7ed push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12b9e7f2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9e7f5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e7f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9e7f8 call 0x12ba1b90 */
  push32(0x12b9e7fdu); f_12ba1b90();
  /* 12b9e7fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e800 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9e803 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9e805 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12b9e808 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12b9e80b:;
  /* 12b9e80b mov esp, ebp */
  ESP = (EBP);
  /* 12b9e80d pop ebp */
  EBP = (pop32());
  /* 12b9e80e ret  */
  ESPCHK(0x12b9e280u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12b9e810 (779 bytes, 265 insns) */
void f_12b9e810(void) {
  FTRACE(0x12b9e810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9e810 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9e811 mov ebp, esp */
  EBP = (ESP);
  /* 12b9e813 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9e817 jne 0x12b9e81e */
  if (!C.zf) goto L_12b9e81e;
  /* 12b9e819 jmp 0x12b9eb19 */
  goto L_12b9eb19;
L_12b9e81e:;
  /* 12b9e81e push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e820 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e823 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9e826 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e827 call 0x12b94460 */
  push32(0x12b9e82cu); f_12b94460();
  /* 12b9e82c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e82f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e831 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e834 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9e837 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e838 call 0x12b94460 */
  push32(0x12b9e83du); f_12b94460();
  /* 12b9e83d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e840 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e842 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e845 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9e848 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e849 call 0x12b94460 */
  push32(0x12b9e84eu); f_12b94460();
  /* 12b9e84e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e851 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e853 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e856 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9e859 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e85a call 0x12b94460 */
  push32(0x12b9e85fu); f_12b94460();
  /* 12b9e85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e862 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e864 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e867 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b9e86a push eax */
  push32((uint32_t)(EAX));
  /* 12b9e86b call 0x12b94460 */
  push32(0x12b9e870u); f_12b94460();
  /* 12b9e870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e873 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e875 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e878 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b9e87b push edx */
  push32((uint32_t)(EDX));
  /* 12b9e87c call 0x12b94460 */
  push32(0x12b9e881u); f_12b94460();
  /* 12b9e881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e884 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e886 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e889 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9e88b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e88c call 0x12b94460 */
  push32(0x12b9e891u); f_12b94460();
  /* 12b9e891 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e894 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e896 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e899 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12b9e89c push eax */
  push32((uint32_t)(EAX));
  /* 12b9e89d call 0x12b94460 */
  push32(0x12b9e8a2u); f_12b94460();
  /* 12b9e8a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8aa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12b9e8ad push edx */
  push32((uint32_t)(EDX));
  /* 12b9e8ae call 0x12b94460 */
  push32(0x12b9e8b3u); f_12b94460();
  /* 12b9e8b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8bb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12b9e8be push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e8bf call 0x12b94460 */
  push32(0x12b9e8c4u); f_12b94460();
  /* 12b9e8c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8cc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12b9e8cf push eax */
  push32((uint32_t)(EAX));
  /* 12b9e8d0 call 0x12b94460 */
  push32(0x12b9e8d5u); f_12b94460();
  /* 12b9e8d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8dd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12b9e8e0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e8e1 call 0x12b94460 */
  push32(0x12b9e8e6u); f_12b94460();
  /* 12b9e8e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8ee mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12b9e8f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e8f2 call 0x12b94460 */
  push32(0x12b9e8f7u); f_12b94460();
  /* 12b9e8f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e8fa push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e8fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e8ff mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12b9e902 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e903 call 0x12b94460 */
  push32(0x12b9e908u); f_12b94460();
  /* 12b9e908 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e90b push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e90d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e910 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12b9e913 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e914 call 0x12b94460 */
  push32(0x12b9e919u); f_12b94460();
  /* 12b9e919 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e91c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e91e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e921 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12b9e924 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e925 call 0x12b94460 */
  push32(0x12b9e92au); f_12b94460();
  /* 12b9e92a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e92d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e92f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e932 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12b9e935 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e936 call 0x12b94460 */
  push32(0x12b9e93bu); f_12b94460();
  /* 12b9e93b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e93e push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e943 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12b9e946 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e947 call 0x12b94460 */
  push32(0x12b9e94cu); f_12b94460();
  /* 12b9e94c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e94f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e954 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12b9e957 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e958 call 0x12b94460 */
  push32(0x12b9e95du); f_12b94460();
  /* 12b9e95d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e960 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e962 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e965 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12b9e968 push eax */
  push32((uint32_t)(EAX));
  /* 12b9e969 call 0x12b94460 */
  push32(0x12b9e96eu); f_12b94460();
  /* 12b9e96e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e971 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e976 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12b9e979 push edx */
  push32((uint32_t)(EDX));
  /* 12b9e97a call 0x12b94460 */
  push32(0x12b9e97fu); f_12b94460();
  /* 12b9e97f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e982 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e987 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12b9e98a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e98b call 0x12b94460 */
  push32(0x12b9e990u); f_12b94460();
  /* 12b9e990 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e993 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e998 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12b9e99b push eax */
  push32((uint32_t)(EAX));
  /* 12b9e99c call 0x12b94460 */
  push32(0x12b9e9a1u); f_12b94460();
  /* 12b9e9a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9a6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9a9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12b9e9ac push edx */
  push32((uint32_t)(EDX));
  /* 12b9e9ad call 0x12b94460 */
  push32(0x12b9e9b2u); f_12b94460();
  /* 12b9e9b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9ba mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12b9e9bd push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e9be call 0x12b94460 */
  push32(0x12b9e9c3u); f_12b94460();
  /* 12b9e9c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9cb mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12b9e9ce push eax */
  push32((uint32_t)(EAX));
  /* 12b9e9cf call 0x12b94460 */
  push32(0x12b9e9d4u); f_12b94460();
  /* 12b9e9d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9dc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12b9e9df push edx */
  push32((uint32_t)(EDX));
  /* 12b9e9e0 call 0x12b94460 */
  push32(0x12b9e9e5u); f_12b94460();
  /* 12b9e9e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9ed mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12b9e9f0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9e9f1 call 0x12b94460 */
  push32(0x12b9e9f6u); f_12b94460();
  /* 12b9e9f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9e9f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9e9fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9e9fe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12b9ea01 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ea02 call 0x12b94460 */
  push32(0x12b9ea07u); f_12b94460();
  /* 12b9ea07 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea0a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea0f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12b9ea12 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ea13 call 0x12b94460 */
  push32(0x12b9ea18u); f_12b94460();
  /* 12b9ea18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea1b push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea20 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12b9ea23 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ea24 call 0x12b94460 */
  push32(0x12b9ea29u); f_12b94460();
  /* 12b9ea29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea2c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea31 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12b9ea34 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ea35 call 0x12b94460 */
  push32(0x12b9ea3au); f_12b94460();
  /* 12b9ea3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea42 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12b9ea48 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ea49 call 0x12b94460 */
  push32(0x12b9ea4eu); f_12b94460();
  /* 12b9ea4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea56 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12b9ea5c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ea5d call 0x12b94460 */
  push32(0x12b9ea62u); f_12b94460();
  /* 12b9ea62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea65 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea6a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12b9ea70 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ea71 call 0x12b94460 */
  push32(0x12b9ea76u); f_12b94460();
  /* 12b9ea76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea7e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12b9ea84 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ea85 call 0x12b94460 */
  push32(0x12b9ea8au); f_12b94460();
  /* 12b9ea8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ea8d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ea8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ea92 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12b9ea98 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ea99 call 0x12b94460 */
  push32(0x12b9ea9eu); f_12b94460();
  /* 12b9ea9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eaa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eaa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eaa6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12b9eaac push eax */
  push32((uint32_t)(EAX));
  /* 12b9eaad call 0x12b94460 */
  push32(0x12b9eab2u); f_12b94460();
  /* 12b9eab2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eaba mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12b9eac0 push edx */
  push32((uint32_t)(EDX));
  /* 12b9eac1 call 0x12b94460 */
  push32(0x12b9eac6u); f_12b94460();
  /* 12b9eac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eacb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eace mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12b9ead4 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ead5 call 0x12b94460 */
  push32(0x12b9eadau); f_12b94460();
  /* 12b9eada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eadd push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eadf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eae2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12b9eae8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9eae9 call 0x12b94460 */
  push32(0x12b9eaeeu); f_12b94460();
  /* 12b9eaee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eaf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eaf3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eaf6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12b9eafc push edx */
  push32((uint32_t)(EDX));
  /* 12b9eafd call 0x12b94460 */
  push32(0x12b9eb02u); f_12b94460();
  /* 12b9eb02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eb05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eb07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9eb0a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12b9eb10 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9eb11 call 0x12b94460 */
  push32(0x12b9eb16u); f_12b94460();
  /* 12b9eb16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9eb19:;
  /* 12b9eb19 pop ebp */
  EBP = (pop32());
  /* 12b9eb1a ret  */
  ESPCHK(0x12b9e810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x12b9eb20 (678 bytes, 180 insns) */
void f_12b9eb20(void) {
  FTRACE(0x12b9eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9eb21 mov ebp, esp */
  EBP = (ESP);
  /* 12b9eb23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9eb26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9eb2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9eb2f mov ax, word ptr [0x12bbf6ea] */
  AX = (r16((uint32_t)(0x12bbf6ea)));
  /* 12b9eb35 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9eb38 cmp dword ptr [0x12bbf690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9eb3f je 0x12b9ec9a */
  if (C.zf) goto L_12b9ec9a;
  /* 12b9eb45 push 0x12bbf6b8 */
  push32((uint32_t)(0x12bbf6b8u));
  /* 12b9eb4a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12b9eb4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eb4f push ecx */
  push32((uint32_t)(ECX));
  /* 12b9eb50 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9eb52 call 0x12ba1b90 */
  push32(0x12b9eb57u); f_12ba1b90();
  /* 12b9eb57 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eb5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9eb5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9eb5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12b9eb62 push 0x12bbf6bc */
  push32((uint32_t)(0x12bbf6bcu));
  /* 12b9eb67 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12b9eb69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eb6c push eax */
  push32((uint32_t)(EAX));
  /* 12b9eb6d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9eb6f call 0x12ba1b90 */
  push32(0x12b9eb74u); f_12ba1b90();
  /* 12b9eb74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eb77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9eb7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9eb7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9eb7f push 0x12bbf6c0 */
  push32((uint32_t)(0x12bbf6c0u));
  /* 12b9eb84 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12b9eb86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eb89 push edx */
  push32((uint32_t)(EDX));
  /* 12b9eb8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9eb8c call 0x12ba1b90 */
  push32(0x12b9eb91u); f_12ba1b90();
  /* 12b9eb91 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eb94 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9eb97 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9eb99 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9eb9c mov edx, dword ptr [0x12bbf6c0] */
  EDX = (r32((uint32_t)(0x12bbf6c0)));
  /* 12b9eba2 push edx */
  push32((uint32_t)(EDX));
  /* 12b9eba3 call 0x12b9edd0 */
  push32(0x12b9eba8u); f_12b9edd0();
  /* 12b9eba8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ebab cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ebaf je 0x12b9ec09 */
  if (C.zf) goto L_12b9ec09;
  /* 12b9ebb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ebb3 mov eax, dword ptr [0x12bbf6b8] */
  EAX = (r32((uint32_t)(0x12bbf6b8)));
  /* 12b9ebb8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ebb9 call 0x12b94460 */
  push32(0x12b9ebbeu); f_12b94460();
  /* 12b9ebbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ebc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ebc3 mov ecx, dword ptr [0x12bbf6bc] */
  ECX = (r32((uint32_t)(0x12bbf6bc)));
  /* 12b9ebc9 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ebca call 0x12b94460 */
  push32(0x12b9ebcfu); f_12b94460();
  /* 12b9ebcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ebd2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ebd4 mov edx, dword ptr [0x12bbf6c0] */
  EDX = (r32((uint32_t)(0x12bbf6c0)));
  /* 12b9ebda push edx */
  push32((uint32_t)(EDX));
  /* 12b9ebdb call 0x12b94460 */
  push32(0x12b9ebe0u); f_12b94460();
  /* 12b9ebe0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ebe3 mov dword ptr [0x12bbf6b8], 0 */
  w32((uint32_t)(0x12bbf6b8), (0x0u));
  /* 12b9ebed mov dword ptr [0x12bbf6bc], 0 */
  w32((uint32_t)(0x12bbf6bc), (0x0u));
  /* 12b9ebf7 mov dword ptr [0x12bbf6c0], 0 */
  w32((uint32_t)(0x12bbf6c0), (0x0u));
  /* 12b9ec01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ec04 jmp 0x12b9edc2 */
  goto L_12b9edc2;
L_12b9ec09:;
  /* 12b9ec09 mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec0e cmp dword ptr [eax], 0x12bbed50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12bbed50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ec14 je 0x12b9ec50 */
  if (C.zf) goto L_12b9ec50;
  /* 12b9ec16 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ec18 mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec1e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9ec20 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ec21 call 0x12b94460 */
  push32(0x12b9ec26u); f_12b94460();
  /* 12b9ec26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ec29 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ec2b mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9ec33 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ec34 call 0x12b94460 */
  push32(0x12b9ec39u); f_12b94460();
  /* 12b9ec39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ec3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ec3e mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec44 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9ec47 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ec48 call 0x12b94460 */
  push32(0x12b9ec4du); f_12b94460();
  /* 12b9ec4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9ec50:;
  /* 12b9ec50 mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec56 mov edx, dword ptr [0x12bbf6b8] */
  EDX = (r32((uint32_t)(0x12bbf6b8)));
  /* 12b9ec5c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12b9ec5e mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec63 mov ecx, dword ptr [0x12bbf6bc] */
  ECX = (r32((uint32_t)(0x12bbf6bc)));
  /* 12b9ec69 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12b9ec6c mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec72 mov eax, dword ptr [0x12bbf6c0] */
  EAX = (r32((uint32_t)(0x12bbf6c0)));
  /* 12b9ec77 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12b9ec7a mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ec80 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9ec82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9ec84 mov byte ptr [0x12bbdea8], al */
  w8((uint32_t)(0x12bbdea8), (AL));
  /* 12b9ec89 mov dword ptr [0x12bbdeac], 1 */
  w32((uint32_t)(0x12bbdeac), (0x1u));
  /* 12b9ec93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ec95 jmp 0x12b9edc2 */
  goto L_12b9edc2;
L_12b9ec9a:;
  /* 12b9ec9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ec9c mov ecx, dword ptr [0x12bbf6b8] */
  ECX = (r32((uint32_t)(0x12bbf6b8)));
  /* 12b9eca2 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9eca3 call 0x12b94460 */
  push32(0x12b9eca8u); f_12b94460();
  /* 12b9eca8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ecab push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ecad mov edx, dword ptr [0x12bbf6bc] */
  EDX = (r32((uint32_t)(0x12bbf6bc)));
  /* 12b9ecb3 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ecb4 call 0x12b94460 */
  push32(0x12b9ecb9u); f_12b94460();
  /* 12b9ecb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ecbc push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ecbe mov eax, dword ptr [0x12bbf6c0] */
  EAX = (r32((uint32_t)(0x12bbf6c0)));
  /* 12b9ecc3 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ecc4 call 0x12b94460 */
  push32(0x12b9ecc9u); f_12b94460();
  /* 12b9ecc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eccc mov dword ptr [0x12bbf6b8], 0 */
  w32((uint32_t)(0x12bbf6b8), (0x0u));
  /* 12b9ecd6 mov dword ptr [0x12bbf6bc], 0 */
  w32((uint32_t)(0x12bbf6bc), (0x0u));
  /* 12b9ece0 mov dword ptr [0x12bbf6c0], 0 */
  w32((uint32_t)(0x12bbf6c0), (0x0u));
  /* 12b9ecea push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12b9ecef push 0x12bbb834 */
  push32((uint32_t)(0x12bbb834u));
  /* 12b9ecf4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ecf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ecf8 call 0x12b939d0 */
  push32(0x12b9ecfdu); f_12b939d0();
  /* 12b9ecfd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ed00 mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed06 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12b9ed08 mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed0e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ed11 jne 0x12b9ed1b */
  if (!C.zf) goto L_12b9ed1b;
  /* 12b9ed13 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ed16 jmp 0x12b9edc2 */
  goto L_12b9edc2;
L_12b9ed1b:;
  /* 12b9ed1b push 0x12bbb804 */
  push32((uint32_t)(0x12bbb804u));
  /* 12b9ed20 mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed25 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12b9ed27 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ed28 call 0x12b96980 */
  push32(0x12b9ed2du); f_12b96980();
  /* 12b9ed2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ed30 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12b9ed35 push 0x12bbb834 */
  push32((uint32_t)(0x12bbb834u));
  /* 12b9ed3a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ed3c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ed3e call 0x12b939d0 */
  push32(0x12b9ed43u); f_12b939d0();
  /* 12b9ed43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ed46 mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed4c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12b9ed4f mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed54 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ed58 jne 0x12b9ed5f */
  if (!C.zf) goto L_12b9ed5f;
  /* 12b9ed5a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ed5d jmp 0x12b9edc2 */
  goto L_12b9edc2;
L_12b9ed5f:;
  /* 12b9ed5f mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9ed68 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12b9ed6b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12b9ed70 push 0x12bbb834 */
  push32((uint32_t)(0x12bbb834u));
  /* 12b9ed75 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ed77 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ed79 call 0x12b939d0 */
  push32(0x12b9ed7eu); f_12b939d0();
  /* 12b9ed7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ed81 mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed87 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12b9ed8a mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ed90 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ed94 jne 0x12b9ed9b */
  if (!C.zf) goto L_12b9ed9b;
  /* 12b9ed96 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ed99 jmp 0x12b9edc2 */
  goto L_12b9edc2;
L_12b9ed9b:;
  /* 12b9ed9b mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9eda0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12b9eda3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12b9eda6 mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9edac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b9edae mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b9edb0 mov byte ptr [0x12bbdea8], cl */
  w8((uint32_t)(0x12bbdea8), (CL));
  /* 12b9edb6 mov dword ptr [0x12bbdeac], 1 */
  w32((uint32_t)(0x12bbdeac), (0x1u));
  /* 12b9edc0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9edc2:;
  /* 12b9edc2 mov esp, ebp */
  ESP = (EBP);
  /* 12b9edc4 pop ebp */
  EBP = (pop32());
  /* 12b9edc5 ret  */
  ESPCHK(0x12b9eb20u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12b9edd0 (125 bytes, 49 insns) */
void f_12b9edd0(void) {
  FTRACE(0x12b9edd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9edd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9edd1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9edd3 push ecx */
  push32((uint32_t)(ECX));
L_12b9edd4:;
  /* 12b9edd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9edd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9edda test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9eddc je 0x12b9ee49 */
  if (C.zf) goto L_12b9ee49;
  /* 12b9edde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ede1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9ede4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ede7 jl 0x12b9ee0d */
  if ((C.sf!=C.of)) goto L_12b9ee0d;
  /* 12b9ede9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9edec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9edef cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9edf2 jg 0x12b9ee0d */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9ee0d;
  /* 12b9edf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9edf7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9edfa sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9edfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ee00 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12b9ee02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ee05 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ee08 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b9ee0b jmp 0x12b9ee47 */
  goto L_12b9ee47;
L_12b9ee0d:;
  /* 12b9ee0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ee10 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9ee13 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ee16 jne 0x12b9ee3e */
  if (!C.zf) goto L_12b9ee3e;
  /* 12b9ee18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ee1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9ee1e:;
  /* 12b9ee1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee24 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12b9ee27 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12b9ee29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ee2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9ee32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee35 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9ee38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ee3a jne 0x12b9ee1e */
  if (!C.zf) goto L_12b9ee1e;
  /* 12b9ee3c jmp 0x12b9ee47 */
  goto L_12b9ee47;
L_12b9ee3e:;
  /* 12b9ee3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9ee41 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ee44 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12b9ee47:;
  /* 12b9ee47 jmp 0x12b9edd4 */
  goto L_12b9edd4;
L_12b9ee49:;
  /* 12b9ee49 mov esp, ebp */
  ESP = (EBP);
  /* 12b9ee4b pop ebp */
  EBP = (pop32());
  /* 12b9ee4c ret  */
  ESPCHK(0x12b9edd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee50 @ 0x12b9ee50 (304 bytes, 85 insns) */
void f_12b9ee50(void) {
  FTRACE(0x12b9ee50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9ee50 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9ee51 mov ebp, esp */
  EBP = (ESP);
  /* 12b9ee53 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ee54 cmp dword ptr [0x12bbf68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ee5b je 0x12b9ef1c */
  if (C.zf) goto L_12b9ef1c;
  /* 12b9ee61 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12b9ee63 push 0x12bbb840 */
  push32((uint32_t)(0x12bbb840u));
  /* 12b9ee68 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ee6a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12b9ee6c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9ee6e call 0x12b93de0 */
  push32(0x12b9ee73u); f_12b93de0();
  /* 12b9ee73 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ee76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9ee79 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ee7d jne 0x12b9ee89 */
  if (!C.zf) goto L_12b9ee89;
  /* 12b9ee7f mov eax, 1 */
  EAX = (0x1u);
  /* 12b9ee84 jmp 0x12b9ef7c */
  goto L_12b9ef7c;
L_12b9ee89:;
  /* 12b9ee89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee8c push eax */
  push32((uint32_t)(EAX));
  /* 12b9ee8d call 0x12b9ef80 */
  push32(0x12b9ee92u); f_12b9ef80();
  /* 12b9ee92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ee95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ee97 je 0x12b9eebd */
  if (C.zf) goto L_12b9eebd;
  /* 12b9ee99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ee9c push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ee9d call 0x12b9f210 */
  push32(0x12b9eea2u); f_12b9f210();
  /* 12b9eea2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9eea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eeaa push edx */
  push32((uint32_t)(EDX));
  /* 12b9eeab call 0x12b94460 */
  push32(0x12b9eeb0u); f_12b94460();
  /* 12b9eeb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eeb3 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9eeb8 jmp 0x12b9ef7c */
  goto L_12b9ef7c;
L_12b9eebd:;
  /* 12b9eebd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eec0 mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9eec6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9eec8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9eeca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eecd mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9eed3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12b9eed6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12b9eed9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eedc mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9eee2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12b9eee5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12b9eee8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eeeb mov dword ptr [0x12bbed88], eax */
  w32((uint32_t)(0x12bbed88), (EAX));
  /* 12b9eef0 mov ecx, dword ptr [0x12bbf6c4] */
  ECX = (r32((uint32_t)(0x12bbf6c4)));
  /* 12b9eef6 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9eef7 call 0x12b9f210 */
  push32(0x12b9eefcu); f_12b9f210();
  /* 12b9eefc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9eeff push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ef01 mov edx, dword ptr [0x12bbf6c4] */
  EDX = (r32((uint32_t)(0x12bbf6c4)));
  /* 12b9ef07 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ef08 call 0x12b94460 */
  push32(0x12b9ef0du); f_12b94460();
  /* 12b9ef0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ef10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9ef13 mov dword ptr [0x12bbf6c4], eax */
  w32((uint32_t)(0x12bbf6c4), (EAX));
  /* 12b9ef18 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ef1a jmp 0x12b9ef7c */
  goto L_12b9ef7c;
L_12b9ef1c:;
  /* 12b9ef1c mov ecx, dword ptr [0x12bbed88] */
  ECX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ef22 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9ef24 mov dword ptr [0x12bbed58], edx */
  w32((uint32_t)(0x12bbed58), (EDX));
  /* 12b9ef2a mov eax, dword ptr [0x12bbed88] */
  EAX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ef2f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12b9ef32 mov dword ptr [0x12bbed5c], ecx */
  w32((uint32_t)(0x12bbed5c), (ECX));
  /* 12b9ef38 mov edx, dword ptr [0x12bbed88] */
  EDX = (r32((uint32_t)(0x12bbed88)));
  /* 12b9ef3e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12b9ef41 mov dword ptr [0x12bbed60], eax */
  w32((uint32_t)(0x12bbed60), (EAX));
  /* 12b9ef46 mov dword ptr [0x12bbed88], 0x12bbed58 */
  w32((uint32_t)(0x12bbed88), (0x12bbed58u));
  /* 12b9ef50 mov ecx, dword ptr [0x12bbf6c4] */
  ECX = (r32((uint32_t)(0x12bbf6c4)));
  /* 12b9ef56 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ef57 call 0x12b9f210 */
  push32(0x12b9ef5cu); f_12b9f210();
  /* 12b9ef5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ef5f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9ef61 mov edx, dword ptr [0x12bbf6c4] */
  EDX = (r32((uint32_t)(0x12bbf6c4)));
  /* 12b9ef67 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ef68 call 0x12b94460 */
  push32(0x12b9ef6du); f_12b94460();
  /* 12b9ef6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ef70 mov dword ptr [0x12bbf6c4], 0 */
  w32((uint32_t)(0x12bbf6c4), (0x0u));
  /* 12b9ef7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9ef7c:;
  /* 12b9ef7c mov esp, ebp */
  ESP = (EBP);
  /* 12b9ef7e pop ebp */
  EBP = (pop32());
  /* 12b9ef7f ret  */
  ESPCHK(0x12b9ee50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x12b9ef80 (525 bytes, 200 insns) */
void f_12b9ef80(void) {
  FTRACE(0x12b9ef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9ef80 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9ef81 mov ebp, esp */
  EBP = (ESP);
  /* 12b9ef83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ef86 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12b9ef8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ef8f mov ax, word ptr [0x12bbf6e4] */
  AX = (r16((uint32_t)(0x12bbf6e4)));
  /* 12b9ef95 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9ef98 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ef9c jne 0x12b9efa6 */
  if (!C.zf) goto L_12b9efa6;
  /* 12b9ef9e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9efa1 jmp 0x12b9f189 */
  goto L_12b9f189;
L_12b9efa6:;
  /* 12b9efa6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9efa9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9efac push ecx */
  push32((uint32_t)(ECX));
  /* 12b9efad push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12b9efaf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9efb2 push edx */
  push32((uint32_t)(EDX));
  /* 12b9efb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9efb5 call 0x12ba1b90 */
  push32(0x12b9efbau); f_12ba1b90();
  /* 12b9efba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9efbd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9efc0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9efc2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9efc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9efc8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9efcb push edx */
  push32((uint32_t)(EDX));
  /* 12b9efcc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12b9efce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9efd1 push eax */
  push32((uint32_t)(EAX));
  /* 12b9efd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9efd4 call 0x12ba1b90 */
  push32(0x12b9efd9u); f_12ba1b90();
  /* 12b9efd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9efdc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9efdf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9efe1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9efe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9efe7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9efea push edx */
  push32((uint32_t)(EDX));
  /* 12b9efeb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12b9efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9eff0 push eax */
  push32((uint32_t)(EAX));
  /* 12b9eff1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9eff3 call 0x12ba1b90 */
  push32(0x12b9eff8u); f_12ba1b90();
  /* 12b9eff8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9effb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9effe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f000 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f003 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f006 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f009 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f00a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12b9f00c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f00f push eax */
  push32((uint32_t)(EAX));
  /* 12b9f010 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f012 call 0x12ba1b90 */
  push32(0x12b9f017u); f_12ba1b90();
  /* 12b9f017 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f01a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f01d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f01f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f022 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f025 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f028 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f029 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12b9f02b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f02e push eax */
  push32((uint32_t)(EAX));
  /* 12b9f02f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f031 call 0x12ba1b90 */
  push32(0x12b9f036u); f_12ba1b90();
  /* 12b9f036 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f039 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f03c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f03e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f041 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f044 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12b9f047 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f048 call 0x12b9f190 */
  push32(0x12b9f04du); f_12b9f190();
  /* 12b9f04d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f050 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f053 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f056 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f057 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12b9f059 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f05c push edx */
  push32((uint32_t)(EDX));
  /* 12b9f05d push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f05f call 0x12ba1b90 */
  push32(0x12b9f064u); f_12ba1b90();
  /* 12b9f064 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f067 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f06a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f06c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f06f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f072 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f075 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f076 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12b9f078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f07b push eax */
  push32((uint32_t)(EAX));
  /* 12b9f07c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f07e call 0x12ba1b90 */
  push32(0x12b9f083u); f_12ba1b90();
  /* 12b9f083 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f086 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f089 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f08b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f08e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f091 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f094 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f095 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12b9f097 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f09a push eax */
  push32((uint32_t)(EAX));
  /* 12b9f09b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f09d call 0x12ba1b90 */
  push32(0x12b9f0a2u); f_12ba1b90();
  /* 12b9f0a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f0a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f0aa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f0ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f0b0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0b3 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f0b4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12b9f0b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f0b9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f0ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f0bc call 0x12ba1b90 */
  push32(0x12b9f0c1u); f_12ba1b90();
  /* 12b9f0c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f0c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f0c9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f0cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f0cf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0d2 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f0d3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12b9f0d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f0d8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f0d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f0db call 0x12ba1b90 */
  push32(0x12b9f0e0u); f_12ba1b90();
  /* 12b9f0e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f0e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f0e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f0eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f0ee add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f0f1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f0f2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12b9f0f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f0f7 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f0f8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f0fa call 0x12ba1b90 */
  push32(0x12b9f0ffu); f_12ba1b90();
  /* 12b9f0ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f102 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f105 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f107 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f10a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f10d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f110 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f111 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12b9f113 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f116 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f117 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f119 call 0x12ba1b90 */
  push32(0x12b9f11eu); f_12ba1b90();
  /* 12b9f11e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f121 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f124 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f126 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f129 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f12c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f12f push edx */
  push32((uint32_t)(EDX));
  /* 12b9f130 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12b9f132 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f135 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f136 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f138 call 0x12ba1b90 */
  push32(0x12b9f13du); f_12ba1b90();
  /* 12b9f13d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f140 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f143 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f145 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f148 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f14b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f14e push edx */
  push32((uint32_t)(EDX));
  /* 12b9f14f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12b9f151 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f154 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f155 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f157 call 0x12ba1b90 */
  push32(0x12b9f15cu); f_12ba1b90();
  /* 12b9f15c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f15f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f162 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f164 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f167 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f16a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f16d push edx */
  push32((uint32_t)(EDX));
  /* 12b9f16e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12b9f170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f173 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f174 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f176 call 0x12ba1b90 */
  push32(0x12b9f17bu); f_12ba1b90();
  /* 12b9f17b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f17e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f181 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f183 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12b9f186 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12b9f189:;
  /* 12b9f189 mov esp, ebp */
  ESP = (EBP);
  /* 12b9f18b pop ebp */
  EBP = (pop32());
  /* 12b9f18c ret  */
  ESPCHK(0x12b9ef80u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12b9f190 (125 bytes, 49 insns) */
void f_12b9f190(void) {
  FTRACE(0x12b9f190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f190 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f191 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f193 push ecx */
  push32((uint32_t)(ECX));
L_12b9f194:;
  /* 12b9f194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f197 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9f19a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9f19c je 0x12b9f209 */
  if (C.zf) goto L_12b9f209;
  /* 12b9f19e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9f1a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f1a7 jl 0x12b9f1cd */
  if ((C.sf!=C.of)) goto L_12b9f1cd;
  /* 12b9f1a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9f1af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f1b2 jg 0x12b9f1cd */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9f1cd;
  /* 12b9f1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9f1ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f1bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12b9f1c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f1c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12b9f1cb jmp 0x12b9f207 */
  goto L_12b9f207;
L_12b9f1cd:;
  /* 12b9f1cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9f1d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f1d6 jne 0x12b9f1fe */
  if (!C.zf) goto L_12b9f1fe;
  /* 12b9f1d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f1db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9f1de:;
  /* 12b9f1de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f1e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f1e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12b9f1e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12b9f1e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f1ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f1ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12b9f1f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f1f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9f1f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f1fa jne 0x12b9f1de */
  if (!C.zf) goto L_12b9f1de;
  /* 12b9f1fc jmp 0x12b9f207 */
  goto L_12b9f207;
L_12b9f1fe:;
  /* 12b9f1fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f204 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12b9f207:;
  /* 12b9f207 jmp 0x12b9f194 */
  goto L_12b9f194;
L_12b9f209:;
  /* 12b9f209 mov esp, ebp */
  ESP = (EBP);
  /* 12b9f20b pop ebp */
  EBP = (pop32());
  /* 12b9f20c ret  */
  ESPCHK(0x12b9f190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f210 @ 0x12b9f210 (147 bytes, 52 insns) */
void f_12b9f210(void) {
  FTRACE(0x12b9f210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f210 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f211 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f213 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f217 jne 0x12b9f21e */
  if (!C.zf) goto L_12b9f21e;
  /* 12b9f219 jmp 0x12b9f2a1 */
  goto L_12b9f2a1;
L_12b9f21e:;
  /* 12b9f21e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f221 cmp dword ptr [eax + 0xc], 0x12bbf720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12bbf720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f228 je 0x12b9f2a1 */
  if (C.zf) goto L_12b9f2a1;
  /* 12b9f22a push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f22c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f22f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12b9f232 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f233 call 0x12b94460 */
  push32(0x12b9f238u); f_12b94460();
  /* 12b9f238 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f23b push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f23d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f240 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12b9f243 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f244 call 0x12b94460 */
  push32(0x12b9f249u); f_12b94460();
  /* 12b9f249 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f24c push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f24e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f251 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12b9f254 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f255 call 0x12b94460 */
  push32(0x12b9f25au); f_12b94460();
  /* 12b9f25a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f25d push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f262 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12b9f265 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f266 call 0x12b94460 */
  push32(0x12b9f26bu); f_12b94460();
  /* 12b9f26b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f26e push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f273 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12b9f276 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f277 call 0x12b94460 */
  push32(0x12b9f27cu); f_12b94460();
  /* 12b9f27c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f27f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f281 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f284 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12b9f287 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f288 call 0x12b94460 */
  push32(0x12b9f28du); f_12b94460();
  /* 12b9f28d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f290 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f292 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f295 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12b9f298 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f299 call 0x12b94460 */
  push32(0x12b9f29eu); f_12b94460();
  /* 12b9f29e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f2a1:;
  /* 12b9f2a1 pop ebp */
  EBP = (pop32());
  /* 12b9f2a2 ret  */
  ESPCHK(0x12b9f210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2b0 @ 0x12b9f2b0 (928 bytes, 284 insns) */
void f_12b9f2b0(void) {
  FTRACE(0x12b9f2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f2b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f2b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f2b6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12b9f2bd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12b9f2c4 cmp dword ptr [0x12bbf688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f2cb je 0x12b9f601 */
  if (C.zf) goto L_12b9f601;
  /* 12b9f2d1 cmp dword ptr [0x12bbf698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f2d8 jne 0x12b9f300 */
  if (!C.zf) goto L_12b9f300;
  /* 12b9f2da push 0x12bbf698 */
  push32((uint32_t)(0x12bbf698u));
  /* 12b9f2df push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12b9f2e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f2e6 mov ax, word ptr [0x12bbf6dc] */
  AX = (r16((uint32_t)(0x12bbf6dc)));
  /* 12b9f2ec push eax */
  push32((uint32_t)(EAX));
  /* 12b9f2ed push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f2ef call 0x12ba1b90 */
  push32(0x12b9f2f4u); f_12ba1b90();
  /* 12b9f2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f2f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f2f9 je 0x12b9f300 */
  if (C.zf) goto L_12b9f300;
  /* 12b9f2fb jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f300:;
  /* 12b9f300 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12b9f302 push 0x12bbb84c */
  push32((uint32_t)(0x12bbb84cu));
  /* 12b9f307 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f309 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12b9f30e call 0x12b939d0 */
  push32(0x12b9f313u); f_12b939d0();
  /* 12b9f313 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f316 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12b9f319 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12b9f31b push 0x12bbb84c */
  push32((uint32_t)(0x12bbb84cu));
  /* 12b9f320 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f322 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12b9f327 call 0x12b939d0 */
  push32(0x12b9f32cu); f_12b939d0();
  /* 12b9f32c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f32f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12b9f332 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12b9f334 push 0x12bbb84c */
  push32((uint32_t)(0x12bbb84cu));
  /* 12b9f339 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f33b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12b9f340 call 0x12b939d0 */
  push32(0x12b9f345u); f_12b939d0();
  /* 12b9f345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f348 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12b9f34b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12b9f34d push 0x12bbb84c */
  push32((uint32_t)(0x12bbb84cu));
  /* 12b9f352 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f354 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12b9f359 call 0x12b939d0 */
  push32(0x12b9f35eu); f_12b939d0();
  /* 12b9f35e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f361 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12b9f364 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f368 je 0x12b9f37c */
  if (C.zf) goto L_12b9f37c;
  /* 12b9f36a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f36e je 0x12b9f37c */
  if (C.zf) goto L_12b9f37c;
  /* 12b9f370 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f374 je 0x12b9f37c */
  if (C.zf) goto L_12b9f37c;
  /* 12b9f376 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f37a jne 0x12b9f381 */
  if (!C.zf) goto L_12b9f381;
L_12b9f37c:;
  /* 12b9f37c jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f381:;
  /* 12b9f381 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9f384 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12b9f387 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12b9f38e jmp 0x12b9f399 */
  goto L_12b9f399;
L_12b9f390:;
  /* 12b9f390 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9f393 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f396 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12b9f399:;
  /* 12b9f399 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f3a0 jge 0x12b9f3b5 */
  if ((C.sf==C.of)) goto L_12b9f3b5;
  /* 12b9f3a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f3a5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12b9f3a8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12b9f3aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f3ad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f3b0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b9f3b3 jmp 0x12b9f390 */
  goto L_12b9f390;
L_12b9f3b5:;
  /* 12b9f3b5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12b9f3b8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f3b9 mov ecx, dword ptr [0x12bbf698] */
  ECX = (r32((uint32_t)(0x12bbf698)));
  /* 12b9f3bf push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f3c0 call dword ptr [0x12bc1320] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1320))), 0x12b9f3c6u);
  /* 12b9f3c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f3c8 jne 0x12b9f3cf */
  if (!C.zf) goto L_12b9f3cf;
  /* 12b9f3ca jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f3cf:;
  /* 12b9f3cf cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f3d3 jbe 0x12b9f3da */
  if ((C.cf||C.zf)) goto L_12b9f3da;
  /* 12b9f3d5 jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f3da:;
  /* 12b9f3da mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12b9f3dd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12b9f3e3 mov dword ptr [0x12bbdea4], edx */
  w32((uint32_t)(0x12bbdea4), (EDX));
  /* 12b9f3e9 cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f3f0 jle 0x12b9f449 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9f449;
  /* 12b9f3f2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12b9f3f5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12b9f3f8 jmp 0x12b9f403 */
  goto L_12b9f403;
L_12b9f3fa:;
  /* 12b9f3fa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f3fd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f400 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12b9f403:;
  /* 12b9f403 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f406 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f408 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9f40a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f40c je 0x12b9f449 */
  if (C.zf) goto L_12b9f449;
  /* 12b9f40e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f411 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9f413 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12b9f416 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9f418 je 0x12b9f449 */
  if (C.zf) goto L_12b9f449;
  /* 12b9f41a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f41d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f41f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12b9f421 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12b9f424 jmp 0x12b9f42f */
  goto L_12b9f42f;
L_12b9f426:;
  /* 12b9f426 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9f429 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f42c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12b9f42f:;
  /* 12b9f42f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f432 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f434 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12b9f437 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f43a jg 0x12b9f447 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9f447;
  /* 12b9f43c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9f43f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f442 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12b9f445 jmp 0x12b9f426 */
  goto L_12b9f426;
L_12b9f447:;
  /* 12b9f447 jmp 0x12b9f3fa */
  goto L_12b9f3fa;
L_12b9f449:;
  /* 12b9f449 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f44b push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f44d push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f44f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f452 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f455 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f456 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9f45b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9f45e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f45f push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f461 call 0x12b9bc00 */
  push32(0x12b9f466u); f_12b9bc00();
  /* 12b9f466 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f469 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f46b jne 0x12b9f472 */
  if (!C.zf) goto L_12b9f472;
  /* 12b9f46d jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f472:;
  /* 12b9f472 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f475 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12b9f47a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9f47d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12b9f480 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12b9f487 jmp 0x12b9f492 */
  goto L_12b9f492;
L_12b9f489:;
  /* 12b9f489 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9f48c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f48f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12b9f492:;
  /* 12b9f492 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f499 jge 0x12b9f4b0 */
  if ((C.sf==C.of)) goto L_12b9f4b0;
  /* 12b9f49b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9f49e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12b9f4a2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12b9f4a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12b9f4a8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f4ab mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12b9f4ae jmp 0x12b9f489 */
  goto L_12b9f489;
L_12b9f4b0:;
  /* 12b9f4b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f4b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9f4b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9f4b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f4ba push edx */
  push32((uint32_t)(EDX));
  /* 12b9f4bb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12b9f4c0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9f4c3 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f4c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f4c6 call 0x12ba1e30 */
  push32(0x12b9f4cbu); f_12ba1e30();
  /* 12b9f4cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f4ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f4d0 jne 0x12b9f4d7 */
  if (!C.zf) goto L_12b9f4d7;
  /* 12b9f4d2 jmp 0x12b9f5c2 */
  goto L_12b9f5c2;
L_12b9f4d7:;
  /* 12b9f4d7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9f4da mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12b9f4df cmp dword ptr [0x12bbdea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12bbdea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f4e6 jle 0x12b9f543 */
  if ((C.zf||C.sf!=C.of)) goto L_12b9f543;
  /* 12b9f4e8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12b9f4eb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12b9f4ee jmp 0x12b9f4f9 */
  goto L_12b9f4f9;
L_12b9f4f0:;
  /* 12b9f4f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f4f3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f4f6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12b9f4f9:;
  /* 12b9f4f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f4fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12b9f4fe mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12b9f500 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9f502 je 0x12b9f543 */
  if (C.zf) goto L_12b9f543;
  /* 12b9f504 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f507 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f509 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12b9f50c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9f50e je 0x12b9f543 */
  if (C.zf) goto L_12b9f543;
  /* 12b9f510 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f513 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f515 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9f517 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12b9f51a jmp 0x12b9f525 */
  goto L_12b9f525;
L_12b9f51c:;
  /* 12b9f51c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9f51f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f522 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12b9f525:;
  /* 12b9f525 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12b9f528 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f52a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12b9f52d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f530 jg 0x12b9f541 */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9f541;
  /* 12b9f532 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12b9f535 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f538 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12b9f53f jmp 0x12b9f51c */
  goto L_12b9f51c;
L_12b9f541:;
  /* 12b9f541 jmp 0x12b9f4f0 */
  goto L_12b9f4f0;
L_12b9f543:;
  /* 12b9f543 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f546 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f549 mov dword ptr [0x12bbdc98], eax */
  w32((uint32_t)(0x12bbdc98), (EAX));
  /* 12b9f54e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9f551 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f554 mov dword ptr [0x12bbdc9c], ecx */
  w32((uint32_t)(0x12bbdc9c), (ECX));
  /* 12b9f55a cmp dword ptr [0x12bbf6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f561 je 0x12b9f574 */
  if (C.zf) goto L_12b9f574;
  /* 12b9f563 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f565 mov edx, dword ptr [0x12bbf6c8] */
  EDX = (r32((uint32_t)(0x12bbf6c8)));
  /* 12b9f56b push edx */
  push32((uint32_t)(EDX));
  /* 12b9f56c call 0x12b94460 */
  push32(0x12b9f571u); f_12b94460();
  /* 12b9f571 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f574:;
  /* 12b9f574 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f577 mov dword ptr [0x12bbf6c8], eax */
  w32((uint32_t)(0x12bbf6c8), (EAX));
  /* 12b9f57c cmp dword ptr [0x12bbf6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f583 je 0x12b9f596 */
  if (C.zf) goto L_12b9f596;
  /* 12b9f585 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f587 mov ecx, dword ptr [0x12bbf6cc] */
  ECX = (r32((uint32_t)(0x12bbf6cc)));
  /* 12b9f58d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f58e call 0x12b94460 */
  push32(0x12b9f593u); f_12b94460();
  /* 12b9f593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f596:;
  /* 12b9f596 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9f599 mov dword ptr [0x12bbf6cc], edx */
  w32((uint32_t)(0x12bbf6cc), (EDX));
  /* 12b9f59f push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5a1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9f5a4 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f5a5 call 0x12b94460 */
  push32(0x12b9f5aau); f_12b94460();
  /* 12b9f5aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5af mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9f5b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f5b3 call 0x12b94460 */
  push32(0x12b9f5b8u); f_12b94460();
  /* 12b9f5b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f5bd jmp 0x12b9f64c */
  goto L_12b9f64c;
L_12b9f5c2:;
  /* 12b9f5c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5c4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12b9f5c7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f5c8 call 0x12b94460 */
  push32(0x12b9f5cdu); f_12b94460();
  /* 12b9f5cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5d2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12b9f5d5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f5d6 call 0x12b94460 */
  push32(0x12b9f5dbu); f_12b94460();
  /* 12b9f5db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5de push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12b9f5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f5e4 call 0x12b94460 */
  push32(0x12b9f5e9u); f_12b94460();
  /* 12b9f5e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5ec push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f5ee mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12b9f5f1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f5f2 call 0x12b94460 */
  push32(0x12b9f5f7u); f_12b94460();
  /* 12b9f5f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f5fa mov eax, 1 */
  EAX = (0x1u);
  /* 12b9f5ff jmp 0x12b9f64c */
  goto L_12b9f64c;
L_12b9f601:;
  /* 12b9f601 mov dword ptr [0x12bbdc98], 0x12bbdca2 */
  w32((uint32_t)(0x12bbdc98), (0x12bbdca2u));
  /* 12b9f60b mov dword ptr [0x12bbdc9c], 0x12bbdca2 */
  w32((uint32_t)(0x12bbdc9c), (0x12bbdca2u));
  /* 12b9f615 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f617 mov eax, dword ptr [0x12bbf6c8] */
  EAX = (r32((uint32_t)(0x12bbf6c8)));
  /* 12b9f61c push eax */
  push32((uint32_t)(EAX));
  /* 12b9f61d call 0x12b94460 */
  push32(0x12b9f622u); f_12b94460();
  /* 12b9f622 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f625 push 2 */
  push32((uint32_t)(0x2u));
  /* 12b9f627 mov ecx, dword ptr [0x12bbf6cc] */
  ECX = (r32((uint32_t)(0x12bbf6cc)));
  /* 12b9f62d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f62e call 0x12b94460 */
  push32(0x12b9f633u); f_12b94460();
  /* 12b9f633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f636 mov dword ptr [0x12bbf6c8], 0 */
  w32((uint32_t)(0x12bbf6c8), (0x0u));
  /* 12b9f640 mov dword ptr [0x12bbf6cc], 0 */
  w32((uint32_t)(0x12bbf6cc), (0x0u));
  /* 12b9f64a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12b9f64c:;
  /* 12b9f64c mov esp, ebp */
  ESP = (EBP);
  /* 12b9f64e pop ebp */
  EBP = (pop32());
  /* 12b9f64f ret  */
  ESPCHK(0x12b9f2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f650 @ 0x12b9f650 (7 bytes, 5 insns) */
void f_12b9f650(void) {
  FTRACE(0x12b9f650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f650 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f651 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f655 pop ebp */
  EBP = (pop32());
  /* 12b9f656 ret  */
  ESPCHK(0x12b9f650u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12b9f660 (129 bytes, 56 insns) */
void f_12b9f660(void) {
  FTRACE(0x12b9f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f660 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12b9f664 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12b9f668 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12b9f66e jne 0x12b9f6ac */
  if (!C.zf) goto L_12b9f6ac;
L_12b9f670:;
  /* 12b9f670 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12b9f672 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f674 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f676 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f678 je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f67a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f67d jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f67f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12b9f681 je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f683 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12b9f686 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f689 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f68b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f68d je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f68f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f692 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f694 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f697 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f69a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12b9f69c jne 0x12b9f670 */
  if (!C.zf) goto L_12b9f670;
  /* 12b9f69e mov edi, edi */
  EDI = (EDI);
L_12b9f6a0:;
  /* 12b9f6a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f6a2 ret  */
  ESPCHK(0x12b9f660u, _esp0);
  ESP += 4; return;
  /* 12b9f6a3 nop  */
  /* nop */
L_12b9f6a4:;
  /* 12b9f6a4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f6a6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b9f6a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12b9f6a9 ret  */
  ESPCHK(0x12b9f660u, _esp0);
  ESP += 4; return;
  /* 12b9f6aa mov edi, edi */
  EDI = (EDI);
L_12b9f6ac:;
  /* 12b9f6ac test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12b9f6b2 je 0x12b9f6c8 */
  if (C.zf) goto L_12b9f6c8;
  /* 12b9f6b4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9f6b6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12b9f6b7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f6b9 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f6bb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12b9f6bc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f6be je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f6c0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12b9f6c6 je 0x12b9f670 */
  if (C.zf) goto L_12b9f670;
L_12b9f6c8:;
  /* 12b9f6c8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12b9f6cb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f6ce cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f6d0 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f6d2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f6d4 je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f6d6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f6d9 jne 0x12b9f6a4 */
  if (!C.zf) goto L_12b9f6a4;
  /* 12b9f6db or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12b9f6dd je 0x12b9f6a0 */
  if (C.zf) goto L_12b9f6a0;
  /* 12b9f6df add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f6e2 jmp 0x12b9f670 */
  goto L_12b9f670;
}

/* FUN_1000f6f0 @ 0x12b9f6f0 (62 bytes, 35 insns) */
void f_12b9f6f0(void) {
  FTRACE(0x12b9f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f6f3 push esi */
  push32((uint32_t)(ESI));
  /* 12b9f6f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f6f6 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6f7 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6f8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6f9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6fa push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6fb push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6fc push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6fd push eax */
  push32((uint32_t)(EAX));
  /* 12b9f6fe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f701 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9f704:;
  /* 12b9f704 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9f706 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f708 je 0x12b9f711 */
  if (C.zf) goto L_12b9f711;
  /* 12b9f70a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12b9f70b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12b9f70b");
  /* 12b9f70f jmp 0x12b9f704 */
  goto L_12b9f704;
L_12b9f711:;
  /* 12b9f711 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f714 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f717 nop  */
  /* nop */
L_12b9f718:;
  /* 12b9f718 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12b9f719 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9f71b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f71d je 0x12b9f726 */
  if (C.zf) goto L_12b9f726;
  /* 12b9f71f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b9f720 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12b9f720");
  /* 12b9f724 jae 0x12b9f718 */
  if (!C.cf) goto L_12b9f718;
L_12b9f726:;
  /* 12b9f726 mov eax, ecx */
  EAX = (ECX);
  /* 12b9f728 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f72b pop esi */
  ESI = (pop32());
  /* 12b9f72c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9f72d ret  */
  ESPCHK(0x12b9f6f0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12b9f730 (56 bytes, 31 insns) */
void f_12b9f730(void) {
  FTRACE(0x12b9f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f730 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f731 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f733 push edi */
  push32((uint32_t)(EDI));
  /* 12b9f734 push esi */
  push32((uint32_t)(ESI));
  /* 12b9f735 push ebx */
  push32((uint32_t)(EBX));
  /* 12b9f736 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9f739 jecxz 0x12b9f761 */
  x86_unimpl("jecxz @ 0x12b9f739");
  /* 12b9f73b mov ebx, ecx */
  EBX = (ECX);
  /* 12b9f73d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f740 mov esi, edi */
  ESI = (EDI);
  /* 12b9f742 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f744 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12b9f746 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9f748 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f74a mov edi, esi */
  EDI = (ESI);
  /* 12b9f74c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f74f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12b9f751 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12b9f754 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9f756 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12b9f759 ja 0x12b9f75f */
  if ((!C.cf&&!C.zf)) goto L_12b9f75f;
  /* 12b9f75b je 0x12b9f761 */
  if (C.zf) goto L_12b9f761;
  /* 12b9f75d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12b9f75e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12b9f75f:;
  /* 12b9f75f not ecx */
  ECX = (~(ECX));
L_12b9f761:;
  /* 12b9f761 mov eax, ecx */
  EAX = (ECX);
  /* 12b9f763 pop ebx */
  EBX = (pop32());
  /* 12b9f764 pop esi */
  ESI = (pop32());
  /* 12b9f765 pop edi */
  EDI = (pop32());
  /* 12b9f766 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9f767 ret  */
  ESPCHK(0x12b9f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f770 @ 0x12b9f770 (58 bytes, 32 insns) */
void f_12b9f770(void) {
  FTRACE(0x12b9f770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f770 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f771 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f773 push esi */
  push32((uint32_t)(ESI));
  /* 12b9f774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f776 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f777 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f778 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f779 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f77a push eax */
  push32((uint32_t)(EAX));
  /* 12b9f77b push eax */
  push32((uint32_t)(EAX));
  /* 12b9f77c push eax */
  push32((uint32_t)(EAX));
  /* 12b9f77d push eax */
  push32((uint32_t)(EAX));
  /* 12b9f77e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f781 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12b9f784:;
  /* 12b9f784 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12b9f786 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f788 je 0x12b9f791 */
  if (C.zf) goto L_12b9f791;
  /* 12b9f78a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12b9f78b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12b9f78b");
  /* 12b9f78f jmp 0x12b9f784 */
  goto L_12b9f784;
L_12b9f791:;
  /* 12b9f791 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12b9f794:;
  /* 12b9f794 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12b9f796 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12b9f798 je 0x12b9f7a4 */
  if (C.zf) goto L_12b9f7a4;
  /* 12b9f79a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12b9f79b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12b9f79b");
  /* 12b9f79f jae 0x12b9f794 */
  if (!C.cf) goto L_12b9f794;
  /* 12b9f7a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12b9f7a4:;
  /* 12b9f7a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f7a7 pop esi */
  ESI = (pop32());
  /* 12b9f7a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12b9f7a9 ret  */
  ESPCHK(0x12b9f770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7b0 @ 0x12b9f7b0 (512 bytes, 147 insns) */
void f_12b9f7b0(void) {
  FTRACE(0x12b9f7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f7b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f7b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f7b6 cmp dword ptr [0x12bbf714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f7bd jne 0x12b9f7e2 */
  if (!C.zf) goto L_12b9f7e2;
  /* 12b9f7bf call 0x12ba0280 */
  push32(0x12b9f7c4u); f_12ba0280();
  /* 12b9f7c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f7c6 je 0x12b9f7d2 */
  if (C.zf) goto L_12b9f7d2;
  /* 12b9f7c8 mov eax, dword ptr [0x12bc1258] */
  EAX = (r32((uint32_t)(0x12bc1258)));
  /* 12b9f7cd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9f7d0 jmp 0x12b9f7d9 */
  goto L_12b9f7d9;
L_12b9f7d2:;
  /* 12b9f7d2 mov dword ptr [ebp - 8], 0x12ba02d0 */
  w32((uint32_t)(EBP + -0x8), (0x12ba02d0u));
L_12b9f7d9:;
  /* 12b9f7d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12b9f7dc mov dword ptr [0x12bbf714], ecx */
  w32((uint32_t)(0x12bbf714), (ECX));
L_12b9f7e2:;
  /* 12b9f7e2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f7e6 jne 0x12b9f7f2 */
  if (!C.zf) goto L_12b9f7f2;
  /* 12b9f7e8 call 0x12ba00d0 */
  push32(0x12b9f7edu); f_12ba00d0();
  /* 12b9f7ed jmp 0x12b9f8be */
  goto L_12b9f8be;
L_12b9f7f2:;
  /* 12b9f7f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f7f5 mov dword ptr [0x12bbf704], edx */
  w32((uint32_t)(0x12bbf704), (EDX));
  /* 12b9f7fb cmp dword ptr [0x12bbf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f802 je 0x12b9f824 */
  if (C.zf) goto L_12b9f824;
  /* 12b9f804 mov eax, dword ptr [0x12bbf704] */
  EAX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9f809 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9f80c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9f80e je 0x12b9f824 */
  if (C.zf) goto L_12b9f824;
  /* 12b9f810 push 0x12bbf704 */
  push32((uint32_t)(0x12bbf704u));
  /* 12b9f815 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12b9f817 push 0x12bbea90 */
  push32((uint32_t)(0x12bbea90u));
  /* 12b9f81c call 0x12b9f9b0 */
  push32(0x12b9f821u); f_12b9f9b0();
  /* 12b9f821 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f824:;
  /* 12b9f824 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f827 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f82a mov dword ptr [0x12bbf708], edx */
  w32((uint32_t)(0x12bbf708), (EDX));
  /* 12b9f830 cmp dword ptr [0x12bbf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f837 je 0x12b9f859 */
  if (C.zf) goto L_12b9f859;
  /* 12b9f839 mov eax, dword ptr [0x12bbf708] */
  EAX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9f83e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9f841 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9f843 je 0x12b9f859 */
  if (C.zf) goto L_12b9f859;
  /* 12b9f845 push 0x12bbf708 */
  push32((uint32_t)(0x12bbf708u));
  /* 12b9f84a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12b9f84c push 0x12bbe9d8 */
  push32((uint32_t)(0x12bbe9d8u));
  /* 12b9f851 call 0x12b9f9b0 */
  push32(0x12b9f856u); f_12b9f9b0();
  /* 12b9f856 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f859:;
  /* 12b9f859 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12b9f863 cmp dword ptr [0x12bbf704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f86a je 0x12b9f89d */
  if (C.zf) goto L_12b9f89d;
  /* 12b9f86c mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9f872 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12b9f875 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f877 je 0x12b9f89d */
  if (C.zf) goto L_12b9f89d;
  /* 12b9f879 cmp dword ptr [0x12bbf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f880 je 0x12b9f896 */
  if (C.zf) goto L_12b9f896;
  /* 12b9f882 mov ecx, dword ptr [0x12bbf708] */
  ECX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9f888 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12b9f88b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9f88d je 0x12b9f896 */
  if (C.zf) goto L_12b9f896;
  /* 12b9f88f call 0x12b9fa40 */
  push32(0x12b9f894u); f_12b9fa40();
  /* 12b9f894 jmp 0x12b9f89b */
  goto L_12b9f89b;
L_12b9f896:;
  /* 12b9f896 call 0x12b9fe30 */
  push32(0x12b9f89bu); f_12b9fe30();
L_12b9f89b:;
  /* 12b9f89b jmp 0x12b9f8be */
  goto L_12b9f8be;
L_12b9f89d:;
  /* 12b9f89d cmp dword ptr [0x12bbf708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f8a4 je 0x12b9f8b9 */
  if (C.zf) goto L_12b9f8b9;
  /* 12b9f8a6 mov eax, dword ptr [0x12bbf708] */
  EAX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9f8ab movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12b9f8ae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9f8b0 je 0x12b9f8b9 */
  if (C.zf) goto L_12b9f8b9;
  /* 12b9f8b2 call 0x12b9ffd0 */
  push32(0x12b9f8b7u); f_12b9ffd0();
  /* 12b9f8b7 jmp 0x12b9f8be */
  goto L_12b9f8be;
L_12b9f8b9:;
  /* 12b9f8b9 call 0x12ba00d0 */
  push32(0x12b9f8beu); f_12ba00d0();
L_12b9f8be:;
  /* 12b9f8be cmp dword ptr [0x12bbf70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f8c5 jne 0x12b9f8ce */
  if (!C.zf) goto L_12b9f8ce;
  /* 12b9f8c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f8c9 jmp 0x12b9f9ac */
  goto L_12b9f9ac;
L_12b9f8ce:;
  /* 12b9f8ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f8d1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f8d7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f8d8 call 0x12ba0100 */
  push32(0x12b9f8ddu); f_12ba0100();
  /* 12b9f8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f8e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9f8e3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f8e7 je 0x12b9f8fc */
  if (C.zf) goto L_12b9f8fc;
  /* 12b9f8e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f8ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f8f1 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f8f2 call dword ptr [0x12bc125c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc125c))), 0x12b9f8f8u);
  /* 12b9f8f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f8fa jne 0x12b9f903 */
  if (!C.zf) goto L_12b9f903;
L_12b9f8fc:;
  /* 12b9f8fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f8fe jmp 0x12b9f9ac */
  goto L_12b9f9ac;
L_12b9f903:;
  /* 12b9f903 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9f905 mov ecx, dword ptr [0x12bbf6f4] */
  ECX = (r32((uint32_t)(0x12bbf6f4)));
  /* 12b9f90b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f90c call dword ptr [0x12bc1260] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1260))), 0x12b9f912u);
  /* 12b9f912 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f914 jne 0x12b9f91d */
  if (!C.zf) goto L_12b9f91d;
  /* 12b9f916 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f918 jmp 0x12b9f9ac */
  goto L_12b9f9ac;
L_12b9f91d:;
  /* 12b9f91d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f921 je 0x12b9f948 */
  if (C.zf) goto L_12b9f948;
  /* 12b9f923 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f926 mov ax, word ptr [0x12bbf6f4] */
  AX = (r16((uint32_t)(0x12bbf6f4)));
  /* 12b9f92c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12b9f92f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f932 mov dx, word ptr [0x12bbf710] */
  DX = (r16((uint32_t)(0x12bbf710)));
  /* 12b9f939 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12b9f93d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12b9f940 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12b9f944 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12b9f948:;
  /* 12b9f948 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f94c je 0x12b9f9a7 */
  if (C.zf) goto L_12b9f9a7;
  /* 12b9f94e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12b9f950 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9f953 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f954 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12b9f959 mov eax, dword ptr [0x12bbf6f4] */
  EAX = (r32((uint32_t)(0x12bbf6f4)));
  /* 12b9f95e push eax */
  push32((uint32_t)(EAX));
  /* 12b9f95f call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9f965u);
  /* 12b9f965 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f967 jne 0x12b9f96d */
  if (!C.zf) goto L_12b9f96d;
  /* 12b9f969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f96b jmp 0x12b9f9ac */
  goto L_12b9f9ac;
L_12b9f96d:;
  /* 12b9f96d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12b9f96f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9f972 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f975 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f976 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12b9f97b mov edx, dword ptr [0x12bbf710] */
  EDX = (r32((uint32_t)(0x12bbf710)));
  /* 12b9f981 push edx */
  push32((uint32_t)(EDX));
  /* 12b9f982 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9f988u);
  /* 12b9f988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9f98a jne 0x12b9f990 */
  if (!C.zf) goto L_12b9f990;
  /* 12b9f98c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12b9f98e jmp 0x12b9f9ac */
  goto L_12b9f9ac;
L_12b9f990:;
  /* 12b9f990 push 0xa */
  push32((uint32_t)(0xau));
  /* 12b9f992 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9f995 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f99a push eax */
  push32((uint32_t)(EAX));
  /* 12b9f99b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f99e push ecx */
  push32((uint32_t)(ECX));
  /* 12b9f99f call 0x12b96510 */
  push32(0x12b9f9a4u); f_12b96510();
  /* 12b9f9a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12b9f9a7:;
  /* 12b9f9a7 mov eax, 1 */
  EAX = (0x1u);
L_12b9f9ac:;
  /* 12b9f9ac mov esp, ebp */
  ESP = (EBP);
  /* 12b9f9ae pop ebp */
  EBP = (pop32());
  /* 12b9f9af ret  */
  ESPCHK(0x12b9f7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9b0 @ 0x12b9f9b0 (130 bytes, 47 insns) */
void f_12b9f9b0(void) {
  FTRACE(0x12b9f9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9f9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9f9b1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9f9b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f9b6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12b9f9bd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12b9f9c4:;
  /* 12b9f9c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9f9c7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f9ca jg 0x12b9fa2e */
  if ((!C.zf&&C.sf==C.of)) goto L_12b9fa2e;
  /* 12b9f9cc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f9d0 je 0x12b9fa2e */
  if (C.zf) goto L_12b9fa2e;
  /* 12b9f9d2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12b9f9d5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f9d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12b9f9d9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9f9db sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12b9f9dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12b9f9e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9f9e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9f9e6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12b9f9e9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9f9ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9f9ed mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12b9f9ef push edx */
  push32((uint32_t)(EDX));
  /* 12b9f9f0 call 0x12ba20a0 */
  push32(0x12b9f9f5u); f_12ba20a0();
  /* 12b9f9f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9f9f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12b9f9fb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9f9ff jne 0x12b9fa12 */
  if (!C.zf) goto L_12b9fa12;
  /* 12b9fa01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9fa04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9fa07 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12b9fa0b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12b9fa0e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12b9fa10 jmp 0x12b9fa2c */
  goto L_12b9fa2c;
L_12b9fa12:;
  /* 12b9fa12 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fa16 jge 0x12b9fa23 */
  if ((C.sf==C.of)) goto L_12b9fa23;
  /* 12b9fa18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9fa1b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fa1e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12b9fa21 jmp 0x12b9fa2c */
  goto L_12b9fa2c;
L_12b9fa23:;
  /* 12b9fa23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9fa26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fa29 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12b9fa2c:;
  /* 12b9fa2c jmp 0x12b9f9c4 */
  goto L_12b9f9c4;
L_12b9fa2e:;
  /* 12b9fa2e mov esp, ebp */
  ESP = (EBP);
  /* 12b9fa30 pop ebp */
  EBP = (pop32());
  /* 12b9fa31 ret  */
  ESPCHK(0x12b9f9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa40 @ 0x12b9fa40 (186 bytes, 50 insns) */
void f_12b9fa40(void) {
  FTRACE(0x12b9fa40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9fa40 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9fa41 mov ebp, esp */
  EBP = (ESP);
  /* 12b9fa43 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fa44 mov eax, dword ptr [0x12bbf704] */
  EAX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fa49 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fa4a call 0x12b96800 */
  push32(0x12b9fa4fu); f_12b96800();
  /* 12b9fa4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fa52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fa54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fa57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12b9fa5a mov dword ptr [0x12bbf700], ecx */
  w32((uint32_t)(0x12bbf700), (ECX));
  /* 12b9fa60 mov edx, dword ptr [0x12bbf708] */
  EDX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9fa66 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fa67 call 0x12b96800 */
  push32(0x12b9fa6cu); f_12b96800();
  /* 12b9fa6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fa6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fa71 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fa74 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12b9fa77 mov dword ptr [0x12bbf6f8], ecx */
  w32((uint32_t)(0x12bbf6f8), (ECX));
  /* 12b9fa7d mov dword ptr [0x12bbf6f4], 0 */
  w32((uint32_t)(0x12bbf6f4), (0x0u));
  /* 12b9fa87 cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fa8e je 0x12b9fa99 */
  if (C.zf) goto L_12b9fa99;
  /* 12b9fa90 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12b9fa97 jmp 0x12b9faab */
  goto L_12b9faab;
L_12b9fa99:;
  /* 12b9fa99 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fa9f push edx */
  push32((uint32_t)(EDX));
  /* 12b9faa0 call 0x12ba04e0 */
  push32(0x12b9faa5u); f_12ba04e0();
  /* 12b9faa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9faa8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9faab:;
  /* 12b9faab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9faae mov dword ptr [0x12bbf6fc], eax */
  w32((uint32_t)(0x12bbf6fc), (EAX));
  /* 12b9fab3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9fab5 push 0x12b9fb00 */
  push32((uint32_t)(0x12b9fb00u));
  /* 12b9faba call dword ptr [0x12bc1254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1254))), 0x12b9fac0u);
  /* 12b9fac0 mov ecx, dword ptr [0x12bbf70c] */
  ECX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fac6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9facc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9face je 0x12b9faec */
  if (C.zf) goto L_12b9faec;
  /* 12b9fad0 mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fad6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fadc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9fade je 0x12b9faec */
  if (C.zf) goto L_12b9faec;
  /* 12b9fae0 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fae5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9fae8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9faea jne 0x12b9faf6 */
  if (!C.zf) goto L_12b9faf6;
L_12b9faec:;
  /* 12b9faec mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
L_12b9faf6:;
  /* 12b9faf6 mov esp, ebp */
  ESP = (EBP);
  /* 12b9faf8 pop ebp */
  EBP = (pop32());
  /* 12b9faf9 ret  */
  ESPCHK(0x12b9fa40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb00 @ 0x12b9fb00 (804 bytes, 220 insns) */
void f_12b9fb00(void) {
  FTRACE(0x12b9fb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9fb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9fb01 mov ebp, esp */
  EBP = (ESP);
  /* 12b9fb03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9fb09 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fb0a call 0x12ba0460 */
  push32(0x12b9fb0fu); f_12ba0460();
  /* 12b9fb0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fb12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12b9fb15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12b9fb17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12b9fb1a push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fb1b mov edx, dword ptr [0x12bbf6f8] */
  EDX = (r32((uint32_t)(0x12bbf6f8)));
  /* 12b9fb21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9fb23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fb25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fb2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fb31 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fb32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fb35 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fb36 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9fb3cu);
  /* 12b9fb3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fb3e jne 0x12b9fb54 */
  if (!C.zf) goto L_12b9fb54;
  /* 12b9fb40 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12b9fb4a mov eax, 1 */
  EAX = (0x1u);
  /* 12b9fb4f jmp 0x12b9fe1e */
  goto L_12b9fe1e;
L_12b9fb54:;
  /* 12b9fb54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12b9fb57 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fb58 mov edx, dword ptr [0x12bbf708] */
  EDX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9fb5e push edx */
  push32((uint32_t)(EDX));
  /* 12b9fb5f call 0x12ba20a0 */
  push32(0x12b9fb64u); f_12ba20a0();
  /* 12b9fb64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fb67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fb69 jne 0x12b9fc8f */
  if (!C.zf) goto L_12b9fc8f;
  /* 12b9fb6f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12b9fb71 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12b9fb74 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fb75 mov ecx, dword ptr [0x12bbf700] */
  ECX = (r32((uint32_t)(0x12bbf700)));
  /* 12b9fb7b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9fb7d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fb7f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fb85 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fb8b push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fb8c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fb8f push edx */
  push32((uint32_t)(EDX));
  /* 12b9fb90 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9fb96u);
  /* 12b9fb96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fb98 jne 0x12b9fbae */
  if (!C.zf) goto L_12b9fbae;
  /* 12b9fb9a mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12b9fba4 mov eax, 1 */
  EAX = (0x1u);
  /* 12b9fba9 jmp 0x12b9fe1e */
  goto L_12b9fe1e;
L_12b9fbae:;
  /* 12b9fbae lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12b9fbb1 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fbb2 mov ecx, dword ptr [0x12bbf704] */
  ECX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fbb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fbb9 call 0x12ba20a0 */
  push32(0x12b9fbbeu); f_12ba20a0();
  /* 12b9fbbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fbc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fbc3 jne 0x12b9fbf0 */
  if (!C.zf) goto L_12b9fbf0;
  /* 12b9fbc5 mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fbcb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fbd1 mov dword ptr [0x12bbf70c], edx */
  w32((uint32_t)(0x12bbf70c), (EDX));
  /* 12b9fbd7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fbda mov dword ptr [0x12bbf710], eax */
  w32((uint32_t)(0x12bbf710), (EAX));
  /* 12b9fbdf mov ecx, dword ptr [0x12bbf710] */
  ECX = (r32((uint32_t)(0x12bbf710)));
  /* 12b9fbe5 mov dword ptr [0x12bbf6f4], ecx */
  w32((uint32_t)(0x12bbf6f4), (ECX));
  /* 12b9fbeb jmp 0x12b9fc8f */
  goto L_12b9fc8f;
L_12b9fbf0:;
  /* 12b9fbf0 mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fbf6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fbf9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12b9fbfb jne 0x12b9fc8f */
  if (!C.zf) goto L_12b9fc8f;
  /* 12b9fc01 cmp dword ptr [0x12bbf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fc08 je 0x12b9fc5d */
  if (C.zf) goto L_12b9fc5d;
  /* 12b9fc0a mov eax, dword ptr [0x12bbf6fc] */
  EAX = (r32((uint32_t)(0x12bbf6fc)));
  /* 12b9fc0f push eax */
  push32((uint32_t)(EAX));
  /* 12b9fc10 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12b9fc13 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fc14 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fc1a push edx */
  push32((uint32_t)(EDX));
  /* 12b9fc1b call 0x12ba2170 */
  push32(0x12b9fc20u); f_12ba2170();
  /* 12b9fc20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fc23 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fc25 jne 0x12b9fc5d */
  if (!C.zf) goto L_12b9fc5d;
  /* 12b9fc27 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fc2c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12b9fc2e mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12b9fc33 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fc36 mov dword ptr [0x12bbf710], ecx */
  w32((uint32_t)(0x12bbf710), (ECX));
  /* 12b9fc3c mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fc42 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fc43 call 0x12b96800 */
  push32(0x12b9fc48u); f_12b96800();
  /* 12b9fc48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fc4b cmp eax, dword ptr [0x12bbf6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbf6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fc51 jne 0x12b9fc5b */
  if (!C.zf) goto L_12b9fc5b;
  /* 12b9fc53 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fc56 mov dword ptr [0x12bbf6f4], eax */
  w32((uint32_t)(0x12bbf6f4), (EAX));
L_12b9fc5b:;
  /* 12b9fc5b jmp 0x12b9fc8f */
  goto L_12b9fc8f;
L_12b9fc5d:;
  /* 12b9fc5d mov ecx, dword ptr [0x12bbf70c] */
  ECX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fc63 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fc66 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9fc68 jne 0x12b9fc8f */
  if (!C.zf) goto L_12b9fc8f;
  /* 12b9fc6a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fc6d push edx */
  push32((uint32_t)(EDX));
  /* 12b9fc6e call 0x12ba01a0 */
  push32(0x12b9fc73u); f_12ba01a0();
  /* 12b9fc73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fc76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fc78 je 0x12b9fc8f */
  if (C.zf) goto L_12b9fc8f;
  /* 12b9fc7a mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fc7f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12b9fc81 mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12b9fc86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fc89 mov dword ptr [0x12bbf710], ecx */
  w32((uint32_t)(0x12bbf710), (ECX));
L_12b9fc8f:;
  /* 12b9fc8f mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fc95 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fc9b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fca1 je 0x12b9fe11 */
  if (C.zf) goto L_12b9fe11;
  /* 12b9fca7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12b9fca9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12b9fcac push eax */
  push32((uint32_t)(EAX));
  /* 12b9fcad mov ecx, dword ptr [0x12bbf700] */
  ECX = (r32((uint32_t)(0x12bbf700)));
  /* 12b9fcb3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9fcb5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fcb7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fcbd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fcc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fcc4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fcc7 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fcc8 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9fcceu);
  /* 12b9fcce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fcd0 jne 0x12b9fce6 */
  if (!C.zf) goto L_12b9fce6;
  /* 12b9fcd2 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12b9fcdc mov eax, 1 */
  EAX = (0x1u);
  /* 12b9fce1 jmp 0x12b9fe1e */
  goto L_12b9fe1e;
L_12b9fce6:;
  /* 12b9fce6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12b9fce9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fcea mov ecx, dword ptr [0x12bbf704] */
  ECX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fcf0 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fcf1 call 0x12ba20a0 */
  push32(0x12b9fcf6u); f_12ba20a0();
  /* 12b9fcf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fcf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fcfb jne 0x12b9fdb0 */
  if (!C.zf) goto L_12b9fdb0;
  /* 12b9fd01 mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fd07 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12b9fd0a mov dword ptr [0x12bbf70c], edx */
  w32((uint32_t)(0x12bbf70c), (EDX));
  /* 12b9fd10 cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fd17 je 0x12b9fd3a */
  if (C.zf) goto L_12b9fd3a;
  /* 12b9fd19 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fd1e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12b9fd21 mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12b9fd26 cmp dword ptr [0x12bbf6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fd2d jne 0x12b9fd38 */
  if (!C.zf) goto L_12b9fd38;
  /* 12b9fd2f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fd32 mov dword ptr [0x12bbf6f4], ecx */
  w32((uint32_t)(0x12bbf6f4), (ECX));
L_12b9fd38:;
  /* 12b9fd38 jmp 0x12b9fdae */
  goto L_12b9fdae;
L_12b9fd3a:;
  /* 12b9fd3a cmp dword ptr [0x12bbf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fd41 je 0x12b9fd8f */
  if (C.zf) goto L_12b9fd8f;
  /* 12b9fd43 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fd49 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fd4a call 0x12b96800 */
  push32(0x12b9fd4fu); f_12b96800();
  /* 12b9fd4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fd52 cmp eax, dword ptr [0x12bbf6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bbf6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fd58 jne 0x12b9fd8f */
  if (!C.zf) goto L_12b9fd8f;
  /* 12b9fd5a push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9fd5c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fd5f push eax */
  push32((uint32_t)(EAX));
  /* 12b9fd60 call 0x12ba01f0 */
  push32(0x12b9fd65u); f_12ba01f0();
  /* 12b9fd65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fd68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fd6a je 0x12b9fd8d */
  if (C.zf) goto L_12b9fd8d;
  /* 12b9fd6c mov ecx, dword ptr [0x12bbf70c] */
  ECX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fd72 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12b9fd75 mov dword ptr [0x12bbf70c], ecx */
  w32((uint32_t)(0x12bbf70c), (ECX));
  /* 12b9fd7b cmp dword ptr [0x12bbf6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fd82 jne 0x12b9fd8d */
  if (!C.zf) goto L_12b9fd8d;
  /* 12b9fd84 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fd87 mov dword ptr [0x12bbf6f4], edx */
  w32((uint32_t)(0x12bbf6f4), (EDX));
L_12b9fd8d:;
  /* 12b9fd8d jmp 0x12b9fdae */
  goto L_12b9fdae;
L_12b9fd8f:;
  /* 12b9fd8f mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fd94 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12b9fd97 mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12b9fd9c cmp dword ptr [0x12bbf6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fda3 jne 0x12b9fdae */
  if (!C.zf) goto L_12b9fdae;
  /* 12b9fda5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fda8 mov dword ptr [0x12bbf6f4], ecx */
  w32((uint32_t)(0x12bbf6f4), (ECX));
L_12b9fdae:;
  /* 12b9fdae jmp 0x12b9fe11 */
  goto L_12b9fe11;
L_12b9fdb0:;
  /* 12b9fdb0 cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fdb7 jne 0x12b9fe11 */
  if (!C.zf) goto L_12b9fe11;
  /* 12b9fdb9 cmp dword ptr [0x12bbf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fdc0 je 0x12b9fe11 */
  if (C.zf) goto L_12b9fe11;
  /* 12b9fdc2 mov edx, dword ptr [0x12bbf6fc] */
  EDX = (r32((uint32_t)(0x12bbf6fc)));
  /* 12b9fdc8 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fdc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12b9fdcc push eax */
  push32((uint32_t)(EAX));
  /* 12b9fdcd mov ecx, dword ptr [0x12bbf704] */
  ECX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fdd4 call 0x12ba2170 */
  push32(0x12b9fdd9u); f_12ba2170();
  /* 12b9fdd9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fdde jne 0x12b9fe11 */
  if (!C.zf) goto L_12b9fe11;
  /* 12b9fde0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9fde2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fde5 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fde6 call 0x12ba01f0 */
  push32(0x12b9fdebu); f_12ba01f0();
  /* 12b9fdeb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fdee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9fdf0 je 0x12b9fe11 */
  if (C.zf) goto L_12b9fe11;
  /* 12b9fdf2 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fdf7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12b9fdfa mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12b9fdff cmp dword ptr [0x12bbf6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fe06 jne 0x12b9fe11 */
  if (!C.zf) goto L_12b9fe11;
  /* 12b9fe08 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fe0b mov dword ptr [0x12bbf6f4], ecx */
  w32((uint32_t)(0x12bbf6f4), (ECX));
L_12b9fe11:;
  /* 12b9fe11 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fe16 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9fe19 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9fe1b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fe1d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12b9fe1e:;
  /* 12b9fe1e mov esp, ebp */
  ESP = (EBP);
  /* 12b9fe20 pop ebp */
  EBP = (pop32());
  /* 12b9fe21 ret 4 */
  ESPCHK(0x12b9fb00u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fe30 @ 0x12b9fe30 (116 bytes, 33 insns) */
void f_12b9fe30(void) {
  FTRACE(0x12b9fe30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9fe30 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9fe31 mov ebp, esp */
  EBP = (ESP);
  /* 12b9fe33 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fe34 mov eax, dword ptr [0x12bbf704] */
  EAX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fe39 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fe3a call 0x12b96800 */
  push32(0x12b9fe3fu); f_12b96800();
  /* 12b9fe3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fe42 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fe44 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fe47 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12b9fe4a mov dword ptr [0x12bbf700], ecx */
  w32((uint32_t)(0x12bbf700), (ECX));
  /* 12b9fe50 cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9fe57 je 0x12b9fe62 */
  if (C.zf) goto L_12b9fe62;
  /* 12b9fe59 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12b9fe60 jmp 0x12b9fe74 */
  goto L_12b9fe74;
L_12b9fe62:;
  /* 12b9fe62 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9fe68 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fe69 call 0x12ba04e0 */
  push32(0x12b9fe6eu); f_12ba04e0();
  /* 12b9fe6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fe71 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12b9fe74:;
  /* 12b9fe74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12b9fe77 mov dword ptr [0x12bbf6fc], eax */
  w32((uint32_t)(0x12bbf6fc), (EAX));
  /* 12b9fe7c push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9fe7e push 0x12b9feb0 */
  push32((uint32_t)(0x12b9feb0u));
  /* 12b9fe83 call dword ptr [0x12bc1254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1254))), 0x12b9fe89u);
  /* 12b9fe89 mov ecx, dword ptr [0x12bbf70c] */
  ECX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9fe8f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9fe92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12b9fe94 jne 0x12b9fea0 */
  if (!C.zf) goto L_12b9fea0;
  /* 12b9fe96 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
L_12b9fea0:;
  /* 12b9fea0 mov esp, ebp */
  ESP = (EBP);
  /* 12b9fea2 pop ebp */
  EBP = (pop32());
  /* 12b9fea3 ret  */
  ESPCHK(0x12b9fe30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000feb0 @ 0x12b9feb0 (287 bytes, 86 insns) */
void f_12b9feb0(void) {
  FTRACE(0x12b9feb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9feb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9feb1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9feb3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9feb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12b9feb9 push eax */
  push32((uint32_t)(EAX));
  /* 12b9feba call 0x12ba0460 */
  push32(0x12b9febfu); f_12ba0460();
  /* 12b9febf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fec2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12b9fec5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12b9fec7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12b9feca push ecx */
  push32((uint32_t)(ECX));
  /* 12b9fecb mov edx, dword ptr [0x12bbf700] */
  EDX = (r32((uint32_t)(0x12bbf700)));
  /* 12b9fed1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9fed3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9fed5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12b9fedb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9fee1 push edx */
  push32((uint32_t)(EDX));
  /* 12b9fee2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9fee5 push eax */
  push32((uint32_t)(EAX));
  /* 12b9fee6 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12b9feecu);
  /* 12b9feec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9feee jne 0x12b9ff04 */
  if (!C.zf) goto L_12b9ff04;
  /* 12b9fef0 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12b9fefa mov eax, 1 */
  EAX = (0x1u);
  /* 12b9feff jmp 0x12b9ffc9 */
  goto L_12b9ffc9;
L_12b9ff04:;
  /* 12b9ff04 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12b9ff07 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ff08 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9ff0e push edx */
  push32((uint32_t)(EDX));
  /* 12b9ff0f call 0x12ba20a0 */
  push32(0x12b9ff14u); f_12ba20a0();
  /* 12b9ff14 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ff17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ff19 jne 0x12b9ff59 */
  if (!C.zf) goto L_12b9ff59;
  /* 12b9ff1b cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ff22 jne 0x12b9ff36 */
  if (!C.zf) goto L_12b9ff36;
  /* 12b9ff24 push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9ff26 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9ff29 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ff2a call 0x12ba01f0 */
  push32(0x12b9ff2fu); f_12ba01f0();
  /* 12b9ff2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ff32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ff34 je 0x12b9ff57 */
  if (C.zf) goto L_12b9ff57;
L_12b9ff36:;
  /* 12b9ff36 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9ff39 mov dword ptr [0x12bbf710], ecx */
  w32((uint32_t)(0x12bbf710), (ECX));
  /* 12b9ff3f mov edx, dword ptr [0x12bbf710] */
  EDX = (r32((uint32_t)(0x12bbf710)));
  /* 12b9ff45 mov dword ptr [0x12bbf6f4], edx */
  w32((uint32_t)(0x12bbf6f4), (EDX));
  /* 12b9ff4b mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9ff50 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12b9ff52 mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
L_12b9ff57:;
  /* 12b9ff57 jmp 0x12b9ffbc */
  goto L_12b9ffbc;
L_12b9ff59:;
  /* 12b9ff59 cmp dword ptr [0x12bbf700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ff60 jne 0x12b9ffbc */
  if (!C.zf) goto L_12b9ffbc;
  /* 12b9ff62 cmp dword ptr [0x12bbf6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12bbf6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ff69 je 0x12b9ffbc */
  if (C.zf) goto L_12b9ffbc;
  /* 12b9ff6b mov ecx, dword ptr [0x12bbf6fc] */
  ECX = (r32((uint32_t)(0x12bbf6fc)));
  /* 12b9ff71 push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ff72 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12b9ff75 push edx */
  push32((uint32_t)(EDX));
  /* 12b9ff76 mov eax, dword ptr [0x12bbf704] */
  EAX = (r32((uint32_t)(0x12bbf704)));
  /* 12b9ff7b push eax */
  push32((uint32_t)(EAX));
  /* 12b9ff7c call 0x12ba2170 */
  push32(0x12b9ff81u); f_12ba2170();
  /* 12b9ff81 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ff84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ff86 jne 0x12b9ffbc */
  if (!C.zf) goto L_12b9ffbc;
  /* 12b9ff88 push 0 */
  push32((uint32_t)(0x0u));
  /* 12b9ff8a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9ff8d push ecx */
  push32((uint32_t)(ECX));
  /* 12b9ff8e call 0x12ba01f0 */
  push32(0x12b9ff93u); f_12ba01f0();
  /* 12b9ff93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ff96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12b9ff98 je 0x12b9ffbc */
  if (C.zf) goto L_12b9ffbc;
  /* 12b9ff9a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12b9ff9d mov dword ptr [0x12bbf710], edx */
  w32((uint32_t)(0x12bbf710), (EDX));
  /* 12b9ffa3 mov eax, dword ptr [0x12bbf710] */
  EAX = (r32((uint32_t)(0x12bbf710)));
  /* 12b9ffa8 mov dword ptr [0x12bbf6f4], eax */
  w32((uint32_t)(0x12bbf6f4), (EAX));
  /* 12b9ffad mov ecx, dword ptr [0x12bbf70c] */
  ECX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9ffb3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12b9ffb6 mov dword ptr [0x12bbf70c], ecx */
  w32((uint32_t)(0x12bbf70c), (ECX));
L_12b9ffbc:;
  /* 12b9ffbc mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12b9ffc1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12b9ffc4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12b9ffc6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12b9ffc8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12b9ffc9:;
  /* 12b9ffc9 mov esp, ebp */
  ESP = (EBP);
  /* 12b9ffcb pop ebp */
  EBP = (pop32());
  /* 12b9ffcc ret 4 */
  ESPCHK(0x12b9feb0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ffd0 @ 0x12b9ffd0 (69 bytes, 20 insns) */
void f_12b9ffd0(void) {
  FTRACE(0x12b9ffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12b9ffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12b9ffd1 mov ebp, esp */
  EBP = (ESP);
  /* 12b9ffd3 mov eax, dword ptr [0x12bbf708] */
  EAX = (r32((uint32_t)(0x12bbf708)));
  /* 12b9ffd8 push eax */
  push32((uint32_t)(EAX));
  /* 12b9ffd9 call 0x12b96800 */
  push32(0x12b9ffdeu); f_12b96800();
  /* 12b9ffde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12b9ffe1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12b9ffe3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12b9ffe6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12b9ffe9 mov dword ptr [0x12bbf6f8], ecx */
  w32((uint32_t)(0x12bbf6f8), (ECX));
  /* 12b9ffef push 1 */
  push32((uint32_t)(0x1u));
  /* 12b9fff1 push 0x12ba0020 */
  push32((uint32_t)(0x12ba0020u));
  /* 12b9fff6 call dword ptr [0x12bc1254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1254))), 0x12b9fffcu);
  /* 12b9fffc mov edx, dword ptr [0x12bbf70c] */
  EDX = (r32((uint32_t)(0x12bbf70c)));
  /* 12ba0002 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba0005 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba0007 jne 0x12ba0013 */
  if (!C.zf) goto L_12ba0013;
  /* 12ba0009 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
L_12ba0013:;
  /* 12ba0013 pop ebp */
  EBP = (pop32());
  /* 12ba0014 ret  */
  ESPCHK(0x12b9ffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010020 @ 0x12ba0020 (172 bytes, 54 insns) */
void f_12ba0020(void) {
  FTRACE(0x12ba0020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0020 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0021 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0023 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0026 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0029 push eax */
  push32((uint32_t)(EAX));
  /* 12ba002a call 0x12ba0460 */
  push32(0x12ba002fu); f_12ba0460();
  /* 12ba002f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0032 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12ba0035 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12ba0037 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12ba003a push ecx */
  push32((uint32_t)(ECX));
  /* 12ba003b mov edx, dword ptr [0x12bbf6f8] */
  EDX = (r32((uint32_t)(0x12bbf6f8)));
  /* 12ba0041 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba0043 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0045 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12ba004b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0051 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0052 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12ba0055 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0056 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12ba005cu);
  /* 12ba005c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba005e jne 0x12ba0071 */
  if (!C.zf) goto L_12ba0071;
  /* 12ba0060 mov dword ptr [0x12bbf70c], 0 */
  w32((uint32_t)(0x12bbf70c), (0x0u));
  /* 12ba006a mov eax, 1 */
  EAX = (0x1u);
  /* 12ba006f jmp 0x12ba00c6 */
  goto L_12ba00c6;
L_12ba0071:;
  /* 12ba0071 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12ba0074 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0075 mov edx, dword ptr [0x12bbf708] */
  EDX = (r32((uint32_t)(0x12bbf708)));
  /* 12ba007b push edx */
  push32((uint32_t)(EDX));
  /* 12ba007c call 0x12ba20a0 */
  push32(0x12ba0081u); f_12ba20a0();
  /* 12ba0081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0084 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0086 jne 0x12ba00b9 */
  if (!C.zf) goto L_12ba00b9;
  /* 12ba0088 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12ba008b push eax */
  push32((uint32_t)(EAX));
  /* 12ba008c call 0x12ba01a0 */
  push32(0x12ba0091u); f_12ba01a0();
  /* 12ba0091 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0094 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0096 je 0x12ba00b9 */
  if (C.zf) goto L_12ba00b9;
  /* 12ba0098 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12ba009b mov dword ptr [0x12bbf710], ecx */
  w32((uint32_t)(0x12bbf710), (ECX));
  /* 12ba00a1 mov edx, dword ptr [0x12bbf710] */
  EDX = (r32((uint32_t)(0x12bbf710)));
  /* 12ba00a7 mov dword ptr [0x12bbf6f4], edx */
  w32((uint32_t)(0x12bbf6f4), (EDX));
  /* 12ba00ad mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12ba00b2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12ba00b4 mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
L_12ba00b9:;
  /* 12ba00b9 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12ba00be and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba00c1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12ba00c3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba00c5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12ba00c6:;
  /* 12ba00c6 mov esp, ebp */
  ESP = (EBP);
  /* 12ba00c8 pop ebp */
  EBP = (pop32());
  /* 12ba00c9 ret 4 */
  ESPCHK(0x12ba0020u, _esp0);
  ESP += 8; return;
}

/* FUN_100100d0 @ 0x12ba00d0 (43 bytes, 11 insns) */
void f_12ba00d0(void) {
  FTRACE(0x12ba00d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba00d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba00d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba00d3 mov eax, dword ptr [0x12bbf70c] */
  EAX = (r32((uint32_t)(0x12bbf70c)));
  /* 12ba00d8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12ba00dd mov dword ptr [0x12bbf70c], eax */
  w32((uint32_t)(0x12bbf70c), (EAX));
  /* 12ba00e2 call dword ptr [0x12bc1250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1250))), 0x12ba00e8u);
  /* 12ba00e8 mov dword ptr [0x12bbf710], eax */
  w32((uint32_t)(0x12bbf710), (EAX));
  /* 12ba00ed mov ecx, dword ptr [0x12bbf710] */
  ECX = (r32((uint32_t)(0x12bbf710)));
  /* 12ba00f3 mov dword ptr [0x12bbf6f4], ecx */
  w32((uint32_t)(0x12bbf6f4), (ECX));
  /* 12ba00f9 pop ebp */
  EBP = (pop32());
  /* 12ba00fa ret  */
  ESPCHK(0x12ba00d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010100 @ 0x12ba0100 (155 bytes, 57 insns) */
void f_12ba0100(void) {
  FTRACE(0x12ba0100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0100 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0101 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0103 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0106 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba010a je 0x12ba012b */
  if (C.zf) goto L_12ba012b;
  /* 12ba010c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba010f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12ba0112 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba0114 je 0x12ba012b */
  if (C.zf) goto L_12ba012b;
  /* 12ba0116 push 0x12bbbedc */
  push32((uint32_t)(0x12bbbedcu));
  /* 12ba011b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba011e push edx */
  push32((uint32_t)(EDX));
  /* 12ba011f call 0x12b9f660 */
  push32(0x12ba0124u); f_12b9f660();
  /* 12ba0124 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0127 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0129 jne 0x12ba0153 */
  if (!C.zf) goto L_12ba0153;
L_12ba012b:;
  /* 12ba012b push 8 */
  push32((uint32_t)(0x8u));
  /* 12ba012d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12ba0130 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0131 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12ba0136 mov ecx, dword ptr [0x12bbf710] */
  ECX = (r32((uint32_t)(0x12bbf710)));
  /* 12ba013c push ecx */
  push32((uint32_t)(ECX));
  /* 12ba013d call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12ba0143u);
  /* 12ba0143 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0145 jne 0x12ba014b */
  if (!C.zf) goto L_12ba014b;
  /* 12ba0147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0149 jmp 0x12ba0197 */
  goto L_12ba0197;
L_12ba014b:;
  /* 12ba014b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12ba014e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12ba0151 jmp 0x12ba018b */
  goto L_12ba018b;
L_12ba0153:;
  /* 12ba0153 push 0x12bbbed8 */
  push32((uint32_t)(0x12bbbed8u));
  /* 12ba0158 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba015b push eax */
  push32((uint32_t)(EAX));
  /* 12ba015c call 0x12b9f660 */
  push32(0x12ba0161u); f_12b9f660();
  /* 12ba0161 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0166 jne 0x12ba018b */
  if (!C.zf) goto L_12ba018b;
  /* 12ba0168 push 8 */
  push32((uint32_t)(0x8u));
  /* 12ba016a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12ba016d push ecx */
  push32((uint32_t)(ECX));
  /* 12ba016e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12ba0170 mov edx, dword ptr [0x12bbf710] */
  EDX = (r32((uint32_t)(0x12bbf710)));
  /* 12ba0176 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0177 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12ba017du);
  /* 12ba017d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba017f jne 0x12ba0185 */
  if (!C.zf) goto L_12ba0185;
  /* 12ba0181 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0183 jmp 0x12ba0197 */
  goto L_12ba0197;
L_12ba0185:;
  /* 12ba0185 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12ba0188 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12ba018b:;
  /* 12ba018b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba018e push ecx */
  push32((uint32_t)(ECX));
  /* 12ba018f call 0x12ba2280 */
  push32(0x12ba0194u); f_12ba2280();
  /* 12ba0194 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12ba0197:;
  /* 12ba0197 mov esp, ebp */
  ESP = (EBP);
  /* 12ba0199 pop ebp */
  EBP = (pop32());
  /* 12ba019a ret  */
  ESPCHK(0x12ba0100u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x12ba01a0 (79 bytes, 26 insns) */
void f_12ba01a0(void) {
  FTRACE(0x12ba01a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba01a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba01a1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba01a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba01a6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12ba01aa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12ba01ae mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba01b5 jmp 0x12ba01c0 */
  goto L_12ba01c0;
L_12ba01b7:;
  /* 12ba01b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba01ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba01bd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12ba01c0:;
  /* 12ba01c0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba01c4 jae 0x12ba01e6 */
  if (!C.cf) goto L_12ba01e6;
  /* 12ba01c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba01c9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba01cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba01d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12ba01d4 mov cx, word ptr [eax*2 + 0x12bbe9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12bbe9c4)));
  /* 12ba01dc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba01de jne 0x12ba01e4 */
  if (!C.zf) goto L_12ba01e4;
  /* 12ba01e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba01e2 jmp 0x12ba01eb */
  goto L_12ba01eb;
L_12ba01e4:;
  /* 12ba01e4 jmp 0x12ba01b7 */
  goto L_12ba01b7;
L_12ba01e6:;
  /* 12ba01e6 mov eax, 1 */
  EAX = (0x1u);
L_12ba01eb:;
  /* 12ba01eb mov esp, ebp */
  ESP = (EBP);
  /* 12ba01ed pop ebp */
  EBP = (pop32());
  /* 12ba01ee ret  */
  ESPCHK(0x12ba01a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100101f0 @ 0x12ba01f0 (135 bytes, 48 insns) */
void f_12ba01f0(void) {
  FTRACE(0x12ba01f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba01f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba01f1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba01f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba01f6 push esi */
  push32((uint32_t)(ESI));
  /* 12ba01f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba01fa and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba01ff and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0204 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0209 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12ba020c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba0211 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba0214 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12ba0216 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12ba0219 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba021a push 1 */
  push32((uint32_t)(0x1u));
  /* 12ba021c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba021f push edx */
  push32((uint32_t)(EDX));
  /* 12ba0220 call dword ptr [0x12bbf714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bbf714))), 0x12ba0226u);
  /* 12ba0226 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba0228 jne 0x12ba022e */
  if (!C.zf) goto L_12ba022e;
  /* 12ba022a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba022c jmp 0x12ba0272 */
  goto L_12ba0272;
L_12ba022e:;
  /* 12ba022e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12ba0231 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0232 call 0x12ba0460 */
  push32(0x12ba0237u); f_12ba0460();
  /* 12ba0237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba023a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba023d je 0x12ba026d */
  if (C.zf) goto L_12ba026d;
  /* 12ba023f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0243 je 0x12ba026d */
  if (C.zf) goto L_12ba026d;
  /* 12ba0245 mov ecx, dword ptr [0x12bbf704] */
  ECX = (r32((uint32_t)(0x12bbf704)));
  /* 12ba024b push ecx */
  push32((uint32_t)(ECX));
  /* 12ba024c call 0x12ba04e0 */
  push32(0x12ba0251u); f_12ba04e0();
  /* 12ba0251 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0254 mov esi, eax */
  ESI = (EAX);
  /* 12ba0256 mov edx, dword ptr [0x12bbf704] */
  EDX = (r32((uint32_t)(0x12bbf704)));
  /* 12ba025c push edx */
  push32((uint32_t)(EDX));
  /* 12ba025d call 0x12b96800 */
  push32(0x12ba0262u); f_12b96800();
  /* 12ba0262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0265 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0267 jne 0x12ba026d */
  if (!C.zf) goto L_12ba026d;
  /* 12ba0269 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12ba026b jmp 0x12ba0272 */
  goto L_12ba0272;
L_12ba026d:;
  /* 12ba026d mov eax, 1 */
  EAX = (0x1u);
L_12ba0272:;
  /* 12ba0272 pop esi */
  ESI = (pop32());
  /* 12ba0273 mov esp, ebp */
  ESP = (EBP);
  /* 12ba0275 pop ebp */
  EBP = (pop32());
  /* 12ba0276 ret  */
  ESPCHK(0x12ba01f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010280 @ 0x12ba0280 (77 bytes, 18 insns) */
void f_12ba0280(void) {
  FTRACE(0x12ba0280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0280 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0281 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0283 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0289 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12ba0293 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12ba0299 push eax */
  push32((uint32_t)(EAX));
  /* 12ba029a call dword ptr [0x12bc124c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc124c))), 0x12ba02a0u);
  /* 12ba02a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12ba02a2 je 0x12ba02b9 */
  if (C.zf) goto L_12ba02b9;
  /* 12ba02a4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba02ab jne 0x12ba02b9 */
  if (!C.zf) goto L_12ba02b9;
  /* 12ba02ad mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12ba02b7 jmp 0x12ba02c3 */
  goto L_12ba02c3;
L_12ba02b9:;
  /* 12ba02b9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12ba02c3:;
  /* 12ba02c3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12ba02c9 mov esp, ebp */
  ESP = (EBP);
  /* 12ba02cb pop ebp */
  EBP = (pop32());
  /* 12ba02cc ret  */
  ESPCHK(0x12ba0280u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12ba02d0 (388 bytes, 118 insns) */
void f_12ba02d0(void) {
  FTRACE(0x12ba02d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba02d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba02d1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba02d3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba02d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12ba02dd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12ba02e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12ba02eb:;
  /* 12ba02eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba02ee cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba02f1 jg 0x12ba0438 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba0438;
  /* 12ba02f7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12ba02fa add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba02fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12ba02fe sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0300 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12ba0302 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12ba0305 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0308 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba030b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba030e cmp edx, dword ptr [ecx + 0x12bbe520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12bbe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0314 jne 0x12ba040e */
  if (!C.zf) goto L_12ba040e;
  /* 12ba031a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba031d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12ba0320 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0324 ja 0x12ba0347 */
  if ((!C.cf&&!C.zf)) goto L_12ba0347;
  /* 12ba0326 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba032a je 0x12ba03b9 */
  if (C.zf) goto L_12ba03b9;
  /* 12ba0330 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0334 je 0x12ba0364 */
  if (C.zf) goto L_12ba0364;
  /* 12ba0336 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba033a je 0x12ba0386 */
  if (C.zf) goto L_12ba0386;
  /* 12ba033c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0340 je 0x12ba03a8 */
  if (C.zf) goto L_12ba03a8;
  /* 12ba0342 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba0347:;
  /* 12ba0347 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba034e je 0x12ba0375 */
  if (C.zf) goto L_12ba0375;
  /* 12ba0350 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0357 je 0x12ba0397 */
  if (C.zf) goto L_12ba0397;
  /* 12ba0359 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0360 je 0x12ba03ca */
  if (C.zf) goto L_12ba03ca;
  /* 12ba0362 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba0364:;
  /* 12ba0364 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0367 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba036a add ecx, 0x12bbe524 */
  { uint32_t _a=(ECX),_b=(0x12bbe524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0370 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba0373 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba0375:;
  /* 12ba0375 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0378 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba037b mov eax, dword ptr [edx + 0x12bbe52c] */
  EAX = (r32((uint32_t)(EDX + 0x12bbe52c)));
  /* 12ba0381 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba0384 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba0386:;
  /* 12ba0386 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0389 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba038c add ecx, 0x12bbe530 */
  { uint32_t _a=(ECX),_b=(0x12bbe530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0392 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba0395 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba0397:;
  /* 12ba0397 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba039a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba039d mov eax, dword ptr [edx + 0x12bbe534] */
  EAX = (r32((uint32_t)(EDX + 0x12bbe534)));
  /* 12ba03a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12ba03a6 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba03a8:;
  /* 12ba03a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba03ab imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba03ae add ecx, 0x12bbe538 */
  { uint32_t _a=(ECX),_b=(0x12bbe538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba03b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba03b7 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba03b9:;
  /* 12ba03b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba03bc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba03bf add edx, 0x12bbe53c */
  { uint32_t _a=(EDX),_b=(0x12bbe53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba03c5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12ba03c8 jmp 0x12ba03d8 */
  goto L_12ba03d8;
L_12ba03ca:;
  /* 12ba03ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba03cd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba03d0 add eax, 0x12bbe544 */
  { uint32_t _a=(EAX),_b=(0x12bbe544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba03d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12ba03d8:;
  /* 12ba03d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba03dc je 0x12ba03e4 */
  if (C.zf) goto L_12ba03e4;
  /* 12ba03de cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba03e2 jge 0x12ba03e6 */
  if ((C.sf==C.of)) goto L_12ba03e6;
L_12ba03e4:;
  /* 12ba03e4 jmp 0x12ba0438 */
  goto L_12ba0438;
L_12ba03e6:;
  /* 12ba03e6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba03e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba03ec push ecx */
  push32((uint32_t)(ECX));
  /* 12ba03ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba03f0 push edx */
  push32((uint32_t)(EDX));
  /* 12ba03f1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba03f4 push eax */
  push32((uint32_t)(EAX));
  /* 12ba03f5 call 0x12b971f0 */
  push32(0x12ba03fau); f_12b971f0();
  /* 12ba03fa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba03fd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba0400 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0403 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12ba0407 mov eax, 1 */
  EAX = (0x1u);
  /* 12ba040c jmp 0x12ba044e */
  goto L_12ba044e;
L_12ba040e:;
  /* 12ba040e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0411 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba0414 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0417 cmp eax, dword ptr [edx + 0x12bbe520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12bbe520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba041d jae 0x12ba042a */
  if (!C.cf) goto L_12ba042a;
  /* 12ba041f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba0422 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0425 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12ba0428 jmp 0x12ba0433 */
  goto L_12ba0433;
L_12ba042a:;
  /* 12ba042a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12ba042d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0430 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12ba0433:;
  /* 12ba0433 jmp 0x12ba02eb */
  goto L_12ba02eb;
L_12ba0438:;
  /* 12ba0438 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12ba043b push eax */
  push32((uint32_t)(EAX));
  /* 12ba043c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12ba043f push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0440 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12ba0443 push edx */
  push32((uint32_t)(EDX));
  /* 12ba0444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0447 push eax */
  push32((uint32_t)(EAX));
  /* 12ba0448 call dword ptr [0x12bc1258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12bc1258))), 0x12ba044eu);
L_12ba044e:;
  /* 12ba044e mov esp, ebp */
  ESP = (EBP);
  /* 12ba0450 pop ebp */
  EBP = (pop32());
  /* 12ba0451 ret 0x10 */
  ESPCHK(0x12ba02d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010460 @ 0x12ba0460 (118 bytes, 42 insns) */
void f_12ba0460(void) {
  FTRACE(0x12ba0460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0460 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0461 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0463 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba0466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12ba046d:;
  /* 12ba046d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0470 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba0472 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12ba0475 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba0479 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba047c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba047f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12ba0482 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12ba0484 je 0x12ba04cf */
  if (C.zf) goto L_12ba04cf;
  /* 12ba0486 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba048a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba048d jl 0x12ba04a2 */
  if ((C.sf!=C.of)) goto L_12ba04a2;
  /* 12ba048f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba0493 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0496 jg 0x12ba04a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba04a2;
  /* 12ba0498 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12ba049b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba049d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12ba04a0 jmp 0x12ba04bc */
  goto L_12ba04bc;
L_12ba04a2:;
  /* 12ba04a2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba04a6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba04a9 jl 0x12ba04bc */
  if ((C.sf!=C.of)) goto L_12ba04bc;
  /* 12ba04ab movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba04af cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba04b2 jg 0x12ba04bc */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba04bc;
  /* 12ba04b4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12ba04b7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12ba04b9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12ba04bc:;
  /* 12ba04bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba04bf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12ba04c2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12ba04c6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12ba04ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba04cd jmp 0x12ba046d */
  goto L_12ba046d;
L_12ba04cf:;
  /* 12ba04cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12ba04d2 mov esp, ebp */
  ESP = (EBP);
  /* 12ba04d4 pop ebp */
  EBP = (pop32());
  /* 12ba04d5 ret  */
  ESPCHK(0x12ba0460u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12ba04e0 (101 bytes, 36 insns) */
void f_12ba04e0(void) {
  FTRACE(0x12ba04e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba04e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba04e1 mov ebp, esp */
  EBP = (ESP);
  /* 12ba04e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12ba04e6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12ba04ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba04f0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12ba04f2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12ba04f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba04f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba04fb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12ba04fe:;
  /* 12ba04fe movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12ba0502 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0505 jl 0x12ba0510 */
  if ((C.sf!=C.of)) goto L_12ba0510;
  /* 12ba0507 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12ba050b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba050e jle 0x12ba0522 */
  if ((C.zf||C.sf!=C.of)) goto L_12ba0522;
L_12ba0510:;
  /* 12ba0510 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12ba0514 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0517 jl 0x12ba053e */
  if ((C.sf!=C.of)) goto L_12ba053e;
  /* 12ba0519 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12ba051d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba0520 jg 0x12ba053e */
  if ((!C.zf&&C.sf==C.of)) goto L_12ba053e;
L_12ba0522:;
  /* 12ba0522 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0525 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0528 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12ba052b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba052e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12ba0530 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12ba0533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0536 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba0539 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12ba053c jmp 0x12ba04fe */
  goto L_12ba04fe;
L_12ba053e:;
  /* 12ba053e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12ba0541 mov esp, ebp */
  ESP = (EBP);
  /* 12ba0543 pop ebp */
  EBP = (pop32());
  /* 12ba0544 ret  */
  ESPCHK(0x12ba04e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010550 @ 0x12ba0550 (122 bytes, 39 insns) */
void f_12ba0550(void) {
  FTRACE(0x12ba0550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12ba0550 push ebp */
  push32((uint32_t)(EBP));
  /* 12ba0551 mov ebp, esp */
  EBP = (ESP);
  /* 12ba0553 push ecx */
  push32((uint32_t)(ECX));
  /* 12ba0554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0557 cmp eax, dword ptr [0x12bc0f9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12bc0f9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12ba055d jae 0x12ba0581 */
  if (!C.cf) goto L_12ba0581;
  /* 12ba055f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0562 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12ba0565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba0568 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12ba056b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12ba056e mov eax, dword ptr [ecx*4 + 0x12bc0e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12bc0e60)));
  /* 12ba0575 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12ba057a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12ba057d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12ba057f jne 0x12ba059c */
  if (!C.zf) goto L_12ba059c;
L_12ba0581:;
  /* 12ba0581 call 0x12b9b8a0 */
  push32(0x12ba0586u); f_12b9b8a0();
  /* 12ba0586 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12ba058c call 0x12b9b8b0 */
  push32(0x12ba0591u); f_12b9b8b0();
  /* 12ba0591 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12ba0597 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12ba059a jmp 0x12ba05c6 */
  goto L_12ba05c6;
L_12ba059c:;
  /* 12ba059c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba059f push edx */
  push32((uint32_t)(EDX));
  /* 12ba05a0 call 0x12b9d0c0 */
  push32(0x12ba05a5u); f_12b9d0c0();
  /* 12ba05a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba05a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba05ab push eax */
  push32((uint32_t)(EAX));
  /* 12ba05ac call 0x12ba05d0 */
  push32(0x12ba05b1u); f_12ba05d0();
  /* 12ba05b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba05b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12ba05b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12ba05ba push ecx */
  push32((uint32_t)(ECX));
  /* 12ba05bb call 0x12b9d150 */
  push32(0x12ba05c0u); f_12b9d150();
  /* 12ba05c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12ba05c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12ba05c6:;
  /* 12ba05c6 mov esp, ebp */
  ESP = (EBP);
  /* 12ba05c8 pop ebp */
  EBP = (pop32());
  /* 12ba05c9 ret  */
  ESPCHK(0x12ba0550u, _esp0);
  ESP += 4; return;
}

