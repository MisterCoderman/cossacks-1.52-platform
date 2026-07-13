#include "recomp.h"

/* FUN_100088c0 @ 0x107688c0 (490 bytes, 165 insns) */
void f_107688c0(void) {
  FTRACE(0x107688c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107688c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107688c1 mov ebp, esp */
  EBP = (ESP);
  /* 107688c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107688c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107688ca jne 0x107688dd */
  if (!C.zf) goto L_107688dd;
  /* 107688cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107688cf push eax */
  push32((uint32_t)(EAX));
  /* 107688d0 call 0x10768710 */
  push32(0x107688d5u); f_10768710();
  /* 107688d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107688d8 jmp 0x10768aa6 */
  goto L_10768aa6;
L_107688dd:;
  /* 107688dd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107688e1 jne 0x107688f6 */
  if (!C.zf) goto L_107688f6;
  /* 107688e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107688e6 push ecx */
  push32((uint32_t)(ECX));
  /* 107688e7 call 0x10768ab0 */
  push32(0x107688ecu); f_10768ab0();
  /* 107688ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107688ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107688f1 jmp 0x10768aa6 */
  goto L_10768aa6;
L_107688f6:;
  /* 107688f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 107688fd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768901 ja 0x10768a79 */
  if ((!C.cf&&!C.zf)) goto L_10768a79;
  /* 10768907 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768909 call 0x10768340 */
  push32(0x1076890eu); f_10768340();
  /* 1076890e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768914 push edx */
  push32((uint32_t)(EDX));
  /* 10768915 call 0x10768c40 */
  push32(0x1076891au); f_10768c40();
  /* 1076891a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076891d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10768920 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768924 je 0x10768a3c */
  if (C.zf) goto L_10768a3c;
  /* 1076892a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076892d cmp eax, dword ptr [0x1078ec94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1078ec94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768933 ja 0x107689b0 */
  if ((!C.cf&&!C.zf)) goto L_107689b0;
  /* 10768935 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768938 push ecx */
  push32((uint32_t)(ECX));
  /* 10768939 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076893c push edx */
  push32((uint32_t)(EDX));
  /* 1076893d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10768940 push eax */
  push32((uint32_t)(EAX));
  /* 10768941 call 0x10769b10 */
  push32(0x10768946u); f_10769b10();
  /* 10768946 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076894b je 0x10768955 */
  if (C.zf) goto L_10768955;
  /* 1076894d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768950 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10768953 jmp 0x107689b0 */
  goto L_107689b0;
L_10768955:;
  /* 10768955 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768958 push edx */
  push32((uint32_t)(EDX));
  /* 10768959 call 0x107692d0 */
  push32(0x1076895eu); f_107692d0();
  /* 1076895e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768961 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10768964 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768968 je 0x107689b0 */
  if (C.zf) goto L_107689b0;
  /* 1076896a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076896d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 10768970 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768973 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10768976 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768979 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076897c jae 0x10768986 */
  if (!C.cf) goto L_10768986;
  /* 1076897e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768981 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10768984 jmp 0x1076898c */
  goto L_1076898c;
L_10768986:;
  /* 10768986 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768989 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1076898c:;
  /* 1076898c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076898f push edx */
  push32((uint32_t)(EDX));
  /* 10768990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768993 push eax */
  push32((uint32_t)(EAX));
  /* 10768994 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768997 push ecx */
  push32((uint32_t)(ECX));
  /* 10768998 call 0x1076b220 */
  push32(0x1076899du); f_1076b220();
  /* 1076899d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107689a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107689a3 push edx */
  push32((uint32_t)(EDX));
  /* 107689a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 107689a7 push eax */
  push32((uint32_t)(EAX));
  /* 107689a8 call 0x10768d00 */
  push32(0x107689adu); f_10768d00();
  /* 107689ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107689b0:;
  /* 107689b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107689b4 jne 0x10768a30 */
  if (!C.zf) goto L_10768a30;
  /* 107689b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107689ba jne 0x107689c3 */
  if (!C.zf) goto L_107689c3;
  /* 107689bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_107689c3:;
  /* 107689c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107689c6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107689c9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 107689cc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 107689cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107689d2 push edx */
  push32((uint32_t)(EDX));
  /* 107689d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 107689d5 mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 107689da push eax */
  push32((uint32_t)(EAX));
  /* 107689db call dword ptr [0x10793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793304))), 0x107689e1u);
  /* 107689e1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107689e4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107689e8 je 0x10768a30 */
  if (C.zf) goto L_10768a30;
  /* 107689ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107689ed mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 107689f0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107689f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107689f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107689f9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107689fc jae 0x10768a06 */
  if (!C.cf) goto L_10768a06;
  /* 107689fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768a01 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10768a04 jmp 0x10768a0c */
  goto L_10768a0c;
L_10768a06:;
  /* 10768a06 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768a09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10768a0c:;
  /* 10768a0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10768a0f push eax */
  push32((uint32_t)(EAX));
  /* 10768a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768a13 push ecx */
  push32((uint32_t)(ECX));
  /* 10768a14 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768a17 push edx */
  push32((uint32_t)(EDX));
  /* 10768a18 call 0x1076b220 */
  push32(0x10768a1du); f_1076b220();
  /* 10768a1d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768a20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768a23 push eax */
  push32((uint32_t)(EAX));
  /* 10768a24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10768a27 push ecx */
  push32((uint32_t)(ECX));
  /* 10768a28 call 0x10768d00 */
  push32(0x10768a2du); f_10768d00();
  /* 10768a2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10768a30:;
  /* 10768a30 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768a32 call 0x107683e0 */
  push32(0x10768a37u); f_107683e0();
  /* 10768a37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768a3a jmp 0x10768a79 */
  goto L_10768a79;
L_10768a3c:;
  /* 10768a3c push 9 */
  push32((uint32_t)(0x9u));
  /* 10768a3e call 0x107683e0 */
  push32(0x10768a43u); f_107683e0();
  /* 10768a43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768a46 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768a4a jne 0x10768a53 */
  if (!C.zf) goto L_10768a53;
  /* 10768a4c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_10768a53:;
  /* 10768a53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768a56 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768a59 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 10768a5c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10768a5f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768a62 push eax */
  push32((uint32_t)(EAX));
  /* 10768a63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768a66 push ecx */
  push32((uint32_t)(ECX));
  /* 10768a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10768a69 mov edx, dword ptr [0x10791f0c] */
  EDX = (r32((uint32_t)(0x10791f0c)));
  /* 10768a6f push edx */
  push32((uint32_t)(EDX));
  /* 10768a70 call dword ptr [0x1079330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079330c))), 0x10768a76u);
  /* 10768a76 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10768a79:;
  /* 10768a79 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768a7d jne 0x10768a88 */
  if (!C.zf) goto L_10768a88;
  /* 10768a7f cmp dword ptr [0x10790740], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790740))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768a86 jne 0x10768a8d */
  if (!C.zf) goto L_10768a8d;
L_10768a88:;
  /* 10768a88 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768a8b jmp 0x10768aa6 */
  goto L_10768aa6;
L_10768a8d:;
  /* 10768a8d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768a90 push eax */
  push32((uint32_t)(EAX));
  /* 10768a91 call 0x10768680 */
  push32(0x10768a96u); f_10768680();
  /* 10768a96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768a99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10768a9b jne 0x10768aa1 */
  if (!C.zf) goto L_10768aa1;
  /* 10768a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10768a9f jmp 0x10768aa6 */
  goto L_10768aa6;
L_10768aa1:;
  /* 10768aa1 jmp 0x107688f6 */
  goto L_107688f6;
L_10768aa6:;
  /* 10768aa6 mov esp, ebp */
  ESP = (EBP);
  /* 10768aa8 pop ebp */
  EBP = (pop32());
  /* 10768aa9 ret  */
  ESPCHK(0x107688c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ab0 @ 0x10768ab0 (104 bytes, 38 insns) */
void f_10768ab0(void) {
  FTRACE(0x10768ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10768ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 10768ab4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768ab8 jne 0x10768abc */
  if (!C.zf) goto L_10768abc;
  /* 10768aba jmp 0x10768b14 */
  goto L_10768b14;
L_10768abc:;
  /* 10768abc push 9 */
  push32((uint32_t)(0x9u));
  /* 10768abe call 0x10768340 */
  push32(0x10768ac3u); f_10768340();
  /* 10768ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768ac9 push eax */
  push32((uint32_t)(EAX));
  /* 10768aca call 0x10768c40 */
  push32(0x10768acfu); f_10768c40();
  /* 10768acf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768ad2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10768ad5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768ad9 je 0x10768af7 */
  if (C.zf) goto L_10768af7;
  /* 10768adb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768ade push ecx */
  push32((uint32_t)(ECX));
  /* 10768adf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768ae2 push edx */
  push32((uint32_t)(EDX));
  /* 10768ae3 call 0x10768d00 */
  push32(0x10768ae8u); f_10768d00();
  /* 10768ae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768aeb push 9 */
  push32((uint32_t)(0x9u));
  /* 10768aed call 0x107683e0 */
  push32(0x10768af2u); f_107683e0();
  /* 10768af2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768af5 jmp 0x10768b14 */
  goto L_10768b14;
L_10768af7:;
  /* 10768af7 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768af9 call 0x107683e0 */
  push32(0x10768afeu); f_107683e0();
  /* 10768afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768b01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768b04 push eax */
  push32((uint32_t)(EAX));
  /* 10768b05 push 0 */
  push32((uint32_t)(0x0u));
  /* 10768b07 mov ecx, dword ptr [0x10791f0c] */
  ECX = (r32((uint32_t)(0x10791f0c)));
  /* 10768b0d push ecx */
  push32((uint32_t)(ECX));
  /* 10768b0e call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x10768b14u);
L_10768b14:;
  /* 10768b14 mov esp, ebp */
  ESP = (EBP);
  /* 10768b16 pop ebp */
  EBP = (pop32());
  /* 10768b17 ret  */
  ESPCHK(0x10768ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b20 @ 0x10768b20 (116 bytes, 34 insns) */
void f_10768b20(void) {
  FTRACE(0x10768b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768b20 push ebp */
  push32((uint32_t)(EBP));
  /* 10768b21 mov ebp, esp */
  EBP = (ESP);
  /* 10768b23 push ecx */
  push32((uint32_t)(ECX));
  /* 10768b24 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 10768b2b push 9 */
  push32((uint32_t)(0x9u));
  /* 10768b2d call 0x10768340 */
  push32(0x10768b32u); f_10768340();
  /* 10768b32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768b35 call 0x1076a230 */
  push32(0x10768b3au); f_1076a230();
  /* 10768b3a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10768b3c jge 0x10768b45 */
  if ((C.sf==C.of)) goto L_10768b45;
  /* 10768b3e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10768b45:;
  /* 10768b45 push 9 */
  push32((uint32_t)(0x9u));
  /* 10768b47 call 0x107683e0 */
  push32(0x10768b4cu); f_107683e0();
  /* 10768b4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10768b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 10768b51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10768b53 mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 10768b58 push eax */
  push32((uint32_t)(EAX));
  /* 10768b59 call dword ptr [0x10793390] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793390))), 0x10768b5fu);
  /* 10768b5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10768b61 jne 0x10768b8d */
  if (!C.zf) goto L_10768b8d;
  /* 10768b63 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x10768b69u);
  /* 10768b69 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768b6c jne 0x10768b86 */
  if (!C.zf) goto L_10768b86;
  /* 10768b6e call 0x1076c820 */
  push32(0x10768b73u); f_1076c820();
  /* 10768b73 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 10768b79 call 0x1076c810 */
  push32(0x10768b7eu); f_1076c810();
  /* 10768b7e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 10768b84 jmp 0x10768b8d */
  goto L_10768b8d;
L_10768b86:;
  /* 10768b86 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_10768b8d:;
  /* 10768b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768b90 mov esp, ebp */
  ESP = (EBP);
  /* 10768b92 pop ebp */
  EBP = (pop32());
  /* 10768b93 ret  */
  ESPCHK(0x10768b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ba0 @ 0x10768ba0 (10 bytes, 5 insns) */
void f_10768ba0(void) {
  FTRACE(0x10768ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768ba1 mov ebp, esp */
  EBP = (ESP);
  /* 10768ba3 call 0x10768b20 */
  push32(0x10768ba8u); f_10768b20();
  /* 10768ba8 pop ebp */
  EBP = (pop32());
  /* 10768ba9 ret  */
  ESPCHK(0x10768ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb0 @ 0x10768bb0 (10 bytes, 5 insns) */
void f_10768bb0(void) {
  FTRACE(0x10768bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10768bb3 mov eax, dword ptr [0x1078ec94] */
  EAX = (r32((uint32_t)(0x1078ec94)));
  /* 10768bb8 pop ebp */
  EBP = (pop32());
  /* 10768bb9 ret  */
  ESPCHK(0x10768bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x10768bc0 (31 bytes, 11 insns) */
void f_10768bc0(void) {
  FTRACE(0x10768bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768bc1 mov ebp, esp */
  EBP = (ESP);
  /* 10768bc3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768bca jbe 0x10768bd0 */
  if ((C.cf||C.zf)) goto L_10768bd0;
  /* 10768bcc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10768bce jmp 0x10768bdd */
  goto L_10768bdd;
L_10768bd0:;
  /* 10768bd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768bd3 mov dword ptr [0x1078ec94], eax */
  w32((uint32_t)(0x1078ec94), (EAX));
  /* 10768bd8 mov eax, 1 */
  EAX = (0x1u);
L_10768bdd:;
  /* 10768bdd pop ebp */
  EBP = (pop32());
  /* 10768bde ret  */
  ESPCHK(0x10768bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008be0 @ 0x10768be0 (89 bytes, 20 insns) */
void f_10768be0(void) {
  FTRACE(0x10768be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768be0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768be1 mov ebp, esp */
  EBP = (ESP);
  /* 10768be3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 10768be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10768bea mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 10768bef push eax */
  push32((uint32_t)(EAX));
  /* 10768bf0 call dword ptr [0x10793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793304))), 0x10768bf6u);
  /* 10768bf6 mov dword ptr [0x10791f08], eax */
  w32((uint32_t)(0x10791f08), (EAX));
  /* 10768bfb cmp dword ptr [0x10791f08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791f08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768c02 jne 0x10768c08 */
  if (!C.zf) goto L_10768c08;
  /* 10768c04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10768c06 jmp 0x10768c37 */
  goto L_10768c37;
L_10768c08:;
  /* 10768c08 mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 10768c0e mov dword ptr [0x10791efc], ecx */
  w32((uint32_t)(0x10791efc), (ECX));
  /* 10768c14 mov dword ptr [0x10791f00], 0 */
  w32((uint32_t)(0x10791f00), (0x0u));
  /* 10768c1e mov dword ptr [0x10791f04], 0 */
  w32((uint32_t)(0x10791f04), (0x0u));
  /* 10768c28 mov dword ptr [0x10791ee8], 0x10 */
  w32((uint32_t)(0x10791ee8), (0x10u));
  /* 10768c32 mov eax, 1 */
  EAX = (0x1u);
L_10768c37:;
  /* 10768c37 pop ebp */
  EBP = (pop32());
  /* 10768c38 ret  */
  ESPCHK(0x10768be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c40 @ 0x10768c40 (85 bytes, 29 insns) */
void f_10768c40(void) {
  FTRACE(0x10768c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10768c41 mov ebp, esp */
  EBP = (ESP);
  /* 10768c43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768c46 mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 10768c4b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10768c4e mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 10768c54 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768c56 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10768c59 mov edx, dword ptr [0x10791f08] */
  EDX = (r32((uint32_t)(0x10791f08)));
  /* 10768c5f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10768c62:;
  /* 10768c62 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768c65 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768c68 jae 0x10768c8f */
  if (!C.cf) goto L_10768c8f;
  /* 10768c6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768c6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768c70 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768c73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10768c76 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768c7d jae 0x10768c84 */
  if (!C.cf) goto L_10768c84;
  /* 10768c7f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768c82 jmp 0x10768c91 */
  goto L_10768c91;
L_10768c84:;
  /* 10768c84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768c87 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768c8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10768c8d jmp 0x10768c62 */
  goto L_10768c62;
L_10768c8f:;
  /* 10768c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10768c91:;
  /* 10768c91 mov esp, ebp */
  ESP = (EBP);
  /* 10768c93 pop ebp */
  EBP = (pop32());
  /* 10768c94 ret  */
  ESPCHK(0x10768c40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ca0 @ 0x10768ca0 (95 bytes, 33 insns) */
void f_10768ca0(void) {
  FTRACE(0x10768ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 10768ca1 mov ebp, esp */
  EBP = (ESP);
  /* 10768ca3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768ca6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768ca9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768cac sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768caf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10768cb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768cb5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10768cb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10768cbb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10768cc0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768cc3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10768cc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768cc8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10768ccb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10768ccd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10768ccf jne 0x10768cf1 */
  if (!C.zf) goto L_10768cf1;
  /* 10768cd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768cd4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 10768cd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10768cd9 jne 0x10768cf1 */
  if (!C.zf) goto L_10768cf1;
  /* 10768cdb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10768cde and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 10768ce4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768ce6 je 0x10768cf1 */
  if (C.zf) goto L_10768cf1;
  /* 10768ce8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 10768cef jmp 0x10768cf8 */
  goto L_10768cf8;
L_10768cf1:;
  /* 10768cf1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10768cf8:;
  /* 10768cf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10768cfb mov esp, ebp */
  ESP = (EBP);
  /* 10768cfd pop ebp */
  EBP = (pop32());
  /* 10768cfe ret  */
  ESPCHK(0x10768ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d00 @ 0x10768d00 (1485 bytes, 453 insns) */
void f_10768d00(void) {
  FTRACE(0x10768d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10768d00 push ebp */
  push32((uint32_t)(EBP));
  /* 10768d01 mov ebp, esp */
  EBP = (ESP);
  /* 10768d03 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768d09 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10768d0c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 10768d0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768d12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768d15 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768d18 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10768d1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10768d1e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 10768d21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10768d24 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768d27 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10768d2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768d30 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 10768d37 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10768d3a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10768d3d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768d40 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10768d43 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10768d46 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10768d48 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768d4b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10768d4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10768d51 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768d54 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 10768d57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768d5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10768d5c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10768d5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10768d62 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 10768d65 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10768d68 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10768d6b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10768d6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768d70 jne 0x10768e98 */
  if (!C.zf) goto L_10768e98;
  /* 10768d76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10768d79 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10768d7c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768d7f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10768d82 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768d86 jbe 0x10768d8f */
  if ((C.cf||C.zf)) goto L_10768d8f;
  /* 10768d88 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10768d8f:;
  /* 10768d8f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768d92 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768d95 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10768d98 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768d9b jne 0x10768e71 */
  if (!C.zf) goto L_10768e71;
  /* 10768da1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768da5 jae 0x10768e06 */
  if (!C.cf) goto L_10768e06;
  /* 10768da7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10768dac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10768daf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10768db1 not eax */
  EAX = (~(EAX));
  /* 10768db3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768db6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768db9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10768dbd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10768dbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768dc2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768dc5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10768dc9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768dcc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768dcf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10768dd2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10768dd5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768dd8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768ddb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10768dde mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768de1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768de4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10768de8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10768dea jne 0x10768e04 */
  if (!C.zf) goto L_10768e04;
  /* 10768dec mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10768df1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10768df4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10768df6 not eax */
  EAX = (~(EAX));
  /* 10768df8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768dfb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10768dfd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10768dff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768e02 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10768e04:;
  /* 10768e04 jmp 0x10768e71 */
  goto L_10768e71;
L_10768e06:;
  /* 10768e06 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10768e09 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768e0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10768e11 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10768e13 not edx */
  EDX = (~(EDX));
  /* 10768e15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768e18 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768e1b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10768e22 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10768e24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768e27 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768e2a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 10768e31 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768e34 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768e37 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10768e3a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10768e3d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768e40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768e43 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10768e46 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768e49 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768e4c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10768e50 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768e52 jne 0x10768e71 */
  if (!C.zf) goto L_10768e71;
  /* 10768e54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10768e57 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768e5a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10768e5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10768e61 not edx */
  EDX = (~(EDX));
  /* 10768e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768e66 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10768e69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10768e6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768e6e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10768e71:;
  /* 10768e71 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768e74 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10768e77 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768e7a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10768e7d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10768e80 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768e83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10768e86 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10768e89 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10768e8c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10768e8f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10768e92 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768e95 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_10768e98:;
  /* 10768e98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10768e9b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10768e9e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768ea1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10768ea4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768ea8 jbe 0x10768eb1 */
  if ((C.cf||C.zf)) goto L_10768eb1;
  /* 10768eaa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10768eb1:;
  /* 10768eb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10768eb4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10768eb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768eb9 jne 0x10769015 */
  if (!C.zf) goto L_10769015;
  /* 10768ebf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10768ec2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768ec5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10768ec8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10768ecb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10768ece sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768ed1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10768ed4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768ed8 jbe 0x10768ee1 */
  if ((C.cf||C.zf)) goto L_10768ee1;
  /* 10768eda mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_10768ee1:;
  /* 10768ee1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10768ee4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768ee7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 10768eea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10768eed sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10768ef0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768ef3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10768ef6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768efa jbe 0x10768f03 */
  if ((C.cf||C.zf)) goto L_10768f03;
  /* 10768efc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_10768f03:;
  /* 10768f03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10768f06 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768f09 je 0x1076900f */
  if (C.zf) goto L_1076900f;
  /* 10768f0f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10768f12 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10768f15 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10768f18 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768f1b jne 0x10768ff1 */
  if (!C.zf) goto L_10768ff1;
  /* 10768f21 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10768f25 jae 0x10768f86 */
  if (!C.cf) goto L_10768f86;
  /* 10768f27 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10768f2c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10768f2f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10768f31 not edx */
  EDX = (~(EDX));
  /* 10768f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768f36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f39 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10768f3d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10768f3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768f42 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f45 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10768f49 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f4c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768f4f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10768f52 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10768f55 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f58 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768f5b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10768f5e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f61 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768f64 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10768f68 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10768f6a jne 0x10768f84 */
  if (!C.zf) goto L_10768f84;
  /* 10768f6c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10768f71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10768f74 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10768f76 not edx */
  EDX = (~(EDX));
  /* 10768f78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768f7b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10768f7d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10768f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768f82 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10768f84:;
  /* 10768f84 jmp 0x10768ff1 */
  goto L_10768ff1;
L_10768f86:;
  /* 10768f86 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10768f89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768f8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10768f91 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10768f93 not eax */
  EAX = (~(EAX));
  /* 10768f95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768f98 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768f9b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10768fa2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10768fa4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10768fa7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768faa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10768fb1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768fb4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768fb7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10768fba sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10768fbd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768fc0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768fc3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10768fc6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10768fc9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10768fcc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10768fd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10768fd2 jne 0x10768ff1 */
  if (!C.zf) goto L_10768ff1;
  /* 10768fd4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10768fd7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10768fda mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10768fdf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10768fe1 not eax */
  EAX = (~(EAX));
  /* 10768fe3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768fe6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10768fe9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10768feb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10768fee mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10768ff1:;
  /* 10768ff1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10768ff4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10768ff7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10768ffa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10768ffd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10769000 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769003 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10769006 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769009 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1076900c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1076900f:;
  /* 1076900f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769012 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_10769015:;
  /* 10769015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769018 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076901b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076901d jne 0x1076902b */
  if (!C.zf) goto L_1076902b;
  /* 1076901f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769022 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769025 je 0x1076913b */
  if (C.zf) goto L_1076913b;
L_1076902b:;
  /* 1076902b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076902e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769031 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10769034 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10769037 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076903a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076903d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769040 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10769043 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769046 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769049 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1076904c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076904f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769052 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10769055 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769058 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076905b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076905e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10769061 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769064 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769067 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076906a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076906d jne 0x1076913b */
  if (!C.zf) goto L_1076913b;
  /* 10769073 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769077 jae 0x107690d4 */
  if (!C.cf) goto L_107690d4;
  /* 10769079 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1076907c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076907f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10769083 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10769086 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769089 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1076908c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1076908f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10769092 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769095 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10769098 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076909a jne 0x107690b2 */
  if (!C.zf) goto L_107690b2;
  /* 1076909c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107690a1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107690a4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107690a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107690a9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107690ab or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107690ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107690b0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_107690b2:;
  /* 107690b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107690b7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107690ba shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107690bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107690bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107690c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 107690c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107690c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107690cb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107690ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107690d2 jmp 0x1076913b */
  goto L_1076913b;
L_107690d4:;
  /* 107690d4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107690d7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107690da movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107690de mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107690e1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107690e4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 107690e7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 107690ea mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 107690ed add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107690f0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 107690f3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107690f5 jne 0x10769112 */
  if (!C.zf) goto L_10769112;
  /* 107690f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107690fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107690fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769102 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769107 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076910a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1076910c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076910f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10769112:;
  /* 10769112 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769115 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769118 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1076911d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1076911f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769122 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10769125 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1076912c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076912e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769131 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 10769134 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1076913b:;
  /* 1076913b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076913e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769141 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10769143 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769146 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769149 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076914c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1076914f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769152 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10769154 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769157 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076915a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076915c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076915f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769162 jne 0x107692c9 */
  if (!C.zf) goto L_107692c9;
  /* 10769168 cmp dword ptr [0x10791f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076916f je 0x107692b8 */
  if (C.zf) goto L_107692b8;
  /* 10769175 mov eax, dword ptr [0x10791ef8] */
  EAX = (r32((uint32_t)(0x10791ef8)));
  /* 1076917a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1076917d mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 10769183 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10769186 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769188 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1076918b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 10769190 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 10769195 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769198 push eax */
  push32((uint32_t)(EAX));
  /* 10769199 call dword ptr [0x10793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793368))), 0x1076919fu);
  /* 1076919f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107691a4 mov ecx, dword ptr [0x10791ef8] */
  ECX = (r32((uint32_t)(0x10791ef8)));
  /* 107691aa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107691ac mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 107691b1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 107691b4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 107691b6 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 107691bc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 107691bf mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 107691c4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107691c7 mov edx, dword ptr [0x10791ef8] */
  EDX = (r32((uint32_t)(0x10791ef8)));
  /* 107691cd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 107691d8 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 107691dd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107691e0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 107691e3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107691e6 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 107691eb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107691ee mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 107691f1 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 107691f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 107691fa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 107691fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10769200 jne 0x10769216 */
  if (!C.zf) goto L_10769216;
  /* 10769202 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 10769208 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1076920b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1076920d mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 10769213 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_10769216:;
  /* 10769216 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076921c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769220 jne 0x107692b8 */
  if (!C.zf) goto L_107692b8;
  /* 10769226 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1076922b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076922d mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 10769232 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10769235 push ecx */
  push32((uint32_t)(ECX));
  /* 10769236 call dword ptr [0x10793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793368))), 0x1076923cu);
  /* 1076923c mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 10769242 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10769245 push eax */
  push32((uint32_t)(EAX));
  /* 10769246 push 0 */
  push32((uint32_t)(0x0u));
  /* 10769248 mov ecx, dword ptr [0x10791f0c] */
  ECX = (r32((uint32_t)(0x10791f0c)));
  /* 1076924e push ecx */
  push32((uint32_t)(ECX));
  /* 1076924f call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x10769255u);
  /* 10769255 mov edx, dword ptr [0x10791f04] */
  EDX = (r32((uint32_t)(0x10791f04)));
  /* 1076925b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076925e mov eax, dword ptr [0x10791f08] */
  EAX = (r32((uint32_t)(0x10791f08)));
  /* 10769263 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769265 mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 1076926b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076926e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769270 push eax */
  push32((uint32_t)(EAX));
  /* 10769271 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 10769277 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076927a push edx */
  push32((uint32_t)(EDX));
  /* 1076927b mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 10769280 push eax */
  push32((uint32_t)(EAX));
  /* 10769281 call 0x1076c830 */
  push32(0x10769286u); f_1076c830();
  /* 10769286 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10769289 mov ecx, dword ptr [0x10791f04] */
  ECX = (r32((uint32_t)(0x10791f04)));
  /* 1076928f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769292 mov dword ptr [0x10791f04], ecx */
  w32((uint32_t)(0x10791f04), (ECX));
  /* 10769298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076929b cmp edx, dword ptr [0x10791f00] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10791f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107692a1 jbe 0x107692ac */
  if ((C.cf||C.zf)) goto L_107692ac;
  /* 107692a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107692a6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107692a9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107692ac:;
  /* 107692ac mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 107692b2 mov dword ptr [0x10791efc], ecx */
  w32((uint32_t)(0x10791efc), (ECX));
L_107692b8:;
  /* 107692b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107692bb mov dword ptr [0x10791f00], edx */
  w32((uint32_t)(0x10791f00), (EDX));
  /* 107692c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107692c4 mov dword ptr [0x10791ef8], eax */
  w32((uint32_t)(0x10791ef8), (EAX));
L_107692c9:;
  /* 107692c9 mov esp, ebp */
  ESP = (EBP);
  /* 107692cb pop ebp */
  EBP = (pop32());
  /* 107692cc ret  */
  ESPCHK(0x10768d00u, _esp0);
  ESP += 4; return;
}

/* FUN_100092d0 @ 0x107692d0 (1334 bytes, 427 insns) */
void f_107692d0(void) {
  FTRACE(0x107692d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107692d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107692d1 mov ebp, esp */
  EBP = (ESP);
  /* 107692d3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107692d6 push esi */
  push32((uint32_t)(ESI));
  /* 107692d7 mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 107692dc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107692df mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 107692e5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107692e7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 107692ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107692ed add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107692f0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 107692f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 107692f6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107692f9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 107692fc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107692ff mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10769302 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769306 jge 0x1076931c */
  if ((C.sf==C.of)) goto L_1076931c;
  /* 10769308 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1076930b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076930e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769310 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 10769313 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1076931a jmp 0x10769331 */
  goto L_10769331;
L_1076931c:;
  /* 1076931c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10769323 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769326 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769329 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076932c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1076932e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10769331:;
  /* 10769331 mov ecx, dword ptr [0x10791efc] */
  ECX = (r32((uint32_t)(0x10791efc)));
  /* 10769337 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1076933a:;
  /* 1076933a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076933d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769340 jae 0x10769366 */
  if (!C.cf) goto L_10769366;
  /* 10769342 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769345 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10769348 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1076934a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076934d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769350 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 10769353 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769355 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10769357 je 0x1076935b */
  if (C.zf) goto L_1076935b;
  /* 10769359 jmp 0x10769366 */
  goto L_10769366;
L_1076935b:;
  /* 1076935b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076935e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769361 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10769364 jmp 0x1076933a */
  goto L_1076933a;
L_10769366:;
  /* 10769366 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769369 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076936c jne 0x1076944d */
  if (!C.zf) goto L_1076944d;
  /* 10769372 mov eax, dword ptr [0x10791f08] */
  EAX = (r32((uint32_t)(0x10791f08)));
  /* 10769377 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1076937a:;
  /* 1076937a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076937d cmp ecx, dword ptr [0x10791efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769383 jae 0x107693a9 */
  if (!C.cf) goto L_107693a9;
  /* 10769385 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769388 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076938b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1076938d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769390 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769393 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 10769396 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10769398 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076939a je 0x1076939e */
  if (C.zf) goto L_1076939e;
  /* 1076939c jmp 0x107693a9 */
  goto L_107693a9;
L_1076939e:;
  /* 1076939e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693a1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107693a4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 107693a7 jmp 0x1076937a */
  goto L_1076937a;
L_107693a9:;
  /* 107693a9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693ac cmp ecx, dword ptr [0x10791efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693b2 jne 0x1076944d */
  if (!C.zf) goto L_1076944d;
L_107693b8:;
  /* 107693b8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693bb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693be jae 0x107693d6 */
  if (!C.cf) goto L_107693d6;
  /* 107693c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693c3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693c7 je 0x107693cb */
  if (C.zf) goto L_107693cb;
  /* 107693c9 jmp 0x107693d6 */
  goto L_107693d6;
L_107693cb:;
  /* 107693cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107693d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107693d4 jmp 0x107693b8 */
  goto L_107693b8;
L_107693d6:;
  /* 107693d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693dc jne 0x10769427 */
  if (!C.zf) goto L_10769427;
  /* 107693de mov eax, dword ptr [0x10791f08] */
  EAX = (r32((uint32_t)(0x10791f08)));
  /* 107693e3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_107693e6:;
  /* 107693e6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693e9 cmp ecx, dword ptr [0x10791efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693ef jae 0x10769407 */
  if (!C.cf) goto L_10769407;
  /* 107693f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693f4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107693f8 je 0x107693fc */
  if (C.zf) goto L_107693fc;
  /* 107693fa jmp 0x10769407 */
  goto L_10769407;
L_107693fc:;
  /* 107693fc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107693ff add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769402 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10769405 jmp 0x107693e6 */
  goto L_107693e6;
L_10769407:;
  /* 10769407 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076940a cmp ecx, dword ptr [0x10791efc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791efc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769410 jne 0x10769427 */
  if (!C.zf) goto L_10769427;
  /* 10769412 call 0x10769810 */
  push32(0x10769417u); f_10769810();
  /* 10769417 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1076941a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076941e jne 0x10769427 */
  if (!C.zf) goto L_10769427;
  /* 10769420 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10769422 jmp 0x10769801 */
  goto L_10769801;
L_10769427:;
  /* 10769427 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076942a push edx */
  push32((uint32_t)(EDX));
  /* 1076942b call 0x10769920 */
  push32(0x10769430u); f_10769920();
  /* 10769430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10769433 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769436 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10769439 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1076943b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076943e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10769441 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769444 jne 0x1076944d */
  if (!C.zf) goto L_1076944d;
  /* 10769446 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10769448 jmp 0x10769801 */
  goto L_10769801;
L_1076944d:;
  /* 1076944d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769450 mov dword ptr [0x10791efc], edx */
  w32((uint32_t)(0x10791efc), (EDX));
  /* 10769456 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769459 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076945c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1076945f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769462 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10769464 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10769467 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076946b je 0x10769490 */
  if (C.zf) goto L_10769490;
  /* 1076946d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769470 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769473 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10769476 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1076947a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076947d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769480 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 10769483 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1076948a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1076948c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076948e jne 0x107694c5 */
  if (!C.zf) goto L_107694c5;
L_10769490:;
  /* 10769490 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_10769497:;
  /* 10769497 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076949a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1076949d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107694a0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107694a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107694a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107694aa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 107694ad and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 107694b4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 107694b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107694b8 jne 0x107694c5 */
  if (!C.zf) goto L_107694c5;
  /* 107694ba mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107694bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107694c0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 107694c3 jmp 0x10769497 */
  goto L_10769497;
L_107694c5:;
  /* 107694c5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107694c8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107694ce mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107694d1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 107694d8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 107694db mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107694e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107694e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107694e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 107694eb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 107694ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 107694f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107694f6 jne 0x10769512 */
  if (!C.zf) goto L_10769512;
  /* 107694f8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 107694ff mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769502 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769505 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10769508 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1076950f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_10769512:;
  /* 10769512 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769516 jl 0x1076952b */
  if ((C.sf!=C.of)) goto L_1076952b;
  /* 10769518 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076951b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1076951d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10769520 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769523 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769526 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10769529 jmp 0x10769512 */
  goto L_10769512;
L_1076952b:;
  /* 1076952b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076952e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769531 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 10769535 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10769538 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076953b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076953d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769540 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10769543 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769546 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10769549 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076954c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1076954f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769553 jle 0x1076955c */
  if ((C.zf||C.sf!=C.of)) goto L_1076955c;
  /* 10769555 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1076955c:;
  /* 1076955c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076955f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769562 je 0x10769780 */
  if (C.zf) goto L_10769780;
  /* 10769568 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076956b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076956e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769571 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769574 jne 0x1076964a */
  if (!C.zf) goto L_1076964a;
  /* 1076957a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076957e jge 0x107695df */
  if ((C.sf==C.of)) goto L_107695df;
  /* 10769580 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769585 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769588 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1076958a not eax */
  EAX = (~(EAX));
  /* 1076958c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076958f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769592 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10769596 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769598 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076959b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1076959e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 107695a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107695a5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107695a8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 107695ab sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 107695ae mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107695b1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107695b4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 107695b7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107695ba add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107695bd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 107695c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107695c3 jne 0x107695dd */
  if (!C.zf) goto L_107695dd;
  /* 107695c5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107695ca mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107695cd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107695cf not eax */
  EAX = (~(EAX));
  /* 107695d1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107695d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107695d6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107695d8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107695db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107695dd:;
  /* 107695dd jmp 0x1076964a */
  goto L_1076964a;
L_107695df:;
  /* 107695df mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107695e2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 107695e5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107695ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 107695ec not edx */
  EDX = (~(EDX));
  /* 107695ee mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107695f1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 107695f4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 107695fb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 107695fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769600 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769603 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1076960a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1076960d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769610 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10769613 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10769616 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769619 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076961c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1076961f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769622 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769625 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10769629 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076962b jne 0x1076964a */
  if (!C.zf) goto L_1076964a;
  /* 1076962d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769630 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769633 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769638 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076963a not edx */
  EDX = (~(EDX));
  /* 1076963c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076963f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769642 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769644 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769647 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1076964a:;
  /* 1076964a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076964d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10769650 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769653 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10769656 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10769659 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076965c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076965f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769662 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10769665 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10769668 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076966c je 0x10769780 */
  if (C.zf) goto L_10769780;
  /* 10769672 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769675 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769678 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1076967b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076967e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769681 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769684 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769687 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1076968a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076968d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769690 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10769693 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769696 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769699 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1076969c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076969f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 107696a2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107696a5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 107696a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107696ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107696ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 107696b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107696b4 jne 0x10769780 */
  if (!C.zf) goto L_10769780;
  /* 107696ba cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107696be jge 0x1076971a */
  if ((C.sf==C.of)) goto L_1076971a;
  /* 107696c0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 107696c3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107696c6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 107696ca mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107696cd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107696d0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 107696d3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 107696d5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107696d8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107696db mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 107696de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107696e0 jne 0x107696f8 */
  if (!C.zf) goto L_107696f8;
  /* 107696e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 107696e7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 107696ea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 107696ec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107696ef mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 107696f1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 107696f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107696f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_107696f8:;
  /* 107696f8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 107696fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769700 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769702 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769705 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769708 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1076970c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076970e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769711 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769714 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10769718 jmp 0x10769780 */
  goto L_10769780;
L_1076971a:;
  /* 1076971a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1076971d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769720 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10769724 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769727 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076972a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1076972d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1076972f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769732 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769735 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 10769738 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076973a jne 0x10769757 */
  if (!C.zf) goto L_10769757;
  /* 1076973c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076973f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769742 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769747 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769749 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076974c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076974f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10769751 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769754 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10769757:;
  /* 10769757 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076975a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076975d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769762 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769764 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769767 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1076976a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 10769771 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10769773 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769776 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 10769779 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_10769780:;
  /* 10769780 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769784 je 0x1076979a */
  if (C.zf) goto L_1076979a;
  /* 10769786 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769789 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076978c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1076978e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769791 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769794 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769797 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1076979a:;
  /* 1076979a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076979d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107697a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107697a3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107697a6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107697a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107697ac mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 107697ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 107697b1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107697b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107697b7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107697ba mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 107697bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107697c0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 107697c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107697c5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107697c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107697ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107697cd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107697cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107697d1 jne 0x107697f3 */
  if (!C.zf) goto L_107697f3;
  /* 107697d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107697d6 cmp eax, dword ptr [0x10791f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10791f00))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107697dc jne 0x107697f3 */
  if (!C.zf) goto L_107697f3;
  /* 107697de mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 107697e1 cmp ecx, dword ptr [0x10791ef8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791ef8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107697e7 jne 0x107697f3 */
  if (!C.zf) goto L_107697f3;
  /* 107697e9 mov dword ptr [0x10791f00], 0 */
  w32((uint32_t)(0x10791f00), (0x0u));
L_107697f3:;
  /* 107697f3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 107697f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107697f9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 107697fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107697fe add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_10769801:;
  /* 10769801 pop esi */
  ESI = (pop32());
  /* 10769802 mov esp, ebp */
  ESP = (EBP);
  /* 10769804 pop ebp */
  EBP = (pop32());
  /* 10769805 ret  */
  ESPCHK(0x107692d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009810 @ 0x10769810 (271 bytes, 78 insns) */
void f_10769810(void) {
  FTRACE(0x10769810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10769810 push ebp */
  push32((uint32_t)(EBP));
  /* 10769811 mov ebp, esp */
  EBP = (ESP);
  /* 10769813 push ecx */
  push32((uint32_t)(ECX));
  /* 10769814 mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 10769819 cmp eax, dword ptr [0x10791ee8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10791ee8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076981f jne 0x1076986b */
  if (!C.zf) goto L_1076986b;
  /* 10769821 mov ecx, dword ptr [0x10791ee8] */
  ECX = (r32((uint32_t)(0x10791ee8)));
  /* 10769827 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076982a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076982d push ecx */
  push32((uint32_t)(ECX));
  /* 1076982e mov edx, dword ptr [0x10791f08] */
  EDX = (r32((uint32_t)(0x10791f08)));
  /* 10769834 push edx */
  push32((uint32_t)(EDX));
  /* 10769835 push 0 */
  push32((uint32_t)(0x0u));
  /* 10769837 mov eax, dword ptr [0x10791f0c] */
  EAX = (r32((uint32_t)(0x10791f0c)));
  /* 1076983c push eax */
  push32((uint32_t)(EAX));
  /* 1076983d call dword ptr [0x1079330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079330c))), 0x10769843u);
  /* 10769843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10769846 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076984a jne 0x10769853 */
  if (!C.zf) goto L_10769853;
  /* 1076984c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076984e jmp 0x1076991b */
  goto L_1076991b;
L_10769853:;
  /* 10769853 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769856 mov dword ptr [0x10791f08], ecx */
  w32((uint32_t)(0x10791f08), (ECX));
  /* 1076985c mov edx, dword ptr [0x10791ee8] */
  EDX = (r32((uint32_t)(0x10791ee8)));
  /* 10769862 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769865 mov dword ptr [0x10791ee8], edx */
  w32((uint32_t)(0x10791ee8), (EDX));
L_1076986b:;
  /* 1076986b mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 10769870 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10769873 mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 10769879 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076987b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076987e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 10769883 push 8 */
  push32((uint32_t)(0x8u));
  /* 10769885 mov edx, dword ptr [0x10791f0c] */
  EDX = (r32((uint32_t)(0x10791f0c)));
  /* 1076988b push edx */
  push32((uint32_t)(EDX));
  /* 1076988c call dword ptr [0x10793304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793304))), 0x10769892u);
  /* 10769892 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769895 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 10769898 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076989b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076989f jne 0x107698a5 */
  if (!C.zf) goto L_107698a5;
  /* 107698a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107698a3 jmp 0x1076991b */
  goto L_1076991b;
L_107698a5:;
  /* 107698a5 push 4 */
  push32((uint32_t)(0x4u));
  /* 107698a7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 107698ac push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 107698b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 107698b3 call dword ptr [0x107932fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932fc))), 0x107698b9u);
  /* 107698b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698bc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 107698bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698c2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107698c6 jne 0x107698e2 */
  if (!C.zf) goto L_107698e2;
  /* 107698c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107698ce push ecx */
  push32((uint32_t)(ECX));
  /* 107698cf push 0 */
  push32((uint32_t)(0x0u));
  /* 107698d1 mov edx, dword ptr [0x10791f0c] */
  EDX = (r32((uint32_t)(0x10791f0c)));
  /* 107698d7 push edx */
  push32((uint32_t)(EDX));
  /* 107698d8 call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x107698deu);
  /* 107698de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107698e0 jmp 0x1076991b */
  goto L_1076991b;
L_107698e2:;
  /* 107698e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698e5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 107698eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698ee mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 107698f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107698f8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 107698ff mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 10769904 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769907 mov dword ptr [0x10791f04], eax */
  w32((uint32_t)(0x10791f04), (EAX));
  /* 1076990c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076990f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10769912 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 10769918 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076991b:;
  /* 1076991b mov esp, ebp */
  ESP = (EBP);
  /* 1076991d pop ebp */
  EBP = (pop32());
  /* 1076991e ret  */
  ESPCHK(0x10769810u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10769920 (494 bytes, 149 insns) */
void f_10769920(void) {
  FTRACE(0x10769920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10769920 push ebp */
  push32((uint32_t)(EBP));
  /* 10769921 mov ebp, esp */
  EBP = (ESP);
  /* 10769923 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769929 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076992c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1076992f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769932 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10769935 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10769938 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1076993f:;
  /* 1076993f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769943 jl 0x10769958 */
  if ((C.sf!=C.of)) goto L_10769958;
  /* 10769945 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769948 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1076994a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076994d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769950 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769953 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10769956 jmp 0x1076993f */
  goto L_1076993f;
L_10769958:;
  /* 10769958 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076995b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10769961 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769964 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1076996b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076996e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 10769975 jmp 0x10769980 */
  goto L_10769980;
L_10769977:;
  /* 10769977 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076997a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076997d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_10769980:;
  /* 10769980 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769984 jge 0x107699a6 */
  if ((C.sf==C.of)) goto L_107699a6;
  /* 10769986 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769989 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076998c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1076998f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10769992 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769995 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769998 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1076999b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076999e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 107699a1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 107699a4 jmp 0x10769977 */
  goto L_10769977;
L_107699a6:;
  /* 107699a6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 107699a9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 107699ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107699af mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 107699b2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107699b4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 107699b7 push 4 */
  push32((uint32_t)(0x4u));
  /* 107699b9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 107699be push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 107699c3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 107699c6 push edx */
  push32((uint32_t)(EDX));
  /* 107699c7 call dword ptr [0x107932fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932fc))), 0x107699cdu);
  /* 107699cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107699cf jne 0x107699d9 */
  if (!C.zf) goto L_107699d9;
  /* 107699d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107699d4 jmp 0x10769b0a */
  goto L_10769b0a;
L_107699d9:;
  /* 107699d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 107699dc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107699e1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107699e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 107699e7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 107699ea jmp 0x107699f8 */
  goto L_107699f8;
L_107699ec:;
  /* 107699ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 107699ef add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107699f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_107699f8:;
  /* 107699f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107699fb cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107699fe ja 0x10769a5d */
  if ((!C.cf&&!C.zf)) goto L_10769a5d;
  /* 10769a00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769a03 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 10769a0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769a0d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 10769a17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769a1a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a1d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10769a20 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a23 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10769a29 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a2c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a32 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a35 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10769a38 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a3b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769a41 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10769a47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a4a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a4f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10769a52 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10769a55 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 10769a5b jmp 0x107699ec */
  goto L_107699ec;
L_10769a5d:;
  /* 10769a5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769a60 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a66 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10769a69 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769a6c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a6f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769a72 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10769a75 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769a78 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10769a7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10769a7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769a84 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 10769a87 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769a8a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769a8d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769a90 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10769a93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769a96 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10769a99 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10769a9c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769a9f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769aa2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10769aa5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769aa8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769aab mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 10769ab3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769ab6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ab9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 10769ac4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ac7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 10769acb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ace mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 10769ad1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10769ad4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ad7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 10769ada test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769adc jne 0x10769aed */
  if (!C.zf) goto L_10769aed;
  /* 10769ade mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769ae1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769ae4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10769ae7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769aea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10769aed:;
  /* 10769aed mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769af2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769af5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769af7 not edx */
  EDX = (~(EDX));
  /* 10769af9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769afc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 10769aff and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769b01 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769b04 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 10769b07 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_10769b0a:;
  /* 10769b0a mov esp, ebp */
  ESP = (EBP);
  /* 10769b0c pop ebp */
  EBP = (pop32());
  /* 10769b0d ret  */
  ESPCHK(0x10769920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b10 @ 0x10769b10 (1515 bytes, 489 insns) */
void f_10769b10(void) {
  FTRACE(0x10769b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10769b10 push ebp */
  push32((uint32_t)(EBP));
  /* 10769b11 mov ebp, esp */
  EBP = (ESP);
  /* 10769b13 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769b16 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10769b19 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769b1c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 10769b1e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10769b21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769b24 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10769b27 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 10769b2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769b2d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10769b30 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769b33 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10769b36 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10769b39 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 10769b3c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10769b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769b42 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10769b48 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769b4b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 10769b52 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10769b55 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10769b58 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769b5b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10769b5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769b61 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10769b63 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769b66 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 10769b69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769b6c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769b6f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 10769b72 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769b75 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10769b77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10769b7a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769b7d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769b80 jle 0x10769e36 */
  if ((C.zf||C.sf!=C.of)) goto L_10769e36;
  /* 10769b86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769b89 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10769b8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10769b8e jne 0x10769b9b */
  if (!C.zf) goto L_10769b9b;
  /* 10769b90 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769b93 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769b96 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769b99 jle 0x10769ba2 */
  if ((C.zf||C.sf!=C.of)) goto L_10769ba2;
L_10769b9b:;
  /* 10769b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10769b9d jmp 0x1076a0f7 */
  goto L_1076a0f7;
L_10769ba2:;
  /* 10769ba2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769ba5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10769ba8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769bab mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10769bae cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769bb2 jbe 0x10769bbb */
  if ((C.cf||C.zf)) goto L_10769bbb;
  /* 10769bb4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10769bbb:;
  /* 10769bbb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769bbe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769bc1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769bc4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769bc7 jne 0x10769c9d */
  if (!C.zf) goto L_10769c9d;
  /* 10769bcd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769bd1 jae 0x10769c32 */
  if (!C.cf) goto L_10769c32;
  /* 10769bd3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769bd8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769bdb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769bdd not edx */
  EDX = (~(EDX));
  /* 10769bdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769be2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769be5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10769be9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10769beb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769bee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769bf1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10769bf5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769bf8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769bfb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10769bfe sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10769c01 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c04 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769c07 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10769c0a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c0d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769c10 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10769c14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10769c16 jne 0x10769c30 */
  if (!C.zf) goto L_10769c30;
  /* 10769c18 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769c1d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769c20 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769c22 not edx */
  EDX = (~(EDX));
  /* 10769c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769c27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10769c29 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769c2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769c2e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10769c30:;
  /* 10769c30 jmp 0x10769c9d */
  goto L_10769c9d;
L_10769c32:;
  /* 10769c32 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769c35 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769c38 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769c3d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769c3f not eax */
  EAX = (~(EAX));
  /* 10769c41 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769c44 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c47 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10769c4e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769c50 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769c53 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c56 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10769c5d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c60 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769c63 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10769c66 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10769c69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c6c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769c6f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10769c72 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769c75 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769c78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10769c7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769c7e jne 0x10769c9d */
  if (!C.zf) goto L_10769c9d;
  /* 10769c80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769c83 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769c86 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769c8b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769c8d not eax */
  EAX = (~(EAX));
  /* 10769c8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769c92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769c95 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10769c97 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769c9a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10769c9d:;
  /* 10769c9d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ca0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10769ca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769ca6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769ca9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10769cac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769caf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10769cb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769cb5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10769cb8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10769cbb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769cbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769cc1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769cc4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10769cc7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769ccb jle 0x10769e17 */
  if ((C.zf||C.sf!=C.of)) goto L_10769e17;
  /* 10769cd1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769cd4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769cd7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 10769cda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769cdd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 10769ce0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769ce3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10769ce6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769cea jbe 0x10769cf3 */
  if ((C.cf||C.zf)) goto L_10769cf3;
  /* 10769cec mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10769cf3:;
  /* 10769cf3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769cf6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769cf9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 10769cfc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10769cff mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d02 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769d05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769d08 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 10769d0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d0e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769d11 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10769d14 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769d17 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d1a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 10769d1d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d20 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769d23 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d26 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10769d29 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d2c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769d2f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769d32 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769d35 jne 0x10769e03 */
  if (!C.zf) goto L_10769e03;
  /* 10769d3b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769d3f jae 0x10769d9c */
  if (!C.cf) goto L_10769d9c;
  /* 10769d41 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d44 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769d47 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10769d4b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d4e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769d51 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10769d54 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10769d57 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d5a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769d5d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10769d60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769d62 jne 0x10769d7a */
  if (!C.zf) goto L_10769d7a;
  /* 10769d64 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769d69 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769d6c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769d6e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769d71 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10769d73 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769d75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769d78 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10769d7a:;
  /* 10769d7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769d7f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769d82 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769d84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769d87 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d8a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 10769d8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769d90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769d93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d96 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 10769d9a jmp 0x10769e03 */
  goto L_10769e03;
L_10769d9c:;
  /* 10769d9c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769d9f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769da2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10769da6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769da9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769dac mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10769daf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 10769db2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769db5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769db8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 10769dbb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769dbd jne 0x10769dda */
  if (!C.zf) goto L_10769dda;
  /* 10769dbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769dc2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769dc5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769dca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769dcc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769dcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769dd2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769dd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_10769dda:;
  /* 10769dda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769ddd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769de0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769de5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769de7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769dea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769ded mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10769df4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769df6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769df9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769dfc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_10769e03:;
  /* 10769e03 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769e06 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769e09 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10769e0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769e0e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e11 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769e14 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_10769e17:;
  /* 10769e17 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769e1a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e1d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769e20 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10769e22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769e2b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e2e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 10769e31 jmp 0x1076a0f2 */
  goto L_1076a0f2;
L_10769e36:;
  /* 10769e36 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769e39 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769e3c jge 0x1076a0f2 */
  if ((C.sf==C.of)) goto L_1076a0f2;
  /* 10769e42 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769e45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e48 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769e4b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10769e4d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10769e50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e53 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769e56 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e59 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 10769e5c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769e5f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769e62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10769e65 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769e68 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769e6b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10769e6e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769e71 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10769e74 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769e77 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10769e7a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769e7e jbe 0x10769e87 */
  if ((C.cf||C.zf)) goto L_10769e87;
  /* 10769e80 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10769e87:;
  /* 10769e87 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769e8a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 10769e8d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769e8f jne 0x10769fd0 */
  if (!C.zf) goto L_10769fd0;
  /* 10769e95 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10769e98 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 10769e9b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769e9e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10769ea1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769ea5 jbe 0x10769eae */
  if ((C.cf||C.zf)) goto L_10769eae;
  /* 10769ea7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_10769eae:;
  /* 10769eae mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769eb1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769eb4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769eb7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769eba jne 0x10769f90 */
  if (!C.zf) goto L_10769f90;
  /* 10769ec0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769ec4 jae 0x10769f25 */
  if (!C.cf) goto L_10769f25;
  /* 10769ec6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769ecb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769ece shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769ed0 not edx */
  EDX = (~(EDX));
  /* 10769ed2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769ed5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769ed8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 10769edc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10769ede mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769ee1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769ee4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 10769ee8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769eeb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769eee mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 10769ef1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10769ef4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769ef7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769efa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 10769efd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f00 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769f03 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 10769f07 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10769f09 jne 0x10769f23 */
  if (!C.zf) goto L_10769f23;
  /* 10769f0b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 10769f10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769f13 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10769f15 not edx */
  EDX = (~(EDX));
  /* 10769f17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769f1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10769f1c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 10769f1e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769f21 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10769f23:;
  /* 10769f23 jmp 0x10769f90 */
  goto L_10769f90;
L_10769f25:;
  /* 10769f25 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769f28 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769f2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769f30 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769f32 not eax */
  EAX = (~(EAX));
  /* 10769f34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769f37 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f3a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 10769f41 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10769f43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10769f46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f49 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 10769f50 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f53 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769f56 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 10769f59 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10769f5c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f5f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769f62 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 10769f65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10769f68 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769f6b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 10769f6f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10769f71 jne 0x10769f90 */
  if (!C.zf) goto L_10769f90;
  /* 10769f73 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10769f76 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769f79 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 10769f7e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10769f80 not eax */
  EAX = (~(EAX));
  /* 10769f82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769f85 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 10769f88 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 10769f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10769f8d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_10769f90:;
  /* 10769f90 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769f93 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10769f96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769f99 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769f9c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10769f9f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769fa2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10769fa5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10769fa8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10769fab mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 10769fae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769fb1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10769fb4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10769fb7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10769fba sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10769fbd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10769fc0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10769fc3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10769fc7 jbe 0x10769fd0 */
  if ((C.cf||C.zf)) goto L_10769fd0;
  /* 10769fc9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_10769fd0:;
  /* 10769fd0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10769fd3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10769fd6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 10769fd9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10769fdc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769fdf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769fe2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10769fe5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10769fe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769feb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769fee mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 10769ff1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10769ff4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769ff7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10769ffa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10769ffd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076a000 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a003 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1076a006 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a009 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a00c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076a00f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a012 jne 0x1076a0de */
  if (!C.zf) goto L_1076a0de;
  /* 1076a018 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a01c jae 0x1076a078 */
  if (!C.cf) goto L_1076a078;
  /* 1076a01e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a021 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a024 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1076a028 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a02b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a02e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1076a031 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1076a033 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a036 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a039 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1076a03c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076a03e jne 0x1076a056 */
  if (!C.zf) goto L_1076a056;
  /* 1076a040 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1076a045 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a048 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1076a04a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a04d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076a04f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1076a051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a054 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1076a056:;
  /* 1076a056 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a05b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a05e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a063 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a066 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1076a06a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a06c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a06f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a072 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1076a076 jmp 0x1076a0de */
  goto L_1076a0de;
L_1076a078:;
  /* 1076a078 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a07b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a07e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1076a082 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a085 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a088 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1076a08b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1076a08d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a090 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a093 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1076a096 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076a098 jne 0x1076a0b5 */
  if (!C.zf) goto L_1076a0b5;
  /* 1076a09a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a09d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a0a0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1076a0a5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1076a0a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a0aa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076a0ad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1076a0af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a0b2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1076a0b5:;
  /* 1076a0b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a0b8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a0bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a0c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a0c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a0c5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a0c8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1076a0cf or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a0d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a0d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076a0d7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1076a0de:;
  /* 1076a0de mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a0e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076a0e4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1076a0e6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a0e9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a0ec mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076a0ef mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1076a0f2:;
  /* 1076a0f2 mov eax, 1 */
  EAX = (0x1u);
L_1076a0f7:;
  /* 1076a0f7 mov esp, ebp */
  ESP = (EBP);
  /* 1076a0f9 pop ebp */
  EBP = (pop32());
  /* 1076a0fa ret  */
  ESPCHK(0x10769b10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a100 @ 0x1076a100 (304 bytes, 79 insns) */
void f_1076a100(void) {
  FTRACE(0x1076a100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076a100 push ebp */
  push32((uint32_t)(EBP));
  /* 1076a101 mov ebp, esp */
  EBP = (ESP);
  /* 1076a103 push ecx */
  push32((uint32_t)(ECX));
  /* 1076a104 cmp dword ptr [0x10791f00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791f00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a10b je 0x1076a22c */
  if (C.zf) goto L_1076a22c;
  /* 1076a111 mov eax, dword ptr [0x10791ef8] */
  EAX = (r32((uint32_t)(0x10791ef8)));
  /* 1076a116 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1076a119 mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 1076a11f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076a122 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a124 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076a127 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1076a12c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1076a131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a134 push eax */
  push32((uint32_t)(EAX));
  /* 1076a135 call dword ptr [0x10793368] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793368))), 0x1076a13bu);
  /* 1076a13b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a140 mov ecx, dword ptr [0x10791ef8] */
  ECX = (r32((uint32_t)(0x10791ef8)));
  /* 1076a146 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a148 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a14d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076a150 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1076a152 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076a158 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1076a15b mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a160 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076a163 mov edx, dword ptr [0x10791ef8] */
  EDX = (r32((uint32_t)(0x10791ef8)));
  /* 1076a169 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1076a174 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a179 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076a17c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1076a17f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1076a182 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a187 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076a18a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1076a18d mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076a193 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076a196 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1076a19a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076a19c jne 0x1076a1b2 */
  if (!C.zf) goto L_1076a1b2;
  /* 1076a19e mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076a1a4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1076a1a7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1076a1a9 mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 1076a1af mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1076a1b2:;
  /* 1076a1b2 mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076a1b8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a1bc jne 0x1076a222 */
  if (!C.zf) goto L_1076a222;
  /* 1076a1be cmp dword ptr [0x10791f04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10791f04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a1c5 jle 0x1076a222 */
  if ((C.zf||C.sf!=C.of)) goto L_1076a222;
  /* 1076a1c7 mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a1cc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076a1cf push ecx */
  push32((uint32_t)(ECX));
  /* 1076a1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a1d2 mov edx, dword ptr [0x10791f0c] */
  EDX = (r32((uint32_t)(0x10791f0c)));
  /* 1076a1d8 push edx */
  push32((uint32_t)(EDX));
  /* 1076a1d9 call dword ptr [0x107933b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107933b0))), 0x1076a1dfu);
  /* 1076a1df mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 1076a1e4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076a1e7 mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 1076a1ed add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a1ef mov edx, dword ptr [0x10791f00] */
  EDX = (r32((uint32_t)(0x10791f00)));
  /* 1076a1f5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a1f8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a1fa push ecx */
  push32((uint32_t)(ECX));
  /* 1076a1fb mov eax, dword ptr [0x10791f00] */
  EAX = (r32((uint32_t)(0x10791f00)));
  /* 1076a200 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a203 push eax */
  push32((uint32_t)(EAX));
  /* 1076a204 mov ecx, dword ptr [0x10791f00] */
  ECX = (r32((uint32_t)(0x10791f00)));
  /* 1076a20a push ecx */
  push32((uint32_t)(ECX));
  /* 1076a20b call 0x1076c830 */
  push32(0x1076a210u); f_1076c830();
  /* 1076a210 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a213 mov edx, dword ptr [0x10791f04] */
  EDX = (r32((uint32_t)(0x10791f04)));
  /* 1076a219 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a21c mov dword ptr [0x10791f04], edx */
  w32((uint32_t)(0x10791f04), (EDX));
L_1076a222:;
  /* 1076a222 mov dword ptr [0x10791f00], 0 */
  w32((uint32_t)(0x10791f00), (0x0u));
L_1076a22c:;
  /* 1076a22c mov esp, ebp */
  ESP = (EBP);
  /* 1076a22e pop ebp */
  EBP = (pop32());
  /* 1076a22f ret  */
  ESPCHK(0x1076a100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a230 @ 0x1076a230 (1565 bytes, 343 insns) */
void f_1076a230(void) {
  FTRACE(0x1076a230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076a230 push ebp */
  push32((uint32_t)(EBP));
  /* 1076a231 mov ebp, esp */
  EBP = (ESP);
  /* 1076a233 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a239 mov eax, dword ptr [0x10791f04] */
  EAX = (r32((uint32_t)(0x10791f04)));
  /* 1076a23e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076a241 push eax */
  push32((uint32_t)(EAX));
  /* 1076a242 mov ecx, dword ptr [0x10791f08] */
  ECX = (r32((uint32_t)(0x10791f08)));
  /* 1076a248 push ecx */
  push32((uint32_t)(ECX));
  /* 1076a249 call dword ptr [0x10793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793388))), 0x1076a24fu);
  /* 1076a24f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a251 je 0x1076a25b */
  if (C.zf) goto L_1076a25b;
  /* 1076a253 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076a256 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a25b:;
  /* 1076a25b mov edx, dword ptr [0x10791f08] */
  EDX = (r32((uint32_t)(0x10791f08)));
  /* 1076a261 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1076a267 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1076a271 jmp 0x1076a282 */
  goto L_1076a282;
L_1076a273:;
  /* 1076a273 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1076a279 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a27c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1076a282:;
  /* 1076a282 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1076a288 cmp ecx, dword ptr [0x10791f04] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791f04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a28e jge 0x1076a847 */
  if ((C.sf==C.of)) goto L_1076a847;
  /* 1076a294 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a29a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076a29d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1076a2a3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1076a2a8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1076a2ae push ecx */
  push32((uint32_t)(ECX));
  /* 1076a2af call dword ptr [0x10793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793388))), 0x1076a2b5u);
  /* 1076a2b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a2b7 je 0x1076a2c3 */
  if (C.zf) goto L_1076a2c3;
  /* 1076a2b9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1076a2be jmp 0x1076a849 */
  goto L_1076a849;
L_1076a2c3:;
  /* 1076a2c3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a2c9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076a2cc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1076a2d2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1076a2d8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a2de mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1076a2e1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a2e7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076a2ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076a2ed mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1076a2f7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1076a301 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076a308 jmp 0x1076a313 */
  goto L_1076a313;
L_1076a30a:;
  /* 1076a30a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076a30d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a310 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1076a313:;
  /* 1076a313 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a317 jge 0x1076a80b */
  if ((C.sf==C.of)) goto L_1076a80b;
  /* 1076a31d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1076a327 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1076a331 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1076a33b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1076a345 jmp 0x1076a356 */
  goto L_1076a356;
L_1076a347:;
  /* 1076a347 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1076a34d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a350 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1076a356:;
  /* 1076a356 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a35d jge 0x1076a372 */
  if ((C.sf==C.of)) goto L_1076a372;
  /* 1076a35f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1076a365 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1076a370 jmp 0x1076a347 */
  goto L_1076a347;
L_1076a372:;
  /* 1076a372 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a376 jl 0x1076a7ad */
  if ((C.sf!=C.of)) goto L_1076a7ad;
  /* 1076a37c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1076a381 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1076a387 push ecx */
  push32((uint32_t)(ECX));
  /* 1076a388 call dword ptr [0x10793388] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793388))), 0x1076a38eu);
  /* 1076a38e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a390 je 0x1076a39c */
  if (C.zf) goto L_1076a39c;
  /* 1076a392 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1076a397 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a39c:;
  /* 1076a39c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1076a3a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1076a3a5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1076a3af jmp 0x1076a3c0 */
  goto L_1076a3c0;
L_1076a3b1:;
  /* 1076a3b1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1076a3b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a3ba mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1076a3c0:;
  /* 1076a3c0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a3c7 jge 0x1076a544 */
  if ((C.sf==C.of)) goto L_1076a544;
  /* 1076a3cd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076a3d0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a3d3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1076a3d9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a3df add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a3e5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1076a3eb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a3f1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a3f5 jne 0x1076a402 */
  if (!C.zf) goto L_1076a402;
  /* 1076a3f7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1076a3fd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a400 je 0x1076a40c */
  if (C.zf) goto L_1076a40c;
L_1076a402:;
  /* 1076a402 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1076a407 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a40c:;
  /* 1076a40c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a412 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076a414 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1076a41a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1076a420 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1076a426 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1076a42c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1076a42f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076a431 je 0x1076a469 */
  if (C.zf) goto L_1076a469;
  /* 1076a433 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1076a439 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a43c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1076a442 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a44c jle 0x1076a458 */
  if ((C.zf||C.sf!=C.of)) goto L_1076a458;
  /* 1076a44e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1076a453 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a458:;
  /* 1076a458 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1076a45e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a461 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1076a467 jmp 0x1076a4ab */
  goto L_1076a4ab;
L_1076a469:;
  /* 1076a469 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1076a46f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1076a472 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a475 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1076a47b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a482 jle 0x1076a48e */
  if ((C.zf||C.sf!=C.of)) goto L_1076a48e;
  /* 1076a484 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1076a48e:;
  /* 1076a48e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1076a494 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1076a49b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a49e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1076a4a4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1076a4ab:;
  /* 1076a4ab cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a4b2 jl 0x1076a4cd */
  if ((C.sf!=C.of)) goto L_1076a4cd;
  /* 1076a4b4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1076a4ba and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1076a4bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a4bf jne 0x1076a4cd */
  if (!C.zf) goto L_1076a4cd;
  /* 1076a4c1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a4cb jle 0x1076a4d7 */
  if ((C.zf||C.sf!=C.of)) goto L_1076a4d7;
L_1076a4cd:;
  /* 1076a4cd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1076a4d2 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a4d7:;
  /* 1076a4d7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a4dd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a4e3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1076a4e6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a4ec je 0x1076a4f8 */
  if (C.zf) goto L_1076a4f8;
  /* 1076a4ee mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1076a4f3 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a4f8:;
  /* 1076a4f8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a4fe add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a504 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1076a50a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a510 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a516 jb 0x1076a40c */
  if (C.cf) goto L_1076a40c;
  /* 1076a51c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a522 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a528 je 0x1076a534 */
  if (C.zf) goto L_1076a534;
  /* 1076a52a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1076a52f jmp 0x1076a849 */
  goto L_1076a849;
L_1076a534:;
  /* 1076a534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076a537 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a53c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076a53f jmp 0x1076a3b1 */
  goto L_1076a3b1;
L_1076a544:;
  /* 1076a544 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076a547 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076a549 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a54f je 0x1076a55b */
  if (C.zf) goto L_1076a55b;
  /* 1076a551 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1076a556 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a55b:;
  /* 1076a55b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076a55e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1076a564 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1076a56b jmp 0x1076a576 */
  goto L_1076a576;
L_1076a56d:;
  /* 1076a56d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a570 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a573 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1076a576:;
  /* 1076a576 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a57a jge 0x1076a7ad */
  if ((C.sf==C.of)) goto L_1076a7ad;
  /* 1076a580 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1076a58a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1076a590 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1076a596:;
  /* 1076a596 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a59c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076a59f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1076a5a5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a5ab cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a5b1 je 0x1076a6da */
  if (C.zf) goto L_1076a6da;
  /* 1076a5b7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a5ba mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1076a5c0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a5c7 je 0x1076a6da */
  if (C.zf) goto L_1076a6da;
  /* 1076a5cd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a5d3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a5d9 jb 0x1076a5ee */
  if (C.cf) goto L_1076a5ee;
  /* 1076a5db mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1076a5e1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a5e6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a5ec jb 0x1076a5f8 */
  if (C.cf) goto L_1076a5f8;
L_1076a5ee:;
  /* 1076a5ee mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1076a5f3 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a5f8:;
  /* 1076a5f8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a5fe and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1076a604 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1076a60a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1076a610 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a613 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1076a616 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a619 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a61e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1076a624:;
  /* 1076a624 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a627 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a62d je 0x1076a64e */
  if (C.zf) goto L_1076a64e;
  /* 1076a62f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a632 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a638 jne 0x1076a63c */
  if (!C.zf) goto L_1076a63c;
  /* 1076a63a jmp 0x1076a64e */
  goto L_1076a64e;
L_1076a63c:;
  /* 1076a63c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a63f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076a641 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1076a644 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a647 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a649 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1076a64c jmp 0x1076a624 */
  goto L_1076a624;
L_1076a64e:;
  /* 1076a64e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076a651 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a657 jne 0x1076a663 */
  if (!C.zf) goto L_1076a663;
  /* 1076a659 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1076a65e jmp 0x1076a849 */
  goto L_1076a849;
L_1076a663:;
  /* 1076a663 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a669 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076a66b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1076a66e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a671 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1076a677 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a67e jle 0x1076a68a */
  if ((C.zf||C.sf!=C.of)) goto L_1076a68a;
  /* 1076a680 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1076a68a:;
  /* 1076a68a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1076a690 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a693 je 0x1076a69f */
  if (C.zf) goto L_1076a69f;
  /* 1076a695 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1076a69a jmp 0x1076a849 */
  goto L_1076a849;
L_1076a69f:;
  /* 1076a69f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a6a5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1076a6a8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a6ae je 0x1076a6ba */
  if (C.zf) goto L_1076a6ba;
  /* 1076a6b0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1076a6b5 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a6ba:;
  /* 1076a6ba mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1076a6c0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1076a6c6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1076a6cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a6cf mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1076a6d5 jmp 0x1076a596 */
  goto L_1076a596;
L_1076a6da:;
  /* 1076a6da cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a6e1 je 0x1076a751 */
  if (C.zf) goto L_1076a751;
  /* 1076a6e3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a6e7 jge 0x1076a71b */
  if ((C.sf==C.of)) goto L_1076a71b;
  /* 1076a6e9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a6ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a6f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a6f3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1076a6f9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a6fb mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1076a701 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a706 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a709 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a70b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1076a711 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a713 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1076a719 jmp 0x1076a751 */
  goto L_1076a751;
L_1076a71b:;
  /* 1076a71b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a71e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a721 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a726 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a728 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1076a72e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a730 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1076a736 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a739 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a73c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1076a741 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1076a743 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1076a749 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a74b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1076a751:;
  /* 1076a751 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1076a757 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076a75a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a760 jne 0x1076a774 */
  if (!C.zf) goto L_1076a774;
  /* 1076a762 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076a765 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1076a76b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a772 je 0x1076a77e */
  if (C.zf) goto L_1076a77e;
L_1076a774:;
  /* 1076a774 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1076a779 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a77e:;
  /* 1076a77e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1076a784 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076a787 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a78d je 0x1076a799 */
  if (C.zf) goto L_1076a799;
  /* 1076a78f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1076a794 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a799:;
  /* 1076a799 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1076a79f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a7a2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1076a7a8 jmp 0x1076a56d */
  goto L_1076a56d;
L_1076a7ad:;
  /* 1076a7ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076a7b0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1076a7b6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1076a7bc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a7c0 jne 0x1076a7da */
  if (!C.zf) goto L_1076a7da;
  /* 1076a7c2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076a7c5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1076a7cb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1076a7d1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a7d8 je 0x1076a7e1 */
  if (C.zf) goto L_1076a7e1;
L_1076a7da:;
  /* 1076a7da mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1076a7df jmp 0x1076a849 */
  goto L_1076a849;
L_1076a7e1:;
  /* 1076a7e1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1076a7e7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a7ed mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1076a7f3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076a7f6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a7fb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1076a7fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a801 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1076a803 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076a806 jmp 0x1076a30a */
  goto L_1076a30a;
L_1076a80b:;
  /* 1076a80b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a811 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1076a817 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a819 jne 0x1076a82c */
  if (!C.zf) goto L_1076a82c;
  /* 1076a81b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a821 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1076a827 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a82a je 0x1076a833 */
  if (C.zf) goto L_1076a833;
L_1076a82c:;
  /* 1076a82c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1076a831 jmp 0x1076a849 */
  goto L_1076a849;
L_1076a833:;
  /* 1076a833 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1076a839 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a83c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1076a842 jmp 0x1076a273 */
  goto L_1076a273;
L_1076a847:;
  /* 1076a847 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076a849:;
  /* 1076a849 mov esp, ebp */
  ESP = (EBP);
  /* 1076a84b pop ebp */
  EBP = (pop32());
  /* 1076a84c ret  */
  ESPCHK(0x1076a230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a850 @ 0x1076a850 (250 bytes, 92 insns) */
void f_1076a850(void) {
  FTRACE(0x1076a850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076a850 push ebp */
  push32((uint32_t)(EBP));
  /* 1076a851 mov ebp, esp */
  EBP = (ESP);
  /* 1076a853 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a856 push ebx */
  push32((uint32_t)(EBX));
  /* 1076a857 push esi */
  push32((uint32_t)(ESI));
  /* 1076a858 push edi */
  push32((uint32_t)(EDI));
  /* 1076a859 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1076a85c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1076a85f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1076a862 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1076a865:;
  /* 1076a865 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a869 jne 0x1076a889 */
  if (!C.zf) goto L_1076a889;
  /* 1076a86b push 0x1078bfdc */
  push32((uint32_t)(0x1078bfdcu));
  /* 1076a870 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a872 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1076a874 push 0x1078bfd0 */
  push32((uint32_t)(0x1078bfd0u));
  /* 1076a879 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076a87b call 0x10763a00 */
  push32(0x1076a880u); f_10763a00();
  /* 1076a880 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a883 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a886 jne 0x1076a889 */
  if (!C.zf) goto L_1076a889;
  /* 1076a888 int3  */
  x86_unimpl("int3 @ 0x1076a888");
L_1076a889:;
  /* 1076a889 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076a88b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076a88d jne 0x1076a865 */
  if (!C.zf) goto L_1076a865;
L_1076a88f:;
  /* 1076a88f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a893 jne 0x1076a8b3 */
  if (!C.zf) goto L_1076a8b3;
  /* 1076a895 push 0x1078bfc0 */
  push32((uint32_t)(0x1078bfc0u));
  /* 1076a89a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a89c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1076a89e push 0x1078bfd0 */
  push32((uint32_t)(0x1078bfd0u));
  /* 1076a8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076a8a5 call 0x10763a00 */
  push32(0x1076a8aau); f_10763a00();
  /* 1076a8aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a8ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a8b0 jne 0x1076a8b3 */
  if (!C.zf) goto L_1076a8b3;
  /* 1076a8b2 int3  */
  x86_unimpl("int3 @ 0x1076a8b2");
L_1076a8b3:;
  /* 1076a8b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a8b7 jne 0x1076a88f */
  if (!C.zf) goto L_1076a88f;
  /* 1076a8b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8bc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1076a8c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a8c9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1076a8cc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a8d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1076a8d4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8d7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1076a8de mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076a8e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1076a8e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076a8e5 push edx */
  push32((uint32_t)(EDX));
  /* 1076a8e6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8e9 push eax */
  push32((uint32_t)(EAX));
  /* 1076a8ea call 0x1076b8d0 */
  push32(0x1076a8efu); f_1076b8d0();
  /* 1076a8ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a8f2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1076a8f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a8f8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076a8fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a8fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a901 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1076a904 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a907 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a90b jl 0x1076a92f */
  if ((C.sf!=C.of)) goto L_1076a92f;
  /* 1076a90d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a910 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076a912 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1076a915 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076a917 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076a91d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1076a920 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a923 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076a925 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a928 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a92b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076a92d jmp 0x1076a940 */
  goto L_1076a940;
L_1076a92f:;
  /* 1076a92f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076a932 push edx */
  push32((uint32_t)(EDX));
  /* 1076a933 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a935 call 0x1076b650 */
  push32(0x1076a93au); f_1076b650();
  /* 1076a93a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a93d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1076a940:;
  /* 1076a940 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076a943 pop edi */
  EDI = (pop32());
  /* 1076a944 pop esi */
  ESI = (pop32());
  /* 1076a945 pop ebx */
  EBX = (pop32());
  /* 1076a946 mov esp, ebp */
  ESP = (EBP);
  /* 1076a948 pop ebp */
  EBP = (pop32());
  /* 1076a949 ret  */
  ESPCHK(0x1076a850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a950 @ 0x1076a950 (183 bytes, 58 insns) */
void f_1076a950(void) {
  FTRACE(0x1076a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076a950 push ebp */
  push32((uint32_t)(EBP));
  /* 1076a951 mov ebp, esp */
  EBP = (ESP);
  /* 1076a953 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076a956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a959 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a95c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076a961 ja 0x1076a97a */
  if ((!C.cf&&!C.zf)) goto L_1076a97a;
  /* 1076a963 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a966 mov edx, dword ptr [0x1078ec98] */
  EDX = (r32((uint32_t)(0x1078ec98)));
  /* 1076a96c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a96e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1076a972 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1076a975 jmp 0x1076aa03 */
  goto L_1076aa03;
L_1076a97a:;
  /* 1076a97a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a97d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1076a980 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076a986 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076a98c mov edx, dword ptr [0x1078ec98] */
  EDX = (r32((uint32_t)(0x1078ec98)));
  /* 1076a992 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a994 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1076a998 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1076a99d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a99f je 0x1076a9c3 */
  if (C.zf) goto L_1076a9c3;
  /* 1076a9a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076a9a4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1076a9a7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076a9ad mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1076a9b0 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1076a9b3 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1076a9b6 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1076a9ba mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1076a9c1 jmp 0x1076a9d4 */
  goto L_1076a9d4;
L_1076a9c3:;
  /* 1076a9c3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1076a9c6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1076a9c9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1076a9cd mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1076a9d4:;
  /* 1076a9d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076a9d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a9d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076a9da lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1076a9dd push ecx */
  push32((uint32_t)(ECX));
  /* 1076a9de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076a9e1 push edx */
  push32((uint32_t)(EDX));
  /* 1076a9e2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1076a9e5 push eax */
  push32((uint32_t)(EAX));
  /* 1076a9e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076a9e8 call 0x1076cb70 */
  push32(0x1076a9edu); f_1076cb70();
  /* 1076a9ed add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076a9f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076a9f2 jne 0x1076a9f8 */
  if (!C.zf) goto L_1076a9f8;
  /* 1076a9f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076a9f6 jmp 0x1076aa03 */
  goto L_1076aa03;
L_1076a9f8:;
  /* 1076a9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076a9fb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076aa00 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1076aa03:;
  /* 1076aa03 mov esp, ebp */
  ESP = (EBP);
  /* 1076aa05 pop ebp */
  EBP = (pop32());
  /* 1076aa06 ret  */
  ESPCHK(0x1076a950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa10 @ 0x1076aa10 (836 bytes, 238 insns) */
void f_1076aa10(void) {
  FTRACE(0x1076aa10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076aa10 push ebp */
  push32((uint32_t)(EBP));
  /* 1076aa11 mov ebp, esp */
  EBP = (ESP);
  /* 1076aa13 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076aa16 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076aa18 call 0x10768340 */
  push32(0x1076aa1du); f_10768340();
  /* 1076aa1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aa20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076aa23 push eax */
  push32((uint32_t)(EAX));
  /* 1076aa24 call 0x1076ad60 */
  push32(0x1076aa29u); f_1076ad60();
  /* 1076aa29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aa2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1076aa2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076aa32 cmp ecx, dword ptr [0x10791c44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791c44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aa38 jne 0x1076aa4b */
  if (!C.zf) goto L_1076aa4b;
  /* 1076aa3a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076aa3c call 0x107683e0 */
  push32(0x1076aa41u); f_107683e0();
  /* 1076aa41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aa44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076aa46 jmp 0x1076ad50 */
  goto L_1076ad50;
L_1076aa4b:;
  /* 1076aa4b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aa4f jne 0x1076aa6c */
  if (!C.zf) goto L_1076aa6c;
  /* 1076aa51 call 0x1076ae40 */
  push32(0x1076aa56u); f_1076ae40();
  /* 1076aa56 call 0x1076aec0 */
  push32(0x1076aa5bu); f_1076aec0();
  /* 1076aa5b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076aa5d call 0x107683e0 */
  push32(0x1076aa62u); f_107683e0();
  /* 1076aa62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aa65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076aa67 jmp 0x1076ad50 */
  goto L_1076ad50;
L_1076aa6c:;
  /* 1076aa6c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076aa73 jmp 0x1076aa7e */
  goto L_1076aa7e;
L_1076aa75:;
  /* 1076aa75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076aa78 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aa7b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076aa7e:;
  /* 1076aa7e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aa82 jae 0x1076abcf */
  if (!C.cf) goto L_1076abcf;
  /* 1076aa88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076aa8b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076aa8e mov ecx, dword ptr [eax + 0x1078eeb8] */
  ECX = (r32((uint32_t)(EAX + 0x1078eeb8)));
  /* 1076aa94 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aa97 jne 0x1076abca */
  if (!C.zf) goto L_1076abca;
  /* 1076aa9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1076aaa4 jmp 0x1076aaaf */
  goto L_1076aaaf;
L_1076aaa6:;
  /* 1076aaa6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076aaa9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aaac mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1076aaaf:;
  /* 1076aaaf cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aab6 jae 0x1076aac4 */
  if (!C.cf) goto L_1076aac4;
  /* 1076aab8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076aabb mov byte ptr [eax + 0x10791de0], 0 */
  w8((uint32_t)(EAX + 0x10791de0), (0x0u));
  /* 1076aac2 jmp 0x1076aaa6 */
  goto L_1076aaa6;
L_1076aac4:;
  /* 1076aac4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076aacb jmp 0x1076aad6 */
  goto L_1076aad6;
L_1076aacd:;
  /* 1076aacd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076aad0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aad3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1076aad6:;
  /* 1076aad6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aada jae 0x1076ab57 */
  if (!C.cf) goto L_1076ab57;
  /* 1076aadc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076aadf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076aae2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076aae5 lea ecx, [edx + eax*8 + 0x1078eec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x1078eec8));
  /* 1076aaec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076aaef jmp 0x1076aafa */
  goto L_1076aafa;
L_1076aaf1:;
  /* 1076aaf1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076aaf4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aaf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1076aafa:;
  /* 1076aafa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076aafd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076aaff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1076ab01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076ab03 je 0x1076ab52 */
  if (C.zf) goto L_1076ab52;
  /* 1076ab05 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ab08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ab0a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1076ab0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ab0f je 0x1076ab52 */
  if (C.zf) goto L_1076ab52;
  /* 1076ab11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ab14 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ab16 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076ab18 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1076ab1b jmp 0x1076ab26 */
  goto L_1076ab26;
L_1076ab1d:;
  /* 1076ab1d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ab20 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ab23 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1076ab26:;
  /* 1076ab26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ab29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ab2b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1076ab2e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ab31 ja 0x1076ab50 */
  if ((!C.cf&&!C.zf)) goto L_1076ab50;
  /* 1076ab33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ab36 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ab39 mov dl, byte ptr [eax + 0x10791de1] */
  DL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 1076ab3f or dl, byte ptr [ecx + 0x1078eeb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x1078eeb0))); DL = (_r); fl_logic(_r,8); }
  /* 1076ab45 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ab48 mov byte ptr [eax + 0x10791de1], dl */
  w8((uint32_t)(EAX + 0x10791de1), (DL));
  /* 1076ab4e jmp 0x1076ab1d */
  goto L_1076ab1d;
L_1076ab50:;
  /* 1076ab50 jmp 0x1076aaf1 */
  goto L_1076aaf1;
L_1076ab52:;
  /* 1076ab52 jmp 0x1076aacd */
  goto L_1076aacd;
L_1076ab57:;
  /* 1076ab57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ab5a mov dword ptr [0x10791c44], ecx */
  w32((uint32_t)(0x10791c44), (ECX));
  /* 1076ab60 mov dword ptr [0x10791ccc], 1 */
  w32((uint32_t)(0x10791ccc), (0x1u));
  /* 1076ab6a mov edx, dword ptr [0x10791c44] */
  EDX = (r32((uint32_t)(0x10791c44)));
  /* 1076ab70 push edx */
  push32((uint32_t)(EDX));
  /* 1076ab71 call 0x1076adc0 */
  push32(0x1076ab76u); f_1076adc0();
  /* 1076ab76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ab79 mov dword ptr [0x10791ee4], eax */
  w32((uint32_t)(0x10791ee4), (EAX));
  /* 1076ab7e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076ab85 jmp 0x1076ab90 */
  goto L_1076ab90;
L_1076ab87:;
  /* 1076ab87 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ab8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ab8d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076ab90:;
  /* 1076ab90 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ab94 jae 0x1076abb4 */
  if (!C.cf) goto L_1076abb4;
  /* 1076ab96 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ab99 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076ab9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ab9f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076aba2 mov cx, word ptr [ecx + eax*2 + 0x1078eebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x1078eebc)));
  /* 1076abaa mov word ptr [edx*2 + 0x10791cc0], cx */
  w16((uint32_t)(EDX*2 + 0x10791cc0), (CX));
  /* 1076abb2 jmp 0x1076ab87 */
  goto L_1076ab87;
L_1076abb4:;
  /* 1076abb4 call 0x1076aec0 */
  push32(0x1076abb9u); f_1076aec0();
  /* 1076abb9 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076abbb call 0x107683e0 */
  push32(0x1076abc0u); f_107683e0();
  /* 1076abc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076abc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076abc5 jmp 0x1076ad50 */
  goto L_1076ad50;
L_1076abca:;
  /* 1076abca jmp 0x1076aa75 */
  goto L_1076aa75;
L_1076abcf:;
  /* 1076abcf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1076abd2 push edx */
  push32((uint32_t)(EDX));
  /* 1076abd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076abd6 push eax */
  push32((uint32_t)(EAX));
  /* 1076abd7 call dword ptr [0x107932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f8))), 0x1076abddu);
  /* 1076abdd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076abe0 jne 0x1076ad22 */
  if (!C.zf) goto L_1076ad22;
  /* 1076abe6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1076abed jmp 0x1076abf8 */
  goto L_1076abf8;
L_1076abef:;
  /* 1076abef mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076abf2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076abf5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1076abf8:;
  /* 1076abf8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076abff jae 0x1076ac0d */
  if (!C.cf) goto L_1076ac0d;
  /* 1076ac01 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ac04 mov byte ptr [edx + 0x10791de0], 0 */
  w8((uint32_t)(EDX + 0x10791de0), (0x0u));
  /* 1076ac0b jmp 0x1076abef */
  goto L_1076abef;
L_1076ac0d:;
  /* 1076ac0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ac10 mov dword ptr [0x10791c44], eax */
  w32((uint32_t)(0x10791c44), (EAX));
  /* 1076ac15 mov dword ptr [0x10791ee4], 0 */
  w32((uint32_t)(0x10791ee4), (0x0u));
  /* 1076ac1f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ac23 jbe 0x1076acde */
  if ((C.cf||C.zf)) goto L_1076acde;
  /* 1076ac29 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1076ac2c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1076ac2f jmp 0x1076ac3a */
  goto L_1076ac3a;
L_1076ac31:;
  /* 1076ac31 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076ac34 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ac37 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1076ac3a:;
  /* 1076ac3a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076ac3d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ac3f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1076ac41 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076ac43 je 0x1076ac8c */
  if (C.zf) goto L_1076ac8c;
  /* 1076ac45 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076ac48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ac4a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1076ac4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ac4f je 0x1076ac8c */
  if (C.zf) goto L_1076ac8c;
  /* 1076ac51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076ac54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ac56 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076ac58 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1076ac5b jmp 0x1076ac66 */
  goto L_1076ac66;
L_1076ac5d:;
  /* 1076ac5d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ac60 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ac63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1076ac66:;
  /* 1076ac66 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076ac69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ac6b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1076ac6e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ac71 ja 0x1076ac8a */
  if ((!C.cf&&!C.zf)) goto L_1076ac8a;
  /* 1076ac73 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ac76 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 1076ac7c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1076ac7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ac82 mov byte ptr [edx + 0x10791de1], cl */
  w8((uint32_t)(EDX + 0x10791de1), (CL));
  /* 1076ac88 jmp 0x1076ac5d */
  goto L_1076ac5d;
L_1076ac8a:;
  /* 1076ac8a jmp 0x1076ac31 */
  goto L_1076ac31;
L_1076ac8c:;
  /* 1076ac8c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1076ac93 jmp 0x1076ac9e */
  goto L_1076ac9e;
L_1076ac95:;
  /* 1076ac95 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ac98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ac9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1076ac9e:;
  /* 1076ac9e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aca5 jae 0x1076acbe */
  if (!C.cf) goto L_1076acbe;
  /* 1076aca7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076acaa mov dl, byte ptr [ecx + 0x10791de1] */
  DL = (r8((uint32_t)(ECX + 0x10791de1)));
  /* 1076acb0 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1076acb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076acb6 mov byte ptr [eax + 0x10791de1], dl */
  w8((uint32_t)(EAX + 0x10791de1), (DL));
  /* 1076acbc jmp 0x1076ac95 */
  goto L_1076ac95;
L_1076acbe:;
  /* 1076acbe mov ecx, dword ptr [0x10791c44] */
  ECX = (r32((uint32_t)(0x10791c44)));
  /* 1076acc4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076acc5 call 0x1076adc0 */
  push32(0x1076accau); f_1076adc0();
  /* 1076acca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076accd mov dword ptr [0x10791ee4], eax */
  w32((uint32_t)(0x10791ee4), (EAX));
  /* 1076acd2 mov dword ptr [0x10791ccc], 1 */
  w32((uint32_t)(0x10791ccc), (0x1u));
  /* 1076acdc jmp 0x1076ace8 */
  goto L_1076ace8;
L_1076acde:;
  /* 1076acde mov dword ptr [0x10791ccc], 0 */
  w32((uint32_t)(0x10791ccc), (0x0u));
L_1076ace8:;
  /* 1076ace8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076acef jmp 0x1076acfa */
  goto L_1076acfa;
L_1076acf1:;
  /* 1076acf1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076acf4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076acf7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1076acfa:;
  /* 1076acfa cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076acfe jae 0x1076ad0f */
  if (!C.cf) goto L_1076ad0f;
  /* 1076ad00 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ad03 mov word ptr [eax*2 + 0x10791cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10791cc0), (0x0u));
  /* 1076ad0d jmp 0x1076acf1 */
  goto L_1076acf1;
L_1076ad0f:;
  /* 1076ad0f call 0x1076aec0 */
  push32(0x1076ad14u); f_1076aec0();
  /* 1076ad14 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076ad16 call 0x107683e0 */
  push32(0x1076ad1bu); f_107683e0();
  /* 1076ad1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ad1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ad20 jmp 0x1076ad50 */
  goto L_1076ad50;
L_1076ad22:;
  /* 1076ad22 cmp dword ptr [0x10790748], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790748))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ad29 je 0x1076ad43 */
  if (C.zf) goto L_1076ad43;
  /* 1076ad2b call 0x1076ae40 */
  push32(0x1076ad30u); f_1076ae40();
  /* 1076ad30 call 0x1076aec0 */
  push32(0x1076ad35u); f_1076aec0();
  /* 1076ad35 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076ad37 call 0x107683e0 */
  push32(0x1076ad3cu); f_107683e0();
  /* 1076ad3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ad3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ad41 jmp 0x1076ad50 */
  goto L_1076ad50;
L_1076ad43:;
  /* 1076ad43 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1076ad45 call 0x107683e0 */
  push32(0x1076ad4au); f_107683e0();
  /* 1076ad4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ad4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1076ad50:;
  /* 1076ad50 mov esp, ebp */
  ESP = (EBP);
  /* 1076ad52 pop ebp */
  EBP = (pop32());
  /* 1076ad53 ret  */
  ESPCHK(0x1076aa10u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1076ad60 (89 bytes, 21 insns) */
void f_1076ad60(void) {
  FTRACE(0x1076ad60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ad60 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ad61 mov ebp, esp */
  EBP = (ESP);
  /* 1076ad63 mov dword ptr [0x10790748], 0 */
  w32((uint32_t)(0x10790748), (0x0u));
  /* 1076ad6d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ad71 jne 0x1076ad85 */
  if (!C.zf) goto L_1076ad85;
  /* 1076ad73 mov dword ptr [0x10790748], 1 */
  w32((uint32_t)(0x10790748), (0x1u));
  /* 1076ad7d call dword ptr [0x107932f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f0))), 0x1076ad83u);
  /* 1076ad83 jmp 0x1076adb7 */
  goto L_1076adb7;
L_1076ad85:;
  /* 1076ad85 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ad89 jne 0x1076ad9d */
  if (!C.zf) goto L_1076ad9d;
  /* 1076ad8b mov dword ptr [0x10790748], 1 */
  w32((uint32_t)(0x10790748), (0x1u));
  /* 1076ad95 call dword ptr [0x10793300] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793300))), 0x1076ad9bu);
  /* 1076ad9b jmp 0x1076adb7 */
  goto L_1076adb7;
L_1076ad9d:;
  /* 1076ad9d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ada1 jne 0x1076adb4 */
  if (!C.zf) goto L_1076adb4;
  /* 1076ada3 mov dword ptr [0x10790748], 1 */
  w32((uint32_t)(0x10790748), (0x1u));
  /* 1076adad mov eax, dword ptr [0x10790768] */
  EAX = (r32((uint32_t)(0x10790768)));
  /* 1076adb2 jmp 0x1076adb7 */
  goto L_1076adb7;
L_1076adb4:;
  /* 1076adb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1076adb7:;
  /* 1076adb7 pop ebp */
  EBP = (pop32());
  /* 1076adb8 ret  */
  ESPCHK(0x1076ad60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000adc0 @ 0x1076adc0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1076adc0(void) {
  FTRACE(0x1076adc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076adc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076adc1 mov ebp, esp */
  EBP = (ESP);
  /* 1076adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076adc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076adc7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076adca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076adcd sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076add3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076add6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076adda ja 0x1076ae0a */
  if ((!C.cf&&!C.zf)) goto L_1076ae0a;
  /* 1076addc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076addf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ade1 mov dl, byte ptr [eax + 0x1076ae24] */
  DL = (r8((uint32_t)(EAX + 0x1076ae24)));
  /* 1076ade7 jmp dword ptr [edx*4 + 0x1076ae10] */
  switch (EDX) {
    case 0: goto L_1076adee;
    case 1: goto L_1076adf5;
    case 2: goto L_1076adfc;
    case 3: goto L_1076ae03;
    case 4: goto L_1076ae0a;
    default: x86_unimpl("switch@0x1076ade7 out of table"); return;
  }
L_1076adee:;
  /* 1076adee mov eax, 0x411 */
  EAX = (0x411u);
  /* 1076adf3 jmp 0x1076ae0c */
  goto L_1076ae0c;
L_1076adf5:;
  /* 1076adf5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1076adfa jmp 0x1076ae0c */
  goto L_1076ae0c;
L_1076adfc:;
  /* 1076adfc mov eax, 0x412 */
  EAX = (0x412u);
  /* 1076ae01 jmp 0x1076ae0c */
  goto L_1076ae0c;
L_1076ae03:;
  /* 1076ae03 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1076ae08 jmp 0x1076ae0c */
  goto L_1076ae0c;
L_1076ae0a:;
  /* 1076ae0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076ae0c:;
  /* 1076ae0c mov esp, ebp */
  ESP = (EBP);
  /* 1076ae0e pop ebp */
  EBP = (pop32());
  /* 1076ae0f ret  */
  ESPCHK(0x1076adc0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1076ae40 (116 bytes, 29 insns) */
void f_1076ae40(void) {
  FTRACE(0x1076ae40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ae40 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ae41 mov ebp, esp */
  EBP = (ESP);
  /* 1076ae43 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ae44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ae4b jmp 0x1076ae56 */
  goto L_1076ae56;
L_1076ae4d:;
  /* 1076ae4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ae50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ae53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076ae56:;
  /* 1076ae56 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ae5d jge 0x1076ae6b */
  if ((C.sf==C.of)) goto L_1076ae6b;
  /* 1076ae5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ae62 mov byte ptr [ecx + 0x10791de0], 0 */
  w8((uint32_t)(ECX + 0x10791de0), (0x0u));
  /* 1076ae69 jmp 0x1076ae4d */
  goto L_1076ae4d;
L_1076ae6b:;
  /* 1076ae6b mov dword ptr [0x10791c44], 0 */
  w32((uint32_t)(0x10791c44), (0x0u));
  /* 1076ae75 mov dword ptr [0x10791ccc], 0 */
  w32((uint32_t)(0x10791ccc), (0x0u));
  /* 1076ae7f mov dword ptr [0x10791ee4], 0 */
  w32((uint32_t)(0x10791ee4), (0x0u));
  /* 1076ae89 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ae90 jmp 0x1076ae9b */
  goto L_1076ae9b;
L_1076ae92:;
  /* 1076ae92 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ae95 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ae98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076ae9b:;
  /* 1076ae9b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ae9f jge 0x1076aeb0 */
  if ((C.sf==C.of)) goto L_1076aeb0;
  /* 1076aea1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076aea4 mov word ptr [eax*2 + 0x10791cc0], 0 */
  w16((uint32_t)(EAX*2 + 0x10791cc0), (0x0u));
  /* 1076aeae jmp 0x1076ae92 */
  goto L_1076ae92;
L_1076aeb0:;
  /* 1076aeb0 mov esp, ebp */
  ESP = (EBP);
  /* 1076aeb2 pop ebp */
  EBP = (pop32());
  /* 1076aeb3 ret  */
  ESPCHK(0x1076ae40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aec0 @ 0x1076aec0 (770 bytes, 175 insns) */
void f_1076aec0(void) {
  FTRACE(0x1076aec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076aec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076aec1 mov ebp, esp */
  EBP = (ESP);
  /* 1076aec3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076aec9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1076aecf push eax */
  push32((uint32_t)(EAX));
  /* 1076aed0 mov ecx, dword ptr [0x10791c44] */
  ECX = (r32((uint32_t)(0x10791c44)));
  /* 1076aed6 push ecx */
  push32((uint32_t)(ECX));
  /* 1076aed7 call dword ptr [0x107932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f8))), 0x1076aeddu);
  /* 1076aedd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076aee0 jne 0x1076b0f9 */
  if (!C.zf) goto L_1076b0f9;
  /* 1076aee6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1076aef0 jmp 0x1076af01 */
  goto L_1076af01;
L_1076aef2:;
  /* 1076aef2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076aef8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076aefb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1076af01:;
  /* 1076af01 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076af0b jae 0x1076af22 */
  if (!C.cf) goto L_1076af22;
  /* 1076af0d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076af13 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1076af19 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1076af20 jmp 0x1076aef2 */
  goto L_1076aef2;
L_1076af22:;
  /* 1076af22 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1076af29 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1076af2f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076af32 jmp 0x1076af3d */
  goto L_1076af3d;
L_1076af34:;
  /* 1076af34 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076af37 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076af3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076af3d:;
  /* 1076af3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076af40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076af42 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076af44 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076af46 je 0x1076af88 */
  if (C.zf) goto L_1076af88;
  /* 1076af48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076af4b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076af4d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1076af4f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1076af55 jmp 0x1076af66 */
  goto L_1076af66;
L_1076af57:;
  /* 1076af57 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076af5d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076af60 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1076af66:;
  /* 1076af66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076af69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076af6b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1076af6e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076af74 ja 0x1076af86 */
  if ((!C.cf&&!C.zf)) goto L_1076af86;
  /* 1076af76 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076af7c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1076af84 jmp 0x1076af57 */
  goto L_1076af57;
L_1076af86:;
  /* 1076af86 jmp 0x1076af34 */
  goto L_1076af34;
L_1076af88:;
  /* 1076af88 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076af8a mov eax, dword ptr [0x10791ee4] */
  EAX = (r32((uint32_t)(0x10791ee4)));
  /* 1076af8f push eax */
  push32((uint32_t)(EAX));
  /* 1076af90 mov ecx, dword ptr [0x10791c44] */
  ECX = (r32((uint32_t)(0x10791c44)));
  /* 1076af96 push ecx */
  push32((uint32_t)(ECX));
  /* 1076af97 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1076af9d push edx */
  push32((uint32_t)(EDX));
  /* 1076af9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076afa3 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1076afa9 push eax */
  push32((uint32_t)(EAX));
  /* 1076afaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1076afac call 0x1076cb70 */
  push32(0x1076afb1u); f_1076cb70();
  /* 1076afb1 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076afb4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076afb6 mov ecx, dword ptr [0x10791c44] */
  ECX = (r32((uint32_t)(0x10791c44)));
  /* 1076afbc push ecx */
  push32((uint32_t)(ECX));
  /* 1076afbd push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076afc2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1076afc8 push edx */
  push32((uint32_t)(EDX));
  /* 1076afc9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076afce lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1076afd4 push eax */
  push32((uint32_t)(EAX));
  /* 1076afd5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076afda mov ecx, dword ptr [0x10791ee4] */
  ECX = (r32((uint32_t)(0x10791ee4)));
  /* 1076afe0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076afe1 call 0x1076cd30 */
  push32(0x1076afe6u); f_1076cd30();
  /* 1076afe6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076afe9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076afeb mov edx, dword ptr [0x10791c44] */
  EDX = (r32((uint32_t)(0x10791c44)));
  /* 1076aff1 push edx */
  push32((uint32_t)(EDX));
  /* 1076aff2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076aff7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1076affd push eax */
  push32((uint32_t)(EAX));
  /* 1076affe push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076b003 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1076b009 push ecx */
  push32((uint32_t)(ECX));
  /* 1076b00a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1076b00f mov edx, dword ptr [0x10791ee4] */
  EDX = (r32((uint32_t)(0x10791ee4)));
  /* 1076b015 push edx */
  push32((uint32_t)(EDX));
  /* 1076b016 call 0x1076cd30 */
  push32(0x1076b01bu); f_1076cd30();
  /* 1076b01b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b01e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1076b028 jmp 0x1076b039 */
  goto L_1076b039;
L_1076b02a:;
  /* 1076b02a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b030 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b033 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1076b039:;
  /* 1076b039 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b043 jae 0x1076b0f4 */
  if (!C.cf) goto L_1076b0f4;
  /* 1076b049 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b04f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b051 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1076b059 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b05c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b05e je 0x1076b096 */
  if (C.zf) goto L_1076b096;
  /* 1076b060 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b066 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 1076b06c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1076b06f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b075 mov byte ptr [edx + 0x10791de1], cl */
  w8((uint32_t)(EDX + 0x10791de1), (CL));
  /* 1076b07b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b081 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b087 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1076b08e mov byte ptr [eax + 0x10791ce0], dl */
  w8((uint32_t)(EAX + 0x10791ce0), (DL));
  /* 1076b094 jmp 0x1076b0ef */
  goto L_1076b0ef;
L_1076b096:;
  /* 1076b096 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b09c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076b09e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1076b0a6 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1076b0a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076b0ab je 0x1076b0e2 */
  if (C.zf) goto L_1076b0e2;
  /* 1076b0ad mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b0b3 mov al, byte ptr [edx + 0x10791de1] */
  AL = (r8((uint32_t)(EDX + 0x10791de1)));
  /* 1076b0b9 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1076b0bb mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b0c1 mov byte ptr [ecx + 0x10791de1], al */
  w8((uint32_t)(ECX + 0x10791de1), (AL));
  /* 1076b0c7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b0cd mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b0d3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1076b0da mov byte ptr [edx + 0x10791ce0], cl */
  w8((uint32_t)(EDX + 0x10791ce0), (CL));
  /* 1076b0e0 jmp 0x1076b0ef */
  goto L_1076b0ef;
L_1076b0e2:;
  /* 1076b0e2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b0e8 mov byte ptr [edx + 0x10791ce0], 0 */
  w8((uint32_t)(EDX + 0x10791ce0), (0x0u));
L_1076b0ef:;
  /* 1076b0ef jmp 0x1076b02a */
  goto L_1076b02a;
L_1076b0f4:;
  /* 1076b0f4 jmp 0x1076b1be */
  goto L_1076b1be;
L_1076b0f9:;
  /* 1076b0f9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1076b103 jmp 0x1076b114 */
  goto L_1076b114;
L_1076b105:;
  /* 1076b105 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b10b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b10e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1076b114:;
  /* 1076b114 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b11e jae 0x1076b1be */
  if (!C.cf) goto L_1076b1be;
  /* 1076b124 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b12b jb 0x1076b168 */
  if (C.cf) goto L_1076b168;
  /* 1076b12d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b134 ja 0x1076b168 */
  if ((!C.cf&&!C.zf)) goto L_1076b168;
  /* 1076b136 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b13c mov dl, byte ptr [ecx + 0x10791de1] */
  DL = (r8((uint32_t)(ECX + 0x10791de1)));
  /* 1076b142 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1076b145 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b14b mov byte ptr [eax + 0x10791de1], dl */
  w8((uint32_t)(EAX + 0x10791de1), (DL));
  /* 1076b151 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b157 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b15a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b160 mov byte ptr [edx + 0x10791ce0], cl */
  w8((uint32_t)(EDX + 0x10791ce0), (CL));
  /* 1076b166 jmp 0x1076b1b9 */
  goto L_1076b1b9;
L_1076b168:;
  /* 1076b168 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b16f jb 0x1076b1ac */
  if (C.cf) goto L_1076b1ac;
  /* 1076b171 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b178 ja 0x1076b1ac */
  if ((!C.cf&&!C.zf)) goto L_1076b1ac;
  /* 1076b17a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b180 mov cl, byte ptr [eax + 0x10791de1] */
  CL = (r8((uint32_t)(EAX + 0x10791de1)));
  /* 1076b186 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1076b189 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b18f mov byte ptr [edx + 0x10791de1], cl */
  w8((uint32_t)(EDX + 0x10791de1), (CL));
  /* 1076b195 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b19b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b19e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b1a4 mov byte ptr [ecx + 0x10791ce0], al */
  w8((uint32_t)(ECX + 0x10791ce0), (AL));
  /* 1076b1aa jmp 0x1076b1b9 */
  goto L_1076b1b9;
L_1076b1ac:;
  /* 1076b1ac mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1076b1b2 mov byte ptr [edx + 0x10791ce0], 0 */
  w8((uint32_t)(EDX + 0x10791ce0), (0x0u));
L_1076b1b9:;
  /* 1076b1b9 jmp 0x1076b105 */
  goto L_1076b105;
L_1076b1be:;
  /* 1076b1be mov esp, ebp */
  ESP = (EBP);
  /* 1076b1c0 pop ebp */
  EBP = (pop32());
  /* 1076b1c1 ret  */
  ESPCHK(0x1076aec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1d0 @ 0x1076b1d0 (23 bytes, 9 insns) */
void f_1076b1d0(void) {
  FTRACE(0x1076b1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076b1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1076b1d3 cmp dword ptr [0x10791ccc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791ccc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b1da je 0x1076b1e3 */
  if (C.zf) goto L_1076b1e3;
  /* 1076b1dc mov eax, dword ptr [0x10791c44] */
  EAX = (r32((uint32_t)(0x10791c44)));
  /* 1076b1e1 jmp 0x1076b1e5 */
  goto L_1076b1e5;
L_1076b1e3:;
  /* 1076b1e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076b1e5:;
  /* 1076b1e5 pop ebp */
  EBP = (pop32());
  /* 1076b1e6 ret  */
  ESPCHK(0x1076b1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1f0 @ 0x1076b1f0 (34 bytes, 10 insns) */
void f_1076b1f0(void) {
  FTRACE(0x1076b1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076b1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1076b1f3 cmp dword ptr [0x10792090], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10792090))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b1fa jne 0x1076b210 */
  if (!C.zf) goto L_1076b210;
  /* 1076b1fc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1076b1fe call 0x1076aa10 */
  push32(0x1076b203u); f_1076aa10();
  /* 1076b203 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b206 mov dword ptr [0x10792090], 1 */
  w32((uint32_t)(0x10792090), (0x1u));
L_1076b210:;
  /* 1076b210 pop ebp */
  EBP = (pop32());
  /* 1076b211 ret  */
  ESPCHK(0x1076b1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x1076b220 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1076b220(void) {
  FTRACE(0x1076b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b220 push ebp */
  push32((uint32_t)(EBP));
  /* 1076b221 mov ebp, esp */
  EBP = (ESP);
  /* 1076b223 push edi */
  push32((uint32_t)(EDI));
  /* 1076b224 push esi */
  push32((uint32_t)(ESI));
  /* 1076b225 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b228 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076b22b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b22e mov eax, ecx */
  EAX = (ECX);
  /* 1076b230 mov edx, ecx */
  EDX = (ECX);
  /* 1076b232 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b234 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b236 jbe 0x1076b240 */
  if ((C.cf||C.zf)) goto L_1076b240;
  /* 1076b238 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b23a jb 0x1076b3b8 */
  if (C.cf) goto L_1076b3b8;
L_1076b240:;
  /* 1076b240 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1076b246 jne 0x1076b25c */
  if (!C.zf) goto L_1076b25c;
  /* 1076b248 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b24b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b24e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b251 jb 0x1076b27c */
  if (C.cf) goto L_1076b27c;
  /* 1076b253 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b255 jmp dword ptr [edx*4 + 0x1076b368] */
  switch (EDX) {
    case 0: goto L_1076b378;
    case 1: goto L_1076b380;
    case 2: goto L_1076b38c;
    case 3: goto L_1076b3a0;
    default: x86_unimpl("switch@0x1076b255 out of table"); return;
  }
L_1076b25c:;
  /* 1076b25c mov eax, edi */
  EAX = (EDI);
  /* 1076b25e mov edx, 3 */
  EDX = (0x3u);
  /* 1076b263 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b266 jb 0x1076b274 */
  if (C.cf) goto L_1076b274;
  /* 1076b268 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1076b26b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b26d jmp dword ptr [eax*4 + 0x1076b280] */
  switch (EAX) {
    case 1: goto L_1076b290;
    case 2: goto L_1076b2bc;
    case 3: goto L_1076b2e0;
    default: x86_unimpl("switch@0x1076b26d out of table"); return;
  }
L_1076b274:;
  /* 1076b274 jmp dword ptr [ecx*4 + 0x1076b378] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1076b378)))); return;
  /* 1076b27b nop  */
  /* nop */
L_1076b27c:;
  /* 1076b27c jmp dword ptr [ecx*4 + 0x1076b2fc] */
  switch (ECX) {
    case 0: goto L_1076b35f;
    case 1: goto L_1076b34c;
    case 2: goto L_1076b344;
    case 3: goto L_1076b33c;
    case 4: goto L_1076b334;
    case 5: goto L_1076b32c;
    case 6: goto L_1076b324;
    case 7: goto L_1076b31c;
    default: x86_unimpl("switch@0x1076b27c out of table"); return;
  }
  /* 1076b283 nop  */
  /* nop */
L_1076b290:;
  /* 1076b290 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b292 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b294 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b296 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b299 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b29c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b29f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b2a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b2a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b2a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b2ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b2ae jb 0x1076b27c */
  if (C.cf) goto L_1076b27c;
  /* 1076b2b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b2b2 jmp dword ptr [edx*4 + 0x1076b368] */
  switch (EDX) {
    case 0: goto L_1076b378;
    case 1: goto L_1076b380;
    case 2: goto L_1076b38c;
    case 3: goto L_1076b3a0;
    default: x86_unimpl("switch@0x1076b2b2 out of table"); return;
  }
  /* 1076b2b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b2bc:;
  /* 1076b2bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b2be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b2c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b2c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b2c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b2c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b2cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b2ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b2d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b2d4 jb 0x1076b27c */
  if (C.cf) goto L_1076b27c;
  /* 1076b2d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b2d8 jmp dword ptr [edx*4 + 0x1076b368] */
  switch (EDX) {
    case 0: goto L_1076b378;
    case 1: goto L_1076b380;
    case 2: goto L_1076b38c;
    case 3: goto L_1076b3a0;
    default: x86_unimpl("switch@0x1076b2d8 out of table"); return;
  }
  /* 1076b2df nop  */
  /* nop */
L_1076b2e0:;
  /* 1076b2e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b2e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b2e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b2e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1076b2e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b2ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1076b2eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b2ee jb 0x1076b27c */
  if (C.cf) goto L_1076b27c;
  /* 1076b2f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b2f2 jmp dword ptr [edx*4 + 0x1076b368] */
  switch (EDX) {
    case 0: goto L_1076b378;
    case 1: goto L_1076b380;
    case 2: goto L_1076b38c;
    case 3: goto L_1076b3a0;
    default: x86_unimpl("switch@0x1076b2f2 out of table"); return;
  }
  /* 1076b2f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b31c:;
  /* 1076b31c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1076b320 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1076b324:;
  /* 1076b324 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1076b328 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1076b32c:;
  /* 1076b32c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1076b330 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1076b334:;
  /* 1076b334 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1076b338 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1076b33c:;
  /* 1076b33c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1076b340 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1076b344:;
  /* 1076b344 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1076b348 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1076b34c:;
  /* 1076b34c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1076b350 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1076b354 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1076b35b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b35d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1076b35f:;
  /* 1076b35f jmp dword ptr [edx*4 + 0x1076b368] */
  switch (EDX) {
    case 0: goto L_1076b378;
    case 1: goto L_1076b380;
    case 2: goto L_1076b38c;
    case 3: goto L_1076b3a0;
    default: x86_unimpl("switch@0x1076b35f out of table"); return;
  }
  /* 1076b366 mov edi, edi */
  EDI = (EDI);
L_1076b378:;
  /* 1076b378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b37b pop esi */
  ESI = (pop32());
  /* 1076b37c pop edi */
  EDI = (pop32());
  /* 1076b37d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b37e ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b37f nop  */
  /* nop */
L_1076b380:;
  /* 1076b380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b387 pop esi */
  ESI = (pop32());
  /* 1076b388 pop edi */
  EDI = (pop32());
  /* 1076b389 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b38a ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b38b nop  */
  /* nop */
L_1076b38c:;
  /* 1076b38c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b38e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b390 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b393 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b396 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b399 pop esi */
  ESI = (pop32());
  /* 1076b39a pop edi */
  EDI = (pop32());
  /* 1076b39b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b39c ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b39d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b3a0:;
  /* 1076b3a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076b3a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076b3a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b3a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b3aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b3ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b3b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b3b3 pop esi */
  ESI = (pop32());
  /* 1076b3b4 pop edi */
  EDI = (pop32());
  /* 1076b3b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b3b6 ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b3b7 nop  */
  /* nop */
L_1076b3b8:;
  /* 1076b3b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1076b3bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1076b3c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1076b3c6 jne 0x1076b3ec */
  if (!C.zf) goto L_1076b3ec;
  /* 1076b3c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b3cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b3ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b3d1 jb 0x1076b3e0 */
  if (C.cf) goto L_1076b3e0;
  /* 1076b3d3 std  */
  C.df=1;
  /* 1076b3d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b3d6 cld  */
  C.df=0;
  /* 1076b3d7 jmp dword ptr [edx*4 + 0x1076b500] */
  switch (EDX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b3d7 out of table"); return;
  }
  /* 1076b3de mov edi, edi */
  EDI = (EDI);
L_1076b3e0:;
  /* 1076b3e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076b3e2 jmp dword ptr [ecx*4 + 0x1076b4b0] */
  switch (ECX) {
    case 0: goto L_1076b4f7;
    default: x86_unimpl("switch@0x1076b3e2 out of table"); return;
  }
  /* 1076b3e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b3ec:;
  /* 1076b3ec mov eax, edi */
  EAX = (EDI);
  /* 1076b3ee mov edx, 3 */
  EDX = (0x3u);
  /* 1076b3f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b3f6 jb 0x1076b404 */
  if (C.cf) goto L_1076b404;
  /* 1076b3f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1076b3fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b3fd jmp dword ptr [eax*4 + 0x1076b408] */
  switch (EAX) {
    case 1: goto L_1076b418;
    case 2: goto L_1076b438;
    case 3: goto L_1076b460;
    default: x86_unimpl("switch@0x1076b3fd out of table"); return;
  }
L_1076b404:;
  /* 1076b404 jmp dword ptr [ecx*4 + 0x1076b500] */
  switch (ECX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b404 out of table"); return;
  }
  /* 1076b40b nop  */
  /* nop */
L_1076b418:;
  /* 1076b418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b41b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b41d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b420 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1076b421 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b424 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1076b425 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b428 jb 0x1076b3e0 */
  if (C.cf) goto L_1076b3e0;
  /* 1076b42a std  */
  C.df=1;
  /* 1076b42b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b42d cld  */
  C.df=0;
  /* 1076b42e jmp dword ptr [edx*4 + 0x1076b500] */
  switch (EDX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b42e out of table"); return;
  }
  /* 1076b435 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b438:;
  /* 1076b438 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b43b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b43d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b440 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b443 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b446 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b449 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b44c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b44f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b452 jb 0x1076b3e0 */
  if (C.cf) goto L_1076b3e0;
  /* 1076b454 std  */
  C.df=1;
  /* 1076b455 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b457 cld  */
  C.df=0;
  /* 1076b458 jmp dword ptr [edx*4 + 0x1076b500] */
  switch (EDX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b458 out of table"); return;
  }
  /* 1076b45f nop  */
  /* nop */
L_1076b460:;
  /* 1076b460 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b463 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b465 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b468 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b46b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b46e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b471 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076b474 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b477 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b47a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b47d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b480 jb 0x1076b3e0 */
  if (C.cf) goto L_1076b3e0;
  /* 1076b486 std  */
  C.df=1;
  /* 1076b487 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076b489 cld  */
  C.df=0;
  /* 1076b48a jmp dword ptr [edx*4 + 0x1076b500] */
  switch (EDX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b48a out of table"); return;
  }
  /* 1076b491 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1076b494 mov ah, 0xb4 */
  AH = (0xb4u);
  /* 1076b496 jbe 0x1076b4a8 */
  if ((C.cf||C.zf)) goto L_1076b4a8;
  /* 1076b498 mov esp, 0xc41076b4 */
  ESP = (0xc41076b4u);
  /* 1076b49d mov ah, 0x76 */
  AH = (0x76u);
  /* 1076b49f adc ah, cl */
  { uint32_t _a=(AH),_b=(CL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1076b4a1 mov ah, 0x76 */
  AH = (0x76u);
  /* 1076b4a3 adc ah, dl */
  { uint32_t _a=(AH),_b=(DL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1076b4a5 mov ah, 0x76 */
  AH = (0x76u);
  /* 1076b4a7 adc ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1076b4a9 mov ah, 0x76 */
  AH = (0x76u);
  /* 1076b4ab adc ah, ah */
  { uint32_t _a=(AH),_b=(AH),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1076b4ad mov ah, 0x76 */
  AH = (0x76u);
  /* 1076b4b4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1076b4b8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1076b4bc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1076b4c0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1076b4c4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1076b4c8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1076b4cc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1076b4d0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1076b4d4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1076b4d8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1076b4dc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1076b4e0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1076b4e4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1076b4e8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1076b4ec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1076b4f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b4f5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1076b4f7:;
  /* 1076b4f7 jmp dword ptr [edx*4 + 0x1076b500] */
  switch (EDX) {
    case 0: goto L_1076b510;
    case 1: goto L_1076b518;
    case 2: goto L_1076b528;
    case 3: goto L_1076b53c;
    default: x86_unimpl("switch@0x1076b4f7 out of table"); return;
  }
  /* 1076b4fe mov edi, edi */
  EDI = (EDI);
L_1076b510:;
  /* 1076b510 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b513 pop esi */
  ESI = (pop32());
  /* 1076b514 pop edi */
  EDI = (pop32());
  /* 1076b515 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b516 ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b517 nop  */
  /* nop */
L_1076b518:;
  /* 1076b518 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b51b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b51e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b521 pop esi */
  ESI = (pop32());
  /* 1076b522 pop edi */
  EDI = (pop32());
  /* 1076b523 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b524 ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b525 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076b528:;
  /* 1076b528 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b52b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b52e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b531 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b537 pop esi */
  ESI = (pop32());
  /* 1076b538 pop edi */
  EDI = (pop32());
  /* 1076b539 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b53a ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
  /* 1076b53b nop  */
  /* nop */
L_1076b53c:;
  /* 1076b53c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076b53f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076b542 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076b545 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076b548 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076b54b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076b54e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b551 pop esi */
  ESI = (pop32());
  /* 1076b552 pop edi */
  EDI = (pop32());
  /* 1076b553 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076b554 ret  */
  ESPCHK(0x1076b220u, _esp0);
  ESP += 4; return;
L_1076b4a8: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1076b4a8 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1076b560 (104 bytes, 43 insns) */
void f_1076b560(void) {
  FTRACE(0x1076b560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b560 push ebx */
  push32((uint32_t)(EBX));
  /* 1076b561 push esi */
  push32((uint32_t)(ESI));
  /* 1076b562 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1076b566 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076b568 jne 0x1076b582 */
  if (!C.zf) goto L_1076b582;
  /* 1076b56a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1076b56e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076b572 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b574 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b576 mov ebx, eax */
  EBX = (EAX);
  /* 1076b578 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1076b57c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b57e mov edx, ebx */
  EDX = (EBX);
  /* 1076b580 jmp 0x1076b5c3 */
  goto L_1076b5c3;
L_1076b582:;
  /* 1076b582 mov ecx, eax */
  ECX = (EAX);
  /* 1076b584 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1076b588 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076b58c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1076b590:;
  /* 1076b590 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1076b592 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1076b594 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1076b596 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1076b598 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076b59a jne 0x1076b590 */
  if (!C.zf) goto L_1076b590;
  /* 1076b59c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b59e mov esi, eax */
  ESI = (EAX);
  /* 1076b5a0 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1076b5a4 mov ecx, eax */
  ECX = (EAX);
  /* 1076b5a6 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1076b5aa mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1076b5ac add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b5ae jb 0x1076b5be */
  if (C.cf) goto L_1076b5be;
  /* 1076b5b0 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b5b4 ja 0x1076b5be */
  if ((!C.cf&&!C.zf)) goto L_1076b5be;
  /* 1076b5b6 jb 0x1076b5bf */
  if (C.cf) goto L_1076b5bf;
  /* 1076b5b8 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b5bc jbe 0x1076b5bf */
  if ((C.cf||C.zf)) goto L_1076b5bf;
L_1076b5be:;
  /* 1076b5be dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1076b5bf:;
  /* 1076b5bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b5c1 mov eax, esi */
  EAX = (ESI);
L_1076b5c3:;
  /* 1076b5c3 pop esi */
  ESI = (pop32());
  /* 1076b5c4 pop ebx */
  EBX = (pop32());
  /* 1076b5c5 ret 0x10 */
  ESPCHK(0x1076b560u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1076b5d0 (117 bytes, 44 insns) */
void f_1076b5d0(void) {
  FTRACE(0x1076b5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b5d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1076b5d1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1076b5d5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076b5d7 jne 0x1076b5f1 */
  if (!C.zf) goto L_1076b5f1;
  /* 1076b5d9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076b5dd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1076b5e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b5e3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b5e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1076b5e9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b5eb mov eax, edx */
  EAX = (EDX);
  /* 1076b5ed xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1076b5ef jmp 0x1076b641 */
  goto L_1076b641;
L_1076b5f1:;
  /* 1076b5f1 mov ecx, eax */
  ECX = (EAX);
  /* 1076b5f3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076b5f7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1076b5fb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1076b5ff:;
  /* 1076b5ff shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1076b601 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1076b603 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1076b605 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1076b607 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076b609 jne 0x1076b5ff */
  if (!C.zf) goto L_1076b5ff;
  /* 1076b60b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076b60d mov ecx, eax */
  ECX = (EAX);
  /* 1076b60f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1076b613 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1076b614 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1076b618 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b61a jb 0x1076b62a */
  if (C.cf) goto L_1076b62a;
  /* 1076b61c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b620 ja 0x1076b62a */
  if ((!C.cf&&!C.zf)) goto L_1076b62a;
  /* 1076b622 jb 0x1076b632 */
  if (C.cf) goto L_1076b632;
  /* 1076b624 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b628 jbe 0x1076b632 */
  if ((C.cf||C.zf)) goto L_1076b632;
L_1076b62a:;
  /* 1076b62a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b62e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1076b632:;
  /* 1076b632 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b636 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b63a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076b63c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076b63e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1076b641:;
  /* 1076b641 pop ebx */
  EBX = (pop32());
  /* 1076b642 ret 0x10 */
  ESPCHK(0x1076b5d0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000b650 @ 0x1076b650 (628 bytes, 214 insns) */
void f_1076b650(void) {
  FTRACE(0x1076b650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b650 push ebp */
  push32((uint32_t)(EBP));
  /* 1076b651 mov ebp, esp */
  EBP = (ESP);
  /* 1076b653 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b656 push ebx */
  push32((uint32_t)(EBX));
  /* 1076b657 push esi */
  push32((uint32_t)(ESI));
  /* 1076b658 push edi */
  push32((uint32_t)(EDI));
L_1076b659:;
  /* 1076b659 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b65d jne 0x1076b67d */
  if (!C.zf) goto L_1076b67d;
  /* 1076b65f push 0x1078c088 */
  push32((uint32_t)(0x1078c088u));
  /* 1076b664 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076b666 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1076b668 push 0x1078c07c */
  push32((uint32_t)(0x1078c07cu));
  /* 1076b66d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076b66f call 0x10763a00 */
  push32(0x1076b674u); f_10763a00();
  /* 1076b674 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b677 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b67a jne 0x1076b67d */
  if (!C.zf) goto L_1076b67d;
  /* 1076b67c int3  */
  x86_unimpl("int3 @ 0x1076b67c");
L_1076b67d:;
  /* 1076b67d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076b67f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b681 jne 0x1076b659 */
  if (!C.zf) goto L_1076b659;
  /* 1076b683 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b686 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076b689 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b68c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076b68f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1076b692 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b695 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b698 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b69e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b6a0 je 0x1076b6af */
  if (C.zf) goto L_1076b6af;
  /* 1076b6a2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6a5 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076b6a8 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1076b6ab test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076b6ad je 0x1076b6c5 */
  if (C.zf) goto L_1076b6c5;
L_1076b6af:;
  /* 1076b6af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076b6b5 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1076b6b7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6ba mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1076b6bd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076b6c0 jmp 0x1076b8bd */
  goto L_1076b8bd;
L_1076b6c5:;
  /* 1076b6c5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6c8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076b6cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1076b6ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b6d0 je 0x1076b71c */
  if (C.zf) goto L_1076b71c;
  /* 1076b6d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6d5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1076b6dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6df mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076b6e2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1076b6e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b6e7 je 0x1076b705 */
  if (C.zf) goto L_1076b705;
  /* 1076b6e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6ec mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6ef mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076b6f2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076b6f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b6f7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b6fa and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1076b6fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b700 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1076b703 jmp 0x1076b71c */
  goto L_1076b71c;
L_1076b705:;
  /* 1076b705 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b708 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b70b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b70e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b711 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1076b714 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076b717 jmp 0x1076b8bd */
  goto L_1076b8bd;
L_1076b71c:;
  /* 1076b71c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b71f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b722 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b725 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b728 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1076b72b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b72e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b731 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1076b734 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b737 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1076b73a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b73d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1076b744 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076b74b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076b74e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076b751 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b754 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076b757 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1076b75d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076b75f jne 0x1076b78f */
  if (!C.zf) goto L_1076b78f;
  /* 1076b761 cmp dword ptr [ebp - 8], 0x1078f140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1078f140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b768 je 0x1076b773 */
  if (C.zf) goto L_1076b773;
  /* 1076b76a cmp dword ptr [ebp - 8], 0x1078f160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x1078f160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b771 jne 0x1076b783 */
  if (!C.zf) goto L_1076b783;
L_1076b773:;
  /* 1076b773 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b776 push edx */
  push32((uint32_t)(EDX));
  /* 1076b777 call 0x1076d5c0 */
  push32(0x1076b77cu); f_1076d5c0();
  /* 1076b77c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b77f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b781 jne 0x1076b78f */
  if (!C.zf) goto L_1076b78f;
L_1076b783:;
  /* 1076b783 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b786 push eax */
  push32((uint32_t)(EAX));
  /* 1076b787 call 0x1076d4f0 */
  push32(0x1076b78cu); f_1076d4f0();
  /* 1076b78c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076b78f:;
  /* 1076b78f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b792 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076b795 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1076b79b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b79d je 0x1076b87b */
  if (C.zf) goto L_1076b87b;
L_1076b7a3:;
  /* 1076b7a3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7a9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1076b7ab sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b7ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b7b0 jge 0x1076b7d3 */
  if ((C.sf==C.of)) goto L_1076b7d3;
  /* 1076b7b2 push 0x1078c03c */
  push32((uint32_t)(0x1078c03cu));
  /* 1076b7b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076b7b9 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1076b7be push 0x1078c07c */
  push32((uint32_t)(0x1078c07cu));
  /* 1076b7c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076b7c5 call 0x10763a00 */
  push32(0x1076b7cau); f_10763a00();
  /* 1076b7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b7cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b7d0 jne 0x1076b7d3 */
  if (!C.zf) goto L_1076b7d3;
  /* 1076b7d2 int3  */
  x86_unimpl("int3 @ 0x1076b7d2");
L_1076b7d3:;
  /* 1076b7d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076b7d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b7d7 jne 0x1076b7a3 */
  if (!C.zf) goto L_1076b7a3;
  /* 1076b7d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7df mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1076b7e1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b7e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076b7e7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7ea mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1076b7ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b7f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1076b7f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b7f8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1076b7fb sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b7fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b801 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1076b804 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b808 jle 0x1076b826 */
  if ((C.zf||C.sf!=C.of)) goto L_1076b826;
  /* 1076b80a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076b80d push ecx */
  push32((uint32_t)(ECX));
  /* 1076b80e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b811 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076b814 push eax */
  push32((uint32_t)(EAX));
  /* 1076b815 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b818 push ecx */
  push32((uint32_t)(ECX));
  /* 1076b819 call 0x1076d1e0 */
  push32(0x1076b81eu); f_1076d1e0();
  /* 1076b81e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b821 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1076b824 jmp 0x1076b86e */
  goto L_1076b86e;
L_1076b826:;
  /* 1076b826 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b82a je 0x1076b849 */
  if (C.zf) goto L_1076b849;
  /* 1076b82c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b82f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1076b832 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b835 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1076b838 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076b83b mov ecx, dword ptr [edx*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076b842 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b844 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1076b847 jmp 0x1076b850 */
  goto L_1076b850;
L_1076b849:;
  /* 1076b849 mov dword ptr [ebp - 0x14], 0x1078ea60 */
  w32((uint32_t)(EBP + -0x14), (0x1078ea60u));
L_1076b850:;
  /* 1076b850 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1076b853 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1076b857 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1076b85a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076b85c je 0x1076b86e */
  if (C.zf) goto L_1076b86e;
  /* 1076b85e push 2 */
  push32((uint32_t)(0x2u));
  /* 1076b860 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076b862 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b865 push ecx */
  push32((uint32_t)(ECX));
  /* 1076b866 call 0x1076d090 */
  push32(0x1076b86bu); f_1076d090();
  /* 1076b86b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076b86e:;
  /* 1076b86e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b871 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076b874 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1076b877 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1076b879 jmp 0x1076b899 */
  goto L_1076b899;
L_1076b87b:;
  /* 1076b87b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076b882 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076b885 push edx */
  push32((uint32_t)(EDX));
  /* 1076b886 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1076b889 push eax */
  push32((uint32_t)(EAX));
  /* 1076b88a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076b88d push ecx */
  push32((uint32_t)(ECX));
  /* 1076b88e call 0x1076d1e0 */
  push32(0x1076b893u); f_1076d1e0();
  /* 1076b893 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b896 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076b899:;
  /* 1076b899 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076b89c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b89f je 0x1076b8b5 */
  if (C.zf) goto L_1076b8b5;
  /* 1076b8a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b8a4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076b8a7 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1076b8aa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076b8ad mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1076b8b0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076b8b3 jmp 0x1076b8bd */
  goto L_1076b8bd;
L_1076b8b5:;
  /* 1076b8b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b8b8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1076b8bd:;
  /* 1076b8bd pop edi */
  EDI = (pop32());
  /* 1076b8be pop esi */
  ESI = (pop32());
  /* 1076b8bf pop ebx */
  EBX = (pop32());
  /* 1076b8c0 mov esp, ebp */
  ESP = (EBP);
  /* 1076b8c2 pop ebp */
  EBP = (pop32());
  /* 1076b8c3 ret  */
  ESPCHK(0x1076b650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d0 @ 0x1076b8d0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1076b8d0(void) {
  FTRACE(0x1076b8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076b8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076b8d1 mov ebp, esp */
  EBP = (ESP);
  /* 1076b8d3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076b8d9 push ebx */
  push32((uint32_t)(EBX));
  /* 1076b8da push esi */
  push32((uint32_t)(ESI));
  /* 1076b8db push edi */
  push32((uint32_t)(EDI));
  /* 1076b8dc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1076b8e3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1076b8ed mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1076b8f4:;
  /* 1076b8f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b8f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1076b8f9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1076b8fc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b900 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b903 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b906 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1076b909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b90b je 0x1076c4e7 */
  if (C.zf) goto L_1076c4e7;
  /* 1076b911 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b918 jl 0x1076c4e7 */
  if ((C.sf!=C.of)) goto L_1076c4e7;
  /* 1076b91e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b922 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b925 jl 0x1076b946 */
  if ((C.sf!=C.of)) goto L_1076b946;
  /* 1076b927 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b92b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b92e jg 0x1076b946 */
  if ((!C.zf&&C.sf==C.of)) goto L_1076b946;
  /* 1076b930 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b934 movsx ecx, byte ptr [eax + 0x1078c074] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1078c074))));
  /* 1076b93b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1076b93e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1076b944 jmp 0x1076b950 */
  goto L_1076b950;
L_1076b946:;
  /* 1076b946 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1076b950:;
  /* 1076b950 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1076b956 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076b959 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076b95c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076b95f movsx edx, byte ptr [ecx + eax*8 + 0x1078c094] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1078c094))));
  /* 1076b967 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1076b96a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1076b96d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076b970 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1076b976 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076b97d ja 0x1076c4e2 */
  if ((!C.cf&&!C.zf)) goto L_1076c4e2;
  /* 1076b983 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1076b989 jmp dword ptr [ecx*4 + 0x1076c4f4] */
  switch (ECX) {
    case 0: goto L_1076b990;
    case 1: goto L_1076ba2a;
    case 2: goto L_1076ba6c;
    case 3: goto L_1076badb;
    case 4: goto L_1076bb33;
    case 5: goto L_1076bb42;
    case 6: goto L_1076bb8e;
    case 7: goto L_1076bc21;
    case 8: goto L_1076bab8;
    case 9: goto L_1076bac3;
    case 10: goto L_1076baae;
    case 11: goto L_1076baa3;
    case 12: goto L_1076bace;
    case 13: goto L_1076bad6;
    default: x86_unimpl("switch@0x1076b989 out of table"); return;
  }
L_1076b990:;
  /* 1076b990 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1076b997 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076b99a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1076b9a0 mov eax, dword ptr [0x1078ec98] */
  EAX = (r32((uint32_t)(0x1078ec98)));
  /* 1076b9a5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076b9a7 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1076b9ab and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1076b9b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076b9b3 je 0x1076ba0d */
  if (C.zf) goto L_1076ba0d;
  /* 1076b9b5 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1076b9bb push edx */
  push32((uint32_t)(EDX));
  /* 1076b9bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076b9bf push eax */
  push32((uint32_t)(EAX));
  /* 1076b9c0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b9c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076b9c5 call 0x1076c600 */
  push32(0x1076b9cau); f_1076c600();
  /* 1076b9ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b9cd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b9d0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1076b9d2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1076b9d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076b9d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076b9db mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1076b9de:;
  /* 1076b9de movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076b9e2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076b9e4 jne 0x1076ba07 */
  if (!C.zf) goto L_1076ba07;
  /* 1076b9e6 push 0x1078c114 */
  push32((uint32_t)(0x1078c114u));
  /* 1076b9eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1076b9ed push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1076b9f2 push 0x1078c108 */
  push32((uint32_t)(0x1078c108u));
  /* 1076b9f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076b9f9 call 0x10763a00 */
  push32(0x1076b9feu); f_10763a00();
  /* 1076b9fe add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ba01 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ba04 jne 0x1076ba07 */
  if (!C.zf) goto L_1076ba07;
  /* 1076ba06 int3  */
  x86_unimpl("int3 @ 0x1076ba06");
L_1076ba07:;
  /* 1076ba07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ba09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ba0b jne 0x1076b9de */
  if (!C.zf) goto L_1076b9de;
L_1076ba0d:;
  /* 1076ba0d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1076ba13 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ba14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ba17 push edx */
  push32((uint32_t)(EDX));
  /* 1076ba18 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076ba1c push eax */
  push32((uint32_t)(EAX));
  /* 1076ba1d call 0x1076c600 */
  push32(0x1076ba22u); f_1076c600();
  /* 1076ba22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ba25 jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076ba2a:;
  /* 1076ba2a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076ba31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ba34 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1076ba3a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1076ba40 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1076ba46 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1076ba4c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1076ba4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ba56 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1076ba60 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1076ba67 jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076ba6c:;
  /* 1076ba6c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076ba70 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1076ba76 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1076ba7c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ba7f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1076ba85 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ba8c ja 0x1076bad6 */
  if ((!C.cf&&!C.zf)) goto L_1076bad6;
  /* 1076ba8e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1076ba94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ba96 mov al, byte ptr [ecx + 0x1076c52c] */
  AL = (r8((uint32_t)(ECX + 0x1076c52c)));
  /* 1076ba9c jmp dword ptr [eax*4 + 0x1076c514] */
  switch (EAX) {
    case 0: goto L_1076bab8;
    case 1: goto L_1076bac3;
    case 2: goto L_1076baae;
    case 3: goto L_1076baa3;
    case 4: goto L_1076bace;
    case 5: goto L_1076bad6;
    default: x86_unimpl("switch@0x1076ba9c out of table"); return;
  }
L_1076baa3:;
  /* 1076baa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076baa6 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1076baa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076baac jmp 0x1076bad6 */
  goto L_1076bad6;
L_1076baae:;
  /* 1076baae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bab1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1076bab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076bab6 jmp 0x1076bad6 */
  goto L_1076bad6;
L_1076bab8:;
  /* 1076bab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076babb or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1076babe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076bac1 jmp 0x1076bad6 */
  goto L_1076bad6;
L_1076bac3:;
  /* 1076bac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bac6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1076bac9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076bacc jmp 0x1076bad6 */
  goto L_1076bad6;
L_1076bace:;
  /* 1076bace mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bad1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1076bad3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076bad6:;
  /* 1076bad6 jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076badb:;
  /* 1076badb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076badf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bae2 jne 0x1076bb17 */
  if (!C.zf) goto L_1076bb17;
  /* 1076bae4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1076bae7 push edx */
  push32((uint32_t)(EDX));
  /* 1076bae8 call 0x1076c710 */
  push32(0x1076baedu); f_1076c710();
  /* 1076baed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076baf0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1076baf6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bafd jge 0x1076bb15 */
  if ((C.sf==C.of)) goto L_1076bb15;
  /* 1076baff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bb02 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1076bb04 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076bb07 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1076bb0d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076bb0f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1076bb15:;
  /* 1076bb15 jmp 0x1076bb2e */
  goto L_1076bb2e;
L_1076bb17:;
  /* 1076bb17 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1076bb1d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076bb20 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bb24 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1076bb28 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1076bb2e:;
  /* 1076bb2e jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076bb33:;
  /* 1076bb33 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1076bb3d jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076bb42:;
  /* 1076bb42 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bb46 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bb49 jne 0x1076bb72 */
  if (!C.zf) goto L_1076bb72;
  /* 1076bb4b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1076bb4e push eax */
  push32((uint32_t)(EAX));
  /* 1076bb4f call 0x1076c710 */
  push32(0x1076bb54u); f_1076c710();
  /* 1076bb54 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bb57 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1076bb5d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bb64 jge 0x1076bb70 */
  if ((C.sf==C.of)) goto L_1076bb70;
  /* 1076bb66 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1076bb70:;
  /* 1076bb70 jmp 0x1076bb89 */
  goto L_1076bb89;
L_1076bb72:;
  /* 1076bb72 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1076bb78 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076bb7b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bb7f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1076bb83 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1076bb89:;
  /* 1076bb89 jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076bb8e:;
  /* 1076bb8e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bb92 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1076bb98 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1076bb9e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076bba1 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1076bba7 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bbae ja 0x1076bc1c */
  if ((!C.cf&&!C.zf)) goto L_1076bc1c;
  /* 1076bbb0 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1076bbb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076bbb8 mov al, byte ptr [ecx + 0x1076c551] */
  AL = (r8((uint32_t)(ECX + 0x1076c551)));
  /* 1076bbbe jmp dword ptr [eax*4 + 0x1076c53d] */
  switch (EAX) {
    case 0: goto L_1076bbd0;
    case 1: goto L_1076bc09;
    case 2: goto L_1076bbc5;
    case 3: goto L_1076bc13;
    case 4: goto L_1076bc1c;
    default: x86_unimpl("switch@0x1076bbbe out of table"); return;
  }
L_1076bbc5:;
  /* 1076bbc5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bbc8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1076bbcb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076bbce jmp 0x1076bc1c */
  goto L_1076bc1c;
L_1076bbd0:;
  /* 1076bbd0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076bbd3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076bbd6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bbd9 jne 0x1076bbfb */
  if (!C.zf) goto L_1076bbfb;
  /* 1076bbdb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076bbde movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1076bbe2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bbe5 jne 0x1076bbfb */
  if (!C.zf) goto L_1076bbfb;
  /* 1076bbe7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076bbea add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bbed mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1076bbf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bbf3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1076bbf6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076bbf9 jmp 0x1076bc07 */
  goto L_1076bc07;
L_1076bbfb:;
  /* 1076bbfb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1076bc02 jmp 0x1076b990 */
  goto L_1076b990;
L_1076bc07:;
  /* 1076bc07 jmp 0x1076bc1c */
  goto L_1076bc1c;
L_1076bc09:;
  /* 1076bc09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bc0c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1076bc0e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076bc11 jmp 0x1076bc1c */
  goto L_1076bc1c;
L_1076bc13:;
  /* 1076bc13 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bc16 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1076bc19 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076bc1c:;
  /* 1076bc1c jmp 0x1076c4e2 */
  goto L_1076c4e2;
L_1076bc21:;
  /* 1076bc21 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bc25 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1076bc2b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1076bc31 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076bc34 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1076bc3a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bc41 ja 0x1076c307 */
  if ((!C.cf&&!C.zf)) goto L_1076c307;
  /* 1076bc47 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1076bc4d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076bc4f mov cl, byte ptr [edx + 0x1076c5bc] */
  CL = (r8((uint32_t)(EDX + 0x1076c5bc)));
  /* 1076bc55 jmp dword ptr [ecx*4 + 0x1076c580] */
  switch (ECX) {
    case 0: goto L_1076bc5c;
    case 1: goto L_1076bef0;
    case 2: goto L_1076bd80;
    case 3: goto L_1076c029;
    case 4: goto L_1076bceb;
    case 5: goto L_1076bc71;
    case 6: goto L_1076bffb;
    case 7: goto L_1076bf00;
    case 8: goto L_1076bea5;
    case 9: goto L_1076c075;
    case 10: goto L_1076c01f;
    case 11: goto L_1076bd96;
    case 12: goto L_1076c013;
    case 13: goto L_1076c035;
    case 14: goto L_1076c307;
    default: x86_unimpl("switch@0x1076bc55 out of table"); return;
  }
L_1076bc5c:;
  /* 1076bc5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bc5f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1076bc64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076bc66 jne 0x1076bc71 */
  if (!C.zf) goto L_1076bc71;
  /* 1076bc68 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bc6b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1076bc6e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076bc71:;
  /* 1076bc71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bc74 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1076bc7a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076bc7c je 0x1076bcb7 */
  if (C.zf) goto L_1076bcb7;
  /* 1076bc7e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1076bc81 push eax */
  push32((uint32_t)(EAX));
  /* 1076bc82 call 0x1076c750 */
  push32(0x1076bc87u); f_1076c750();
  /* 1076bc87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bc8a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1076bc8e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1076bc92 push ecx */
  push32((uint32_t)(ECX));
  /* 1076bc93 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1076bc99 push edx */
  push32((uint32_t)(EDX));
  /* 1076bc9a call 0x1076d830 */
  push32(0x1076bc9fu); f_1076d830();
  /* 1076bc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bca2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1076bca5 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bca9 jge 0x1076bcb5 */
  if ((C.sf==C.of)) goto L_1076bcb5;
  /* 1076bcab mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1076bcb5:;
  /* 1076bcb5 jmp 0x1076bcdd */
  goto L_1076bcdd;
L_1076bcb7:;
  /* 1076bcb7 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1076bcba push eax */
  push32((uint32_t)(EAX));
  /* 1076bcbb call 0x1076c710 */
  push32(0x1076bcc0u); f_1076c710();
  /* 1076bcc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bcc3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1076bcca mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1076bcd0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1076bcd6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1076bcdd:;
  /* 1076bcdd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1076bce3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1076bce6 jmp 0x1076c307 */
  goto L_1076c307;
L_1076bceb:;
  /* 1076bceb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1076bcee push eax */
  push32((uint32_t)(EAX));
  /* 1076bcef call 0x1076c710 */
  push32(0x1076bcf4u); f_1076c710();
  /* 1076bcf4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bcf7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1076bcfd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bd04 je 0x1076bd12 */
  if (C.zf) goto L_1076bd12;
  /* 1076bd06 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1076bd0c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bd10 jne 0x1076bd2c */
  if (!C.zf) goto L_1076bd2c;
L_1076bd12:;
  /* 1076bd12 mov edx, dword ptr [0x1078efb0] */
  EDX = (r32((uint32_t)(0x1078efb0)));
  /* 1076bd18 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1076bd1b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bd1e push eax */
  push32((uint32_t)(EAX));
  /* 1076bd1f call 0x10767770 */
  push32(0x1076bd24u); f_10767770();
  /* 1076bd24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bd27 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1076bd2a jmp 0x1076bd7b */
  goto L_1076bd7b;
L_1076bd2c:;
  /* 1076bd2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bd2f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1076bd35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076bd37 je 0x1076bd5c */
  if (C.zf) goto L_1076bd5c;
  /* 1076bd39 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1076bd3f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1076bd42 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1076bd45 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1076bd4b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1076bd4e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1076bd50 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1076bd53 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1076bd5a jmp 0x1076bd7b */
  goto L_1076bd7b;
L_1076bd5c:;
  /* 1076bd5c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1076bd63 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1076bd69 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076bd6c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1076bd6f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1076bd75 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1076bd78 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1076bd7b:;
  /* 1076bd7b jmp 0x1076c307 */
  goto L_1076c307;
L_1076bd80:;
  /* 1076bd80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bd83 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1076bd89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076bd8b jne 0x1076bd96 */
  if (!C.zf) goto L_1076bd96;
  /* 1076bd8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bd90 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1076bd93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076bd96:;
  /* 1076bd96 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bd9d jne 0x1076bdab */
  if (!C.zf) goto L_1076bdab;
  /* 1076bd9f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1076bda9 jmp 0x1076bdb7 */
  goto L_1076bdb7;
L_1076bdab:;
  /* 1076bdab mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1076bdb1 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1076bdb7:;
  /* 1076bdb7 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1076bdbd mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1076bdc3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1076bdc6 push edx */
  push32((uint32_t)(EDX));
  /* 1076bdc7 call 0x1076c710 */
  push32(0x1076bdccu); f_1076c710();
  /* 1076bdcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bdcf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1076bdd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bdd5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1076bdda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076bddc je 0x1076be46 */
  if (C.zf) goto L_1076be46;
  /* 1076bdde cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bde2 jne 0x1076bded */
  if (!C.zf) goto L_1076bded;
  /* 1076bde4 mov ecx, dword ptr [0x1078efb4] */
  ECX = (r32((uint32_t)(0x1078efb4)));
  /* 1076bdea mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1076bded:;
  /* 1076bded mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1076bdf4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bdf7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1076bdfd:;
  /* 1076bdfd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1076be03 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1076be09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076be0c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1076be12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076be14 je 0x1076be36 */
  if (C.zf) goto L_1076be36;
  /* 1076be16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1076be1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076be1e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1076be21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076be23 je 0x1076be36 */
  if (C.zf) goto L_1076be36;
  /* 1076be25 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1076be2b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076be2e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1076be34 jmp 0x1076bdfd */
  goto L_1076bdfd;
L_1076be36:;
  /* 1076be36 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1076be3c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076be3f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1076be41 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1076be44 jmp 0x1076bea0 */
  goto L_1076bea0;
L_1076be46:;
  /* 1076be46 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076be4a jne 0x1076be54 */
  if (!C.zf) goto L_1076be54;
  /* 1076be4c mov eax, dword ptr [0x1078efb0] */
  EAX = (r32((uint32_t)(0x1078efb0)));
  /* 1076be51 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1076be54:;
  /* 1076be54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076be57 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1076be5d:;
  /* 1076be5d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1076be63 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1076be69 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076be6c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1076be72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076be74 je 0x1076be94 */
  if (C.zf) goto L_1076be94;
  /* 1076be76 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1076be7c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076be7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076be81 je 0x1076be94 */
  if (C.zf) goto L_1076be94;
  /* 1076be83 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1076be89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076be8c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1076be92 jmp 0x1076be5d */
  goto L_1076be5d;
L_1076be94:;
  /* 1076be94 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1076be9a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076be9d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1076bea0:;
  /* 1076bea0 jmp 0x1076c307 */
  goto L_1076c307;
L_1076bea5:;
  /* 1076bea5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1076bea8 push edx */
  push32((uint32_t)(EDX));
  /* 1076bea9 call 0x1076c710 */
  push32(0x1076beaeu); f_1076c710();
  /* 1076beae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076beb1 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1076beb7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076beba and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1076bebd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076bebf je 0x1076bed3 */
  if (C.zf) goto L_1076bed3;
  /* 1076bec1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1076bec7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1076bece mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1076bed1 jmp 0x1076bee1 */
  goto L_1076bee1;
L_1076bed3:;
  /* 1076bed3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1076bed9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1076bedf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1076bee1:;
  /* 1076bee1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1076beeb jmp 0x1076c307 */
  goto L_1076c307;
L_1076bef0:;
  /* 1076bef0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1076bef7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1076befa add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1076befd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1076bf00:;
  /* 1076bf00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bf03 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1076bf05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076bf08 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1076bf0e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1076bf11 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bf18 jge 0x1076bf26 */
  if ((C.sf==C.of)) goto L_1076bf26;
  /* 1076bf1a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1076bf24 jmp 0x1076bf42 */
  goto L_1076bf42;
L_1076bf26:;
  /* 1076bf26 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bf2d jne 0x1076bf42 */
  if (!C.zf) goto L_1076bf42;
  /* 1076bf2f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bf33 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bf36 jne 0x1076bf42 */
  if (!C.zf) goto L_1076bf42;
  /* 1076bf38 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1076bf42:;
  /* 1076bf42 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076bf45 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bf48 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1076bf4b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076bf4e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076bf51 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076bf53 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076bf56 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1076bf5c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1076bf62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076bf65 push ecx */
  push32((uint32_t)(ECX));
  /* 1076bf66 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1076bf6c push edx */
  push32((uint32_t)(EDX));
  /* 1076bf6d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bf71 push eax */
  push32((uint32_t)(EAX));
  /* 1076bf72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bf75 push ecx */
  push32((uint32_t)(ECX));
  /* 1076bf76 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1076bf7c push edx */
  push32((uint32_t)(EDX));
  /* 1076bf7d call dword ptr [0x1078f3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078f3a0))), 0x1076bf83u);
  /* 1076bf83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bf86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bf89 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1076bf8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076bf90 je 0x1076bfa8 */
  if (C.zf) goto L_1076bfa8;
  /* 1076bf92 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bf99 jne 0x1076bfa8 */
  if (!C.zf) goto L_1076bfa8;
  /* 1076bf9b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bf9e push ecx */
  push32((uint32_t)(ECX));
  /* 1076bf9f call dword ptr [0x1078f3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078f3ac))), 0x1076bfa5u);
  /* 1076bfa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076bfa8:;
  /* 1076bfa8 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1076bfac cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bfaf jne 0x1076bfca */
  if (!C.zf) goto L_1076bfca;
  /* 1076bfb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bfb4 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1076bfb9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076bfbb jne 0x1076bfca */
  if (!C.zf) goto L_1076bfca;
  /* 1076bfbd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bfc0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076bfc1 call dword ptr [0x1078f3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1078f3a4))), 0x1076bfc7u);
  /* 1076bfc7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076bfca:;
  /* 1076bfca mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bfcd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076bfd0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076bfd3 jne 0x1076bfe7 */
  if (!C.zf) goto L_1076bfe7;
  /* 1076bfd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bfd8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1076bfdb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076bfde mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bfe1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bfe4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1076bfe7:;
  /* 1076bfe7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076bfea push eax */
  push32((uint32_t)(EAX));
  /* 1076bfeb call 0x10767770 */
  push32(0x1076bff0u); f_10767770();
  /* 1076bff0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076bff3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1076bff6 jmp 0x1076c307 */
  goto L_1076c307;
L_1076bffb:;
  /* 1076bffb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076bffe or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1076c001 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076c004 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1076c00e jmp 0x1076c095 */
  goto L_1076c095;
L_1076c013:;
  /* 1076c013 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1076c01d jmp 0x1076c095 */
  goto L_1076c095;
L_1076c01f:;
  /* 1076c01f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1076c029:;
  /* 1076c029 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1076c033 jmp 0x1076c03f */
  goto L_1076c03f;
L_1076c035:;
  /* 1076c035 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1076c03f:;
  /* 1076c03f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1076c049 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c04c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c052 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c054 je 0x1076c073 */
  if (C.zf) goto L_1076c073;
  /* 1076c056 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1076c05d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1076c063 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c066 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1076c06c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1076c073:;
  /* 1076c073 jmp 0x1076c095 */
  goto L_1076c095;
L_1076c075:;
  /* 1076c075 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1076c07f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c082 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1076c088 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076c08a je 0x1076c095 */
  if (C.zf) goto L_1076c095;
  /* 1076c08c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c08f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1076c092 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076c095:;
  /* 1076c095 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c098 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c09d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c09f je 0x1076c0be */
  if (C.zf) goto L_1076c0be;
  /* 1076c0a1 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1076c0a4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c0a5 call 0x1076c730 */
  push32(0x1076c0aau); f_1076c730();
  /* 1076c0aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c0ad mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1076c0b3 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1076c0b9 jmp 0x1076c14f */
  goto L_1076c14f;
L_1076c0be:;
  /* 1076c0be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c0c1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c0c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c0c6 je 0x1076c110 */
  if (C.zf) goto L_1076c110;
  /* 1076c0c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c0cb and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c0ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c0d0 je 0x1076c0f0 */
  if (C.zf) goto L_1076c0f0;
  /* 1076c0d2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1076c0d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c0d6 call 0x1076c710 */
  push32(0x1076c0dbu); f_1076c710();
  /* 1076c0db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c0de movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1076c0e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076c0e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1076c0e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1076c0ee jmp 0x1076c10e */
  goto L_1076c10e;
L_1076c0f0:;
  /* 1076c0f0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1076c0f3 push edx */
  push32((uint32_t)(EDX));
  /* 1076c0f4 call 0x1076c710 */
  push32(0x1076c0f9u); f_1076c710();
  /* 1076c0f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c0fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076c101 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076c102 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1076c108 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1076c10e:;
  /* 1076c10e jmp 0x1076c14f */
  goto L_1076c14f;
L_1076c110:;
  /* 1076c110 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c113 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c118 je 0x1076c135 */
  if (C.zf) goto L_1076c135;
  /* 1076c11a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1076c11d push ecx */
  push32((uint32_t)(ECX));
  /* 1076c11e call 0x1076c710 */
  push32(0x1076c123u); f_1076c710();
  /* 1076c123 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c126 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076c127 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1076c12d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1076c133 jmp 0x1076c14f */
  goto L_1076c14f;
L_1076c135:;
  /* 1076c135 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1076c138 push edx */
  push32((uint32_t)(EDX));
  /* 1076c139 call 0x1076c710 */
  push32(0x1076c13eu); f_1076c710();
  /* 1076c13e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c141 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076c143 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1076c149 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1076c14f:;
  /* 1076c14f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c152 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c155 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c157 je 0x1076c197 */
  if (C.zf) goto L_1076c197;
  /* 1076c159 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c160 jg 0x1076c197 */
  if ((!C.zf&&C.sf==C.of)) goto L_1076c197;
  /* 1076c162 jl 0x1076c16d */
  if ((C.sf!=C.of)) goto L_1076c16d;
  /* 1076c164 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c16b jae 0x1076c197 */
  if (!C.cf) goto L_1076c197;
L_1076c16d:;
  /* 1076c16d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1076c173 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076c175 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1076c17b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c17e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076c180 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1076c186 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1076c18c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c18f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1076c192 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076c195 jmp 0x1076c1af */
  goto L_1076c1af;
L_1076c197:;
  /* 1076c197 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1076c19d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1076c1a3 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1076c1a9 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1076c1af:;
  /* 1076c1af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c1b2 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c1b8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c1ba jne 0x1076c1d7 */
  if (!C.zf) goto L_1076c1d7;
  /* 1076c1bc mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1076c1c2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1076c1c8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1076c1cb mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1076c1d1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1076c1d7:;
  /* 1076c1d7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c1de jge 0x1076c1ec */
  if ((C.sf==C.of)) goto L_1076c1ec;
  /* 1076c1e0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1076c1ea jmp 0x1076c1f5 */
  goto L_1076c1f5;
L_1076c1ec:;
  /* 1076c1ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c1ef and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c1f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076c1f5:;
  /* 1076c1f5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1076c1fb or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1076c201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c203 jne 0x1076c20c */
  if (!C.zf) goto L_1076c20c;
  /* 1076c205 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1076c20c:;
  /* 1076c20c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1076c20f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1076c212:;
  /* 1076c212 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1076c218 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1076c21e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c221 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1076c227 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c229 jg 0x1076c23f */
  if ((!C.zf&&C.sf==C.of)) goto L_1076c23f;
  /* 1076c22b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1076c231 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1076c237 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076c239 je 0x1076c2c0 */
  if (C.zf) goto L_1076c2c0;
L_1076c23f:;
  /* 1076c23f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1076c245 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076c246 push edx */
  push32((uint32_t)(EDX));
  /* 1076c247 push eax */
  push32((uint32_t)(EAX));
  /* 1076c248 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1076c24e push edx */
  push32((uint32_t)(EDX));
  /* 1076c24f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1076c255 push eax */
  push32((uint32_t)(EAX));
  /* 1076c256 call 0x1076b5d0 */
  push32(0x1076c25bu); f_1076b5d0();
  /* 1076c25b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c25e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1076c264 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1076c26a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076c26b push edx */
  push32((uint32_t)(EDX));
  /* 1076c26c push eax */
  push32((uint32_t)(EAX));
  /* 1076c26d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1076c273 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c274 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1076c27a push edx */
  push32((uint32_t)(EDX));
  /* 1076c27b call 0x1076b560 */
  push32(0x1076c280u); f_1076b560();
  /* 1076c280 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1076c286 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1076c28c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c293 jle 0x1076c2a7 */
  if ((C.zf||C.sf!=C.of)) goto L_1076c2a7;
  /* 1076c295 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1076c29b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c2a1 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1076c2a7:;
  /* 1076c2a7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2aa mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1076c2b0 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1076c2b2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2b5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c2b8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1076c2bb jmp 0x1076c212 */
  goto L_1076c212;
L_1076c2c0:;
  /* 1076c2c0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1076c2c3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c2c6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1076c2c9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2cc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c2cf mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1076c2d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c2d5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c2da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c2dc je 0x1076c307 */
  if (C.zf) goto L_1076c307;
  /* 1076c2de mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2e1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076c2e4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c2e7 jne 0x1076c2ef */
  if (!C.zf) goto L_1076c2ef;
  /* 1076c2e9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c2ed jne 0x1076c307 */
  if (!C.zf) goto L_1076c307;
L_1076c2ef:;
  /* 1076c2ef mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c2f5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1076c2f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c2fb mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1076c2fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076c301 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c304 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1076c307:;
  /* 1076c307 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c30e jne 0x1076c4e2 */
  if (!C.zf) goto L_1076c4e2;
  /* 1076c314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c317 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c31a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c31c je 0x1076c36d */
  if (C.zf) goto L_1076c36d;
  /* 1076c31e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c321 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1076c327 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076c329 je 0x1076c33b */
  if (C.zf) goto L_1076c33b;
  /* 1076c32b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1076c332 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1076c339 jmp 0x1076c36d */
  goto L_1076c36d;
L_1076c33b:;
  /* 1076c33b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c33e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c341 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c343 je 0x1076c355 */
  if (C.zf) goto L_1076c355;
  /* 1076c345 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1076c34c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1076c353 jmp 0x1076c36d */
  goto L_1076c36d;
L_1076c355:;
  /* 1076c355 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c358 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c35b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c35d je 0x1076c36d */
  if (C.zf) goto L_1076c36d;
  /* 1076c35f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1076c366 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1076c36d:;
  /* 1076c36d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1076c373 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c376 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c379 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1076c37f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c382 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1076c385 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c387 jne 0x1076c3a5 */
  if (!C.zf) goto L_1076c3a5;
  /* 1076c389 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1076c38f push eax */
  push32((uint32_t)(EAX));
  /* 1076c390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c393 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c394 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1076c39a push edx */
  push32((uint32_t)(EDX));
  /* 1076c39b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1076c39d call 0x1076c680 */
  push32(0x1076c3a2u); f_1076c680();
  /* 1076c3a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076c3a5:;
  /* 1076c3a5 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1076c3ab push eax */
  push32((uint32_t)(EAX));
  /* 1076c3ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c3af push ecx */
  push32((uint32_t)(ECX));
  /* 1076c3b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076c3b3 push edx */
  push32((uint32_t)(EDX));
  /* 1076c3b4 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1076c3ba push eax */
  push32((uint32_t)(EAX));
  /* 1076c3bb call 0x1076c6c0 */
  push32(0x1076c3c0u); f_1076c6c0();
  /* 1076c3c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c3c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c3c6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1076c3c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076c3cb je 0x1076c3f3 */
  if (C.zf) goto L_1076c3f3;
  /* 1076c3cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c3d0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c3d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c3d5 jne 0x1076c3f3 */
  if (!C.zf) goto L_1076c3f3;
  /* 1076c3d7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1076c3dd push eax */
  push32((uint32_t)(EAX));
  /* 1076c3de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c3e1 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c3e2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1076c3e8 push edx */
  push32((uint32_t)(EDX));
  /* 1076c3e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1076c3eb call 0x1076c680 */
  push32(0x1076c3f0u); f_1076c680();
  /* 1076c3f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076c3f3:;
  /* 1076c3f3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c3f7 je 0x1076c4a1 */
  if (C.zf) goto L_1076c4a1;
  /* 1076c3fd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c401 jle 0x1076c4a1 */
  if ((C.zf||C.sf!=C.of)) goto L_1076c4a1;
  /* 1076c407 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c40a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1076c410 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076c413 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1076c419:;
  /* 1076c419 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1076c41f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1076c425 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c428 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1076c42e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c430 je 0x1076c49f */
  if (C.zf) goto L_1076c49f;
  /* 1076c432 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1076c438 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1076c43b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1076c442 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1076c449 push eax */
  push32((uint32_t)(EAX));
  /* 1076c44a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1076c450 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c451 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1076c457 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c45a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1076c460 call 0x1076d830 */
  push32(0x1076c465u); f_1076d830();
  /* 1076c465 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c468 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1076c46e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c475 jg 0x1076c479 */
  if ((!C.zf&&C.sf==C.of)) goto L_1076c479;
  /* 1076c477 jmp 0x1076c49f */
  goto L_1076c49f;
L_1076c479:;
  /* 1076c479 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1076c47f push eax */
  push32((uint32_t)(EAX));
  /* 1076c480 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c483 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c484 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1076c48a push edx */
  push32((uint32_t)(EDX));
  /* 1076c48b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1076c491 push eax */
  push32((uint32_t)(EAX));
  /* 1076c492 call 0x1076c6c0 */
  push32(0x1076c497u); f_1076c6c0();
  /* 1076c497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c49a jmp 0x1076c419 */
  goto L_1076c419;
L_1076c49f:;
  /* 1076c49f jmp 0x1076c4bc */
  goto L_1076c4bc;
L_1076c4a1:;
  /* 1076c4a1 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1076c4a7 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c4a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c4ab push edx */
  push32((uint32_t)(EDX));
  /* 1076c4ac mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076c4af push eax */
  push32((uint32_t)(EAX));
  /* 1076c4b0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076c4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c4b4 call 0x1076c6c0 */
  push32(0x1076c4b9u); f_1076c6c0();
  /* 1076c4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076c4bc:;
  /* 1076c4bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c4bf and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c4c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076c4c4 je 0x1076c4e2 */
  if (C.zf) goto L_1076c4e2;
  /* 1076c4c6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1076c4cc push eax */
  push32((uint32_t)(EAX));
  /* 1076c4cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c4d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c4d1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1076c4d7 push edx */
  push32((uint32_t)(EDX));
  /* 1076c4d8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1076c4da call 0x1076c680 */
  push32(0x1076c4dfu); f_1076c680();
  /* 1076c4df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076c4e2:;
  /* 1076c4e2 jmp 0x1076b8f4 */
  goto L_1076b8f4;
L_1076c4e7:;
  /* 1076c4e7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1076c4ed pop edi */
  EDI = (pop32());
  /* 1076c4ee pop esi */
  ESI = (pop32());
  /* 1076c4ef pop ebx */
  EBX = (pop32());
  /* 1076c4f0 mov esp, ebp */
  ESP = (EBP);
  /* 1076c4f2 pop ebp */
  EBP = (pop32());
  /* 1076c4f3 ret  */
  ESPCHK(0x1076b8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c600 @ 0x1076c600 (119 bytes, 44 insns) */
void f_1076c600(void) {
  FTRACE(0x1076c600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c600 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c601 mov ebp, esp */
  EBP = (ESP);
  /* 1076c603 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c604 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c607 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076c60a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c60d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c610 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1076c613 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c616 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c61a jl 0x1076c642 */
  if ((C.sf!=C.of)) goto L_1076c642;
  /* 1076c61c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c61f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076c621 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1076c624 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1076c626 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1076c62a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1076c630 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076c633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c636 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076c638 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c63b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c63e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076c640 jmp 0x1076c655 */
  goto L_1076c655;
L_1076c642:;
  /* 1076c642 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c645 push edx */
  push32((uint32_t)(EDX));
  /* 1076c646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c649 push eax */
  push32((uint32_t)(EAX));
  /* 1076c64a call 0x1076b650 */
  push32(0x1076c64fu); f_1076b650();
  /* 1076c64f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c652 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076c655:;
  /* 1076c655 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c659 jne 0x1076c666 */
  if (!C.zf) goto L_1076c666;
  /* 1076c65b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c65e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1076c664 jmp 0x1076c673 */
  goto L_1076c673;
L_1076c666:;
  /* 1076c666 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c669 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076c66b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c66e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c671 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1076c673:;
  /* 1076c673 mov esp, ebp */
  ESP = (EBP);
  /* 1076c675 pop ebp */
  EBP = (pop32());
  /* 1076c676 ret  */
  ESPCHK(0x1076c600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c680 @ 0x1076c680 (53 bytes, 23 insns) */
void f_1076c680(void) {
  FTRACE(0x1076c680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c680 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c681 mov ebp, esp */
  EBP = (ESP);
L_1076c683:;
  /* 1076c683 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c686 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c689 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c68c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1076c68f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c691 jle 0x1076c6b3 */
  if ((C.zf||C.sf!=C.of)) goto L_1076c6b3;
  /* 1076c693 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076c696 push edx */
  push32((uint32_t)(EDX));
  /* 1076c697 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c69a push eax */
  push32((uint32_t)(EAX));
  /* 1076c69b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c69e push ecx */
  push32((uint32_t)(ECX));
  /* 1076c69f call 0x1076c600 */
  push32(0x1076c6a4u); f_1076c600();
  /* 1076c6a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c6a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076c6aa cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c6ad jne 0x1076c6b1 */
  if (!C.zf) goto L_1076c6b1;
  /* 1076c6af jmp 0x1076c6b3 */
  goto L_1076c6b3;
L_1076c6b1:;
  /* 1076c6b1 jmp 0x1076c683 */
  goto L_1076c683;
L_1076c6b3:;
  /* 1076c6b3 pop ebp */
  EBP = (pop32());
  /* 1076c6b4 ret  */
  ESPCHK(0x1076c680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6c0 @ 0x1076c6c0 (74 bytes, 31 insns) */
void f_1076c6c0(void) {
  FTRACE(0x1076c6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1076c6c3 push ecx */
  push32((uint32_t)(ECX));
L_1076c6c4:;
  /* 1076c6c4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c6c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c6ca sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c6cd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1076c6d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076c6d2 jle 0x1076c706 */
  if ((C.zf||C.sf!=C.of)) goto L_1076c706;
  /* 1076c6d4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076c6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1076c6d8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c6db push eax */
  push32((uint32_t)(EAX));
  /* 1076c6dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c6df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076c6e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076c6e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c6e8 push eax */
  push32((uint32_t)(EAX));
  /* 1076c6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c6ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c6ef mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1076c6f2 call 0x1076c600 */
  push32(0x1076c6f7u); f_1076c600();
  /* 1076c6f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c6fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076c6fd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c700 jne 0x1076c704 */
  if (!C.zf) goto L_1076c704;
  /* 1076c702 jmp 0x1076c706 */
  goto L_1076c706;
L_1076c704:;
  /* 1076c704 jmp 0x1076c6c4 */
  goto L_1076c6c4;
L_1076c706:;
  /* 1076c706 mov esp, ebp */
  ESP = (EBP);
  /* 1076c708 pop ebp */
  EBP = (pop32());
  /* 1076c709 ret  */
  ESPCHK(0x1076c6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x1076c710 (26 bytes, 12 insns) */
void f_1076c710(void) {
  FTRACE(0x1076c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c710 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c711 mov ebp, esp */
  EBP = (ESP);
  /* 1076c713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c716 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c718 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c71b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c71e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1076c720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c725 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1076c728 pop ebp */
  EBP = (pop32());
  /* 1076c729 ret  */
  ESPCHK(0x1076c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c730 @ 0x1076c730 (31 bytes, 14 insns) */
void f_1076c730(void) {
  FTRACE(0x1076c730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c730 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c731 mov ebp, esp */
  EBP = (ESP);
  /* 1076c733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c736 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c738 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c73b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c73e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1076c740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c745 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c748 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1076c74a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076c74d pop ebp */
  EBP = (pop32());
  /* 1076c74e ret  */
  ESPCHK(0x1076c730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c750 @ 0x1076c750 (27 bytes, 12 insns) */
void f_1076c750(void) {
  FTRACE(0x1076c750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c750 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c751 mov ebp, esp */
  EBP = (ESP);
  /* 1076c753 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c756 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c758 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c75b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c75e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1076c760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c763 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076c765 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1076c769 pop ebp */
  EBP = (pop32());
  /* 1076c76a ret  */
  ESPCHK(0x1076c750u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1076c770 (145 bytes, 42 insns) */
void f_1076c770(void) {
  FTRACE(0x1076c770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c770 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c771 mov ebp, esp */
  EBP = (ESP);
  /* 1076c773 push ecx */
  push32((uint32_t)(ECX));
  /* 1076c774 call 0x1076c820 */
  push32(0x1076c779u); f_1076c820();
  /* 1076c779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c77c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1076c77e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076c785 jmp 0x1076c790 */
  goto L_1076c790;
L_1076c787:;
  /* 1076c787 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c78a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c78d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076c790:;
  /* 1076c790 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c794 jae 0x1076c7ba */
  if (!C.cf) goto L_1076c7ba;
  /* 1076c796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c799 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c79c cmp ecx, dword ptr [eax*8 + 0x1078efb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x1078efb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c7a3 jne 0x1076c7b8 */
  if (!C.zf) goto L_1076c7b8;
  /* 1076c7a5 call 0x1076c810 */
  push32(0x1076c7aau); f_1076c810();
  /* 1076c7aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076c7ad mov ecx, dword ptr [edx*8 + 0x1078efbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x1078efbc)));
  /* 1076c7b4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1076c7b6 jmp 0x1076c7fd */
  goto L_1076c7fd;
L_1076c7b8:;
  /* 1076c7b8 jmp 0x1076c787 */
  goto L_1076c787;
L_1076c7ba:;
  /* 1076c7ba cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c7be jb 0x1076c7d3 */
  if (C.cf) goto L_1076c7d3;
  /* 1076c7c0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c7c4 ja 0x1076c7d3 */
  if ((!C.cf&&!C.zf)) goto L_1076c7d3;
  /* 1076c7c6 call 0x1076c810 */
  push32(0x1076c7cbu); f_1076c810();
  /* 1076c7cb mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1076c7d1 jmp 0x1076c7fd */
  goto L_1076c7fd;
L_1076c7d3:;
  /* 1076c7d3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c7da jb 0x1076c7f2 */
  if (C.cf) goto L_1076c7f2;
  /* 1076c7dc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c7e3 ja 0x1076c7f2 */
  if ((!C.cf&&!C.zf)) goto L_1076c7f2;
  /* 1076c7e5 call 0x1076c810 */
  push32(0x1076c7eau); f_1076c810();
  /* 1076c7ea mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1076c7f0 jmp 0x1076c7fd */
  goto L_1076c7fd;
L_1076c7f2:;
  /* 1076c7f2 call 0x1076c810 */
  push32(0x1076c7f7u); f_1076c810();
  /* 1076c7f7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1076c7fd:;
  /* 1076c7fd mov esp, ebp */
  ESP = (EBP);
  /* 1076c7ff pop ebp */
  EBP = (pop32());
  /* 1076c800 ret  */
  ESPCHK(0x1076c770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c810 @ 0x1076c810 (13 bytes, 6 insns) */
void f_1076c810(void) {
  FTRACE(0x1076c810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c810 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c811 mov ebp, esp */
  EBP = (ESP);
  /* 1076c813 call 0x10764380 */
  push32(0x1076c818u); f_10764380();
  /* 1076c818 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c81b pop ebp */
  EBP = (pop32());
  /* 1076c81c ret  */
  ESPCHK(0x1076c810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c820 @ 0x1076c820 (13 bytes, 6 insns) */
void f_1076c820(void) {
  FTRACE(0x1076c820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c820 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c821 mov ebp, esp */
  EBP = (ESP);
  /* 1076c823 call 0x10764380 */
  push32(0x1076c828u); f_10764380();
  /* 1076c828 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c82b pop ebp */
  EBP = (pop32());
  /* 1076c82c ret  */
  ESPCHK(0x1076c820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c830 @ 0x1076c830 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1076c830(void) {
  FTRACE(0x1076c830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076c830 push ebp */
  push32((uint32_t)(EBP));
  /* 1076c831 mov ebp, esp */
  EBP = (ESP);
  /* 1076c833 push edi */
  push32((uint32_t)(EDI));
  /* 1076c834 push esi */
  push32((uint32_t)(ESI));
  /* 1076c835 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1076c838 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076c83b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c83e mov eax, ecx */
  EAX = (ECX);
  /* 1076c840 mov edx, ecx */
  EDX = (ECX);
  /* 1076c842 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c844 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c846 jbe 0x1076c850 */
  if ((C.cf||C.zf)) goto L_1076c850;
  /* 1076c848 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c84a jb 0x1076c9c8 */
  if (C.cf) goto L_1076c9c8;
L_1076c850:;
  /* 1076c850 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1076c856 jne 0x1076c86c */
  if (!C.zf) goto L_1076c86c;
  /* 1076c858 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076c85b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c85e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c861 jb 0x1076c88c */
  if (C.cf) goto L_1076c88c;
  /* 1076c863 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076c865 jmp dword ptr [edx*4 + 0x1076c978] */
  switch (EDX) {
    case 0: goto L_1076c988;
    case 1: goto L_1076c990;
    case 2: goto L_1076c99c;
    case 3: goto L_1076c9b0;
    default: x86_unimpl("switch@0x1076c865 out of table"); return;
  }
L_1076c86c:;
  /* 1076c86c mov eax, edi */
  EAX = (EDI);
  /* 1076c86e mov edx, 3 */
  EDX = (0x3u);
  /* 1076c873 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076c876 jb 0x1076c884 */
  if (C.cf) goto L_1076c884;
  /* 1076c878 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1076c87b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c87d jmp dword ptr [eax*4 + 0x1076c890] */
  switch (EAX) {
    case 1: goto L_1076c8a0;
    case 2: goto L_1076c8cc;
    case 3: goto L_1076c8f0;
    default: x86_unimpl("switch@0x1076c87d out of table"); return;
  }
L_1076c884:;
  /* 1076c884 jmp dword ptr [ecx*4 + 0x1076c988] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1076c988)))); return;
  /* 1076c88b nop  */
  /* nop */
L_1076c88c:;
  /* 1076c88c jmp dword ptr [ecx*4 + 0x1076c90c] */
  switch (ECX) {
    case 0: goto L_1076c96f;
    case 1: goto L_1076c95c;
    case 2: goto L_1076c954;
    case 3: goto L_1076c94c;
    case 4: goto L_1076c944;
    case 5: goto L_1076c93c;
    case 6: goto L_1076c934;
    case 7: goto L_1076c92c;
    default: x86_unimpl("switch@0x1076c88c out of table"); return;
  }
  /* 1076c893 nop  */
  /* nop */
L_1076c8a0:;
  /* 1076c8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076c8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c8a6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076c8a9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076c8ac mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076c8af shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076c8b2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076c8b5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c8b8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c8bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c8be jb 0x1076c88c */
  if (C.cf) goto L_1076c88c;
  /* 1076c8c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076c8c2 jmp dword ptr [edx*4 + 0x1076c978] */
  switch (EDX) {
    case 0: goto L_1076c988;
    case 1: goto L_1076c990;
    case 2: goto L_1076c99c;
    case 3: goto L_1076c9b0;
    default: x86_unimpl("switch@0x1076c8c2 out of table"); return;
  }
  /* 1076c8c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076c8cc:;
  /* 1076c8cc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076c8ce mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c8d0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c8d2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076c8d5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076c8d8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076c8db add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c8de add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c8e1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c8e4 jb 0x1076c88c */
  if (C.cf) goto L_1076c88c;
  /* 1076c8e6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076c8e8 jmp dword ptr [edx*4 + 0x1076c978] */
  switch (EDX) {
    case 0: goto L_1076c988;
    case 1: goto L_1076c990;
    case 2: goto L_1076c99c;
    case 3: goto L_1076c9b0;
    default: x86_unimpl("switch@0x1076c8e8 out of table"); return;
  }
  /* 1076c8ef nop  */
  /* nop */
L_1076c8f0:;
  /* 1076c8f0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076c8f2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c8f4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c8f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1076c8f7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076c8fa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1076c8fb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c8fe jb 0x1076c88c */
  if (C.cf) goto L_1076c88c;
  /* 1076c900 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076c902 jmp dword ptr [edx*4 + 0x1076c978] */
  switch (EDX) {
    case 0: goto L_1076c988;
    case 1: goto L_1076c990;
    case 2: goto L_1076c99c;
    case 3: goto L_1076c9b0;
    default: x86_unimpl("switch@0x1076c902 out of table"); return;
  }
  /* 1076c909 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076c92c:;
  /* 1076c92c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1076c930 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1076c934:;
  /* 1076c934 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1076c938 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1076c93c:;
  /* 1076c93c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1076c940 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1076c944:;
  /* 1076c944 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1076c948 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1076c94c:;
  /* 1076c94c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1076c950 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1076c954:;
  /* 1076c954 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1076c958 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1076c95c:;
  /* 1076c95c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1076c960 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1076c964 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1076c96b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076c96d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1076c96f:;
  /* 1076c96f jmp dword ptr [edx*4 + 0x1076c978] */
  switch (EDX) {
    case 0: goto L_1076c988;
    case 1: goto L_1076c990;
    case 2: goto L_1076c99c;
    case 3: goto L_1076c9b0;
    default: x86_unimpl("switch@0x1076c96f out of table"); return;
  }
  /* 1076c976 mov edi, edi */
  EDI = (EDI);
L_1076c988:;
  /* 1076c988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c98b pop esi */
  ESI = (pop32());
  /* 1076c98c pop edi */
  EDI = (pop32());
  /* 1076c98d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076c98e ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076c98f nop  */
  /* nop */
L_1076c990:;
  /* 1076c990 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c994 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c997 pop esi */
  ESI = (pop32());
  /* 1076c998 pop edi */
  EDI = (pop32());
  /* 1076c999 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076c99a ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076c99b nop  */
  /* nop */
L_1076c99c:;
  /* 1076c99c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c99e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c9a0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076c9a3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076c9a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c9a9 pop esi */
  ESI = (pop32());
  /* 1076c9aa pop edi */
  EDI = (pop32());
  /* 1076c9ab leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076c9ac ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076c9ad lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076c9b0:;
  /* 1076c9b0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1076c9b2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1076c9b4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076c9b7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076c9ba mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076c9bd mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076c9c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076c9c3 pop esi */
  ESI = (pop32());
  /* 1076c9c4 pop edi */
  EDI = (pop32());
  /* 1076c9c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076c9c6 ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076c9c7 nop  */
  /* nop */
L_1076c9c8:;
  /* 1076c9c8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1076c9cc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1076c9d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1076c9d6 jne 0x1076c9fc */
  if (!C.zf) goto L_1076c9fc;
  /* 1076c9d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076c9db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1076c9de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076c9e1 jb 0x1076c9f0 */
  if (C.cf) goto L_1076c9f0;
  /* 1076c9e3 std  */
  C.df=1;
  /* 1076c9e4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076c9e6 cld  */
  C.df=0;
  /* 1076c9e7 jmp dword ptr [edx*4 + 0x1076cb10] */
  switch (EDX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076c9e7 out of table"); return;
  }
  /* 1076c9ee mov edi, edi */
  EDI = (EDI);
L_1076c9f0:;
  /* 1076c9f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076c9f2 jmp dword ptr [ecx*4 + 0x1076cac0] */
  switch (ECX) {
    case 0: goto L_1076cb07;
    default: x86_unimpl("switch@0x1076c9f2 out of table"); return;
  }
  /* 1076c9f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076c9fc:;
  /* 1076c9fc mov eax, edi */
  EAX = (EDI);
  /* 1076c9fe mov edx, 3 */
  EDX = (0x3u);
  /* 1076ca03 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ca06 jb 0x1076ca14 */
  if (C.cf) goto L_1076ca14;
  /* 1076ca08 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1076ca0b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ca0d jmp dword ptr [eax*4 + 0x1076ca18] */
  switch (EAX) {
    case 1: goto L_1076ca28;
    case 2: goto L_1076ca48;
    case 3: goto L_1076ca70;
    default: x86_unimpl("switch@0x1076ca0d out of table"); return;
  }
L_1076ca14:;
  /* 1076ca14 jmp dword ptr [ecx*4 + 0x1076cb10] */
  switch (ECX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076ca14 out of table"); return;
  }
  /* 1076ca1b nop  */
  /* nop */
L_1076ca28:;
  /* 1076ca28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076ca2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ca2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076ca30 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1076ca31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076ca34 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1076ca35 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ca38 jb 0x1076c9f0 */
  if (C.cf) goto L_1076c9f0;
  /* 1076ca3a std  */
  C.df=1;
  /* 1076ca3b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076ca3d cld  */
  C.df=0;
  /* 1076ca3e jmp dword ptr [edx*4 + 0x1076cb10] */
  switch (EDX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076ca3e out of table"); return;
  }
  /* 1076ca45 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076ca48:;
  /* 1076ca48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076ca4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ca4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076ca50 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076ca53 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076ca56 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076ca59 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ca5c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ca5f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ca62 jb 0x1076c9f0 */
  if (C.cf) goto L_1076c9f0;
  /* 1076ca64 std  */
  C.df=1;
  /* 1076ca65 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076ca67 cld  */
  C.df=0;
  /* 1076ca68 jmp dword ptr [edx*4 + 0x1076cb10] */
  switch (EDX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076ca68 out of table"); return;
  }
  /* 1076ca6f nop  */
  /* nop */
L_1076ca70:;
  /* 1076ca70 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076ca73 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1076ca75 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076ca78 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076ca7b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076ca7e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076ca81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1076ca84 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076ca87 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ca8a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ca8d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ca90 jb 0x1076c9f0 */
  if (C.cf) goto L_1076c9f0;
  /* 1076ca96 std  */
  C.df=1;
  /* 1076ca97 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1076ca99 cld  */
  C.df=0;
  /* 1076ca9a jmp dword ptr [edx*4 + 0x1076cb10] */
  switch (EDX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076ca9a out of table"); return;
  }
  /* 1076caa1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1076caa5 retf 0x1076 */
  x86_unimpl("retf @ 0x1076caa5");
  /* 1076caa8 int3  */
  x86_unimpl("int3 @ 0x1076caa8");
  /* 1076caa9 retf 0x1076 */
  x86_unimpl("retf @ 0x1076caa9");
  /* 1076caac aam 0xca */
  x86_unimpl("aam @ 0x1076caac");
  /* 1076caae jbe 0x1076cac0 */
  if ((C.cf||C.zf)) goto L_1076cac0;
  /* 1076cab0 fmul st(2), st(0) */
  FPU_ST(2) = FPU_ST(2) * FPU_ST(0);
  /* 1076cab2 jbe 0x1076cac4 */
  if ((C.cf||C.zf)) goto L_1076cac4;
  /* 1076cab4 in al, 0xca */
  x86_unimpl("in @ 0x1076cab4");
  /* 1076cab6 jbe 0x1076cac8 */
  if ((C.cf||C.zf)) goto L_1076cac8;
  /* 1076cab8 in al, dx */
  x86_unimpl("in @ 0x1076cab8");
  /* 1076cab9 retf 0x1076 */
  x86_unimpl("retf @ 0x1076cab9");
  /* 1076cabc hlt  */
  x86_unimpl("hlt @ 0x1076cabc");
  /* 1076cabd retf 0x1076 */
  x86_unimpl("retf @ 0x1076cabd");
L_1076cac4:;
  /* 1076cac4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
L_1076cac8:;
  /* 1076cac8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1076cacc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1076cad0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1076cad4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1076cad8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1076cadc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1076cae0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1076cae4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1076cae8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1076caec mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1076caf0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1076caf4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1076caf8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1076cafc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1076cb03 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cb05 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1076cb07:;
  /* 1076cb07 jmp dword ptr [edx*4 + 0x1076cb10] */
  switch (EDX) {
    case 0: goto L_1076cb20;
    case 1: goto L_1076cb28;
    case 2: goto L_1076cb38;
    case 3: goto L_1076cb4c;
    default: x86_unimpl("switch@0x1076cb07 out of table"); return;
  }
  /* 1076cb0e mov edi, edi */
  EDI = (EDI);
L_1076cb20:;
  /* 1076cb20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cb23 pop esi */
  ESI = (pop32());
  /* 1076cb24 pop edi */
  EDI = (pop32());
  /* 1076cb25 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076cb26 ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076cb27 nop  */
  /* nop */
L_1076cb28:;
  /* 1076cb28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076cb2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076cb2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cb31 pop esi */
  ESI = (pop32());
  /* 1076cb32 pop edi */
  EDI = (pop32());
  /* 1076cb33 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076cb34 ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076cb35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1076cb38:;
  /* 1076cb38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076cb3b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076cb3e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076cb41 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076cb44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cb47 pop esi */
  ESI = (pop32());
  /* 1076cb48 pop edi */
  EDI = (pop32());
  /* 1076cb49 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076cb4a ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
  /* 1076cb4b nop  */
  /* nop */
L_1076cb4c:;
  /* 1076cb4c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1076cb4f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1076cb52 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1076cb55 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1076cb58 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1076cb5b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1076cb5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cb61 pop esi */
  ESI = (pop32());
  /* 1076cb62 pop edi */
  EDI = (pop32());
  /* 1076cb63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1076cb64 ret  */
  ESPCHK(0x1076c830u, _esp0);
  ESP += 4; return;
L_1076cac0: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1076cac0 (unresolved jump table)"); return;
}

/* FUN_1000cb70 @ 0x1076cb70 (421 bytes, 148 insns) */
void f_1076cb70(void) {
  FTRACE(0x1076cb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076cb70 push ebp */
  push32((uint32_t)(EBP));
  /* 1076cb71 mov ebp, esp */
  EBP = (ESP);
  /* 1076cb73 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1076cb75 push 0x1078c130 */
  push32((uint32_t)(0x1078c130u));
  /* 1076cb7a push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 1076cb7f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1076cb85 push eax */
  push32((uint32_t)(EAX));
  /* 1076cb86 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1076cb8d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cb90 push ebx */
  push32((uint32_t)(EBX));
  /* 1076cb91 push esi */
  push32((uint32_t)(ESI));
  /* 1076cb92 push edi */
  push32((uint32_t)(EDI));
  /* 1076cb93 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1076cb96 cmp dword ptr [0x1079074c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079074c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cb9d jne 0x1076cbee */
  if (!C.zf) goto L_1076cbee;
  /* 1076cb9f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1076cba2 push eax */
  push32((uint32_t)(EAX));
  /* 1076cba3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cba5 push 0x1078c128 */
  push32((uint32_t)(0x1078c128u));
  /* 1076cbaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cbac call dword ptr [0x107932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e4))), 0x1076cbb2u);
  /* 1076cbb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cbb4 je 0x1076cbc2 */
  if (C.zf) goto L_1076cbc2;
  /* 1076cbb6 mov dword ptr [0x1079074c], 1 */
  w32((uint32_t)(0x1079074c), (0x1u));
  /* 1076cbc0 jmp 0x1076cbee */
  goto L_1076cbee;
L_1076cbc2:;
  /* 1076cbc2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1076cbc5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cbc6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cbc8 push 0x1078c124 */
  push32((uint32_t)(0x1078c124u));
  /* 1076cbcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cbcf push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cbd1 call dword ptr [0x107932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f4))), 0x1076cbd7u);
  /* 1076cbd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cbd9 je 0x1076cbe7 */
  if (C.zf) goto L_1076cbe7;
  /* 1076cbdb mov dword ptr [0x1079074c], 2 */
  w32((uint32_t)(0x1079074c), (0x2u));
  /* 1076cbe5 jmp 0x1076cbee */
  goto L_1076cbee;
L_1076cbe7:;
  /* 1076cbe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cbe9 jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076cbee:;
  /* 1076cbee cmp dword ptr [0x1079074c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1079074c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cbf5 jne 0x1076cc25 */
  if (!C.zf) goto L_1076cc25;
  /* 1076cbf7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cbfb jne 0x1076cc06 */
  if (!C.zf) goto L_1076cc06;
  /* 1076cbfd mov edx, dword ptr [0x10790758] */
  EDX = (r32((uint32_t)(0x10790758)));
  /* 1076cc03 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1076cc06:;
  /* 1076cc06 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076cc09 push eax */
  push32((uint32_t)(EAX));
  /* 1076cc0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cc0d push ecx */
  push32((uint32_t)(ECX));
  /* 1076cc0e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cc11 push edx */
  push32((uint32_t)(EDX));
  /* 1076cc12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cc15 push eax */
  push32((uint32_t)(EAX));
  /* 1076cc16 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1076cc19 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cc1a call dword ptr [0x107932f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f4))), 0x1076cc20u);
  /* 1076cc20 jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076cc25:;
  /* 1076cc25 cmp dword ptr [0x1079074c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1079074c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cc2c jne 0x1076cd16 */
  if (!C.zf) goto L_1076cd16;
  /* 1076cc32 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cc36 jne 0x1076cc41 */
  if (!C.zf) goto L_1076cc41;
  /* 1076cc38 mov edx, dword ptr [0x10790768] */
  EDX = (r32((uint32_t)(0x10790768)));
  /* 1076cc3e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1076cc41:;
  /* 1076cc41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cc43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cc45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cc48 push eax */
  push32((uint32_t)(EAX));
  /* 1076cc49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cc4c push ecx */
  push32((uint32_t)(ECX));
  /* 1076cc4d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1076cc50 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076cc52 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076cc54 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1076cc57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cc5a push edx */
  push32((uint32_t)(EDX));
  /* 1076cc5b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076cc5e push eax */
  push32((uint32_t)(EAX));
  /* 1076cc5f call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x1076cc65u);
  /* 1076cc65 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1076cc68 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cc6c jne 0x1076cc75 */
  if (!C.zf) goto L_1076cc75;
  /* 1076cc6e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cc70 jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076cc75:;
  /* 1076cc75 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076cc7c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076cc7f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1076cc81 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cc84 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1076cc86 call 0x10767ae0 */
  push32(0x1076cc8bu); f_10767ae0();
  /* 1076cc8b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1076cc8e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1076cc91 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076cc94 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1076cc97 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076cc9a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1076cc9c push edx */
  push32((uint32_t)(EDX));
  /* 1076cc9d push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cc9f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cca2 push eax */
  push32((uint32_t)(EAX));
  /* 1076cca3 call 0x107686b0 */
  push32(0x1076cca8u); f_107686b0();
  /* 1076cca8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ccab mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1076ccb2 jmp 0x1076cccb */
  goto L_1076cccb;
  /* 1076ccb4 mov eax, 1 */
  EAX = (0x1u);
  /* 1076ccb9 ret  */
  ESPCHK(0x1076cb70u, _esp0);
  ESP += 4; return;
  /* 1076ccba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1076ccbd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1076ccc4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076cccb:;
  /* 1076cccb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cccf jne 0x1076ccd5 */
  if (!C.zf) goto L_1076ccd5;
  /* 1076ccd1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ccd3 jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076ccd5:;
  /* 1076ccd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076ccd8 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ccd9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076ccdc push edx */
  push32((uint32_t)(EDX));
  /* 1076ccdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cce0 push eax */
  push32((uint32_t)(EAX));
  /* 1076cce1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cce4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cce5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cce7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076ccea push edx */
  push32((uint32_t)(EDX));
  /* 1076cceb call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x1076ccf1u);
  /* 1076ccf1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1076ccf4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ccf8 jne 0x1076ccfe */
  if (!C.zf) goto L_1076ccfe;
  /* 1076ccfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ccfc jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076ccfe:;
  /* 1076ccfe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076cd01 push eax */
  push32((uint32_t)(EAX));
  /* 1076cd02 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076cd05 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cd06 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cd09 push edx */
  push32((uint32_t)(EDX));
  /* 1076cd0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cd0d push eax */
  push32((uint32_t)(EAX));
  /* 1076cd0e call dword ptr [0x107932e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e4))), 0x1076cd14u);
  /* 1076cd14 jmp 0x1076cd18 */
  goto L_1076cd18;
L_1076cd16:;
  /* 1076cd16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076cd18:;
  /* 1076cd18 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1076cd1b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076cd1e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1076cd25 pop edi */
  EDI = (pop32());
  /* 1076cd26 pop esi */
  ESI = (pop32());
  /* 1076cd27 pop ebx */
  EBX = (pop32());
  /* 1076cd28 mov esp, ebp */
  ESP = (EBP);
  /* 1076cd2a pop ebp */
  EBP = (pop32());
  /* 1076cd2b ret  */
  ESPCHK(0x1076cb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd30 @ 0x1076cd30 (727 bytes, 263 insns) */
void f_1076cd30(void) {
  FTRACE(0x1076cd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076cd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1076cd31 mov ebp, esp */
  EBP = (ESP);
  /* 1076cd33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1076cd35 push 0x1078c140 */
  push32((uint32_t)(0x1078c140u));
  /* 1076cd3a push 0x1076da48 */
  push32((uint32_t)(0x1076da48u));
  /* 1076cd3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1076cd45 push eax */
  push32((uint32_t)(EAX));
  /* 1076cd46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1076cd4d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cd50 push ebx */
  push32((uint32_t)(EBX));
  /* 1076cd51 push esi */
  push32((uint32_t)(ESI));
  /* 1076cd52 push edi */
  push32((uint32_t)(EDI));
  /* 1076cd53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1076cd56 cmp dword ptr [0x10790770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cd5d jne 0x1076cdb6 */
  if (!C.zf) goto L_1076cdb6;
  /* 1076cd5f push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd61 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd63 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cd65 push 0x1078c128 */
  push32((uint32_t)(0x1078c128u));
  /* 1076cd6a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076cd6f push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd71 call dword ptr [0x107932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e8))), 0x1076cd77u);
  /* 1076cd77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cd79 je 0x1076cd87 */
  if (C.zf) goto L_1076cd87;
  /* 1076cd7b mov dword ptr [0x10790770], 1 */
  w32((uint32_t)(0x10790770), (0x1u));
  /* 1076cd85 jmp 0x1076cdb6 */
  goto L_1076cdb6;
L_1076cd87:;
  /* 1076cd87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd8b push 1 */
  push32((uint32_t)(0x1u));
  /* 1076cd8d push 0x1078c124 */
  push32((uint32_t)(0x1078c124u));
  /* 1076cd92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1076cd97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cd99 call dword ptr [0x107932e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e0))), 0x1076cd9fu);
  /* 1076cd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cda1 je 0x1076cdaf */
  if (C.zf) goto L_1076cdaf;
  /* 1076cda3 mov dword ptr [0x10790770], 2 */
  w32((uint32_t)(0x10790770), (0x2u));
  /* 1076cdad jmp 0x1076cdb6 */
  goto L_1076cdb6;
L_1076cdaf:;
  /* 1076cdaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cdb1 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cdb6:;
  /* 1076cdb6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cdba jle 0x1076cdcf */
  if ((C.zf||C.sf!=C.of)) goto L_1076cdcf;
  /* 1076cdbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076cdbf push eax */
  push32((uint32_t)(EAX));
  /* 1076cdc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cdc4 call 0x1076d040 */
  push32(0x1076cdc9u); f_1076d040();
  /* 1076cdc9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cdcc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1076cdcf:;
  /* 1076cdcf cmp dword ptr [0x10790770], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10790770))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cdd6 jne 0x1076cdfb */
  if (!C.zf) goto L_1076cdfb;
  /* 1076cdd8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1076cddb push edx */
  push32((uint32_t)(EDX));
  /* 1076cddc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076cddf push eax */
  push32((uint32_t)(EAX));
  /* 1076cde0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076cde3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cde4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cde7 push edx */
  push32((uint32_t)(EDX));
  /* 1076cde8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cdeb push eax */
  push32((uint32_t)(EAX));
  /* 1076cdec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cdef push ecx */
  push32((uint32_t)(ECX));
  /* 1076cdf0 call dword ptr [0x107932e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e0))), 0x1076cdf6u);
  /* 1076cdf6 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cdfb:;
  /* 1076cdfb cmp dword ptr [0x10790770], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790770))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ce02 jne 0x1076d01f */
  if (!C.zf) goto L_1076d01f;
  /* 1076ce08 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ce0c jne 0x1076ce17 */
  if (!C.zf) goto L_1076ce17;
  /* 1076ce0e mov edx, dword ptr [0x10790768] */
  EDX = (r32((uint32_t)(0x10790768)));
  /* 1076ce14 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1076ce17:;
  /* 1076ce17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076ce19 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076ce1b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076ce1e push eax */
  push32((uint32_t)(EAX));
  /* 1076ce1f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076ce22 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ce23 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1076ce26 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076ce28 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ce2a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1076ce2d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ce30 push edx */
  push32((uint32_t)(EDX));
  /* 1076ce31 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1076ce34 push eax */
  push32((uint32_t)(EAX));
  /* 1076ce35 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x1076ce3bu);
  /* 1076ce3b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1076ce3e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ce42 jne 0x1076ce4b */
  if (!C.zf) goto L_1076ce4b;
  /* 1076ce44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ce46 jmp 0x1076d021 */
  goto L_1076d021;
L_1076ce4b:;
  /* 1076ce4b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ce52 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076ce55 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1076ce57 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ce5a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1076ce5c call 0x10767ae0 */
  push32(0x1076ce61u); f_10767ae0();
  /* 1076ce61 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1076ce64 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1076ce67 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1076ce6a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1076ce6d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1076ce74 jmp 0x1076ce8d */
  goto L_1076ce8d;
  /* 1076ce76 mov eax, 1 */
  EAX = (0x1u);
  /* 1076ce7b ret  */
  ESPCHK(0x1076cd30u, _esp0);
  ESP += 4; return;
  /* 1076ce7c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1076ce7f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1076ce86 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076ce8d:;
  /* 1076ce8d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ce91 jne 0x1076ce9a */
  if (!C.zf) goto L_1076ce9a;
  /* 1076ce93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ce95 jmp 0x1076d021 */
  goto L_1076d021;
L_1076ce9a:;
  /* 1076ce9a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076ce9d push edx */
  push32((uint32_t)(EDX));
  /* 1076ce9e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cea1 push eax */
  push32((uint32_t)(EAX));
  /* 1076cea2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076cea5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cea6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076cea9 push edx */
  push32((uint32_t)(EDX));
  /* 1076ceaa push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ceac mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1076ceaf push eax */
  push32((uint32_t)(EAX));
  /* 1076ceb0 call dword ptr [0x107932ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932ec))), 0x1076ceb6u);
  /* 1076ceb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ceb8 jne 0x1076cec1 */
  if (!C.zf) goto L_1076cec1;
  /* 1076ceba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cebc jmp 0x1076d021 */
  goto L_1076d021;
L_1076cec1:;
  /* 1076cec1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cec3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cec5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076cec8 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cec9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cecc push edx */
  push32((uint32_t)(EDX));
  /* 1076cecd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ced0 push eax */
  push32((uint32_t)(EAX));
  /* 1076ced1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ced4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ced5 call dword ptr [0x107932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e8))), 0x1076cedbu);
  /* 1076cedb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1076cede cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cee2 jne 0x1076ceeb */
  if (!C.zf) goto L_1076ceeb;
  /* 1076cee4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cee6 jmp 0x1076d021 */
  goto L_1076d021;
L_1076ceeb:;
  /* 1076ceeb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ceee and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1076cef4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076cef6 je 0x1076cf3b */
  if (C.zf) goto L_1076cf3b;
  /* 1076cef8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cefc je 0x1076cf36 */
  if (C.zf) goto L_1076cf36;
  /* 1076cefe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076cf01 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cf04 jle 0x1076cf0d */
  if ((C.zf||C.sf!=C.of)) goto L_1076cf0d;
  /* 1076cf06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cf08 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cf0d:;
  /* 1076cf0d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1076cf10 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cf11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076cf14 push edx */
  push32((uint32_t)(EDX));
  /* 1076cf15 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076cf18 push eax */
  push32((uint32_t)(EAX));
  /* 1076cf19 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cf1c push ecx */
  push32((uint32_t)(ECX));
  /* 1076cf1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cf20 push edx */
  push32((uint32_t)(EDX));
  /* 1076cf21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cf24 push eax */
  push32((uint32_t)(EAX));
  /* 1076cf25 call dword ptr [0x107932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e8))), 0x1076cf2bu);
  /* 1076cf2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cf2d jne 0x1076cf36 */
  if (!C.zf) goto L_1076cf36;
  /* 1076cf2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cf31 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cf36:;
  /* 1076cf36 jmp 0x1076d01a */
  goto L_1076d01a;
L_1076cf3b:;
  /* 1076cf3b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076cf3e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1076cf41 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076cf48 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076cf4b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1076cf4d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076cf50 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1076cf52 call 0x10767ae0 */
  push32(0x1076cf57u); f_10767ae0();
  /* 1076cf57 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1076cf5a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1076cf5d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1076cf60 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1076cf63 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1076cf6a jmp 0x1076cf83 */
  goto L_1076cf83;
  /* 1076cf6c mov eax, 1 */
  EAX = (0x1u);
  /* 1076cf71 ret  */
  ESPCHK(0x1076cd30u, _esp0);
  ESP += 4; return;
  /* 1076cf72 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1076cf75 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1076cf7c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076cf83:;
  /* 1076cf83 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cf87 jne 0x1076cf90 */
  if (!C.zf) goto L_1076cf90;
  /* 1076cf89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cf8b jmp 0x1076d021 */
  goto L_1076d021;
L_1076cf90:;
  /* 1076cf90 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076cf93 push eax */
  push32((uint32_t)(EAX));
  /* 1076cf94 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076cf97 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cf98 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1076cf9b push edx */
  push32((uint32_t)(EDX));
  /* 1076cf9c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1076cf9f push eax */
  push32((uint32_t)(EAX));
  /* 1076cfa0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076cfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cfa4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076cfa7 push edx */
  push32((uint32_t)(EDX));
  /* 1076cfa8 call dword ptr [0x107932e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932e8))), 0x1076cfaeu);
  /* 1076cfae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076cfb0 jne 0x1076cfb6 */
  if (!C.zf) goto L_1076cfb6;
  /* 1076cfb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cfb4 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cfb6:;
  /* 1076cfb6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cfba jne 0x1076cfea */
  if (!C.zf) goto L_1076cfea;
  /* 1076cfbc push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfbe push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfc4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076cfc7 push eax */
  push32((uint32_t)(EAX));
  /* 1076cfc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076cfcb push ecx */
  push32((uint32_t)(ECX));
  /* 1076cfcc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1076cfd1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1076cfd4 push edx */
  push32((uint32_t)(EDX));
  /* 1076cfd5 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x1076cfdbu);
  /* 1076cfdb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1076cfde cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076cfe2 jne 0x1076cfe8 */
  if (!C.zf) goto L_1076cfe8;
  /* 1076cfe4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076cfe6 jmp 0x1076d021 */
  goto L_1076d021;
L_1076cfe8:;
  /* 1076cfe8 jmp 0x1076d01a */
  goto L_1076d01a;
L_1076cfea:;
  /* 1076cfea push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfec push 0 */
  push32((uint32_t)(0x0u));
  /* 1076cfee mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1076cff1 push eax */
  push32((uint32_t)(EAX));
  /* 1076cff2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1076cff5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076cff6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1076cff9 push edx */
  push32((uint32_t)(EDX));
  /* 1076cffa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1076cffd push eax */
  push32((uint32_t)(EAX));
  /* 1076cffe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1076d003 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1076d006 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d007 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x1076d00du);
  /* 1076d00d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1076d010 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d014 jne 0x1076d01a */
  if (!C.zf) goto L_1076d01a;
  /* 1076d016 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d018 jmp 0x1076d021 */
  goto L_1076d021;
L_1076d01a:;
  /* 1076d01a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1076d01d jmp 0x1076d021 */
  goto L_1076d021;
L_1076d01f:;
  /* 1076d01f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076d021:;
  /* 1076d021 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1076d024 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076d027 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1076d02e pop edi */
  EDI = (pop32());
  /* 1076d02f pop esi */
  ESI = (pop32());
  /* 1076d030 pop ebx */
  EBX = (pop32());
  /* 1076d031 mov esp, ebp */
  ESP = (EBP);
  /* 1076d033 pop ebp */
  EBP = (pop32());
  /* 1076d034 ret  */
  ESPCHK(0x1076cd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d040 @ 0x1076d040 (80 bytes, 32 insns) */
void f_1076d040(void) {
  FTRACE(0x1076d040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d040 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d041 mov ebp, esp */
  EBP = (ESP);
  /* 1076d043 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d046 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d049 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076d04c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d04f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076d052:;
  /* 1076d052 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d058 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d05b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076d05e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076d060 je 0x1076d077 */
  if (C.zf) goto L_1076d077;
  /* 1076d062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d065 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076d068 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076d06a je 0x1076d077 */
  if (C.zf) goto L_1076d077;
  /* 1076d06c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d06f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d072 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d075 jmp 0x1076d052 */
  goto L_1076d052;
L_1076d077:;
  /* 1076d077 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d07a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076d07d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076d07f jne 0x1076d089 */
  if (!C.zf) goto L_1076d089;
  /* 1076d081 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d084 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d087 jmp 0x1076d08c */
  goto L_1076d08c;
L_1076d089:;
  /* 1076d089 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1076d08c:;
  /* 1076d08c mov esp, ebp */
  ESP = (EBP);
  /* 1076d08e pop ebp */
  EBP = (pop32());
  /* 1076d08f ret  */
  ESPCHK(0x1076d040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d090 @ 0x1076d090 (130 bytes, 43 insns) */
void f_1076d090(void) {
  FTRACE(0x1076d090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d090 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d091 mov ebp, esp */
  EBP = (ESP);
  /* 1076d093 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d097 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d09d jae 0x1076d0c1 */
  if (!C.cf) goto L_1076d0c1;
  /* 1076d09f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d0a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d0a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d0a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d0ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d0ae mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d0b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076d0ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076d0bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076d0bf jne 0x1076d0dc */
  if (!C.zf) goto L_1076d0dc;
L_1076d0c1:;
  /* 1076d0c1 call 0x1076c810 */
  push32(0x1076d0c6u); f_1076c810();
  /* 1076d0c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076d0cc call 0x1076c820 */
  push32(0x1076d0d1u); f_1076c820();
  /* 1076d0d1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076d0d7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d0da jmp 0x1076d10e */
  goto L_1076d10e;
L_1076d0dc:;
  /* 1076d0dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d0df push edx */
  push32((uint32_t)(EDX));
  /* 1076d0e0 call 0x1076e030 */
  push32(0x1076d0e5u); f_1076e030();
  /* 1076d0e5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d0e8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076d0eb push eax */
  push32((uint32_t)(EAX));
  /* 1076d0ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d0ef push ecx */
  push32((uint32_t)(ECX));
  /* 1076d0f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d0f3 push edx */
  push32((uint32_t)(EDX));
  /* 1076d0f4 call 0x1076d120 */
  push32(0x1076d0f9u); f_1076d120();
  /* 1076d0f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d0fc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d0ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d102 push eax */
  push32((uint32_t)(EAX));
  /* 1076d103 call 0x1076e0c0 */
  push32(0x1076d108u); f_1076e0c0();
  /* 1076d108 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d10b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076d10e:;
  /* 1076d10e mov esp, ebp */
  ESP = (EBP);
  /* 1076d110 pop ebp */
  EBP = (pop32());
  /* 1076d111 ret  */
  ESPCHK(0x1076d090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x1076d120 (178 bytes, 56 insns) */
void f_1076d120(void) {
  FTRACE(0x1076d120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d120 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d121 mov ebp, esp */
  EBP = (ESP);
  /* 1076d123 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d129 push eax */
  push32((uint32_t)(EAX));
  /* 1076d12a call 0x1076deb0 */
  push32(0x1076d12fu); f_1076deb0();
  /* 1076d12f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d132 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1076d135 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d139 jne 0x1076d14e */
  if (!C.zf) goto L_1076d14e;
  /* 1076d13b call 0x1076c810 */
  push32(0x1076d140u); f_1076c810();
  /* 1076d140 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076d146 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d149 jmp 0x1076d1ce */
  goto L_1076d1ce;
L_1076d14e:;
  /* 1076d14e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076d151 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d152 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d154 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d157 push edx */
  push32((uint32_t)(EDX));
  /* 1076d158 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076d15b push eax */
  push32((uint32_t)(EAX));
  /* 1076d15c call dword ptr [0x107932d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932d8))), 0x1076d162u);
  /* 1076d162 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076d165 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d169 jne 0x1076d176 */
  if (!C.zf) goto L_1076d176;
  /* 1076d16b call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076d171u);
  /* 1076d171 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d174 jmp 0x1076d17d */
  goto L_1076d17d;
L_1076d176:;
  /* 1076d176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1076d17d:;
  /* 1076d17d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d181 je 0x1076d194 */
  if (C.zf) goto L_1076d194;
  /* 1076d183 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d186 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d187 call 0x1076c770 */
  push32(0x1076d18cu); f_1076c770();
  /* 1076d18c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d18f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d192 jmp 0x1076d1ce */
  goto L_1076d1ce;
L_1076d194:;
  /* 1076d194 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d197 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1076d19a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d19d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d1a0 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d1a3 mov ecx, dword ptr [edx*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076d1aa mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1076d1ae and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1076d1b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d1b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d1b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d1ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076d1bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d1c0 mov eax, dword ptr [eax*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076d1c7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1076d1cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1076d1ce:;
  /* 1076d1ce mov esp, ebp */
  ESP = (EBP);
  /* 1076d1d0 pop ebp */
  EBP = (pop32());
  /* 1076d1d1 ret  */
  ESPCHK(0x1076d120u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e0 @ 0x1076d1e0 (130 bytes, 43 insns) */
void f_1076d1e0(void) {
  FTRACE(0x1076d1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1076d1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d1e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d1e7 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d1ed jae 0x1076d211 */
  if (!C.cf) goto L_1076d211;
  /* 1076d1ef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d1f2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d1f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d1f8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d1fb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d1fe mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d205 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076d20a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076d20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076d20f jne 0x1076d22c */
  if (!C.zf) goto L_1076d22c;
L_1076d211:;
  /* 1076d211 call 0x1076c810 */
  push32(0x1076d216u); f_1076c810();
  /* 1076d216 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076d21c call 0x1076c820 */
  push32(0x1076d221u); f_1076c820();
  /* 1076d221 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076d227 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d22a jmp 0x1076d25e */
  goto L_1076d25e;
L_1076d22c:;
  /* 1076d22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d22f push edx */
  push32((uint32_t)(EDX));
  /* 1076d230 call 0x1076e030 */
  push32(0x1076d235u); f_1076e030();
  /* 1076d235 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d238 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076d23b push eax */
  push32((uint32_t)(EAX));
  /* 1076d23c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d23f push ecx */
  push32((uint32_t)(ECX));
  /* 1076d240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d243 push edx */
  push32((uint32_t)(EDX));
  /* 1076d244 call 0x1076d270 */
  push32(0x1076d249u); f_1076d270();
  /* 1076d249 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d24c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d252 push eax */
  push32((uint32_t)(EAX));
  /* 1076d253 call 0x1076e0c0 */
  push32(0x1076d258u); f_1076e0c0();
  /* 1076d258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076d25e:;
  /* 1076d25e mov esp, ebp */
  ESP = (EBP);
  /* 1076d260 pop ebp */
  EBP = (pop32());
  /* 1076d261 ret  */
  ESPCHK(0x1076d1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d270 @ 0x1076d270 (627 bytes, 182 insns) */
void f_1076d270(void) {
  FTRACE(0x1076d270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d270 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d271 mov ebp, esp */
  EBP = (ESP);
  /* 1076d273 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d279 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1076d280 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076d283 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1076d289 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d28d jne 0x1076d296 */
  if (!C.zf) goto L_1076d296;
  /* 1076d28f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d291 jmp 0x1076d4df */
  goto L_1076d4df;
L_1076d296:;
  /* 1076d296 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d299 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d29f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d2a2 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d2a5 mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d2ac movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076d2b1 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1076d2b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076d2b6 je 0x1076d2c8 */
  if (C.zf) goto L_1076d2c8;
  /* 1076d2b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076d2ba push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d2bf push edx */
  push32((uint32_t)(EDX));
  /* 1076d2c0 call 0x1076d120 */
  push32(0x1076d2c5u); f_1076d120();
  /* 1076d2c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076d2c8:;
  /* 1076d2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d2cb sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d2ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d2d1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076d2d4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d2d7 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076d2de movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1076d2e3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1076d2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d2ea je 0x1076d3fc */
  if (C.zf) goto L_1076d3fc;
  /* 1076d2f0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d2f3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076d2f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1076d2fd:;
  /* 1076d2fd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d300 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d303 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d306 jae 0x1076d3fa */
  if (!C.cf) goto L_1076d3fa;
  /* 1076d30c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1076d312 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1076d315:;
  /* 1076d315 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d318 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1076d31e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d320 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d326 jge 0x1076d387 */
  if ((C.sf==C.of)) goto L_1076d387;
  /* 1076d328 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d32b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d32e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d331 jae 0x1076d387 */
  if (!C.cf) goto L_1076d387;
  /* 1076d333 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d336 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1076d338 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1076d33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d341 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d344 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d347 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1076d34e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d351 jne 0x1076d371 */
  if (!C.zf) goto L_1076d371;
  /* 1076d353 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1076d359 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d35c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1076d362 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d365 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1076d368 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d36b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d36e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1076d371:;
  /* 1076d371 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d374 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1076d37a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1076d37c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d37f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d382 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076d385 jmp 0x1076d315 */
  goto L_1076d315;
L_1076d387:;
  /* 1076d387 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d389 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1076d38f push edx */
  push32((uint32_t)(EDX));
  /* 1076d390 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d393 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1076d399 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d39b push eax */
  push32((uint32_t)(EAX));
  /* 1076d39c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1076d3a2 push edx */
  push32((uint32_t)(EDX));
  /* 1076d3a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d3a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d3a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d3ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076d3af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d3b2 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076d3b9 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1076d3bc push eax */
  push32((uint32_t)(EAX));
  /* 1076d3bd call dword ptr [0x10793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793330))), 0x1076d3c3u);
  /* 1076d3c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d3c5 je 0x1076d3ea */
  if (C.zf) goto L_1076d3ea;
  /* 1076d3c7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076d3ca add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d3d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1076d3d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d3d6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1076d3dc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d3de cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d3e4 jge 0x1076d3e8 */
  if ((C.sf==C.of)) goto L_1076d3e8;
  /* 1076d3e6 jmp 0x1076d3fa */
  goto L_1076d3fa;
L_1076d3e8:;
  /* 1076d3e8 jmp 0x1076d3f5 */
  goto L_1076d3f5;
L_1076d3ea:;
  /* 1076d3ea call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076d3f0u);
  /* 1076d3f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1076d3f3 jmp 0x1076d3fa */
  goto L_1076d3fa;
L_1076d3f5:;
  /* 1076d3f5 jmp 0x1076d2fd */
  goto L_1076d2fd;
L_1076d3fa:;
  /* 1076d3fa jmp 0x1076d44c */
  goto L_1076d44c;
L_1076d3fc:;
  /* 1076d3fc push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d3fe lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1076d404 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d405 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076d408 push edx */
  push32((uint32_t)(EDX));
  /* 1076d409 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d40c push eax */
  push32((uint32_t)(EAX));
  /* 1076d40d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d410 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d413 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d416 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d419 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d41c mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d423 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1076d426 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d427 call dword ptr [0x10793330] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793330))), 0x1076d42du);
  /* 1076d42d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d42f je 0x1076d443 */
  if (C.zf) goto L_1076d443;
  /* 1076d431 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076d438 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1076d43e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1076d441 jmp 0x1076d44c */
  goto L_1076d44c;
L_1076d443:;
  /* 1076d443 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076d449u);
  /* 1076d449 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076d44c:;
  /* 1076d44c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d450 jne 0x1076d4d6 */
  if (!C.zf) goto L_1076d4d6;
  /* 1076d456 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d45a je 0x1076d48a */
  if (C.zf) goto L_1076d48a;
  /* 1076d45c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d460 jne 0x1076d479 */
  if (!C.zf) goto L_1076d479;
  /* 1076d462 call 0x1076c810 */
  push32(0x1076d467u); f_1076c810();
  /* 1076d467 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076d46d call 0x1076c820 */
  push32(0x1076d472u); f_1076c820();
  /* 1076d472 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076d475 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1076d477 jmp 0x1076d485 */
  goto L_1076d485;
L_1076d479:;
  /* 1076d479 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076d47c push edx */
  push32((uint32_t)(EDX));
  /* 1076d47d call 0x1076c770 */
  push32(0x1076d482u); f_1076c770();
  /* 1076d482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076d485:;
  /* 1076d485 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d488 jmp 0x1076d4df */
  goto L_1076d4df;
L_1076d48a:;
  /* 1076d48a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d48d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d490 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d493 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076d496 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d499 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076d4a0 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1076d4a5 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1076d4a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d4aa je 0x1076d4bb */
  if (C.zf) goto L_1076d4bb;
  /* 1076d4ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d4af movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076d4b2 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d4b5 jne 0x1076d4bb */
  if (!C.zf) goto L_1076d4bb;
  /* 1076d4b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d4b9 jmp 0x1076d4df */
  goto L_1076d4df;
L_1076d4bb:;
  /* 1076d4bb call 0x1076c810 */
  push32(0x1076d4c0u); f_1076c810();
  /* 1076d4c0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1076d4c6 call 0x1076c820 */
  push32(0x1076d4cbu); f_1076c820();
  /* 1076d4cb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076d4d1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d4d4 jmp 0x1076d4df */
  goto L_1076d4df;
L_1076d4d6:;
  /* 1076d4d6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076d4d9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1076d4df:;
  /* 1076d4df mov esp, ebp */
  ESP = (EBP);
  /* 1076d4e1 pop ebp */
  EBP = (pop32());
  /* 1076d4e2 ret  */
  ESPCHK(0x1076d270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4f0 @ 0x1076d4f0 (199 bytes, 68 insns) */
void f_1076d4f0(void) {
  FTRACE(0x1076d4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d4f1 mov ebp, esp */
  EBP = (ESP);
  /* 1076d4f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d4f4 push ebx */
  push32((uint32_t)(EBX));
  /* 1076d4f5 push esi */
  push32((uint32_t)(ESI));
  /* 1076d4f6 push edi */
  push32((uint32_t)(EDI));
L_1076d4f7:;
  /* 1076d4f7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d4fb jne 0x1076d51b */
  if (!C.zf) goto L_1076d51b;
  /* 1076d4fd push 0x1078c088 */
  push32((uint32_t)(0x1078c088u));
  /* 1076d502 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d504 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1076d506 push 0x1078c158 */
  push32((uint32_t)(0x1078c158u));
  /* 1076d50b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076d50d call 0x10763a00 */
  push32(0x1076d512u); f_10763a00();
  /* 1076d512 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d515 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d518 jne 0x1076d51b */
  if (!C.zf) goto L_1076d51b;
  /* 1076d51a int3  */
  x86_unimpl("int3 @ 0x1076d51a");
L_1076d51b:;
  /* 1076d51b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d51d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d51f jne 0x1076d4f7 */
  if (!C.zf) goto L_1076d4f7;
  /* 1076d521 mov ecx, dword ptr [0x10790774] */
  ECX = (r32((uint32_t)(0x10790774)));
  /* 1076d527 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d52a mov dword ptr [0x10790774], ecx */
  w32((uint32_t)(0x10790774), (ECX));
  /* 1076d530 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d533 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076d536 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1076d538 push 0x1078c158 */
  push32((uint32_t)(0x1078c158u));
  /* 1076d53d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076d53f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1076d544 call 0x10764940 */
  push32(0x1076d549u); f_10764940();
  /* 1076d549 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d54c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d54f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1076d552 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d555 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d559 je 0x1076d576 */
  if (C.zf) goto L_1076d576;
  /* 1076d55b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d55e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076d561 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1076d564 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d567 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1076d56a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d56d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1076d574 jmp 0x1076d59b */
  goto L_1076d59b;
L_1076d576:;
  /* 1076d576 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d579 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076d57c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1076d57f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d582 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1076d585 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d588 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d58b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d58e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1076d591 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d594 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1076d59b:;
  /* 1076d59b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d59e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d5a1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076d5a4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076d5a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d5a9 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1076d5b0 pop edi */
  EDI = (pop32());
  /* 1076d5b1 pop esi */
  ESI = (pop32());
  /* 1076d5b2 pop ebx */
  EBX = (pop32());
  /* 1076d5b3 mov esp, ebp */
  ESP = (EBP);
  /* 1076d5b5 pop ebp */
  EBP = (pop32());
  /* 1076d5b6 ret  */
  ESPCHK(0x1076d4f0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1076d5c0 (50 bytes, 17 insns) */
void f_1076d5c0(void) {
  FTRACE(0x1076d5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d5c1 mov ebp, esp */
  EBP = (ESP);
  /* 1076d5c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d5c6 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d5cc jb 0x1076d5d2 */
  if (C.cf) goto L_1076d5d2;
  /* 1076d5ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d5d0 jmp 0x1076d5f0 */
  goto L_1076d5f0;
L_1076d5d2:;
  /* 1076d5d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d5d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d5d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d5db and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d5de imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d5e1 mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d5e8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076d5ed and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1076d5f0:;
  /* 1076d5f0 pop ebp */
  EBP = (pop32());
  /* 1076d5f1 ret  */
  ESPCHK(0x1076d5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d600 @ 0x1076d600 (300 bytes, 80 insns) */
void f_1076d600(void) {
  FTRACE(0x1076d600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d600 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d601 mov ebp, esp */
  EBP = (ESP);
  /* 1076d603 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d604 cmp dword ptr [0x10791c40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10791c40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d60b jne 0x1076d619 */
  if (!C.zf) goto L_1076d619;
  /* 1076d60d mov dword ptr [0x10791c40], 0x200 */
  w32((uint32_t)(0x10791c40), (0x200u));
  /* 1076d617 jmp 0x1076d62c */
  goto L_1076d62c;
L_1076d619:;
  /* 1076d619 cmp dword ptr [0x10791c40], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x10791c40))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d620 jge 0x1076d62c */
  if ((C.sf==C.of)) goto L_1076d62c;
  /* 1076d622 mov dword ptr [0x10791c40], 0x14 */
  w32((uint32_t)(0x10791c40), (0x14u));
L_1076d62c:;
  /* 1076d62c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1076d631 push 0x1078c164 */
  push32((uint32_t)(0x1078c164u));
  /* 1076d636 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076d638 push 4 */
  push32((uint32_t)(0x4u));
  /* 1076d63a mov eax, dword ptr [0x10791c40] */
  EAX = (r32((uint32_t)(0x10791c40)));
  /* 1076d63f push eax */
  push32((uint32_t)(EAX));
  /* 1076d640 call 0x10764d50 */
  push32(0x1076d645u); f_10764d50();
  /* 1076d645 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d648 mov dword ptr [0x107908e8], eax */
  w32((uint32_t)(0x107908e8), (EAX));
  /* 1076d64d cmp dword ptr [0x107908e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d654 jne 0x1076d695 */
  if (!C.zf) goto L_1076d695;
  /* 1076d656 mov dword ptr [0x10791c40], 0x14 */
  w32((uint32_t)(0x10791c40), (0x14u));
  /* 1076d660 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1076d665 push 0x1078c164 */
  push32((uint32_t)(0x1078c164u));
  /* 1076d66a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076d66c push 4 */
  push32((uint32_t)(0x4u));
  /* 1076d66e mov ecx, dword ptr [0x10791c40] */
  ECX = (r32((uint32_t)(0x10791c40)));
  /* 1076d674 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d675 call 0x10764d50 */
  push32(0x1076d67au); f_10764d50();
  /* 1076d67a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d67d mov dword ptr [0x107908e8], eax */
  w32((uint32_t)(0x107908e8), (EAX));
  /* 1076d682 cmp dword ptr [0x107908e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d689 jne 0x1076d695 */
  if (!C.zf) goto L_1076d695;
  /* 1076d68b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1076d68d call 0x107638b0 */
  push32(0x1076d692u); f_107638b0();
  /* 1076d692 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076d695:;
  /* 1076d695 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076d69c jmp 0x1076d6a7 */
  goto L_1076d6a7;
L_1076d69e:;
  /* 1076d69e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d6a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076d6a7:;
  /* 1076d6a7 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d6ab jge 0x1076d6c6 */
  if ((C.sf==C.of)) goto L_1076d6c6;
  /* 1076d6ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6b0 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d6b3 add eax, 0x1078f120 */
  { uint32_t _a=(EAX),_b=(0x1078f120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d6b8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6bb mov edx, dword ptr [0x107908e8] */
  EDX = (r32((uint32_t)(0x107908e8)));
  /* 1076d6c1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1076d6c4 jmp 0x1076d69e */
  goto L_1076d69e;
L_1076d6c6:;
  /* 1076d6c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076d6cd jmp 0x1076d6d8 */
  goto L_1076d6d8;
L_1076d6cf:;
  /* 1076d6cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6d2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d6d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076d6d8:;
  /* 1076d6d8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d6dc jge 0x1076d728 */
  if ((C.sf==C.of)) goto L_1076d728;
  /* 1076d6de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6e1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d6e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6e7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d6ea imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d6ed mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d6f4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d6f8 je 0x1076d716 */
  if (C.zf) goto L_1076d716;
  /* 1076d6fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d6fd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d700 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d703 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076d706 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076d709 mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076d710 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d714 jne 0x1076d726 */
  if (!C.zf) goto L_1076d726;
L_1076d716:;
  /* 1076d716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076d719 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076d71c mov dword ptr [ecx + 0x1078f130], 0xffffffff */
  w32((uint32_t)(ECX + 0x1078f130), (0xffffffffu));
L_1076d726:;
  /* 1076d726 jmp 0x1076d6cf */
  goto L_1076d6cf;
L_1076d728:;
  /* 1076d728 mov esp, ebp */
  ESP = (EBP);
  /* 1076d72a pop ebp */
  EBP = (pop32());
  /* 1076d72b ret  */
  ESPCHK(0x1076d600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x1076d730 (26 bytes, 9 insns) */
void f_1076d730(void) {
  FTRACE(0x1076d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d730 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d731 mov ebp, esp */
  EBP = (ESP);
  /* 1076d733 call 0x1076e330 */
  push32(0x1076d738u); f_1076e330();
  /* 1076d738 movsx eax, byte ptr [0x10790590] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x10790590))));
  /* 1076d73f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076d741 je 0x1076d748 */
  if (C.zf) goto L_1076d748;
  /* 1076d743 call 0x1076e0f0 */
  push32(0x1076d748u); f_1076e0f0();
L_1076d748:;
  /* 1076d748 pop ebp */
  EBP = (pop32());
  /* 1076d749 ret  */
  ESPCHK(0x1076d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x1076d750 (61 bytes, 20 insns) */
void f_1076d750(void) {
  FTRACE(0x1076d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d750 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d751 mov ebp, esp */
  EBP = (ESP);
  /* 1076d753 cmp dword ptr [ebp + 8], 0x1078f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1078f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d75a jb 0x1076d77e */
  if (C.cf) goto L_1076d77e;
  /* 1076d75c cmp dword ptr [ebp + 8], 0x1078f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1078f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d763 ja 0x1076d77e */
  if ((!C.cf&&!C.zf)) goto L_1076d77e;
  /* 1076d765 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d768 sub eax, 0x1078f120 */
  { uint32_t _a=(EAX),_b=(0x1078f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d76d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d770 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d773 push eax */
  push32((uint32_t)(EAX));
  /* 1076d774 call 0x10768340 */
  push32(0x1076d779u); f_10768340();
  /* 1076d779 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d77c jmp 0x1076d78b */
  goto L_1076d78b;
L_1076d77e:;
  /* 1076d77e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d781 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d784 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d785 call dword ptr [0x10793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793314))), 0x1076d78bu);
L_1076d78b:;
  /* 1076d78b pop ebp */
  EBP = (pop32());
  /* 1076d78c ret  */
  ESPCHK(0x1076d750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d790 @ 0x1076d790 (41 bytes, 16 insns) */
void f_1076d790(void) {
  FTRACE(0x1076d790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d790 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d791 mov ebp, esp */
  EBP = (ESP);
  /* 1076d793 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d797 jge 0x1076d7aa */
  if ((C.sf==C.of)) goto L_1076d7aa;
  /* 1076d799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d79c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d79f push eax */
  push32((uint32_t)(EAX));
  /* 1076d7a0 call 0x10768340 */
  push32(0x1076d7a5u); f_10768340();
  /* 1076d7a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d7a8 jmp 0x1076d7b7 */
  goto L_1076d7b7;
L_1076d7aa:;
  /* 1076d7aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d7ad add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d7b0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d7b1 call dword ptr [0x10793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793314))), 0x1076d7b7u);
L_1076d7b7:;
  /* 1076d7b7 pop ebp */
  EBP = (pop32());
  /* 1076d7b8 ret  */
  ESPCHK(0x1076d790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x1076d7c0 (61 bytes, 20 insns) */
void f_1076d7c0(void) {
  FTRACE(0x1076d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1076d7c3 cmp dword ptr [ebp + 8], 0x1078f120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1078f120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d7ca jb 0x1076d7ee */
  if (C.cf) goto L_1076d7ee;
  /* 1076d7cc cmp dword ptr [ebp + 8], 0x1078f380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1078f380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d7d3 ja 0x1076d7ee */
  if ((!C.cf&&!C.zf)) goto L_1076d7ee;
  /* 1076d7d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d7d8 sub eax, 0x1078f120 */
  { uint32_t _a=(EAX),_b=(0x1078f120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d7dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076d7e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d7e3 push eax */
  push32((uint32_t)(EAX));
  /* 1076d7e4 call 0x107683e0 */
  push32(0x1076d7e9u); f_107683e0();
  /* 1076d7e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d7ec jmp 0x1076d7fb */
  goto L_1076d7fb;
L_1076d7ee:;
  /* 1076d7ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d7f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d7f5 call dword ptr [0x10793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793310))), 0x1076d7fbu);
L_1076d7fb:;
  /* 1076d7fb pop ebp */
  EBP = (pop32());
  /* 1076d7fc ret  */
  ESPCHK(0x1076d7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x1076d800 (41 bytes, 16 insns) */
void f_1076d800(void) {
  FTRACE(0x1076d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d800 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d801 mov ebp, esp */
  EBP = (ESP);
  /* 1076d803 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d807 jge 0x1076d81a */
  if ((C.sf==C.of)) goto L_1076d81a;
  /* 1076d809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d80c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d80f push eax */
  push32((uint32_t)(EAX));
  /* 1076d810 call 0x107683e0 */
  push32(0x1076d815u); f_107683e0();
  /* 1076d815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d818 jmp 0x1076d827 */
  goto L_1076d827;
L_1076d81a:;
  /* 1076d81a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d81d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d820 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d821 call dword ptr [0x10793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793310))), 0x1076d827u);
L_1076d827:;
  /* 1076d827 pop ebp */
  EBP = (pop32());
  /* 1076d828 ret  */
  ESPCHK(0x1076d800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x1076d830 (119 bytes, 34 insns) */
void f_1076d830(void) {
  FTRACE(0x1076d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d830 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d831 mov ebp, esp */
  EBP = (ESP);
  /* 1076d833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d836 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 1076d83b call dword ptr [0x10793344] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793344))), 0x1076d841u);
  /* 1076d841 cmp dword ptr [0x107908d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d848 je 0x1076d868 */
  if (C.zf) goto L_1076d868;
  /* 1076d84a push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 1076d84f call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x1076d855u);
  /* 1076d855 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076d857 call 0x10768340 */
  push32(0x1076d85cu); f_10768340();
  /* 1076d85c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d85f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076d866 jmp 0x1076d86f */
  goto L_1076d86f;
L_1076d868:;
  /* 1076d868 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1076d86f:;
  /* 1076d86f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1076d873 push eax */
  push32((uint32_t)(EAX));
  /* 1076d874 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d877 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d878 call 0x1076d8b0 */
  push32(0x1076d87du); f_1076d8b0();
  /* 1076d87d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d880 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076d883 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d887 je 0x1076d895 */
  if (C.zf) goto L_1076d895;
  /* 1076d889 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076d88b call 0x107683e0 */
  push32(0x1076d890u); f_107683e0();
  /* 1076d890 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d893 jmp 0x1076d8a0 */
  goto L_1076d8a0;
L_1076d895:;
  /* 1076d895 push 0x107908e4 */
  push32((uint32_t)(0x107908e4u));
  /* 1076d89a call dword ptr [0x10793334] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793334))), 0x1076d8a0u);
L_1076d8a0:;
  /* 1076d8a0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076d8a3 mov esp, ebp */
  ESP = (EBP);
  /* 1076d8a5 pop ebp */
  EBP = (pop32());
  /* 1076d8a6 ret  */
  ESPCHK(0x1076d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1076d8b0 (160 bytes, 50 insns) */
void f_1076d8b0(void) {
  FTRACE(0x1076d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1076d8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076d8b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d8ba jne 0x1076d8c3 */
  if (!C.zf) goto L_1076d8c3;
  /* 1076d8bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076d8be jmp 0x1076d94c */
  goto L_1076d94c;
L_1076d8c3:;
  /* 1076d8c3 cmp dword ptr [0x10790758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d8ca jne 0x1076d8fa */
  if (!C.zf) goto L_1076d8fa;
  /* 1076d8cc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076d8cf and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d8d4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d8d9 jle 0x1076d8eb */
  if ((C.zf||C.sf!=C.of)) goto L_1076d8eb;
  /* 1076d8db call 0x1076c810 */
  push32(0x1076d8e0u); f_1076c810();
  /* 1076d8e0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1076d8e6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d8e9 jmp 0x1076d94c */
  goto L_1076d94c;
L_1076d8eb:;
  /* 1076d8eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d8ee mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1076d8f1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1076d8f3 mov eax, 1 */
  EAX = (0x1u);
  /* 1076d8f8 jmp 0x1076d94c */
  goto L_1076d94c;
L_1076d8fa:;
  /* 1076d8fa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076d901 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1076d904 push eax */
  push32((uint32_t)(EAX));
  /* 1076d905 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d907 mov ecx, dword ptr [0x1078eea4] */
  ECX = (r32((uint32_t)(0x1078eea4)));
  /* 1076d90d push ecx */
  push32((uint32_t)(ECX));
  /* 1076d90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076d911 push edx */
  push32((uint32_t)(EDX));
  /* 1076d912 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076d914 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1076d917 push eax */
  push32((uint32_t)(EAX));
  /* 1076d918 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1076d91d mov ecx, dword ptr [0x10790768] */
  ECX = (r32((uint32_t)(0x10790768)));
  /* 1076d923 push ecx */
  push32((uint32_t)(ECX));
  /* 1076d924 call dword ptr [0x1079339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079339c))), 0x1076d92au);
  /* 1076d92a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076d92d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d931 je 0x1076d939 */
  if (C.zf) goto L_1076d939;
  /* 1076d933 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d937 je 0x1076d949 */
  if (C.zf) goto L_1076d949;
L_1076d939:;
  /* 1076d939 call 0x1076c810 */
  push32(0x1076d93eu); f_1076c810();
  /* 1076d93e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1076d944 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076d947 jmp 0x1076d94c */
  goto L_1076d94c;
L_1076d949:;
  /* 1076d949 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076d94c:;
  /* 1076d94c mov esp, ebp */
  ESP = (EBP);
  /* 1076d94e pop ebp */
  EBP = (pop32());
  /* 1076d94f ret  */
  ESPCHK(0x1076d8b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1076d950 (32 bytes, 18 insns) */
void f_1076d950(void) {
  FTRACE(0x1076d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d950 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d951 mov ebp, esp */
  EBP = (ESP);
  /* 1076d953 push ebx */
  push32((uint32_t)(EBX));
  /* 1076d954 push esi */
  push32((uint32_t)(ESI));
  /* 1076d955 push edi */
  push32((uint32_t)(EDI));
  /* 1076d956 push ebp */
  push32((uint32_t)(EBP));
  /* 1076d957 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d959 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076d95b push 0x1076d968 */
  push32((uint32_t)(0x1076d968u));
  /* 1076d960 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1076d963 call 0x1077509c */
  push32(0x1076d968u); f_1077509c();
  /* 1076d968 pop ebp */
  EBP = (pop32());
  /* 1076d969 pop edi */
  EDI = (pop32());
  /* 1076d96a pop esi */
  ESI = (pop32());
  /* 1076d96b pop ebx */
  EBX = (pop32());
  /* 1076d96c mov esp, ebp */
  ESP = (EBP);
  /* 1076d96e pop ebp */
  EBP = (pop32());
  /* 1076d96f ret  */
  ESPCHK(0x1076d950u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1076d992 (104 bytes, 33 insns) */
void f_1076d992(void) {
  FTRACE(0x1076d992u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076d992 push ebx */
  push32((uint32_t)(EBX));
  /* 1076d993 push esi */
  push32((uint32_t)(ESI));
  /* 1076d994 push edi */
  push32((uint32_t)(EDI));
  /* 1076d995 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1076d999 push eax */
  push32((uint32_t)(EAX));
  /* 1076d99a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1076d99c push 0x1076d970 */
  push32((uint32_t)(0x1076d970u));
  /* 1076d9a1 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1076d9a8 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1076d9af:;
  /* 1076d9af mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1076d9b3 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076d9b6 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1076d9b9 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d9bc je 0x1076d9ec */
  if (C.zf) goto L_1076d9ec;
  /* 1076d9be cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d9c2 je 0x1076d9ec */
  if (C.zf) goto L_1076d9ec;
  /* 1076d9c4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1076d9c7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1076d9ca mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1076d9ce mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1076d9d1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076d9d6 jne 0x1076d9ea */
  if (!C.zf) goto L_1076d9ea;
  /* 1076d9d8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1076d9dd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1076d9e1 call 0x1076da26 */
  push32(0x1076d9e6u); f_1076da26();
  /* 1076d9e6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1076d9eau);
L_1076d9ea:;
  /* 1076d9ea jmp 0x1076d9af */
  goto L_1076d9af;
L_1076d9ec:;
  /* 1076d9ec pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1076d9f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076d9f6 pop edi */
  EDI = (pop32());
  /* 1076d9f7 pop esi */
  ESI = (pop32());
  /* 1076d9f8 pop ebx */
  EBX = (pop32());
  /* 1076d9f9 ret  */
  ESPCHK(0x1076d992u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da26 @ 0x1076da26 (24 bytes, 10 insns) */
void f_1076da26(void) {
  FTRACE(0x1076da26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076da26 push ebx */
  push32((uint32_t)(EBX));
  /* 1076da27 push ecx */
  push32((uint32_t)(ECX));
  /* 1076da28 mov ebx, 0x1078f3b8 */
  EBX = (0x1078f3b8u);
  /* 1076da2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076da30 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1076da33 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1076da36 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1076da39 pop ecx */
  ECX = (pop32());
  /* 1076da3a pop ebx */
  EBX = (pop32());
  /* 1076da3b ret 4 */
  ESPCHK(0x1076da26u, _esp0);
  ESP += 8; return;
}

/* FUN_1000db05 @ 0x1076db05 (27 bytes, 11 insns) */
void f_1076db05(void) {
  FTRACE(0x1076db05u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076db05 push ebp */
  push32((uint32_t)(EBP));
  /* 1076db06 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1076db0a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1076db0c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1076db0f push eax */
  push32((uint32_t)(EAX));
  /* 1076db10 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1076db13 push eax */
  push32((uint32_t)(EAX));
  /* 1076db14 call 0x1076d992 */
  push32(0x1076db19u); f_1076d992();
  /* 1076db19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076db1c pop ebp */
  EBP = (pop32());
  /* 1076db1d ret 4 */
  ESPCHK(0x1076db05u, _esp0);
  ESP += 8; return;
}

/* FUN_1000db20 @ 0x1076db20 (482 bytes, 138 insns) */
void f_1076db20(void) {
  FTRACE(0x1076db20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076db20 push ebp */
  push32((uint32_t)(EBP));
  /* 1076db21 mov ebp, esp */
  EBP = (ESP);
  /* 1076db23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076db26 push esi */
  push32((uint32_t)(ESI));
  /* 1076db27 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1076db2e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1076db30 call 0x10768340 */
  push32(0x1076db35u); f_10768340();
  /* 1076db35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076db38 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076db3f jmp 0x1076db4a */
  goto L_1076db4a;
L_1076db41:;
  /* 1076db41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076db44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076db47 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076db4a:;
  /* 1076db4a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076db4e jge 0x1076dcf0 */
  if ((C.sf==C.of)) goto L_1076dcf0;
  /* 1076db54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076db57 cmp dword ptr [ecx*4 + 0x10791f40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x10791f40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076db5f je 0x1076dc56 */
  if (C.zf) goto L_1076dc56;
  /* 1076db65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076db68 mov eax, dword ptr [edx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076db6f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076db72 jmp 0x1076db7d */
  goto L_1076db7d;
L_1076db74:;
  /* 1076db74 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076db77 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076db7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076db7d:;
  /* 1076db7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076db80 mov eax, dword ptr [edx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076db87 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076db8c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076db8f jae 0x1076dc46 */
  if (!C.cf) goto L_1076dc46;
  /* 1076db95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076db98 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1076db9c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1076db9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076dba1 jne 0x1076dc41 */
  if (!C.zf) goto L_1076dc41;
  /* 1076dba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbaa cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dbae jne 0x1076dbe9 */
  if (!C.zf) goto L_1076dbe9;
  /* 1076dbb0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1076dbb2 call 0x10768340 */
  push32(0x1076dbb7u); f_10768340();
  /* 1076dbb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dbba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbbd cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dbc1 jne 0x1076dbdf */
  if (!C.zf) goto L_1076dbdf;
  /* 1076dbc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbc6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dbc9 push edx */
  push32((uint32_t)(EDX));
  /* 1076dbca call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x1076dbd0u);
  /* 1076dbd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbd3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076dbd6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dbd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbdc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1076dbdf:;
  /* 1076dbdf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1076dbe1 call 0x107683e0 */
  push32(0x1076dbe6u); f_107683e0();
  /* 1076dbe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076dbe9:;
  /* 1076dbe9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbec add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dbef push eax */
  push32((uint32_t)(EAX));
  /* 1076dbf0 call dword ptr [0x10793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793314))), 0x1076dbf6u);
  /* 1076dbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dbf9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1076dbfd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1076dc00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076dc02 je 0x1076dc16 */
  if (C.zf) goto L_1076dc16;
  /* 1076dc04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dc07 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dc0a push eax */
  push32((uint32_t)(EAX));
  /* 1076dc0b call dword ptr [0x10793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793310))), 0x1076dc11u);
  /* 1076dc11 jmp 0x1076db74 */
  goto L_1076db74;
L_1076dc16:;
  /* 1076dc16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dc19 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1076dc1f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076dc22 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076dc25 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076dc28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dc2b sub eax, dword ptr [edx*4 + 0x10791f40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x10791f40))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076dc32 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1076dc33 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1076dc38 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1076dc3a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dc3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076dc3f jmp 0x1076dc46 */
  goto L_1076dc46;
L_1076dc41:;
  /* 1076dc41 jmp 0x1076db74 */
  goto L_1076db74;
L_1076dc46:;
  /* 1076dc46 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dc4a je 0x1076dc51 */
  if (C.zf) goto L_1076dc51;
  /* 1076dc4c jmp 0x1076dcf0 */
  goto L_1076dcf0;
L_1076dc51:;
  /* 1076dc51 jmp 0x1076dceb */
  goto L_1076dceb;
L_1076dc56:;
  /* 1076dc56 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1076dc58 push 0x1078c16c */
  push32((uint32_t)(0x1078c16cu));
  /* 1076dc5d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076dc5f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1076dc64 call 0x10764940 */
  push32(0x1076dc69u); f_10764940();
  /* 1076dc69 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dc6c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076dc6f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dc73 je 0x1076dce9 */
  if (C.zf) goto L_1076dce9;
  /* 1076dc75 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076dc78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dc7b mov dword ptr [eax*4 + 0x10791f40], ecx */
  w32((uint32_t)(EAX*4 + 0x10791f40), (ECX));
  /* 1076dc82 mov edx, dword ptr [0x1079207c] */
  EDX = (r32((uint32_t)(0x1079207c)));
  /* 1076dc88 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dc8b mov dword ptr [0x1079207c], edx */
  w32((uint32_t)(0x1079207c), (EDX));
  /* 1076dc91 jmp 0x1076dc9c */
  goto L_1076dc9c;
L_1076dc93:;
  /* 1076dc93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dc96 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dc99 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076dc9c:;
  /* 1076dc9c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076dc9f mov edx, dword ptr [ecx*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076dca6 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dcac cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dcaf jae 0x1076dcd4 */
  if (!C.cf) goto L_1076dcd4;
  /* 1076dcb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dcb4 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1076dcb8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dcbb mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1076dcc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dcc4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1076dcc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076dccb mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1076dcd2 jmp 0x1076dc93 */
  goto L_1076dc93;
L_1076dcd4:;
  /* 1076dcd4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076dcd7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076dcda mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076dcdd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076dce0 push edx */
  push32((uint32_t)(EDX));
  /* 1076dce1 call 0x1076e030 */
  push32(0x1076dce6u); f_1076e030();
  /* 1076dce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076dce9:;
  /* 1076dce9 jmp 0x1076dcf0 */
  goto L_1076dcf0;
L_1076dceb:;
  /* 1076dceb jmp 0x1076db41 */
  goto L_1076db41;
L_1076dcf0:;
  /* 1076dcf0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1076dcf2 call 0x107683e0 */
  push32(0x1076dcf7u); f_107683e0();
  /* 1076dcf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dcfa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076dcfd pop esi */
  ESI = (pop32());
  /* 1076dcfe mov esp, ebp */
  ESP = (EBP);
  /* 1076dd00 pop ebp */
  EBP = (pop32());
  /* 1076dd01 ret  */
  ESPCHK(0x1076db20u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1076dd10 (183 bytes, 57 insns) */
void f_1076dd10(void) {
  FTRACE(0x1076dd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076dd10 push ebp */
  push32((uint32_t)(EBP));
  /* 1076dd11 mov ebp, esp */
  EBP = (ESP);
  /* 1076dd13 push ecx */
  push32((uint32_t)(ECX));
  /* 1076dd14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd17 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd1d jae 0x1076ddaa */
  if (!C.cf) goto L_1076ddaa;
  /* 1076dd23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd26 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076dd29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd2c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076dd2f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076dd32 mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076dd39 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd3d jne 0x1076ddaa */
  if (!C.zf) goto L_1076ddaa;
  /* 1076dd3f cmp dword ptr [0x10790550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd46 jne 0x1076dd8a */
  if (!C.zf) goto L_1076dd8a;
  /* 1076dd48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076dd4e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd52 je 0x1076dd62 */
  if (C.zf) goto L_1076dd62;
  /* 1076dd54 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd58 je 0x1076dd70 */
  if (C.zf) goto L_1076dd70;
  /* 1076dd5a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dd5e je 0x1076dd7e */
  if (C.zf) goto L_1076dd7e;
  /* 1076dd60 jmp 0x1076dd8a */
  goto L_1076dd8a;
L_1076dd62:;
  /* 1076dd62 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076dd65 push edx */
  push32((uint32_t)(EDX));
  /* 1076dd66 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1076dd68 call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076dd6eu);
  /* 1076dd6e jmp 0x1076dd8a */
  goto L_1076dd8a;
L_1076dd70:;
  /* 1076dd70 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076dd73 push eax */
  push32((uint32_t)(EAX));
  /* 1076dd74 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1076dd76 call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076dd7cu);
  /* 1076dd7c jmp 0x1076dd8a */
  goto L_1076dd8a;
L_1076dd7e:;
  /* 1076dd7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076dd81 push ecx */
  push32((uint32_t)(ECX));
  /* 1076dd82 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1076dd84 call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076dd8au);
L_1076dd8a:;
  /* 1076dd8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd8d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1076dd90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dd93 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1076dd96 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076dd99 mov ecx, dword ptr [edx*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076dda0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076dda3 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1076dda6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076dda8 jmp 0x1076ddc3 */
  goto L_1076ddc3;
L_1076ddaa:;
  /* 1076ddaa call 0x1076c810 */
  push32(0x1076ddafu); f_1076c810();
  /* 1076ddaf mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076ddb5 call 0x1076c820 */
  push32(0x1076ddbau); f_1076c820();
  /* 1076ddba mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076ddc0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1076ddc3:;
  /* 1076ddc3 mov esp, ebp */
  ESP = (EBP);
  /* 1076ddc5 pop ebp */
  EBP = (pop32());
  /* 1076ddc6 ret  */
  ESPCHK(0x1076dd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddd0 @ 0x1076ddd0 (216 bytes, 63 insns) */
void f_1076ddd0(void) {
  FTRACE(0x1076ddd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ddd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ddd1 mov ebp, esp */
  EBP = (ESP);
  /* 1076ddd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ddd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ddd7 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dddd jae 0x1076de8b */
  if (!C.cf) goto L_1076de8b;
  /* 1076dde3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dde6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076dde9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ddec and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076ddef imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076ddf2 mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076ddf9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076ddfe and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076de01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076de03 je 0x1076de8b */
  if (C.zf) goto L_1076de8b;
  /* 1076de09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076de0c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1076de0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076de12 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1076de15 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076de18 mov ecx, dword ptr [edx*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076de1f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076de23 je 0x1076de8b */
  if (C.zf) goto L_1076de8b;
  /* 1076de25 cmp dword ptr [0x10790550], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10790550))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076de2c jne 0x1076de6a */
  if (!C.zf) goto L_1076de6a;
  /* 1076de2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076de31 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076de34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076de38 je 0x1076de48 */
  if (C.zf) goto L_1076de48;
  /* 1076de3a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076de3e je 0x1076de54 */
  if (C.zf) goto L_1076de54;
  /* 1076de40 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076de44 je 0x1076de60 */
  if (C.zf) goto L_1076de60;
  /* 1076de46 jmp 0x1076de6a */
  goto L_1076de6a;
L_1076de48:;
  /* 1076de48 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076de4a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1076de4c call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076de52u);
  /* 1076de52 jmp 0x1076de6a */
  goto L_1076de6a;
L_1076de54:;
  /* 1076de54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076de56 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1076de58 call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076de5eu);
  /* 1076de5e jmp 0x1076de6a */
  goto L_1076de6a;
L_1076de60:;
  /* 1076de60 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076de62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1076de64 call dword ptr [0x107932dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932dc))), 0x1076de6au);
L_1076de6a:;
  /* 1076de6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076de6d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076de70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076de73 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076de76 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076de79 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076de80 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1076de87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076de89 jmp 0x1076dea4 */
  goto L_1076dea4;
L_1076de8b:;
  /* 1076de8b call 0x1076c810 */
  push32(0x1076de90u); f_1076c810();
  /* 1076de90 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076de96 call 0x1076c820 */
  push32(0x1076de9bu); f_1076c820();
  /* 1076de9b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076dea1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1076dea4:;
  /* 1076dea4 mov esp, ebp */
  ESP = (EBP);
  /* 1076dea6 pop ebp */
  EBP = (pop32());
  /* 1076dea7 ret  */
  ESPCHK(0x1076ddd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000deb0 @ 0x1076deb0 (102 bytes, 30 insns) */
void f_1076deb0(void) {
  FTRACE(0x1076deb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076deb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076deb1 mov ebp, esp */
  EBP = (ESP);
  /* 1076deb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076deb6 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076debc jae 0x1076defb */
  if (!C.cf) goto L_1076defb;
  /* 1076debe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dec1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076dec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dec7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076deca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076decd mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076ded4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076ded9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076dedc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076dede je 0x1076defb */
  if (C.zf) goto L_1076defb;
  /* 1076dee0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dee3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1076dee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dee9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1076deec imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076deef mov ecx, dword ptr [edx*4 + 0x10791f40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x10791f40)));
  /* 1076def6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1076def9 jmp 0x1076df14 */
  goto L_1076df14;
L_1076defb:;
  /* 1076defb call 0x1076c810 */
  push32(0x1076df00u); f_1076c810();
  /* 1076df00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076df06 call 0x1076c820 */
  push32(0x1076df0bu); f_1076c820();
  /* 1076df0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076df11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1076df14:;
  /* 1076df14 pop ebp */
  EBP = (pop32());
  /* 1076df15 ret  */
  ESPCHK(0x1076deb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df20 @ 0x1076df20 (260 bytes, 83 insns) */
void f_1076df20(void) {
  FTRACE(0x1076df20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076df20 push ebp */
  push32((uint32_t)(EBP));
  /* 1076df21 mov ebp, esp */
  EBP = (ESP);
  /* 1076df23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076df26 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076df2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076df2d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1076df30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076df32 je 0x1076df3d */
  if (C.zf) goto L_1076df3d;
  /* 1076df34 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076df37 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1076df3a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1076df3d:;
  /* 1076df3d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076df40 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1076df46 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076df48 je 0x1076df52 */
  if (C.zf) goto L_1076df52;
  /* 1076df4a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076df4d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1076df4f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1076df52:;
  /* 1076df52 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076df55 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1076df5b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076df5d je 0x1076df68 */
  if (C.zf) goto L_1076df68;
  /* 1076df5f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076df62 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1076df65 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1076df68:;
  /* 1076df68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076df6b push eax */
  push32((uint32_t)(EAX));
  /* 1076df6c call dword ptr [0x1079337c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079337c))), 0x1076df72u);
  /* 1076df72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076df75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076df79 jne 0x1076df92 */
  if (!C.zf) goto L_1076df92;
  /* 1076df7b call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076df81u);
  /* 1076df81 push eax */
  push32((uint32_t)(EAX));
  /* 1076df82 call 0x1076c770 */
  push32(0x1076df87u); f_1076c770();
  /* 1076df87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076df8a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076df8d jmp 0x1076e020 */
  goto L_1076e020;
L_1076df92:;
  /* 1076df92 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076df96 jne 0x1076dfa3 */
  if (!C.zf) goto L_1076dfa3;
  /* 1076df98 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076df9b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1076df9e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1076dfa1 jmp 0x1076dfb2 */
  goto L_1076dfb2;
L_1076dfa3:;
  /* 1076dfa3 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dfa7 jne 0x1076dfb2 */
  if (!C.zf) goto L_1076dfb2;
  /* 1076dfa9 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076dfac or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1076dfaf mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1076dfb2:;
  /* 1076dfb2 call 0x1076db20 */
  push32(0x1076dfb7u); f_1076db20();
  /* 1076dfb7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076dfba cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076dfbe jne 0x1076dfdb */
  if (!C.zf) goto L_1076dfdb;
  /* 1076dfc0 call 0x1076c810 */
  push32(0x1076dfc5u); f_1076c810();
  /* 1076dfc5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1076dfcb call 0x1076c820 */
  push32(0x1076dfd0u); f_1076c820();
  /* 1076dfd0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1076dfd6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076dfd9 jmp 0x1076e020 */
  goto L_1076e020;
L_1076dfdb:;
  /* 1076dfdb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076dfde push eax */
  push32((uint32_t)(EAX));
  /* 1076dfdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076dfe2 push ecx */
  push32((uint32_t)(ECX));
  /* 1076dfe3 call 0x1076dd10 */
  push32(0x1076dfe8u); f_1076dd10();
  /* 1076dfe8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076dfeb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076dfee or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1076dff1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1076dff4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076dff7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076dffa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076dffd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076e000 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e003 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076e00a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1076e00d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1076e011 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e014 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e015 call 0x1076e0c0 */
  push32(0x1076e01au); f_1076e0c0();
  /* 1076e01a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e01d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1076e020:;
  /* 1076e020 mov esp, ebp */
  ESP = (EBP);
  /* 1076e022 pop ebp */
  EBP = (pop32());
  /* 1076e023 ret  */
  ESPCHK(0x1076df20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e030 @ 0x1076e030 (134 bytes, 44 insns) */
void f_1076e030(void) {
  FTRACE(0x1076e030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e030 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e031 mov ebp, esp */
  EBP = (ESP);
  /* 1076e033 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e037 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076e03a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e03d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076e040 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e043 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076e04a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e04c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1076e04f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e052 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e056 jne 0x1076e091 */
  if (!C.zf) goto L_1076e091;
  /* 1076e058 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1076e05a call 0x10768340 */
  push32(0x1076e05fu); f_10768340();
  /* 1076e05f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e065 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e069 jne 0x1076e087 */
  if (!C.zf) goto L_1076e087;
  /* 1076e06b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e06e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e071 push edx */
  push32((uint32_t)(EDX));
  /* 1076e072 call dword ptr [0x1079336c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1079336c))), 0x1076e078u);
  /* 1076e078 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e07b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076e07e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e081 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e084 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1076e087:;
  /* 1076e087 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1076e089 call 0x107683e0 */
  push32(0x1076e08eu); f_107683e0();
  /* 1076e08e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076e091:;
  /* 1076e091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e094 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076e097 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e09a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076e09d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e0a0 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076e0a7 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1076e0ab push eax */
  push32((uint32_t)(EAX));
  /* 1076e0ac call dword ptr [0x10793314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793314))), 0x1076e0b2u);
  /* 1076e0b2 mov esp, ebp */
  ESP = (EBP);
  /* 1076e0b4 pop ebp */
  EBP = (pop32());
  /* 1076e0b5 ret  */
  ESPCHK(0x1076e030u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1076e0c0 (38 bytes, 13 insns) */
void f_1076e0c0(void) {
  FTRACE(0x1076e0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e0c1 mov ebp, esp */
  EBP = (ESP);
  /* 1076e0c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e0c6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076e0c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e0cc and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076e0cf imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e0d2 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076e0d9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1076e0dd push eax */
  push32((uint32_t)(EAX));
  /* 1076e0de call dword ptr [0x10793310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793310))), 0x1076e0e4u);
  /* 1076e0e4 pop ebp */
  EBP = (pop32());
  /* 1076e0e5 ret  */
  ESPCHK(0x1076e0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x1076e0f0 (218 bytes, 63 insns) */
void f_1076e0f0(void) {
  FTRACE(0x1076e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1076e0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e0f6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076e0fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e0ff call 0x10768340 */
  push32(0x1076e104u); f_10768340();
  /* 1076e104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e107 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1076e10e jmp 0x1076e119 */
  goto L_1076e119;
L_1076e110:;
  /* 1076e110 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e113 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e116 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1076e119:;
  /* 1076e119 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e11c cmp ecx, dword ptr [0x10791c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e122 jge 0x1076e1b9 */
  if ((C.sf==C.of)) goto L_1076e1b9;
  /* 1076e128 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e12b mov eax, dword ptr [0x107908e8] */
  EAX = (r32((uint32_t)(0x107908e8)));
  /* 1076e130 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e134 je 0x1076e1b4 */
  if (C.zf) goto L_1076e1b4;
  /* 1076e136 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e139 mov edx, dword ptr [0x107908e8] */
  EDX = (r32((uint32_t)(0x107908e8)));
  /* 1076e13f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1076e142 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076e145 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1076e14b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076e14d je 0x1076e171 */
  if (C.zf) goto L_1076e171;
  /* 1076e14f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e152 mov eax, dword ptr [0x107908e8] */
  EAX = (r32((uint32_t)(0x107908e8)));
  /* 1076e157 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1076e15a push ecx */
  push32((uint32_t)(ECX));
  /* 1076e15b call 0x1076eee0 */
  push32(0x1076e160u); f_1076eee0();
  /* 1076e160 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e163 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e166 je 0x1076e171 */
  if (C.zf) goto L_1076e171;
  /* 1076e168 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e16b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e16e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1076e171:;
  /* 1076e171 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e175 jl 0x1076e1b4 */
  if ((C.sf!=C.of)) goto L_1076e1b4;
  /* 1076e177 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e17a mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e180 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1076e183 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e186 push edx */
  push32((uint32_t)(EDX));
  /* 1076e187 call dword ptr [0x10793384] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793384))), 0x1076e18du);
  /* 1076e18d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e18f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e192 mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e198 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1076e19b push edx */
  push32((uint32_t)(EDX));
  /* 1076e19c call 0x107653d0 */
  push32(0x1076e1a1u); f_107653d0();
  /* 1076e1a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e1a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e1a7 mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e1ad mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1076e1b4:;
  /* 1076e1b4 jmp 0x1076e110 */
  goto L_1076e110;
L_1076e1b9:;
  /* 1076e1b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e1bb call 0x107683e0 */
  push32(0x1076e1c0u); f_107683e0();
  /* 1076e1c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e1c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e1c6 mov esp, ebp */
  ESP = (EBP);
  /* 1076e1c8 pop ebp */
  EBP = (pop32());
  /* 1076e1c9 ret  */
  ESPCHK(0x1076e0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1d0 @ 0x1076e1d0 (68 bytes, 26 insns) */
void f_1076e1d0(void) {
  FTRACE(0x1076e1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e1d1 mov ebp, esp */
  EBP = (ESP);
  /* 1076e1d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e1d4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e1d8 jne 0x1076e1e6 */
  if (!C.zf) goto L_1076e1e6;
  /* 1076e1da push 0 */
  push32((uint32_t)(0x0u));
  /* 1076e1dc call 0x1076e340 */
  push32(0x1076e1e1u); f_1076e340();
  /* 1076e1e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e1e4 jmp 0x1076e210 */
  goto L_1076e210;
L_1076e1e6:;
  /* 1076e1e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e1e9 push eax */
  push32((uint32_t)(EAX));
  /* 1076e1ea call 0x1076d750 */
  push32(0x1076e1efu); f_1076d750();
  /* 1076e1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e1f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e1f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e1f6 call 0x1076e220 */
  push32(0x1076e1fbu); f_1076e220();
  /* 1076e1fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e1fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076e201 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e204 push edx */
  push32((uint32_t)(EDX));
  /* 1076e205 call 0x1076d7c0 */
  push32(0x1076e20au); f_1076d7c0();
  /* 1076e20a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e20d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076e210:;
  /* 1076e210 mov esp, ebp */
  ESP = (EBP);
  /* 1076e212 pop ebp */
  EBP = (pop32());
  /* 1076e213 ret  */
  ESPCHK(0x1076e1d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e220 @ 0x1076e220 (65 bytes, 26 insns) */
void f_1076e220(void) {
  FTRACE(0x1076e220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e220 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e221 mov ebp, esp */
  EBP = (ESP);
  /* 1076e223 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e226 push eax */
  push32((uint32_t)(EAX));
  /* 1076e227 call 0x1076e270 */
  push32(0x1076e22cu); f_1076e270();
  /* 1076e22c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e22f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e231 je 0x1076e238 */
  if (C.zf) goto L_1076e238;
  /* 1076e233 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076e236 jmp 0x1076e25f */
  goto L_1076e25f;
L_1076e238:;
  /* 1076e238 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e23b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076e23e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1076e244 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076e246 je 0x1076e25d */
  if (C.zf) goto L_1076e25d;
  /* 1076e248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e24b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076e24e push ecx */
  push32((uint32_t)(ECX));
  /* 1076e24f call 0x1076f030 */
  push32(0x1076e254u); f_1076f030();
  /* 1076e254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e257 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1076e259 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e25b jmp 0x1076e25f */
  goto L_1076e25f;
L_1076e25d:;
  /* 1076e25d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076e25f:;
  /* 1076e25f pop ebp */
  EBP = (pop32());
  /* 1076e260 ret  */
  ESPCHK(0x1076e220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x1076e270 (183 bytes, 62 insns) */
void f_1076e270(void) {
  FTRACE(0x1076e270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e270 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e271 mov ebp, esp */
  EBP = (ESP);
  /* 1076e273 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e276 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076e27d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e280 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076e283 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e286 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076e289 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1076e28c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e28f jne 0x1076e30b */
  if (!C.zf) goto L_1076e30b;
  /* 1076e291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e294 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076e297 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1076e29d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076e29f je 0x1076e30b */
  if (C.zf) goto L_1076e30b;
  /* 1076e2a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2a7 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1076e2a9 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e2ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076e2af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e2b3 jle 0x1076e30b */
  if ((C.zf||C.sf!=C.of)) goto L_1076e30b;
  /* 1076e2b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e2b8 push edx */
  push32((uint32_t)(EDX));
  /* 1076e2b9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2bc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076e2bf push ecx */
  push32((uint32_t)(ECX));
  /* 1076e2c0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1076e2c6 push eax */
  push32((uint32_t)(EAX));
  /* 1076e2c7 call 0x1076d1e0 */
  push32(0x1076e2ccu); f_1076d1e0();
  /* 1076e2cc add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e2cf cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e2d2 jne 0x1076e2f5 */
  if (!C.zf) goto L_1076e2f5;
  /* 1076e2d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076e2da and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1076e2e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076e2e2 je 0x1076e2f3 */
  if (C.zf) goto L_1076e2f3;
  /* 1076e2e4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2e7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076e2ea and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1076e2ed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2f0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1076e2f3:;
  /* 1076e2f3 jmp 0x1076e30b */
  goto L_1076e30b;
L_1076e2f5:;
  /* 1076e2f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e2f8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076e2fb or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1076e2fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e301 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1076e304 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076e30b:;
  /* 1076e30b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e30e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e311 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1076e314 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1076e316 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e319 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1076e320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e323 mov esp, ebp */
  ESP = (EBP);
  /* 1076e325 pop ebp */
  EBP = (pop32());
  /* 1076e326 ret  */
  ESPCHK(0x1076e270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e330 @ 0x1076e330 (15 bytes, 7 insns) */
void f_1076e330(void) {
  FTRACE(0x1076e330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e330 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e331 mov ebp, esp */
  EBP = (ESP);
  /* 1076e333 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076e335 call 0x1076e340 */
  push32(0x1076e33au); f_1076e340();
  /* 1076e33a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e33d pop ebp */
  EBP = (pop32());
  /* 1076e33e ret  */
  ESPCHK(0x1076e330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e340 @ 0x1076e340 (319 bytes, 94 insns) */
void f_1076e340(void) {
  FTRACE(0x1076e340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e340 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e341 mov ebp, esp */
  EBP = (ESP);
  /* 1076e343 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076e34d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076e354 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e356 call 0x10768340 */
  push32(0x1076e35bu); f_10768340();
  /* 1076e35b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e35e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076e365 jmp 0x1076e370 */
  goto L_1076e370;
L_1076e367:;
  /* 1076e367 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e36a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e36d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076e370:;
  /* 1076e370 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e373 cmp ecx, dword ptr [0x10791c40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10791c40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e379 jge 0x1076e463 */
  if ((C.sf==C.of)) goto L_1076e463;
  /* 1076e37f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e382 mov eax, dword ptr [0x107908e8] */
  EAX = (r32((uint32_t)(0x107908e8)));
  /* 1076e387 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e38b je 0x1076e45e */
  if (C.zf) goto L_1076e45e;
  /* 1076e391 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e394 mov edx, dword ptr [0x107908e8] */
  EDX = (r32((uint32_t)(0x107908e8)));
  /* 1076e39a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1076e39d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1076e3a0 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1076e3a6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076e3a8 je 0x1076e45e */
  if (C.zf) goto L_1076e45e;
  /* 1076e3ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e3b1 mov eax, dword ptr [0x107908e8] */
  EAX = (r32((uint32_t)(0x107908e8)));
  /* 1076e3b6 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1076e3b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e3ba mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e3bd push edx */
  push32((uint32_t)(EDX));
  /* 1076e3be call 0x1076d790 */
  push32(0x1076e3c3u); f_1076d790();
  /* 1076e3c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e3c6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e3c9 mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e3cf mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1076e3d2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076e3d5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1076e3da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e3dc je 0x1076e445 */
  if (C.zf) goto L_1076e445;
  /* 1076e3de cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e3e2 jne 0x1076e409 */
  if (!C.zf) goto L_1076e409;
  /* 1076e3e4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e3e7 mov edx, dword ptr [0x107908e8] */
  EDX = (r32((uint32_t)(0x107908e8)));
  /* 1076e3ed mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1076e3f0 push eax */
  push32((uint32_t)(EAX));
  /* 1076e3f1 call 0x1076e220 */
  push32(0x1076e3f6u); f_1076e220();
  /* 1076e3f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e3f9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e3fc je 0x1076e407 */
  if (C.zf) goto L_1076e407;
  /* 1076e3fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e401 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e404 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076e407:;
  /* 1076e407 jmp 0x1076e445 */
  goto L_1076e445;
L_1076e409:;
  /* 1076e409 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e40d jne 0x1076e445 */
  if (!C.zf) goto L_1076e445;
  /* 1076e40f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e412 mov eax, dword ptr [0x107908e8] */
  EAX = (r32((uint32_t)(0x107908e8)));
  /* 1076e417 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1076e41a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076e41d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1076e420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076e422 je 0x1076e445 */
  if (C.zf) goto L_1076e445;
  /* 1076e424 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e427 mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e42d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1076e430 push edx */
  push32((uint32_t)(EDX));
  /* 1076e431 call 0x1076e220 */
  push32(0x1076e436u); f_1076e220();
  /* 1076e436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e439 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e43c jne 0x1076e445 */
  if (!C.zf) goto L_1076e445;
  /* 1076e43e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1076e445:;
  /* 1076e445 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e448 mov ecx, dword ptr [0x107908e8] */
  ECX = (r32((uint32_t)(0x107908e8)));
  /* 1076e44e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1076e451 push edx */
  push32((uint32_t)(EDX));
  /* 1076e452 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e455 push eax */
  push32((uint32_t)(EAX));
  /* 1076e456 call 0x1076d800 */
  push32(0x1076e45bu); f_1076d800();
  /* 1076e45b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076e45e:;
  /* 1076e45e jmp 0x1076e367 */
  goto L_1076e367;
L_1076e463:;
  /* 1076e463 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e465 call 0x107683e0 */
  push32(0x1076e46au); f_107683e0();
  /* 1076e46a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e46d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e471 jne 0x1076e478 */
  if (!C.zf) goto L_1076e478;
  /* 1076e473 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e476 jmp 0x1076e47b */
  goto L_1076e47b;
L_1076e478:;
  /* 1076e478 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1076e47b:;
  /* 1076e47b mov esp, ebp */
  ESP = (EBP);
  /* 1076e47d pop ebp */
  EBP = (pop32());
  /* 1076e47e ret  */
  ESPCHK(0x1076e340u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1076e480 (15 bytes, 7 insns) */
void f_1076e480(void) {
  FTRACE(0x1076e480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e480 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e481 mov ebp, esp */
  EBP = (ESP);
  /* 1076e483 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e485 call 0x107638b0 */
  push32(0x1076e48au); f_107638b0();
  /* 1076e48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e48d pop ebp */
  EBP = (pop32());
  /* 1076e48e ret  */
  ESPCHK(0x1076e480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e490 @ 0x1076e490 (1007 bytes, 269 insns) */
void f_1076e490(void) {
  FTRACE(0x1076e490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e490 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e491 mov ebp, esp */
  EBP = (ESP);
  /* 1076e493 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e499 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e49d jl 0x1076e4a5 */
  if ((C.sf!=C.of)) goto L_1076e4a5;
  /* 1076e49f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e4a3 jle 0x1076e4ac */
  if ((C.zf||C.sf!=C.of)) goto L_1076e4ac;
L_1076e4a5:;
  /* 1076e4a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e4a7 jmp 0x1076e87b */
  goto L_1076e87b;
L_1076e4ac:;
  /* 1076e4ac push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076e4ae call 0x10768340 */
  push32(0x1076e4b3u); f_10768340();
  /* 1076e4b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e4b6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076e4bd mov eax, dword ptr [0x107908d4] */
  EAX = (r32((uint32_t)(0x107908d4)));
  /* 1076e4c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e4c5 mov dword ptr [0x107908d4], eax */
  w32((uint32_t)(0x107908d4), (EAX));
L_1076e4ca:;
  /* 1076e4ca cmp dword ptr [0x107908e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107908e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e4d1 je 0x1076e4dd */
  if (C.zf) goto L_1076e4dd;
  /* 1076e4d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076e4d5 call dword ptr [0x107932cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932cc))), 0x1076e4dbu);
  /* 1076e4db jmp 0x1076e4ca */
  goto L_1076e4ca;
L_1076e4dd:;
  /* 1076e4dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e4e1 je 0x1076e521 */
  if (C.zf) goto L_1076e521;
  /* 1076e4e3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e4e7 je 0x1076e501 */
  if (C.zf) goto L_1076e501;
  /* 1076e4e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e4ec push ecx */
  push32((uint32_t)(ECX));
  /* 1076e4ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e4f0 push edx */
  push32((uint32_t)(EDX));
  /* 1076e4f1 call 0x1076e880 */
  push32(0x1076e4f6u); f_1076e880();
  /* 1076e4f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e4f9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1076e4ff jmp 0x1076e513 */
  goto L_1076e513;
L_1076e501:;
  /* 1076e501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e504 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e507 mov ecx, dword ptr [eax + 0x1078f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1078f4dc)));
  /* 1076e50d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1076e513:;
  /* 1076e513 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1076e519 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1076e51c jmp 0x1076e85b */
  goto L_1076e85b;
L_1076e521:;
  /* 1076e521 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1076e528 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076e52f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e533 je 0x1076e853 */
  if (C.zf) goto L_1076e853;
  /* 1076e539 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e53c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076e53f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e542 jne 0x1076e764 */
  if (!C.zf) goto L_1076e764;
  /* 1076e548 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e54b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1076e54f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e552 jne 0x1076e764 */
  if (!C.zf) goto L_1076e764;
  /* 1076e558 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e55b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1076e55f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e562 jne 0x1076e764 */
  if (!C.zf) goto L_1076e764;
  /* 1076e568 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e56b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1076e571:;
  /* 1076e571 push 0x1078c1bc */
  push32((uint32_t)(0x1078c1bcu));
  /* 1076e576 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1076e57c push ecx */
  push32((uint32_t)(ECX));
  /* 1076e57d call 0x107706e0 */
  push32(0x1076e582u); f_107706e0();
  /* 1076e582 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e585 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1076e58b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e592 je 0x1076e5bd */
  if (C.zf) goto L_1076e5bd;
  /* 1076e594 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e59a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e5a0 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1076e5a6 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e5ad je 0x1076e5bd */
  if (C.zf) goto L_1076e5bd;
  /* 1076e5af mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e5b5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076e5b8 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e5bb jne 0x1076e5e3 */
  if (!C.zf) goto L_1076e5e3;
L_1076e5bd:;
  /* 1076e5bd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e5c1 je 0x1076e5dc */
  if (C.zf) goto L_1076e5dc;
  /* 1076e5c3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076e5c5 call 0x107683e0 */
  push32(0x1076e5cau); f_107683e0();
  /* 1076e5ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e5cd mov edx, dword ptr [0x107908d4] */
  EDX = (r32((uint32_t)(0x107908d4)));
  /* 1076e5d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e5d6 mov dword ptr [0x107908d4], edx */
  w32((uint32_t)(0x107908d4), (EDX));
L_1076e5dc:;
  /* 1076e5dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e5de jmp 0x1076e87b */
  goto L_1076e87b;
L_1076e5e3:;
  /* 1076e5e3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1076e5ea jmp 0x1076e5f5 */
  goto L_1076e5f5;
L_1076e5ec:;
  /* 1076e5ec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e5ef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e5f2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1076e5f5:;
  /* 1076e5f5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e5f9 jg 0x1076e643 */
  if ((!C.zf&&C.sf==C.of)) goto L_1076e643;
  /* 1076e5fb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1076e601 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e602 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1076e608 push edx */
  push32((uint32_t)(EDX));
  /* 1076e609 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e60c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e60f mov ecx, dword ptr [eax + 0x1078f4d8] */
  ECX = (r32((uint32_t)(EAX + 0x1078f4d8)));
  /* 1076e615 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e616 call 0x107706a0 */
  push32(0x1076e61bu); f_107706a0();
  /* 1076e61b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e61e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e620 jne 0x1076e641 */
  if (!C.zf) goto L_1076e641;
  /* 1076e622 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e625 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e628 mov eax, dword ptr [edx + 0x1078f4d8] */
  EAX = (r32((uint32_t)(EDX + 0x1078f4d8)));
  /* 1076e62e push eax */
  push32((uint32_t)(EAX));
  /* 1076e62f call 0x10767770 */
  push32(0x1076e634u); f_10767770();
  /* 1076e634 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e637 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e63d jne 0x1076e641 */
  if (!C.zf) goto L_1076e641;
  /* 1076e63f jmp 0x1076e643 */
  goto L_1076e643;
L_1076e641:;
  /* 1076e641 jmp 0x1076e5ec */
  goto L_1076e5ec;
L_1076e643:;
  /* 1076e643 push 0x1078c1b8 */
  push32((uint32_t)(0x1078c1b8u));
  /* 1076e648 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e64e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e651 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1076e657 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e65d push edx */
  push32((uint32_t)(EDX));
  /* 1076e65e call 0x10770660 */
  push32(0x1076e663u); f_10770660();
  /* 1076e663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e666 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1076e66c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e673 jne 0x1076e6a9 */
  if (!C.zf) goto L_1076e6a9;
  /* 1076e675 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e67b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076e67e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e681 je 0x1076e6a9 */
  if (C.zf) goto L_1076e6a9;
  /* 1076e683 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e687 je 0x1076e6a2 */
  if (C.zf) goto L_1076e6a2;
  /* 1076e689 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076e68b call 0x107683e0 */
  push32(0x1076e690u); f_107683e0();
  /* 1076e690 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e693 mov edx, dword ptr [0x107908d4] */
  EDX = (r32((uint32_t)(0x107908d4)));
  /* 1076e699 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e69c mov dword ptr [0x107908d4], edx */
  w32((uint32_t)(0x107908d4), (EDX));
L_1076e6a2:;
  /* 1076e6a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e6a4 jmp 0x1076e87b */
  goto L_1076e87b;
L_1076e6a9:;
  /* 1076e6a9 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e6ad jg 0x1076e6fa */
  if ((!C.zf&&C.sf==C.of)) goto L_1076e6fa;
  /* 1076e6af mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1076e6b5 push eax */
  push32((uint32_t)(EAX));
  /* 1076e6b6 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e6bc push ecx */
  push32((uint32_t)(ECX));
  /* 1076e6bd lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1076e6c3 push edx */
  push32((uint32_t)(EDX));
  /* 1076e6c4 call 0x10768160 */
  push32(0x1076e6c9u); f_10768160();
  /* 1076e6c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e6cc mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1076e6d2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1076e6da lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1076e6e0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e6e1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e6e4 push edx */
  push32((uint32_t)(EDX));
  /* 1076e6e5 call 0x1076e880 */
  push32(0x1076e6eau); f_1076e880();
  /* 1076e6ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e6ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e6ef je 0x1076e6fa */
  if (C.zf) goto L_1076e6fa;
  /* 1076e6f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e6f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e6f7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076e6fa:;
  /* 1076e6fa mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e700 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e706 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1076e70c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1076e712 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076e715 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e717 je 0x1076e728 */
  if (C.zf) goto L_1076e728;
  /* 1076e719 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1076e71f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e722 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1076e728:;
  /* 1076e728 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1076e72e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076e731 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e733 jne 0x1076e571 */
  if (!C.zf) goto L_1076e571;
  /* 1076e739 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e73d je 0x1076e74c */
  if (C.zf) goto L_1076e74c;
  /* 1076e73f call 0x1076ea20 */
  push32(0x1076e744u); f_1076ea20();
  /* 1076e744 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1076e74a jmp 0x1076e756 */
  goto L_1076e756;
L_1076e74c:;
  /* 1076e74c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1076e756:;
  /* 1076e756 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1076e75c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076e75f jmp 0x1076e851 */
  goto L_1076e851;
L_1076e764:;
  /* 1076e764 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e767 push edx */
  push32((uint32_t)(EDX));
  /* 1076e768 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076e76a push 0 */
  push32((uint32_t)(0x0u));
  /* 1076e76c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1076e772 push eax */
  push32((uint32_t)(EAX));
  /* 1076e773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e776 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e777 call 0x1076eb20 */
  push32(0x1076e77cu); f_1076eb20();
  /* 1076e77c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e77f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076e782 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e786 je 0x1076e851 */
  if (C.zf) goto L_1076e851;
  /* 1076e78c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1076e793 jmp 0x1076e79e */
  goto L_1076e79e;
L_1076e795:;
  /* 1076e795 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e798 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e79b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1076e79e:;
  /* 1076e79e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e7a2 jg 0x1076e800 */
  if ((!C.zf&&C.sf==C.of)) goto L_1076e800;
  /* 1076e7a4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e7a8 je 0x1076e7fe */
  if (C.zf) goto L_1076e7fe;
  /* 1076e7aa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e7ad imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e7b0 mov ecx, dword ptr [eax + 0x1078f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1078f4dc)));
  /* 1076e7b6 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e7b7 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1076e7bd push edx */
  push32((uint32_t)(EDX));
  /* 1076e7be call 0x107705d0 */
  push32(0x1076e7c3u); f_107705d0();
  /* 1076e7c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e7c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e7c8 je 0x1076e7f5 */
  if (C.zf) goto L_1076e7f5;
  /* 1076e7ca lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1076e7d0 push eax */
  push32((uint32_t)(EAX));
  /* 1076e7d1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1076e7d4 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e7d5 call 0x1076e880 */
  push32(0x1076e7dau); f_1076e880();
  /* 1076e7da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e7dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e7df je 0x1076e7ec */
  if (C.zf) goto L_1076e7ec;
  /* 1076e7e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e7e4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e7e7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1076e7ea jmp 0x1076e7f3 */
  goto L_1076e7f3;
L_1076e7ec:;
  /* 1076e7ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1076e7f3:;
  /* 1076e7f3 jmp 0x1076e7fe */
  goto L_1076e7fe;
L_1076e7f5:;
  /* 1076e7f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e7f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e7fb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1076e7fe:;
  /* 1076e7fe jmp 0x1076e795 */
  goto L_1076e795;
L_1076e800:;
  /* 1076e800 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e804 je 0x1076e82b */
  if (C.zf) goto L_1076e82b;
  /* 1076e806 call 0x1076ea20 */
  push32(0x1076e80bu); f_1076ea20();
  /* 1076e80b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076e80e push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e810 mov ecx, dword ptr [0x1078f4dc] */
  ECX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076e816 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e817 call 0x107653d0 */
  push32(0x1076e81cu); f_107653d0();
  /* 1076e81c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e81f mov dword ptr [0x1078f4dc], 0 */
  w32((uint32_t)(0x1078f4dc), (0x0u));
  /* 1076e829 jmp 0x1076e851 */
  goto L_1076e851;
L_1076e82b:;
  /* 1076e82b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e82f je 0x1076e83e */
  if (C.zf) goto L_1076e83e;
  /* 1076e831 call 0x1076ea20 */
  push32(0x1076e836u); f_1076ea20();
  /* 1076e836 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1076e83c jmp 0x1076e848 */
  goto L_1076e848;
L_1076e83e:;
  /* 1076e83e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1076e848:;
  /* 1076e848 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1076e84e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1076e851:;
  /* 1076e851 jmp 0x1076e85b */
  goto L_1076e85b;
L_1076e853:;
  /* 1076e853 call 0x1076ea20 */
  push32(0x1076e858u); f_1076ea20();
  /* 1076e858 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1076e85b:;
  /* 1076e85b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e85f je 0x1076e878 */
  if (C.zf) goto L_1076e878;
  /* 1076e861 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1076e863 call 0x107683e0 */
  push32(0x1076e868u); f_107683e0();
  /* 1076e868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e86b mov eax, dword ptr [0x107908d4] */
  EAX = (r32((uint32_t)(0x107908d4)));
  /* 1076e870 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e873 mov dword ptr [0x107908d4], eax */
  w32((uint32_t)(0x107908d4), (EAX));
L_1076e878:;
  /* 1076e878 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1076e87b:;
  /* 1076e87b mov esp, ebp */
  ESP = (EBP);
  /* 1076e87d pop ebp */
  EBP = (pop32());
  /* 1076e87e ret  */
  ESPCHK(0x1076e490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e880 @ 0x1076e880 (403 bytes, 117 insns) */
void f_1076e880(void) {
  FTRACE(0x1076e880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076e880 push ebp */
  push32((uint32_t)(EBP));
  /* 1076e881 mov ebp, esp */
  EBP = (ESP);
  /* 1076e883 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076e889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e88c push eax */
  push32((uint32_t)(EAX));
  /* 1076e88d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1076e893 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e894 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1076e89a push edx */
  push32((uint32_t)(EDX));
  /* 1076e89b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1076e8a1 push eax */
  push32((uint32_t)(EAX));
  /* 1076e8a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076e8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e8a6 call 0x1076eb20 */
  push32(0x1076e8abu); f_1076eb20();
  /* 1076e8ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e8ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e8b0 jne 0x1076e8b9 */
  if (!C.zf) goto L_1076e8b9;
  /* 1076e8b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e8b4 jmp 0x1076ea0f */
  goto L_1076ea0f;
L_1076e8b9:;
  /* 1076e8b9 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1076e8be push 0x1078c1c0 */
  push32((uint32_t)(0x1078c1c0u));
  /* 1076e8c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e8c5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1076e8cb push edx */
  push32((uint32_t)(EDX));
  /* 1076e8cc call 0x10767770 */
  push32(0x1076e8d1u); f_10767770();
  /* 1076e8d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e8d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e8d7 push eax */
  push32((uint32_t)(EAX));
  /* 1076e8d8 call 0x10764940 */
  push32(0x1076e8ddu); f_10764940();
  /* 1076e8dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e8e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1076e8e3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e8e7 jne 0x1076e8f0 */
  if (!C.zf) goto L_1076e8f0;
  /* 1076e8e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e8eb jmp 0x1076ea0f */
  goto L_1076ea0f;
L_1076e8f0:;
  /* 1076e8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e8f3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e8f6 mov ecx, dword ptr [eax + 0x1078f4dc] */
  ECX = (r32((uint32_t)(EAX + 0x1078f4dc)));
  /* 1076e8fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076e8ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e902 mov eax, dword ptr [edx*4 + 0x10790750] */
  EAX = (r32((uint32_t)(EDX*4 + 0x10790750)));
  /* 1076e909 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076e90c push 6 */
  push32((uint32_t)(0x6u));
  /* 1076e90e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e911 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e914 add ecx, 0x107907a0 */
  { uint32_t _a=(ECX),_b=(0x107907a0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e91a push ecx */
  push32((uint32_t)(ECX));
  /* 1076e91b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1076e91e push edx */
  push32((uint32_t)(EDX));
  /* 1076e91f call 0x1076b220 */
  push32(0x1076e924u); f_1076b220();
  /* 1076e924 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e927 mov eax, dword ptr [0x10790768] */
  EAX = (r32((uint32_t)(0x10790768)));
  /* 1076e92c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1076e92f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1076e935 push ecx */
  push32((uint32_t)(ECX));
  /* 1076e936 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e939 push edx */
  push32((uint32_t)(EDX));
  /* 1076e93a call 0x107678f0 */
  push32(0x1076e93fu); f_107678f0();
  /* 1076e93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e942 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e945 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e948 mov dword ptr [ecx + 0x1078f4dc], eax */
  w32((uint32_t)(ECX + 0x1078f4dc), (EAX));
  /* 1076e94e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1076e954 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1076e95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e95d mov dword ptr [eax*4 + 0x10790750], edx */
  w32((uint32_t)(EAX*4 + 0x10790750), (EDX));
  /* 1076e964 push 6 */
  push32((uint32_t)(0x6u));
  /* 1076e966 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1076e96c push ecx */
  push32((uint32_t)(ECX));
  /* 1076e96d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e970 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e973 add edx, 0x107907a0 */
  { uint32_t _a=(EDX),_b=(0x107907a0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e979 push edx */
  push32((uint32_t)(EDX));
  /* 1076e97a call 0x1076b220 */
  push32(0x1076e97fu); f_1076b220();
  /* 1076e97f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e982 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e986 jne 0x1076e993 */
  if (!C.zf) goto L_1076e993;
  /* 1076e988 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e98e mov dword ptr [0x10790768], eax */
  w32((uint32_t)(0x10790768), (EAX));
L_1076e993:;
  /* 1076e993 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e997 jne 0x1076e9a5 */
  if (!C.zf) goto L_1076e9a5;
  /* 1076e999 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1076e99f mov dword ptr [0x1079076c], ecx */
  w32((uint32_t)(0x1079076c), (ECX));
L_1076e9a5:;
  /* 1076e9a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e9a8 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e9ab call dword ptr [edx + 0x1078f4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x1078f4e0))), 0x1076e9b1u);
  /* 1076e9b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076e9b3 je 0x1076e9ec */
  if (C.zf) goto L_1076e9ec;
  /* 1076e9b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e9b8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076e9bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e9be mov dword ptr [eax + 0x1078f4dc], ecx */
  w32((uint32_t)(EAX + 0x1078f4dc), (ECX));
  /* 1076e9c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e9c6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076e9c9 push edx */
  push32((uint32_t)(EDX));
  /* 1076e9ca call 0x107653d0 */
  push32(0x1076e9cfu); f_107653d0();
  /* 1076e9cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076e9d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076e9d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076e9d8 mov dword ptr [eax*4 + 0x10790750], ecx */
  w32((uint32_t)(EAX*4 + 0x10790750), (ECX));
  /* 1076e9df mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1076e9e2 mov dword ptr [0x10790768], edx */
  w32((uint32_t)(0x10790768), (EDX));
  /* 1076e9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076e9ea jmp 0x1076ea0f */
  goto L_1076ea0f;
L_1076e9ec:;
  /* 1076e9ec cmp dword ptr [ebp - 0xc], 0x1078f3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1078f3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076e9f3 je 0x1076ea03 */
  if (C.zf) goto L_1076ea03;
  /* 1076e9f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076e9f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076e9fa push eax */
  push32((uint32_t)(EAX));
  /* 1076e9fb call 0x107653d0 */
  push32(0x1076ea00u); f_107653d0();
  /* 1076ea00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076ea03:;
  /* 1076ea03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ea06 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076ea09 mov eax, dword ptr [ecx + 0x1078f4dc] */
  EAX = (r32((uint32_t)(ECX + 0x1078f4dc)));
L_1076ea0f:;
  /* 1076ea0f mov esp, ebp */
  ESP = (EBP);
  /* 1076ea11 pop ebp */
  EBP = (pop32());
  /* 1076ea12 ret  */
  ESPCHK(0x1076e880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea20 @ 0x1076ea20 (256 bytes, 72 insns) */
void f_1076ea20(void) {
  FTRACE(0x1076ea20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ea20 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ea21 mov ebp, esp */
  EBP = (ESP);
  /* 1076ea23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ea26 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1076ea2d cmp dword ptr [0x1078f4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1078f4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ea34 jne 0x1076ea54 */
  if (!C.zf) goto L_1076ea54;
  /* 1076ea36 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1076ea3b push 0x1078c1c0 */
  push32((uint32_t)(0x1078c1c0u));
  /* 1076ea40 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076ea42 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1076ea47 call 0x10764940 */
  push32(0x1076ea4cu); f_10764940();
  /* 1076ea4c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ea4f mov dword ptr [0x1078f4dc], eax */
  w32((uint32_t)(0x1078f4dc), (EAX));
L_1076ea54:;
  /* 1076ea54 mov eax, dword ptr [0x1078f4dc] */
  EAX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076ea59 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1076ea5c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1076ea63 jmp 0x1076ea6e */
  goto L_1076ea6e;
L_1076ea65:;
  /* 1076ea65 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ea68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ea6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1076ea6e:;
  /* 1076ea6e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ea71 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076ea74 mov eax, dword ptr [edx + 0x1078f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1078f4dc)));
  /* 1076ea7a push eax */
  push32((uint32_t)(EAX));
  /* 1076ea7b push 0x1078c1cc */
  push32((uint32_t)(0x1078c1ccu));
  /* 1076ea80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ea83 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076ea86 mov edx, dword ptr [ecx + 0x1078f4d8] */
  EDX = (r32((uint32_t)(ECX + 0x1078f4d8)));
  /* 1076ea8c push edx */
  push32((uint32_t)(EDX));
  /* 1076ea8d push 3 */
  push32((uint32_t)(0x3u));
  /* 1076ea8f mov eax, dword ptr [0x1078f4dc] */
  EAX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076ea94 push eax */
  push32((uint32_t)(EAX));
  /* 1076ea95 call 0x1076ecc0 */
  push32(0x1076ea9au); f_1076ecc0();
  /* 1076ea9a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ea9d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eaa1 jge 0x1076eae9 */
  if ((C.sf==C.of)) goto L_1076eae9;
  /* 1076eaa3 push 0x1078c1b8 */
  push32((uint32_t)(0x1078c1b8u));
  /* 1076eaa8 mov ecx, dword ptr [0x1078f4dc] */
  ECX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076eaae push ecx */
  push32((uint32_t)(ECX));
  /* 1076eaaf call 0x10767900 */
  push32(0x1076eab4u); f_10767900();
  /* 1076eab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eab7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076eaba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eabd imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076eac0 mov eax, dword ptr [edx + 0x1078f4dc] */
  EAX = (r32((uint32_t)(EDX + 0x1078f4dc)));
  /* 1076eac6 push eax */
  push32((uint32_t)(EAX));
  /* 1076eac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076eaca imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076eacd mov edx, dword ptr [ecx + 0x1078f4dc] */
  EDX = (r32((uint32_t)(ECX + 0x1078f4dc)));
  /* 1076ead3 push edx */
  push32((uint32_t)(EDX));
  /* 1076ead4 call 0x107705d0 */
  push32(0x1076ead9u); f_107705d0();
  /* 1076ead9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eadc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076eade je 0x1076eae7 */
  if (C.zf) goto L_1076eae7;
  /* 1076eae0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1076eae7:;
  /* 1076eae7 jmp 0x1076eb17 */
  goto L_1076eb17;
L_1076eae9:;
  /* 1076eae9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eaed jne 0x1076eaf6 */
  if (!C.zf) goto L_1076eaf6;
  /* 1076eaef mov eax, dword ptr [0x1078f4dc] */
  EAX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076eaf4 jmp 0x1076eb1c */
  goto L_1076eb1c;
L_1076eaf6:;
  /* 1076eaf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076eaf8 mov eax, dword ptr [0x1078f4dc] */
  EAX = (r32((uint32_t)(0x1078f4dc)));
  /* 1076eafd push eax */
  push32((uint32_t)(EAX));
  /* 1076eafe call 0x107653d0 */
  push32(0x1076eb03u); f_107653d0();
  /* 1076eb03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eb06 mov dword ptr [0x1078f4dc], 0 */
  w32((uint32_t)(0x1078f4dc), (0x0u));
  /* 1076eb10 mov eax, dword ptr [0x1078f4f4] */
  EAX = (r32((uint32_t)(0x1078f4f4)));
  /* 1076eb15 jmp 0x1076eb1c */
  goto L_1076eb1c;
L_1076eb17:;
  /* 1076eb17 jmp 0x1076ea65 */
  goto L_1076ea65;
L_1076eb1c:;
  /* 1076eb1c mov esp, ebp */
  ESP = (EBP);
  /* 1076eb1e pop ebp */
  EBP = (pop32());
  /* 1076eb1f ret  */
  ESPCHK(0x1076ea20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x1076eb20 (388 bytes, 115 insns) */
void f_1076eb20(void) {
  FTRACE(0x1076eb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076eb20 push ebp */
  push32((uint32_t)(EBP));
  /* 1076eb21 mov ebp, esp */
  EBP = (ESP);
  /* 1076eb23 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076eb29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eb2d jne 0x1076eb36 */
  if (!C.zf) goto L_1076eb36;
  /* 1076eb2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076eb31 jmp 0x1076eca0 */
  goto L_1076eca0;
L_1076eb36:;
  /* 1076eb36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076eb39 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076eb3c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eb3f jne 0x1076eb90 */
  if (!C.zf) goto L_1076eb90;
  /* 1076eb41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076eb44 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1076eb48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076eb4a jne 0x1076eb90 */
  if (!C.zf) goto L_1076eb90;
  /* 1076eb4c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eb4f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1076eb52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eb55 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1076eb59 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eb5d je 0x1076eb79 */
  if (C.zf) goto L_1076eb79;
  /* 1076eb5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076eb62 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1076eb67 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076eb6a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1076eb70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076eb73 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1076eb79:;
  /* 1076eb79 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eb7d je 0x1076eb88 */
  if (C.zf) goto L_1076eb88;
  /* 1076eb7f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076eb82 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1076eb88:;
  /* 1076eb88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eb8b jmp 0x1076eca0 */
  goto L_1076eca0;
L_1076eb90:;
  /* 1076eb90 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076eb93 push ecx */
  push32((uint32_t)(ECX));
  /* 1076eb94 push 0x1078f450 */
  push32((uint32_t)(0x1078f450u));
  /* 1076eb99 call 0x107705d0 */
  push32(0x1076eb9eu); f_107705d0();
  /* 1076eb9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eba1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076eba3 je 0x1076ec58 */
  if (C.zf) goto L_1076ec58;
  /* 1076eba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ebac push edx */
  push32((uint32_t)(EDX));
  /* 1076ebad push 0x1078f3cc */
  push32((uint32_t)(0x1078f3ccu));
  /* 1076ebb2 call 0x107705d0 */
  push32(0x1076ebb7u); f_107705d0();
  /* 1076ebb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ebba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ebbc je 0x1076ec58 */
  if (C.zf) goto L_1076ec58;
  /* 1076ebc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ebc5 push eax */
  push32((uint32_t)(EAX));
  /* 1076ebc6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1076ebcc push ecx */
  push32((uint32_t)(ECX));
  /* 1076ebcd call 0x1076ed10 */
  push32(0x1076ebd2u); f_1076ed10();
  /* 1076ebd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ebd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ebd7 je 0x1076ebe0 */
  if (C.zf) goto L_1076ebe0;
  /* 1076ebd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ebdb jmp 0x1076eca0 */
  goto L_1076eca0;
L_1076ebe0:;
  /* 1076ebe0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1076ebe6 push edx */
  push32((uint32_t)(EDX));
  /* 1076ebe7 push 0x10790778 */
  push32((uint32_t)(0x10790778u));
  /* 1076ebec lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1076ebf2 push eax */
  push32((uint32_t)(EAX));
  /* 1076ebf3 call 0x10770720 */
  push32(0x1076ebf8u); f_10770720();
  /* 1076ebf8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ebfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ebfd jne 0x1076ec06 */
  if (!C.zf) goto L_1076ec06;
  /* 1076ebff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ec01 jmp 0x1076eca0 */
  goto L_1076eca0;
L_1076ec06:;
  /* 1076ec06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ec08 mov cx, word ptr [0x1079077c] */
  CX = (r16((uint32_t)(0x1079077c)));
  /* 1076ec0f mov dword ptr [0x10790780], ecx */
  w32((uint32_t)(0x10790780), (ECX));
  /* 1076ec15 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1076ec1b push edx */
  push32((uint32_t)(EDX));
  /* 1076ec1c push 0x1078f450 */
  push32((uint32_t)(0x1078f450u));
  /* 1076ec21 call 0x1076ee70 */
  push32(0x1076ec26u); f_1076ee70();
  /* 1076ec26 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ec29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ec2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076ec2f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076ec31 je 0x1076ec46 */
  if (C.zf) goto L_1076ec46;
  /* 1076ec33 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ec36 push edx */
  push32((uint32_t)(EDX));
  /* 1076ec37 push 0x1078f3cc */
  push32((uint32_t)(0x1078f3ccu));
  /* 1076ec3c call 0x107678f0 */
  push32(0x1076ec41u); f_107678f0();
  /* 1076ec41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ec44 jmp 0x1076ec58 */
  goto L_1076ec58;
L_1076ec46:;
  /* 1076ec46 push 0x1078f450 */
  push32((uint32_t)(0x1078f450u));
  /* 1076ec4b push 0x1078f3cc */
  push32((uint32_t)(0x1078f3ccu));
  /* 1076ec50 call 0x107678f0 */
  push32(0x1076ec55u); f_107678f0();
  /* 1076ec55 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076ec58:;
  /* 1076ec58 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ec5c je 0x1076ec71 */
  if (C.zf) goto L_1076ec71;
  /* 1076ec5e push 6 */
  push32((uint32_t)(0x6u));
  /* 1076ec60 push 0x10790778 */
  push32((uint32_t)(0x10790778u));
  /* 1076ec65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1076ec68 push eax */
  push32((uint32_t)(EAX));
  /* 1076ec69 call 0x1076b220 */
  push32(0x1076ec6eu); f_1076b220();
  /* 1076ec6e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076ec71:;
  /* 1076ec71 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ec75 je 0x1076ec8a */
  if (C.zf) goto L_1076ec8a;
  /* 1076ec77 push 4 */
  push32((uint32_t)(0x4u));
  /* 1076ec79 push 0x10790780 */
  push32((uint32_t)(0x10790780u));
  /* 1076ec7e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1076ec81 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ec82 call 0x1076b220 */
  push32(0x1076ec87u); f_1076b220();
  /* 1076ec87 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076ec8a:;
  /* 1076ec8a push 0x1078f450 */
  push32((uint32_t)(0x1078f450u));
  /* 1076ec8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ec92 push edx */
  push32((uint32_t)(EDX));
  /* 1076ec93 call 0x107678f0 */
  push32(0x1076ec98u); f_107678f0();
  /* 1076ec98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ec9b mov eax, 0x1078f450 */
  EAX = (0x1078f450u);
L_1076eca0:;
  /* 1076eca0 mov esp, ebp */
  ESP = (EBP);
  /* 1076eca2 pop ebp */
  EBP = (pop32());
  /* 1076eca3 ret  */
  ESPCHK(0x1076eb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecb0 @ 0x1076ecb0 (7 bytes, 5 insns) */
void f_1076ecb0(void) {
  FTRACE(0x1076ecb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ecb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ecb1 mov ebp, esp */
  EBP = (ESP);
  /* 1076ecb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ecb5 pop ebp */
  EBP = (pop32());
  /* 1076ecb6 ret  */
  ESPCHK(0x1076ecb0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1076ecc0 (79 bytes, 28 insns) */
void f_1076ecc0(void) {
  FTRACE(0x1076ecc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ecc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ecc1 mov ebp, esp */
  EBP = (ESP);
  /* 1076ecc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ecc6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1076ecc9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076eccc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076ecd3 jmp 0x1076ecde */
  goto L_1076ecde;
L_1076ecd5:;
  /* 1076ecd5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ecd8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ecdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1076ecde:;
  /* 1076ecde mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ece1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ece4 jge 0x1076ed04 */
  if ((C.sf==C.of)) goto L_1076ed04;
  /* 1076ece6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ece9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ecec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076ecef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ecf2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1076ecf5 push edx */
  push32((uint32_t)(EDX));
  /* 1076ecf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ecf9 push eax */
  push32((uint32_t)(EAX));
  /* 1076ecfa call 0x10767900 */
  push32(0x1076ecffu); f_10767900();
  /* 1076ecff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed02 jmp 0x1076ecd5 */
  goto L_1076ecd5;
L_1076ed04:;
  /* 1076ed04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ed0b mov esp, ebp */
  ESP = (EBP);
  /* 1076ed0d pop ebp */
  EBP = (pop32());
  /* 1076ed0e ret  */
  ESPCHK(0x1076ecc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed10 @ 0x1076ed10 (349 bytes, 122 insns) */
void f_1076ed10(void) {
  FTRACE(0x1076ed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ed10 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ed11 mov ebp, esp */
  EBP = (ESP);
  /* 1076ed13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ed16 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1076ed1b push 0 */
  push32((uint32_t)(0x0u));
  /* 1076ed1d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ed20 push eax */
  push32((uint32_t)(EAX));
  /* 1076ed21 call 0x107686b0 */
  push32(0x1076ed26u); f_107686b0();
  /* 1076ed26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ed2c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076ed2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076ed31 jne 0x1076ed3a */
  if (!C.zf) goto L_1076ed3a;
  /* 1076ed33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ed35 jmp 0x1076ee69 */
  goto L_1076ee69;
L_1076ed3a:;
  /* 1076ed3a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ed3d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076ed40 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ed43 jne 0x1076ed70 */
  if (!C.zf) goto L_1076ed70;
  /* 1076ed45 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ed48 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1076ed4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ed4e je 0x1076ed70 */
  if (C.zf) goto L_1076ed70;
  /* 1076ed50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ed53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed56 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ed57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ed5a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed60 push edx */
  push32((uint32_t)(EDX));
  /* 1076ed61 call 0x107678f0 */
  push32(0x1076ed66u); f_107678f0();
  /* 1076ed66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ed6b jmp 0x1076ee69 */
  goto L_1076ee69;
L_1076ed70:;
  /* 1076ed70 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1076ed77 jmp 0x1076ed82 */
  goto L_1076ed82;
L_1076ed79:;
  /* 1076ed79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ed7c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed7f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076ed82:;
  /* 1076ed82 push 0x1078c1d0 */
  push32((uint32_t)(0x1078c1d0u));
  /* 1076ed87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ed8a push ecx */
  push32((uint32_t)(ECX));
  /* 1076ed8b call 0x10770660 */
  push32(0x1076ed90u); f_10770660();
  /* 1076ed90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ed93 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1076ed96 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ed9a jne 0x1076eda4 */
  if (!C.zf) goto L_1076eda4;
  /* 1076ed9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076ed9f jmp 0x1076ee69 */
  goto L_1076ee69;
L_1076eda4:;
  /* 1076eda4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eda7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076edaa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1076edac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1076edaf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076edb3 jne 0x1076edda */
  if (!C.zf) goto L_1076edda;
  /* 1076edb5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076edb9 jge 0x1076edda */
  if ((C.sf==C.of)) goto L_1076edda;
  /* 1076edbb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076edbf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076edc2 je 0x1076edda */
  if (C.zf) goto L_1076edda;
  /* 1076edc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076edc7 push edx */
  push32((uint32_t)(EDX));
  /* 1076edc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076edcb push eax */
  push32((uint32_t)(EAX));
  /* 1076edcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076edcf push ecx */
  push32((uint32_t)(ECX));
  /* 1076edd0 call 0x10768160 */
  push32(0x1076edd5u); f_10768160();
  /* 1076edd5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076edd8 jmp 0x1076ee40 */
  goto L_1076ee40;
L_1076edda:;
  /* 1076edda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076edde jne 0x1076ee08 */
  if (!C.zf) goto L_1076ee08;
  /* 1076ede0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ede4 jge 0x1076ee08 */
  if ((C.sf==C.of)) goto L_1076ee08;
  /* 1076ede6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076edea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eded je 0x1076ee08 */
  if (C.zf) goto L_1076ee08;
  /* 1076edef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076edf2 push eax */
  push32((uint32_t)(EAX));
  /* 1076edf3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076edf6 push ecx */
  push32((uint32_t)(ECX));
  /* 1076edf7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076edfa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076edfd push edx */
  push32((uint32_t)(EDX));
  /* 1076edfe call 0x10768160 */
  push32(0x1076ee03u); f_10768160();
  /* 1076ee03 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ee06 jmp 0x1076ee40 */
  goto L_1076ee40;
L_1076ee08:;
  /* 1076ee08 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ee0c jne 0x1076ee3b */
  if (!C.zf) goto L_1076ee3b;
  /* 1076ee0e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076ee12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ee14 je 0x1076ee1f */
  if (C.zf) goto L_1076ee1f;
  /* 1076ee16 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076ee1a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ee1d jne 0x1076ee3b */
  if (!C.zf) goto L_1076ee3b;
L_1076ee1f:;
  /* 1076ee1f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ee22 push edx */
  push32((uint32_t)(EDX));
  /* 1076ee23 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ee26 push eax */
  push32((uint32_t)(EAX));
  /* 1076ee27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ee2a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ee30 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ee31 call 0x10768160 */
  push32(0x1076ee36u); f_10768160();
  /* 1076ee36 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ee39 jmp 0x1076ee40 */
  goto L_1076ee40;
L_1076ee3b:;
  /* 1076ee3b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076ee3e jmp 0x1076ee69 */
  goto L_1076ee69;
L_1076ee40:;
  /* 1076ee40 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076ee44 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ee47 jne 0x1076ee4b */
  if (!C.zf) goto L_1076ee4b;
  /* 1076ee49 jmp 0x1076ee67 */
  goto L_1076ee67;
L_1076ee4b:;
  /* 1076ee4b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1076ee4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ee51 jne 0x1076ee55 */
  if (!C.zf) goto L_1076ee55;
  /* 1076ee53 jmp 0x1076ee67 */
  goto L_1076ee67;
L_1076ee55:;
  /* 1076ee55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076ee58 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ee5b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1076ee5f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1076ee62 jmp 0x1076ed79 */
  goto L_1076ed79;
L_1076ee67:;
  /* 1076ee67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076ee69:;
  /* 1076ee69 mov esp, ebp */
  ESP = (EBP);
  /* 1076ee6b pop ebp */
  EBP = (pop32());
  /* 1076ee6c ret  */
  ESPCHK(0x1076ed10u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1076ee70 (101 bytes, 36 insns) */
void f_1076ee70(void) {
  FTRACE(0x1076ee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ee70 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ee71 mov ebp, esp */
  EBP = (ESP);
  /* 1076ee73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ee76 push eax */
  push32((uint32_t)(EAX));
  /* 1076ee77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ee7a push ecx */
  push32((uint32_t)(ECX));
  /* 1076ee7b call 0x107678f0 */
  push32(0x1076ee80u); f_107678f0();
  /* 1076ee80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ee83 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ee86 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1076ee8a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ee8c je 0x1076eea8 */
  if (C.zf) goto L_1076eea8;
  /* 1076ee8e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076ee91 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ee94 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ee95 push 0x1078c1d8 */
  push32((uint32_t)(0x1078c1d8u));
  /* 1076ee9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076ee9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ee9f push edx */
  push32((uint32_t)(EDX));
  /* 1076eea0 call 0x1076ecc0 */
  push32(0x1076eea5u); f_1076ecc0();
  /* 1076eea5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076eea8:;
  /* 1076eea8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eeab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1076eeb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076eeb4 je 0x1076eed3 */
  if (C.zf) goto L_1076eed3;
  /* 1076eeb6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1076eeb9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076eebf push edx */
  push32((uint32_t)(EDX));
  /* 1076eec0 push 0x1078c1d4 */
  push32((uint32_t)(0x1078c1d4u));
  /* 1076eec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076eec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076eeca push eax */
  push32((uint32_t)(EAX));
  /* 1076eecb call 0x1076ecc0 */
  push32(0x1076eed0u); f_1076ecc0();
  /* 1076eed0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076eed3:;
  /* 1076eed3 pop ebp */
  EBP = (pop32());
  /* 1076eed4 ret  */
  ESPCHK(0x1076ee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eee0 @ 0x1076eee0 (130 bytes, 50 insns) */
void f_1076eee0(void) {
  FTRACE(0x1076eee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076eee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076eee1 mov ebp, esp */
  EBP = (ESP);
  /* 1076eee3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076eee4 push ebx */
  push32((uint32_t)(EBX));
  /* 1076eee5 push esi */
  push32((uint32_t)(ESI));
  /* 1076eee6 push edi */
  push32((uint32_t)(EDI));
  /* 1076eee7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076eeee:;
  /* 1076eeee cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076eef2 jne 0x1076ef12 */
  if (!C.zf) goto L_1076ef12;
  /* 1076eef4 push 0x1078c1e8 */
  push32((uint32_t)(0x1078c1e8u));
  /* 1076eef9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076eefb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1076eefd push 0x1078c1dc */
  push32((uint32_t)(0x1078c1dcu));
  /* 1076ef02 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076ef04 call 0x10763a00 */
  push32(0x1076ef09u); f_10763a00();
  /* 1076ef09 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ef0c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ef0f jne 0x1076ef12 */
  if (!C.zf) goto L_1076ef12;
  /* 1076ef11 int3  */
  x86_unimpl("int3 @ 0x1076ef11");
L_1076ef12:;
  /* 1076ef12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076ef14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076ef16 jne 0x1076eeee */
  if (!C.zf) goto L_1076eeee;
  /* 1076ef18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef1b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076ef1e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1076ef21 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1076ef23 je 0x1076ef31 */
  if (C.zf) goto L_1076ef31;
  /* 1076ef25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef28 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1076ef2f jmp 0x1076ef58 */
  goto L_1076ef58;
L_1076ef31:;
  /* 1076ef31 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef34 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ef35 call 0x1076d750 */
  push32(0x1076ef3au); f_1076d750();
  /* 1076ef3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ef3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef40 push edx */
  push32((uint32_t)(EDX));
  /* 1076ef41 call 0x1076ef70 */
  push32(0x1076ef46u); f_1076ef70();
  /* 1076ef46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ef49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076ef4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef4f push eax */
  push32((uint32_t)(EAX));
  /* 1076ef50 call 0x1076d7c0 */
  push32(0x1076ef55u); f_1076d7c0();
  /* 1076ef55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076ef58:;
  /* 1076ef58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ef5b pop edi */
  EDI = (pop32());
  /* 1076ef5c pop esi */
  ESI = (pop32());
  /* 1076ef5d pop ebx */
  EBX = (pop32());
  /* 1076ef5e mov esp, ebp */
  ESP = (EBP);
  /* 1076ef60 pop ebp */
  EBP = (pop32());
  /* 1076ef61 ret  */
  ESPCHK(0x1076eee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x1076ef70 (190 bytes, 67 insns) */
void f_1076ef70(void) {
  FTRACE(0x1076ef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076ef70 push ebp */
  push32((uint32_t)(EBP));
  /* 1076ef71 mov ebp, esp */
  EBP = (ESP);
  /* 1076ef73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076ef76 push ebx */
  push32((uint32_t)(EBX));
  /* 1076ef77 push esi */
  push32((uint32_t)(ESI));
  /* 1076ef78 push edi */
  push32((uint32_t)(EDI));
  /* 1076ef79 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1076ef80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ef83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1076ef86:;
  /* 1076ef86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ef8a jne 0x1076efaa */
  if (!C.zf) goto L_1076efaa;
  /* 1076ef8c push 0x1078c088 */
  push32((uint32_t)(0x1078c088u));
  /* 1076ef91 push 0 */
  push32((uint32_t)(0x0u));
  /* 1076ef93 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1076ef95 push 0x1078c1dc */
  push32((uint32_t)(0x1078c1dcu));
  /* 1076ef9a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076ef9c call 0x10763a00 */
  push32(0x1076efa1u); f_10763a00();
  /* 1076efa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076efa4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076efa7 jne 0x1076efaa */
  if (!C.zf) goto L_1076efaa;
  /* 1076efa9 int3  */
  x86_unimpl("int3 @ 0x1076efa9");
L_1076efaa:;
  /* 1076efaa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076efac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076efae jne 0x1076ef86 */
  if (!C.zf) goto L_1076ef86;
  /* 1076efb0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076efb3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1076efb6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1076efbb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076efbd je 0x1076f01a */
  if (C.zf) goto L_1076f01a;
  /* 1076efbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076efc2 push ecx */
  push32((uint32_t)(ECX));
  /* 1076efc3 call 0x1076e270 */
  push32(0x1076efc8u); f_1076e270();
  /* 1076efc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076efcb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076efce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076efd1 push edx */
  push32((uint32_t)(EDX));
  /* 1076efd2 call 0x107715f0 */
  push32(0x1076efd7u); f_107715f0();
  /* 1076efd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076efda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076efdd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076efe0 push ecx */
  push32((uint32_t)(ECX));
  /* 1076efe1 call 0x107714c0 */
  push32(0x1076efe6u); f_107714c0();
  /* 1076efe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076efe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076efeb jge 0x1076eff6 */
  if ((C.sf==C.of)) goto L_1076eff6;
  /* 1076efed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1076eff4 jmp 0x1076f01a */
  goto L_1076f01a;
L_1076eff6:;
  /* 1076eff6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076eff9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076effd je 0x1076f01a */
  if (C.zf) goto L_1076f01a;
  /* 1076efff push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f001 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f004 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1076f007 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f008 call 0x107653d0 */
  push32(0x1076f00du); f_107653d0();
  /* 1076f00d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f010 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f013 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1076f01a:;
  /* 1076f01a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f01d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1076f024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f027 pop edi */
  EDI = (pop32());
  /* 1076f028 pop esi */
  ESI = (pop32());
  /* 1076f029 pop ebx */
  EBX = (pop32());
  /* 1076f02a mov esp, ebp */
  ESP = (EBP);
  /* 1076f02c pop ebp */
  EBP = (pop32());
  /* 1076f02d ret  */
  ESPCHK(0x1076ef70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f030 @ 0x1076f030 (210 bytes, 63 insns) */
void f_1076f030(void) {
  FTRACE(0x1076f030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076f030 push ebp */
  push32((uint32_t)(EBP));
  /* 1076f031 mov ebp, esp */
  EBP = (ESP);
  /* 1076f033 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f037 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f03d jae 0x1076f061 */
  if (!C.cf) goto L_1076f061;
  /* 1076f03f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f042 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1076f045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f048 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1076f04b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076f04e mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 1076f055 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1076f05a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1076f05d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076f05f jne 0x1076f074 */
  if (!C.zf) goto L_1076f074;
L_1076f061:;
  /* 1076f061 call 0x1076c810 */
  push32(0x1076f066u); f_1076c810();
  /* 1076f066 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076f06c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076f06f jmp 0x1076f0fe */
  goto L_1076f0fe;
L_1076f074:;
  /* 1076f074 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f077 push edx */
  push32((uint32_t)(EDX));
  /* 1076f078 call 0x1076e030 */
  push32(0x1076f07du); f_1076e030();
  /* 1076f07d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f083 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1076f086 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f089 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1076f08c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1076f08f mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 1076f096 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1076f09b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1076f09e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076f0a0 je 0x1076f0dd */
  if (C.zf) goto L_1076f0dd;
  /* 1076f0a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f0a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f0a6 call 0x1076deb0 */
  push32(0x1076f0abu); f_1076deb0();
  /* 1076f0ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f0ae push eax */
  push32((uint32_t)(EAX));
  /* 1076f0af call dword ptr [0x107932c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932c8))), 0x1076f0b5u);
  /* 1076f0b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076f0b7 jne 0x1076f0c4 */
  if (!C.zf) goto L_1076f0c4;
  /* 1076f0b9 call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x1076f0bfu);
  /* 1076f0bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076f0c2 jmp 0x1076f0cb */
  goto L_1076f0cb;
L_1076f0c4:;
  /* 1076f0c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1076f0cb:;
  /* 1076f0cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f0cf jne 0x1076f0d3 */
  if (!C.zf) goto L_1076f0d3;
  /* 1076f0d1 jmp 0x1076f0ef */
  goto L_1076f0ef;
L_1076f0d3:;
  /* 1076f0d3 call 0x1076c820 */
  push32(0x1076f0d8u); f_1076c820();
  /* 1076f0d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f0db mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1076f0dd:;
  /* 1076f0dd call 0x1076c810 */
  push32(0x1076f0e2u); f_1076c810();
  /* 1076f0e2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1076f0e8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1076f0ef:;
  /* 1076f0ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f0f2 push eax */
  push32((uint32_t)(EAX));
  /* 1076f0f3 call 0x1076e0c0 */
  push32(0x1076f0f8u); f_1076e0c0();
  /* 1076f0f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f0fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1076f0fe:;
  /* 1076f0fe mov esp, ebp */
  ESP = (EBP);
  /* 1076f100 pop ebp */
  EBP = (pop32());
  /* 1076f101 ret  */
  ESPCHK(0x1076f030u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1076f110 (219 bytes, 64 insns) */
void f_1076f110(void) {
  FTRACE(0x1076f110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076f110 push ebp */
  push32((uint32_t)(EBP));
  /* 1076f111 mov ebp, esp */
  EBP = (ESP);
  /* 1076f113 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f114 cmp dword ptr [0x10790764], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790764))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f11b je 0x1076f1b1 */
  if (C.zf) goto L_1076f1b1;
  /* 1076f121 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1076f123 push 0x1078c1f8 */
  push32((uint32_t)(0x1078c1f8u));
  /* 1076f128 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f12a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1076f12f push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f131 call 0x10764d50 */
  push32(0x1076f136u); f_10764d50();
  /* 1076f136 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f139 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076f13c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f140 jne 0x1076f14c */
  if (!C.zf) goto L_1076f14c;
  /* 1076f142 mov eax, 1 */
  EAX = (0x1u);
  /* 1076f147 jmp 0x1076f1e7 */
  goto L_1076f1e7;
L_1076f14c:;
  /* 1076f14c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f14f push eax */
  push32((uint32_t)(EAX));
  /* 1076f150 call 0x1076f1f0 */
  push32(0x1076f155u); f_1076f1f0();
  /* 1076f155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f158 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076f15a je 0x1076f17d */
  if (C.zf) goto L_1076f17d;
  /* 1076f15c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f15f push ecx */
  push32((uint32_t)(ECX));
  /* 1076f160 call 0x1076f780 */
  push32(0x1076f165u); f_1076f780();
  /* 1076f165 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f168 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f16a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f16d push edx */
  push32((uint32_t)(EDX));
  /* 1076f16e call 0x107653d0 */
  push32(0x1076f173u); f_107653d0();
  /* 1076f173 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f176 mov eax, 1 */
  EAX = (0x1u);
  /* 1076f17b jmp 0x1076f1e7 */
  goto L_1076f1e7;
L_1076f17d:;
  /* 1076f17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f180 mov dword ptr [0x1078fc98], eax */
  w32((uint32_t)(0x1078fc98), (EAX));
  /* 1076f185 mov ecx, dword ptr [0x10790784] */
  ECX = (r32((uint32_t)(0x10790784)));
  /* 1076f18b push ecx */
  push32((uint32_t)(ECX));
  /* 1076f18c call 0x1076f780 */
  push32(0x1076f191u); f_1076f780();
  /* 1076f191 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f194 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f196 mov edx, dword ptr [0x10790784] */
  EDX = (r32((uint32_t)(0x10790784)));
  /* 1076f19c push edx */
  push32((uint32_t)(EDX));
  /* 1076f19d call 0x107653d0 */
  push32(0x1076f1a2u); f_107653d0();
  /* 1076f1a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f1a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f1a8 mov dword ptr [0x10790784], eax */
  w32((uint32_t)(0x10790784), (EAX));
  /* 1076f1ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076f1af jmp 0x1076f1e7 */
  goto L_1076f1e7;
L_1076f1b1:;
  /* 1076f1b1 mov dword ptr [0x1078fc98], 0x1078fca0 */
  w32((uint32_t)(0x1078fc98), (0x1078fca0u));
  /* 1076f1bb mov ecx, dword ptr [0x10790784] */
  ECX = (r32((uint32_t)(0x10790784)));
  /* 1076f1c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f1c2 call 0x1076f780 */
  push32(0x1076f1c7u); f_1076f780();
  /* 1076f1c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f1ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f1cc mov edx, dword ptr [0x10790784] */
  EDX = (r32((uint32_t)(0x10790784)));
  /* 1076f1d2 push edx */
  push32((uint32_t)(EDX));
  /* 1076f1d3 call 0x107653d0 */
  push32(0x1076f1d8u); f_107653d0();
  /* 1076f1d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f1db mov dword ptr [0x10790784], 0 */
  w32((uint32_t)(0x10790784), (0x0u));
  /* 1076f1e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076f1e7:;
  /* 1076f1e7 mov esp, ebp */
  ESP = (EBP);
  /* 1076f1e9 pop ebp */
  EBP = (pop32());
  /* 1076f1ea ret  */
  ESPCHK(0x1076f110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x1076f1f0 (1423 bytes, 533 insns) */
void f_1076f1f0(void) {
  FTRACE(0x1076f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 1076f1f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076f1f6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1076f1fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076f1ff mov ax, word ptr [0x107907be] */
  AX = (r16((uint32_t)(0x107907be)));
  /* 1076f205 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076f208 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f20a mov cx, word ptr [0x107907c0] */
  CX = (r16((uint32_t)(0x107907c0)));
  /* 1076f211 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076f214 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f218 jne 0x1076f222 */
  if (!C.zf) goto L_1076f222;
  /* 1076f21a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076f21d jmp 0x1076f77b */
  goto L_1076f77b;
L_1076f222:;
  /* 1076f222 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f225 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f228 push edx */
  push32((uint32_t)(EDX));
  /* 1076f229 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1076f22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f22e push eax */
  push32((uint32_t)(EAX));
  /* 1076f22f push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f231 call 0x10772b00 */
  push32(0x1076f236u); f_10772b00();
  /* 1076f236 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f239 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f23c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f23e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f241 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f244 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f247 push edx */
  push32((uint32_t)(EDX));
  /* 1076f248 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1076f24a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f24d push eax */
  push32((uint32_t)(EAX));
  /* 1076f24e push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f250 call 0x10772b00 */
  push32(0x1076f255u); f_10772b00();
  /* 1076f255 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f258 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f25b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f25d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f260 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f263 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f266 push edx */
  push32((uint32_t)(EDX));
  /* 1076f267 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1076f269 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f26c push eax */
  push32((uint32_t)(EAX));
  /* 1076f26d push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f26f call 0x10772b00 */
  push32(0x1076f274u); f_10772b00();
  /* 1076f274 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f277 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f27a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f27c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f27f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f282 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f285 push edx */
  push32((uint32_t)(EDX));
  /* 1076f286 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1076f288 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f28b push eax */
  push32((uint32_t)(EAX));
  /* 1076f28c push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f28e call 0x10772b00 */
  push32(0x1076f293u); f_10772b00();
  /* 1076f293 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f296 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f299 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f29b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f29e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f2a1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2a4 push edx */
  push32((uint32_t)(EDX));
  /* 1076f2a5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1076f2a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f2aa push eax */
  push32((uint32_t)(EAX));
  /* 1076f2ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f2ad call 0x10772b00 */
  push32(0x1076f2b2u); f_10772b00();
  /* 1076f2b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f2b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f2ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f2bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f2c0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2c3 push edx */
  push32((uint32_t)(EDX));
  /* 1076f2c4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1076f2c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f2c9 push eax */
  push32((uint32_t)(EAX));
  /* 1076f2ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f2cc call 0x10772b00 */
  push32(0x1076f2d1u); f_10772b00();
  /* 1076f2d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f2d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f2d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f2dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f2df push edx */
  push32((uint32_t)(EDX));
  /* 1076f2e0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1076f2e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f2e5 push eax */
  push32((uint32_t)(EAX));
  /* 1076f2e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f2e8 call 0x10772b00 */
  push32(0x1076f2edu); f_10772b00();
  /* 1076f2ed add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f2f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f2f5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f2f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f2fb add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f2fe push edx */
  push32((uint32_t)(EDX));
  /* 1076f2ff push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1076f301 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f304 push eax */
  push32((uint32_t)(EAX));
  /* 1076f305 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f307 call 0x10772b00 */
  push32(0x1076f30cu); f_10772b00();
  /* 1076f30c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f30f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f312 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f314 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f317 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f31a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f31d push edx */
  push32((uint32_t)(EDX));
  /* 1076f31e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1076f320 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f323 push eax */
  push32((uint32_t)(EAX));
  /* 1076f324 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f326 call 0x10772b00 */
  push32(0x1076f32bu); f_10772b00();
  /* 1076f32b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f32e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f331 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f333 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f336 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f339 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f33c push edx */
  push32((uint32_t)(EDX));
  /* 1076f33d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1076f33f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f342 push eax */
  push32((uint32_t)(EAX));
  /* 1076f343 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f345 call 0x10772b00 */
  push32(0x1076f34au); f_10772b00();
  /* 1076f34a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f34d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f350 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f352 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f358 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f35b push edx */
  push32((uint32_t)(EDX));
  /* 1076f35c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1076f35e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f361 push eax */
  push32((uint32_t)(EAX));
  /* 1076f362 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f364 call 0x10772b00 */
  push32(0x1076f369u); f_10772b00();
  /* 1076f369 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f36c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f36f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f371 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f374 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f377 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f37a push edx */
  push32((uint32_t)(EDX));
  /* 1076f37b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1076f37d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f380 push eax */
  push32((uint32_t)(EAX));
  /* 1076f381 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f383 call 0x10772b00 */
  push32(0x1076f388u); f_10772b00();
  /* 1076f388 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f38b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f38e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f396 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f399 push edx */
  push32((uint32_t)(EDX));
  /* 1076f39a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1076f39c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f39f push eax */
  push32((uint32_t)(EAX));
  /* 1076f3a0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f3a2 call 0x10772b00 */
  push32(0x1076f3a7u); f_10772b00();
  /* 1076f3a7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f3ad or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f3af mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f3b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f3b5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3b8 push edx */
  push32((uint32_t)(EDX));
  /* 1076f3b9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1076f3bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f3be push eax */
  push32((uint32_t)(EAX));
  /* 1076f3bf push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f3c1 call 0x10772b00 */
  push32(0x1076f3c6u); f_10772b00();
  /* 1076f3c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f3cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f3ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f3d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f3d4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3d7 push edx */
  push32((uint32_t)(EDX));
  /* 1076f3d8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1076f3da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f3dd push eax */
  push32((uint32_t)(EAX));
  /* 1076f3de push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f3e0 call 0x10772b00 */
  push32(0x1076f3e5u); f_10772b00();
  /* 1076f3e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f3eb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f3ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f3f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f3f3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f3f6 push edx */
  push32((uint32_t)(EDX));
  /* 1076f3f7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1076f3f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f3fc push eax */
  push32((uint32_t)(EAX));
  /* 1076f3fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f3ff call 0x10772b00 */
  push32(0x1076f404u); f_10772b00();
  /* 1076f404 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f407 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f40a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f40c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f40f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f412 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f415 push edx */
  push32((uint32_t)(EDX));
  /* 1076f416 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1076f418 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f41b push eax */
  push32((uint32_t)(EAX));
  /* 1076f41c push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f41e call 0x10772b00 */
  push32(0x1076f423u); f_10772b00();
  /* 1076f423 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f426 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f429 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f42b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f42e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f431 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f434 push edx */
  push32((uint32_t)(EDX));
  /* 1076f435 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1076f437 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f43a push eax */
  push32((uint32_t)(EAX));
  /* 1076f43b push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f43d call 0x10772b00 */
  push32(0x1076f442u); f_10772b00();
  /* 1076f442 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f445 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f448 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f44a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f44d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f450 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f453 push edx */
  push32((uint32_t)(EDX));
  /* 1076f454 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1076f456 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f459 push eax */
  push32((uint32_t)(EAX));
  /* 1076f45a push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f45c call 0x10772b00 */
  push32(0x1076f461u); f_10772b00();
  /* 1076f461 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f464 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f467 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f469 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f46c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f46f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f472 push edx */
  push32((uint32_t)(EDX));
  /* 1076f473 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1076f475 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f478 push eax */
  push32((uint32_t)(EAX));
  /* 1076f479 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f47b call 0x10772b00 */
  push32(0x1076f480u); f_10772b00();
  /* 1076f480 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f483 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f486 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f488 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f48e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f491 push edx */
  push32((uint32_t)(EDX));
  /* 1076f492 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1076f494 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f497 push eax */
  push32((uint32_t)(EAX));
  /* 1076f498 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f49a call 0x10772b00 */
  push32(0x1076f49fu); f_10772b00();
  /* 1076f49f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4a2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f4a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f4a7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f4aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f4ad add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4b0 push edx */
  push32((uint32_t)(EDX));
  /* 1076f4b1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1076f4b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f4b6 push eax */
  push32((uint32_t)(EAX));
  /* 1076f4b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f4b9 call 0x10772b00 */
  push32(0x1076f4beu); f_10772b00();
  /* 1076f4be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f4c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f4c6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f4c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f4cc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4cf push edx */
  push32((uint32_t)(EDX));
  /* 1076f4d0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1076f4d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f4d5 push eax */
  push32((uint32_t)(EAX));
  /* 1076f4d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f4d8 call 0x10772b00 */
  push32(0x1076f4ddu); f_10772b00();
  /* 1076f4dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f4e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f4e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f4e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f4eb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4ee push edx */
  push32((uint32_t)(EDX));
  /* 1076f4ef push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1076f4f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f4f4 push eax */
  push32((uint32_t)(EAX));
  /* 1076f4f5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f4f7 call 0x10772b00 */
  push32(0x1076f4fcu); f_10772b00();
  /* 1076f4fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f4ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f502 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f504 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f507 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f50a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f50d push edx */
  push32((uint32_t)(EDX));
  /* 1076f50e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1076f510 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f513 push eax */
  push32((uint32_t)(EAX));
  /* 1076f514 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f516 call 0x10772b00 */
  push32(0x1076f51bu); f_10772b00();
  /* 1076f51b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f51e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f521 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f523 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f526 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f529 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f52c push edx */
  push32((uint32_t)(EDX));
  /* 1076f52d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1076f52f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f532 push eax */
  push32((uint32_t)(EAX));
  /* 1076f533 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f535 call 0x10772b00 */
  push32(0x1076f53au); f_10772b00();
  /* 1076f53a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f53d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f540 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f542 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f545 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f548 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f54b push edx */
  push32((uint32_t)(EDX));
  /* 1076f54c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1076f54e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f551 push eax */
  push32((uint32_t)(EAX));
  /* 1076f552 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f554 call 0x10772b00 */
  push32(0x1076f559u); f_10772b00();
  /* 1076f559 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f55c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f55f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f561 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f564 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f567 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f56a push edx */
  push32((uint32_t)(EDX));
  /* 1076f56b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1076f56d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f570 push eax */
  push32((uint32_t)(EAX));
  /* 1076f571 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f573 call 0x10772b00 */
  push32(0x1076f578u); f_10772b00();
  /* 1076f578 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f57b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f57e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f580 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f583 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f586 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f589 push edx */
  push32((uint32_t)(EDX));
  /* 1076f58a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1076f58c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f58f push eax */
  push32((uint32_t)(EAX));
  /* 1076f590 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f592 call 0x10772b00 */
  push32(0x1076f597u); f_10772b00();
  /* 1076f597 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f59a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f59d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f59f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f5a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f5a5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5a8 push edx */
  push32((uint32_t)(EDX));
  /* 1076f5a9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1076f5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f5ae push eax */
  push32((uint32_t)(EAX));
  /* 1076f5af push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f5b1 call 0x10772b00 */
  push32(0x1076f5b6u); f_10772b00();
  /* 1076f5b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f5bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f5be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f5c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f5c4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5c7 push edx */
  push32((uint32_t)(EDX));
  /* 1076f5c8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1076f5ca mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f5cd push eax */
  push32((uint32_t)(EAX));
  /* 1076f5ce push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f5d0 call 0x10772b00 */
  push32(0x1076f5d5u); f_10772b00();
  /* 1076f5d5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5d8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f5db or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f5dd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f5e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f5e3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5e6 push edx */
  push32((uint32_t)(EDX));
  /* 1076f5e7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1076f5e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f5ec push eax */
  push32((uint32_t)(EAX));
  /* 1076f5ed push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f5ef call 0x10772b00 */
  push32(0x1076f5f4u); f_10772b00();
  /* 1076f5f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f5f7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f5fa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f5fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f5ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f602 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f608 push edx */
  push32((uint32_t)(EDX));
  /* 1076f609 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1076f60b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f60e push eax */
  push32((uint32_t)(EAX));
  /* 1076f60f push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f611 call 0x10772b00 */
  push32(0x1076f616u); f_10772b00();
  /* 1076f616 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f619 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f61c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f61e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f621 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f624 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f62a push edx */
  push32((uint32_t)(EDX));
  /* 1076f62b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1076f62d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f630 push eax */
  push32((uint32_t)(EAX));
  /* 1076f631 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f633 call 0x10772b00 */
  push32(0x1076f638u); f_10772b00();
  /* 1076f638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f63b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f63e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f640 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f643 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f646 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f64c push edx */
  push32((uint32_t)(EDX));
  /* 1076f64d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1076f64f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f652 push eax */
  push32((uint32_t)(EAX));
  /* 1076f653 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f655 call 0x10772b00 */
  push32(0x1076f65au); f_10772b00();
  /* 1076f65a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f65d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f660 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f662 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f665 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f668 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f66e push edx */
  push32((uint32_t)(EDX));
  /* 1076f66f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1076f671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f674 push eax */
  push32((uint32_t)(EAX));
  /* 1076f675 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f677 call 0x10772b00 */
  push32(0x1076f67cu); f_10772b00();
  /* 1076f67c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f67f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f682 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f684 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f687 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f68a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f690 push edx */
  push32((uint32_t)(EDX));
  /* 1076f691 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1076f693 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f696 push eax */
  push32((uint32_t)(EAX));
  /* 1076f697 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f699 call 0x10772b00 */
  push32(0x1076f69eu); f_10772b00();
  /* 1076f69e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f6a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f6a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f6a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f6ac add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6b2 push edx */
  push32((uint32_t)(EDX));
  /* 1076f6b3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1076f6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f6b8 push eax */
  push32((uint32_t)(EAX));
  /* 1076f6b9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f6bb call 0x10772b00 */
  push32(0x1076f6c0u); f_10772b00();
  /* 1076f6c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f6c6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f6c8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f6cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f6ce add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6d4 push edx */
  push32((uint32_t)(EDX));
  /* 1076f6d5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1076f6d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f6da push eax */
  push32((uint32_t)(EAX));
  /* 1076f6db push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f6dd call 0x10772b00 */
  push32(0x1076f6e2u); f_10772b00();
  /* 1076f6e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f6e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f6ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f6ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f6f0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f6f6 push edx */
  push32((uint32_t)(EDX));
  /* 1076f6f7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1076f6f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076f6fc push eax */
  push32((uint32_t)(EAX));
  /* 1076f6fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f6ff call 0x10772b00 */
  push32(0x1076f704u); f_10772b00();
  /* 1076f704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f707 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f70a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f70c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f70f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f712 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f718 push edx */
  push32((uint32_t)(EDX));
  /* 1076f719 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1076f71b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f71e push eax */
  push32((uint32_t)(EAX));
  /* 1076f71f push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f721 call 0x10772b00 */
  push32(0x1076f726u); f_10772b00();
  /* 1076f726 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f729 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f72c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f72e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f731 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f734 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f73a push edx */
  push32((uint32_t)(EDX));
  /* 1076f73b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1076f73d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f740 push eax */
  push32((uint32_t)(EAX));
  /* 1076f741 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f743 call 0x10772b00 */
  push32(0x1076f748u); f_10772b00();
  /* 1076f748 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f74b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f74e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f750 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f753 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f756 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f75c push edx */
  push32((uint32_t)(EDX));
  /* 1076f75d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1076f762 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076f765 push eax */
  push32((uint32_t)(EAX));
  /* 1076f766 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076f768 call 0x10772b00 */
  push32(0x1076f76du); f_10772b00();
  /* 1076f76d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f770 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1076f773 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076f775 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1076f778 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1076f77b:;
  /* 1076f77b mov esp, ebp */
  ESP = (EBP);
  /* 1076f77d pop ebp */
  EBP = (pop32());
  /* 1076f77e ret  */
  ESPCHK(0x1076f1f0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1076f780 (779 bytes, 265 insns) */
void f_1076f780(void) {
  FTRACE(0x1076f780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076f780 push ebp */
  push32((uint32_t)(EBP));
  /* 1076f781 mov ebp, esp */
  EBP = (ESP);
  /* 1076f783 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076f787 jne 0x1076f78e */
  if (!C.zf) goto L_1076f78e;
  /* 1076f789 jmp 0x1076fa89 */
  goto L_1076fa89;
L_1076f78e:;
  /* 1076f78e push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f793 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076f796 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f797 call 0x107653d0 */
  push32(0x1076f79cu); f_107653d0();
  /* 1076f79c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f79f push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7a4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076f7a7 push eax */
  push32((uint32_t)(EAX));
  /* 1076f7a8 call 0x107653d0 */
  push32(0x1076f7adu); f_107653d0();
  /* 1076f7ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f7b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7b5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1076f7b8 push edx */
  push32((uint32_t)(EDX));
  /* 1076f7b9 call 0x107653d0 */
  push32(0x1076f7beu); f_107653d0();
  /* 1076f7be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f7c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7c6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1076f7c9 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f7ca call 0x107653d0 */
  push32(0x1076f7cfu); f_107653d0();
  /* 1076f7cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f7d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7d7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1076f7da push eax */
  push32((uint32_t)(EAX));
  /* 1076f7db call 0x107653d0 */
  push32(0x1076f7e0u); f_107653d0();
  /* 1076f7e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f7e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7e8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1076f7eb push edx */
  push32((uint32_t)(EDX));
  /* 1076f7ec call 0x107653d0 */
  push32(0x1076f7f1u); f_107653d0();
  /* 1076f7f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f7f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f7f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f7f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076f7fb push ecx */
  push32((uint32_t)(ECX));
  /* 1076f7fc call 0x107653d0 */
  push32(0x1076f801u); f_107653d0();
  /* 1076f801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f804 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f806 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f809 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1076f80c push eax */
  push32((uint32_t)(EAX));
  /* 1076f80d call 0x107653d0 */
  push32(0x1076f812u); f_107653d0();
  /* 1076f812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f815 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f817 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f81a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1076f81d push edx */
  push32((uint32_t)(EDX));
  /* 1076f81e call 0x107653d0 */
  push32(0x1076f823u); f_107653d0();
  /* 1076f823 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f826 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f82b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1076f82e push ecx */
  push32((uint32_t)(ECX));
  /* 1076f82f call 0x107653d0 */
  push32(0x1076f834u); f_107653d0();
  /* 1076f834 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f837 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f839 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f83c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1076f83f push eax */
  push32((uint32_t)(EAX));
  /* 1076f840 call 0x107653d0 */
  push32(0x1076f845u); f_107653d0();
  /* 1076f845 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f848 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f84a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f84d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1076f850 push edx */
  push32((uint32_t)(EDX));
  /* 1076f851 call 0x107653d0 */
  push32(0x1076f856u); f_107653d0();
  /* 1076f856 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f859 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f85b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f85e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1076f861 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f862 call 0x107653d0 */
  push32(0x1076f867u); f_107653d0();
  /* 1076f867 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f86a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f86c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f86f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1076f872 push eax */
  push32((uint32_t)(EAX));
  /* 1076f873 call 0x107653d0 */
  push32(0x1076f878u); f_107653d0();
  /* 1076f878 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f87b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f87d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f880 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1076f883 push edx */
  push32((uint32_t)(EDX));
  /* 1076f884 call 0x107653d0 */
  push32(0x1076f889u); f_107653d0();
  /* 1076f889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f88c push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f88e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f891 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1076f894 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f895 call 0x107653d0 */
  push32(0x1076f89au); f_107653d0();
  /* 1076f89a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f89d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f89f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8a2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1076f8a5 push eax */
  push32((uint32_t)(EAX));
  /* 1076f8a6 call 0x107653d0 */
  push32(0x1076f8abu); f_107653d0();
  /* 1076f8ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f8ae push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f8b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8b3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1076f8b6 push edx */
  push32((uint32_t)(EDX));
  /* 1076f8b7 call 0x107653d0 */
  push32(0x1076f8bcu); f_107653d0();
  /* 1076f8bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f8bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f8c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8c4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1076f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f8c8 call 0x107653d0 */
  push32(0x1076f8cdu); f_107653d0();
  /* 1076f8cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f8d0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f8d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8d5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1076f8d8 push eax */
  push32((uint32_t)(EAX));
  /* 1076f8d9 call 0x107653d0 */
  push32(0x1076f8deu); f_107653d0();
  /* 1076f8de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f8e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f8e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8e6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1076f8e9 push edx */
  push32((uint32_t)(EDX));
  /* 1076f8ea call 0x107653d0 */
  push32(0x1076f8efu); f_107653d0();
  /* 1076f8ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f8f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f8f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f8f7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1076f8fa push ecx */
  push32((uint32_t)(ECX));
  /* 1076f8fb call 0x107653d0 */
  push32(0x1076f900u); f_107653d0();
  /* 1076f900 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f903 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f905 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f908 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1076f90b push eax */
  push32((uint32_t)(EAX));
  /* 1076f90c call 0x107653d0 */
  push32(0x1076f911u); f_107653d0();
  /* 1076f911 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f914 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f916 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f919 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1076f91c push edx */
  push32((uint32_t)(EDX));
  /* 1076f91d call 0x107653d0 */
  push32(0x1076f922u); f_107653d0();
  /* 1076f922 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f925 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f927 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f92a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1076f92d push ecx */
  push32((uint32_t)(ECX));
  /* 1076f92e call 0x107653d0 */
  push32(0x1076f933u); f_107653d0();
  /* 1076f933 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f936 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f938 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f93b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1076f93e push eax */
  push32((uint32_t)(EAX));
  /* 1076f93f call 0x107653d0 */
  push32(0x1076f944u); f_107653d0();
  /* 1076f944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f947 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f949 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f94c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1076f94f push edx */
  push32((uint32_t)(EDX));
  /* 1076f950 call 0x107653d0 */
  push32(0x1076f955u); f_107653d0();
  /* 1076f955 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f958 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f95a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f95d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1076f960 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f961 call 0x107653d0 */
  push32(0x1076f966u); f_107653d0();
  /* 1076f966 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f969 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f96b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f96e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1076f971 push eax */
  push32((uint32_t)(EAX));
  /* 1076f972 call 0x107653d0 */
  push32(0x1076f977u); f_107653d0();
  /* 1076f977 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f97a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f97c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f97f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1076f982 push edx */
  push32((uint32_t)(EDX));
  /* 1076f983 call 0x107653d0 */
  push32(0x1076f988u); f_107653d0();
  /* 1076f988 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f98b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f98d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f990 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1076f993 push ecx */
  push32((uint32_t)(ECX));
  /* 1076f994 call 0x107653d0 */
  push32(0x1076f999u); f_107653d0();
  /* 1076f999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f99c push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f99e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f9a1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1076f9a4 push eax */
  push32((uint32_t)(EAX));
  /* 1076f9a5 call 0x107653d0 */
  push32(0x1076f9aau); f_107653d0();
  /* 1076f9aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f9ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f9af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f9b2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1076f9b8 push edx */
  push32((uint32_t)(EDX));
  /* 1076f9b9 call 0x107653d0 */
  push32(0x1076f9beu); f_107653d0();
  /* 1076f9be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f9c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f9c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f9c6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1076f9cc push ecx */
  push32((uint32_t)(ECX));
  /* 1076f9cd call 0x107653d0 */
  push32(0x1076f9d2u); f_107653d0();
  /* 1076f9d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f9d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f9da mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1076f9e0 push eax */
  push32((uint32_t)(EAX));
  /* 1076f9e1 call 0x107653d0 */
  push32(0x1076f9e6u); f_107653d0();
  /* 1076f9e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f9e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f9eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076f9ee mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1076f9f4 push edx */
  push32((uint32_t)(EDX));
  /* 1076f9f5 call 0x107653d0 */
  push32(0x1076f9fau); f_107653d0();
  /* 1076f9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076f9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1076f9ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa02 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1076fa08 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fa09 call 0x107653d0 */
  push32(0x1076fa0eu); f_107653d0();
  /* 1076fa0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa16 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1076fa1c push eax */
  push32((uint32_t)(EAX));
  /* 1076fa1d call 0x107653d0 */
  push32(0x1076fa22u); f_107653d0();
  /* 1076fa22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa25 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa27 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa2a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1076fa30 push edx */
  push32((uint32_t)(EDX));
  /* 1076fa31 call 0x107653d0 */
  push32(0x1076fa36u); f_107653d0();
  /* 1076fa36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa39 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa3e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1076fa44 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fa45 call 0x107653d0 */
  push32(0x1076fa4au); f_107653d0();
  /* 1076fa4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa4d push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa52 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1076fa58 push eax */
  push32((uint32_t)(EAX));
  /* 1076fa59 call 0x107653d0 */
  push32(0x1076fa5eu); f_107653d0();
  /* 1076fa5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa61 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa63 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa66 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1076fa6c push edx */
  push32((uint32_t)(EDX));
  /* 1076fa6d call 0x107653d0 */
  push32(0x1076fa72u); f_107653d0();
  /* 1076fa72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fa75 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fa77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fa7a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1076fa80 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fa81 call 0x107653d0 */
  push32(0x1076fa86u); f_107653d0();
  /* 1076fa86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076fa89:;
  /* 1076fa89 pop ebp */
  EBP = (pop32());
  /* 1076fa8a ret  */
  ESPCHK(0x1076f780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x1076fa90 (678 bytes, 180 insns) */
void f_1076fa90(void) {
  FTRACE(0x1076fa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076fa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1076fa91 mov ebp, esp */
  EBP = (ESP);
  /* 1076fa93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076fa96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076fa9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076fa9f mov ax, word ptr [0x107907ba] */
  AX = (r16((uint32_t)(0x107907ba)));
  /* 1076faa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076faa8 cmp dword ptr [0x10790760], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790760))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076faaf je 0x1076fc0a */
  if (C.zf) goto L_1076fc0a;
  /* 1076fab5 push 0x10790788 */
  push32((uint32_t)(0x10790788u));
  /* 1076faba push 0xe */
  push32((uint32_t)(0xeu));
  /* 1076fabc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fabf push ecx */
  push32((uint32_t)(ECX));
  /* 1076fac0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076fac2 call 0x10772b00 */
  push32(0x1076fac7u); f_10772b00();
  /* 1076fac7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076faca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076facd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1076facf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1076fad2 push 0x1079078c */
  push32((uint32_t)(0x1079078cu));
  /* 1076fad7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1076fad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fadc push eax */
  push32((uint32_t)(EAX));
  /* 1076fadd push 1 */
  push32((uint32_t)(0x1u));
  /* 1076fadf call 0x10772b00 */
  push32(0x1076fae4u); f_10772b00();
  /* 1076fae4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fae7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076faea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076faec mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076faef push 0x10790790 */
  push32((uint32_t)(0x10790790u));
  /* 1076faf4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1076faf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076faf9 push edx */
  push32((uint32_t)(EDX));
  /* 1076fafa push 1 */
  push32((uint32_t)(0x1u));
  /* 1076fafc call 0x10772b00 */
  push32(0x1076fb01u); f_10772b00();
  /* 1076fb01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb04 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076fb07 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076fb09 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076fb0c mov edx, dword ptr [0x10790790] */
  EDX = (r32((uint32_t)(0x10790790)));
  /* 1076fb12 push edx */
  push32((uint32_t)(EDX));
  /* 1076fb13 call 0x1076fd40 */
  push32(0x1076fb18u); f_1076fd40();
  /* 1076fb18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fb1f je 0x1076fb79 */
  if (C.zf) goto L_1076fb79;
  /* 1076fb21 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fb23 mov eax, dword ptr [0x10790788] */
  EAX = (r32((uint32_t)(0x10790788)));
  /* 1076fb28 push eax */
  push32((uint32_t)(EAX));
  /* 1076fb29 call 0x107653d0 */
  push32(0x1076fb2eu); f_107653d0();
  /* 1076fb2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb31 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fb33 mov ecx, dword ptr [0x1079078c] */
  ECX = (r32((uint32_t)(0x1079078c)));
  /* 1076fb39 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fb3a call 0x107653d0 */
  push32(0x1076fb3fu); f_107653d0();
  /* 1076fb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fb44 mov edx, dword ptr [0x10790790] */
  EDX = (r32((uint32_t)(0x10790790)));
  /* 1076fb4a push edx */
  push32((uint32_t)(EDX));
  /* 1076fb4b call 0x107653d0 */
  push32(0x1076fb50u); f_107653d0();
  /* 1076fb50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb53 mov dword ptr [0x10790788], 0 */
  w32((uint32_t)(0x10790788), (0x0u));
  /* 1076fb5d mov dword ptr [0x1079078c], 0 */
  w32((uint32_t)(0x1079078c), (0x0u));
  /* 1076fb67 mov dword ptr [0x10790790], 0 */
  w32((uint32_t)(0x10790790), (0x0u));
  /* 1076fb71 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076fb74 jmp 0x1076fd32 */
  goto L_1076fd32;
L_1076fb79:;
  /* 1076fb79 mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fb7e cmp dword ptr [eax], 0x1078fd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1078fd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fb84 je 0x1076fbc0 */
  if (C.zf) goto L_1076fbc0;
  /* 1076fb86 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fb88 mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fb8e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076fb90 push edx */
  push32((uint32_t)(EDX));
  /* 1076fb91 call 0x107653d0 */
  push32(0x1076fb96u); f_107653d0();
  /* 1076fb96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fb99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fb9b mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fba0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076fba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fba4 call 0x107653d0 */
  push32(0x1076fba9u); f_107653d0();
  /* 1076fba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fbac push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fbae mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fbb4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076fbb7 push eax */
  push32((uint32_t)(EAX));
  /* 1076fbb8 call 0x107653d0 */
  push32(0x1076fbbdu); f_107653d0();
  /* 1076fbbd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1076fbc0:;
  /* 1076fbc0 mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fbc6 mov edx, dword ptr [0x10790788] */
  EDX = (r32((uint32_t)(0x10790788)));
  /* 1076fbcc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1076fbce mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fbd3 mov ecx, dword ptr [0x1079078c] */
  ECX = (r32((uint32_t)(0x1079078c)));
  /* 1076fbd9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1076fbdc mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fbe2 mov eax, dword ptr [0x10790790] */
  EAX = (r32((uint32_t)(0x10790790)));
  /* 1076fbe7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1076fbea mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fbf0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076fbf2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1076fbf4 mov byte ptr [0x1078eea8], al */
  w8((uint32_t)(0x1078eea8), (AL));
  /* 1076fbf9 mov dword ptr [0x1078eeac], 1 */
  w32((uint32_t)(0x1078eeac), (0x1u));
  /* 1076fc03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076fc05 jmp 0x1076fd32 */
  goto L_1076fd32;
L_1076fc0a:;
  /* 1076fc0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fc0c mov ecx, dword ptr [0x10790788] */
  ECX = (r32((uint32_t)(0x10790788)));
  /* 1076fc12 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fc13 call 0x107653d0 */
  push32(0x1076fc18u); f_107653d0();
  /* 1076fc18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fc1b push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fc1d mov edx, dword ptr [0x1079078c] */
  EDX = (r32((uint32_t)(0x1079078c)));
  /* 1076fc23 push edx */
  push32((uint32_t)(EDX));
  /* 1076fc24 call 0x107653d0 */
  push32(0x1076fc29u); f_107653d0();
  /* 1076fc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fc2c push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fc2e mov eax, dword ptr [0x10790790] */
  EAX = (r32((uint32_t)(0x10790790)));
  /* 1076fc33 push eax */
  push32((uint32_t)(EAX));
  /* 1076fc34 call 0x107653d0 */
  push32(0x1076fc39u); f_107653d0();
  /* 1076fc39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fc3c mov dword ptr [0x10790788], 0 */
  w32((uint32_t)(0x10790788), (0x0u));
  /* 1076fc46 mov dword ptr [0x1079078c], 0 */
  w32((uint32_t)(0x1079078c), (0x0u));
  /* 1076fc50 mov dword ptr [0x10790790], 0 */
  w32((uint32_t)(0x10790790), (0x0u));
  /* 1076fc5a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1076fc5f push 0x1078c204 */
  push32((uint32_t)(0x1078c204u));
  /* 1076fc64 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fc66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fc68 call 0x10764940 */
  push32(0x1076fc6du); f_10764940();
  /* 1076fc6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fc70 mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fc76 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1076fc78 mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fc7e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fc81 jne 0x1076fc8b */
  if (!C.zf) goto L_1076fc8b;
  /* 1076fc83 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076fc86 jmp 0x1076fd32 */
  goto L_1076fd32;
L_1076fc8b:;
  /* 1076fc8b push 0x1078c1d4 */
  push32((uint32_t)(0x1078c1d4u));
  /* 1076fc90 mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fc95 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1076fc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fc98 call 0x107678f0 */
  push32(0x1076fc9du); f_107678f0();
  /* 1076fc9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fca0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1076fca5 push 0x1078c204 */
  push32((uint32_t)(0x1078c204u));
  /* 1076fcaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fcac push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fcae call 0x10764940 */
  push32(0x1076fcb3u); f_10764940();
  /* 1076fcb3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fcb6 mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fcbc mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1076fcbf mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fcc4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fcc8 jne 0x1076fccf */
  if (!C.zf) goto L_1076fccf;
  /* 1076fcca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076fccd jmp 0x1076fd32 */
  goto L_1076fd32;
L_1076fccf:;
  /* 1076fccf mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fcd5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076fcd8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1076fcdb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1076fce0 push 0x1078c204 */
  push32((uint32_t)(0x1078c204u));
  /* 1076fce5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fce7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fce9 call 0x10764940 */
  push32(0x1076fceeu); f_10764940();
  /* 1076fcee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fcf1 mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fcf7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1076fcfa mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fd00 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fd04 jne 0x1076fd0b */
  if (!C.zf) goto L_1076fd0b;
  /* 1076fd06 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076fd09 jmp 0x1076fd32 */
  goto L_1076fd32;
L_1076fd0b:;
  /* 1076fd0b mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fd10 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1076fd13 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1076fd16 mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fd1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1076fd1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1076fd20 mov byte ptr [0x1078eea8], cl */
  w8((uint32_t)(0x1078eea8), (CL));
  /* 1076fd26 mov dword ptr [0x1078eeac], 1 */
  w32((uint32_t)(0x1078eeac), (0x1u));
  /* 1076fd30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076fd32:;
  /* 1076fd32 mov esp, ebp */
  ESP = (EBP);
  /* 1076fd34 pop ebp */
  EBP = (pop32());
  /* 1076fd35 ret  */
  ESPCHK(0x1076fa90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1076fd40 (125 bytes, 49 insns) */
void f_1076fd40(void) {
  FTRACE(0x1076fd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076fd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1076fd41 mov ebp, esp */
  EBP = (ESP);
  /* 1076fd43 push ecx */
  push32((uint32_t)(ECX));
L_1076fd44:;
  /* 1076fd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076fd4a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1076fd4c je 0x1076fdb9 */
  if (C.zf) goto L_1076fdb9;
  /* 1076fd4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd51 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076fd54 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fd57 jl 0x1076fd7d */
  if ((C.sf!=C.of)) goto L_1076fd7d;
  /* 1076fd59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076fd5f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fd62 jg 0x1076fd7d */
  if ((!C.zf&&C.sf==C.of)) goto L_1076fd7d;
  /* 1076fd64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd67 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1076fd6a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076fd6d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd70 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1076fd72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fd78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1076fd7b jmp 0x1076fdb7 */
  goto L_1076fdb7;
L_1076fd7d:;
  /* 1076fd7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd80 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1076fd83 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fd86 jne 0x1076fdae */
  if (!C.zf) goto L_1076fdae;
  /* 1076fd88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fd8b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1076fd8e:;
  /* 1076fd8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fd91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fd94 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1076fd97 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1076fd99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fd9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fd9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1076fda2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fda5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1076fda8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076fdaa jne 0x1076fd8e */
  if (!C.zf) goto L_1076fd8e;
  /* 1076fdac jmp 0x1076fdb7 */
  goto L_1076fdb7;
L_1076fdae:;
  /* 1076fdae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076fdb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fdb4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1076fdb7:;
  /* 1076fdb7 jmp 0x1076fd44 */
  goto L_1076fd44;
L_1076fdb9:;
  /* 1076fdb9 mov esp, ebp */
  ESP = (EBP);
  /* 1076fdbb pop ebp */
  EBP = (pop32());
  /* 1076fdbc ret  */
  ESPCHK(0x1076fd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fdc0 @ 0x1076fdc0 (304 bytes, 85 insns) */
void f_1076fdc0(void) {
  FTRACE(0x1076fdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076fdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076fdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1076fdc3 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fdc4 cmp dword ptr [0x1079075c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079075c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fdcb je 0x1076fe8c */
  if (C.zf) goto L_1076fe8c;
  /* 1076fdd1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1076fdd3 push 0x1078c210 */
  push32((uint32_t)(0x1078c210u));
  /* 1076fdd8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fdda push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1076fddc push 1 */
  push32((uint32_t)(0x1u));
  /* 1076fdde call 0x10764d50 */
  push32(0x1076fde3u); f_10764d50();
  /* 1076fde3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fde6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076fde9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076fded jne 0x1076fdf9 */
  if (!C.zf) goto L_1076fdf9;
  /* 1076fdef mov eax, 1 */
  EAX = (0x1u);
  /* 1076fdf4 jmp 0x1076feec */
  goto L_1076feec;
L_1076fdf9:;
  /* 1076fdf9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fdfc push eax */
  push32((uint32_t)(EAX));
  /* 1076fdfd call 0x1076fef0 */
  push32(0x1076fe02u); f_1076fef0();
  /* 1076fe02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fe05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1076fe07 je 0x1076fe2d */
  if (C.zf) goto L_1076fe2d;
  /* 1076fe09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe0c push ecx */
  push32((uint32_t)(ECX));
  /* 1076fe0d call 0x10770180 */
  push32(0x1076fe12u); f_10770180();
  /* 1076fe12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fe15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fe17 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe1a push edx */
  push32((uint32_t)(EDX));
  /* 1076fe1b call 0x107653d0 */
  push32(0x1076fe20u); f_107653d0();
  /* 1076fe20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fe23 mov eax, 1 */
  EAX = (0x1u);
  /* 1076fe28 jmp 0x1076feec */
  goto L_1076feec;
L_1076fe2d:;
  /* 1076fe2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe30 mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fe36 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076fe38 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1076fe3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe3d mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fe43 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1076fe46 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1076fe49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe4c mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fe52 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1076fe55 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1076fe58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe5b mov dword ptr [0x1078fd88], eax */
  w32((uint32_t)(0x1078fd88), (EAX));
  /* 1076fe60 mov ecx, dword ptr [0x10790794] */
  ECX = (r32((uint32_t)(0x10790794)));
  /* 1076fe66 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fe67 call 0x10770180 */
  push32(0x1076fe6cu); f_10770180();
  /* 1076fe6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fe6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fe71 mov edx, dword ptr [0x10790794] */
  EDX = (r32((uint32_t)(0x10790794)));
  /* 1076fe77 push edx */
  push32((uint32_t)(EDX));
  /* 1076fe78 call 0x107653d0 */
  push32(0x1076fe7du); f_107653d0();
  /* 1076fe7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fe80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076fe83 mov dword ptr [0x10790794], eax */
  w32((uint32_t)(0x10790794), (EAX));
  /* 1076fe88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076fe8a jmp 0x1076feec */
  goto L_1076feec;
L_1076fe8c:;
  /* 1076fe8c mov ecx, dword ptr [0x1078fd88] */
  ECX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fe92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1076fe94 mov dword ptr [0x1078fd58], edx */
  w32((uint32_t)(0x1078fd58), (EDX));
  /* 1076fe9a mov eax, dword ptr [0x1078fd88] */
  EAX = (r32((uint32_t)(0x1078fd88)));
  /* 1076fe9f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1076fea2 mov dword ptr [0x1078fd5c], ecx */
  w32((uint32_t)(0x1078fd5c), (ECX));
  /* 1076fea8 mov edx, dword ptr [0x1078fd88] */
  EDX = (r32((uint32_t)(0x1078fd88)));
  /* 1076feae mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1076feb1 mov dword ptr [0x1078fd60], eax */
  w32((uint32_t)(0x1078fd60), (EAX));
  /* 1076feb6 mov dword ptr [0x1078fd88], 0x1078fd58 */
  w32((uint32_t)(0x1078fd88), (0x1078fd58u));
  /* 1076fec0 mov ecx, dword ptr [0x10790794] */
  ECX = (r32((uint32_t)(0x10790794)));
  /* 1076fec6 push ecx */
  push32((uint32_t)(ECX));
  /* 1076fec7 call 0x10770180 */
  push32(0x1076feccu); f_10770180();
  /* 1076fecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fecf push 2 */
  push32((uint32_t)(0x2u));
  /* 1076fed1 mov edx, dword ptr [0x10790794] */
  EDX = (r32((uint32_t)(0x10790794)));
  /* 1076fed7 push edx */
  push32((uint32_t)(EDX));
  /* 1076fed8 call 0x107653d0 */
  push32(0x1076feddu); f_107653d0();
  /* 1076fedd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fee0 mov dword ptr [0x10790794], 0 */
  w32((uint32_t)(0x10790794), (0x0u));
  /* 1076feea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1076feec:;
  /* 1076feec mov esp, ebp */
  ESP = (EBP);
  /* 1076feee pop ebp */
  EBP = (pop32());
  /* 1076feef ret  */
  ESPCHK(0x1076fdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fef0 @ 0x1076fef0 (525 bytes, 200 insns) */
void f_1076fef0(void) {
  FTRACE(0x1076fef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1076fef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1076fef1 mov ebp, esp */
  EBP = (ESP);
  /* 1076fef3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1076fef6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1076fefd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1076feff mov ax, word ptr [0x107907b4] */
  AX = (r16((uint32_t)(0x107907b4)));
  /* 1076ff05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1076ff08 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1076ff0c jne 0x1076ff16 */
  if (!C.zf) goto L_1076ff16;
  /* 1076ff0e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1076ff11 jmp 0x107700f9 */
  goto L_107700f9;
L_1076ff16:;
  /* 1076ff16 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ff19 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff1c push ecx */
  push32((uint32_t)(ECX));
  /* 1076ff1d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1076ff1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ff22 push edx */
  push32((uint32_t)(EDX));
  /* 1076ff23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ff25 call 0x10772b00 */
  push32(0x1076ff2au); f_10772b00();
  /* 1076ff2a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff2d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ff30 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ff32 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ff35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ff38 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff3b push edx */
  push32((uint32_t)(EDX));
  /* 1076ff3c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1076ff3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ff41 push eax */
  push32((uint32_t)(EAX));
  /* 1076ff42 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ff44 call 0x10772b00 */
  push32(0x1076ff49u); f_10772b00();
  /* 1076ff49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff4c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ff4f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ff51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ff54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ff57 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff5a push edx */
  push32((uint32_t)(EDX));
  /* 1076ff5b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1076ff5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ff60 push eax */
  push32((uint32_t)(EAX));
  /* 1076ff61 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ff63 call 0x10772b00 */
  push32(0x1076ff68u); f_10772b00();
  /* 1076ff68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff6b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ff6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ff70 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ff73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ff76 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff79 push edx */
  push32((uint32_t)(EDX));
  /* 1076ff7a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1076ff7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ff7f push eax */
  push32((uint32_t)(EAX));
  /* 1076ff80 push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ff82 call 0x10772b00 */
  push32(0x1076ff87u); f_10772b00();
  /* 1076ff87 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ff8d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ff8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ff92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ff95 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ff98 push edx */
  push32((uint32_t)(EDX));
  /* 1076ff99 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1076ff9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ff9e push eax */
  push32((uint32_t)(EAX));
  /* 1076ff9f push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ffa1 call 0x10772b00 */
  push32(0x1076ffa6u); f_10772b00();
  /* 1076ffa6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ffa9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ffac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ffae mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ffb1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ffb4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1076ffb7 push eax */
  push32((uint32_t)(EAX));
  /* 1076ffb8 call 0x10770100 */
  push32(0x1076ffbdu); f_10770100();
  /* 1076ffbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ffc0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ffc3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ffc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1076ffc7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1076ffc9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ffcc push edx */
  push32((uint32_t)(EDX));
  /* 1076ffcd push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ffcf call 0x10772b00 */
  push32(0x1076ffd4u); f_10772b00();
  /* 1076ffd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ffd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076ffda or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076ffdc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076ffdf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1076ffe2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1076ffe5 push edx */
  push32((uint32_t)(EDX));
  /* 1076ffe6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1076ffe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1076ffeb push eax */
  push32((uint32_t)(EAX));
  /* 1076ffec push 1 */
  push32((uint32_t)(0x1u));
  /* 1076ffee call 0x10772b00 */
  push32(0x1076fff3u); f_10772b00();
  /* 1076fff3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1076fff6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1076fff9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1076fffb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1076fffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770001 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770004 push edx */
  push32((uint32_t)(EDX));
  /* 10770005 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 10770007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077000a push eax */
  push32((uint32_t)(EAX));
  /* 1077000b push 0 */
  push32((uint32_t)(0x0u));
  /* 1077000d call 0x10772b00 */
  push32(0x10770012u); f_10772b00();
  /* 10770012 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770015 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10770018 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1077001a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077001d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770020 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770023 push edx */
  push32((uint32_t)(EDX));
  /* 10770024 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10770026 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770029 push eax */
  push32((uint32_t)(EAX));
  /* 1077002a push 0 */
  push32((uint32_t)(0x0u));
  /* 1077002c call 0x10772b00 */
  push32(0x10770031u); f_10772b00();
  /* 10770031 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770034 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10770037 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10770039 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077003c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077003f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770042 push edx */
  push32((uint32_t)(EDX));
  /* 10770043 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 10770045 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770048 push eax */
  push32((uint32_t)(EAX));
  /* 10770049 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077004b call 0x10772b00 */
  push32(0x10770050u); f_10772b00();
  /* 10770050 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770053 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10770056 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10770058 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077005b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077005e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770061 push edx */
  push32((uint32_t)(EDX));
  /* 10770062 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 10770064 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770067 push eax */
  push32((uint32_t)(EAX));
  /* 10770068 push 0 */
  push32((uint32_t)(0x0u));
  /* 1077006a call 0x10772b00 */
  push32(0x1077006fu); f_10772b00();
  /* 1077006f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770072 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10770075 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10770077 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077007a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077007d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770080 push edx */
  push32((uint32_t)(EDX));
  /* 10770081 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 10770083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770086 push eax */
  push32((uint32_t)(EAX));
  /* 10770087 push 0 */
  push32((uint32_t)(0x0u));
  /* 10770089 call 0x10772b00 */
  push32(0x1077008eu); f_10772b00();
  /* 1077008e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770091 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10770094 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10770096 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10770099 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077009c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077009f push edx */
  push32((uint32_t)(EDX));
  /* 107700a0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 107700a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107700a5 push eax */
  push32((uint32_t)(EAX));
  /* 107700a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 107700a8 call 0x10772b00 */
  push32(0x107700adu); f_10772b00();
  /* 107700ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107700b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107700b3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107700b5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107700b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107700bb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107700be push edx */
  push32((uint32_t)(EDX));
  /* 107700bf push 0x52 */
  push32((uint32_t)(0x52u));
  /* 107700c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107700c4 push eax */
  push32((uint32_t)(EAX));
  /* 107700c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 107700c7 call 0x10772b00 */
  push32(0x107700ccu); f_10772b00();
  /* 107700cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107700cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107700d2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107700d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107700d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107700da add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107700dd push edx */
  push32((uint32_t)(EDX));
  /* 107700de push 0x53 */
  push32((uint32_t)(0x53u));
  /* 107700e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107700e3 push eax */
  push32((uint32_t)(EAX));
  /* 107700e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 107700e6 call 0x10772b00 */
  push32(0x107700ebu); f_10772b00();
  /* 107700eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107700ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 107700f1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 107700f3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107700f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_107700f9:;
  /* 107700f9 mov esp, ebp */
  ESP = (EBP);
  /* 107700fb pop ebp */
  EBP = (pop32());
  /* 107700fc ret  */
  ESPCHK(0x1076fef0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x10770100 (125 bytes, 49 insns) */
void f_10770100(void) {
  FTRACE(0x10770100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770100 push ebp */
  push32((uint32_t)(EBP));
  /* 10770101 mov ebp, esp */
  EBP = (ESP);
  /* 10770103 push ecx */
  push32((uint32_t)(ECX));
L_10770104:;
  /* 10770104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770107 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1077010a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1077010c je 0x10770179 */
  if (C.zf) goto L_10770179;
  /* 1077010e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770111 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10770114 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770117 jl 0x1077013d */
  if ((C.sf!=C.of)) goto L_1077013d;
  /* 10770119 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077011c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1077011f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770122 jg 0x1077013d */
  if ((!C.zf&&C.sf==C.of)) goto L_1077013d;
  /* 10770124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770127 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1077012a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077012d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770130 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10770132 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770135 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770138 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1077013b jmp 0x10770177 */
  goto L_10770177;
L_1077013d:;
  /* 1077013d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770140 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10770143 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770146 jne 0x1077016e */
  if (!C.zf) goto L_1077016e;
  /* 10770148 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077014b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1077014e:;
  /* 1077014e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770151 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770154 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10770157 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10770159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077015c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077015f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10770162 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770165 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10770168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077016a jne 0x1077014e */
  if (!C.zf) goto L_1077014e;
  /* 1077016c jmp 0x10770177 */
  goto L_10770177;
L_1077016e:;
  /* 1077016e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770171 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770174 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10770177:;
  /* 10770177 jmp 0x10770104 */
  goto L_10770104;
L_10770179:;
  /* 10770179 mov esp, ebp */
  ESP = (EBP);
  /* 1077017b pop ebp */
  EBP = (pop32());
  /* 1077017c ret  */
  ESPCHK(0x10770100u, _esp0);
  ESP += 4; return;
}

/* FUN_10010180 @ 0x10770180 (147 bytes, 52 insns) */
void f_10770180(void) {
  FTRACE(0x10770180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770180 push ebp */
  push32((uint32_t)(EBP));
  /* 10770181 mov ebp, esp */
  EBP = (ESP);
  /* 10770183 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770187 jne 0x1077018e */
  if (!C.zf) goto L_1077018e;
  /* 10770189 jmp 0x10770211 */
  goto L_10770211;
L_1077018e:;
  /* 1077018e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770191 cmp dword ptr [eax + 0xc], 0x107907f0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x107907f0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770198 je 0x10770211 */
  if (C.zf) goto L_10770211;
  /* 1077019a push 2 */
  push32((uint32_t)(0x2u));
  /* 1077019c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077019f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 107701a2 push edx */
  push32((uint32_t)(EDX));
  /* 107701a3 call 0x107653d0 */
  push32(0x107701a8u); f_107653d0();
  /* 107701a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107701ab push 2 */
  push32((uint32_t)(0x2u));
  /* 107701ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107701b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 107701b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107701b4 call 0x107653d0 */
  push32(0x107701b9u); f_107653d0();
  /* 107701b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107701bc push 2 */
  push32((uint32_t)(0x2u));
  /* 107701be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107701c1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 107701c4 push eax */
  push32((uint32_t)(EAX));
  /* 107701c5 call 0x107653d0 */
  push32(0x107701cau); f_107653d0();
  /* 107701ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107701cd push 2 */
  push32((uint32_t)(0x2u));
  /* 107701cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107701d2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 107701d5 push edx */
  push32((uint32_t)(EDX));
  /* 107701d6 call 0x107653d0 */
  push32(0x107701dbu); f_107653d0();
  /* 107701db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107701de push 2 */
  push32((uint32_t)(0x2u));
  /* 107701e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107701e3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 107701e6 push ecx */
  push32((uint32_t)(ECX));
  /* 107701e7 call 0x107653d0 */
  push32(0x107701ecu); f_107653d0();
  /* 107701ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107701ef push 2 */
  push32((uint32_t)(0x2u));
  /* 107701f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107701f4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 107701f7 push eax */
  push32((uint32_t)(EAX));
  /* 107701f8 call 0x107653d0 */
  push32(0x107701fdu); f_107653d0();
  /* 107701fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770200 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770205 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 10770208 push edx */
  push32((uint32_t)(EDX));
  /* 10770209 call 0x107653d0 */
  push32(0x1077020eu); f_107653d0();
  /* 1077020e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10770211:;
  /* 10770211 pop ebp */
  EBP = (pop32());
  /* 10770212 ret  */
  ESPCHK(0x10770180u, _esp0);
  ESP += 4; return;
}

/* FUN_10010220 @ 0x10770220 (928 bytes, 284 insns) */
void f_10770220(void) {
  FTRACE(0x10770220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770220 push ebp */
  push32((uint32_t)(EBP));
  /* 10770221 mov ebp, esp */
  EBP = (ESP);
  /* 10770223 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770226 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1077022d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10770234 cmp dword ptr [0x10790758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077023b je 0x10770571 */
  if (C.zf) goto L_10770571;
  /* 10770241 cmp dword ptr [0x10790768], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790768))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770248 jne 0x10770270 */
  if (!C.zf) goto L_10770270;
  /* 1077024a push 0x10790768 */
  push32((uint32_t)(0x10790768u));
  /* 1077024f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 10770254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770256 mov ax, word ptr [0x107907ac] */
  AX = (r16((uint32_t)(0x107907ac)));
  /* 1077025c push eax */
  push32((uint32_t)(EAX));
  /* 1077025d push 0 */
  push32((uint32_t)(0x0u));
  /* 1077025f call 0x10772b00 */
  push32(0x10770264u); f_10772b00();
  /* 10770264 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770267 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770269 je 0x10770270 */
  if (C.zf) goto L_10770270;
  /* 1077026b jmp 0x10770532 */
  goto L_10770532;
L_10770270:;
  /* 10770270 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 10770272 push 0x1078c21c */
  push32((uint32_t)(0x1078c21cu));
  /* 10770277 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770279 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1077027e call 0x10764940 */
  push32(0x10770283u); f_10764940();
  /* 10770283 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770286 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10770289 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1077028b push 0x1078c21c */
  push32((uint32_t)(0x1078c21cu));
  /* 10770290 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770292 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 10770297 call 0x10764940 */
  push32(0x1077029cu); f_10764940();
  /* 1077029c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077029f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 107702a2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 107702a4 push 0x1078c21c */
  push32((uint32_t)(0x1078c21cu));
  /* 107702a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 107702ab push 0x101 */
  push32((uint32_t)(0x101u));
  /* 107702b0 call 0x10764940 */
  push32(0x107702b5u); f_10764940();
  /* 107702b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107702b8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 107702bb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 107702bd push 0x1078c21c */
  push32((uint32_t)(0x1078c21cu));
  /* 107702c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 107702c4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 107702c9 call 0x10764940 */
  push32(0x107702ceu); f_10764940();
  /* 107702ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107702d1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 107702d4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107702d8 je 0x107702ec */
  if (C.zf) goto L_107702ec;
  /* 107702da cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107702de je 0x107702ec */
  if (C.zf) goto L_107702ec;
  /* 107702e0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107702e4 je 0x107702ec */
  if (C.zf) goto L_107702ec;
  /* 107702e6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107702ea jne 0x107702f1 */
  if (!C.zf) goto L_107702f1;
L_107702ec:;
  /* 107702ec jmp 0x10770532 */
  goto L_10770532;
L_107702f1:;
  /* 107702f1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107702f4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 107702f7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107702fe jmp 0x10770309 */
  goto L_10770309;
L_10770300:;
  /* 10770300 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10770303 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770306 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_10770309:;
  /* 10770309 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770310 jge 0x10770325 */
  if ((C.sf==C.of)) goto L_10770325;
  /* 10770312 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770315 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 10770318 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1077031a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1077031d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770320 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10770323 jmp 0x10770300 */
  goto L_10770300;
L_10770325:;
  /* 10770325 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 10770328 push eax */
  push32((uint32_t)(EAX));
  /* 10770329 mov ecx, dword ptr [0x10790768] */
  ECX = (r32((uint32_t)(0x10790768)));
  /* 1077032f push ecx */
  push32((uint32_t)(ECX));
  /* 10770330 call dword ptr [0x107932f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932f8))), 0x10770336u);
  /* 10770336 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770338 jne 0x1077033f */
  if (!C.zf) goto L_1077033f;
  /* 1077033a jmp 0x10770532 */
  goto L_10770532;
L_1077033f:;
  /* 1077033f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770343 jbe 0x1077034a */
  if ((C.cf||C.zf)) goto L_1077034a;
  /* 10770345 jmp 0x10770532 */
  goto L_10770532;
L_1077034a:;
  /* 1077034a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1077034d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10770353 mov dword ptr [0x1078eea4], edx */
  w32((uint32_t)(0x1078eea4), (EDX));
  /* 10770359 cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770360 jle 0x107703b9 */
  if ((C.zf||C.sf!=C.of)) goto L_107703b9;
  /* 10770362 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 10770365 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10770368 jmp 0x10770373 */
  goto L_10770373;
L_1077036a:;
  /* 1077036a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1077036d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770370 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_10770373:;
  /* 10770373 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770378 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1077037a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077037c je 0x107703b9 */
  if (C.zf) goto L_107703b9;
  /* 1077037e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770381 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10770383 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10770386 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10770388 je 0x107703b9 */
  if (C.zf) goto L_107703b9;
  /* 1077038a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1077038d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1077038f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10770391 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10770394 jmp 0x1077039f */
  goto L_1077039f;
L_10770396:;
  /* 10770396 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10770399 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077039c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1077039f:;
  /* 1077039f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 107703a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107703a4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 107703a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107703aa jg 0x107703b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_107703b7;
  /* 107703ac mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107703af add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107703b2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 107703b5 jmp 0x10770396 */
  goto L_10770396;
L_107703b7:;
  /* 107703b7 jmp 0x1077036a */
  goto L_1077036a;
L_107703b9:;
  /* 107703b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 107703bb push 0 */
  push32((uint32_t)(0x0u));
  /* 107703bd push 0 */
  push32((uint32_t)(0x0u));
  /* 107703bf mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107703c2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107703c5 push eax */
  push32((uint32_t)(EAX));
  /* 107703c6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 107703cb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 107703ce push ecx */
  push32((uint32_t)(ECX));
  /* 107703cf push 1 */
  push32((uint32_t)(0x1u));
  /* 107703d1 call 0x1076cb70 */
  push32(0x107703d6u); f_1076cb70();
  /* 107703d6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107703d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107703db jne 0x107703e2 */
  if (!C.zf) goto L_107703e2;
  /* 107703dd jmp 0x10770532 */
  goto L_10770532;
L_107703e2:;
  /* 107703e2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107703e5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 107703ea mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 107703ed mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 107703f0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 107703f7 jmp 0x10770402 */
  goto L_10770402;
L_107703f9:;
  /* 107703f9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107703fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107703ff mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10770402:;
  /* 10770402 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770409 jge 0x10770420 */
  if ((C.sf==C.of)) goto L_10770420;
  /* 1077040b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1077040e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 10770412 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 10770415 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10770418 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077041b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1077041e jmp 0x107703f9 */
  goto L_107703f9;
L_10770420:;
  /* 10770420 push 0 */
  push32((uint32_t)(0x0u));
  /* 10770422 push 0 */
  push32((uint32_t)(0x0u));
  /* 10770424 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10770427 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077042a push edx */
  push32((uint32_t)(EDX));
  /* 1077042b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10770430 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10770433 push eax */
  push32((uint32_t)(EAX));
  /* 10770434 push 1 */
  push32((uint32_t)(0x1u));
  /* 10770436 call 0x10772da0 */
  push32(0x1077043bu); f_10772da0();
  /* 1077043b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077043e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770440 jne 0x10770447 */
  if (!C.zf) goto L_10770447;
  /* 10770442 jmp 0x10770532 */
  goto L_10770532;
L_10770447:;
  /* 10770447 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1077044a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1077044f cmp dword ptr [0x1078eea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1078eea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770456 jle 0x107704b3 */
  if ((C.zf||C.sf!=C.of)) goto L_107704b3;
  /* 10770458 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1077045b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1077045e jmp 0x10770469 */
  goto L_10770469;
L_10770460:;
  /* 10770460 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770463 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770466 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_10770469:;
  /* 10770469 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1077046c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1077046e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10770470 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10770472 je 0x107704b3 */
  if (C.zf) goto L_107704b3;
  /* 10770474 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770477 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10770479 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1077047c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1077047e je 0x107704b3 */
  if (C.zf) goto L_107704b3;
  /* 10770480 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770483 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770485 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10770487 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1077048a jmp 0x10770495 */
  goto L_10770495;
L_1077048c:;
  /* 1077048c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1077048f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770492 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_10770495:;
  /* 10770495 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10770498 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077049a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1077049d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107704a0 jg 0x107704b1 */
  if ((!C.zf&&C.sf==C.of)) goto L_107704b1;
  /* 107704a2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 107704a5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 107704a8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 107704af jmp 0x1077048c */
  goto L_1077048c;
L_107704b1:;
  /* 107704b1 jmp 0x10770460 */
  goto L_10770460;
L_107704b3:;
  /* 107704b3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107704b6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107704b9 mov dword ptr [0x1078ec98], eax */
  w32((uint32_t)(0x1078ec98), (EAX));
  /* 107704be mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 107704c1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107704c4 mov dword ptr [0x1078ec9c], ecx */
  w32((uint32_t)(0x1078ec9c), (ECX));
  /* 107704ca cmp dword ptr [0x10790798], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10790798))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107704d1 je 0x107704e4 */
  if (C.zf) goto L_107704e4;
  /* 107704d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 107704d5 mov edx, dword ptr [0x10790798] */
  EDX = (r32((uint32_t)(0x10790798)));
  /* 107704db push edx */
  push32((uint32_t)(EDX));
  /* 107704dc call 0x107653d0 */
  push32(0x107704e1u); f_107653d0();
  /* 107704e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107704e4:;
  /* 107704e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 107704e7 mov dword ptr [0x10790798], eax */
  w32((uint32_t)(0x10790798), (EAX));
  /* 107704ec cmp dword ptr [0x1079079c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1079079c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107704f3 je 0x10770506 */
  if (C.zf) goto L_10770506;
  /* 107704f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 107704f7 mov ecx, dword ptr [0x1079079c] */
  ECX = (r32((uint32_t)(0x1079079c)));
  /* 107704fd push ecx */
  push32((uint32_t)(ECX));
  /* 107704fe call 0x107653d0 */
  push32(0x10770503u); f_107653d0();
  /* 10770503 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10770506:;
  /* 10770506 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10770509 mov dword ptr [0x1079079c], edx */
  w32((uint32_t)(0x1079079c), (EDX));
  /* 1077050f push 2 */
  push32((uint32_t)(0x2u));
  /* 10770511 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10770514 push eax */
  push32((uint32_t)(EAX));
  /* 10770515 call 0x107653d0 */
  push32(0x1077051au); f_107653d0();
  /* 1077051a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077051d push 2 */
  push32((uint32_t)(0x2u));
  /* 1077051f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10770522 push ecx */
  push32((uint32_t)(ECX));
  /* 10770523 call 0x107653d0 */
  push32(0x10770528u); f_107653d0();
  /* 10770528 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077052b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077052d jmp 0x107705bc */
  goto L_107705bc;
L_10770532:;
  /* 10770532 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770534 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 10770537 push edx */
  push32((uint32_t)(EDX));
  /* 10770538 call 0x107653d0 */
  push32(0x1077053du); f_107653d0();
  /* 1077053d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770540 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770542 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10770545 push eax */
  push32((uint32_t)(EAX));
  /* 10770546 call 0x107653d0 */
  push32(0x1077054bu); f_107653d0();
  /* 1077054b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077054e push 2 */
  push32((uint32_t)(0x2u));
  /* 10770550 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10770553 push ecx */
  push32((uint32_t)(ECX));
  /* 10770554 call 0x107653d0 */
  push32(0x10770559u); f_107653d0();
  /* 10770559 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077055c push 2 */
  push32((uint32_t)(0x2u));
  /* 1077055e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10770561 push edx */
  push32((uint32_t)(EDX));
  /* 10770562 call 0x107653d0 */
  push32(0x10770567u); f_107653d0();
  /* 10770567 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077056a mov eax, 1 */
  EAX = (0x1u);
  /* 1077056f jmp 0x107705bc */
  goto L_107705bc;
L_10770571:;
  /* 10770571 mov dword ptr [0x1078ec98], 0x1078eca2 */
  w32((uint32_t)(0x1078ec98), (0x1078eca2u));
  /* 1077057b mov dword ptr [0x1078ec9c], 0x1078eca2 */
  w32((uint32_t)(0x1078ec9c), (0x1078eca2u));
  /* 10770585 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770587 mov eax, dword ptr [0x10790798] */
  EAX = (r32((uint32_t)(0x10790798)));
  /* 1077058c push eax */
  push32((uint32_t)(EAX));
  /* 1077058d call 0x107653d0 */
  push32(0x10770592u); f_107653d0();
  /* 10770592 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770595 push 2 */
  push32((uint32_t)(0x2u));
  /* 10770597 mov ecx, dword ptr [0x1079079c] */
  ECX = (r32((uint32_t)(0x1079079c)));
  /* 1077059d push ecx */
  push32((uint32_t)(ECX));
  /* 1077059e call 0x107653d0 */
  push32(0x107705a3u); f_107653d0();
  /* 107705a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107705a6 mov dword ptr [0x10790798], 0 */
  w32((uint32_t)(0x10790798), (0x0u));
  /* 107705b0 mov dword ptr [0x1079079c], 0 */
  w32((uint32_t)(0x1079079c), (0x0u));
  /* 107705ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107705bc:;
  /* 107705bc mov esp, ebp */
  ESP = (EBP);
  /* 107705be pop ebp */
  EBP = (pop32());
  /* 107705bf ret  */
  ESPCHK(0x10770220u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x107705c0 (7 bytes, 5 insns) */
void f_107705c0(void) {
  FTRACE(0x107705c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107705c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107705c1 mov ebp, esp */
  EBP = (ESP);
  /* 107705c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107705c5 pop ebp */
  EBP = (pop32());
  /* 107705c6 ret  */
  ESPCHK(0x107705c0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x107705d0 (129 bytes, 56 insns) */
void f_107705d0(void) {
  FTRACE(0x107705d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107705d0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 107705d4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 107705d8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 107705de jne 0x1077061c */
  if (!C.zf) goto L_1077061c;
L_107705e0:;
  /* 107705e0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 107705e2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107705e4 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 107705e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107705e8 je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 107705ea cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107705ed jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 107705ef or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 107705f1 je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 107705f3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 107705f6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107705f9 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 107705fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107705fd je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 107705ff cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10770602 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 10770604 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770607 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077060a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1077060c jne 0x107705e0 */
  if (!C.zf) goto L_107705e0;
  /* 1077060e mov edi, edi */
  EDI = (EDI);
L_10770610:;
  /* 10770610 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770612 ret  */
  ESPCHK(0x107705d0u, _esp0);
  ESP += 4; return;
  /* 10770613 nop  */
  /* nop */
L_10770614:;
  /* 10770614 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770616 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10770618 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10770619 ret  */
  ESPCHK(0x107705d0u, _esp0);
  ESP += 4; return;
  /* 1077061a mov edi, edi */
  EDI = (EDI);
L_1077061c:;
  /* 1077061c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 10770622 je 0x10770638 */
  if (C.zf) goto L_10770638;
  /* 10770624 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10770626 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 10770627 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10770629 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 1077062b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1077062c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1077062e je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 10770630 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 10770636 je 0x107705e0 */
  if (C.zf) goto L_107705e0;
L_10770638:;
  /* 10770638 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1077063b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077063e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10770640 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 10770642 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10770644 je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 10770646 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10770649 jne 0x10770614 */
  if (!C.zf) goto L_10770614;
  /* 1077064b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1077064d je 0x10770610 */
  if (C.zf) goto L_10770610;
  /* 1077064f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770652 jmp 0x107705e0 */
  goto L_107705e0;
}

/* FUN_10010660 @ 0x10770660 (62 bytes, 35 insns) */
void f_10770660(void) {
  FTRACE(0x10770660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770660 push ebp */
  push32((uint32_t)(EBP));
  /* 10770661 mov ebp, esp */
  EBP = (ESP);
  /* 10770663 push esi */
  push32((uint32_t)(ESI));
  /* 10770664 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770666 push eax */
  push32((uint32_t)(EAX));
  /* 10770667 push eax */
  push32((uint32_t)(EAX));
  /* 10770668 push eax */
  push32((uint32_t)(EAX));
  /* 10770669 push eax */
  push32((uint32_t)(EAX));
  /* 1077066a push eax */
  push32((uint32_t)(EAX));
  /* 1077066b push eax */
  push32((uint32_t)(EAX));
  /* 1077066c push eax */
  push32((uint32_t)(EAX));
  /* 1077066d push eax */
  push32((uint32_t)(EAX));
  /* 1077066e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10770671 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10770674:;
  /* 10770674 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10770676 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10770678 je 0x10770681 */
  if (C.zf) goto L_10770681;
  /* 1077067a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1077067b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1077067b");
  /* 1077067f jmp 0x10770674 */
  goto L_10770674;
L_10770681:;
  /* 10770681 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 10770684 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 10770687 nop  */
  /* nop */
L_10770688:;
  /* 10770688 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10770689 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1077068b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1077068d je 0x10770696 */
  if (C.zf) goto L_10770696;
  /* 1077068f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10770690 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x10770690");
  /* 10770694 jae 0x10770688 */
  if (!C.cf) goto L_10770688;
L_10770696:;
  /* 10770696 mov eax, ecx */
  EAX = (ECX);
  /* 10770698 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077069b pop esi */
  ESI = (pop32());
  /* 1077069c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1077069d ret  */
  ESPCHK(0x10770660u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x107706a0 (56 bytes, 31 insns) */
void f_107706a0(void) {
  FTRACE(0x107706a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107706a0 push ebp */
  push32((uint32_t)(EBP));
  /* 107706a1 mov ebp, esp */
  EBP = (ESP);
  /* 107706a3 push edi */
  push32((uint32_t)(EDI));
  /* 107706a4 push esi */
  push32((uint32_t)(ESI));
  /* 107706a5 push ebx */
  push32((uint32_t)(EBX));
  /* 107706a6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107706a9 jecxz 0x107706d1 */
  x86_unimpl("jecxz @ 0x107706a9");
  /* 107706ab mov ebx, ecx */
  EBX = (ECX);
  /* 107706ad mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 107706b0 mov esi, edi */
  ESI = (EDI);
  /* 107706b2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107706b4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 107706b6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 107706b8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107706ba mov edi, esi */
  EDI = (ESI);
  /* 107706bc mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 107706bf repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 107706c1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 107706c4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107706c6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 107706c9 ja 0x107706cf */
  if ((!C.cf&&!C.zf)) goto L_107706cf;
  /* 107706cb je 0x107706d1 */
  if (C.zf) goto L_107706d1;
  /* 107706cd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 107706ce dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_107706cf:;
  /* 107706cf not ecx */
  ECX = (~(ECX));
L_107706d1:;
  /* 107706d1 mov eax, ecx */
  EAX = (ECX);
  /* 107706d3 pop ebx */
  EBX = (pop32());
  /* 107706d4 pop esi */
  ESI = (pop32());
  /* 107706d5 pop edi */
  EDI = (pop32());
  /* 107706d6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 107706d7 ret  */
  ESPCHK(0x107706a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x107706e0 (58 bytes, 32 insns) */
void f_107706e0(void) {
  FTRACE(0x107706e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107706e0 push ebp */
  push32((uint32_t)(EBP));
  /* 107706e1 mov ebp, esp */
  EBP = (ESP);
  /* 107706e3 push esi */
  push32((uint32_t)(ESI));
  /* 107706e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107706e6 push eax */
  push32((uint32_t)(EAX));
  /* 107706e7 push eax */
  push32((uint32_t)(EAX));
  /* 107706e8 push eax */
  push32((uint32_t)(EAX));
  /* 107706e9 push eax */
  push32((uint32_t)(EAX));
  /* 107706ea push eax */
  push32((uint32_t)(EAX));
  /* 107706eb push eax */
  push32((uint32_t)(EAX));
  /* 107706ec push eax */
  push32((uint32_t)(EAX));
  /* 107706ed push eax */
  push32((uint32_t)(EAX));
  /* 107706ee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107706f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_107706f4:;
  /* 107706f4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107706f6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 107706f8 je 0x10770701 */
  if (C.zf) goto L_10770701;
  /* 107706fa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 107706fb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x107706fb");
  /* 107706ff jmp 0x107706f4 */
  goto L_107706f4;
L_10770701:;
  /* 10770701 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_10770704:;
  /* 10770704 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10770706 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10770708 je 0x10770714 */
  if (C.zf) goto L_10770714;
  /* 1077070a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1077070b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1077070b");
  /* 1077070f jae 0x10770704 */
  if (!C.cf) goto L_10770704;
  /* 10770711 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_10770714:;
  /* 10770714 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770717 pop esi */
  ESI = (pop32());
  /* 10770718 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10770719 ret  */
  ESPCHK(0x107706e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010720 @ 0x10770720 (512 bytes, 147 insns) */
void f_10770720(void) {
  FTRACE(0x10770720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770720 push ebp */
  push32((uint32_t)(EBP));
  /* 10770721 mov ebp, esp */
  EBP = (ESP);
  /* 10770723 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770726 cmp dword ptr [0x107907e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077072d jne 0x10770752 */
  if (!C.zf) goto L_10770752;
  /* 1077072f call 0x107711f0 */
  push32(0x10770734u); f_107711f0();
  /* 10770734 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770736 je 0x10770742 */
  if (C.zf) goto L_10770742;
  /* 10770738 mov eax, dword ptr [0x107932bc] */
  EAX = (r32((uint32_t)(0x107932bc)));
  /* 1077073d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10770740 jmp 0x10770749 */
  goto L_10770749;
L_10770742:;
  /* 10770742 mov dword ptr [ebp - 8], 0x10771240 */
  w32((uint32_t)(EBP + -0x8), (0x10771240u));
L_10770749:;
  /* 10770749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1077074c mov dword ptr [0x107907e4], ecx */
  w32((uint32_t)(0x107907e4), (ECX));
L_10770752:;
  /* 10770752 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770756 jne 0x10770762 */
  if (!C.zf) goto L_10770762;
  /* 10770758 call 0x10771040 */
  push32(0x1077075du); f_10771040();
  /* 1077075d jmp 0x1077082e */
  goto L_1077082e;
L_10770762:;
  /* 10770762 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770765 mov dword ptr [0x107907d4], edx */
  w32((uint32_t)(0x107907d4), (EDX));
  /* 1077076b cmp dword ptr [0x107907d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770772 je 0x10770794 */
  if (C.zf) goto L_10770794;
  /* 10770774 mov eax, dword ptr [0x107907d4] */
  EAX = (r32((uint32_t)(0x107907d4)));
  /* 10770779 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1077077c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1077077e je 0x10770794 */
  if (C.zf) goto L_10770794;
  /* 10770780 push 0x107907d4 */
  push32((uint32_t)(0x107907d4u));
  /* 10770785 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 10770787 push 0x1078fa90 */
  push32((uint32_t)(0x1078fa90u));
  /* 1077078c call 0x10770920 */
  push32(0x10770791u); f_10770920();
  /* 10770791 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10770794:;
  /* 10770794 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770797 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077079a mov dword ptr [0x107907d8], edx */
  w32((uint32_t)(0x107907d8), (EDX));
  /* 107707a0 cmp dword ptr [0x107907d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107707a7 je 0x107707c9 */
  if (C.zf) goto L_107707c9;
  /* 107707a9 mov eax, dword ptr [0x107907d8] */
  EAX = (r32((uint32_t)(0x107907d8)));
  /* 107707ae movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 107707b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107707b3 je 0x107707c9 */
  if (C.zf) goto L_107707c9;
  /* 107707b5 push 0x107907d8 */
  push32((uint32_t)(0x107907d8u));
  /* 107707ba push 0x16 */
  push32((uint32_t)(0x16u));
  /* 107707bc push 0x1078f9d8 */
  push32((uint32_t)(0x1078f9d8u));
  /* 107707c1 call 0x10770920 */
  push32(0x107707c6u); f_10770920();
  /* 107707c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_107707c9:;
  /* 107707c9 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 107707d3 cmp dword ptr [0x107907d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107707da je 0x1077080d */
  if (C.zf) goto L_1077080d;
  /* 107707dc mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 107707e2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 107707e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107707e7 je 0x1077080d */
  if (C.zf) goto L_1077080d;
  /* 107707e9 cmp dword ptr [0x107907d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107707f0 je 0x10770806 */
  if (C.zf) goto L_10770806;
  /* 107707f2 mov ecx, dword ptr [0x107907d8] */
  ECX = (r32((uint32_t)(0x107907d8)));
  /* 107707f8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 107707fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107707fd je 0x10770806 */
  if (C.zf) goto L_10770806;
  /* 107707ff call 0x107709b0 */
  push32(0x10770804u); f_107709b0();
  /* 10770804 jmp 0x1077080b */
  goto L_1077080b;
L_10770806:;
  /* 10770806 call 0x10770da0 */
  push32(0x1077080bu); f_10770da0();
L_1077080b:;
  /* 1077080b jmp 0x1077082e */
  goto L_1077082e;
L_1077080d:;
  /* 1077080d cmp dword ptr [0x107907d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770814 je 0x10770829 */
  if (C.zf) goto L_10770829;
  /* 10770816 mov eax, dword ptr [0x107907d8] */
  EAX = (r32((uint32_t)(0x107907d8)));
  /* 1077081b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1077081e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10770820 je 0x10770829 */
  if (C.zf) goto L_10770829;
  /* 10770822 call 0x10770f40 */
  push32(0x10770827u); f_10770f40();
  /* 10770827 jmp 0x1077082e */
  goto L_1077082e;
L_10770829:;
  /* 10770829 call 0x10771040 */
  push32(0x1077082eu); f_10771040();
L_1077082e:;
  /* 1077082e cmp dword ptr [0x107907dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770835 jne 0x1077083e */
  if (!C.zf) goto L_1077083e;
  /* 10770837 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770839 jmp 0x1077091c */
  goto L_1077091c;
L_1077083e:;
  /* 1077083e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770841 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770847 push edx */
  push32((uint32_t)(EDX));
  /* 10770848 call 0x10771070 */
  push32(0x1077084du); f_10771070();
  /* 1077084d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770850 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10770853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770857 je 0x1077086c */
  if (C.zf) goto L_1077086c;
  /* 10770859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077085c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10770861 push eax */
  push32((uint32_t)(EAX));
  /* 10770862 call dword ptr [0x107932c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932c0))), 0x10770868u);
  /* 10770868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077086a jne 0x10770873 */
  if (!C.zf) goto L_10770873;
L_1077086c:;
  /* 1077086c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077086e jmp 0x1077091c */
  goto L_1077091c;
L_10770873:;
  /* 10770873 push 1 */
  push32((uint32_t)(0x1u));
  /* 10770875 mov ecx, dword ptr [0x107907c4] */
  ECX = (r32((uint32_t)(0x107907c4)));
  /* 1077087b push ecx */
  push32((uint32_t)(ECX));
  /* 1077087c call dword ptr [0x107932d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932d0))), 0x10770882u);
  /* 10770882 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770884 jne 0x1077088d */
  if (!C.zf) goto L_1077088d;
  /* 10770886 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10770888 jmp 0x1077091c */
  goto L_1077091c;
L_1077088d:;
  /* 1077088d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770891 je 0x107708b8 */
  if (C.zf) goto L_107708b8;
  /* 10770893 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10770896 mov ax, word ptr [0x107907c4] */
  AX = (r16((uint32_t)(0x107907c4)));
  /* 1077089c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1077089f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 107708a2 mov dx, word ptr [0x107907e0] */
  DX = (r16((uint32_t)(0x107907e0)));
  /* 107708a9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 107708ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 107708b0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 107708b4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_107708b8:;
  /* 107708b8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107708bc je 0x10770917 */
  if (C.zf) goto L_10770917;
  /* 107708be push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107708c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 107708c3 push edx */
  push32((uint32_t)(EDX));
  /* 107708c4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 107708c9 mov eax, dword ptr [0x107907c4] */
  EAX = (r32((uint32_t)(0x107907c4)));
  /* 107708ce push eax */
  push32((uint32_t)(EAX));
  /* 107708cf call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x107708d5u);
  /* 107708d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107708d7 jne 0x107708dd */
  if (!C.zf) goto L_107708dd;
  /* 107708d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107708db jmp 0x1077091c */
  goto L_1077091c;
L_107708dd:;
  /* 107708dd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 107708df mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107708e2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107708e5 push ecx */
  push32((uint32_t)(ECX));
  /* 107708e6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 107708eb mov edx, dword ptr [0x107907e0] */
  EDX = (r32((uint32_t)(0x107907e0)));
  /* 107708f1 push edx */
  push32((uint32_t)(EDX));
  /* 107708f2 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x107708f8u);
  /* 107708f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107708fa jne 0x10770900 */
  if (!C.zf) goto L_10770900;
  /* 107708fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107708fe jmp 0x1077091c */
  goto L_1077091c;
L_10770900:;
  /* 10770900 push 0xa */
  push32((uint32_t)(0xau));
  /* 10770902 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10770905 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077090a push eax */
  push32((uint32_t)(EAX));
  /* 1077090b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077090e push ecx */
  push32((uint32_t)(ECX));
  /* 1077090f call 0x10767480 */
  push32(0x10770914u); f_10767480();
  /* 10770914 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10770917:;
  /* 10770917 mov eax, 1 */
  EAX = (0x1u);
L_1077091c:;
  /* 1077091c mov esp, ebp */
  ESP = (EBP);
  /* 1077091e pop ebp */
  EBP = (pop32());
  /* 1077091f ret  */
  ESPCHK(0x10770720u, _esp0);
  ESP += 4; return;
}

/* FUN_10010920 @ 0x10770920 (130 bytes, 47 insns) */
void f_10770920(void) {
  FTRACE(0x10770920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770920 push ebp */
  push32((uint32_t)(EBP));
  /* 10770921 mov ebp, esp */
  EBP = (ESP);
  /* 10770923 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770926 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1077092d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_10770934:;
  /* 10770934 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10770937 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077093a jg 0x1077099e */
  if ((!C.zf&&C.sf==C.of)) goto L_1077099e;
  /* 1077093c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770940 je 0x1077099e */
  if (C.zf) goto L_1077099e;
  /* 10770942 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10770945 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770948 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10770949 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077094b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1077094d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10770950 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770953 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770956 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 10770959 push eax */
  push32((uint32_t)(EAX));
  /* 1077095a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077095d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1077095f push edx */
  push32((uint32_t)(EDX));
  /* 10770960 call 0x10773010 */
  push32(0x10770965u); f_10773010();
  /* 10770965 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770968 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1077096b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077096f jne 0x10770982 */
  if (!C.zf) goto L_10770982;
  /* 10770971 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770974 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770977 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1077097b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1077097e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10770980 jmp 0x1077099c */
  goto L_1077099c;
L_10770982:;
  /* 10770982 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770986 jge 0x10770993 */
  if ((C.sf==C.of)) goto L_10770993;
  /* 10770988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077098b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077098e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 10770991 jmp 0x1077099c */
  goto L_1077099c;
L_10770993:;
  /* 10770993 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770996 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770999 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1077099c:;
  /* 1077099c jmp 0x10770934 */
  goto L_10770934;
L_1077099e:;
  /* 1077099e mov esp, ebp */
  ESP = (EBP);
  /* 107709a0 pop ebp */
  EBP = (pop32());
  /* 107709a1 ret  */
  ESPCHK(0x10770920u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b0 @ 0x107709b0 (186 bytes, 50 insns) */
void f_107709b0(void) {
  FTRACE(0x107709b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107709b0 push ebp */
  push32((uint32_t)(EBP));
  /* 107709b1 mov ebp, esp */
  EBP = (ESP);
  /* 107709b3 push ecx */
  push32((uint32_t)(ECX));
  /* 107709b4 mov eax, dword ptr [0x107907d4] */
  EAX = (r32((uint32_t)(0x107907d4)));
  /* 107709b9 push eax */
  push32((uint32_t)(EAX));
  /* 107709ba call 0x10767770 */
  push32(0x107709bfu); f_10767770();
  /* 107709bf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107709c2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107709c4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107709c7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107709ca mov dword ptr [0x107907d0], ecx */
  w32((uint32_t)(0x107907d0), (ECX));
  /* 107709d0 mov edx, dword ptr [0x107907d8] */
  EDX = (r32((uint32_t)(0x107907d8)));
  /* 107709d6 push edx */
  push32((uint32_t)(EDX));
  /* 107709d7 call 0x10767770 */
  push32(0x107709dcu); f_10767770();
  /* 107709dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107709df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 107709e1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107709e4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 107709e7 mov dword ptr [0x107907c8], ecx */
  w32((uint32_t)(0x107907c8), (ECX));
  /* 107709ed mov dword ptr [0x107907c4], 0 */
  w32((uint32_t)(0x107907c4), (0x0u));
  /* 107709f7 cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107709fe je 0x10770a09 */
  if (C.zf) goto L_10770a09;
  /* 10770a00 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10770a07 jmp 0x10770a1b */
  goto L_10770a1b;
L_10770a09:;
  /* 10770a09 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770a0f push edx */
  push32((uint32_t)(EDX));
  /* 10770a10 call 0x10771450 */
  push32(0x10770a15u); f_10771450();
  /* 10770a15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770a18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10770a1b:;
  /* 10770a1b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770a1e mov dword ptr [0x107907cc], eax */
  w32((uint32_t)(0x107907cc), (EAX));
  /* 10770a23 push 1 */
  push32((uint32_t)(0x1u));
  /* 10770a25 push 0x10770a70 */
  push32((uint32_t)(0x10770a70u));
  /* 10770a2a call dword ptr [0x107932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932c4))), 0x10770a30u);
  /* 10770a30 mov ecx, dword ptr [0x107907dc] */
  ECX = (r32((uint32_t)(0x107907dc)));
  /* 10770a36 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 10770a3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10770a3e je 0x10770a5c */
  if (C.zf) goto L_10770a5c;
  /* 10770a40 mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770a46 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 10770a4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10770a4e je 0x10770a5c */
  if (C.zf) goto L_10770a5c;
  /* 10770a50 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770a55 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 10770a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770a5a jne 0x10770a66 */
  if (!C.zf) goto L_10770a66;
L_10770a5c:;
  /* 10770a5c mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
L_10770a66:;
  /* 10770a66 mov esp, ebp */
  ESP = (EBP);
  /* 10770a68 pop ebp */
  EBP = (pop32());
  /* 10770a69 ret  */
  ESPCHK(0x107709b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a70 @ 0x10770a70 (804 bytes, 220 insns) */
void f_10770a70(void) {
  FTRACE(0x10770a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10770a71 mov ebp, esp */
  EBP = (ESP);
  /* 10770a73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770a76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770a79 push eax */
  push32((uint32_t)(EAX));
  /* 10770a7a call 0x107713d0 */
  push32(0x10770a7fu); f_107713d0();
  /* 10770a7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770a82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10770a85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10770a87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770a8a push ecx */
  push32((uint32_t)(ECX));
  /* 10770a8b mov edx, dword ptr [0x107907c8] */
  EDX = (r32((uint32_t)(0x107907c8)));
  /* 10770a91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770a93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770a95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10770a9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770aa1 push edx */
  push32((uint32_t)(EDX));
  /* 10770aa2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770aa5 push eax */
  push32((uint32_t)(EAX));
  /* 10770aa6 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10770aacu);
  /* 10770aac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770aae jne 0x10770ac4 */
  if (!C.zf) goto L_10770ac4;
  /* 10770ab0 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 10770aba mov eax, 1 */
  EAX = (0x1u);
  /* 10770abf jmp 0x10770d8e */
  goto L_10770d8e;
L_10770ac4:;
  /* 10770ac4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770ac7 push ecx */
  push32((uint32_t)(ECX));
  /* 10770ac8 mov edx, dword ptr [0x107907d8] */
  EDX = (r32((uint32_t)(0x107907d8)));
  /* 10770ace push edx */
  push32((uint32_t)(EDX));
  /* 10770acf call 0x10773010 */
  push32(0x10770ad4u); f_10773010();
  /* 10770ad4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770ad7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770ad9 jne 0x10770bff */
  if (!C.zf) goto L_10770bff;
  /* 10770adf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10770ae1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10770ae4 push eax */
  push32((uint32_t)(EAX));
  /* 10770ae5 mov ecx, dword ptr [0x107907d0] */
  ECX = (r32((uint32_t)(0x107907d0)));
  /* 10770aeb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770aed sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770aef and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10770af5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770afb push ecx */
  push32((uint32_t)(ECX));
  /* 10770afc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770aff push edx */
  push32((uint32_t)(EDX));
  /* 10770b00 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10770b06u);
  /* 10770b06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770b08 jne 0x10770b1e */
  if (!C.zf) goto L_10770b1e;
  /* 10770b0a mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 10770b14 mov eax, 1 */
  EAX = (0x1u);
  /* 10770b19 jmp 0x10770d8e */
  goto L_10770d8e;
L_10770b1e:;
  /* 10770b1e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10770b21 push eax */
  push32((uint32_t)(EAX));
  /* 10770b22 mov ecx, dword ptr [0x107907d4] */
  ECX = (r32((uint32_t)(0x107907d4)));
  /* 10770b28 push ecx */
  push32((uint32_t)(ECX));
  /* 10770b29 call 0x10773010 */
  push32(0x10770b2eu); f_10773010();
  /* 10770b2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770b31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770b33 jne 0x10770b60 */
  if (!C.zf) goto L_10770b60;
  /* 10770b35 mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770b3b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 10770b41 mov dword ptr [0x107907dc], edx */
  w32((uint32_t)(0x107907dc), (EDX));
  /* 10770b47 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770b4a mov dword ptr [0x107907e0], eax */
  w32((uint32_t)(0x107907e0), (EAX));
  /* 10770b4f mov ecx, dword ptr [0x107907e0] */
  ECX = (r32((uint32_t)(0x107907e0)));
  /* 10770b55 mov dword ptr [0x107907c4], ecx */
  w32((uint32_t)(0x107907c4), (ECX));
  /* 10770b5b jmp 0x10770bff */
  goto L_10770bff;
L_10770b60:;
  /* 10770b60 mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770b66 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 10770b69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10770b6b jne 0x10770bff */
  if (!C.zf) goto L_10770bff;
  /* 10770b71 cmp dword ptr [0x107907cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770b78 je 0x10770bcd */
  if (C.zf) goto L_10770bcd;
  /* 10770b7a mov eax, dword ptr [0x107907cc] */
  EAX = (r32((uint32_t)(0x107907cc)));
  /* 10770b7f push eax */
  push32((uint32_t)(EAX));
  /* 10770b80 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770b83 push ecx */
  push32((uint32_t)(ECX));
  /* 10770b84 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770b8a push edx */
  push32((uint32_t)(EDX));
  /* 10770b8b call 0x107730e0 */
  push32(0x10770b90u); f_107730e0();
  /* 10770b90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770b93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770b95 jne 0x10770bcd */
  if (!C.zf) goto L_10770bcd;
  /* 10770b97 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770b9c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 10770b9e mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10770ba3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770ba6 mov dword ptr [0x107907e0], ecx */
  w32((uint32_t)(0x107907e0), (ECX));
  /* 10770bac mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770bb2 push edx */
  push32((uint32_t)(EDX));
  /* 10770bb3 call 0x10767770 */
  push32(0x10770bb8u); f_10767770();
  /* 10770bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770bbb cmp eax, dword ptr [0x107907cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107907cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770bc1 jne 0x10770bcb */
  if (!C.zf) goto L_10770bcb;
  /* 10770bc3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770bc6 mov dword ptr [0x107907c4], eax */
  w32((uint32_t)(0x107907c4), (EAX));
L_10770bcb:;
  /* 10770bcb jmp 0x10770bff */
  goto L_10770bff;
L_10770bcd:;
  /* 10770bcd mov ecx, dword ptr [0x107907dc] */
  ECX = (r32((uint32_t)(0x107907dc)));
  /* 10770bd3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10770bd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10770bd8 jne 0x10770bff */
  if (!C.zf) goto L_10770bff;
  /* 10770bda mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770bdd push edx */
  push32((uint32_t)(EDX));
  /* 10770bde call 0x10771110 */
  push32(0x10770be3u); f_10771110();
  /* 10770be3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770be6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770be8 je 0x10770bff */
  if (C.zf) goto L_10770bff;
  /* 10770bea mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770bef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 10770bf1 mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10770bf6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770bf9 mov dword ptr [0x107907e0], ecx */
  w32((uint32_t)(0x107907e0), (ECX));
L_10770bff:;
  /* 10770bff mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770c05 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 10770c0b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770c11 je 0x10770d81 */
  if (C.zf) goto L_10770d81;
  /* 10770c17 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10770c19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10770c1c push eax */
  push32((uint32_t)(EAX));
  /* 10770c1d mov ecx, dword ptr [0x107907d0] */
  ECX = (r32((uint32_t)(0x107907d0)));
  /* 10770c23 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770c25 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770c27 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 10770c2d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770c33 push ecx */
  push32((uint32_t)(ECX));
  /* 10770c34 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770c37 push edx */
  push32((uint32_t)(EDX));
  /* 10770c38 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10770c3eu);
  /* 10770c3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770c40 jne 0x10770c56 */
  if (!C.zf) goto L_10770c56;
  /* 10770c42 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 10770c4c mov eax, 1 */
  EAX = (0x1u);
  /* 10770c51 jmp 0x10770d8e */
  goto L_10770d8e;
L_10770c56:;
  /* 10770c56 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10770c59 push eax */
  push32((uint32_t)(EAX));
  /* 10770c5a mov ecx, dword ptr [0x107907d4] */
  ECX = (r32((uint32_t)(0x107907d4)));
  /* 10770c60 push ecx */
  push32((uint32_t)(ECX));
  /* 10770c61 call 0x10773010 */
  push32(0x10770c66u); f_10773010();
  /* 10770c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770c6b jne 0x10770d20 */
  if (!C.zf) goto L_10770d20;
  /* 10770c71 mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770c77 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 10770c7a mov dword ptr [0x107907dc], edx */
  w32((uint32_t)(0x107907dc), (EDX));
  /* 10770c80 cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770c87 je 0x10770caa */
  if (C.zf) goto L_10770caa;
  /* 10770c89 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770c8e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10770c91 mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10770c96 cmp dword ptr [0x107907c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770c9d jne 0x10770ca8 */
  if (!C.zf) goto L_10770ca8;
  /* 10770c9f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770ca2 mov dword ptr [0x107907c4], ecx */
  w32((uint32_t)(0x107907c4), (ECX));
L_10770ca8:;
  /* 10770ca8 jmp 0x10770d1e */
  goto L_10770d1e;
L_10770caa:;
  /* 10770caa cmp dword ptr [0x107907cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770cb1 je 0x10770cff */
  if (C.zf) goto L_10770cff;
  /* 10770cb3 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770cb9 push edx */
  push32((uint32_t)(EDX));
  /* 10770cba call 0x10767770 */
  push32(0x10770cbfu); f_10767770();
  /* 10770cbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770cc2 cmp eax, dword ptr [0x107907cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x107907cc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770cc8 jne 0x10770cff */
  if (!C.zf) goto L_10770cff;
  /* 10770cca push 1 */
  push32((uint32_t)(0x1u));
  /* 10770ccc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770ccf push eax */
  push32((uint32_t)(EAX));
  /* 10770cd0 call 0x10771160 */
  push32(0x10770cd5u); f_10771160();
  /* 10770cd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770cda je 0x10770cfd */
  if (C.zf) goto L_10770cfd;
  /* 10770cdc mov ecx, dword ptr [0x107907dc] */
  ECX = (r32((uint32_t)(0x107907dc)));
  /* 10770ce2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 10770ce5 mov dword ptr [0x107907dc], ecx */
  w32((uint32_t)(0x107907dc), (ECX));
  /* 10770ceb cmp dword ptr [0x107907c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770cf2 jne 0x10770cfd */
  if (!C.zf) goto L_10770cfd;
  /* 10770cf4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770cf7 mov dword ptr [0x107907c4], edx */
  w32((uint32_t)(0x107907c4), (EDX));
L_10770cfd:;
  /* 10770cfd jmp 0x10770d1e */
  goto L_10770d1e;
L_10770cff:;
  /* 10770cff mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770d04 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10770d07 mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10770d0c cmp dword ptr [0x107907c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770d13 jne 0x10770d1e */
  if (!C.zf) goto L_10770d1e;
  /* 10770d15 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770d18 mov dword ptr [0x107907c4], ecx */
  w32((uint32_t)(0x107907c4), (ECX));
L_10770d1e:;
  /* 10770d1e jmp 0x10770d81 */
  goto L_10770d81;
L_10770d20:;
  /* 10770d20 cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770d27 jne 0x10770d81 */
  if (!C.zf) goto L_10770d81;
  /* 10770d29 cmp dword ptr [0x107907cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770d30 je 0x10770d81 */
  if (C.zf) goto L_10770d81;
  /* 10770d32 mov edx, dword ptr [0x107907cc] */
  EDX = (r32((uint32_t)(0x107907cc)));
  /* 10770d38 push edx */
  push32((uint32_t)(EDX));
  /* 10770d39 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 10770d3c push eax */
  push32((uint32_t)(EAX));
  /* 10770d3d mov ecx, dword ptr [0x107907d4] */
  ECX = (r32((uint32_t)(0x107907d4)));
  /* 10770d43 push ecx */
  push32((uint32_t)(ECX));
  /* 10770d44 call 0x107730e0 */
  push32(0x10770d49u); f_107730e0();
  /* 10770d49 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770d4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770d4e jne 0x10770d81 */
  if (!C.zf) goto L_10770d81;
  /* 10770d50 push 0 */
  push32((uint32_t)(0x0u));
  /* 10770d52 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770d55 push edx */
  push32((uint32_t)(EDX));
  /* 10770d56 call 0x10771160 */
  push32(0x10770d5bu); f_10771160();
  /* 10770d5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770d5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770d60 je 0x10770d81 */
  if (C.zf) goto L_10770d81;
  /* 10770d62 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770d67 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 10770d6a mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10770d6f cmp dword ptr [0x107907c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770d76 jne 0x10770d81 */
  if (!C.zf) goto L_10770d81;
  /* 10770d78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770d7b mov dword ptr [0x107907c4], ecx */
  w32((uint32_t)(0x107907c4), (ECX));
L_10770d81:;
  /* 10770d81 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770d86 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10770d89 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770d8b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770d8d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10770d8e:;
  /* 10770d8e mov esp, ebp */
  ESP = (EBP);
  /* 10770d90 pop ebp */
  EBP = (pop32());
  /* 10770d91 ret 4 */
  ESPCHK(0x10770a70u, _esp0);
  ESP += 8; return;
}

/* FUN_10010da0 @ 0x10770da0 (116 bytes, 33 insns) */
void f_10770da0(void) {
  FTRACE(0x10770da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770da0 push ebp */
  push32((uint32_t)(EBP));
  /* 10770da1 mov ebp, esp */
  EBP = (ESP);
  /* 10770da3 push ecx */
  push32((uint32_t)(ECX));
  /* 10770da4 mov eax, dword ptr [0x107907d4] */
  EAX = (r32((uint32_t)(0x107907d4)));
  /* 10770da9 push eax */
  push32((uint32_t)(EAX));
  /* 10770daa call 0x10767770 */
  push32(0x10770dafu); f_10767770();
  /* 10770daf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770db2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10770db4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770db7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10770dba mov dword ptr [0x107907d0], ecx */
  w32((uint32_t)(0x107907d0), (ECX));
  /* 10770dc0 cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770dc7 je 0x10770dd2 */
  if (C.zf) goto L_10770dd2;
  /* 10770dc9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 10770dd0 jmp 0x10770de4 */
  goto L_10770de4;
L_10770dd2:;
  /* 10770dd2 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770dd8 push edx */
  push32((uint32_t)(EDX));
  /* 10770dd9 call 0x10771450 */
  push32(0x10770ddeu); f_10771450();
  /* 10770dde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770de1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10770de4:;
  /* 10770de4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10770de7 mov dword ptr [0x107907cc], eax */
  w32((uint32_t)(0x107907cc), (EAX));
  /* 10770dec push 1 */
  push32((uint32_t)(0x1u));
  /* 10770dee push 0x10770e20 */
  push32((uint32_t)(0x10770e20u));
  /* 10770df3 call dword ptr [0x107932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932c4))), 0x10770df9u);
  /* 10770df9 mov ecx, dword ptr [0x107907dc] */
  ECX = (r32((uint32_t)(0x107907dc)));
  /* 10770dff and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10770e02 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10770e04 jne 0x10770e10 */
  if (!C.zf) goto L_10770e10;
  /* 10770e06 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
L_10770e10:;
  /* 10770e10 mov esp, ebp */
  ESP = (EBP);
  /* 10770e12 pop ebp */
  EBP = (pop32());
  /* 10770e13 ret  */
  ESPCHK(0x10770da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e20 @ 0x10770e20 (287 bytes, 86 insns) */
void f_10770e20(void) {
  FTRACE(0x10770e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10770e21 mov ebp, esp */
  EBP = (ESP);
  /* 10770e23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770e26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770e29 push eax */
  push32((uint32_t)(EAX));
  /* 10770e2a call 0x107713d0 */
  push32(0x10770e2fu); f_107713d0();
  /* 10770e2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770e32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10770e35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10770e37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770e3a push ecx */
  push32((uint32_t)(ECX));
  /* 10770e3b mov edx, dword ptr [0x107907d0] */
  EDX = (r32((uint32_t)(0x107907d0)));
  /* 10770e41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770e43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770e45 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 10770e4b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770e51 push edx */
  push32((uint32_t)(EDX));
  /* 10770e52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770e55 push eax */
  push32((uint32_t)(EAX));
  /* 10770e56 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10770e5cu);
  /* 10770e5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770e5e jne 0x10770e74 */
  if (!C.zf) goto L_10770e74;
  /* 10770e60 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 10770e6a mov eax, 1 */
  EAX = (0x1u);
  /* 10770e6f jmp 0x10770f39 */
  goto L_10770f39;
L_10770e74:;
  /* 10770e74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770e77 push ecx */
  push32((uint32_t)(ECX));
  /* 10770e78 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 10770e7e push edx */
  push32((uint32_t)(EDX));
  /* 10770e7f call 0x10773010 */
  push32(0x10770e84u); f_10773010();
  /* 10770e84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770e87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770e89 jne 0x10770ec9 */
  if (!C.zf) goto L_10770ec9;
  /* 10770e8b cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770e92 jne 0x10770ea6 */
  if (!C.zf) goto L_10770ea6;
  /* 10770e94 push 1 */
  push32((uint32_t)(0x1u));
  /* 10770e96 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770e99 push eax */
  push32((uint32_t)(EAX));
  /* 10770e9a call 0x10771160 */
  push32(0x10770e9fu); f_10771160();
  /* 10770e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770ea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770ea4 je 0x10770ec7 */
  if (C.zf) goto L_10770ec7;
L_10770ea6:;
  /* 10770ea6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770ea9 mov dword ptr [0x107907e0], ecx */
  w32((uint32_t)(0x107907e0), (ECX));
  /* 10770eaf mov edx, dword ptr [0x107907e0] */
  EDX = (r32((uint32_t)(0x107907e0)));
  /* 10770eb5 mov dword ptr [0x107907c4], edx */
  w32((uint32_t)(0x107907c4), (EDX));
  /* 10770ebb mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770ec0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10770ec2 mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
L_10770ec7:;
  /* 10770ec7 jmp 0x10770f2c */
  goto L_10770f2c;
L_10770ec9:;
  /* 10770ec9 cmp dword ptr [0x107907d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770ed0 jne 0x10770f2c */
  if (!C.zf) goto L_10770f2c;
  /* 10770ed2 cmp dword ptr [0x107907cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x107907cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770ed9 je 0x10770f2c */
  if (C.zf) goto L_10770f2c;
  /* 10770edb mov ecx, dword ptr [0x107907cc] */
  ECX = (r32((uint32_t)(0x107907cc)));
  /* 10770ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 10770ee2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 10770ee5 push edx */
  push32((uint32_t)(EDX));
  /* 10770ee6 mov eax, dword ptr [0x107907d4] */
  EAX = (r32((uint32_t)(0x107907d4)));
  /* 10770eeb push eax */
  push32((uint32_t)(EAX));
  /* 10770eec call 0x107730e0 */
  push32(0x10770ef1u); f_107730e0();
  /* 10770ef1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770ef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770ef6 jne 0x10770f2c */
  if (!C.zf) goto L_10770f2c;
  /* 10770ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10770efa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770efd push ecx */
  push32((uint32_t)(ECX));
  /* 10770efe call 0x10771160 */
  push32(0x10770f03u); f_10771160();
  /* 10770f03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770f06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770f08 je 0x10770f2c */
  if (C.zf) goto L_10770f2c;
  /* 10770f0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770f0d mov dword ptr [0x107907e0], edx */
  w32((uint32_t)(0x107907e0), (EDX));
  /* 10770f13 mov eax, dword ptr [0x107907e0] */
  EAX = (r32((uint32_t)(0x107907e0)));
  /* 10770f18 mov dword ptr [0x107907c4], eax */
  w32((uint32_t)(0x107907c4), (EAX));
  /* 10770f1d mov ecx, dword ptr [0x107907dc] */
  ECX = (r32((uint32_t)(0x107907dc)));
  /* 10770f23 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 10770f26 mov dword ptr [0x107907dc], ecx */
  w32((uint32_t)(0x107907dc), (ECX));
L_10770f2c:;
  /* 10770f2c mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10770f31 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10770f34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770f36 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770f38 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10770f39:;
  /* 10770f39 mov esp, ebp */
  ESP = (EBP);
  /* 10770f3b pop ebp */
  EBP = (pop32());
  /* 10770f3c ret 4 */
  ESPCHK(0x10770e20u, _esp0);
  ESP += 8; return;
}

/* FUN_10010f40 @ 0x10770f40 (69 bytes, 20 insns) */
void f_10770f40(void) {
  FTRACE(0x10770f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10770f41 mov ebp, esp */
  EBP = (ESP);
  /* 10770f43 mov eax, dword ptr [0x107907d8] */
  EAX = (r32((uint32_t)(0x107907d8)));
  /* 10770f48 push eax */
  push32((uint32_t)(EAX));
  /* 10770f49 call 0x10767770 */
  push32(0x10770f4eu); f_10767770();
  /* 10770f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770f51 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10770f53 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10770f56 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 10770f59 mov dword ptr [0x107907c8], ecx */
  w32((uint32_t)(0x107907c8), (ECX));
  /* 10770f5f push 1 */
  push32((uint32_t)(0x1u));
  /* 10770f61 push 0x10770f90 */
  push32((uint32_t)(0x10770f90u));
  /* 10770f66 call dword ptr [0x107932c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932c4))), 0x10770f6cu);
  /* 10770f6c mov edx, dword ptr [0x107907dc] */
  EDX = (r32((uint32_t)(0x107907dc)));
  /* 10770f72 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10770f75 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10770f77 jne 0x10770f83 */
  if (!C.zf) goto L_10770f83;
  /* 10770f79 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
L_10770f83:;
  /* 10770f83 pop ebp */
  EBP = (pop32());
  /* 10770f84 ret  */
  ESPCHK(0x10770f40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f90 @ 0x10770f90 (172 bytes, 54 insns) */
void f_10770f90(void) {
  FTRACE(0x10770f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10770f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10770f91 mov ebp, esp */
  EBP = (ESP);
  /* 10770f93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770f96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10770f99 push eax */
  push32((uint32_t)(EAX));
  /* 10770f9a call 0x107713d0 */
  push32(0x10770f9fu); f_107713d0();
  /* 10770f9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770fa2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 10770fa5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10770fa7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770faa push ecx */
  push32((uint32_t)(ECX));
  /* 10770fab mov edx, dword ptr [0x107907c8] */
  EDX = (r32((uint32_t)(0x107907c8)));
  /* 10770fb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10770fb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10770fb5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 10770fbb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10770fc1 push edx */
  push32((uint32_t)(EDX));
  /* 10770fc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770fc5 push eax */
  push32((uint32_t)(EAX));
  /* 10770fc6 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10770fccu);
  /* 10770fcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770fce jne 0x10770fe1 */
  if (!C.zf) goto L_10770fe1;
  /* 10770fd0 mov dword ptr [0x107907dc], 0 */
  w32((uint32_t)(0x107907dc), (0x0u));
  /* 10770fda mov eax, 1 */
  EAX = (0x1u);
  /* 10770fdf jmp 0x10771036 */
  goto L_10771036;
L_10770fe1:;
  /* 10770fe1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 10770fe4 push ecx */
  push32((uint32_t)(ECX));
  /* 10770fe5 mov edx, dword ptr [0x107907d8] */
  EDX = (r32((uint32_t)(0x107907d8)));
  /* 10770feb push edx */
  push32((uint32_t)(EDX));
  /* 10770fec call 0x10773010 */
  push32(0x10770ff1u); f_10773010();
  /* 10770ff1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10770ff4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10770ff6 jne 0x10771029 */
  if (!C.zf) goto L_10771029;
  /* 10770ff8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 10770ffb push eax */
  push32((uint32_t)(EAX));
  /* 10770ffc call 0x10771110 */
  push32(0x10771001u); f_10771110();
  /* 10771001 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771004 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10771006 je 0x10771029 */
  if (C.zf) goto L_10771029;
  /* 10771008 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1077100b mov dword ptr [0x107907e0], ecx */
  w32((uint32_t)(0x107907e0), (ECX));
  /* 10771011 mov edx, dword ptr [0x107907e0] */
  EDX = (r32((uint32_t)(0x107907e0)));
  /* 10771017 mov dword ptr [0x107907c4], edx */
  w32((uint32_t)(0x107907c4), (EDX));
  /* 1077101d mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10771022 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 10771024 mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
L_10771029:;
  /* 10771029 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 1077102e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 10771031 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10771033 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771035 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_10771036:;
  /* 10771036 mov esp, ebp */
  ESP = (EBP);
  /* 10771038 pop ebp */
  EBP = (pop32());
  /* 10771039 ret 4 */
  ESPCHK(0x10770f90u, _esp0);
  ESP += 8; return;
}

/* FUN_10011040 @ 0x10771040 (43 bytes, 11 insns) */
void f_10771040(void) {
  FTRACE(0x10771040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771040 push ebp */
  push32((uint32_t)(EBP));
  /* 10771041 mov ebp, esp */
  EBP = (ESP);
  /* 10771043 mov eax, dword ptr [0x107907dc] */
  EAX = (r32((uint32_t)(0x107907dc)));
  /* 10771048 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1077104d mov dword ptr [0x107907dc], eax */
  w32((uint32_t)(0x107907dc), (EAX));
  /* 10771052 call dword ptr [0x107932b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932b4))), 0x10771058u);
  /* 10771058 mov dword ptr [0x107907e0], eax */
  w32((uint32_t)(0x107907e0), (EAX));
  /* 1077105d mov ecx, dword ptr [0x107907e0] */
  ECX = (r32((uint32_t)(0x107907e0)));
  /* 10771063 mov dword ptr [0x107907c4], ecx */
  w32((uint32_t)(0x107907c4), (ECX));
  /* 10771069 pop ebp */
  EBP = (pop32());
  /* 1077106a ret  */
  ESPCHK(0x10771040u, _esp0);
  ESP += 4; return;
}

/* FUN_10011070 @ 0x10771070 (155 bytes, 57 insns) */
void f_10771070(void) {
  FTRACE(0x10771070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771070 push ebp */
  push32((uint32_t)(EBP));
  /* 10771071 mov ebp, esp */
  EBP = (ESP);
  /* 10771073 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771076 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077107a je 0x1077109b */
  if (C.zf) goto L_1077109b;
  /* 1077107c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077107f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10771082 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10771084 je 0x1077109b */
  if (C.zf) goto L_1077109b;
  /* 10771086 push 0x1078c8ac */
  push32((uint32_t)(0x1078c8acu));
  /* 1077108b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077108e push edx */
  push32((uint32_t)(EDX));
  /* 1077108f call 0x107705d0 */
  push32(0x10771094u); f_107705d0();
  /* 10771094 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10771099 jne 0x107710c3 */
  if (!C.zf) goto L_107710c3;
L_1077109b:;
  /* 1077109b push 8 */
  push32((uint32_t)(0x8u));
  /* 1077109d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107710a0 push eax */
  push32((uint32_t)(EAX));
  /* 107710a1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 107710a6 mov ecx, dword ptr [0x107907e0] */
  ECX = (r32((uint32_t)(0x107907e0)));
  /* 107710ac push ecx */
  push32((uint32_t)(ECX));
  /* 107710ad call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x107710b3u);
  /* 107710b3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107710b5 jne 0x107710bb */
  if (!C.zf) goto L_107710bb;
  /* 107710b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107710b9 jmp 0x10771107 */
  goto L_10771107;
L_107710bb:;
  /* 107710bb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 107710be mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 107710c1 jmp 0x107710fb */
  goto L_107710fb;
L_107710c3:;
  /* 107710c3 push 0x1078c8a8 */
  push32((uint32_t)(0x1078c8a8u));
  /* 107710c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107710cb push eax */
  push32((uint32_t)(EAX));
  /* 107710cc call 0x107705d0 */
  push32(0x107710d1u); f_107705d0();
  /* 107710d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107710d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107710d6 jne 0x107710fb */
  if (!C.zf) goto L_107710fb;
  /* 107710d8 push 8 */
  push32((uint32_t)(0x8u));
  /* 107710da lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 107710dd push ecx */
  push32((uint32_t)(ECX));
  /* 107710de push 0xb */
  push32((uint32_t)(0xbu));
  /* 107710e0 mov edx, dword ptr [0x107907e0] */
  EDX = (r32((uint32_t)(0x107907e0)));
  /* 107710e6 push edx */
  push32((uint32_t)(EDX));
  /* 107710e7 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x107710edu);
  /* 107710ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 107710ef jne 0x107710f5 */
  if (!C.zf) goto L_107710f5;
  /* 107710f1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107710f3 jmp 0x10771107 */
  goto L_10771107;
L_107710f5:;
  /* 107710f5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 107710f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_107710fb:;
  /* 107710fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107710fe push ecx */
  push32((uint32_t)(ECX));
  /* 107710ff call 0x107731f0 */
  push32(0x10771104u); f_107731f0();
  /* 10771104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10771107:;
  /* 10771107 mov esp, ebp */
  ESP = (EBP);
  /* 10771109 pop ebp */
  EBP = (pop32());
  /* 1077110a ret  */
  ESPCHK(0x10771070u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x10771110 (79 bytes, 26 insns) */
void f_10771110(void) {
  FTRACE(0x10771110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771110 push ebp */
  push32((uint32_t)(EBP));
  /* 10771111 mov ebp, esp */
  EBP = (ESP);
  /* 10771113 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771116 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1077111a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1077111e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10771125 jmp 0x10771130 */
  goto L_10771130;
L_10771127:;
  /* 10771127 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1077112a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077112d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10771130:;
  /* 10771130 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771134 jae 0x10771156 */
  if (!C.cf) goto L_10771156;
  /* 10771136 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771139 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1077113f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771142 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10771144 mov cx, word ptr [eax*2 + 0x1078f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1078f9c4)));
  /* 1077114c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077114e jne 0x10771154 */
  if (!C.zf) goto L_10771154;
  /* 10771150 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10771152 jmp 0x1077115b */
  goto L_1077115b;
L_10771154:;
  /* 10771154 jmp 0x10771127 */
  goto L_10771127;
L_10771156:;
  /* 10771156 mov eax, 1 */
  EAX = (0x1u);
L_1077115b:;
  /* 1077115b mov esp, ebp */
  ESP = (EBP);
  /* 1077115d pop ebp */
  EBP = (pop32());
  /* 1077115e ret  */
  ESPCHK(0x10771110u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x10771160 (135 bytes, 48 insns) */
void f_10771160(void) {
  FTRACE(0x10771160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771160 push ebp */
  push32((uint32_t)(EBP));
  /* 10771161 mov ebp, esp */
  EBP = (ESP);
  /* 10771163 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771166 push esi */
  push32((uint32_t)(ESI));
  /* 10771167 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077116a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1077116f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 10771174 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10771179 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1077117c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10771181 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10771184 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 10771186 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 10771189 push ecx */
  push32((uint32_t)(ECX));
  /* 1077118a push 1 */
  push32((uint32_t)(0x1u));
  /* 1077118c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077118f push edx */
  push32((uint32_t)(EDX));
  /* 10771190 call dword ptr [0x107907e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x107907e4))), 0x10771196u);
  /* 10771196 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10771198 jne 0x1077119e */
  if (!C.zf) goto L_1077119e;
  /* 1077119a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077119c jmp 0x107711e2 */
  goto L_107711e2;
L_1077119e:;
  /* 1077119e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 107711a1 push eax */
  push32((uint32_t)(EAX));
  /* 107711a2 call 0x107713d0 */
  push32(0x107711a7u); f_107713d0();
  /* 107711a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107711aa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107711ad je 0x107711dd */
  if (C.zf) goto L_107711dd;
  /* 107711af cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107711b3 je 0x107711dd */
  if (C.zf) goto L_107711dd;
  /* 107711b5 mov ecx, dword ptr [0x107907d4] */
  ECX = (r32((uint32_t)(0x107907d4)));
  /* 107711bb push ecx */
  push32((uint32_t)(ECX));
  /* 107711bc call 0x10771450 */
  push32(0x107711c1u); f_10771450();
  /* 107711c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107711c4 mov esi, eax */
  ESI = (EAX);
  /* 107711c6 mov edx, dword ptr [0x107907d4] */
  EDX = (r32((uint32_t)(0x107907d4)));
  /* 107711cc push edx */
  push32((uint32_t)(EDX));
  /* 107711cd call 0x10767770 */
  push32(0x107711d2u); f_10767770();
  /* 107711d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107711d5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107711d7 jne 0x107711dd */
  if (!C.zf) goto L_107711dd;
  /* 107711d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 107711db jmp 0x107711e2 */
  goto L_107711e2;
L_107711dd:;
  /* 107711dd mov eax, 1 */
  EAX = (0x1u);
L_107711e2:;
  /* 107711e2 pop esi */
  ESI = (pop32());
  /* 107711e3 mov esp, ebp */
  ESP = (EBP);
  /* 107711e5 pop ebp */
  EBP = (pop32());
  /* 107711e6 ret  */
  ESPCHK(0x10771160u, _esp0);
  ESP += 4; return;
}

/* FUN_100111f0 @ 0x107711f0 (77 bytes, 18 insns) */
void f_107711f0(void) {
  FTRACE(0x107711f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107711f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107711f1 mov ebp, esp */
  EBP = (ESP);
  /* 107711f3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107711f9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 10771203 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 10771209 push eax */
  push32((uint32_t)(EAX));
  /* 1077120a call dword ptr [0x107932b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932b0))), 0x10771210u);
  /* 10771210 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10771212 je 0x10771229 */
  if (C.zf) goto L_10771229;
  /* 10771214 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077121b jne 0x10771229 */
  if (!C.zf) goto L_10771229;
  /* 1077121d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 10771227 jmp 0x10771233 */
  goto L_10771233;
L_10771229:;
  /* 10771229 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_10771233:;
  /* 10771233 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10771239 mov esp, ebp */
  ESP = (EBP);
  /* 1077123b pop ebp */
  EBP = (pop32());
  /* 1077123c ret  */
  ESPCHK(0x107711f0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x10771240 (388 bytes, 118 insns) */
void f_10771240(void) {
  FTRACE(0x10771240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771240 push ebp */
  push32((uint32_t)(EBP));
  /* 10771241 mov ebp, esp */
  EBP = (ESP);
  /* 10771243 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1077124d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 10771254 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1077125b:;
  /* 1077125b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077125e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771261 jg 0x107713a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_107713a8;
  /* 10771267 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1077126a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077126d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1077126e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771270 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10771272 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10771275 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771278 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077127b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077127e cmp edx, dword ptr [ecx + 0x1078f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1078f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771284 jne 0x1077137e */
  if (!C.zf) goto L_1077137e;
  /* 1077128a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1077128d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10771290 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771294 ja 0x107712b7 */
  if ((!C.cf&&!C.zf)) goto L_107712b7;
  /* 10771296 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077129a je 0x10771329 */
  if (C.zf) goto L_10771329;
  /* 107712a0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712a4 je 0x107712d4 */
  if (C.zf) goto L_107712d4;
  /* 107712a6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712aa je 0x107712f6 */
  if (C.zf) goto L_107712f6;
  /* 107712ac cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712b0 je 0x10771318 */
  if (C.zf) goto L_10771318;
  /* 107712b2 jmp 0x10771348 */
  goto L_10771348;
L_107712b7:;
  /* 107712b7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712be je 0x107712e5 */
  if (C.zf) goto L_107712e5;
  /* 107712c0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712c7 je 0x10771307 */
  if (C.zf) goto L_10771307;
  /* 107712c9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107712d0 je 0x1077133a */
  if (C.zf) goto L_1077133a;
  /* 107712d2 jmp 0x10771348 */
  goto L_10771348;
L_107712d4:;
  /* 107712d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107712d7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107712da add ecx, 0x1078f524 */
  { uint32_t _a=(ECX),_b=(0x1078f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107712e0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 107712e3 jmp 0x10771348 */
  goto L_10771348;
L_107712e5:;
  /* 107712e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 107712e8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107712eb mov eax, dword ptr [edx + 0x1078f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1078f52c)));
  /* 107712f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 107712f4 jmp 0x10771348 */
  goto L_10771348;
L_107712f6:;
  /* 107712f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 107712f9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107712fc add ecx, 0x1078f530 */
  { uint32_t _a=(ECX),_b=(0x1078f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771302 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10771305 jmp 0x10771348 */
  goto L_10771348;
L_10771307:;
  /* 10771307 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077130a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077130d mov eax, dword ptr [edx + 0x1078f534] */
  EAX = (r32((uint32_t)(EDX + 0x1078f534)));
  /* 10771313 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10771316 jmp 0x10771348 */
  goto L_10771348;
L_10771318:;
  /* 10771318 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077131b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077131e add ecx, 0x1078f538 */
  { uint32_t _a=(ECX),_b=(0x1078f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771324 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10771327 jmp 0x10771348 */
  goto L_10771348;
L_10771329:;
  /* 10771329 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077132c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1077132f add edx, 0x1078f53c */
  { uint32_t _a=(EDX),_b=(0x1078f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771335 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10771338 jmp 0x10771348 */
  goto L_10771348;
L_1077133a:;
  /* 1077133a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077133d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10771340 add eax, 0x1078f544 */
  { uint32_t _a=(EAX),_b=(0x1078f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771345 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10771348:;
  /* 10771348 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077134c je 0x10771354 */
  if (C.zf) goto L_10771354;
  /* 1077134e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771352 jge 0x10771356 */
  if ((C.sf==C.of)) goto L_10771356;
L_10771354:;
  /* 10771354 jmp 0x107713a8 */
  goto L_107713a8;
L_10771356:;
  /* 10771356 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10771359 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1077135c push ecx */
  push32((uint32_t)(ECX));
  /* 1077135d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771360 push edx */
  push32((uint32_t)(EDX));
  /* 10771361 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771364 push eax */
  push32((uint32_t)(EAX));
  /* 10771365 call 0x10768160 */
  push32(0x1077136au); f_10768160();
  /* 1077136a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077136d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10771370 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771373 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 10771377 mov eax, 1 */
  EAX = (0x1u);
  /* 1077137c jmp 0x107713be */
  goto L_107713be;
L_1077137e:;
  /* 1077137e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771381 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10771384 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771387 cmp eax, dword ptr [edx + 0x1078f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1078f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077138d jae 0x1077139a */
  if (!C.cf) goto L_1077139a;
  /* 1077138f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10771392 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771395 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10771398 jmp 0x107713a3 */
  goto L_107713a3;
L_1077139a:;
  /* 1077139a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1077139d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 107713a0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_107713a3:;
  /* 107713a3 jmp 0x1077125b */
  goto L_1077125b;
L_107713a8:;
  /* 107713a8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 107713ab push eax */
  push32((uint32_t)(EAX));
  /* 107713ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 107713af push ecx */
  push32((uint32_t)(ECX));
  /* 107713b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 107713b3 push edx */
  push32((uint32_t)(EDX));
  /* 107713b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107713b7 push eax */
  push32((uint32_t)(EAX));
  /* 107713b8 call dword ptr [0x107932bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932bc))), 0x107713beu);
L_107713be:;
  /* 107713be mov esp, ebp */
  ESP = (EBP);
  /* 107713c0 pop ebp */
  EBP = (pop32());
  /* 107713c1 ret 0x10 */
  ESPCHK(0x10771240u, _esp0);
  ESP += 20; return;
}

/* FUN_100113d0 @ 0x107713d0 (118 bytes, 42 insns) */
void f_107713d0(void) {
  FTRACE(0x107713d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107713d0 push ebp */
  push32((uint32_t)(EBP));
  /* 107713d1 mov ebp, esp */
  EBP = (ESP);
  /* 107713d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 107713d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_107713dd:;
  /* 107713dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107713e0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 107713e2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 107713e5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107713e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107713ec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 107713ef mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 107713f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 107713f4 je 0x1077143f */
  if (C.zf) goto L_1077143f;
  /* 107713f6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 107713fa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107713fd jl 0x10771412 */
  if ((C.sf!=C.of)) goto L_10771412;
  /* 107713ff movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10771403 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771406 jg 0x10771412 */
  if ((!C.zf&&C.sf==C.of)) goto L_10771412;
  /* 10771408 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1077140b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1077140d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 10771410 jmp 0x1077142c */
  goto L_1077142c;
L_10771412:;
  /* 10771412 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10771416 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771419 jl 0x1077142c */
  if ((C.sf!=C.of)) goto L_1077142c;
  /* 1077141b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1077141f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771422 jg 0x1077142c */
  if ((!C.zf&&C.sf==C.of)) goto L_1077142c;
  /* 10771424 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10771427 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10771429 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1077142c:;
  /* 1077142c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1077142f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10771432 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10771436 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1077143a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1077143d jmp 0x107713dd */
  goto L_107713dd;
L_1077143f:;
  /* 1077143f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10771442 mov esp, ebp */
  ESP = (EBP);
  /* 10771444 pop ebp */
  EBP = (pop32());
  /* 10771445 ret  */
  ESPCHK(0x107713d0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x10771450 (101 bytes, 36 insns) */
void f_10771450(void) {
  FTRACE(0x10771450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771450 push ebp */
  push32((uint32_t)(EBP));
  /* 10771451 mov ebp, esp */
  EBP = (ESP);
  /* 10771453 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10771456 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1077145d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771460 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10771462 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10771465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771468 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1077146b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1077146e:;
  /* 1077146e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10771472 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771475 jl 0x10771480 */
  if ((C.sf!=C.of)) goto L_10771480;
  /* 10771477 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1077147b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077147e jle 0x10771492 */
  if ((C.zf||C.sf!=C.of)) goto L_10771492;
L_10771480:;
  /* 10771480 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 10771484 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771487 jl 0x107714ae */
  if ((C.sf!=C.of)) goto L_107714ae;
  /* 10771489 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1077148d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771490 jg 0x107714ae */
  if ((!C.zf&&C.sf==C.of)) goto L_107714ae;
L_10771492:;
  /* 10771492 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10771495 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10771498 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1077149b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077149e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 107714a0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 107714a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107714a6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 107714a9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 107714ac jmp 0x1077146e */
  goto L_1077146e;
L_107714ae:;
  /* 107714ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 107714b1 mov esp, ebp */
  ESP = (EBP);
  /* 107714b3 pop ebp */
  EBP = (pop32());
  /* 107714b4 ret  */
  ESPCHK(0x10771450u, _esp0);
  ESP += 4; return;
}

/* FUN_100114c0 @ 0x107714c0 (122 bytes, 39 insns) */
void f_107714c0(void) {
  FTRACE(0x107714c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107714c0 push ebp */
  push32((uint32_t)(EBP));
  /* 107714c1 mov ebp, esp */
  EBP = (ESP);
  /* 107714c3 push ecx */
  push32((uint32_t)(ECX));
  /* 107714c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107714c7 cmp eax, dword ptr [0x1079207c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1079207c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107714cd jae 0x107714f1 */
  if (!C.cf) goto L_107714f1;
  /* 107714cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107714d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 107714d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107714d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 107714db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107714de mov eax, dword ptr [ecx*4 + 0x10791f40] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10791f40)));
  /* 107714e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 107714ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 107714ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 107714ef jne 0x1077150c */
  if (!C.zf) goto L_1077150c;
L_107714f1:;
  /* 107714f1 call 0x1076c810 */
  push32(0x107714f6u); f_1076c810();
  /* 107714f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 107714fc call 0x1076c820 */
  push32(0x10771501u); f_1076c820();
  /* 10771501 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10771507 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1077150a jmp 0x10771536 */
  goto L_10771536;
L_1077150c:;
  /* 1077150c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077150f push edx */
  push32((uint32_t)(EDX));
  /* 10771510 call 0x1076e030 */
  push32(0x10771515u); f_1076e030();
  /* 10771515 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077151b push eax */
  push32((uint32_t)(EAX));
  /* 1077151c call 0x10771540 */
  push32(0x10771521u); f_10771540();
  /* 10771521 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771524 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10771527 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077152a push ecx */
  push32((uint32_t)(ECX));
  /* 1077152b call 0x1076e0c0 */
  push32(0x10771530u); f_1076e0c0();
  /* 10771530 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10771536:;
  /* 10771536 mov esp, ebp */
  ESP = (EBP);
  /* 10771538 pop ebp */
  EBP = (pop32());
  /* 10771539 ret  */
  ESPCHK(0x107714c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x10771540 (170 bytes, 59 insns) */
void f_10771540(void) {
  FTRACE(0x10771540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10771540 push ebp */
  push32((uint32_t)(EBP));
  /* 10771541 mov ebp, esp */
  EBP = (ESP);
  /* 10771543 push ecx */
  push32((uint32_t)(ECX));
  /* 10771544 push esi */
  push32((uint32_t)(ESI));
  /* 10771545 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771548 push eax */
  push32((uint32_t)(EAX));
  /* 10771549 call 0x1076deb0 */
  push32(0x1077154eu); f_1076deb0();
  /* 1077154e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771551 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771554 je 0x10771593 */
  if (C.zf) goto L_10771593;
  /* 10771556 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077155a je 0x10771562 */
  if (C.zf) goto L_10771562;
  /* 1077155c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771560 jne 0x1077157c */
  if (!C.zf) goto L_1077157c;
L_10771562:;
  /* 10771562 push 1 */
  push32((uint32_t)(0x1u));
  /* 10771564 call 0x1076deb0 */
  push32(0x10771569u); f_1076deb0();
  /* 10771569 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077156c mov esi, eax */
  ESI = (EAX);
  /* 1077156e push 2 */
  push32((uint32_t)(0x2u));
  /* 10771570 call 0x1076deb0 */
  push32(0x10771575u); f_1076deb0();
  /* 10771575 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771578 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1077157a je 0x10771593 */
  if (C.zf) goto L_10771593;
L_1077157c:;
  /* 1077157c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077157f push ecx */
  push32((uint32_t)(ECX));
  /* 10771580 call 0x1076deb0 */
  push32(0x10771585u); f_1076deb0();
  /* 10771585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771588 push eax */
  push32((uint32_t)(EAX));
  /* 10771589 call dword ptr [0x107932b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x107932b8))), 0x1077158fu);
  /* 1077158f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10771591 je 0x1077159c */
  if (C.zf) goto L_1077159c;
L_10771593:;
  /* 10771593 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1077159a jmp 0x107715a5 */
  goto L_107715a5;
L_1077159c:;
  /* 1077159c call dword ptr [0x10793370] */
  call_ind((uint32_t)(r32((uint32_t)(0x10793370))), 0x107715a2u);
  /* 107715a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_107715a5:;
  /* 107715a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 107715a8 push edx */
  push32((uint32_t)(EDX));
  /* 107715a9 call 0x1076ddd0 */
  push32(0x107715aeu); f_1076ddd0();
  /* 107715ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107715b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 107715b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 107715b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 107715ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 107715bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 107715c0 mov edx, dword ptr [eax*4 + 0x10791f40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10791f40)));
  /* 107715c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 107715cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107715d0 je 0x107715e3 */
  if (C.zf) goto L_107715e3;
  /* 107715d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 107715d5 push eax */
  push32((uint32_t)(EAX));
  /* 107715d6 call 0x1076c770 */
  push32(0x107715dbu); f_1076c770();
  /* 107715db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 107715de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 107715e1 jmp 0x107715e5 */
  goto L_107715e5;
L_107715e3:;
  /* 107715e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_107715e5:;
  /* 107715e5 pop esi */
  ESI = (pop32());
  /* 107715e6 mov esp, ebp */
  ESP = (EBP);
  /* 107715e8 pop ebp */
  EBP = (pop32());
  /* 107715e9 ret  */
  ESPCHK(0x10771540u, _esp0);
  ESP += 4; return;
}

/* FUN_100115f0 @ 0x107715f0 (146 bytes, 52 insns) */
void f_107715f0(void) {
  FTRACE(0x107715f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 107715f0 push ebp */
  push32((uint32_t)(EBP));
  /* 107715f1 mov ebp, esp */
  EBP = (ESP);
  /* 107715f3 push ebx */
  push32((uint32_t)(EBX));
  /* 107715f4 push esi */
  push32((uint32_t)(ESI));
  /* 107715f5 push edi */
  push32((uint32_t)(EDI));
L_107715f6:;
  /* 107715f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 107715fa jne 0x1077161a */
  if (!C.zf) goto L_1077161a;
  /* 107715fc push 0x1078c1e8 */
  push32((uint32_t)(0x1078c1e8u));
  /* 10771601 push 0 */
  push32((uint32_t)(0x0u));
  /* 10771603 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 10771605 push 0x1078c8b0 */
  push32((uint32_t)(0x1078c8b0u));
  /* 1077160a push 2 */
  push32((uint32_t)(0x2u));
  /* 1077160c call 0x10763a00 */
  push32(0x10771611u); f_10763a00();
  /* 10771611 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10771614 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10771617 jne 0x1077161a */
  if (!C.zf) goto L_1077161a;
  /* 10771619 int3  */
  x86_unimpl("int3 @ 0x10771619");
L_1077161a:;
  /* 1077161a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1077161c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1077161e jne 0x107715f6 */
  if (!C.zf) goto L_107715f6;
  /* 10771620 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771623 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10771626 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1077162c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1077162e je 0x1077167d */
  if (C.zf) goto L_1077167d;
  /* 10771630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771633 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 10771636 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 10771639 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1077163b je 0x1077167d */
  if (C.zf) goto L_1077167d;
  /* 1077163d push 2 */
  push32((uint32_t)(0x2u));
  /* 1077163f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771642 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 10771645 push eax */
  push32((uint32_t)(EAX));
  /* 10771646 call 0x107653d0 */
  push32(0x1077164bu); f_107653d0();
  /* 1077164b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1077164e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771651 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 10771654 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1077165a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077165d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 10771660 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771663 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 10771669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1077166c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 10771673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10771676 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1077167d:;
  /* 1077167d pop edi */
  EDI = (pop32());
  /* 1077167e pop esi */
  ESI = (pop32());
  /* 1077167f pop ebx */
  EBX = (pop32());
  /* 10771680 pop ebp */
  EBP = (pop32());
  /* 10771681 ret  */
  ESPCHK(0x107715f0u, _esp0);
  ESP += 4; return;
}

