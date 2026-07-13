#include "recomp.h"

/* FUN_1000c8c0 @ 0x1185c8c0 (116 bytes, 34 insns) */
void f_1185c8c0(void) {
  FTRACE(0x1185c8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1185c8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1185c8c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1185c8cb push 9 */
  push32((uint32_t)(0x9u));
  /* 1185c8cd call 0x1185c0e0 */
  push32(0x1185c8d2u); f_1185c0e0();
  /* 1185c8d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185c8d5 call 0x1185dfd0 */
  push32(0x1185c8dau); f_1185dfd0();
  /* 1185c8da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185c8dc jge 0x1185c8e5 */
  if ((C.sf==C.of)) goto L_1185c8e5;
  /* 1185c8de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1185c8e5:;
  /* 1185c8e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 1185c8e7 call 0x1185c180 */
  push32(0x1185c8ecu); f_1185c180();
  /* 1185c8ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185c8ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1185c8f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185c8f3 mov eax, dword ptr [0x1188622c] */
  EAX = (r32((uint32_t)(0x1188622c)));
  /* 1185c8f8 push eax */
  push32((uint32_t)(EAX));
  /* 1185c8f9 call dword ptr [0x11887390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887390))), 0x1185c8ffu);
  /* 1185c8ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185c901 jne 0x1185c92d */
  if (!C.zf) goto L_1185c92d;
  /* 1185c903 call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x1185c909u);
  /* 1185c909 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185c90c jne 0x1185c926 */
  if (!C.zf) goto L_1185c926;
  /* 1185c90e call 0x118605c0 */
  push32(0x1185c913u); f_118605c0();
  /* 1185c913 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 1185c919 call 0x118605b0 */
  push32(0x1185c91eu); f_118605b0();
  /* 1185c91e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 1185c924 jmp 0x1185c92d */
  goto L_1185c92d;
L_1185c926:;
  /* 1185c926 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_1185c92d:;
  /* 1185c92d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185c930 mov esp, ebp */
  ESP = (EBP);
  /* 1185c932 pop ebp */
  EBP = (pop32());
  /* 1185c933 ret  */
  ESPCHK(0x1185c8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c940 @ 0x1185c940 (10 bytes, 5 insns) */
void f_1185c940(void) {
  FTRACE(0x1185c940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c940 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c941 mov ebp, esp */
  EBP = (ESP);
  /* 1185c943 call 0x1185c8c0 */
  push32(0x1185c948u); f_1185c8c0();
  /* 1185c948 pop ebp */
  EBP = (pop32());
  /* 1185c949 ret  */
  ESPCHK(0x1185c940u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c950 @ 0x1185c950 (10 bytes, 5 insns) */
void f_1185c950(void) {
  FTRACE(0x1185c950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c950 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c951 mov ebp, esp */
  EBP = (ESP);
  /* 1185c953 mov eax, dword ptr [0x11882c94] */
  EAX = (r32((uint32_t)(0x11882c94)));
  /* 1185c958 pop ebp */
  EBP = (pop32());
  /* 1185c959 ret  */
  ESPCHK(0x1185c950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c960 @ 0x1185c960 (31 bytes, 11 insns) */
void f_1185c960(void) {
  FTRACE(0x1185c960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c960 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c961 mov ebp, esp */
  EBP = (ESP);
  /* 1185c963 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185c96a jbe 0x1185c970 */
  if ((C.cf||C.zf)) goto L_1185c970;
  /* 1185c96c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185c96e jmp 0x1185c97d */
  goto L_1185c97d;
L_1185c970:;
  /* 1185c970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185c973 mov dword ptr [0x11882c94], eax */
  w32((uint32_t)(0x11882c94), (EAX));
  /* 1185c978 mov eax, 1 */
  EAX = (0x1u);
L_1185c97d:;
  /* 1185c97d pop ebp */
  EBP = (pop32());
  /* 1185c97e ret  */
  ESPCHK(0x1185c960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x1185c980 (89 bytes, 20 insns) */
void f_1185c980(void) {
  FTRACE(0x1185c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c980 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c981 mov ebp, esp */
  EBP = (ESP);
  /* 1185c983 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1185c988 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185c98a mov eax, dword ptr [0x1188622c] */
  EAX = (r32((uint32_t)(0x1188622c)));
  /* 1185c98f push eax */
  push32((uint32_t)(EAX));
  /* 1185c990 call dword ptr [0x11887350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887350))), 0x1185c996u);
  /* 1185c996 mov dword ptr [0x11886228], eax */
  w32((uint32_t)(0x11886228), (EAX));
  /* 1185c99b cmp dword ptr [0x11886228], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11886228))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185c9a2 jne 0x1185c9a8 */
  if (!C.zf) goto L_1185c9a8;
  /* 1185c9a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185c9a6 jmp 0x1185c9d7 */
  goto L_1185c9d7;
L_1185c9a8:;
  /* 1185c9a8 mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185c9ae mov dword ptr [0x1188621c], ecx */
  w32((uint32_t)(0x1188621c), (ECX));
  /* 1185c9b4 mov dword ptr [0x11886220], 0 */
  w32((uint32_t)(0x11886220), (0x0u));
  /* 1185c9be mov dword ptr [0x11886224], 0 */
  w32((uint32_t)(0x11886224), (0x0u));
  /* 1185c9c8 mov dword ptr [0x11886208], 0x10 */
  w32((uint32_t)(0x11886208), (0x10u));
  /* 1185c9d2 mov eax, 1 */
  EAX = (0x1u);
L_1185c9d7:;
  /* 1185c9d7 pop ebp */
  EBP = (pop32());
  /* 1185c9d8 ret  */
  ESPCHK(0x1185c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9e0 @ 0x1185c9e0 (85 bytes, 29 insns) */
void f_1185c9e0(void) {
  FTRACE(0x1185c9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185c9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185c9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1185c9e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185c9e6 mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185c9eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185c9ee mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185c9f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185c9f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1185c9f9 mov edx, dword ptr [0x11886228] */
  EDX = (r32((uint32_t)(0x11886228)));
  /* 1185c9ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1185ca02:;
  /* 1185ca02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ca08 jae 0x1185ca2f */
  if (!C.cf) goto L_1185ca2f;
  /* 1185ca0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ca10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ca13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185ca16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ca1d jae 0x1185ca24 */
  if (!C.cf) goto L_1185ca24;
  /* 1185ca1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca22 jmp 0x1185ca31 */
  goto L_1185ca31;
L_1185ca24:;
  /* 1185ca24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ca2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1185ca2d jmp 0x1185ca02 */
  goto L_1185ca02;
L_1185ca2f:;
  /* 1185ca2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1185ca31:;
  /* 1185ca31 mov esp, ebp */
  ESP = (EBP);
  /* 1185ca33 pop ebp */
  EBP = (pop32());
  /* 1185ca34 ret  */
  ESPCHK(0x1185c9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca40 @ 0x1185ca40 (95 bytes, 33 insns) */
void f_1185ca40(void) {
  FTRACE(0x1185ca40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185ca40 push ebp */
  push32((uint32_t)(EBP));
  /* 1185ca41 mov ebp, esp */
  EBP = (ESP);
  /* 1185ca43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ca46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ca49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185ca4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ca4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1185ca52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1185ca58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185ca5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185ca60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ca63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185ca65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ca68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185ca6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185ca6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ca6f jne 0x1185ca91 */
  if (!C.zf) goto L_1185ca91;
  /* 1185ca71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1185ca77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185ca79 jne 0x1185ca91 */
  if (!C.zf) goto L_1185ca91;
  /* 1185ca7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ca7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 1185ca84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185ca86 je 0x1185ca91 */
  if (C.zf) goto L_1185ca91;
  /* 1185ca88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1185ca8f jmp 0x1185ca98 */
  goto L_1185ca98;
L_1185ca91:;
  /* 1185ca91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1185ca98:;
  /* 1185ca98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185ca9b mov esp, ebp */
  ESP = (EBP);
  /* 1185ca9d pop ebp */
  EBP = (pop32());
  /* 1185ca9e ret  */
  ESPCHK(0x1185ca40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000caa0 @ 0x1185caa0 (1485 bytes, 453 insns) */
void f_1185caa0(void) {
  FTRACE(0x1185caa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185caa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185caa1 mov ebp, esp */
  EBP = (ESP);
  /* 1185caa3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185caa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185caa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185caac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1185caaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cab2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185cab5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cab8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1185cabb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185cabe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1185cac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185cac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cac7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185cacd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cad0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 1185cad7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1185cada mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185cadd sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cae0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1185cae3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cae6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185cae8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185caeb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1185caee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185caf1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185caf4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 1185caf7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cafa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185cafc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1185caff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cb02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1185cb05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1185cb08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185cb0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1185cb0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cb10 jne 0x1185cc38 */
  if (!C.zf) goto L_1185cc38;
  /* 1185cb16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185cb19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185cb1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cb1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185cb22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cb26 jbe 0x1185cb2f */
  if ((C.cf||C.zf)) goto L_1185cb2f;
  /* 1185cb28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1185cb2f:;
  /* 1185cb2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cb32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cb35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185cb38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cb3b jne 0x1185cc11 */
  if (!C.zf) goto L_1185cc11;
  /* 1185cb41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cb45 jae 0x1185cba6 */
  if (!C.cf) goto L_1185cba6;
  /* 1185cb47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185cb4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185cb4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185cb51 not eax */
  EAX = (~(EAX));
  /* 1185cb53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cb56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cb59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1185cb5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cb5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cb62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cb65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1185cb69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cb6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cb6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1185cb72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185cb75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cb78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cb7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1185cb7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cb81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cb84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185cb88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185cb8a jne 0x1185cba4 */
  if (!C.zf) goto L_1185cba4;
  /* 1185cb8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185cb91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185cb94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185cb96 not eax */
  EAX = (~(EAX));
  /* 1185cb98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cb9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185cb9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185cb9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cba2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1185cba4:;
  /* 1185cba4 jmp 0x1185cc11 */
  goto L_1185cc11;
L_1185cba6:;
  /* 1185cba6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185cba9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cbac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cbb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185cbb3 not edx */
  EDX = (~(EDX));
  /* 1185cbb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cbb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cbbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1185cbc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185cbc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cbc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cbca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1185cbd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cbd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cbd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185cbda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185cbdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cbe0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cbe3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1185cbe6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cbe9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cbec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185cbf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cbf2 jne 0x1185cc11 */
  if (!C.zf) goto L_1185cc11;
  /* 1185cbf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185cbf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cbfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cbff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185cc01 not edx */
  EDX = (~(EDX));
  /* 1185cc03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cc06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185cc09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cc0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cc0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1185cc11:;
  /* 1185cc11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cc14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185cc17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cc1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185cc1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1185cc20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cc23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185cc26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185cc29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185cc2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185cc2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185cc32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cc35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_1185cc38:;
  /* 1185cc38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185cc3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1185cc3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cc41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1185cc44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cc48 jbe 0x1185cc51 */
  if ((C.cf||C.zf)) goto L_1185cc51;
  /* 1185cc4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1185cc51:;
  /* 1185cc51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185cc54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1185cc57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cc59 jne 0x1185cdb5 */
  if (!C.zf) goto L_1185cdb5;
  /* 1185cc5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cc62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cc65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 1185cc68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185cc6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1185cc6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cc71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1185cc74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cc78 jbe 0x1185cc81 */
  if ((C.cf||C.zf)) goto L_1185cc81;
  /* 1185cc7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_1185cc81:;
  /* 1185cc81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185cc84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cc87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1185cc8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185cc8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185cc90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cc93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1185cc96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cc9a jbe 0x1185cca3 */
  if ((C.cf||C.zf)) goto L_1185cca3;
  /* 1185cc9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_1185cca3:;
  /* 1185cca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cca6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cca9 je 0x1185cdaf */
  if (C.zf) goto L_1185cdaf;
  /* 1185ccaf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185ccb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185ccb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185ccb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ccbb jne 0x1185cd91 */
  if (!C.zf) goto L_1185cd91;
  /* 1185ccc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ccc5 jae 0x1185cd26 */
  if (!C.cf) goto L_1185cd26;
  /* 1185ccc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cccc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cccf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185ccd1 not edx */
  EDX = (~(EDX));
  /* 1185ccd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ccd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ccd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1185ccdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185ccdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cce2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cce5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1185cce9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ccec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ccef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185ccf2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185ccf5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ccf8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ccfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1185ccfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cd04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185cd08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cd0a jne 0x1185cd24 */
  if (!C.zf) goto L_1185cd24;
  /* 1185cd0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cd11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cd14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185cd16 not edx */
  EDX = (~(EDX));
  /* 1185cd18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cd1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185cd1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cd1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cd22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1185cd24:;
  /* 1185cd24 jmp 0x1185cd91 */
  goto L_1185cd91;
L_1185cd26:;
  /* 1185cd26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cd29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cd2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185cd31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185cd33 not eax */
  EAX = (~(EAX));
  /* 1185cd35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cd38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1185cd42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cd44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cd47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1185cd51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cd57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1185cd5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185cd5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cd63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1185cd66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cd69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cd6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185cd70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185cd72 jne 0x1185cd91 */
  if (!C.zf) goto L_1185cd91;
  /* 1185cd74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cd77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cd7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185cd7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185cd81 not eax */
  EAX = (~(EAX));
  /* 1185cd83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cd86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185cd89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185cd8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cd8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185cd91:;
  /* 1185cd91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185cd94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185cd97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185cd9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185cd9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1185cda0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185cda3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185cda6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185cda9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185cdac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1185cdaf:;
  /* 1185cdaf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185cdb2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_1185cdb5:;
  /* 1185cdb5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185cdb8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1185cdbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cdbd jne 0x1185cdcb */
  if (!C.zf) goto L_1185cdcb;
  /* 1185cdbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185cdc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cdc5 je 0x1185cedb */
  if (C.zf) goto L_1185cedb;
L_1185cdcb:;
  /* 1185cdcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185cdce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185cdd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1185cdd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1185cdd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cdda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185cddd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185cde0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1185cde3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cde6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185cde9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1185cdec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185cdef mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cdf2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1185cdf5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cdf8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185cdfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cdfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1185ce01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185ce04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185ce07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185ce0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ce0d jne 0x1185cedb */
  if (!C.zf) goto L_1185cedb;
  /* 1185ce13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ce17 jae 0x1185ce74 */
  if (!C.cf) goto L_1185ce74;
  /* 1185ce19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185ce23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185ce2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185ce2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1185ce38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ce3a jne 0x1185ce52 */
  if (!C.zf) goto L_1185ce52;
  /* 1185ce3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185ce41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185ce44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185ce46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ce49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185ce4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185ce4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ce50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1185ce52:;
  /* 1185ce52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185ce57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185ce5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185ce5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ce5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1185ce66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185ce68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ce6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1185ce72 jmp 0x1185cedb */
  goto L_1185cedb;
L_1185ce74:;
  /* 1185ce74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185ce7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185ce87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185ce8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ce8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ce90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1185ce93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ce95 jne 0x1185ceb2 */
  if (!C.zf) goto L_1185ceb2;
  /* 1185ce97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185ce9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ce9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cea2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185cea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185cea7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185ceaa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185ceac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ceaf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1185ceb2:;
  /* 1185ceb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185ceb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ceb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185cebd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185cebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185cec2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185cec5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1185cecc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ced1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1185ced4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1185cedb:;
  /* 1185cedb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cede mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185cee1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1185cee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185cee6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cee9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185ceec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1185ceef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185cef2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185cef4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185cef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185cefa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1185cefc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185ceff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cf02 jne 0x1185d069 */
  if (!C.zf) goto L_1185d069;
  /* 1185cf08 cmp dword ptr [0x11886220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11886220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cf0f je 0x1185d058 */
  if (C.zf) goto L_1185d058;
  /* 1185cf15 mov eax, dword ptr [0x11886218] */
  EAX = (r32((uint32_t)(0x11886218)));
  /* 1185cf1a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1185cf1d mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185cf23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185cf26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185cf28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1185cf2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1185cf30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1185cf35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185cf38 push eax */
  push32((uint32_t)(EAX));
  /* 1185cf39 call dword ptr [0x1188736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188736c))), 0x1185cf3fu);
  /* 1185cf3f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185cf44 mov ecx, dword ptr [0x11886218] */
  ECX = (r32((uint32_t)(0x11886218)));
  /* 1185cf4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185cf4c mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185cf51 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185cf54 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185cf56 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185cf5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185cf5f mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185cf64 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185cf67 mov edx, dword ptr [0x11886218] */
  EDX = (r32((uint32_t)(0x11886218)));
  /* 1185cf6d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1185cf78 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185cf7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185cf80 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1185cf83 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185cf86 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185cf8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185cf8e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1185cf91 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185cf97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1185cf9a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1185cf9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185cfa0 jne 0x1185cfb6 */
  if (!C.zf) goto L_1185cfb6;
  /* 1185cfa2 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185cfa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185cfab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1185cfad mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185cfb3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1185cfb6:;
  /* 1185cfb6 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185cfbc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185cfc0 jne 0x1185d058 */
  if (!C.zf) goto L_1185d058;
  /* 1185cfc6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1185cfcb push 0 */
  push32((uint32_t)(0x0u));
  /* 1185cfcd mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185cfd2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1185cfd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1185cfd6 call dword ptr [0x1188736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188736c))), 0x1185cfdcu);
  /* 1185cfdc mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185cfe2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1185cfe5 push eax */
  push32((uint32_t)(EAX));
  /* 1185cfe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185cfe8 mov ecx, dword ptr [0x1188622c] */
  ECX = (r32((uint32_t)(0x1188622c)));
  /* 1185cfee push ecx */
  push32((uint32_t)(ECX));
  /* 1185cfef call dword ptr [0x1188737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188737c))), 0x1185cff5u);
  /* 1185cff5 mov edx, dword ptr [0x11886224] */
  EDX = (r32((uint32_t)(0x11886224)));
  /* 1185cffb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185cffe mov eax, dword ptr [0x11886228] */
  EAX = (r32((uint32_t)(0x11886228)));
  /* 1185d003 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d005 mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185d00b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d00e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d010 push eax */
  push32((uint32_t)(EAX));
  /* 1185d011 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185d017 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d01a push edx */
  push32((uint32_t)(EDX));
  /* 1185d01b mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185d020 push eax */
  push32((uint32_t)(EAX));
  /* 1185d021 call 0x118605d0 */
  push32(0x1185d026u); f_118605d0();
  /* 1185d026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d029 mov ecx, dword ptr [0x11886224] */
  ECX = (r32((uint32_t)(0x11886224)));
  /* 1185d02f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d032 mov dword ptr [0x11886224], ecx */
  w32((uint32_t)(0x11886224), (ECX));
  /* 1185d038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d03b cmp edx, dword ptr [0x11886220] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11886220))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d041 jbe 0x1185d04c */
  if ((C.cf||C.zf)) goto L_1185d04c;
  /* 1185d043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d046 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d049 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1185d04c:;
  /* 1185d04c mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185d052 mov dword ptr [0x1188621c], ecx */
  w32((uint32_t)(0x1188621c), (ECX));
L_1185d058:;
  /* 1185d058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d05b mov dword ptr [0x11886220], edx */
  w32((uint32_t)(0x11886220), (EDX));
  /* 1185d061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d064 mov dword ptr [0x11886218], eax */
  w32((uint32_t)(0x11886218), (EAX));
L_1185d069:;
  /* 1185d069 mov esp, ebp */
  ESP = (EBP);
  /* 1185d06b pop ebp */
  EBP = (pop32());
  /* 1185d06c ret  */
  ESPCHK(0x1185caa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d070 @ 0x1185d070 (1334 bytes, 427 insns) */
void f_1185d070(void) {
  FTRACE(0x1185d070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185d070 push ebp */
  push32((uint32_t)(EBP));
  /* 1185d071 mov ebp, esp */
  EBP = (ESP);
  /* 1185d073 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d076 push esi */
  push32((uint32_t)(ESI));
  /* 1185d077 mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185d07c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d07f mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185d085 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d087 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1185d08a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d08d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d090 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 1185d093 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1185d096 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d099 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1185d09c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d09f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1185d0a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d0a6 jge 0x1185d0bc */
  if ((C.sf==C.of)) goto L_1185d0bc;
  /* 1185d0a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1185d0ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d0ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d0b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185d0b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1185d0ba jmp 0x1185d0d1 */
  goto L_1185d0d1;
L_1185d0bc:;
  /* 1185d0bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1185d0c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d0c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d0c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185d0cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d0ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_1185d0d1:;
  /* 1185d0d1 mov ecx, dword ptr [0x1188621c] */
  ECX = (r32((uint32_t)(0x1188621c)));
  /* 1185d0d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1185d0da:;
  /* 1185d0da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d0dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d0e0 jae 0x1185d106 */
  if (!C.cf) goto L_1185d106;
  /* 1185d0e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d0e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d0e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1185d0ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d0ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185d0f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 1185d0f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d0f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d0f7 je 0x1185d0fb */
  if (C.zf) goto L_1185d0fb;
  /* 1185d0f9 jmp 0x1185d106 */
  goto L_1185d106;
L_1185d0fb:;
  /* 1185d0fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d0fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1185d104 jmp 0x1185d0da */
  goto L_1185d0da;
L_1185d106:;
  /* 1185d106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d10c jne 0x1185d1ed */
  if (!C.zf) goto L_1185d1ed;
  /* 1185d112 mov eax, dword ptr [0x11886228] */
  EAX = (r32((uint32_t)(0x11886228)));
  /* 1185d117 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1185d11a:;
  /* 1185d11a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d11d cmp ecx, dword ptr [0x1188621c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1188621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d123 jae 0x1185d149 */
  if (!C.cf) goto L_1185d149;
  /* 1185d125 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d12b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 1185d12d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d130 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185d133 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 1185d136 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185d13a je 0x1185d13e */
  if (C.zf) goto L_1185d13e;
  /* 1185d13c jmp 0x1185d149 */
  goto L_1185d149;
L_1185d13e:;
  /* 1185d13e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d141 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d144 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d147 jmp 0x1185d11a */
  goto L_1185d11a;
L_1185d149:;
  /* 1185d149 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d14c cmp ecx, dword ptr [0x1188621c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1188621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d152 jne 0x1185d1ed */
  if (!C.zf) goto L_1185d1ed;
L_1185d158:;
  /* 1185d158 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d15b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d15e jae 0x1185d176 */
  if (!C.cf) goto L_1185d176;
  /* 1185d160 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d163 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d167 je 0x1185d16b */
  if (C.zf) goto L_1185d16b;
  /* 1185d169 jmp 0x1185d176 */
  goto L_1185d176;
L_1185d16b:;
  /* 1185d16b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d16e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d171 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1185d174 jmp 0x1185d158 */
  goto L_1185d158;
L_1185d176:;
  /* 1185d176 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d179 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d17c jne 0x1185d1c7 */
  if (!C.zf) goto L_1185d1c7;
  /* 1185d17e mov eax, dword ptr [0x11886228] */
  EAX = (r32((uint32_t)(0x11886228)));
  /* 1185d183 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1185d186:;
  /* 1185d186 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d189 cmp ecx, dword ptr [0x1188621c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1188621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d18f jae 0x1185d1a7 */
  if (!C.cf) goto L_1185d1a7;
  /* 1185d191 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d194 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d198 je 0x1185d19c */
  if (C.zf) goto L_1185d19c;
  /* 1185d19a jmp 0x1185d1a7 */
  goto L_1185d1a7;
L_1185d19c:;
  /* 1185d19c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d19f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d1a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d1a5 jmp 0x1185d186 */
  goto L_1185d186;
L_1185d1a7:;
  /* 1185d1a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1aa cmp ecx, dword ptr [0x1188621c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1188621c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d1b0 jne 0x1185d1c7 */
  if (!C.zf) goto L_1185d1c7;
  /* 1185d1b2 call 0x1185d5b0 */
  push32(0x1185d1b7u); f_1185d5b0();
  /* 1185d1b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d1ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d1be jne 0x1185d1c7 */
  if (!C.zf) goto L_1185d1c7;
  /* 1185d1c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d1c2 jmp 0x1185d5a1 */
  goto L_1185d5a1;
L_1185d1c7:;
  /* 1185d1c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1ca push edx */
  push32((uint32_t)(EDX));
  /* 1185d1cb call 0x1185d6c0 */
  push32(0x1185d1d0u); f_1185d6c0();
  /* 1185d1d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d1d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1185d1d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1185d1db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185d1e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d1e4 jne 0x1185d1ed */
  if (!C.zf) goto L_1185d1ed;
  /* 1185d1e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d1e8 jmp 0x1185d5a1 */
  goto L_1185d5a1;
L_1185d1ed:;
  /* 1185d1ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1f0 mov dword ptr [0x1188621c], edx */
  w32((uint32_t)(0x1188621c), (EDX));
  /* 1185d1f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d1f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185d1fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 1185d1ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185d204 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1185d207 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d20b je 0x1185d230 */
  if (C.zf) goto L_1185d230;
  /* 1185d20d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d210 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d216 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 1185d21a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d21d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d220 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1185d223 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1185d22a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1185d22c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185d22e jne 0x1185d265 */
  if (!C.zf) goto L_1185d265;
L_1185d230:;
  /* 1185d230 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_1185d237:;
  /* 1185d237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d23a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d23d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d240 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1185d244 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d247 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d24a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1185d24d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 1185d254 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1185d256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185d258 jne 0x1185d265 */
  if (!C.zf) goto L_1185d265;
  /* 1185d25a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d25d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d260 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1185d263 jmp 0x1185d237 */
  goto L_1185d237;
L_1185d265:;
  /* 1185d265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d268 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d26e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d271 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1185d278 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185d27b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1185d282 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d285 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d288 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d28b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1185d28f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1185d292 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d296 jne 0x1185d2b2 */
  if (!C.zf) goto L_1185d2b2;
  /* 1185d298 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1185d29f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d2a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d2a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1185d2a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1185d2af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_1185d2b2:;
  /* 1185d2b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d2b6 jl 0x1185d2cb */
  if ((C.sf!=C.of)) goto L_1185d2cb;
  /* 1185d2b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185d2bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1185d2bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1185d2c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d2c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d2c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1185d2c9 jmp 0x1185d2b2 */
  goto L_1185d2b2;
L_1185d2cb:;
  /* 1185d2cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d2d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 1185d2d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1185d2d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d2db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185d2dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d2e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1185d2e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185d2e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1185d2e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d2ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1185d2ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d2f3 jle 0x1185d2fc */
  if ((C.zf||C.sf!=C.of)) goto L_1185d2fc;
  /* 1185d2f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_1185d2fc:;
  /* 1185d2fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d2ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d302 je 0x1185d520 */
  if (C.zf) goto L_1185d520;
  /* 1185d308 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d30b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d30e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185d311 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d314 jne 0x1185d3ea */
  if (!C.zf) goto L_1185d3ea;
  /* 1185d31a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d31e jge 0x1185d37f */
  if ((C.sf==C.of)) goto L_1185d37f;
  /* 1185d320 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185d325 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d328 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d32a not eax */
  EAX = (~(EAX));
  /* 1185d32c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d32f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d332 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1185d336 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d338 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d33b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d33e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1185d342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d345 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d348 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1185d34b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185d34e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d351 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d354 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1185d357 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d35a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d35d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185d361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185d363 jne 0x1185d37d */
  if (!C.zf) goto L_1185d37d;
  /* 1185d365 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185d36a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d36d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d36f not eax */
  EAX = (~(EAX));
  /* 1185d371 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d374 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185d376 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185d378 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d37b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1185d37d:;
  /* 1185d37d jmp 0x1185d3ea */
  goto L_1185d3ea;
L_1185d37f:;
  /* 1185d37f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d382 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d385 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d38a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d38c not edx */
  EDX = (~(EDX));
  /* 1185d38e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d391 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d394 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1185d39b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d39d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d3a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d3a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1185d3aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d3ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d3b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185d3b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185d3b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d3b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d3bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1185d3bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d3c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d3c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185d3c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d3cb jne 0x1185d3ea */
  if (!C.zf) goto L_1185d3ea;
  /* 1185d3cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d3d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d3d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d3d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d3da not edx */
  EDX = (~(EDX));
  /* 1185d3dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d3df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185d3e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d3e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d3e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1185d3ea:;
  /* 1185d3ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d3ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185d3f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d3f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185d3f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1185d3f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d3fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185d3ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d402 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185d405 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185d408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d40c je 0x1185d520 */
  if (C.zf) goto L_1185d520;
  /* 1185d412 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d418 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1185d41b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1185d41e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d424 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185d427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1185d42a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d42d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d430 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1185d433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d436 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d439 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1185d43c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d43f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185d442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d445 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1185d448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d44b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d44e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185d451 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d454 jne 0x1185d520 */
  if (!C.zf) goto L_1185d520;
  /* 1185d45a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d45e jge 0x1185d4ba */
  if ((C.sf==C.of)) goto L_1185d4ba;
  /* 1185d460 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d463 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d466 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185d46a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d46d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d470 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1185d473 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185d475 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d478 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d47b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1185d47e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d480 jne 0x1185d498 */
  if (!C.zf) goto L_1185d498;
  /* 1185d482 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185d487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d48a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d48c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d48f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185d491 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185d493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1185d498:;
  /* 1185d498 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d49d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d4a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d4a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d4a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d4a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1185d4ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d4ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d4b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d4b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1185d4b8 jmp 0x1185d520 */
  goto L_1185d520;
L_1185d4ba:;
  /* 1185d4ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d4bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d4c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185d4c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d4c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d4ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1185d4cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185d4cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d4d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d4d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1185d4d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d4da jne 0x1185d4f7 */
  if (!C.zf) goto L_1185d4f7;
  /* 1185d4dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d4df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d4e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185d4e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d4e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d4ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185d4ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185d4f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d4f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185d4f7:;
  /* 1185d4f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d4fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d4fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d502 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d504 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d507 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d50a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1185d511 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d513 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d516 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d519 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1185d520:;
  /* 1185d520 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d524 je 0x1185d53a */
  if (C.zf) goto L_1185d53a;
  /* 1185d526 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185d52c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1185d52e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d531 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185d537 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1185d53a:;
  /* 1185d53a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d53d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d540 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1185d543 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d546 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d54c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1185d54e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d554 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d557 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d55a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1185d55d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d560 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185d562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d565 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185d567 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d56a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d56d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1185d56f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d571 jne 0x1185d593 */
  if (!C.zf) goto L_1185d593;
  /* 1185d573 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d576 cmp eax, dword ptr [0x11886220] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11886220))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d57c jne 0x1185d593 */
  if (!C.zf) goto L_1185d593;
  /* 1185d57e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d581 cmp ecx, dword ptr [0x11886218] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11886218))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d587 jne 0x1185d593 */
  if (!C.zf) goto L_1185d593;
  /* 1185d589 mov dword ptr [0x11886220], 0 */
  w32((uint32_t)(0x11886220), (0x0u));
L_1185d593:;
  /* 1185d593 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1185d596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d599 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1185d59b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d59e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1185d5a1:;
  /* 1185d5a1 pop esi */
  ESI = (pop32());
  /* 1185d5a2 mov esp, ebp */
  ESP = (EBP);
  /* 1185d5a4 pop ebp */
  EBP = (pop32());
  /* 1185d5a5 ret  */
  ESPCHK(0x1185d070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5b0 @ 0x1185d5b0 (271 bytes, 78 insns) */
void f_1185d5b0(void) {
  FTRACE(0x1185d5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185d5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185d5b1 mov ebp, esp */
  EBP = (ESP);
  /* 1185d5b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1185d5b4 mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185d5b9 cmp eax, dword ptr [0x11886208] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11886208))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d5bf jne 0x1185d60b */
  if (!C.zf) goto L_1185d60b;
  /* 1185d5c1 mov ecx, dword ptr [0x11886208] */
  ECX = (r32((uint32_t)(0x11886208)));
  /* 1185d5c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d5ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d5cd push ecx */
  push32((uint32_t)(ECX));
  /* 1185d5ce mov edx, dword ptr [0x11886228] */
  EDX = (r32((uint32_t)(0x11886228)));
  /* 1185d5d4 push edx */
  push32((uint32_t)(EDX));
  /* 1185d5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185d5d7 mov eax, dword ptr [0x1188622c] */
  EAX = (r32((uint32_t)(0x1188622c)));
  /* 1185d5dc push eax */
  push32((uint32_t)(EAX));
  /* 1185d5dd call dword ptr [0x11887358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887358))), 0x1185d5e3u);
  /* 1185d5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185d5e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d5ea jne 0x1185d5f3 */
  if (!C.zf) goto L_1185d5f3;
  /* 1185d5ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d5ee jmp 0x1185d6bb */
  goto L_1185d6bb;
L_1185d5f3:;
  /* 1185d5f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d5f6 mov dword ptr [0x11886228], ecx */
  w32((uint32_t)(0x11886228), (ECX));
  /* 1185d5fc mov edx, dword ptr [0x11886208] */
  EDX = (r32((uint32_t)(0x11886208)));
  /* 1185d602 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d605 mov dword ptr [0x11886208], edx */
  w32((uint32_t)(0x11886208), (EDX));
L_1185d60b:;
  /* 1185d60b mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185d610 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d613 mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185d619 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d61b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185d61e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1185d623 push 8 */
  push32((uint32_t)(0x8u));
  /* 1185d625 mov edx, dword ptr [0x1188622c] */
  EDX = (r32((uint32_t)(0x1188622c)));
  /* 1185d62b push edx */
  push32((uint32_t)(EDX));
  /* 1185d62c call dword ptr [0x11887350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887350))), 0x1185d632u);
  /* 1185d632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d635 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 1185d638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d63b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d63f jne 0x1185d645 */
  if (!C.zf) goto L_1185d645;
  /* 1185d641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d643 jmp 0x1185d6bb */
  goto L_1185d6bb;
L_1185d645:;
  /* 1185d645 push 4 */
  push32((uint32_t)(0x4u));
  /* 1185d647 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1185d64c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1185d651 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185d653 call dword ptr [0x11887348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887348))), 0x1185d659u);
  /* 1185d659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d65c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1185d65f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d662 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d666 jne 0x1185d682 */
  if (!C.zf) goto L_1185d682;
  /* 1185d668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d66b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185d66e push ecx */
  push32((uint32_t)(ECX));
  /* 1185d66f push 0 */
  push32((uint32_t)(0x0u));
  /* 1185d671 mov edx, dword ptr [0x1188622c] */
  EDX = (r32((uint32_t)(0x1188622c)));
  /* 1185d677 push edx */
  push32((uint32_t)(EDX));
  /* 1185d678 call dword ptr [0x1188737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188737c))), 0x1185d67eu);
  /* 1185d67e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d680 jmp 0x1185d6bb */
  goto L_1185d6bb;
L_1185d682:;
  /* 1185d682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1185d68b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d68e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1185d695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d698 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1185d69f mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185d6a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d6a7 mov dword ptr [0x11886224], eax */
  w32((uint32_t)(0x11886224), (EAX));
  /* 1185d6ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d6af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1185d6b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 1185d6b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1185d6bb:;
  /* 1185d6bb mov esp, ebp */
  ESP = (EBP);
  /* 1185d6bd pop ebp */
  EBP = (pop32());
  /* 1185d6be ret  */
  ESPCHK(0x1185d5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6c0 @ 0x1185d6c0 (494 bytes, 149 insns) */
void f_1185d6c0(void) {
  FTRACE(0x1185d6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185d6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185d6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1185d6c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d6c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d6c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185d6cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1185d6cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d6d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185d6d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1185d6d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_1185d6df:;
  /* 1185d6df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d6e3 jl 0x1185d6f8 */
  if ((C.sf!=C.of)) goto L_1185d6f8;
  /* 1185d6e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185d6e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1185d6ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1185d6ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d6f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d6f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1185d6f6 jmp 0x1185d6df */
  goto L_1185d6df;
L_1185d6f8:;
  /* 1185d6f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d6fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d704 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1185d70b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1185d70e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1185d715 jmp 0x1185d720 */
  goto L_1185d720;
L_1185d717:;
  /* 1185d717 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d71a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d71d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1185d720:;
  /* 1185d720 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d724 jge 0x1185d746 */
  if ((C.sf==C.of)) goto L_1185d746;
  /* 1185d726 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d72c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 1185d72f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d732 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d735 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d738 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1185d73b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d73e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d741 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1185d744 jmp 0x1185d717 */
  goto L_1185d717;
L_1185d746:;
  /* 1185d746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d749 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1185d74c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d74f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1185d752 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d754 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1185d757 push 4 */
  push32((uint32_t)(0x4u));
  /* 1185d759 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1185d75e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1185d763 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d766 push edx */
  push32((uint32_t)(EDX));
  /* 1185d767 call dword ptr [0x11887348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887348))), 0x1185d76du);
  /* 1185d76d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185d76f jne 0x1185d779 */
  if (!C.zf) goto L_1185d779;
  /* 1185d771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185d774 jmp 0x1185d8aa */
  goto L_1185d8aa;
L_1185d779:;
  /* 1185d779 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d77c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d781 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1185d784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d787 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185d78a jmp 0x1185d798 */
  goto L_1185d798;
L_1185d78c:;
  /* 1185d78c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d78f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d795 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185d798:;
  /* 1185d798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d79b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d79e ja 0x1185d7fd */
  if ((!C.cf&&!C.zf)) goto L_1185d7fd;
  /* 1185d7a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d7a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1185d7aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d7ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 1185d7b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d7ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d7bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d7c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1185d7c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d7d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1185d7d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d7e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185d7e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d7ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d7ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1185d7f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185d7f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 1185d7fb jmp 0x1185d78c */
  goto L_1185d78c;
L_1185d7fd:;
  /* 1185d7fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d800 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d806 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1185d809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d80c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d80f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d812 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1185d815 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185d81b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d81e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d821 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d824 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1185d827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185d82a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d82d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d830 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1185d833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d836 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185d839 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185d83c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185d83f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d842 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1185d845 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d848 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d84b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1185d853 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d856 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d859 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1185d864 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d867 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1185d86b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d86e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1185d871 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185d874 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d877 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1185d87a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185d87c jne 0x1185d88d */
  if (!C.zf) goto L_1185d88d;
  /* 1185d87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d881 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185d884 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1185d887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d88a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185d88d:;
  /* 1185d88d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d892 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d895 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d897 not edx */
  EDX = (~(EDX));
  /* 1185d899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d89c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185d89f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d8a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d8a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185d8a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1185d8aa:;
  /* 1185d8aa mov esp, ebp */
  ESP = (EBP);
  /* 1185d8ac pop ebp */
  EBP = (pop32());
  /* 1185d8ad ret  */
  ESPCHK(0x1185d6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8b0 @ 0x1185d8b0 (1515 bytes, 489 insns) */
void f_1185d8b0(void) {
  FTRACE(0x1185d8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185d8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185d8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1185d8b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d8b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1185d8b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d8bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1185d8be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1185d8c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d8c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1185d8c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1185d8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d8cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185d8d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d8d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1185d8d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185d8d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1185d8dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185d8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d8e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185d8e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d8eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1185d8f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1185d8f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185d8f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d8fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1185d8fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d901 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185d903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d906 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1185d909 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185d90c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d90f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1185d912 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d915 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185d917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1185d91a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185d91d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d920 jle 0x1185dbd6 */
  if ((C.zf||C.sf!=C.of)) goto L_1185dbd6;
  /* 1185d926 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d929 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1185d92c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d92e jne 0x1185d93b */
  if (!C.zf) goto L_1185d93b;
  /* 1185d930 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185d933 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d936 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d939 jle 0x1185d942 */
  if ((C.zf||C.sf!=C.of)) goto L_1185d942;
L_1185d93b:;
  /* 1185d93b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d93d jmp 0x1185de97 */
  goto L_1185de97;
L_1185d942:;
  /* 1185d942 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185d945 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1185d948 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d94b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1185d94e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d952 jbe 0x1185d95b */
  if ((C.cf||C.zf)) goto L_1185d95b;
  /* 1185d954 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1185d95b:;
  /* 1185d95b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d95e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185d961 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185d964 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d967 jne 0x1185da3d */
  if (!C.zf) goto L_1185da3d;
  /* 1185d96d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185d971 jae 0x1185d9d2 */
  if (!C.cf) goto L_1185d9d2;
  /* 1185d973 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d978 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d97b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d97d not edx */
  EDX = (~(EDX));
  /* 1185d97f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d982 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d985 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1185d989 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185d98b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d98e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d991 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1185d995 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d998 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d99b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185d99e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185d9a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d9a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d9a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1185d9aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d9ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185d9b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185d9b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185d9b6 jne 0x1185d9d0 */
  if (!C.zf) goto L_1185d9d0;
  /* 1185d9b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185d9bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d9c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185d9c2 not edx */
  EDX = (~(EDX));
  /* 1185d9c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d9c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185d9c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d9cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185d9ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1185d9d0:;
  /* 1185d9d0 jmp 0x1185da3d */
  goto L_1185da3d;
L_1185d9d2:;
  /* 1185d9d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185d9d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185d9d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185d9dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185d9df not eax */
  EAX = (~(EAX));
  /* 1185d9e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d9e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d9e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1185d9ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185d9f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185d9f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185d9f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1185d9fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185da00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185da03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1185da06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185da09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185da0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185da0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1185da12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185da15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185da18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185da1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185da1e jne 0x1185da3d */
  if (!C.zf) goto L_1185da3d;
  /* 1185da20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185da23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185da26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185da2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185da2d not eax */
  EAX = (~(EAX));
  /* 1185da2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185da32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185da35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185da37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185da3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185da3d:;
  /* 1185da3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185da40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185da43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185da46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185da49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1185da4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185da4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185da52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185da55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185da58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1185da5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185da5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185da61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185da64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1185da67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185da6b jle 0x1185dbb7 */
  if ((C.zf||C.sf!=C.of)) goto L_1185dbb7;
  /* 1185da71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185da74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185da77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1185da7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185da7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185da80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185da83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1185da86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185da8a jbe 0x1185da93 */
  if ((C.cf||C.zf)) goto L_1185da93;
  /* 1185da8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1185da93:;
  /* 1185da93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185da96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185da99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1185da9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1185da9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185daa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185daa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185daa8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1185daab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185daae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185dab1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1185dab4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185dab7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185daba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1185dabd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dac0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185dac3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dac6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1185dac9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dacc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dacf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185dad2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dad5 jne 0x1185dba3 */
  if (!C.zf) goto L_1185dba3;
  /* 1185dadb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dadf jae 0x1185db3c */
  if (!C.cf) goto L_1185db3c;
  /* 1185dae1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dae4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dae7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185daeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185daee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185daf1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185daf4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185daf7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dafa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dafd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1185db00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185db02 jne 0x1185db1a */
  if (!C.zf) goto L_1185db1a;
  /* 1185db04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185db09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185db0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185db0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185db11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185db13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185db15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185db18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1185db1a:;
  /* 1185db1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185db1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185db22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185db24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185db27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1185db2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185db30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185db33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1185db3a jmp 0x1185dba3 */
  goto L_1185dba3;
L_1185db3c:;
  /* 1185db3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185db42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185db46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185db4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185db4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185db52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185db58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1185db5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185db5d jne 0x1185db7a */
  if (!C.zf) goto L_1185db7a;
  /* 1185db5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185db62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185db65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185db6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185db6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185db6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185db72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185db74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185db77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1185db7a:;
  /* 1185db7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185db7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185db80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185db85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185db87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185db8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1185db94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185db96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185db99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185db9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1185dba3:;
  /* 1185dba3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dba6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185dba9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1185dbab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dbae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185dbb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1185dbb7:;
  /* 1185dbb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185dbba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dbc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1185dbc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185dbc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dbcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1185dbd1 jmp 0x1185de92 */
  goto L_1185de92;
L_1185dbd6:;
  /* 1185dbd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185dbd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dbdc jge 0x1185de92 */
  if ((C.sf==C.of)) goto L_1185de92;
  /* 1185dbe2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185dbe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbe8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dbeb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1185dbed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1185dbf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbf3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dbf6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dbf9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1185dbfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dbff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dc02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1185dc05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185dc08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dc0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1185dc0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185dc11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1185dc14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dc17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1185dc1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dc1e jbe 0x1185dc27 */
  if ((C.cf||C.zf)) goto L_1185dc27;
  /* 1185dc20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1185dc27:;
  /* 1185dc27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185dc2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1185dc2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185dc2f jne 0x1185dd70 */
  if (!C.zf) goto L_1185dd70;
  /* 1185dc35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185dc38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1185dc3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dc3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1185dc41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dc45 jbe 0x1185dc4e */
  if ((C.cf||C.zf)) goto L_1185dc4e;
  /* 1185dc47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1185dc4e:;
  /* 1185dc4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dc51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dc54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185dc57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dc5a jne 0x1185dd30 */
  if (!C.zf) goto L_1185dd30;
  /* 1185dc60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dc64 jae 0x1185dcc5 */
  if (!C.cf) goto L_1185dcc5;
  /* 1185dc66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185dc6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185dc6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185dc70 not edx */
  EDX = (~(EDX));
  /* 1185dc72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185dc75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dc78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1185dc7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185dc7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185dc81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dc84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1185dc88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dc8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dc8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1185dc91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185dc94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dc97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dc9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1185dc9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dca0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dca3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185dca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185dca9 jne 0x1185dcc3 */
  if (!C.zf) goto L_1185dcc3;
  /* 1185dcab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185dcb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185dcb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185dcb5 not edx */
  EDX = (~(EDX));
  /* 1185dcb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185dcba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185dcbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185dcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185dcc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1185dcc3:;
  /* 1185dcc3 jmp 0x1185dd30 */
  goto L_1185dd30;
L_1185dcc5:;
  /* 1185dcc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185dcc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dccb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185dcd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185dcd2 not eax */
  EAX = (~(EAX));
  /* 1185dcd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185dcd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dcda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1185dce1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1185dce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185dce6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dce9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1185dcf0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dcf3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dcf6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1185dcf9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185dcfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dcff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dd02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1185dd05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185dd08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dd0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1185dd0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185dd11 jne 0x1185dd30 */
  if (!C.zf) goto L_1185dd30;
  /* 1185dd13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185dd16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dd19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185dd1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185dd20 not eax */
  EAX = (~(EAX));
  /* 1185dd22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185dd25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185dd28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185dd2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185dd2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185dd30:;
  /* 1185dd30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dd33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185dd36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dd39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185dd3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1185dd3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dd42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185dd45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185dd48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185dd4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1185dd4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185dd51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dd54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1185dd57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185dd5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1185dd5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dd60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1185dd63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185dd67 jbe 0x1185dd70 */
  if ((C.cf||C.zf)) goto L_1185dd70;
  /* 1185dd69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1185dd70:;
  /* 1185dd70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185dd73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185dd76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1185dd79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1185dd7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dd7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185dd82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185dd85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1185dd88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dd8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185dd8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1185dd91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185dd94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dd97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1185dd9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dd9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185dda0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dda3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1185dda6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185dda9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185ddac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185ddaf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ddb2 jne 0x1185de7e */
  if (!C.zf) goto L_1185de7e;
  /* 1185ddb8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ddbc jae 0x1185de18 */
  if (!C.cf) goto L_1185de18;
  /* 1185ddbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185ddc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ddc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185ddc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185ddcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ddce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1185ddd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185ddd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185ddd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ddd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1185dddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185ddde jne 0x1185ddf6 */
  if (!C.zf) goto L_1185ddf6;
  /* 1185dde0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185dde5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185dde8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185ddea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185dded mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185ddef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185ddf1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185ddf4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1185ddf6:;
  /* 1185ddf6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185ddfb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ddfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185de00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185de03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1185de0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185de0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185de0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1185de16 jmp 0x1185de7e */
  goto L_1185de7e;
L_1185de18:;
  /* 1185de18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185de1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1185de22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185de28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1185de2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185de2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185de33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1185de36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185de38 jne 0x1185de55 */
  if (!C.zf) goto L_1185de55;
  /* 1185de3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185de3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185de40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1185de45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1185de47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185de4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185de4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1185de4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185de52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1185de55:;
  /* 1185de55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185de58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185de5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185de60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185de62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185de65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1185de6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185de71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185de74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1185de77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1185de7e:;
  /* 1185de7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185de81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185de84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1185de86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185de89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185de8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185de8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1185de92:;
  /* 1185de92 mov eax, 1 */
  EAX = (0x1u);
L_1185de97:;
  /* 1185de97 mov esp, ebp */
  ESP = (EBP);
  /* 1185de99 pop ebp */
  EBP = (pop32());
  /* 1185de9a ret  */
  ESPCHK(0x1185d8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dea0 @ 0x1185dea0 (304 bytes, 79 insns) */
void f_1185dea0(void) {
  FTRACE(0x1185dea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185dea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185dea1 mov ebp, esp */
  EBP = (ESP);
  /* 1185dea3 push ecx */
  push32((uint32_t)(ECX));
  /* 1185dea4 cmp dword ptr [0x11886220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11886220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185deab je 0x1185dfcc */
  if (C.zf) goto L_1185dfcc;
  /* 1185deb1 mov eax, dword ptr [0x11886218] */
  EAX = (r32((uint32_t)(0x11886218)));
  /* 1185deb6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1185deb9 mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185debf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185dec2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dec4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185dec7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1185decc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1185ded1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ded4 push eax */
  push32((uint32_t)(EAX));
  /* 1185ded5 call dword ptr [0x1188736c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188736c))), 0x1185dedbu);
  /* 1185dedb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185dee0 mov ecx, dword ptr [0x11886218] */
  ECX = (r32((uint32_t)(0x11886218)));
  /* 1185dee6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185dee8 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185deed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1185def0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1185def2 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185def8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1185defb mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185df00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185df03 mov edx, dword ptr [0x11886218] */
  EDX = (r32((uint32_t)(0x11886218)));
  /* 1185df09 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1185df14 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185df19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185df1c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1185df1f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1185df22 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185df27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185df2a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1185df2d mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185df33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1185df36 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1185df3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185df3c jne 0x1185df52 */
  if (!C.zf) goto L_1185df52;
  /* 1185df3e mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185df44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185df47 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1185df49 mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185df4f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1185df52:;
  /* 1185df52 mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185df58 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185df5c jne 0x1185dfc2 */
  if (!C.zf) goto L_1185dfc2;
  /* 1185df5e cmp dword ptr [0x11886224], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11886224))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185df65 jle 0x1185dfc2 */
  if ((C.zf||C.sf!=C.of)) goto L_1185dfc2;
  /* 1185df67 mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185df6c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1185df6f push ecx */
  push32((uint32_t)(ECX));
  /* 1185df70 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185df72 mov edx, dword ptr [0x1188622c] */
  EDX = (r32((uint32_t)(0x1188622c)));
  /* 1185df78 push edx */
  push32((uint32_t)(EDX));
  /* 1185df79 call dword ptr [0x1188737c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188737c))), 0x1185df7fu);
  /* 1185df7f mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185df84 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185df87 mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185df8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185df8f mov edx, dword ptr [0x11886220] */
  EDX = (r32((uint32_t)(0x11886220)));
  /* 1185df95 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185df98 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185df9a push ecx */
  push32((uint32_t)(ECX));
  /* 1185df9b mov eax, dword ptr [0x11886220] */
  EAX = (r32((uint32_t)(0x11886220)));
  /* 1185dfa0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dfa3 push eax */
  push32((uint32_t)(EAX));
  /* 1185dfa4 mov ecx, dword ptr [0x11886220] */
  ECX = (r32((uint32_t)(0x11886220)));
  /* 1185dfaa push ecx */
  push32((uint32_t)(ECX));
  /* 1185dfab call 0x118605d0 */
  push32(0x1185dfb0u); f_118605d0();
  /* 1185dfb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185dfb3 mov edx, dword ptr [0x11886224] */
  EDX = (r32((uint32_t)(0x11886224)));
  /* 1185dfb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dfbc mov dword ptr [0x11886224], edx */
  w32((uint32_t)(0x11886224), (EDX));
L_1185dfc2:;
  /* 1185dfc2 mov dword ptr [0x11886220], 0 */
  w32((uint32_t)(0x11886220), (0x0u));
L_1185dfcc:;
  /* 1185dfcc mov esp, ebp */
  ESP = (EBP);
  /* 1185dfce pop ebp */
  EBP = (pop32());
  /* 1185dfcf ret  */
  ESPCHK(0x1185dea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfd0 @ 0x1185dfd0 (1565 bytes, 343 insns) */
void f_1185dfd0(void) {
  FTRACE(0x1185dfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185dfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185dfd1 mov ebp, esp */
  EBP = (ESP);
  /* 1185dfd3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185dfd9 mov eax, dword ptr [0x11886224] */
  EAX = (r32((uint32_t)(0x11886224)));
  /* 1185dfde imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185dfe1 push eax */
  push32((uint32_t)(EAX));
  /* 1185dfe2 mov ecx, dword ptr [0x11886228] */
  ECX = (r32((uint32_t)(0x11886228)));
  /* 1185dfe8 push ecx */
  push32((uint32_t)(ECX));
  /* 1185dfe9 call dword ptr [0x11887398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887398))), 0x1185dfefu);
  /* 1185dfef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185dff1 je 0x1185dffb */
  if (C.zf) goto L_1185dffb;
  /* 1185dff3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185dff6 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185dffb:;
  /* 1185dffb mov edx, dword ptr [0x11886228] */
  EDX = (r32((uint32_t)(0x11886228)));
  /* 1185e001 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1185e007 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1185e011 jmp 0x1185e022 */
  goto L_1185e022;
L_1185e013:;
  /* 1185e013 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1185e019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e01c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1185e022:;
  /* 1185e022 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1185e028 cmp ecx, dword ptr [0x11886224] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11886224))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e02e jge 0x1185e5e7 */
  if ((C.sf==C.of)) goto L_1185e5e7;
  /* 1185e034 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e03a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1185e03d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1185e043 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1185e048 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1185e04e push ecx */
  push32((uint32_t)(ECX));
  /* 1185e04f call dword ptr [0x11887398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887398))), 0x1185e055u);
  /* 1185e055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e057 je 0x1185e063 */
  if (C.zf) goto L_1185e063;
  /* 1185e059 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1185e05e jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e063:;
  /* 1185e063 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e069 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1185e06c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1185e072 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1185e078 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e07e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1185e081 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e087 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185e08a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185e08d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1185e097 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1185e0a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1185e0a8 jmp 0x1185e0b3 */
  goto L_1185e0b3;
L_1185e0aa:;
  /* 1185e0aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e0ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e0b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1185e0b3:;
  /* 1185e0b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e0b7 jge 0x1185e5ab */
  if ((C.sf==C.of)) goto L_1185e5ab;
  /* 1185e0bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1185e0c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1185e0d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1185e0db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1185e0e5 jmp 0x1185e0f6 */
  goto L_1185e0f6;
L_1185e0e7:;
  /* 1185e0e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1185e0ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e0f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1185e0f6:;
  /* 1185e0f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e0fd jge 0x1185e112 */
  if ((C.sf==C.of)) goto L_1185e112;
  /* 1185e0ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1185e105 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1185e110 jmp 0x1185e0e7 */
  goto L_1185e0e7;
L_1185e112:;
  /* 1185e112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e116 jl 0x1185e54d */
  if ((C.sf!=C.of)) goto L_1185e54d;
  /* 1185e11c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1185e121 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1185e127 push ecx */
  push32((uint32_t)(ECX));
  /* 1185e128 call dword ptr [0x11887398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887398))), 0x1185e12eu);
  /* 1185e12e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e130 je 0x1185e13c */
  if (C.zf) goto L_1185e13c;
  /* 1185e132 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1185e137 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e13c:;
  /* 1185e13c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1185e142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1185e145 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1185e14f jmp 0x1185e160 */
  goto L_1185e160;
L_1185e151:;
  /* 1185e151 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1185e157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e15a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1185e160:;
  /* 1185e160 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e167 jge 0x1185e2e4 */
  if ((C.sf==C.of)) goto L_1185e2e4;
  /* 1185e16d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e170 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e173 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1185e179 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e17f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e185 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1185e18b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e191 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e195 jne 0x1185e1a2 */
  if (!C.zf) goto L_1185e1a2;
  /* 1185e197 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1185e19d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e1a0 je 0x1185e1ac */
  if (C.zf) goto L_1185e1ac;
L_1185e1a2:;
  /* 1185e1a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1185e1a7 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e1ac:;
  /* 1185e1ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e1b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185e1b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1185e1ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1185e1c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1185e1c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1185e1cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1185e1cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185e1d1 je 0x1185e209 */
  if (C.zf) goto L_1185e209;
  /* 1185e1d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1185e1d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e1dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1185e1e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e1ec jle 0x1185e1f8 */
  if ((C.zf||C.sf!=C.of)) goto L_1185e1f8;
  /* 1185e1ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1185e1f3 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e1f8:;
  /* 1185e1f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1185e1fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e201 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1185e207 jmp 0x1185e24b */
  goto L_1185e24b;
L_1185e209:;
  /* 1185e209 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1185e20f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185e212 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e215 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1185e21b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e222 jle 0x1185e22e */
  if ((C.zf||C.sf!=C.of)) goto L_1185e22e;
  /* 1185e224 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1185e22e:;
  /* 1185e22e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1185e234 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1185e23b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e23e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1185e244 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1185e24b:;
  /* 1185e24b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e252 jl 0x1185e26d */
  if ((C.sf!=C.of)) goto L_1185e26d;
  /* 1185e254 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1185e25a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1185e25d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e25f jne 0x1185e26d */
  if (!C.zf) goto L_1185e26d;
  /* 1185e261 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e26b jle 0x1185e277 */
  if ((C.zf||C.sf!=C.of)) goto L_1185e277;
L_1185e26d:;
  /* 1185e26d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1185e272 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e277:;
  /* 1185e277 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e27d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e283 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1185e286 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e28c je 0x1185e298 */
  if (C.zf) goto L_1185e298;
  /* 1185e28e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1185e293 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e298:;
  /* 1185e298 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e29e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e2a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1185e2aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e2b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e2b6 jb 0x1185e1ac */
  if (C.cf) goto L_1185e1ac;
  /* 1185e2bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e2c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e2c8 je 0x1185e2d4 */
  if (C.zf) goto L_1185e2d4;
  /* 1185e2ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1185e2cf jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e2d4:;
  /* 1185e2d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e2d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e2dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1185e2df jmp 0x1185e151 */
  goto L_1185e151;
L_1185e2e4:;
  /* 1185e2e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185e2e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185e2e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e2ef je 0x1185e2fb */
  if (C.zf) goto L_1185e2fb;
  /* 1185e2f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1185e2f6 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e2fb:;
  /* 1185e2fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185e2fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1185e304 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1185e30b jmp 0x1185e316 */
  goto L_1185e316;
L_1185e30d:;
  /* 1185e30d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e310 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e313 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1185e316:;
  /* 1185e316 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e31a jge 0x1185e54d */
  if ((C.sf==C.of)) goto L_1185e54d;
  /* 1185e320 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1185e32a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1185e330 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1185e336:;
  /* 1185e336 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e33c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185e33f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1185e345 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e34b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e351 je 0x1185e47a */
  if (C.zf) goto L_1185e47a;
  /* 1185e357 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e35a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1185e360 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e367 je 0x1185e47a */
  if (C.zf) goto L_1185e47a;
  /* 1185e36d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e373 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e379 jb 0x1185e38e */
  if (C.cf) goto L_1185e38e;
  /* 1185e37b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1185e381 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e386 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e38c jb 0x1185e398 */
  if (C.cf) goto L_1185e398;
L_1185e38e:;
  /* 1185e38e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1185e393 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e398:;
  /* 1185e398 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e39e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1185e3a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1185e3aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1185e3b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e3b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1185e3b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e3be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1185e3c4:;
  /* 1185e3c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e3cd je 0x1185e3ee */
  if (C.zf) goto L_1185e3ee;
  /* 1185e3cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e3d8 jne 0x1185e3dc */
  if (!C.zf) goto L_1185e3dc;
  /* 1185e3da jmp 0x1185e3ee */
  goto L_1185e3ee;
L_1185e3dc:;
  /* 1185e3dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1185e3e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1185e3e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e3e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1185e3ec jmp 0x1185e3c4 */
  goto L_1185e3c4;
L_1185e3ee:;
  /* 1185e3ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185e3f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e3f7 jne 0x1185e403 */
  if (!C.zf) goto L_1185e403;
  /* 1185e3f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1185e3fe jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e403:;
  /* 1185e403 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e409 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185e40b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185e40e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e411 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1185e417 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e41e jle 0x1185e42a */
  if ((C.zf||C.sf!=C.of)) goto L_1185e42a;
  /* 1185e420 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1185e42a:;
  /* 1185e42a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1185e430 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e433 je 0x1185e43f */
  if (C.zf) goto L_1185e43f;
  /* 1185e435 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1185e43a jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e43f:;
  /* 1185e43f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e445 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185e448 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e44e je 0x1185e45a */
  if (C.zf) goto L_1185e45a;
  /* 1185e450 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1185e455 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e45a:;
  /* 1185e45a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1185e460 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1185e466 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1185e46c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e46f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1185e475 jmp 0x1185e336 */
  goto L_1185e336;
L_1185e47a:;
  /* 1185e47a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e481 je 0x1185e4f1 */
  if (C.zf) goto L_1185e4f1;
  /* 1185e483 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e487 jge 0x1185e4bb */
  if ((C.sf==C.of)) goto L_1185e4bb;
  /* 1185e489 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185e48e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e491 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185e493 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1185e499 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e49b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1185e4a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185e4a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e4a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185e4ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1185e4b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e4b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1185e4b9 jmp 0x1185e4f1 */
  goto L_1185e4f1;
L_1185e4bb:;
  /* 1185e4bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e4be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e4c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185e4c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185e4c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1185e4ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e4d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1185e4d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e4d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e4dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1185e4e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1185e4e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1185e4e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e4eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1185e4f1:;
  /* 1185e4f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1185e4f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185e4fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e500 jne 0x1185e514 */
  if (!C.zf) goto L_1185e514;
  /* 1185e502 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185e505 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1185e50b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e512 je 0x1185e51e */
  if (C.zf) goto L_1185e51e;
L_1185e514:;
  /* 1185e514 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1185e519 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e51e:;
  /* 1185e51e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1185e524 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185e527 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e52d je 0x1185e539 */
  if (C.zf) goto L_1185e539;
  /* 1185e52f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1185e534 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e539:;
  /* 1185e539 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1185e53f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e542 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1185e548 jmp 0x1185e30d */
  goto L_1185e30d;
L_1185e54d:;
  /* 1185e54d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e550 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1185e556 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1185e55c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e560 jne 0x1185e57a */
  if (!C.zf) goto L_1185e57a;
  /* 1185e562 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e565 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1185e56b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1185e571 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e578 je 0x1185e581 */
  if (C.zf) goto L_1185e581;
L_1185e57a:;
  /* 1185e57a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1185e57f jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e581:;
  /* 1185e581 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1185e587 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e58d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1185e593 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185e596 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e59b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1185e59e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e5a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1185e5a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185e5a6 jmp 0x1185e0aa */
  goto L_1185e0aa;
L_1185e5ab:;
  /* 1185e5ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e5b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1185e5b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e5b9 jne 0x1185e5cc */
  if (!C.zf) goto L_1185e5cc;
  /* 1185e5bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e5c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1185e5c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e5ca je 0x1185e5d3 */
  if (C.zf) goto L_1185e5d3;
L_1185e5cc:;
  /* 1185e5cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1185e5d1 jmp 0x1185e5e9 */
  goto L_1185e5e9;
L_1185e5d3:;
  /* 1185e5d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1185e5d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e5dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1185e5e2 jmp 0x1185e013 */
  goto L_1185e013;
L_1185e5e7:;
  /* 1185e5e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1185e5e9:;
  /* 1185e5e9 mov esp, ebp */
  ESP = (EBP);
  /* 1185e5eb pop ebp */
  EBP = (pop32());
  /* 1185e5ec ret  */
  ESPCHK(0x1185dfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5f0 @ 0x1185e5f0 (250 bytes, 92 insns) */
void f_1185e5f0(void) {
  FTRACE(0x1185e5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185e5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185e5f1 mov ebp, esp */
  EBP = (ESP);
  /* 1185e5f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e5f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1185e5f7 push esi */
  push32((uint32_t)(ESI));
  /* 1185e5f8 push edi */
  push32((uint32_t)(EDI));
  /* 1185e5f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1185e5fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1185e5ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1185e602 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1185e605:;
  /* 1185e605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e609 jne 0x1185e629 */
  if (!C.zf) goto L_1185e629;
  /* 1185e60b push 0x11880808 */
  push32((uint32_t)(0x11880808u));
  /* 1185e610 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185e612 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1185e614 push 0x118807fc */
  push32((uint32_t)(0x118807fcu));
  /* 1185e619 push 2 */
  push32((uint32_t)(0x2u));
  /* 1185e61b call 0x118577a0 */
  push32(0x1185e620u); f_118577a0();
  /* 1185e620 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e626 jne 0x1185e629 */
  if (!C.zf) goto L_1185e629;
  /* 1185e628 int3  */
  x86_unimpl("int3 @ 0x1185e628");
L_1185e629:;
  /* 1185e629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185e62b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185e62d jne 0x1185e605 */
  if (!C.zf) goto L_1185e605;
L_1185e62f:;
  /* 1185e62f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e633 jne 0x1185e653 */
  if (!C.zf) goto L_1185e653;
  /* 1185e635 push 0x118807ec */
  push32((uint32_t)(0x118807ecu));
  /* 1185e63a push 0 */
  push32((uint32_t)(0x0u));
  /* 1185e63c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1185e63e push 0x118807fc */
  push32((uint32_t)(0x118807fcu));
  /* 1185e643 push 2 */
  push32((uint32_t)(0x2u));
  /* 1185e645 call 0x118577a0 */
  push32(0x1185e64au); f_118577a0();
  /* 1185e64a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e64d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e650 jne 0x1185e653 */
  if (!C.zf) goto L_1185e653;
  /* 1185e652 int3  */
  x86_unimpl("int3 @ 0x1185e652");
L_1185e653:;
  /* 1185e653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e657 jne 0x1185e62f */
  if (!C.zf) goto L_1185e62f;
  /* 1185e659 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e65c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1185e663 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e669 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1185e66c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e66f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e672 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1185e674 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e677 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1185e67e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1185e681 push ecx */
  push32((uint32_t)(ECX));
  /* 1185e682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185e685 push edx */
  push32((uint32_t)(EDX));
  /* 1185e686 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e689 push eax */
  push32((uint32_t)(EAX));
  /* 1185e68a call 0x1185f670 */
  push32(0x1185e68fu); f_1185f670();
  /* 1185e68f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e692 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1185e695 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e698 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185e69b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e69e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1185e6a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e6ab jl 0x1185e6cf */
  if ((C.sf!=C.of)) goto L_1185e6cf;
  /* 1185e6ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185e6b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1185e6b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185e6b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1185e6bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1185e6c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1185e6c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e6c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1185e6cd jmp 0x1185e6e0 */
  goto L_1185e6e0;
L_1185e6cf:;
  /* 1185e6cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e6d2 push edx */
  push32((uint32_t)(EDX));
  /* 1185e6d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185e6d5 call 0x1185f3f0 */
  push32(0x1185e6dau); f_1185f3f0();
  /* 1185e6da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e6dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1185e6e0:;
  /* 1185e6e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185e6e3 pop edi */
  EDI = (pop32());
  /* 1185e6e4 pop esi */
  ESI = (pop32());
  /* 1185e6e5 pop ebx */
  EBX = (pop32());
  /* 1185e6e6 mov esp, ebp */
  ESP = (EBP);
  /* 1185e6e8 pop ebp */
  EBP = (pop32());
  /* 1185e6e9 ret  */
  ESPCHK(0x1185e5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6f0 @ 0x1185e6f0 (183 bytes, 58 insns) */
void f_1185e6f0(void) {
  FTRACE(0x1185e6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185e6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185e6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1185e6f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e6f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e6f9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e6fc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e701 ja 0x1185e71a */
  if ((!C.cf&&!C.zf)) goto L_1185e71a;
  /* 1185e703 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e706 mov edx, dword ptr [0x11882c98] */
  EDX = (r32((uint32_t)(0x11882c98)));
  /* 1185e70c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e70e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1185e712 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1185e715 jmp 0x1185e7a3 */
  goto L_1185e7a3;
L_1185e71a:;
  /* 1185e71a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e71d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1185e720 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1185e726 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1185e72c mov edx, dword ptr [0x11882c98] */
  EDX = (r32((uint32_t)(0x11882c98)));
  /* 1185e732 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e734 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1185e738 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1185e73d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e73f je 0x1185e763 */
  if (C.zf) goto L_1185e763;
  /* 1185e741 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e744 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1185e747 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1185e74d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1185e750 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1185e753 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1185e756 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1185e75a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1185e761 jmp 0x1185e774 */
  goto L_1185e774;
L_1185e763:;
  /* 1185e763 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1185e766 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1185e769 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1185e76d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1185e774:;
  /* 1185e774 push 1 */
  push32((uint32_t)(0x1u));
  /* 1185e776 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185e778 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185e77a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1185e77d push ecx */
  push32((uint32_t)(ECX));
  /* 1185e77e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e781 push edx */
  push32((uint32_t)(EDX));
  /* 1185e782 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1185e785 push eax */
  push32((uint32_t)(EAX));
  /* 1185e786 push 1 */
  push32((uint32_t)(0x1u));
  /* 1185e788 call 0x11860910 */
  push32(0x1185e78du); f_11860910();
  /* 1185e78d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e790 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e792 jne 0x1185e798 */
  if (!C.zf) goto L_1185e798;
  /* 1185e794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e796 jmp 0x1185e7a3 */
  goto L_1185e7a3;
L_1185e798:;
  /* 1185e798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e79b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185e7a0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1185e7a3:;
  /* 1185e7a3 mov esp, ebp */
  ESP = (EBP);
  /* 1185e7a5 pop ebp */
  EBP = (pop32());
  /* 1185e7a6 ret  */
  ESPCHK(0x1185e6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7b0 @ 0x1185e7b0 (836 bytes, 238 insns) */
void f_1185e7b0(void) {
  FTRACE(0x1185e7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185e7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185e7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1185e7b3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185e7b6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185e7b8 call 0x1185c0e0 */
  push32(0x1185e7bdu); f_1185c0e0();
  /* 1185e7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e7c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e7c3 push eax */
  push32((uint32_t)(EAX));
  /* 1185e7c4 call 0x1185eb00 */
  push32(0x1185e7c9u); f_1185eb00();
  /* 1185e7c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e7cc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1185e7cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e7d2 cmp ecx, dword ptr [0x11885f64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11885f64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e7d8 jne 0x1185e7eb */
  if (!C.zf) goto L_1185e7eb;
  /* 1185e7da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185e7dc call 0x1185c180 */
  push32(0x1185e7e1u); f_1185c180();
  /* 1185e7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e7e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e7e6 jmp 0x1185eaf0 */
  goto L_1185eaf0;
L_1185e7eb:;
  /* 1185e7eb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e7ef jne 0x1185e80c */
  if (!C.zf) goto L_1185e80c;
  /* 1185e7f1 call 0x1185ebe0 */
  push32(0x1185e7f6u); f_1185ebe0();
  /* 1185e7f6 call 0x1185ec60 */
  push32(0x1185e7fbu); f_1185ec60();
  /* 1185e7fb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185e7fd call 0x1185c180 */
  push32(0x1185e802u); f_1185c180();
  /* 1185e802 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e805 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e807 jmp 0x1185eaf0 */
  goto L_1185eaf0;
L_1185e80c:;
  /* 1185e80c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1185e813 jmp 0x1185e81e */
  goto L_1185e81e;
L_1185e815:;
  /* 1185e815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e81b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185e81e:;
  /* 1185e81e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e822 jae 0x1185e96f */
  if (!C.cf) goto L_1185e96f;
  /* 1185e828 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e82b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185e82e mov ecx, dword ptr [eax + 0x11882eb8] */
  ECX = (r32((uint32_t)(EAX + 0x11882eb8)));
  /* 1185e834 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e837 jne 0x1185e96a */
  if (!C.zf) goto L_1185e96a;
  /* 1185e83d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1185e844 jmp 0x1185e84f */
  goto L_1185e84f;
L_1185e846:;
  /* 1185e846 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e849 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e84c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1185e84f:;
  /* 1185e84f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e856 jae 0x1185e864 */
  if (!C.cf) goto L_1185e864;
  /* 1185e858 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e85b mov byte ptr [eax + 0x11886100], 0 */
  w8((uint32_t)(EAX + 0x11886100), (0x0u));
  /* 1185e862 jmp 0x1185e846 */
  goto L_1185e846;
L_1185e864:;
  /* 1185e864 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1185e86b jmp 0x1185e876 */
  goto L_1185e876;
L_1185e86d:;
  /* 1185e86d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e870 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e873 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1185e876:;
  /* 1185e876 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e87a jae 0x1185e8f7 */
  if (!C.cf) goto L_1185e8f7;
  /* 1185e87c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e87f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185e882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e885 lea ecx, [edx + eax*8 + 0x11882ec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11882ec8));
  /* 1185e88c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1185e88f jmp 0x1185e89a */
  goto L_1185e89a;
L_1185e891:;
  /* 1185e891 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e894 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e897 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1185e89a:;
  /* 1185e89a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e89d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185e89f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1185e8a1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185e8a3 je 0x1185e8f2 */
  if (C.zf) goto L_1185e8f2;
  /* 1185e8a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e8a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e8aa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1185e8ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e8af je 0x1185e8f2 */
  if (C.zf) goto L_1185e8f2;
  /* 1185e8b1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e8b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185e8b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1185e8b8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185e8bb jmp 0x1185e8c6 */
  goto L_1185e8c6;
L_1185e8bd:;
  /* 1185e8bd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e8c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e8c3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1185e8c6:;
  /* 1185e8c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185e8c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185e8cb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1185e8ce cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e8d1 ja 0x1185e8f0 */
  if ((!C.cf&&!C.zf)) goto L_1185e8f0;
  /* 1185e8d3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e8d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e8d9 mov dl, byte ptr [eax + 0x11886101] */
  DL = (r8((uint32_t)(EAX + 0x11886101)));
  /* 1185e8df or dl, byte ptr [ecx + 0x11882eb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11882eb0))); DL = (_r); fl_logic(_r,8); }
  /* 1185e8e5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e8e8 mov byte ptr [eax + 0x11886101], dl */
  w8((uint32_t)(EAX + 0x11886101), (DL));
  /* 1185e8ee jmp 0x1185e8bd */
  goto L_1185e8bd;
L_1185e8f0:;
  /* 1185e8f0 jmp 0x1185e891 */
  goto L_1185e891;
L_1185e8f2:;
  /* 1185e8f2 jmp 0x1185e86d */
  goto L_1185e86d;
L_1185e8f7:;
  /* 1185e8f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e8fa mov dword ptr [0x11885f64], ecx */
  w32((uint32_t)(0x11885f64), (ECX));
  /* 1185e900 mov dword ptr [0x11885fec], 1 */
  w32((uint32_t)(0x11885fec), (0x1u));
  /* 1185e90a mov edx, dword ptr [0x11885f64] */
  EDX = (r32((uint32_t)(0x11885f64)));
  /* 1185e910 push edx */
  push32((uint32_t)(EDX));
  /* 1185e911 call 0x1185eb60 */
  push32(0x1185e916u); f_1185eb60();
  /* 1185e916 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e919 mov dword ptr [0x11886204], eax */
  w32((uint32_t)(0x11886204), (EAX));
  /* 1185e91e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1185e925 jmp 0x1185e930 */
  goto L_1185e930;
L_1185e927:;
  /* 1185e927 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e92a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e92d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1185e930:;
  /* 1185e930 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e934 jae 0x1185e954 */
  if (!C.cf) goto L_1185e954;
  /* 1185e936 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185e939 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185e93c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e93f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185e942 mov cx, word ptr [ecx + eax*2 + 0x11882ebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11882ebc)));
  /* 1185e94a mov word ptr [edx*2 + 0x11885fe0], cx */
  w16((uint32_t)(EDX*2 + 0x11885fe0), (CX));
  /* 1185e952 jmp 0x1185e927 */
  goto L_1185e927;
L_1185e954:;
  /* 1185e954 call 0x1185ec60 */
  push32(0x1185e959u); f_1185ec60();
  /* 1185e959 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185e95b call 0x1185c180 */
  push32(0x1185e960u); f_1185c180();
  /* 1185e960 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e963 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e965 jmp 0x1185eaf0 */
  goto L_1185eaf0;
L_1185e96a:;
  /* 1185e96a jmp 0x1185e815 */
  goto L_1185e815;
L_1185e96f:;
  /* 1185e96f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1185e972 push edx */
  push32((uint32_t)(EDX));
  /* 1185e973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e976 push eax */
  push32((uint32_t)(EAX));
  /* 1185e977 call dword ptr [0x11887344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887344))), 0x1185e97du);
  /* 1185e97d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e980 jne 0x1185eac2 */
  if (!C.zf) goto L_1185eac2;
  /* 1185e986 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1185e98d jmp 0x1185e998 */
  goto L_1185e998;
L_1185e98f:;
  /* 1185e98f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e992 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e995 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1185e998:;
  /* 1185e998 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e99f jae 0x1185e9ad */
  if (!C.cf) goto L_1185e9ad;
  /* 1185e9a1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185e9a4 mov byte ptr [edx + 0x11886100], 0 */
  w8((uint32_t)(EDX + 0x11886100), (0x0u));
  /* 1185e9ab jmp 0x1185e98f */
  goto L_1185e98f;
L_1185e9ad:;
  /* 1185e9ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185e9b0 mov dword ptr [0x11885f64], eax */
  w32((uint32_t)(0x11885f64), (EAX));
  /* 1185e9b5 mov dword ptr [0x11886204], 0 */
  w32((uint32_t)(0x11886204), (0x0u));
  /* 1185e9bf cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185e9c3 jbe 0x1185ea7e */
  if ((C.cf||C.zf)) goto L_1185ea7e;
  /* 1185e9c9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1185e9cc mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1185e9cf jmp 0x1185e9da */
  goto L_1185e9da;
L_1185e9d1:;
  /* 1185e9d1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185e9d4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185e9d7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1185e9da:;
  /* 1185e9da mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185e9dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185e9df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1185e9e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185e9e3 je 0x1185ea2c */
  if (C.zf) goto L_1185ea2c;
  /* 1185e9e5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185e9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185e9ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1185e9ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185e9ef je 0x1185ea2c */
  if (C.zf) goto L_1185ea2c;
  /* 1185e9f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185e9f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185e9f6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1185e9f8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185e9fb jmp 0x1185ea06 */
  goto L_1185ea06;
L_1185e9fd:;
  /* 1185e9fd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ea03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1185ea06:;
  /* 1185ea06 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185ea09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185ea0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1185ea0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ea11 ja 0x1185ea2a */
  if ((!C.cf&&!C.zf)) goto L_1185ea2a;
  /* 1185ea13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea16 mov cl, byte ptr [eax + 0x11886101] */
  CL = (r8((uint32_t)(EAX + 0x11886101)));
  /* 1185ea1c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1185ea1f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea22 mov byte ptr [edx + 0x11886101], cl */
  w8((uint32_t)(EDX + 0x11886101), (CL));
  /* 1185ea28 jmp 0x1185e9fd */
  goto L_1185e9fd;
L_1185ea2a:;
  /* 1185ea2a jmp 0x1185e9d1 */
  goto L_1185e9d1;
L_1185ea2c:;
  /* 1185ea2c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1185ea33 jmp 0x1185ea3e */
  goto L_1185ea3e;
L_1185ea35:;
  /* 1185ea35 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea38 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ea3b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1185ea3e:;
  /* 1185ea3e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ea45 jae 0x1185ea5e */
  if (!C.cf) goto L_1185ea5e;
  /* 1185ea47 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea4a mov dl, byte ptr [ecx + 0x11886101] */
  DL = (r8((uint32_t)(ECX + 0x11886101)));
  /* 1185ea50 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1185ea53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1185ea56 mov byte ptr [eax + 0x11886101], dl */
  w8((uint32_t)(EAX + 0x11886101), (DL));
  /* 1185ea5c jmp 0x1185ea35 */
  goto L_1185ea35;
L_1185ea5e:;
  /* 1185ea5e mov ecx, dword ptr [0x11885f64] */
  ECX = (r32((uint32_t)(0x11885f64)));
  /* 1185ea64 push ecx */
  push32((uint32_t)(ECX));
  /* 1185ea65 call 0x1185eb60 */
  push32(0x1185ea6au); f_1185eb60();
  /* 1185ea6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ea6d mov dword ptr [0x11886204], eax */
  w32((uint32_t)(0x11886204), (EAX));
  /* 1185ea72 mov dword ptr [0x11885fec], 1 */
  w32((uint32_t)(0x11885fec), (0x1u));
  /* 1185ea7c jmp 0x1185ea88 */
  goto L_1185ea88;
L_1185ea7e:;
  /* 1185ea7e mov dword ptr [0x11885fec], 0 */
  w32((uint32_t)(0x11885fec), (0x0u));
L_1185ea88:;
  /* 1185ea88 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1185ea8f jmp 0x1185ea9a */
  goto L_1185ea9a;
L_1185ea91:;
  /* 1185ea91 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185ea94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ea97 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1185ea9a:;
  /* 1185ea9a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ea9e jae 0x1185eaaf */
  if (!C.cf) goto L_1185eaaf;
  /* 1185eaa0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185eaa3 mov word ptr [eax*2 + 0x11885fe0], 0 */
  w16((uint32_t)(EAX*2 + 0x11885fe0), (0x0u));
  /* 1185eaad jmp 0x1185ea91 */
  goto L_1185ea91;
L_1185eaaf:;
  /* 1185eaaf call 0x1185ec60 */
  push32(0x1185eab4u); f_1185ec60();
  /* 1185eab4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185eab6 call 0x1185c180 */
  push32(0x1185eabbu); f_1185c180();
  /* 1185eabb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185eabe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185eac0 jmp 0x1185eaf0 */
  goto L_1185eaf0;
L_1185eac2:;
  /* 1185eac2 cmp dword ptr [0x11884a70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eac9 je 0x1185eae3 */
  if (C.zf) goto L_1185eae3;
  /* 1185eacb call 0x1185ebe0 */
  push32(0x1185ead0u); f_1185ebe0();
  /* 1185ead0 call 0x1185ec60 */
  push32(0x1185ead5u); f_1185ec60();
  /* 1185ead5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185ead7 call 0x1185c180 */
  push32(0x1185eadcu); f_1185c180();
  /* 1185eadc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185eadf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185eae1 jmp 0x1185eaf0 */
  goto L_1185eaf0;
L_1185eae3:;
  /* 1185eae3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1185eae5 call 0x1185c180 */
  push32(0x1185eaeau); f_1185c180();
  /* 1185eaea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185eaed or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1185eaf0:;
  /* 1185eaf0 mov esp, ebp */
  ESP = (EBP);
  /* 1185eaf2 pop ebp */
  EBP = (pop32());
  /* 1185eaf3 ret  */
  ESPCHK(0x1185e7b0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1185eb00 (89 bytes, 21 insns) */
void f_1185eb00(void) {
  FTRACE(0x1185eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 1185eb01 mov ebp, esp */
  EBP = (ESP);
  /* 1185eb03 mov dword ptr [0x11884a70], 0 */
  w32((uint32_t)(0x11884a70), (0x0u));
  /* 1185eb0d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eb11 jne 0x1185eb25 */
  if (!C.zf) goto L_1185eb25;
  /* 1185eb13 mov dword ptr [0x11884a70], 1 */
  w32((uint32_t)(0x11884a70), (0x1u));
  /* 1185eb1d call dword ptr [0x1188733c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188733c))), 0x1185eb23u);
  /* 1185eb23 jmp 0x1185eb57 */
  goto L_1185eb57;
L_1185eb25:;
  /* 1185eb25 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eb29 jne 0x1185eb3d */
  if (!C.zf) goto L_1185eb3d;
  /* 1185eb2b mov dword ptr [0x11884a70], 1 */
  w32((uint32_t)(0x11884a70), (0x1u));
  /* 1185eb35 call dword ptr [0x1188734c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188734c))), 0x1185eb3bu);
  /* 1185eb3b jmp 0x1185eb57 */
  goto L_1185eb57;
L_1185eb3d:;
  /* 1185eb3d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eb41 jne 0x1185eb54 */
  if (!C.zf) goto L_1185eb54;
  /* 1185eb43 mov dword ptr [0x11884a70], 1 */
  w32((uint32_t)(0x11884a70), (0x1u));
  /* 1185eb4d mov eax, dword ptr [0x11884a90] */
  EAX = (r32((uint32_t)(0x11884a90)));
  /* 1185eb52 jmp 0x1185eb57 */
  goto L_1185eb57;
L_1185eb54:;
  /* 1185eb54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1185eb57:;
  /* 1185eb57 pop ebp */
  EBP = (pop32());
  /* 1185eb58 ret  */
  ESPCHK(0x1185eb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x1185eb60 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1185eb60(void) {
  FTRACE(0x1185eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 1185eb61 mov ebp, esp */
  EBP = (ESP);
  /* 1185eb63 push ecx */
  push32((uint32_t)(ECX));
  /* 1185eb64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185eb67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185eb6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185eb6d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185eb73 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185eb76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eb7a ja 0x1185ebaa */
  if ((!C.cf&&!C.zf)) goto L_1185ebaa;
  /* 1185eb7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185eb7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185eb81 mov dl, byte ptr [eax + 0x1185ebc4] */
  DL = (r8((uint32_t)(EAX + 0x1185ebc4)));
  /* 1185eb87 jmp dword ptr [edx*4 + 0x1185ebb0] */
  switch (EDX) {
    case 0: goto L_1185eb8e;
    case 1: goto L_1185eb95;
    case 2: goto L_1185eb9c;
    case 3: goto L_1185eba3;
    case 4: goto L_1185ebaa;
    default: x86_unimpl("switch@0x1185eb87 out of table"); return;
  }
L_1185eb8e:;
  /* 1185eb8e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1185eb93 jmp 0x1185ebac */
  goto L_1185ebac;
L_1185eb95:;
  /* 1185eb95 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1185eb9a jmp 0x1185ebac */
  goto L_1185ebac;
L_1185eb9c:;
  /* 1185eb9c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1185eba1 jmp 0x1185ebac */
  goto L_1185ebac;
L_1185eba3:;
  /* 1185eba3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1185eba8 jmp 0x1185ebac */
  goto L_1185ebac;
L_1185ebaa:;
  /* 1185ebaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1185ebac:;
  /* 1185ebac mov esp, ebp */
  ESP = (EBP);
  /* 1185ebae pop ebp */
  EBP = (pop32());
  /* 1185ebaf ret  */
  ESPCHK(0x1185eb60u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1185ebe0 (116 bytes, 29 insns) */
void f_1185ebe0(void) {
  FTRACE(0x1185ebe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185ebe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185ebe1 mov ebp, esp */
  EBP = (ESP);
  /* 1185ebe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1185ebe4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1185ebeb jmp 0x1185ebf6 */
  goto L_1185ebf6;
L_1185ebed:;
  /* 1185ebed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ebf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ebf3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1185ebf6:;
  /* 1185ebf6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ebfd jge 0x1185ec0b */
  if ((C.sf==C.of)) goto L_1185ec0b;
  /* 1185ebff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ec02 mov byte ptr [ecx + 0x11886100], 0 */
  w8((uint32_t)(ECX + 0x11886100), (0x0u));
  /* 1185ec09 jmp 0x1185ebed */
  goto L_1185ebed;
L_1185ec0b:;
  /* 1185ec0b mov dword ptr [0x11885f64], 0 */
  w32((uint32_t)(0x11885f64), (0x0u));
  /* 1185ec15 mov dword ptr [0x11885fec], 0 */
  w32((uint32_t)(0x11885fec), (0x0u));
  /* 1185ec1f mov dword ptr [0x11886204], 0 */
  w32((uint32_t)(0x11886204), (0x0u));
  /* 1185ec29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1185ec30 jmp 0x1185ec3b */
  goto L_1185ec3b;
L_1185ec32:;
  /* 1185ec32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ec35 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ec38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185ec3b:;
  /* 1185ec3b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ec3f jge 0x1185ec50 */
  if ((C.sf==C.of)) goto L_1185ec50;
  /* 1185ec41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ec44 mov word ptr [eax*2 + 0x11885fe0], 0 */
  w16((uint32_t)(EAX*2 + 0x11885fe0), (0x0u));
  /* 1185ec4e jmp 0x1185ec32 */
  goto L_1185ec32;
L_1185ec50:;
  /* 1185ec50 mov esp, ebp */
  ESP = (EBP);
  /* 1185ec52 pop ebp */
  EBP = (pop32());
  /* 1185ec53 ret  */
  ESPCHK(0x1185ebe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec60 @ 0x1185ec60 (770 bytes, 175 insns) */
void f_1185ec60(void) {
  FTRACE(0x1185ec60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185ec60 push ebp */
  push32((uint32_t)(EBP));
  /* 1185ec61 mov ebp, esp */
  EBP = (ESP);
  /* 1185ec63 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ec69 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1185ec6f push eax */
  push32((uint32_t)(EAX));
  /* 1185ec70 mov ecx, dword ptr [0x11885f64] */
  ECX = (r32((uint32_t)(0x11885f64)));
  /* 1185ec76 push ecx */
  push32((uint32_t)(ECX));
  /* 1185ec77 call dword ptr [0x11887344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887344))), 0x1185ec7du);
  /* 1185ec7d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ec80 jne 0x1185ee99 */
  if (!C.zf) goto L_1185ee99;
  /* 1185ec86 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1185ec90 jmp 0x1185eca1 */
  goto L_1185eca1;
L_1185ec92:;
  /* 1185ec92 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ec98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ec9b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1185eca1:;
  /* 1185eca1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ecab jae 0x1185ecc2 */
  if (!C.cf) goto L_1185ecc2;
  /* 1185ecad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ecb3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1185ecb9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1185ecc0 jmp 0x1185ec92 */
  goto L_1185ec92;
L_1185ecc2:;
  /* 1185ecc2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1185ecc9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1185eccf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185ecd2 jmp 0x1185ecdd */
  goto L_1185ecdd;
L_1185ecd4:;
  /* 1185ecd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ecd7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ecda mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1185ecdd:;
  /* 1185ecdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ece0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185ece2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1185ece4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ece6 je 0x1185ed28 */
  if (C.zf) goto L_1185ed28;
  /* 1185ece8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185eceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185eced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1185ecef mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1185ecf5 jmp 0x1185ed06 */
  goto L_1185ed06;
L_1185ecf7:;
  /* 1185ecf7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ecfd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ed00 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1185ed06:;
  /* 1185ed06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ed09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185ed0b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1185ed0e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ed14 ja 0x1185ed26 */
  if ((!C.cf&&!C.zf)) goto L_1185ed26;
  /* 1185ed16 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ed1c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1185ed24 jmp 0x1185ecf7 */
  goto L_1185ecf7;
L_1185ed26:;
  /* 1185ed26 jmp 0x1185ecd4 */
  goto L_1185ecd4;
L_1185ed28:;
  /* 1185ed28 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185ed2a mov eax, dword ptr [0x11886204] */
  EAX = (r32((uint32_t)(0x11886204)));
  /* 1185ed2f push eax */
  push32((uint32_t)(EAX));
  /* 1185ed30 mov ecx, dword ptr [0x11885f64] */
  ECX = (r32((uint32_t)(0x11885f64)));
  /* 1185ed36 push ecx */
  push32((uint32_t)(ECX));
  /* 1185ed37 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1185ed3d push edx */
  push32((uint32_t)(EDX));
  /* 1185ed3e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185ed43 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1185ed49 push eax */
  push32((uint32_t)(EAX));
  /* 1185ed4a push 1 */
  push32((uint32_t)(0x1u));
  /* 1185ed4c call 0x11860910 */
  push32(0x1185ed51u); f_11860910();
  /* 1185ed51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ed54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185ed56 mov ecx, dword ptr [0x11885f64] */
  ECX = (r32((uint32_t)(0x11885f64)));
  /* 1185ed5c push ecx */
  push32((uint32_t)(ECX));
  /* 1185ed5d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185ed62 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1185ed68 push edx */
  push32((uint32_t)(EDX));
  /* 1185ed69 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185ed6e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1185ed74 push eax */
  push32((uint32_t)(EAX));
  /* 1185ed75 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185ed7a mov ecx, dword ptr [0x11886204] */
  ECX = (r32((uint32_t)(0x11886204)));
  /* 1185ed80 push ecx */
  push32((uint32_t)(ECX));
  /* 1185ed81 call 0x11860ad0 */
  push32(0x1185ed86u); f_11860ad0();
  /* 1185ed86 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ed89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185ed8b mov edx, dword ptr [0x11885f64] */
  EDX = (r32((uint32_t)(0x11885f64)));
  /* 1185ed91 push edx */
  push32((uint32_t)(EDX));
  /* 1185ed92 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185ed97 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1185ed9d push eax */
  push32((uint32_t)(EAX));
  /* 1185ed9e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1185eda3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1185eda9 push ecx */
  push32((uint32_t)(ECX));
  /* 1185edaa push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1185edaf mov edx, dword ptr [0x11886204] */
  EDX = (r32((uint32_t)(0x11886204)));
  /* 1185edb5 push edx */
  push32((uint32_t)(EDX));
  /* 1185edb6 call 0x11860ad0 */
  push32(0x1185edbbu); f_11860ad0();
  /* 1185edbb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185edbe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1185edc8 jmp 0x1185edd9 */
  goto L_1185edd9;
L_1185edca:;
  /* 1185edca mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185edd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185edd3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1185edd9:;
  /* 1185edd9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ede3 jae 0x1185ee94 */
  if (!C.cf) goto L_1185ee94;
  /* 1185ede9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185edef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185edf1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1185edf9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1185edfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185edfe je 0x1185ee36 */
  if (C.zf) goto L_1185ee36;
  /* 1185ee00 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee06 mov cl, byte ptr [eax + 0x11886101] */
  CL = (r8((uint32_t)(EAX + 0x11886101)));
  /* 1185ee0c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1185ee0f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee15 mov byte ptr [edx + 0x11886101], cl */
  w8((uint32_t)(EDX + 0x11886101), (CL));
  /* 1185ee1b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee21 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee27 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1185ee2e mov byte ptr [eax + 0x11886000], dl */
  w8((uint32_t)(EAX + 0x11886000), (DL));
  /* 1185ee34 jmp 0x1185ee8f */
  goto L_1185ee8f;
L_1185ee36:;
  /* 1185ee36 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185ee3e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1185ee46 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1185ee49 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185ee4b je 0x1185ee82 */
  if (C.zf) goto L_1185ee82;
  /* 1185ee4d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee53 mov al, byte ptr [edx + 0x11886101] */
  AL = (r8((uint32_t)(EDX + 0x11886101)));
  /* 1185ee59 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1185ee5b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee61 mov byte ptr [ecx + 0x11886101], al */
  w8((uint32_t)(ECX + 0x11886101), (AL));
  /* 1185ee67 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee6d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee73 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1185ee7a mov byte ptr [edx + 0x11886000], cl */
  w8((uint32_t)(EDX + 0x11886000), (CL));
  /* 1185ee80 jmp 0x1185ee8f */
  goto L_1185ee8f;
L_1185ee82:;
  /* 1185ee82 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ee88 mov byte ptr [edx + 0x11886000], 0 */
  w8((uint32_t)(EDX + 0x11886000), (0x0u));
L_1185ee8f:;
  /* 1185ee8f jmp 0x1185edca */
  goto L_1185edca;
L_1185ee94:;
  /* 1185ee94 jmp 0x1185ef5e */
  goto L_1185ef5e;
L_1185ee99:;
  /* 1185ee99 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1185eea3 jmp 0x1185eeb4 */
  goto L_1185eeb4;
L_1185eea5:;
  /* 1185eea5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185eeab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185eeae mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1185eeb4:;
  /* 1185eeb4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eebe jae 0x1185ef5e */
  if (!C.cf) goto L_1185ef5e;
  /* 1185eec4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eecb jb 0x1185ef08 */
  if (C.cf) goto L_1185ef08;
  /* 1185eecd cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eed4 ja 0x1185ef08 */
  if ((!C.cf&&!C.zf)) goto L_1185ef08;
  /* 1185eed6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185eedc mov dl, byte ptr [ecx + 0x11886101] */
  DL = (r8((uint32_t)(ECX + 0x11886101)));
  /* 1185eee2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1185eee5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185eeeb mov byte ptr [eax + 0x11886101], dl */
  w8((uint32_t)(EAX + 0x11886101), (DL));
  /* 1185eef1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185eef7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185eefa mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef00 mov byte ptr [edx + 0x11886000], cl */
  w8((uint32_t)(EDX + 0x11886000), (CL));
  /* 1185ef06 jmp 0x1185ef59 */
  goto L_1185ef59;
L_1185ef08:;
  /* 1185ef08 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ef0f jb 0x1185ef4c */
  if (C.cf) goto L_1185ef4c;
  /* 1185ef11 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ef18 ja 0x1185ef4c */
  if ((!C.cf&&!C.zf)) goto L_1185ef4c;
  /* 1185ef1a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef20 mov cl, byte ptr [eax + 0x11886101] */
  CL = (r8((uint32_t)(EAX + 0x11886101)));
  /* 1185ef26 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1185ef29 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef2f mov byte ptr [edx + 0x11886101], cl */
  w8((uint32_t)(EDX + 0x11886101), (CL));
  /* 1185ef35 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef3b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ef3e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef44 mov byte ptr [ecx + 0x11886000], al */
  w8((uint32_t)(ECX + 0x11886000), (AL));
  /* 1185ef4a jmp 0x1185ef59 */
  goto L_1185ef59;
L_1185ef4c:;
  /* 1185ef4c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1185ef52 mov byte ptr [edx + 0x11886000], 0 */
  w8((uint32_t)(EDX + 0x11886000), (0x0u));
L_1185ef59:;
  /* 1185ef59 jmp 0x1185eea5 */
  goto L_1185eea5;
L_1185ef5e:;
  /* 1185ef5e mov esp, ebp */
  ESP = (EBP);
  /* 1185ef60 pop ebp */
  EBP = (pop32());
  /* 1185ef61 ret  */
  ESPCHK(0x1185ec60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x1185ef70 (23 bytes, 9 insns) */
void f_1185ef70(void) {
  FTRACE(0x1185ef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185ef70 push ebp */
  push32((uint32_t)(EBP));
  /* 1185ef71 mov ebp, esp */
  EBP = (ESP);
  /* 1185ef73 cmp dword ptr [0x11885fec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11885fec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ef7a je 0x1185ef83 */
  if (C.zf) goto L_1185ef83;
  /* 1185ef7c mov eax, dword ptr [0x11885f64] */
  EAX = (r32((uint32_t)(0x11885f64)));
  /* 1185ef81 jmp 0x1185ef85 */
  goto L_1185ef85;
L_1185ef83:;
  /* 1185ef83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1185ef85:;
  /* 1185ef85 pop ebp */
  EBP = (pop32());
  /* 1185ef86 ret  */
  ESPCHK(0x1185ef70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef90 @ 0x1185ef90 (34 bytes, 10 insns) */
void f_1185ef90(void) {
  FTRACE(0x1185ef90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185ef90 push ebp */
  push32((uint32_t)(EBP));
  /* 1185ef91 mov ebp, esp */
  EBP = (ESP);
  /* 1185ef93 cmp dword ptr [0x118863b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118863b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ef9a jne 0x1185efb0 */
  if (!C.zf) goto L_1185efb0;
  /* 1185ef9c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1185ef9e call 0x1185e7b0 */
  push32(0x1185efa3u); f_1185e7b0();
  /* 1185efa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185efa6 mov dword ptr [0x118863b0], 1 */
  w32((uint32_t)(0x118863b0), (0x1u));
L_1185efb0:;
  /* 1185efb0 pop ebp */
  EBP = (pop32());
  /* 1185efb1 ret  */
  ESPCHK(0x1185ef90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x1185efc0 (664 bytes, 264 insns) [15 switch table(s)] */
void f_1185efc0(void) {
  FTRACE(0x1185efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185efc1 mov ebp, esp */
  EBP = (ESP);
  /* 1185efc3 push edi */
  push32((uint32_t)(EDI));
  /* 1185efc4 push esi */
  push32((uint32_t)(ESI));
  /* 1185efc5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1185efc8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1185efcb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1185efce mov eax, ecx */
  EAX = (ECX);
  /* 1185efd0 mov edx, ecx */
  EDX = (ECX);
  /* 1185efd2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185efd4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185efd6 jbe 0x1185efe0 */
  if ((C.cf||C.zf)) goto L_1185efe0;
  /* 1185efd8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185efda jb 0x1185f158 */
  if (C.cf) goto L_1185f158;
L_1185efe0:;
  /* 1185efe0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1185efe6 jne 0x1185effc */
  if (!C.zf) goto L_1185effc;
  /* 1185efe8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185efeb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1185efee cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185eff1 jb 0x1185f01c */
  if (C.cf) goto L_1185f01c;
  /* 1185eff3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185eff5 jmp dword ptr [edx*4 + 0x1185f108] */
  switch (EDX) {
    case 0: goto L_1185f118;
    case 1: goto L_1185f120;
    case 2: goto L_1185f12c;
    case 3: goto L_1185f140;
    default: x86_unimpl("switch@0x1185eff5 out of table"); return;
  }
L_1185effc:;
  /* 1185effc mov eax, edi */
  EAX = (EDI);
  /* 1185effe mov edx, 3 */
  EDX = (0x3u);
  /* 1185f003 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f006 jb 0x1185f014 */
  if (C.cf) goto L_1185f014;
  /* 1185f008 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1185f00b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f00d jmp dword ptr [eax*4 + 0x1185f020] */
  switch (EAX) {
    case 1: goto L_1185f030;
    case 2: goto L_1185f05c;
    case 3: goto L_1185f080;
    default: x86_unimpl("switch@0x1185f00d out of table"); return;
  }
L_1185f014:;
  /* 1185f014 jmp dword ptr [ecx*4 + 0x1185f118] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1185f118)))); return;
  /* 1185f01b nop  */
  /* nop */
L_1185f01c:;
  /* 1185f01c jmp dword ptr [ecx*4 + 0x1185f09c] */
  switch (ECX) {
    case 0: goto L_1185f0ff;
    case 1: goto L_1185f0ec;
    case 2: goto L_1185f0e4;
    case 3: goto L_1185f0dc;
    case 4: goto L_1185f0d4;
    case 5: goto L_1185f0cc;
    case 6: goto L_1185f0c4;
    case 7: goto L_1185f0bc;
    default: x86_unimpl("switch@0x1185f01c out of table"); return;
  }
  /* 1185f023 nop  */
  /* nop */
L_1185f030:;
  /* 1185f030 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f032 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f034 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f036 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f039 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f03c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f03f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f042 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f045 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f048 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f04b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f04e jb 0x1185f01c */
  if (C.cf) goto L_1185f01c;
  /* 1185f050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f052 jmp dword ptr [edx*4 + 0x1185f108] */
  switch (EDX) {
    case 0: goto L_1185f118;
    case 1: goto L_1185f120;
    case 2: goto L_1185f12c;
    case 3: goto L_1185f140;
    default: x86_unimpl("switch@0x1185f052 out of table"); return;
  }
  /* 1185f059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f05c:;
  /* 1185f05c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f05e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f060 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f062 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f065 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f068 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f06b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f06e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f071 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f074 jb 0x1185f01c */
  if (C.cf) goto L_1185f01c;
  /* 1185f076 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f078 jmp dword ptr [edx*4 + 0x1185f108] */
  switch (EDX) {
    case 0: goto L_1185f118;
    case 1: goto L_1185f120;
    case 2: goto L_1185f12c;
    case 3: goto L_1185f140;
    default: x86_unimpl("switch@0x1185f078 out of table"); return;
  }
  /* 1185f07f nop  */
  /* nop */
L_1185f080:;
  /* 1185f080 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f082 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f084 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f086 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1185f087 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f08a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1185f08b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f08e jb 0x1185f01c */
  if (C.cf) goto L_1185f01c;
  /* 1185f090 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f092 jmp dword ptr [edx*4 + 0x1185f108] */
  switch (EDX) {
    case 0: goto L_1185f118;
    case 1: goto L_1185f120;
    case 2: goto L_1185f12c;
    case 3: goto L_1185f140;
    default: x86_unimpl("switch@0x1185f092 out of table"); return;
  }
  /* 1185f099 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f0bc:;
  /* 1185f0bc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1185f0c0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1185f0c4:;
  /* 1185f0c4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1185f0c8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1185f0cc:;
  /* 1185f0cc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1185f0d0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1185f0d4:;
  /* 1185f0d4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1185f0d8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1185f0dc:;
  /* 1185f0dc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1185f0e0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1185f0e4:;
  /* 1185f0e4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1185f0e8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1185f0ec:;
  /* 1185f0ec mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1185f0f0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1185f0f4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1185f0fb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f0fd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1185f0ff:;
  /* 1185f0ff jmp dword ptr [edx*4 + 0x1185f108] */
  switch (EDX) {
    case 0: goto L_1185f118;
    case 1: goto L_1185f120;
    case 2: goto L_1185f12c;
    case 3: goto L_1185f140;
    default: x86_unimpl("switch@0x1185f0ff out of table"); return;
  }
  /* 1185f106 mov edi, edi */
  EDI = (EDI);
L_1185f118:;
  /* 1185f118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f11b pop esi */
  ESI = (pop32());
  /* 1185f11c pop edi */
  EDI = (pop32());
  /* 1185f11d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f11e ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f11f nop  */
  /* nop */
L_1185f120:;
  /* 1185f120 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f122 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f127 pop esi */
  ESI = (pop32());
  /* 1185f128 pop edi */
  EDI = (pop32());
  /* 1185f129 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f12a ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f12b nop  */
  /* nop */
L_1185f12c:;
  /* 1185f12c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f12e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f130 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f133 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f136 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f139 pop esi */
  ESI = (pop32());
  /* 1185f13a pop edi */
  EDI = (pop32());
  /* 1185f13b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f13c ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f13d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f140:;
  /* 1185f140 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1185f142 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1185f144 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f147 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f14a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f14d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f153 pop esi */
  ESI = (pop32());
  /* 1185f154 pop edi */
  EDI = (pop32());
  /* 1185f155 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f156 ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f157 nop  */
  /* nop */
L_1185f158:;
  /* 1185f158 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1185f15c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1185f160 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1185f166 jne 0x1185f18c */
  if (!C.zf) goto L_1185f18c;
  /* 1185f168 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f16b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f16e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f171 jb 0x1185f180 */
  if (C.cf) goto L_1185f180;
  /* 1185f173 std  */
  C.df=1;
  /* 1185f174 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f176 cld  */
  C.df=0;
  /* 1185f177 jmp dword ptr [edx*4 + 0x1185f2a0] */
  switch (EDX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f177 out of table"); return;
  }
  /* 1185f17e mov edi, edi */
  EDI = (EDI);
L_1185f180:;
  /* 1185f180 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185f182 jmp dword ptr [ecx*4 + 0x1185f250] */
  switch (ECX) {
    case 0: goto L_1185f297;
    default: x86_unimpl("switch@0x1185f182 out of table"); return;
  }
  /* 1185f189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f18c:;
  /* 1185f18c mov eax, edi */
  EAX = (EDI);
  /* 1185f18e mov edx, 3 */
  EDX = (0x3u);
  /* 1185f193 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f196 jb 0x1185f1a4 */
  if (C.cf) goto L_1185f1a4;
  /* 1185f198 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1185f19b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f19d jmp dword ptr [eax*4 + 0x1185f1a8] */
  switch (EAX) {
    case 1: goto L_1185f1b8;
    case 2: goto L_1185f1d8;
    case 3: goto L_1185f200;
    default: x86_unimpl("switch@0x1185f19d out of table"); return;
  }
L_1185f1a4:;
  /* 1185f1a4 jmp dword ptr [ecx*4 + 0x1185f2a0] */
  switch (ECX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f1a4 out of table"); return;
  }
  /* 1185f1ab nop  */
  /* nop */
L_1185f1b8:;
  /* 1185f1b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f1bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f1bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f1c0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1185f1c1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f1c4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1185f1c5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f1c8 jb 0x1185f180 */
  if (C.cf) goto L_1185f180;
  /* 1185f1ca std  */
  C.df=1;
  /* 1185f1cb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f1cd cld  */
  C.df=0;
  /* 1185f1ce jmp dword ptr [edx*4 + 0x1185f2a0] */
  switch (EDX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f1ce out of table"); return;
  }
  /* 1185f1d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f1d8:;
  /* 1185f1d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f1db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f1dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f1e0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f1e3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f1e6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f1e9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f1ec sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f1ef cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f1f2 jb 0x1185f180 */
  if (C.cf) goto L_1185f180;
  /* 1185f1f4 std  */
  C.df=1;
  /* 1185f1f5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f1f7 cld  */
  C.df=0;
  /* 1185f1f8 jmp dword ptr [edx*4 + 0x1185f2a0] */
  switch (EDX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f1f8 out of table"); return;
  }
  /* 1185f1ff nop  */
  /* nop */
L_1185f200:;
  /* 1185f200 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f203 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f205 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f208 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f20b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f20e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f211 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1185f214 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f217 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f21a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f21d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f220 jb 0x1185f180 */
  if (C.cf) goto L_1185f180;
  /* 1185f226 std  */
  C.df=1;
  /* 1185f227 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1185f229 cld  */
  C.df=0;
  /* 1185f22a jmp dword ptr [edx*4 + 0x1185f2a0] */
  switch (EDX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f22a out of table"); return;
  }
  /* 1185f231 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1185f234 push esp */
  push32((uint32_t)(ESP));
  /* 1185f235 test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
L_1185f238:;
  /* 1185f238 pop esp */
  ESP = (pop32());
  /* 1185f239 test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
L_1185f23c:;
  /* 1185f23c test dword ptr fs:[ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
  /* 1185f240 insb byte ptr es:[edi], dx */
  x86_unimpl("insb @ 0x1185f240");
  /* 1185f241 test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
  /* 1185f244 je 0x1185f238 */
  if (C.zf) goto L_1185f238;
  /* 1185f246 test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
  /* 1185f248 jl 0x1185f23c */
  if ((C.sf!=C.of)) goto L_1185f23c;
  /* 1185f24a test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
  /* 1185f24c test dl, dh */
  { uint32_t _r=(DL)&(C.d.b.h); fl_logic(_r,8); }
  /* 1185f24e test dword ptr [ecx], edx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EDX); fl_logic(_r,32); }
  /* 1185f254 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1185f258 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1185f25c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1185f260 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1185f264 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1185f268 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1185f26c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1185f270 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1185f274 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1185f278 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1185f27c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1185f280 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1185f284 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1185f288 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1185f28c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1185f293 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f295 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1185f297:;
  /* 1185f297 jmp dword ptr [edx*4 + 0x1185f2a0] */
  switch (EDX) {
    case 0: goto L_1185f2b0;
    case 1: goto L_1185f2b8;
    case 2: goto L_1185f2c8;
    case 3: goto L_1185f2dc;
    default: x86_unimpl("switch@0x1185f297 out of table"); return;
  }
  /* 1185f29e mov edi, edi */
  EDI = (EDI);
L_1185f2b0:;
  /* 1185f2b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f2b3 pop esi */
  ESI = (pop32());
  /* 1185f2b4 pop edi */
  EDI = (pop32());
  /* 1185f2b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f2b6 ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f2b7 nop  */
  /* nop */
L_1185f2b8:;
  /* 1185f2b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f2bb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f2c1 pop esi */
  ESI = (pop32());
  /* 1185f2c2 pop edi */
  EDI = (pop32());
  /* 1185f2c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f2c4 ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f2c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1185f2c8:;
  /* 1185f2c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f2cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f2ce mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f2d1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f2d7 pop esi */
  ESI = (pop32());
  /* 1185f2d8 pop edi */
  EDI = (pop32());
  /* 1185f2d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f2da ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
  /* 1185f2db nop  */
  /* nop */
L_1185f2dc:;
  /* 1185f2dc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1185f2df mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1185f2e2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1185f2e5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1185f2e8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1185f2eb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1185f2ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f2f1 pop esi */
  ESI = (pop32());
  /* 1185f2f2 pop edi */
  EDI = (pop32());
  /* 1185f2f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1185f2f4 ret  */
  ESPCHK(0x1185efc0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x1185f300 (104 bytes, 43 insns) */
void f_1185f300(void) {
  FTRACE(0x1185f300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185f300 push ebx */
  push32((uint32_t)(EBX));
  /* 1185f301 push esi */
  push32((uint32_t)(ESI));
  /* 1185f302 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1185f306 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f308 jne 0x1185f322 */
  if (!C.zf) goto L_1185f322;
  /* 1185f30a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1185f30e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1185f312 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f314 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f316 mov ebx, eax */
  EBX = (EAX);
  /* 1185f318 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1185f31c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f31e mov edx, ebx */
  EDX = (EBX);
  /* 1185f320 jmp 0x1185f363 */
  goto L_1185f363;
L_1185f322:;
  /* 1185f322 mov ecx, eax */
  ECX = (EAX);
  /* 1185f324 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1185f328 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1185f32c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1185f330:;
  /* 1185f330 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1185f332 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1185f334 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1185f336 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1185f338 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185f33a jne 0x1185f330 */
  if (!C.zf) goto L_1185f330;
  /* 1185f33c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f33e mov esi, eax */
  ESI = (EAX);
  /* 1185f340 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1185f344 mov ecx, eax */
  ECX = (EAX);
  /* 1185f346 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1185f34a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1185f34c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f34e jb 0x1185f35e */
  if (C.cf) goto L_1185f35e;
  /* 1185f350 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f354 ja 0x1185f35e */
  if ((!C.cf&&!C.zf)) goto L_1185f35e;
  /* 1185f356 jb 0x1185f35f */
  if (C.cf) goto L_1185f35f;
  /* 1185f358 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f35c jbe 0x1185f35f */
  if ((C.cf||C.zf)) goto L_1185f35f;
L_1185f35e:;
  /* 1185f35e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1185f35f:;
  /* 1185f35f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f361 mov eax, esi */
  EAX = (ESI);
L_1185f363:;
  /* 1185f363 pop esi */
  ESI = (pop32());
  /* 1185f364 pop ebx */
  EBX = (pop32());
  /* 1185f365 ret 0x10 */
  ESPCHK(0x1185f300u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1185f370 (117 bytes, 44 insns) */
void f_1185f370(void) {
  FTRACE(0x1185f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185f370 push ebx */
  push32((uint32_t)(EBX));
  /* 1185f371 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1185f375 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f377 jne 0x1185f391 */
  if (!C.zf) goto L_1185f391;
  /* 1185f379 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1185f37d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1185f381 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f383 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f385 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1185f389 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f38b mov eax, edx */
  EAX = (EDX);
  /* 1185f38d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1185f38f jmp 0x1185f3e1 */
  goto L_1185f3e1;
L_1185f391:;
  /* 1185f391 mov ecx, eax */
  ECX = (EAX);
  /* 1185f393 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1185f397 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1185f39b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1185f39f:;
  /* 1185f39f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1185f3a1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1185f3a3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1185f3a5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1185f3a7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185f3a9 jne 0x1185f39f */
  if (!C.zf) goto L_1185f39f;
  /* 1185f3ab div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1185f3ad mov ecx, eax */
  ECX = (EAX);
  /* 1185f3af mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1185f3b3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1185f3b4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1185f3b8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f3ba jb 0x1185f3ca */
  if (C.cf) goto L_1185f3ca;
  /* 1185f3bc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f3c0 ja 0x1185f3ca */
  if ((!C.cf&&!C.zf)) goto L_1185f3ca;
  /* 1185f3c2 jb 0x1185f3d2 */
  if (C.cf) goto L_1185f3d2;
  /* 1185f3c4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f3c8 jbe 0x1185f3d2 */
  if ((C.cf||C.zf)) goto L_1185f3d2;
L_1185f3ca:;
  /* 1185f3ca sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f3ce sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1185f3d2:;
  /* 1185f3d2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f3d6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f3da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185f3dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185f3de sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1185f3e1:;
  /* 1185f3e1 pop ebx */
  EBX = (pop32());
  /* 1185f3e2 ret 0x10 */
  ESPCHK(0x1185f370u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f3f0 @ 0x1185f3f0 (628 bytes, 214 insns) */
void f_1185f3f0(void) {
  FTRACE(0x1185f3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185f3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1185f3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1185f3f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f3f6 push ebx */
  push32((uint32_t)(EBX));
  /* 1185f3f7 push esi */
  push32((uint32_t)(ESI));
  /* 1185f3f8 push edi */
  push32((uint32_t)(EDI));
L_1185f3f9:;
  /* 1185f3f9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f3fd jne 0x1185f41d */
  if (!C.zf) goto L_1185f41d;
  /* 1185f3ff push 0x118808b4 */
  push32((uint32_t)(0x118808b4u));
  /* 1185f404 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185f406 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1185f408 push 0x118808a8 */
  push32((uint32_t)(0x118808a8u));
  /* 1185f40d push 2 */
  push32((uint32_t)(0x2u));
  /* 1185f40f call 0x118577a0 */
  push32(0x1185f414u); f_118577a0();
  /* 1185f414 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f417 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f41a jne 0x1185f41d */
  if (!C.zf) goto L_1185f41d;
  /* 1185f41c int3  */
  x86_unimpl("int3 @ 0x1185f41c");
L_1185f41d:;
  /* 1185f41d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f41f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f421 jne 0x1185f3f9 */
  if (!C.zf) goto L_1185f3f9;
  /* 1185f423 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f426 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1185f429 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f42c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1185f42f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1185f432 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f435 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f438 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f43e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185f440 je 0x1185f44f */
  if (C.zf) goto L_1185f44f;
  /* 1185f442 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f445 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1185f448 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1185f44b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185f44d je 0x1185f465 */
  if (C.zf) goto L_1185f465;
L_1185f44f:;
  /* 1185f44f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f452 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1185f455 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1185f457 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f45a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1185f45d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185f460 jmp 0x1185f65d */
  goto L_1185f65d;
L_1185f465:;
  /* 1185f465 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f468 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1185f46b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1185f46e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f470 je 0x1185f4bc */
  if (C.zf) goto L_1185f4bc;
  /* 1185f472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f475 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1185f47c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f47f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1185f482 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1185f485 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f487 je 0x1185f4a5 */
  if (C.zf) goto L_1185f4a5;
  /* 1185f489 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f48c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f48f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185f492 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1185f494 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f497 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f49a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1185f49d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4a0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1185f4a3 jmp 0x1185f4bc */
  goto L_1185f4bc;
L_1185f4a5:;
  /* 1185f4a5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4a8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f4ab or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f4ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4b1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1185f4b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185f4b7 jmp 0x1185f65d */
  goto L_1185f65d;
L_1185f4bc:;
  /* 1185f4bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4bf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f4c2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f4c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4c8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1185f4cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4ce mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f4d1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1185f4d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4d7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1185f4da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4dd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1185f4e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1185f4eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f4ee mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1185f4f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f4f4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1185f4f7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1185f4fd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185f4ff jne 0x1185f52f */
  if (!C.zf) goto L_1185f52f;
  /* 1185f501 cmp dword ptr [ebp - 8], 0x11883140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11883140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f508 je 0x1185f513 */
  if (C.zf) goto L_1185f513;
  /* 1185f50a cmp dword ptr [ebp - 8], 0x11883160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11883160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f511 jne 0x1185f523 */
  if (!C.zf) goto L_1185f523;
L_1185f513:;
  /* 1185f513 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f516 push edx */
  push32((uint32_t)(EDX));
  /* 1185f517 call 0x11861360 */
  push32(0x1185f51cu); f_11861360();
  /* 1185f51c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f51f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f521 jne 0x1185f52f */
  if (!C.zf) goto L_1185f52f;
L_1185f523:;
  /* 1185f523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f526 push eax */
  push32((uint32_t)(EAX));
  /* 1185f527 call 0x11861290 */
  push32(0x1185f52cu); f_11861290();
  /* 1185f52c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1185f52f:;
  /* 1185f52f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f532 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1185f535 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f53b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185f53d je 0x1185f61b */
  if (C.zf) goto L_1185f61b;
L_1185f543:;
  /* 1185f543 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f546 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f549 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1185f54b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f54e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185f550 jge 0x1185f573 */
  if ((C.sf==C.of)) goto L_1185f573;
  /* 1185f552 push 0x11880868 */
  push32((uint32_t)(0x11880868u));
  /* 1185f557 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185f559 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1185f55e push 0x118808a8 */
  push32((uint32_t)(0x118808a8u));
  /* 1185f563 push 2 */
  push32((uint32_t)(0x2u));
  /* 1185f565 call 0x118577a0 */
  push32(0x1185f56au); f_118577a0();
  /* 1185f56a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f56d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f570 jne 0x1185f573 */
  if (!C.zf) goto L_1185f573;
  /* 1185f572 int3  */
  x86_unimpl("int3 @ 0x1185f572");
L_1185f573:;
  /* 1185f573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f577 jne 0x1185f543 */
  if (!C.zf) goto L_1185f543;
  /* 1185f579 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f57c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f57f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1185f581 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f584 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185f587 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f58a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1185f58d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f590 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f593 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1185f595 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f598 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1185f59b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f59e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f5a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1185f5a4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f5a8 jle 0x1185f5c6 */
  if ((C.zf||C.sf!=C.of)) goto L_1185f5c6;
  /* 1185f5aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f5ad push ecx */
  push32((uint32_t)(ECX));
  /* 1185f5ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f5b1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185f5b4 push eax */
  push32((uint32_t)(EAX));
  /* 1185f5b5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f5b8 push ecx */
  push32((uint32_t)(ECX));
  /* 1185f5b9 call 0x11860f80 */
  push32(0x1185f5beu); f_11860f80();
  /* 1185f5be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f5c1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1185f5c4 jmp 0x1185f60e */
  goto L_1185f60e;
L_1185f5c6:;
  /* 1185f5c6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f5ca je 0x1185f5e9 */
  if (C.zf) goto L_1185f5e9;
  /* 1185f5cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f5cf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1185f5d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f5d5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1185f5d8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185f5db mov ecx, dword ptr [edx*4 + 0x11886260] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 1185f5e2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f5e4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1185f5e7 jmp 0x1185f5f0 */
  goto L_1185f5f0;
L_1185f5e9:;
  /* 1185f5e9 mov dword ptr [ebp - 0x14], 0x11882a60 */
  w32((uint32_t)(EBP + -0x14), (0x11882a60u));
L_1185f5f0:;
  /* 1185f5f0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1185f5f3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1185f5f7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1185f5fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f5fc je 0x1185f60e */
  if (C.zf) goto L_1185f60e;
  /* 1185f5fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1185f600 push 0 */
  push32((uint32_t)(0x0u));
  /* 1185f602 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f605 push ecx */
  push32((uint32_t)(ECX));
  /* 1185f606 call 0x11860e30 */
  push32(0x1185f60bu); f_11860e30();
  /* 1185f60b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1185f60e:;
  /* 1185f60e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f611 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1185f614 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1185f617 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1185f619 jmp 0x1185f639 */
  goto L_1185f639;
L_1185f61b:;
  /* 1185f61b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1185f622 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f625 push edx */
  push32((uint32_t)(EDX));
  /* 1185f626 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1185f629 push eax */
  push32((uint32_t)(EAX));
  /* 1185f62a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1185f62d push ecx */
  push32((uint32_t)(ECX));
  /* 1185f62e call 0x11860f80 */
  push32(0x1185f633u); f_11860f80();
  /* 1185f633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f636 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1185f639:;
  /* 1185f639 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185f63c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f63f je 0x1185f655 */
  if (C.zf) goto L_1185f655;
  /* 1185f641 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f644 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1185f647 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1185f64a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f64d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1185f650 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185f653 jmp 0x1185f65d */
  goto L_1185f65d;
L_1185f655:;
  /* 1185f655 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f658 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1185f65d:;
  /* 1185f65d pop edi */
  EDI = (pop32());
  /* 1185f65e pop esi */
  ESI = (pop32());
  /* 1185f65f pop ebx */
  EBX = (pop32());
  /* 1185f660 mov esp, ebp */
  ESP = (EBP);
  /* 1185f662 pop ebp */
  EBP = (pop32());
  /* 1185f663 ret  */
  ESPCHK(0x1185f3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x1185f670 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1185f670(void) {
  FTRACE(0x1185f670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1185f670 push ebp */
  push32((uint32_t)(EBP));
  /* 1185f671 mov ebp, esp */
  EBP = (ESP);
  /* 1185f673 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f679 push ebx */
  push32((uint32_t)(EBX));
  /* 1185f67a push esi */
  push32((uint32_t)(ESI));
  /* 1185f67b push edi */
  push32((uint32_t)(EDI));
  /* 1185f67c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1185f683 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1185f68d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1185f694:;
  /* 1185f694 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f697 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1185f699 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1185f69c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f6a0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f6a3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f6a6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1185f6a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185f6ab je 0x11860287 */
  if (C.zf) goto L_11860287;
  /* 1185f6b1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f6b8 jl 0x11860287 */
  if ((C.sf!=C.of)) goto L_11860287;
  /* 1185f6be movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f6c2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f6c5 jl 0x1185f6e6 */
  if ((C.sf!=C.of)) goto L_1185f6e6;
  /* 1185f6c7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f6cb cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f6ce jg 0x1185f6e6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1185f6e6;
  /* 1185f6d0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f6d4 movsx ecx, byte ptr [eax + 0x118808a0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x118808a0))));
  /* 1185f6db and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1185f6de mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1185f6e4 jmp 0x1185f6f0 */
  goto L_1185f6f0;
L_1185f6e6:;
  /* 1185f6e6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1185f6f0:;
  /* 1185f6f0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1185f6f6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1185f6f9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1185f6fc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185f6ff movsx edx, byte ptr [ecx + eax*8 + 0x118808c0] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x118808c0))));
  /* 1185f707 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1185f70a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1185f70d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1185f710 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1185f716 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f71d ja 0x11860282 */
  if ((!C.cf&&!C.zf)) goto L_11860282;
  /* 1185f723 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1185f729 jmp dword ptr [ecx*4 + 0x11860294] */
  switch (ECX) {
    case 0: goto L_1185f730;
    case 1: goto L_1185f7ca;
    case 2: goto L_1185f80c;
    case 3: goto L_1185f87b;
    case 4: goto L_1185f8d3;
    case 5: goto L_1185f8e2;
    case 6: goto L_1185f92e;
    case 7: goto L_1185f9c1;
    case 8: goto L_1185f858;
    case 9: goto L_1185f863;
    case 10: goto L_1185f84e;
    case 11: goto L_1185f843;
    case 12: goto L_1185f86e;
    case 13: goto L_1185f876;
    default: x86_unimpl("switch@0x1185f729 out of table"); return;
  }
L_1185f730:;
  /* 1185f730 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1185f737 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1185f73a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1185f740 mov eax, dword ptr [0x11882c98] */
  EAX = (r32((uint32_t)(0x11882c98)));
  /* 1185f745 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185f747 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1185f74b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1185f751 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185f753 je 0x1185f7ad */
  if (C.zf) goto L_1185f7ad;
  /* 1185f755 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1185f75b push edx */
  push32((uint32_t)(EDX));
  /* 1185f75c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f75f push eax */
  push32((uint32_t)(EAX));
  /* 1185f760 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f764 push ecx */
  push32((uint32_t)(ECX));
  /* 1185f765 call 0x118603a0 */
  push32(0x1185f76au); f_118603a0();
  /* 1185f76a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f76d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f770 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1185f772 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1185f775 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f778 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f77b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1185f77e:;
  /* 1185f77e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f782 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185f784 jne 0x1185f7a7 */
  if (!C.zf) goto L_1185f7a7;
  /* 1185f786 push 0x11880940 */
  push32((uint32_t)(0x11880940u));
  /* 1185f78b push 0 */
  push32((uint32_t)(0x0u));
  /* 1185f78d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1185f792 push 0x11880934 */
  push32((uint32_t)(0x11880934u));
  /* 1185f797 push 2 */
  push32((uint32_t)(0x2u));
  /* 1185f799 call 0x118577a0 */
  push32(0x1185f79eu); f_118577a0();
  /* 1185f79e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f7a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f7a4 jne 0x1185f7a7 */
  if (!C.zf) goto L_1185f7a7;
  /* 1185f7a6 int3  */
  x86_unimpl("int3 @ 0x1185f7a6");
L_1185f7a7:;
  /* 1185f7a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f7a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185f7ab jne 0x1185f77e */
  if (!C.zf) goto L_1185f77e;
L_1185f7ad:;
  /* 1185f7ad lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1185f7b3 push ecx */
  push32((uint32_t)(ECX));
  /* 1185f7b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1185f7b7 push edx */
  push32((uint32_t)(EDX));
  /* 1185f7b8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f7bc push eax */
  push32((uint32_t)(EAX));
  /* 1185f7bd call 0x118603a0 */
  push32(0x1185f7c2u); f_118603a0();
  /* 1185f7c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f7c5 jmp 0x11860282 */
  goto L_11860282;
L_1185f7ca:;
  /* 1185f7ca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1185f7d1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185f7d4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1185f7da mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1185f7e0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1185f7e6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1185f7ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1185f7ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1185f7f6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1185f800 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1185f807 jmp 0x11860282 */
  goto L_11860282;
L_1185f80c:;
  /* 1185f80c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f810 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1185f816 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1185f81c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f81f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1185f825 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f82c ja 0x1185f876 */
  if ((!C.cf&&!C.zf)) goto L_1185f876;
  /* 1185f82e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1185f834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f836 mov al, byte ptr [ecx + 0x118602cc] */
  AL = (r8((uint32_t)(ECX + 0x118602cc)));
  /* 1185f83c jmp dword ptr [eax*4 + 0x118602b4] */
  switch (EAX) {
    case 0: goto L_1185f858;
    case 1: goto L_1185f863;
    case 2: goto L_1185f84e;
    case 3: goto L_1185f843;
    case 4: goto L_1185f86e;
    case 5: goto L_1185f876;
    default: x86_unimpl("switch@0x1185f83c out of table"); return;
  }
L_1185f843:;
  /* 1185f843 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f846 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f849 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185f84c jmp 0x1185f876 */
  goto L_1185f876;
L_1185f84e:;
  /* 1185f84e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f851 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1185f853 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185f856 jmp 0x1185f876 */
  goto L_1185f876;
L_1185f858:;
  /* 1185f858 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f85b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1185f85e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185f861 jmp 0x1185f876 */
  goto L_1185f876;
L_1185f863:;
  /* 1185f863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f866 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1185f869 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185f86c jmp 0x1185f876 */
  goto L_1185f876;
L_1185f86e:;
  /* 1185f86e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f871 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1185f873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1185f876:;
  /* 1185f876 jmp 0x11860282 */
  goto L_11860282;
L_1185f87b:;
  /* 1185f87b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f87f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f882 jne 0x1185f8b7 */
  if (!C.zf) goto L_1185f8b7;
  /* 1185f884 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1185f887 push edx */
  push32((uint32_t)(EDX));
  /* 1185f888 call 0x118604b0 */
  push32(0x1185f88du); f_118604b0();
  /* 1185f88d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f890 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1185f896 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f89d jge 0x1185f8b5 */
  if ((C.sf==C.of)) goto L_1185f8b5;
  /* 1185f89f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f8a2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1185f8a4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185f8a7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1185f8ad neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185f8af mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1185f8b5:;
  /* 1185f8b5 jmp 0x1185f8ce */
  goto L_1185f8ce;
L_1185f8b7:;
  /* 1185f8b7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1185f8bd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185f8c0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f8c4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1185f8c8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1185f8ce:;
  /* 1185f8ce jmp 0x11860282 */
  goto L_11860282;
L_1185f8d3:;
  /* 1185f8d3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1185f8dd jmp 0x11860282 */
  goto L_11860282;
L_1185f8e2:;
  /* 1185f8e2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f8e6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f8e9 jne 0x1185f912 */
  if (!C.zf) goto L_1185f912;
  /* 1185f8eb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1185f8ee push eax */
  push32((uint32_t)(EAX));
  /* 1185f8ef call 0x118604b0 */
  push32(0x1185f8f4u); f_118604b0();
  /* 1185f8f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f8f7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1185f8fd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f904 jge 0x1185f910 */
  if ((C.sf==C.of)) goto L_1185f910;
  /* 1185f906 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1185f910:;
  /* 1185f910 jmp 0x1185f929 */
  goto L_1185f929;
L_1185f912:;
  /* 1185f912 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1185f918 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1185f91b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f91f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1185f923 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1185f929:;
  /* 1185f929 jmp 0x11860282 */
  goto L_11860282;
L_1185f92e:;
  /* 1185f92e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f932 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1185f938 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1185f93e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f941 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1185f947 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f94e ja 0x1185f9bc */
  if ((!C.cf&&!C.zf)) goto L_1185f9bc;
  /* 1185f950 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1185f956 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185f958 mov al, byte ptr [ecx + 0x118602f1] */
  AL = (r8((uint32_t)(ECX + 0x118602f1)));
  /* 1185f95e jmp dword ptr [eax*4 + 0x118602dd] */
  switch (EAX) {
    case 0: goto L_1185f970;
    case 1: goto L_1185f9a9;
    case 2: goto L_1185f965;
    case 3: goto L_1185f9b3;
    case 4: goto L_1185f9bc;
    default: x86_unimpl("switch@0x1185f95e out of table"); return;
  }
L_1185f965:;
  /* 1185f965 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f968 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1185f96b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185f96e jmp 0x1185f9bc */
  goto L_1185f9bc;
L_1185f970:;
  /* 1185f970 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f973 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1185f976 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f979 jne 0x1185f99b */
  if (!C.zf) goto L_1185f99b;
  /* 1185f97b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f97e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1185f982 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f985 jne 0x1185f99b */
  if (!C.zf) goto L_1185f99b;
  /* 1185f987 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1185f98a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185f98d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1185f990 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f993 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1185f996 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185f999 jmp 0x1185f9a7 */
  goto L_1185f9a7;
L_1185f99b:;
  /* 1185f99b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1185f9a2 jmp 0x1185f730 */
  goto L_1185f730;
L_1185f9a7:;
  /* 1185f9a7 jmp 0x1185f9bc */
  goto L_1185f9bc;
L_1185f9a9:;
  /* 1185f9a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f9ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1185f9ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185f9b1 jmp 0x1185f9bc */
  goto L_1185f9bc;
L_1185f9b3:;
  /* 1185f9b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f9b6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1185f9b9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1185f9bc:;
  /* 1185f9bc jmp 0x11860282 */
  goto L_11860282;
L_1185f9c1:;
  /* 1185f9c1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185f9c5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1185f9cb mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1185f9d1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185f9d4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1185f9da cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185f9e1 ja 0x118600a7 */
  if ((!C.cf&&!C.zf)) goto L_118600a7;
  /* 1185f9e7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1185f9ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185f9ef mov cl, byte ptr [edx + 0x1186035c] */
  CL = (r8((uint32_t)(EDX + 0x1186035c)));
  /* 1185f9f5 jmp dword ptr [ecx*4 + 0x11860320] */
  switch (ECX) {
    case 0: goto L_1185f9fc;
    case 1: goto L_1185fc90;
    case 2: goto L_1185fb20;
    case 3: goto L_1185fdc9;
    case 4: goto L_1185fa8b;
    case 5: goto L_1185fa11;
    case 6: goto L_1185fd9b;
    case 7: goto L_1185fca0;
    case 8: goto L_1185fc45;
    case 9: goto L_1185fe15;
    case 10: goto L_1185fdbf;
    case 11: goto L_1185fb36;
    case 12: goto L_1185fdb3;
    case 13: goto L_1185fdd5;
    case 14: goto L_118600a7;
    default: x86_unimpl("switch@0x1185f9f5 out of table"); return;
  }
L_1185f9fc:;
  /* 1185f9fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185f9ff and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fa04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fa06 jne 0x1185fa11 */
  if (!C.zf) goto L_1185fa11;
  /* 1185fa08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fa0b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1185fa0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1185fa11:;
  /* 1185fa11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fa14 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1185fa1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fa1c je 0x1185fa57 */
  if (C.zf) goto L_1185fa57;
  /* 1185fa1e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1185fa21 push eax */
  push32((uint32_t)(EAX));
  /* 1185fa22 call 0x118604f0 */
  push32(0x1185fa27u); f_118604f0();
  /* 1185fa27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fa2a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1185fa2e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1185fa32 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fa33 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1185fa39 push edx */
  push32((uint32_t)(EDX));
  /* 1185fa3a call 0x118615d0 */
  push32(0x1185fa3fu); f_118615d0();
  /* 1185fa3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fa42 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1185fa45 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fa49 jge 0x1185fa55 */
  if ((C.sf==C.of)) goto L_1185fa55;
  /* 1185fa4b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1185fa55:;
  /* 1185fa55 jmp 0x1185fa7d */
  goto L_1185fa7d;
L_1185fa57:;
  /* 1185fa57 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1185fa5a push eax */
  push32((uint32_t)(EAX));
  /* 1185fa5b call 0x118604b0 */
  push32(0x1185fa60u); f_118604b0();
  /* 1185fa60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fa63 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1185fa6a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1185fa70 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1185fa76 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1185fa7d:;
  /* 1185fa7d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1185fa83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1185fa86 jmp 0x118600a7 */
  goto L_118600a7;
L_1185fa8b:;
  /* 1185fa8b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1185fa8e push eax */
  push32((uint32_t)(EAX));
  /* 1185fa8f call 0x118604b0 */
  push32(0x1185fa94u); f_118604b0();
  /* 1185fa94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fa97 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1185fa9d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185faa4 je 0x1185fab2 */
  if (C.zf) goto L_1185fab2;
  /* 1185faa6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1185faac cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fab0 jne 0x1185facc */
  if (!C.zf) goto L_1185facc;
L_1185fab2:;
  /* 1185fab2 mov edx, dword ptr [0x11882fb0] */
  EDX = (r32((uint32_t)(0x11882fb0)));
  /* 1185fab8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1185fabb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fabe push eax */
  push32((uint32_t)(EAX));
  /* 1185fabf call 0x1185b510 */
  push32(0x1185fac4u); f_1185b510();
  /* 1185fac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fac7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1185faca jmp 0x1185fb1b */
  goto L_1185fb1b;
L_1185facc:;
  /* 1185facc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185facf and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1185fad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185fad7 je 0x1185fafc */
  if (C.zf) goto L_1185fafc;
  /* 1185fad9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1185fadf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1185fae2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1185fae5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1185faeb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1185faee shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1185faf0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185faf3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1185fafa jmp 0x1185fb1b */
  goto L_1185fb1b;
L_1185fafc:;
  /* 1185fafc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1185fb03 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1185fb09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1185fb0c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1185fb0f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1185fb15 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1185fb18 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1185fb1b:;
  /* 1185fb1b jmp 0x118600a7 */
  goto L_118600a7;
L_1185fb20:;
  /* 1185fb20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fb23 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1185fb29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185fb2b jne 0x1185fb36 */
  if (!C.zf) goto L_1185fb36;
  /* 1185fb2d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fb30 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1185fb33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185fb36:;
  /* 1185fb36 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fb3d jne 0x1185fb4b */
  if (!C.zf) goto L_1185fb4b;
  /* 1185fb3f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1185fb49 jmp 0x1185fb57 */
  goto L_1185fb57;
L_1185fb4b:;
  /* 1185fb4b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1185fb51 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1185fb57:;
  /* 1185fb57 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1185fb5d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1185fb63 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1185fb66 push edx */
  push32((uint32_t)(EDX));
  /* 1185fb67 call 0x118604b0 */
  push32(0x1185fb6cu); f_118604b0();
  /* 1185fb6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fb6f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1185fb72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fb75 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fb7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fb7c je 0x1185fbe6 */
  if (C.zf) goto L_1185fbe6;
  /* 1185fb7e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fb82 jne 0x1185fb8d */
  if (!C.zf) goto L_1185fb8d;
  /* 1185fb84 mov ecx, dword ptr [0x11882fb4] */
  ECX = (r32((uint32_t)(0x11882fb4)));
  /* 1185fb8a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1185fb8d:;
  /* 1185fb8d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1185fb94 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fb97 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1185fb9d:;
  /* 1185fb9d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1185fba3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1185fba9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185fbac mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1185fbb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fbb4 je 0x1185fbd6 */
  if (C.zf) goto L_1185fbd6;
  /* 1185fbb6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1185fbbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1185fbbe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1185fbc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fbc3 je 0x1185fbd6 */
  if (C.zf) goto L_1185fbd6;
  /* 1185fbc5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1185fbcb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fbce mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1185fbd4 jmp 0x1185fb9d */
  goto L_1185fb9d;
L_1185fbd6:;
  /* 1185fbd6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1185fbdc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185fbdf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1185fbe1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1185fbe4 jmp 0x1185fc40 */
  goto L_1185fc40;
L_1185fbe6:;
  /* 1185fbe6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fbea jne 0x1185fbf4 */
  if (!C.zf) goto L_1185fbf4;
  /* 1185fbec mov eax, dword ptr [0x11882fb0] */
  EAX = (r32((uint32_t)(0x11882fb0)));
  /* 1185fbf1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1185fbf4:;
  /* 1185fbf4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fbf7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1185fbfd:;
  /* 1185fbfd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1185fc03 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1185fc09 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185fc0c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1185fc12 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fc14 je 0x1185fc34 */
  if (C.zf) goto L_1185fc34;
  /* 1185fc16 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1185fc1c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1185fc1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fc21 je 0x1185fc34 */
  if (C.zf) goto L_1185fc34;
  /* 1185fc23 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1185fc29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fc2c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1185fc32 jmp 0x1185fbfd */
  goto L_1185fbfd;
L_1185fc34:;
  /* 1185fc34 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1185fc3a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185fc3d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1185fc40:;
  /* 1185fc40 jmp 0x118600a7 */
  goto L_118600a7;
L_1185fc45:;
  /* 1185fc45 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1185fc48 push edx */
  push32((uint32_t)(EDX));
  /* 1185fc49 call 0x118604b0 */
  push32(0x1185fc4eu); f_118604b0();
  /* 1185fc4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fc51 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1185fc57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fc5a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fc5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fc5f je 0x1185fc73 */
  if (C.zf) goto L_1185fc73;
  /* 1185fc61 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1185fc67 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1185fc6e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1185fc71 jmp 0x1185fc81 */
  goto L_1185fc81;
L_1185fc73:;
  /* 1185fc73 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1185fc79 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1185fc7f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1185fc81:;
  /* 1185fc81 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1185fc8b jmp 0x118600a7 */
  goto L_118600a7;
L_1185fc90:;
  /* 1185fc90 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1185fc97 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1185fc9a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1185fc9d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1185fca0:;
  /* 1185fca0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fca3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1185fca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1185fca8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1185fcae mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1185fcb1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fcb8 jge 0x1185fcc6 */
  if ((C.sf==C.of)) goto L_1185fcc6;
  /* 1185fcba mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1185fcc4 jmp 0x1185fce2 */
  goto L_1185fce2;
L_1185fcc6:;
  /* 1185fcc6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fccd jne 0x1185fce2 */
  if (!C.zf) goto L_1185fce2;
  /* 1185fccf movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185fcd3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fcd6 jne 0x1185fce2 */
  if (!C.zf) goto L_1185fce2;
  /* 1185fcd8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1185fce2:;
  /* 1185fce2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1185fce5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fce8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1185fceb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1185fcee sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185fcf1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1185fcf3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1185fcf6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1185fcfc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1185fd02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1185fd05 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fd06 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1185fd0c push edx */
  push32((uint32_t)(EDX));
  /* 1185fd0d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185fd11 push eax */
  push32((uint32_t)(EAX));
  /* 1185fd12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd15 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fd16 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1185fd1c push edx */
  push32((uint32_t)(EDX));
  /* 1185fd1d call dword ptr [0x118833a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118833a0))), 0x1185fd23u);
  /* 1185fd23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fd26 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fd29 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fd2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fd30 je 0x1185fd48 */
  if (C.zf) goto L_1185fd48;
  /* 1185fd32 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fd39 jne 0x1185fd48 */
  if (!C.zf) goto L_1185fd48;
  /* 1185fd3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd3e push ecx */
  push32((uint32_t)(ECX));
  /* 1185fd3f call dword ptr [0x118833ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x118833ac))), 0x1185fd45u);
  /* 1185fd45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1185fd48:;
  /* 1185fd48 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1185fd4c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fd4f jne 0x1185fd6a */
  if (!C.zf) goto L_1185fd6a;
  /* 1185fd51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fd54 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fd59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fd5b jne 0x1185fd6a */
  if (!C.zf) goto L_1185fd6a;
  /* 1185fd5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd60 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fd61 call dword ptr [0x118833a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118833a4))), 0x1185fd67u);
  /* 1185fd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1185fd6a:;
  /* 1185fd6a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1185fd70 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185fd73 jne 0x1185fd87 */
  if (!C.zf) goto L_1185fd87;
  /* 1185fd75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fd78 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1185fd7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185fd7e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd81 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fd84 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1185fd87:;
  /* 1185fd87 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1185fd8a push eax */
  push32((uint32_t)(EAX));
  /* 1185fd8b call 0x1185b510 */
  push32(0x1185fd90u); f_1185b510();
  /* 1185fd90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fd93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1185fd96 jmp 0x118600a7 */
  goto L_118600a7;
L_1185fd9b:;
  /* 1185fd9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fd9e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1185fda1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1185fda4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1185fdae jmp 0x1185fe35 */
  goto L_1185fe35;
L_1185fdb3:;
  /* 1185fdb3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1185fdbd jmp 0x1185fe35 */
  goto L_1185fe35;
L_1185fdbf:;
  /* 1185fdbf mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1185fdc9:;
  /* 1185fdc9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1185fdd3 jmp 0x1185fddf */
  goto L_1185fddf;
L_1185fdd5:;
  /* 1185fdd5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1185fddf:;
  /* 1185fddf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1185fde9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fdec and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1185fdf2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fdf4 je 0x1185fe13 */
  if (C.zf) goto L_1185fe13;
  /* 1185fdf6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1185fdfd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1185fe03 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fe06 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1185fe0c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1185fe13:;
  /* 1185fe13 jmp 0x1185fe35 */
  goto L_1185fe35;
L_1185fe15:;
  /* 1185fe15 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1185fe1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fe22 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1185fe28 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185fe2a je 0x1185fe35 */
  if (C.zf) goto L_1185fe35;
  /* 1185fe2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fe2f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1185fe32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185fe35:;
  /* 1185fe35 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fe38 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fe3d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fe3f je 0x1185fe5e */
  if (C.zf) goto L_1185fe5e;
  /* 1185fe41 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1185fe44 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fe45 call 0x118604d0 */
  push32(0x1185fe4au); f_118604d0();
  /* 1185fe4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fe4d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1185fe53 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1185fe59 jmp 0x1185feef */
  goto L_1185feef;
L_1185fe5e:;
  /* 1185fe5e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fe61 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1185fe64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fe66 je 0x1185feb0 */
  if (C.zf) goto L_1185feb0;
  /* 1185fe68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fe6b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1185fe6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185fe70 je 0x1185fe90 */
  if (C.zf) goto L_1185fe90;
  /* 1185fe72 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1185fe75 push ecx */
  push32((uint32_t)(ECX));
  /* 1185fe76 call 0x118604b0 */
  push32(0x1185fe7bu); f_118604b0();
  /* 1185fe7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fe7e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1185fe81 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1185fe82 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1185fe88 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1185fe8e jmp 0x1185feae */
  goto L_1185feae;
L_1185fe90:;
  /* 1185fe90 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1185fe93 push edx */
  push32((uint32_t)(EDX));
  /* 1185fe94 call 0x118604b0 */
  push32(0x1185fe99u); f_118604b0();
  /* 1185fe99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fe9c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1185fea1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1185fea2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1185fea8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1185feae:;
  /* 1185feae jmp 0x1185feef */
  goto L_1185feef;
L_1185feb0:;
  /* 1185feb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185feb3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1185feb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185feb8 je 0x1185fed5 */
  if (C.zf) goto L_1185fed5;
  /* 1185feba lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1185febd push ecx */
  push32((uint32_t)(ECX));
  /* 1185febe call 0x118604b0 */
  push32(0x1185fec3u); f_118604b0();
  /* 1185fec3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fec6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1185fec7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1185fecd mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1185fed3 jmp 0x1185feef */
  goto L_1185feef;
L_1185fed5:;
  /* 1185fed5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1185fed8 push edx */
  push32((uint32_t)(EDX));
  /* 1185fed9 call 0x118604b0 */
  push32(0x1185fedeu); f_118604b0();
  /* 1185fede add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1185fee3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1185fee9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1185feef:;
  /* 1185feef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185fef2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1185fef5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185fef7 je 0x1185ff37 */
  if (C.zf) goto L_1185ff37;
  /* 1185fef9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ff00 jg 0x1185ff37 */
  if ((!C.zf&&C.sf==C.of)) goto L_1185ff37;
  /* 1185ff02 jl 0x1185ff0d */
  if ((C.sf!=C.of)) goto L_1185ff0d;
  /* 1185ff04 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ff0b jae 0x1185ff37 */
  if (!C.cf) goto L_1185ff37;
L_1185ff0d:;
  /* 1185ff0d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1185ff13 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185ff15 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1185ff1b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185ff1e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1185ff20 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1185ff26 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1185ff2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ff2f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1185ff32 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1185ff35 jmp 0x1185ff4f */
  goto L_1185ff4f;
L_1185ff37:;
  /* 1185ff37 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1185ff3d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1185ff43 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1185ff49 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1185ff4f:;
  /* 1185ff4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ff52 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1185ff58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ff5a jne 0x1185ff77 */
  if (!C.zf) goto L_1185ff77;
  /* 1185ff5c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1185ff62 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1185ff68 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1185ff6b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1185ff71 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1185ff77:;
  /* 1185ff77 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1185ff7e jge 0x1185ff8c */
  if ((C.sf==C.of)) goto L_1185ff8c;
  /* 1185ff80 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1185ff8a jmp 0x1185ff95 */
  goto L_1185ff95;
L_1185ff8c:;
  /* 1185ff8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1185ff8f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1185ff92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1185ff95:;
  /* 1185ff95 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1185ff9b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1185ffa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1185ffa3 jne 0x1185ffac */
  if (!C.zf) goto L_1185ffac;
  /* 1185ffa5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1185ffac:;
  /* 1185ffac lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1185ffaf mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1185ffb2:;
  /* 1185ffb2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1185ffb8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1185ffbe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1185ffc1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1185ffc7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1185ffc9 jg 0x1185ffdf */
  if ((!C.zf&&C.sf==C.of)) goto L_1185ffdf;
  /* 1185ffcb mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1185ffd1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1185ffd7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1185ffd9 je 0x11860060 */
  if (C.zf) goto L_11860060;
L_1185ffdf:;
  /* 1185ffdf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1185ffe5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1185ffe6 push edx */
  push32((uint32_t)(EDX));
  /* 1185ffe7 push eax */
  push32((uint32_t)(EAX));
  /* 1185ffe8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1185ffee push edx */
  push32((uint32_t)(EDX));
  /* 1185ffef mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1185fff5 push eax */
  push32((uint32_t)(EAX));
  /* 1185fff6 call 0x1185f370 */
  push32(0x1185fffbu); f_1185f370();
  /* 1185fffb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1185fffe mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11860004 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1186000a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1186000b push edx */
  push32((uint32_t)(EDX));
  /* 1186000c push eax */
  push32((uint32_t)(EAX));
  /* 1186000d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11860013 push ecx */
  push32((uint32_t)(ECX));
  /* 11860014 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1186001a push edx */
  push32((uint32_t)(EDX));
  /* 1186001b call 0x1185f300 */
  push32(0x11860020u); f_1185f300();
  /* 11860020 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11860026 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1186002c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860033 jle 0x11860047 */
  if ((C.zf||C.sf!=C.of)) goto L_11860047;
  /* 11860035 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1186003b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860041 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11860047:;
  /* 11860047 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1186004a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11860050 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11860052 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860055 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860058 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1186005b jmp 0x1185ffb2 */
  goto L_1185ffb2;
L_11860060:;
  /* 11860060 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11860063 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860066 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11860069 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1186006c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186006f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11860072 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860075 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1186007a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186007c je 0x118600a7 */
  if (C.zf) goto L_118600a7;
  /* 1186007e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860081 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11860084 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860087 jne 0x1186008f */
  if (!C.zf) goto L_1186008f;
  /* 11860089 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186008d jne 0x118600a7 */
  if (!C.zf) goto L_118600a7;
L_1186008f:;
  /* 1186008f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860092 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860095 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11860098 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1186009b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1186009e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 118600a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118600a4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_118600a7:;
  /* 118600a7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118600ae jne 0x11860282 */
  if (!C.zf) goto L_11860282;
  /* 118600b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118600b7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 118600ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118600bc je 0x1186010d */
  if (C.zf) goto L_1186010d;
  /* 118600be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118600c1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 118600c7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118600c9 je 0x118600db */
  if (C.zf) goto L_118600db;
  /* 118600cb mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 118600d2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118600d9 jmp 0x1186010d */
  goto L_1186010d;
L_118600db:;
  /* 118600db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118600de and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 118600e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118600e3 je 0x118600f5 */
  if (C.zf) goto L_118600f5;
  /* 118600e5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 118600ec mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 118600f3 jmp 0x1186010d */
  goto L_1186010d;
L_118600f5:;
  /* 118600f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118600f8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 118600fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118600fd je 0x1186010d */
  if (C.zf) goto L_1186010d;
  /* 118600ff mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11860106 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1186010d:;
  /* 1186010d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11860113 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860116 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860119 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1186011f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860122 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11860125 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860127 jne 0x11860145 */
  if (!C.zf) goto L_11860145;
  /* 11860129 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1186012f push eax */
  push32((uint32_t)(EAX));
  /* 11860130 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860133 push ecx */
  push32((uint32_t)(ECX));
  /* 11860134 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1186013a push edx */
  push32((uint32_t)(EDX));
  /* 1186013b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1186013d call 0x11860420 */
  push32(0x11860142u); f_11860420();
  /* 11860142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11860145:;
  /* 11860145 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1186014b push eax */
  push32((uint32_t)(EAX));
  /* 1186014c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186014f push ecx */
  push32((uint32_t)(ECX));
  /* 11860150 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11860153 push edx */
  push32((uint32_t)(EDX));
  /* 11860154 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1186015a push eax */
  push32((uint32_t)(EAX));
  /* 1186015b call 0x11860460 */
  push32(0x11860160u); f_11860460();
  /* 11860160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860166 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11860169 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186016b je 0x11860193 */
  if (C.zf) goto L_11860193;
  /* 1186016d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860170 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11860173 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860175 jne 0x11860193 */
  if (!C.zf) goto L_11860193;
  /* 11860177 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1186017d push eax */
  push32((uint32_t)(EAX));
  /* 1186017e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860181 push ecx */
  push32((uint32_t)(ECX));
  /* 11860182 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11860188 push edx */
  push32((uint32_t)(EDX));
  /* 11860189 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1186018b call 0x11860420 */
  push32(0x11860190u); f_11860420();
  /* 11860190 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11860193:;
  /* 11860193 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860197 je 0x11860241 */
  if (C.zf) goto L_11860241;
  /* 1186019d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118601a1 jle 0x11860241 */
  if ((C.zf||C.sf!=C.of)) goto L_11860241;
  /* 118601a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 118601aa mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 118601b0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118601b3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_118601b9:;
  /* 118601b9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 118601bf mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 118601c5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118601c8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 118601ce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118601d0 je 0x1186023f */
  if (C.zf) goto L_1186023f;
  /* 118601d2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 118601d8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 118601db mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 118601e2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 118601e9 push eax */
  push32((uint32_t)(EAX));
  /* 118601ea lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 118601f0 push ecx */
  push32((uint32_t)(ECX));
  /* 118601f1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 118601f7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118601fa mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11860200 call 0x118615d0 */
  push32(0x11860205u); f_118615d0();
  /* 11860205 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860208 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1186020e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860215 jg 0x11860219 */
  if ((!C.zf&&C.sf==C.of)) goto L_11860219;
  /* 11860217 jmp 0x1186023f */
  goto L_1186023f;
L_11860219:;
  /* 11860219 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1186021f push eax */
  push32((uint32_t)(EAX));
  /* 11860220 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860223 push ecx */
  push32((uint32_t)(ECX));
  /* 11860224 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1186022a push edx */
  push32((uint32_t)(EDX));
  /* 1186022b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11860231 push eax */
  push32((uint32_t)(EAX));
  /* 11860232 call 0x11860460 */
  push32(0x11860237u); f_11860460();
  /* 11860237 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186023a jmp 0x118601b9 */
  goto L_118601b9;
L_1186023f:;
  /* 1186023f jmp 0x1186025c */
  goto L_1186025c;
L_11860241:;
  /* 11860241 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11860247 push ecx */
  push32((uint32_t)(ECX));
  /* 11860248 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186024b push edx */
  push32((uint32_t)(EDX));
  /* 1186024c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1186024f push eax */
  push32((uint32_t)(EAX));
  /* 11860250 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860253 push ecx */
  push32((uint32_t)(ECX));
  /* 11860254 call 0x11860460 */
  push32(0x11860259u); f_11860460();
  /* 11860259 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1186025c:;
  /* 1186025c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186025f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11860262 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860264 je 0x11860282 */
  if (C.zf) goto L_11860282;
  /* 11860266 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1186026c push eax */
  push32((uint32_t)(EAX));
  /* 1186026d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860270 push ecx */
  push32((uint32_t)(ECX));
  /* 11860271 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11860277 push edx */
  push32((uint32_t)(EDX));
  /* 11860278 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1186027a call 0x11860420 */
  push32(0x1186027fu); f_11860420();
  /* 1186027f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11860282:;
  /* 11860282 jmp 0x1185f694 */
  goto L_1185f694;
L_11860287:;
  /* 11860287 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1186028d pop edi */
  EDI = (pop32());
  /* 1186028e pop esi */
  ESI = (pop32());
  /* 1186028f pop ebx */
  EBX = (pop32());
  /* 11860290 mov esp, ebp */
  ESP = (EBP);
  /* 11860292 pop ebp */
  EBP = (pop32());
  /* 11860293 ret  */
  ESPCHK(0x1185f670u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x118603a0 (119 bytes, 44 insns) */
void f_118603a0(void) {
  FTRACE(0x118603a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118603a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118603a1 mov ebp, esp */
  EBP = (ESP);
  /* 118603a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118603a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603a7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 118603aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118603ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603b0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 118603b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603b6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118603ba jl 0x118603e2 */
  if ((C.sf!=C.of)) goto L_118603e2;
  /* 118603bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603bf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118603c1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 118603c4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 118603c6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 118603ca and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 118603d0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 118603d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603d6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 118603d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118603db mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 118603e0 jmp 0x118603f5 */
  goto L_118603f5;
L_118603e2:;
  /* 118603e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118603e5 push edx */
  push32((uint32_t)(EDX));
  /* 118603e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118603e9 push eax */
  push32((uint32_t)(EAX));
  /* 118603ea call 0x1185f3f0 */
  push32(0x118603efu); f_1185f3f0();
  /* 118603ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118603f2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118603f5:;
  /* 118603f5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118603f9 jne 0x11860406 */
  if (!C.zf) goto L_11860406;
  /* 118603fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118603fe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11860404 jmp 0x11860413 */
  goto L_11860413;
L_11860406:;
  /* 11860406 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860409 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1186040b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186040e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860411 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11860413:;
  /* 11860413 mov esp, ebp */
  ESP = (EBP);
  /* 11860415 pop ebp */
  EBP = (pop32());
  /* 11860416 ret  */
  ESPCHK(0x118603a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x11860420 (53 bytes, 23 insns) */
void f_11860420(void) {
  FTRACE(0x11860420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860420 push ebp */
  push32((uint32_t)(EBP));
  /* 11860421 mov ebp, esp */
  EBP = (ESP);
L_11860423:;
  /* 11860423 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860426 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860429 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186042c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1186042f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860431 jle 0x11860453 */
  if ((C.zf||C.sf!=C.of)) goto L_11860453;
  /* 11860433 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860436 push edx */
  push32((uint32_t)(EDX));
  /* 11860437 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186043a push eax */
  push32((uint32_t)(EAX));
  /* 1186043b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186043e push ecx */
  push32((uint32_t)(ECX));
  /* 1186043f call 0x118603a0 */
  push32(0x11860444u); f_118603a0();
  /* 11860444 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186044a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186044d jne 0x11860451 */
  if (!C.zf) goto L_11860451;
  /* 1186044f jmp 0x11860453 */
  goto L_11860453;
L_11860451:;
  /* 11860451 jmp 0x11860423 */
  goto L_11860423;
L_11860453:;
  /* 11860453 pop ebp */
  EBP = (pop32());
  /* 11860454 ret  */
  ESPCHK(0x11860420u, _esp0);
  ESP += 4; return;
}

/* FUN_10010460 @ 0x11860460 (74 bytes, 31 insns) */
void f_11860460(void) {
  FTRACE(0x11860460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860460 push ebp */
  push32((uint32_t)(EBP));
  /* 11860461 mov ebp, esp */
  EBP = (ESP);
  /* 11860463 push ecx */
  push32((uint32_t)(ECX));
L_11860464:;
  /* 11860464 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860467 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186046a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186046d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11860470 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860472 jle 0x118604a6 */
  if ((C.zf||C.sf!=C.of)) goto L_118604a6;
  /* 11860474 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860477 push edx */
  push32((uint32_t)(EDX));
  /* 11860478 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186047b push eax */
  push32((uint32_t)(EAX));
  /* 1186047c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186047f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11860482 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11860485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860488 push eax */
  push32((uint32_t)(EAX));
  /* 11860489 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186048c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186048f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11860492 call 0x118603a0 */
  push32(0x11860497u); f_118603a0();
  /* 11860497 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186049a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186049d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118604a0 jne 0x118604a4 */
  if (!C.zf) goto L_118604a4;
  /* 118604a2 jmp 0x118604a6 */
  goto L_118604a6;
L_118604a4:;
  /* 118604a4 jmp 0x11860464 */
  goto L_11860464;
L_118604a6:;
  /* 118604a6 mov esp, ebp */
  ESP = (EBP);
  /* 118604a8 pop ebp */
  EBP = (pop32());
  /* 118604a9 ret  */
  ESPCHK(0x11860460u, _esp0);
  ESP += 4; return;
}

/* FUN_100104b0 @ 0x118604b0 (26 bytes, 12 insns) */
void f_118604b0(void) {
  FTRACE(0x118604b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118604b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118604b1 mov ebp, esp */
  EBP = (ESP);
  /* 118604b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604b6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118604b8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118604bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604be mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118604c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604c3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118604c5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 118604c8 pop ebp */
  EBP = (pop32());
  /* 118604c9 ret  */
  ESPCHK(0x118604b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104d0 @ 0x118604d0 (31 bytes, 14 insns) */
void f_118604d0(void) {
  FTRACE(0x118604d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118604d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118604d1 mov ebp, esp */
  EBP = (ESP);
  /* 118604d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604d6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118604d8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118604db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 118604e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118604e5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118604e8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 118604ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 118604ed pop ebp */
  EBP = (pop32());
  /* 118604ee ret  */
  ESPCHK(0x118604d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100104f0 @ 0x118604f0 (27 bytes, 12 insns) */
void f_118604f0(void) {
  FTRACE(0x118604f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118604f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118604f1 mov ebp, esp */
  EBP = (ESP);
  /* 118604f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 118604f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118604fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118604fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11860500 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860503 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11860505 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11860509 pop ebp */
  EBP = (pop32());
  /* 1186050a ret  */
  ESPCHK(0x118604f0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11860510 (145 bytes, 42 insns) */
void f_11860510(void) {
  FTRACE(0x11860510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860510 push ebp */
  push32((uint32_t)(EBP));
  /* 11860511 mov ebp, esp */
  EBP = (ESP);
  /* 11860513 push ecx */
  push32((uint32_t)(ECX));
  /* 11860514 call 0x118605c0 */
  push32(0x11860519u); f_118605c0();
  /* 11860519 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186051c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1186051e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11860525 jmp 0x11860530 */
  goto L_11860530;
L_11860527:;
  /* 11860527 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186052a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186052d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11860530:;
  /* 11860530 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860534 jae 0x1186055a */
  if (!C.cf) goto L_1186055a;
  /* 11860536 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186053c cmp ecx, dword ptr [eax*8 + 0x11882fb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11882fb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860543 jne 0x11860558 */
  if (!C.zf) goto L_11860558;
  /* 11860545 call 0x118605b0 */
  push32(0x1186054au); f_118605b0();
  /* 1186054a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186054d mov ecx, dword ptr [edx*8 + 0x11882fbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11882fbc)));
  /* 11860554 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11860556 jmp 0x1186059d */
  goto L_1186059d;
L_11860558:;
  /* 11860558 jmp 0x11860527 */
  goto L_11860527;
L_1186055a:;
  /* 1186055a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186055e jb 0x11860573 */
  if (C.cf) goto L_11860573;
  /* 11860560 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860564 ja 0x11860573 */
  if ((!C.cf&&!C.zf)) goto L_11860573;
  /* 11860566 call 0x118605b0 */
  push32(0x1186056bu); f_118605b0();
  /* 1186056b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11860571 jmp 0x1186059d */
  goto L_1186059d;
L_11860573:;
  /* 11860573 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186057a jb 0x11860592 */
  if (C.cf) goto L_11860592;
  /* 1186057c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860583 ja 0x11860592 */
  if ((!C.cf&&!C.zf)) goto L_11860592;
  /* 11860585 call 0x118605b0 */
  push32(0x1186058au); f_118605b0();
  /* 1186058a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11860590 jmp 0x1186059d */
  goto L_1186059d;
L_11860592:;
  /* 11860592 call 0x118605b0 */
  push32(0x11860597u); f_118605b0();
  /* 11860597 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1186059d:;
  /* 1186059d mov esp, ebp */
  ESP = (EBP);
  /* 1186059f pop ebp */
  EBP = (pop32());
  /* 118605a0 ret  */
  ESPCHK(0x11860510u, _esp0);
  ESP += 4; return;
}

/* FUN_100105b0 @ 0x118605b0 (13 bytes, 6 insns) */
void f_118605b0(void) {
  FTRACE(0x118605b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118605b0 push ebp */
  push32((uint32_t)(EBP));
  /* 118605b1 mov ebp, esp */
  EBP = (ESP);
  /* 118605b3 call 0x11858120 */
  push32(0x118605b8u); f_11858120();
  /* 118605b8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118605bb pop ebp */
  EBP = (pop32());
  /* 118605bc ret  */
  ESPCHK(0x118605b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x118605c0 (13 bytes, 6 insns) */
void f_118605c0(void) {
  FTRACE(0x118605c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118605c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118605c1 mov ebp, esp */
  EBP = (ESP);
  /* 118605c3 call 0x11858120 */
  push32(0x118605c8u); f_11858120();
  /* 118605c8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118605cb pop ebp */
  EBP = (pop32());
  /* 118605cc ret  */
  ESPCHK(0x118605c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100105d0 @ 0x118605d0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_118605d0(void) {
  FTRACE(0x118605d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118605d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118605d1 mov ebp, esp */
  EBP = (ESP);
  /* 118605d3 push edi */
  push32((uint32_t)(EDI));
  /* 118605d4 push esi */
  push32((uint32_t)(ESI));
  /* 118605d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 118605d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118605db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 118605de mov eax, ecx */
  EAX = (ECX);
  /* 118605e0 mov edx, ecx */
  EDX = (ECX);
  /* 118605e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118605e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118605e6 jbe 0x118605f0 */
  if ((C.cf||C.zf)) goto L_118605f0;
  /* 118605e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118605ea jb 0x11860768 */
  if (C.cf) goto L_11860768;
L_118605f0:;
  /* 118605f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 118605f6 jne 0x1186060c */
  if (!C.zf) goto L_1186060c;
  /* 118605f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118605fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 118605fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860601 jb 0x1186062c */
  if (C.cf) goto L_1186062c;
  /* 11860603 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860605 jmp dword ptr [edx*4 + 0x11860718] */
  switch (EDX) {
    case 0: goto L_11860728;
    case 1: goto L_11860730;
    case 2: goto L_1186073c;
    case 3: goto L_11860750;
    default: x86_unimpl("switch@0x11860605 out of table"); return;
  }
L_1186060c:;
  /* 1186060c mov eax, edi */
  EAX = (EDI);
  /* 1186060e mov edx, 3 */
  EDX = (0x3u);
  /* 11860613 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860616 jb 0x11860624 */
  if (C.cf) goto L_11860624;
  /* 11860618 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1186061b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186061d jmp dword ptr [eax*4 + 0x11860630] */
  switch (EAX) {
    case 1: goto L_11860640;
    case 2: goto L_1186066c;
    case 3: goto L_11860690;
    default: x86_unimpl("switch@0x1186061d out of table"); return;
  }
L_11860624:;
  /* 11860624 jmp dword ptr [ecx*4 + 0x11860728] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11860728)))); return;
  /* 1186062b nop  */
  /* nop */
L_1186062c:;
  /* 1186062c jmp dword ptr [ecx*4 + 0x118606ac] */
  switch (ECX) {
    case 0: goto L_1186070f;
    case 1: goto L_118606fc;
    case 2: goto L_118606f4;
    case 3: goto L_118606ec;
    case 4: goto L_118606e4;
    case 5: goto L_118606dc;
    case 6: goto L_118606d4;
    case 7: goto L_118606cc;
    default: x86_unimpl("switch@0x1186062c out of table"); return;
  }
  /* 11860633 nop  */
  /* nop */
L_11860640:;
  /* 11860640 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11860642 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11860644 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860646 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11860649 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1186064c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1186064f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11860652 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11860655 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11860658 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1186065b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186065e jb 0x1186062c */
  if (C.cf) goto L_1186062c;
  /* 11860660 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860662 jmp dword ptr [edx*4 + 0x11860718] */
  switch (EDX) {
    case 0: goto L_11860728;
    case 1: goto L_11860730;
    case 2: goto L_1186073c;
    case 3: goto L_11860750;
    default: x86_unimpl("switch@0x11860662 out of table"); return;
  }
  /* 11860669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1186066c:;
  /* 1186066c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1186066e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11860670 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860672 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11860675 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11860678 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1186067b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1186067e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11860681 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860684 jb 0x1186062c */
  if (C.cf) goto L_1186062c;
  /* 11860686 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860688 jmp dword ptr [edx*4 + 0x11860718] */
  switch (EDX) {
    case 0: goto L_11860728;
    case 1: goto L_11860730;
    case 2: goto L_1186073c;
    case 3: goto L_11860750;
    default: x86_unimpl("switch@0x11860688 out of table"); return;
  }
  /* 1186068f nop  */
  /* nop */
L_11860690:;
  /* 11860690 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11860692 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11860694 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860696 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11860697 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1186069a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1186069b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186069e jb 0x1186062c */
  if (C.cf) goto L_1186062c;
  /* 118606a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118606a2 jmp dword ptr [edx*4 + 0x11860718] */
  switch (EDX) {
    case 0: goto L_11860728;
    case 1: goto L_11860730;
    case 2: goto L_1186073c;
    case 3: goto L_11860750;
    default: x86_unimpl("switch@0x118606a2 out of table"); return;
  }
  /* 118606a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118606cc:;
  /* 118606cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 118606d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_118606d4:;
  /* 118606d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 118606d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_118606dc:;
  /* 118606dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 118606e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_118606e4:;
  /* 118606e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 118606e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_118606ec:;
  /* 118606ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 118606f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_118606f4:;
  /* 118606f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 118606f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_118606fc:;
  /* 118606fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11860700 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11860704 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1186070b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1186070d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1186070f:;
  /* 1186070f jmp dword ptr [edx*4 + 0x11860718] */
  switch (EDX) {
    case 0: goto L_11860728;
    case 1: goto L_11860730;
    case 2: goto L_1186073c;
    case 3: goto L_11860750;
    default: x86_unimpl("switch@0x1186070f out of table"); return;
  }
  /* 11860716 mov edi, edi */
  EDI = (EDI);
L_11860728:;
  /* 11860728 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186072b pop esi */
  ESI = (pop32());
  /* 1186072c pop edi */
  EDI = (pop32());
  /* 1186072d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1186072e ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 1186072f nop  */
  /* nop */
L_11860730:;
  /* 11860730 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11860732 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860737 pop esi */
  ESI = (pop32());
  /* 11860738 pop edi */
  EDI = (pop32());
  /* 11860739 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1186073a ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 1186073b nop  */
  /* nop */
L_1186073c:;
  /* 1186073c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1186073e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860740 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11860743 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11860746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860749 pop esi */
  ESI = (pop32());
  /* 1186074a pop edi */
  EDI = (pop32());
  /* 1186074b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1186074c ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 1186074d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11860750:;
  /* 11860750 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11860752 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11860754 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11860757 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1186075a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1186075d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11860760 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860763 pop esi */
  ESI = (pop32());
  /* 11860764 pop edi */
  EDI = (pop32());
  /* 11860765 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11860766 ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 11860767 nop  */
  /* nop */
L_11860768:;
  /* 11860768 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1186076c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11860770 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11860776 jne 0x1186079c */
  if (!C.zf) goto L_1186079c;
  /* 11860778 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1186077b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1186077e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860781 jb 0x11860790 */
  if (C.cf) goto L_11860790;
  /* 11860783 std  */
  C.df=1;
  /* 11860784 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860786 cld  */
  C.df=0;
  /* 11860787 jmp dword ptr [edx*4 + 0x118608b0] */
  switch (EDX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x11860787 out of table"); return;
  }
  /* 1186078e mov edi, edi */
  EDI = (EDI);
L_11860790:;
  /* 11860790 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11860792 jmp dword ptr [ecx*4 + 0x11860860] */
  switch (ECX) {
    case 0: goto L_118608a7;
    default: x86_unimpl("switch@0x11860792 out of table"); return;
  }
  /* 11860799 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1186079c:;
  /* 1186079c mov eax, edi */
  EAX = (EDI);
  /* 1186079e mov edx, 3 */
  EDX = (0x3u);
  /* 118607a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118607a6 jb 0x118607b4 */
  if (C.cf) goto L_118607b4;
  /* 118607a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 118607ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118607ad jmp dword ptr [eax*4 + 0x118607b8] */
  switch (EAX) {
    case 1: goto L_118607c8;
    case 2: goto L_118607e8;
    case 3: goto L_11860810;
    default: x86_unimpl("switch@0x118607ad out of table"); return;
  }
L_118607b4:;
  /* 118607b4 jmp dword ptr [ecx*4 + 0x118608b0] */
  switch (ECX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x118607b4 out of table"); return;
  }
  /* 118607bb nop  */
  /* nop */
L_118607c8:;
  /* 118607c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118607cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118607cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118607d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 118607d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118607d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 118607d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118607d8 jb 0x11860790 */
  if (C.cf) goto L_11860790;
  /* 118607da std  */
  C.df=1;
  /* 118607db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 118607dd cld  */
  C.df=0;
  /* 118607de jmp dword ptr [edx*4 + 0x118608b0] */
  switch (EDX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x118607de out of table"); return;
  }
  /* 118607e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118607e8:;
  /* 118607e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118607eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 118607ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118607f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118607f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 118607f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118607f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118607fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 118607ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860802 jb 0x11860790 */
  if (C.cf) goto L_11860790;
  /* 11860804 std  */
  C.df=1;
  /* 11860805 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860807 cld  */
  C.df=0;
  /* 11860808 jmp dword ptr [edx*4 + 0x118608b0] */
  switch (EDX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x11860808 out of table"); return;
  }
  /* 1186080f nop  */
  /* nop */
L_11860810:;
  /* 11860810 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11860813 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11860815 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11860818 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1186081b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1186081e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11860821 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11860824 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11860827 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186082a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186082d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860830 jb 0x11860790 */
  if (C.cf) goto L_11860790;
  /* 11860836 std  */
  C.df=1;
  /* 11860837 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11860839 cld  */
  C.df=0;
  /* 1186083a jmp dword ptr [edx*4 + 0x118608b0] */
  switch (EDX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x1186083a out of table"); return;
  }
  /* 11860841 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11860844 or byte ptr fs:[esi - 0x79f793ef], al */
  { uint32_t _r=(r8((uint32_t)(ESI + -0x79f793ef)))|(AL); w8((uint32_t)(ESI + -0x79f793ef), (_r)); fl_logic(_r,8); }
  /* 1186084b adc dword ptr [eax + ecx - 0x7a], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*1 + -0x7a))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*1 + -0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 1186084f adc dword ptr [eax + ecx - 0x7a], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*1 + -0x7a))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*1 + -0x7a), (_r)); fl_add(_a,_b,_r,32); }
  /* 11860853 adc dword ptr [eax + ecx + 0x88c1186], eax */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*1 + 0x88c1186))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + ECX*1 + 0x88c1186), (_r)); fl_add(_a,_b,_r,32); }
  /* 1186085a xchg byte ptr [ecx], dl */
  { uint32_t _t=(r8((uint32_t)(ECX))); w8((uint32_t)(ECX), (DL)); DL = (_t); }
  /* 1186085c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1186085e xchg byte ptr [ecx], dl */
  { uint32_t _t=(r8((uint32_t)(ECX))); w8((uint32_t)(ECX), (DL)); DL = (_t); }
  /* 11860864 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11860868 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1186086c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11860870 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11860874 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11860878 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1186087c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11860880 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11860884 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11860888 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1186088c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11860890 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11860894 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11860898 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1186089c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 118608a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 118608a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_118608a7:;
  /* 118608a7 jmp dword ptr [edx*4 + 0x118608b0] */
  switch (EDX) {
    case 0: goto L_118608c0;
    case 1: goto L_118608c8;
    case 2: goto L_118608d8;
    case 3: goto L_118608ec;
    default: x86_unimpl("switch@0x118608a7 out of table"); return;
  }
  /* 118608ae mov edi, edi */
  EDI = (EDI);
L_118608c0:;
  /* 118608c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118608c3 pop esi */
  ESI = (pop32());
  /* 118608c4 pop edi */
  EDI = (pop32());
  /* 118608c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118608c6 ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 118608c7 nop  */
  /* nop */
L_118608c8:;
  /* 118608c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118608cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118608ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118608d1 pop esi */
  ESI = (pop32());
  /* 118608d2 pop edi */
  EDI = (pop32());
  /* 118608d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118608d4 ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 118608d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_118608d8:;
  /* 118608d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118608db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118608de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118608e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118608e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118608e7 pop esi */
  ESI = (pop32());
  /* 118608e8 pop edi */
  EDI = (pop32());
  /* 118608e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118608ea ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
  /* 118608eb nop  */
  /* nop */
L_118608ec:;
  /* 118608ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 118608ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 118608f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 118608f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 118608f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 118608fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 118608fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860901 pop esi */
  ESI = (pop32());
  /* 11860902 pop edi */
  EDI = (pop32());
  /* 11860903 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11860904 ret  */
  ESPCHK(0x118605d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010910 @ 0x11860910 (421 bytes, 148 insns) */
void f_11860910(void) {
  FTRACE(0x11860910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860910 push ebp */
  push32((uint32_t)(EBP));
  /* 11860911 mov ebp, esp */
  EBP = (ESP);
  /* 11860913 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11860915 push 0x11880958 */
  push32((uint32_t)(0x11880958u));
  /* 1186091a push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 1186091f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11860925 push eax */
  push32((uint32_t)(EAX));
  /* 11860926 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1186092d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860930 push ebx */
  push32((uint32_t)(EBX));
  /* 11860931 push esi */
  push32((uint32_t)(ESI));
  /* 11860932 push edi */
  push32((uint32_t)(EDI));
  /* 11860933 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11860936 cmp dword ptr [0x11884a74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186093d jne 0x1186098e */
  if (!C.zf) goto L_1186098e;
  /* 1186093f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11860942 push eax */
  push32((uint32_t)(EAX));
  /* 11860943 push 1 */
  push32((uint32_t)(0x1u));
  /* 11860945 push 0x11880954 */
  push32((uint32_t)(0x11880954u));
  /* 1186094a push 1 */
  push32((uint32_t)(0x1u));
  /* 1186094c call dword ptr [0x11887330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887330))), 0x11860952u);
  /* 11860952 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860954 je 0x11860962 */
  if (C.zf) goto L_11860962;
  /* 11860956 mov dword ptr [0x11884a74], 1 */
  w32((uint32_t)(0x11884a74), (0x1u));
  /* 11860960 jmp 0x1186098e */
  goto L_1186098e;
L_11860962:;
  /* 11860962 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11860965 push ecx */
  push32((uint32_t)(ECX));
  /* 11860966 push 1 */
  push32((uint32_t)(0x1u));
  /* 11860968 push 0x11880950 */
  push32((uint32_t)(0x11880950u));
  /* 1186096d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186096f push 0 */
  push32((uint32_t)(0x0u));
  /* 11860971 call dword ptr [0x11887340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887340))), 0x11860977u);
  /* 11860977 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860979 je 0x11860987 */
  if (C.zf) goto L_11860987;
  /* 1186097b mov dword ptr [0x11884a74], 2 */
  w32((uint32_t)(0x11884a74), (0x2u));
  /* 11860985 jmp 0x1186098e */
  goto L_1186098e;
L_11860987:;
  /* 11860987 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860989 jmp 0x11860ab8 */
  goto L_11860ab8;
L_1186098e:;
  /* 1186098e cmp dword ptr [0x11884a74], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884a74))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860995 jne 0x118609c5 */
  if (!C.zf) goto L_118609c5;
  /* 11860997 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186099b jne 0x118609a6 */
  if (!C.zf) goto L_118609a6;
  /* 1186099d mov edx, dword ptr [0x11884a80] */
  EDX = (r32((uint32_t)(0x11884a80)));
  /* 118609a3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_118609a6:;
  /* 118609a6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 118609a9 push eax */
  push32((uint32_t)(EAX));
  /* 118609aa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118609ad push ecx */
  push32((uint32_t)(ECX));
  /* 118609ae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118609b1 push edx */
  push32((uint32_t)(EDX));
  /* 118609b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118609b5 push eax */
  push32((uint32_t)(EAX));
  /* 118609b6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 118609b9 push ecx */
  push32((uint32_t)(ECX));
  /* 118609ba call dword ptr [0x11887340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887340))), 0x118609c0u);
  /* 118609c0 jmp 0x11860ab8 */
  goto L_11860ab8;
L_118609c5:;
  /* 118609c5 cmp dword ptr [0x11884a74], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884a74))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118609cc jne 0x11860ab6 */
  if (!C.zf) goto L_11860ab6;
  /* 118609d2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118609d6 jne 0x118609e1 */
  if (!C.zf) goto L_118609e1;
  /* 118609d8 mov edx, dword ptr [0x11884a90] */
  EDX = (r32((uint32_t)(0x11884a90)));
  /* 118609de mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_118609e1:;
  /* 118609e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118609e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 118609e5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118609e8 push eax */
  push32((uint32_t)(EAX));
  /* 118609e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118609ec push ecx */
  push32((uint32_t)(ECX));
  /* 118609ed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 118609f0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 118609f2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118609f4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 118609f7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118609fa push edx */
  push32((uint32_t)(EDX));
  /* 118609fb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 118609fe push eax */
  push32((uint32_t)(EAX));
  /* 118609ff call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11860a05u);
  /* 11860a05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11860a08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860a0c jne 0x11860a15 */
  if (!C.zf) goto L_11860a15;
  /* 11860a0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860a10 jmp 0x11860ab8 */
  goto L_11860ab8;
L_11860a15:;
  /* 11860a15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11860a1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860a1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11860a21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860a24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11860a26 call 0x1185b880 */
  push32(0x11860a2bu); f_1185b880();
  /* 11860a2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11860a2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11860a31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11860a34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11860a37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860a3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11860a3c push edx */
  push32((uint32_t)(EDX));
  /* 11860a3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11860a3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860a42 push eax */
  push32((uint32_t)(EAX));
  /* 11860a43 call 0x1185c450 */
  push32(0x11860a48u); f_1185c450();
  /* 11860a48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860a4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11860a52 jmp 0x11860a6b */
  goto L_11860a6b;
  /* 11860a54 mov eax, 1 */
  EAX = (0x1u);
  /* 11860a59 ret  */
  ESPCHK(0x11860910u, _esp0);
  ESP += 4; return;
  /* 11860a5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11860a5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11860a64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11860a6b:;
  /* 11860a6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860a6f jne 0x11860a75 */
  if (!C.zf) goto L_11860a75;
  /* 11860a71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860a73 jmp 0x11860ab8 */
  goto L_11860ab8;
L_11860a75:;
  /* 11860a75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860a78 push ecx */
  push32((uint32_t)(ECX));
  /* 11860a79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860a7c push edx */
  push32((uint32_t)(EDX));
  /* 11860a7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860a80 push eax */
  push32((uint32_t)(EAX));
  /* 11860a81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860a84 push ecx */
  push32((uint32_t)(ECX));
  /* 11860a85 push 1 */
  push32((uint32_t)(0x1u));
  /* 11860a87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11860a8a push edx */
  push32((uint32_t)(EDX));
  /* 11860a8b call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11860a91u);
  /* 11860a91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11860a94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860a98 jne 0x11860a9e */
  if (!C.zf) goto L_11860a9e;
  /* 11860a9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860a9c jmp 0x11860ab8 */
  goto L_11860ab8;
L_11860a9e:;
  /* 11860a9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860aa1 push eax */
  push32((uint32_t)(EAX));
  /* 11860aa2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11860aa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11860aa6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860aa9 push edx */
  push32((uint32_t)(EDX));
  /* 11860aaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860aad push eax */
  push32((uint32_t)(EAX));
  /* 11860aae call dword ptr [0x11887330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887330))), 0x11860ab4u);
  /* 11860ab4 jmp 0x11860ab8 */
  goto L_11860ab8;
L_11860ab6:;
  /* 11860ab6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11860ab8:;
  /* 11860ab8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11860abb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11860abe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11860ac5 pop edi */
  EDI = (pop32());
  /* 11860ac6 pop esi */
  ESI = (pop32());
  /* 11860ac7 pop ebx */
  EBX = (pop32());
  /* 11860ac8 mov esp, ebp */
  ESP = (EBP);
  /* 11860aca pop ebp */
  EBP = (pop32());
  /* 11860acb ret  */
  ESPCHK(0x11860910u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ad0 @ 0x11860ad0 (727 bytes, 263 insns) */
void f_11860ad0(void) {
  FTRACE(0x11860ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11860ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11860ad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11860ad5 push 0x11880968 */
  push32((uint32_t)(0x11880968u));
  /* 11860ada push 0x118617e8 */
  push32((uint32_t)(0x118617e8u));
  /* 11860adf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11860ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11860ae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11860aed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860af0 push ebx */
  push32((uint32_t)(EBX));
  /* 11860af1 push esi */
  push32((uint32_t)(ESI));
  /* 11860af2 push edi */
  push32((uint32_t)(EDI));
  /* 11860af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11860af6 cmp dword ptr [0x11884a98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860afd jne 0x11860b56 */
  if (!C.zf) goto L_11860b56;
  /* 11860aff push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11860b05 push 0x11880954 */
  push32((uint32_t)(0x11880954u));
  /* 11860b0a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11860b0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b11 call dword ptr [0x11887334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887334))), 0x11860b17u);
  /* 11860b17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860b19 je 0x11860b27 */
  if (C.zf) goto L_11860b27;
  /* 11860b1b mov dword ptr [0x11884a98], 1 */
  w32((uint32_t)(0x11884a98), (0x1u));
  /* 11860b25 jmp 0x11860b56 */
  goto L_11860b56;
L_11860b27:;
  /* 11860b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b29 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 11860b2d push 0x11880950 */
  push32((uint32_t)(0x11880950u));
  /* 11860b32 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11860b37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860b39 call dword ptr [0x1188732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188732c))), 0x11860b3fu);
  /* 11860b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860b41 je 0x11860b4f */
  if (C.zf) goto L_11860b4f;
  /* 11860b43 mov dword ptr [0x11884a98], 2 */
  w32((uint32_t)(0x11884a98), (0x2u));
  /* 11860b4d jmp 0x11860b56 */
  goto L_11860b56;
L_11860b4f:;
  /* 11860b4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860b51 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860b56:;
  /* 11860b56 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860b5a jle 0x11860b6f */
  if ((C.zf||C.sf!=C.of)) goto L_11860b6f;
  /* 11860b5c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860b5f push eax */
  push32((uint32_t)(EAX));
  /* 11860b60 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11860b64 call 0x11860de0 */
  push32(0x11860b69u); f_11860de0();
  /* 11860b69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860b6c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11860b6f:;
  /* 11860b6f cmp dword ptr [0x11884a98], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11884a98))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860b76 jne 0x11860b9b */
  if (!C.zf) goto L_11860b9b;
  /* 11860b78 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11860b7b push edx */
  push32((uint32_t)(EDX));
  /* 11860b7c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11860b7f push eax */
  push32((uint32_t)(EAX));
  /* 11860b80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860b83 push ecx */
  push32((uint32_t)(ECX));
  /* 11860b84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860b87 push edx */
  push32((uint32_t)(EDX));
  /* 11860b88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860b8b push eax */
  push32((uint32_t)(EAX));
  /* 11860b8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860b8f push ecx */
  push32((uint32_t)(ECX));
  /* 11860b90 call dword ptr [0x1188732c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188732c))), 0x11860b96u);
  /* 11860b96 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860b9b:;
  /* 11860b9b cmp dword ptr [0x11884a98], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884a98))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860ba2 jne 0x11860dbf */
  if (!C.zf) goto L_11860dbf;
  /* 11860ba8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860bac jne 0x11860bb7 */
  if (!C.zf) goto L_11860bb7;
  /* 11860bae mov edx, dword ptr [0x11884a90] */
  EDX = (r32((uint32_t)(0x11884a90)));
  /* 11860bb4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11860bb7:;
  /* 11860bb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860bb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860bbb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860bbe push eax */
  push32((uint32_t)(EAX));
  /* 11860bbf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860bc2 push ecx */
  push32((uint32_t)(ECX));
  /* 11860bc3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11860bc6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11860bc8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860bca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11860bcd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11860bd1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11860bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11860bd5 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11860bdbu);
  /* 11860bdb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11860bde cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860be2 jne 0x11860beb */
  if (!C.zf) goto L_11860beb;
  /* 11860be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860be6 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860beb:;
  /* 11860beb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11860bf2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11860bf5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11860bf7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860bfa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11860bfc call 0x1185b880 */
  push32(0x11860c01u); f_1185b880();
  /* 11860c01 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11860c04 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11860c07 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11860c0a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11860c0d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11860c14 jmp 0x11860c2d */
  goto L_11860c2d;
  /* 11860c16 mov eax, 1 */
  EAX = (0x1u);
  /* 11860c1b ret  */
  ESPCHK(0x11860ad0u, _esp0);
  ESP += 4; return;
  /* 11860c1c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11860c1f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11860c26 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11860c2d:;
  /* 11860c2d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860c31 jne 0x11860c3a */
  if (!C.zf) goto L_11860c3a;
  /* 11860c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860c35 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860c3a:;
  /* 11860c3a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11860c3d push edx */
  push32((uint32_t)(EDX));
  /* 11860c3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860c41 push eax */
  push32((uint32_t)(EAX));
  /* 11860c42 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11860c45 push ecx */
  push32((uint32_t)(ECX));
  /* 11860c46 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860c49 push edx */
  push32((uint32_t)(EDX));
  /* 11860c4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11860c4c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11860c4f push eax */
  push32((uint32_t)(EAX));
  /* 11860c50 call dword ptr [0x11887338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887338))), 0x11860c56u);
  /* 11860c56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860c58 jne 0x11860c61 */
  if (!C.zf) goto L_11860c61;
  /* 11860c5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860c5c jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860c61:;
  /* 11860c61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860c63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860c65 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11860c68 push ecx */
  push32((uint32_t)(ECX));
  /* 11860c69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860c6c push edx */
  push32((uint32_t)(EDX));
  /* 11860c6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860c70 push eax */
  push32((uint32_t)(EAX));
  /* 11860c71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860c74 push ecx */
  push32((uint32_t)(ECX));
  /* 11860c75 call dword ptr [0x11887334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887334))), 0x11860c7bu);
  /* 11860c7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11860c7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860c82 jne 0x11860c8b */
  if (!C.zf) goto L_11860c8b;
  /* 11860c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860c86 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860c8b:;
  /* 11860c8b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860c8e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11860c94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860c96 je 0x11860cdb */
  if (C.zf) goto L_11860cdb;
  /* 11860c98 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860c9c je 0x11860cd6 */
  if (C.zf) goto L_11860cd6;
  /* 11860c9e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11860ca1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860ca4 jle 0x11860cad */
  if ((C.zf||C.sf!=C.of)) goto L_11860cad;
  /* 11860ca6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860ca8 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860cad:;
  /* 11860cad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11860cb0 push ecx */
  push32((uint32_t)(ECX));
  /* 11860cb1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11860cb4 push edx */
  push32((uint32_t)(EDX));
  /* 11860cb5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11860cb8 push eax */
  push32((uint32_t)(EAX));
  /* 11860cb9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11860cbd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860cc0 push edx */
  push32((uint32_t)(EDX));
  /* 11860cc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860cc4 push eax */
  push32((uint32_t)(EAX));
  /* 11860cc5 call dword ptr [0x11887334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887334))), 0x11860ccbu);
  /* 11860ccb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860ccd jne 0x11860cd6 */
  if (!C.zf) goto L_11860cd6;
  /* 11860ccf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860cd1 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860cd6:;
  /* 11860cd6 jmp 0x11860dba */
  goto L_11860dba;
L_11860cdb:;
  /* 11860cdb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11860cde mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11860ce1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11860ce8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11860ceb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11860ced add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860cf0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11860cf2 call 0x1185b880 */
  push32(0x11860cf7u); f_1185b880();
  /* 11860cf7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11860cfa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11860cfd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11860d00 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11860d03 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11860d0a jmp 0x11860d23 */
  goto L_11860d23;
  /* 11860d0c mov eax, 1 */
  EAX = (0x1u);
  /* 11860d11 ret  */
  ESPCHK(0x11860ad0u, _esp0);
  ESP += 4; return;
  /* 11860d12 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11860d15 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11860d1c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11860d23:;
  /* 11860d23 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860d27 jne 0x11860d30 */
  if (!C.zf) goto L_11860d30;
  /* 11860d29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860d2b jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860d30:;
  /* 11860d30 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11860d33 push eax */
  push32((uint32_t)(EAX));
  /* 11860d34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860d37 push ecx */
  push32((uint32_t)(ECX));
  /* 11860d38 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11860d3b push edx */
  push32((uint32_t)(EDX));
  /* 11860d3c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11860d3f push eax */
  push32((uint32_t)(EAX));
  /* 11860d40 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860d43 push ecx */
  push32((uint32_t)(ECX));
  /* 11860d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860d47 push edx */
  push32((uint32_t)(EDX));
  /* 11860d48 call dword ptr [0x11887334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887334))), 0x11860d4eu);
  /* 11860d4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11860d50 jne 0x11860d56 */
  if (!C.zf) goto L_11860d56;
  /* 11860d52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860d54 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860d56:;
  /* 11860d56 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860d5a jne 0x11860d8a */
  if (!C.zf) goto L_11860d8a;
  /* 11860d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d64 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11860d67 push eax */
  push32((uint32_t)(EAX));
  /* 11860d68 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860d6b push ecx */
  push32((uint32_t)(ECX));
  /* 11860d6c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11860d71 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11860d74 push edx */
  push32((uint32_t)(EDX));
  /* 11860d75 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11860d7bu);
  /* 11860d7b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11860d7e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860d82 jne 0x11860d88 */
  if (!C.zf) goto L_11860d88;
  /* 11860d84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860d86 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860d88:;
  /* 11860d88 jmp 0x11860dba */
  goto L_11860dba;
L_11860d8a:;
  /* 11860d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11860d8e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11860d91 push eax */
  push32((uint32_t)(EAX));
  /* 11860d92 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11860d95 push ecx */
  push32((uint32_t)(ECX));
  /* 11860d96 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11860d99 push edx */
  push32((uint32_t)(EDX));
  /* 11860d9a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11860d9d push eax */
  push32((uint32_t)(EAX));
  /* 11860d9e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11860da3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11860da6 push ecx */
  push32((uint32_t)(ECX));
  /* 11860da7 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x11860dadu);
  /* 11860dad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11860db0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860db4 jne 0x11860dba */
  if (!C.zf) goto L_11860dba;
  /* 11860db6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11860db8 jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860dba:;
  /* 11860dba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11860dbd jmp 0x11860dc1 */
  goto L_11860dc1;
L_11860dbf:;
  /* 11860dbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11860dc1:;
  /* 11860dc1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11860dc4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11860dc7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11860dce pop edi */
  EDI = (pop32());
  /* 11860dcf pop esi */
  ESI = (pop32());
  /* 11860dd0 pop ebx */
  EBX = (pop32());
  /* 11860dd1 mov esp, ebp */
  ESP = (EBP);
  /* 11860dd3 pop ebp */
  EBP = (pop32());
  /* 11860dd4 ret  */
  ESPCHK(0x11860ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010de0 @ 0x11860de0 (80 bytes, 32 insns) */
void f_11860de0(void) {
  FTRACE(0x11860de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11860de1 mov ebp, esp */
  EBP = (ESP);
  /* 11860de3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860de6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860de9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11860dec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860def mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11860df2:;
  /* 11860df2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11860df5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11860df8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860dfb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11860dfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860e00 je 0x11860e17 */
  if (C.zf) goto L_11860e17;
  /* 11860e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860e05 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11860e08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860e0a je 0x11860e17 */
  if (C.zf) goto L_11860e17;
  /* 11860e0c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860e0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11860e12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11860e15 jmp 0x11860df2 */
  goto L_11860df2;
L_11860e17:;
  /* 11860e17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860e1a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11860e1d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11860e1f jne 0x11860e29 */
  if (!C.zf) goto L_11860e29;
  /* 11860e21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860e24 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860e27 jmp 0x11860e2c */
  goto L_11860e2c;
L_11860e29:;
  /* 11860e29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11860e2c:;
  /* 11860e2c mov esp, ebp */
  ESP = (EBP);
  /* 11860e2e pop ebp */
  EBP = (pop32());
  /* 11860e2f ret  */
  ESPCHK(0x11860de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x11860e30 (130 bytes, 43 insns) */
void f_11860e30(void) {
  FTRACE(0x11860e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11860e31 mov ebp, esp */
  EBP = (ESP);
  /* 11860e33 push ecx */
  push32((uint32_t)(ECX));
  /* 11860e34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860e37 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860e3d jae 0x11860e61 */
  if (!C.cf) goto L_11860e61;
  /* 11860e3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860e42 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11860e45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860e48 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11860e4b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11860e4e mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11860e55 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11860e5a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11860e5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11860e5f jne 0x11860e7c */
  if (!C.zf) goto L_11860e7c;
L_11860e61:;
  /* 11860e61 call 0x118605b0 */
  push32(0x11860e66u); f_118605b0();
  /* 11860e66 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11860e6c call 0x118605c0 */
  push32(0x11860e71u); f_118605c0();
  /* 11860e71 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11860e77 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11860e7a jmp 0x11860eae */
  goto L_11860eae;
L_11860e7c:;
  /* 11860e7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860e7f push edx */
  push32((uint32_t)(EDX));
  /* 11860e80 call 0x11861dd0 */
  push32(0x11860e85u); f_11861dd0();
  /* 11860e85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860e88 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860e8b push eax */
  push32((uint32_t)(EAX));
  /* 11860e8c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860e8f push ecx */
  push32((uint32_t)(ECX));
  /* 11860e90 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860e93 push edx */
  push32((uint32_t)(EDX));
  /* 11860e94 call 0x11860ec0 */
  push32(0x11860e99u); f_11860ec0();
  /* 11860e99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860e9c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11860e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860ea2 push eax */
  push32((uint32_t)(EAX));
  /* 11860ea3 call 0x11861e60 */
  push32(0x11860ea8u); f_11861e60();
  /* 11860ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860eab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11860eae:;
  /* 11860eae mov esp, ebp */
  ESP = (EBP);
  /* 11860eb0 pop ebp */
  EBP = (pop32());
  /* 11860eb1 ret  */
  ESPCHK(0x11860e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ec0 @ 0x11860ec0 (178 bytes, 56 insns) */
void f_11860ec0(void) {
  FTRACE(0x11860ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11860ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11860ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11860ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860ec9 push eax */
  push32((uint32_t)(EAX));
  /* 11860eca call 0x11861c50 */
  push32(0x11860ecfu); f_11861c50();
  /* 11860ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860ed2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11860ed5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860ed9 jne 0x11860eee */
  if (!C.zf) goto L_11860eee;
  /* 11860edb call 0x118605b0 */
  push32(0x11860ee0u); f_118605b0();
  /* 11860ee0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11860ee6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11860ee9 jmp 0x11860f6e */
  goto L_11860f6e;
L_11860eee:;
  /* 11860eee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860ef1 push ecx */
  push32((uint32_t)(ECX));
  /* 11860ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11860ef4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860ef7 push edx */
  push32((uint32_t)(EDX));
  /* 11860ef8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11860efb push eax */
  push32((uint32_t)(EAX));
  /* 11860efc call dword ptr [0x11887324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887324))), 0x11860f02u);
  /* 11860f02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11860f05 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860f09 jne 0x11860f16 */
  if (!C.zf) goto L_11860f16;
  /* 11860f0b call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11860f11u);
  /* 11860f11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11860f14 jmp 0x11860f1d */
  goto L_11860f1d;
L_11860f16:;
  /* 11860f16 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11860f1d:;
  /* 11860f1d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860f21 je 0x11860f34 */
  if (C.zf) goto L_11860f34;
  /* 11860f23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11860f26 push ecx */
  push32((uint32_t)(ECX));
  /* 11860f27 call 0x11860510 */
  push32(0x11860f2cu); f_11860510();
  /* 11860f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860f2f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11860f32 jmp 0x11860f6e */
  goto L_11860f6e;
L_11860f34:;
  /* 11860f34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f37 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11860f3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f3d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11860f40 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11860f43 mov ecx, dword ptr [edx*4 + 0x11886260] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 11860f4a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11860f4e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11860f51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f54 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11860f57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f5a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11860f5d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11860f60 mov eax, dword ptr [eax*4 + 0x11886260] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11860f67 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11860f6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11860f6e:;
  /* 11860f6e mov esp, ebp */
  ESP = (EBP);
  /* 11860f70 pop ebp */
  EBP = (pop32());
  /* 11860f71 ret  */
  ESPCHK(0x11860ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f80 @ 0x11860f80 (130 bytes, 43 insns) */
void f_11860f80(void) {
  FTRACE(0x11860f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11860f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11860f81 mov ebp, esp */
  EBP = (ESP);
  /* 11860f83 push ecx */
  push32((uint32_t)(ECX));
  /* 11860f84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f87 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11860f8d jae 0x11860fb1 */
  if (!C.cf) goto L_11860fb1;
  /* 11860f8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f92 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11860f95 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860f98 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11860f9b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11860f9e mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11860fa5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11860faa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11860fad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11860faf jne 0x11860fcc */
  if (!C.zf) goto L_11860fcc;
L_11860fb1:;
  /* 11860fb1 call 0x118605b0 */
  push32(0x11860fb6u); f_118605b0();
  /* 11860fb6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11860fbc call 0x118605c0 */
  push32(0x11860fc1u); f_118605c0();
  /* 11860fc1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11860fc7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11860fca jmp 0x11860ffe */
  goto L_11860ffe;
L_11860fcc:;
  /* 11860fcc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860fcf push edx */
  push32((uint32_t)(EDX));
  /* 11860fd0 call 0x11861dd0 */
  push32(0x11860fd5u); f_11861dd0();
  /* 11860fd5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860fd8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11860fdb push eax */
  push32((uint32_t)(EAX));
  /* 11860fdc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11860fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11860fe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860fe3 push edx */
  push32((uint32_t)(EDX));
  /* 11860fe4 call 0x11861010 */
  push32(0x11860fe9u); f_11861010();
  /* 11860fe9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860fec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11860fef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11860ff2 push eax */
  push32((uint32_t)(EAX));
  /* 11860ff3 call 0x11861e60 */
  push32(0x11860ff8u); f_11861e60();
  /* 11860ff8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11860ffb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11860ffe:;
  /* 11860ffe mov esp, ebp */
  ESP = (EBP);
  /* 11861000 pop ebp */
  EBP = (pop32());
  /* 11861001 ret  */
  ESPCHK(0x11860f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011010 @ 0x11861010 (627 bytes, 182 insns) */
void f_11861010(void) {
  FTRACE(0x11861010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861010 push ebp */
  push32((uint32_t)(EBP));
  /* 11861011 mov ebp, esp */
  EBP = (ESP);
  /* 11861013 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11861019 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11861020 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11861023 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11861029 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186102d jne 0x11861036 */
  if (!C.zf) goto L_11861036;
  /* 1186102f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11861031 jmp 0x1186127f */
  goto L_1186127f;
L_11861036:;
  /* 11861036 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861039 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1186103c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186103f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11861042 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861045 mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 1186104c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11861051 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11861054 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11861056 je 0x11861068 */
  if (C.zf) goto L_11861068;
  /* 11861058 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186105a push 0 */
  push32((uint32_t)(0x0u));
  /* 1186105c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186105f push edx */
  push32((uint32_t)(EDX));
  /* 11861060 call 0x11860ec0 */
  push32(0x11861065u); f_11860ec0();
  /* 11861065 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861068:;
  /* 11861068 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186106b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1186106e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861071 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861074 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861077 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 1186107e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11861083 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11861088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186108a je 0x1186119c */
  if (C.zf) goto L_1186119c;
  /* 11861090 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861093 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11861096 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1186109d:;
  /* 1186109d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118610a0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118610a3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118610a6 jae 0x1186119a */
  if (!C.cf) goto L_1186119a;
  /* 118610ac lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 118610b2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118610b5:;
  /* 118610b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118610b8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 118610be sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118610c0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118610c6 jge 0x11861127 */
  if ((C.sf==C.of)) goto L_11861127;
  /* 118610c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118610cb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118610ce cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118610d1 jae 0x11861127 */
  if (!C.cf) goto L_11861127;
  /* 118610d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118610d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 118610d8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 118610de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118610e1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118610e4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118610e7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 118610ee cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118610f1 jne 0x11861111 */
  if (!C.zf) goto L_11861111;
  /* 118610f3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 118610f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118610fc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11861102 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861105 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11861108 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186110b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186110e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11861111:;
  /* 11861111 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861114 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1186111a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1186111c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186111f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861122 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11861125 jmp 0x118610b5 */
  goto L_118610b5;
L_11861127:;
  /* 11861127 push 0 */
  push32((uint32_t)(0x0u));
  /* 11861129 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1186112f push edx */
  push32((uint32_t)(EDX));
  /* 11861130 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861133 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11861139 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186113b push eax */
  push32((uint32_t)(EAX));
  /* 1186113c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11861142 push edx */
  push32((uint32_t)(EDX));
  /* 11861143 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861146 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861149 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186114c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1186114f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861152 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861159 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1186115c push eax */
  push32((uint32_t)(EAX));
  /* 1186115d call dword ptr [0x118873bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873bc))), 0x11861163u);
  /* 11861163 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11861165 je 0x1186118a */
  if (C.zf) goto L_1186118a;
  /* 11861167 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186116a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861170 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11861173 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861176 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1186117c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186117e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861184 jge 0x11861188 */
  if ((C.sf==C.of)) goto L_11861188;
  /* 11861186 jmp 0x1186119a */
  goto L_1186119a;
L_11861188:;
  /* 11861188 jmp 0x11861195 */
  goto L_11861195;
L_1186118a:;
  /* 1186118a call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11861190u);
  /* 11861190 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11861193 jmp 0x1186119a */
  goto L_1186119a;
L_11861195:;
  /* 11861195 jmp 0x1186109d */
  goto L_1186109d;
L_1186119a:;
  /* 1186119a jmp 0x118611ec */
  goto L_118611ec;
L_1186119c:;
  /* 1186119c push 0 */
  push32((uint32_t)(0x0u));
  /* 1186119e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 118611a4 push ecx */
  push32((uint32_t)(ECX));
  /* 118611a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 118611a8 push edx */
  push32((uint32_t)(EDX));
  /* 118611a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118611ac push eax */
  push32((uint32_t)(EAX));
  /* 118611ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118611b0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118611b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118611b6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118611b9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118611bc mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 118611c3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 118611c6 push ecx */
  push32((uint32_t)(ECX));
  /* 118611c7 call dword ptr [0x118873bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873bc))), 0x118611cdu);
  /* 118611cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118611cf je 0x118611e3 */
  if (C.zf) goto L_118611e3;
  /* 118611d1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118611d8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 118611de mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 118611e1 jmp 0x118611ec */
  goto L_118611ec;
L_118611e3:;
  /* 118611e3 call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x118611e9u);
  /* 118611e9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118611ec:;
  /* 118611ec cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118611f0 jne 0x11861276 */
  if (!C.zf) goto L_11861276;
  /* 118611f6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118611fa je 0x1186122a */
  if (C.zf) goto L_1186122a;
  /* 118611fc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861200 jne 0x11861219 */
  if (!C.zf) goto L_11861219;
  /* 11861202 call 0x118605b0 */
  push32(0x11861207u); f_118605b0();
  /* 11861207 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1186120d call 0x118605c0 */
  push32(0x11861212u); f_118605c0();
  /* 11861212 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861215 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11861217 jmp 0x11861225 */
  goto L_11861225;
L_11861219:;
  /* 11861219 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186121c push edx */
  push32((uint32_t)(EDX));
  /* 1186121d call 0x11860510 */
  push32(0x11861222u); f_11860510();
  /* 11861222 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861225:;
  /* 11861225 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861228 jmp 0x1186127f */
  goto L_1186127f;
L_1186122a:;
  /* 1186122a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186122d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861233 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861236 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861239 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861240 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11861245 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11861248 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186124a je 0x1186125b */
  if (C.zf) goto L_1186125b;
  /* 1186124c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186124f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11861252 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861255 jne 0x1186125b */
  if (!C.zf) goto L_1186125b;
  /* 11861257 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11861259 jmp 0x1186127f */
  goto L_1186127f;
L_1186125b:;
  /* 1186125b call 0x118605b0 */
  push32(0x11861260u); f_118605b0();
  /* 11861260 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11861266 call 0x118605c0 */
  push32(0x1186126bu); f_118605c0();
  /* 1186126b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11861271 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861274 jmp 0x1186127f */
  goto L_1186127f;
L_11861276:;
  /* 11861276 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11861279 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1186127f:;
  /* 1186127f mov esp, ebp */
  ESP = (EBP);
  /* 11861281 pop ebp */
  EBP = (pop32());
  /* 11861282 ret  */
  ESPCHK(0x11861010u, _esp0);
  ESP += 4; return;
}

/* FUN_10011290 @ 0x11861290 (199 bytes, 68 insns) */
void f_11861290(void) {
  FTRACE(0x11861290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861290 push ebp */
  push32((uint32_t)(EBP));
  /* 11861291 mov ebp, esp */
  EBP = (ESP);
  /* 11861293 push ecx */
  push32((uint32_t)(ECX));
  /* 11861294 push ebx */
  push32((uint32_t)(EBX));
  /* 11861295 push esi */
  push32((uint32_t)(ESI));
  /* 11861296 push edi */
  push32((uint32_t)(EDI));
L_11861297:;
  /* 11861297 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186129b jne 0x118612bb */
  if (!C.zf) goto L_118612bb;
  /* 1186129d push 0x118808b4 */
  push32((uint32_t)(0x118808b4u));
  /* 118612a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118612a4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 118612a6 push 0x11880980 */
  push32((uint32_t)(0x11880980u));
  /* 118612ab push 2 */
  push32((uint32_t)(0x2u));
  /* 118612ad call 0x118577a0 */
  push32(0x118612b2u); f_118577a0();
  /* 118612b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118612b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118612b8 jne 0x118612bb */
  if (!C.zf) goto L_118612bb;
  /* 118612ba int3  */
  x86_unimpl("int3 @ 0x118612ba");
L_118612bb:;
  /* 118612bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118612bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118612bf jne 0x11861297 */
  if (!C.zf) goto L_11861297;
  /* 118612c1 mov ecx, dword ptr [0x11884a9c] */
  ECX = (r32((uint32_t)(0x11884a9c)));
  /* 118612c7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118612ca mov dword ptr [0x11884a9c], ecx */
  w32((uint32_t)(0x11884a9c), (ECX));
  /* 118612d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118612d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 118612d6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 118612d8 push 0x11880980 */
  push32((uint32_t)(0x11880980u));
  /* 118612dd push 2 */
  push32((uint32_t)(0x2u));
  /* 118612df push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 118612e4 call 0x118586e0 */
  push32(0x118612e9u); f_118586e0();
  /* 118612e9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118612ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118612ef mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 118612f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118612f5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118612f9 je 0x11861316 */
  if (C.zf) goto L_11861316;
  /* 118612fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118612fe mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11861301 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11861304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861307 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1186130a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186130d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11861314 jmp 0x1186133b */
  goto L_1186133b;
L_11861316:;
  /* 11861316 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861319 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1186131c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1186131f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861322 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11861325 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861328 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186132b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186132e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11861331 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861334 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1186133b:;
  /* 1186133b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186133e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861341 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11861344 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11861346 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861349 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11861350 pop edi */
  EDI = (pop32());
  /* 11861351 pop esi */
  ESI = (pop32());
  /* 11861352 pop ebx */
  EBX = (pop32());
  /* 11861353 mov esp, ebp */
  ESP = (EBP);
  /* 11861355 pop ebp */
  EBP = (pop32());
  /* 11861356 ret  */
  ESPCHK(0x11861290u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11861360 (50 bytes, 17 insns) */
void f_11861360(void) {
  FTRACE(0x11861360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861360 push ebp */
  push32((uint32_t)(EBP));
  /* 11861361 mov ebp, esp */
  EBP = (ESP);
  /* 11861363 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861366 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186136c jb 0x11861372 */
  if (C.cf) goto L_11861372;
  /* 1186136e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11861370 jmp 0x11861390 */
  goto L_11861390;
L_11861372:;
  /* 11861372 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861375 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861378 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186137b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1186137e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861381 mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861388 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1186138d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11861390:;
  /* 11861390 pop ebp */
  EBP = (pop32());
  /* 11861391 ret  */
  ESPCHK(0x11861360u, _esp0);
  ESP += 4; return;
}

/* FUN_100113a0 @ 0x118613a0 (300 bytes, 80 insns) */
void f_118613a0(void) {
  FTRACE(0x118613a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118613a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118613a1 mov ebp, esp */
  EBP = (ESP);
  /* 118613a3 push ecx */
  push32((uint32_t)(ECX));
  /* 118613a4 cmp dword ptr [0x11885f60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11885f60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118613ab jne 0x118613b9 */
  if (!C.zf) goto L_118613b9;
  /* 118613ad mov dword ptr [0x11885f60], 0x200 */
  w32((uint32_t)(0x11885f60), (0x200u));
  /* 118613b7 jmp 0x118613cc */
  goto L_118613cc;
L_118613b9:;
  /* 118613b9 cmp dword ptr [0x11885f60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11885f60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118613c0 jge 0x118613cc */
  if ((C.sf==C.of)) goto L_118613cc;
  /* 118613c2 mov dword ptr [0x11885f60], 0x14 */
  w32((uint32_t)(0x11885f60), (0x14u));
L_118613cc:;
  /* 118613cc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 118613d1 push 0x1188098c */
  push32((uint32_t)(0x1188098cu));
  /* 118613d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118613d8 push 4 */
  push32((uint32_t)(0x4u));
  /* 118613da mov eax, dword ptr [0x11885f60] */
  EAX = (r32((uint32_t)(0x11885f60)));
  /* 118613df push eax */
  push32((uint32_t)(EAX));
  /* 118613e0 call 0x11858af0 */
  push32(0x118613e5u); f_11858af0();
  /* 118613e5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118613e8 mov dword ptr [0x11884c10], eax */
  w32((uint32_t)(0x11884c10), (EAX));
  /* 118613ed cmp dword ptr [0x11884c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118613f4 jne 0x11861435 */
  if (!C.zf) goto L_11861435;
  /* 118613f6 mov dword ptr [0x11885f60], 0x14 */
  w32((uint32_t)(0x11885f60), (0x14u));
  /* 11861400 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11861405 push 0x1188098c */
  push32((uint32_t)(0x1188098cu));
  /* 1186140a push 2 */
  push32((uint32_t)(0x2u));
  /* 1186140c push 4 */
  push32((uint32_t)(0x4u));
  /* 1186140e mov ecx, dword ptr [0x11885f60] */
  ECX = (r32((uint32_t)(0x11885f60)));
  /* 11861414 push ecx */
  push32((uint32_t)(ECX));
  /* 11861415 call 0x11858af0 */
  push32(0x1186141au); f_11858af0();
  /* 1186141a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186141d mov dword ptr [0x11884c10], eax */
  w32((uint32_t)(0x11884c10), (EAX));
  /* 11861422 cmp dword ptr [0x11884c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861429 jne 0x11861435 */
  if (!C.zf) goto L_11861435;
  /* 1186142b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1186142d call 0x11857650 */
  push32(0x11861432u); f_11857650();
  /* 11861432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861435:;
  /* 11861435 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186143c jmp 0x11861447 */
  goto L_11861447;
L_1186143e:;
  /* 1186143e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861441 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861444 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11861447:;
  /* 11861447 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186144b jge 0x11861466 */
  if ((C.sf==C.of)) goto L_11861466;
  /* 1186144d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861450 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861453 add eax, 0x11883120 */
  { uint32_t _a=(EAX),_b=(0x11883120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861458 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186145b mov edx, dword ptr [0x11884c10] */
  EDX = (r32((uint32_t)(0x11884c10)));
  /* 11861461 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11861464 jmp 0x1186143e */
  goto L_1186143e;
L_11861466:;
  /* 11861466 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186146d jmp 0x11861478 */
  goto L_11861478;
L_1186146f:;
  /* 1186146f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861472 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861475 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11861478:;
  /* 11861478 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186147c jge 0x118614c8 */
  if ((C.sf==C.of)) goto L_118614c8;
  /* 1186147e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861481 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861484 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861487 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1186148a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186148d mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861494 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861498 je 0x118614b6 */
  if (C.zf) goto L_118614b6;
  /* 1186149a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186149d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118614a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 118614a3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 118614a6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118614a9 mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 118614b0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118614b4 jne 0x118614c6 */
  if (!C.zf) goto L_118614c6;
L_118614b6:;
  /* 118614b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118614b9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118614bc mov dword ptr [ecx + 0x11883130], 0xffffffff */
  w32((uint32_t)(ECX + 0x11883130), (0xffffffffu));
L_118614c6:;
  /* 118614c6 jmp 0x1186146f */
  goto L_1186146f;
L_118614c8:;
  /* 118614c8 mov esp, ebp */
  ESP = (EBP);
  /* 118614ca pop ebp */
  EBP = (pop32());
  /* 118614cb ret  */
  ESPCHK(0x118613a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114d0 @ 0x118614d0 (26 bytes, 9 insns) */
void f_118614d0(void) {
  FTRACE(0x118614d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118614d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118614d1 mov ebp, esp */
  EBP = (ESP);
  /* 118614d3 call 0x118620d0 */
  push32(0x118614d8u); f_118620d0();
  /* 118614d8 movsx eax, byte ptr [0x118848b4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x118848b4))));
  /* 118614df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118614e1 je 0x118614e8 */
  if (C.zf) goto L_118614e8;
  /* 118614e3 call 0x11861e90 */
  push32(0x118614e8u); f_11861e90();
L_118614e8:;
  /* 118614e8 pop ebp */
  EBP = (pop32());
  /* 118614e9 ret  */
  ESPCHK(0x118614d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100114f0 @ 0x118614f0 (61 bytes, 20 insns) */
void f_118614f0(void) {
  FTRACE(0x118614f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118614f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118614f1 mov ebp, esp */
  EBP = (ESP);
  /* 118614f3 cmp dword ptr [ebp + 8], 0x11883120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11883120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118614fa jb 0x1186151e */
  if (C.cf) goto L_1186151e;
  /* 118614fc cmp dword ptr [ebp + 8], 0x11883380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11883380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861503 ja 0x1186151e */
  if ((!C.cf&&!C.zf)) goto L_1186151e;
  /* 11861505 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861508 sub eax, 0x11883120 */
  { uint32_t _a=(EAX),_b=(0x11883120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186150d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861510 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861513 push eax */
  push32((uint32_t)(EAX));
  /* 11861514 call 0x1185c0e0 */
  push32(0x11861519u); f_1185c0e0();
  /* 11861519 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186151c jmp 0x1186152b */
  goto L_1186152b;
L_1186151e:;
  /* 1186151e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861521 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861524 push ecx */
  push32((uint32_t)(ECX));
  /* 11861525 call dword ptr [0x11887360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887360))), 0x1186152bu);
L_1186152b:;
  /* 1186152b pop ebp */
  EBP = (pop32());
  /* 1186152c ret  */
  ESPCHK(0x118614f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011530 @ 0x11861530 (41 bytes, 16 insns) */
void f_11861530(void) {
  FTRACE(0x11861530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861530 push ebp */
  push32((uint32_t)(EBP));
  /* 11861531 mov ebp, esp */
  EBP = (ESP);
  /* 11861533 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861537 jge 0x1186154a */
  if ((C.sf==C.of)) goto L_1186154a;
  /* 11861539 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186153c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186153f push eax */
  push32((uint32_t)(EAX));
  /* 11861540 call 0x1185c0e0 */
  push32(0x11861545u); f_1185c0e0();
  /* 11861545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861548 jmp 0x11861557 */
  goto L_11861557;
L_1186154a:;
  /* 1186154a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186154d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861550 push ecx */
  push32((uint32_t)(ECX));
  /* 11861551 call dword ptr [0x11887360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887360))), 0x11861557u);
L_11861557:;
  /* 11861557 pop ebp */
  EBP = (pop32());
  /* 11861558 ret  */
  ESPCHK(0x11861530u, _esp0);
  ESP += 4; return;
}

/* FUN_10011560 @ 0x11861560 (61 bytes, 20 insns) */
void f_11861560(void) {
  FTRACE(0x11861560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861560 push ebp */
  push32((uint32_t)(EBP));
  /* 11861561 mov ebp, esp */
  EBP = (ESP);
  /* 11861563 cmp dword ptr [ebp + 8], 0x11883120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11883120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186156a jb 0x1186158e */
  if (C.cf) goto L_1186158e;
  /* 1186156c cmp dword ptr [ebp + 8], 0x11883380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11883380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861573 ja 0x1186158e */
  if ((!C.cf&&!C.zf)) goto L_1186158e;
  /* 11861575 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861578 sub eax, 0x11883120 */
  { uint32_t _a=(EAX),_b=(0x11883120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186157d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861580 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861583 push eax */
  push32((uint32_t)(EAX));
  /* 11861584 call 0x1185c180 */
  push32(0x11861589u); f_1185c180();
  /* 11861589 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186158c jmp 0x1186159b */
  goto L_1186159b;
L_1186158e:;
  /* 1186158e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861591 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861594 push ecx */
  push32((uint32_t)(ECX));
  /* 11861595 call dword ptr [0x1188735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188735c))), 0x1186159bu);
L_1186159b:;
  /* 1186159b pop ebp */
  EBP = (pop32());
  /* 1186159c ret  */
  ESPCHK(0x11861560u, _esp0);
  ESP += 4; return;
}

/* FUN_100115a0 @ 0x118615a0 (41 bytes, 16 insns) */
void f_118615a0(void) {
  FTRACE(0x118615a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118615a0 push ebp */
  push32((uint32_t)(EBP));
  /* 118615a1 mov ebp, esp */
  EBP = (ESP);
  /* 118615a3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118615a7 jge 0x118615ba */
  if ((C.sf==C.of)) goto L_118615ba;
  /* 118615a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118615ac add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118615af push eax */
  push32((uint32_t)(EAX));
  /* 118615b0 call 0x1185c180 */
  push32(0x118615b5u); f_1185c180();
  /* 118615b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118615b8 jmp 0x118615c7 */
  goto L_118615c7;
L_118615ba:;
  /* 118615ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118615bd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118615c0 push ecx */
  push32((uint32_t)(ECX));
  /* 118615c1 call dword ptr [0x1188735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188735c))), 0x118615c7u);
L_118615c7:;
  /* 118615c7 pop ebp */
  EBP = (pop32());
  /* 118615c8 ret  */
  ESPCHK(0x118615a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100115d0 @ 0x118615d0 (119 bytes, 34 insns) */
void f_118615d0(void) {
  FTRACE(0x118615d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118615d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118615d1 mov ebp, esp */
  EBP = (ESP);
  /* 118615d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118615d6 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 118615db call dword ptr [0x118873d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873d0))), 0x118615e1u);
  /* 118615e1 cmp dword ptr [0x11884bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118615e8 je 0x11861608 */
  if (C.zf) goto L_11861608;
  /* 118615ea push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 118615ef call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x118615f5u);
  /* 118615f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 118615f7 call 0x1185c0e0 */
  push32(0x118615fcu); f_1185c0e0();
  /* 118615fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118615ff mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11861606 jmp 0x1186160f */
  goto L_1186160f;
L_11861608:;
  /* 11861608 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1186160f:;
  /* 1186160f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11861613 push eax */
  push32((uint32_t)(EAX));
  /* 11861614 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861617 push ecx */
  push32((uint32_t)(ECX));
  /* 11861618 call 0x11861650 */
  push32(0x1186161du); f_11861650();
  /* 1186161d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861620 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11861623 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861627 je 0x11861635 */
  if (C.zf) goto L_11861635;
  /* 11861629 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1186162b call 0x1185c180 */
  push32(0x11861630u); f_1185c180();
  /* 11861630 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861633 jmp 0x11861640 */
  goto L_11861640;
L_11861635:;
  /* 11861635 push 0x11884c0c */
  push32((uint32_t)(0x11884c0cu));
  /* 1186163a call dword ptr [0x118873c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873c0))), 0x11861640u);
L_11861640:;
  /* 11861640 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861643 mov esp, ebp */
  ESP = (EBP);
  /* 11861645 pop ebp */
  EBP = (pop32());
  /* 11861646 ret  */
  ESPCHK(0x118615d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011650 @ 0x11861650 (160 bytes, 50 insns) */
void f_11861650(void) {
  FTRACE(0x11861650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861650 push ebp */
  push32((uint32_t)(EBP));
  /* 11861651 mov ebp, esp */
  EBP = (ESP);
  /* 11861653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11861656 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186165a jne 0x11861663 */
  if (!C.zf) goto L_11861663;
  /* 1186165c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186165e jmp 0x118616ec */
  goto L_118616ec;
L_11861663:;
  /* 11861663 cmp dword ptr [0x11884a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186166a jne 0x1186169a */
  if (!C.zf) goto L_1186169a;
  /* 1186166c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186166f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861674 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861679 jle 0x1186168b */
  if ((C.zf||C.sf!=C.of)) goto L_1186168b;
  /* 1186167b call 0x118605b0 */
  push32(0x11861680u); f_118605b0();
  /* 11861680 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11861686 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861689 jmp 0x118616ec */
  goto L_118616ec;
L_1186168b:;
  /* 1186168b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186168e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11861691 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11861693 mov eax, 1 */
  EAX = (0x1u);
  /* 11861698 jmp 0x118616ec */
  goto L_118616ec;
L_1186169a:;
  /* 1186169a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118616a1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 118616a4 push eax */
  push32((uint32_t)(EAX));
  /* 118616a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 118616a7 mov ecx, dword ptr [0x11882ea4] */
  ECX = (r32((uint32_t)(0x11882ea4)));
  /* 118616ad push ecx */
  push32((uint32_t)(ECX));
  /* 118616ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118616b1 push edx */
  push32((uint32_t)(EDX));
  /* 118616b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118616b4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 118616b7 push eax */
  push32((uint32_t)(EAX));
  /* 118616b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 118616bd mov ecx, dword ptr [0x11884a90] */
  ECX = (r32((uint32_t)(0x11884a90)));
  /* 118616c3 push ecx */
  push32((uint32_t)(ECX));
  /* 118616c4 call dword ptr [0x11887384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887384))), 0x118616cau);
  /* 118616ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118616cd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118616d1 je 0x118616d9 */
  if (C.zf) goto L_118616d9;
  /* 118616d3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118616d7 je 0x118616e9 */
  if (C.zf) goto L_118616e9;
L_118616d9:;
  /* 118616d9 call 0x118605b0 */
  push32(0x118616deu); f_118605b0();
  /* 118616de mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 118616e4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118616e7 jmp 0x118616ec */
  goto L_118616ec;
L_118616e9:;
  /* 118616e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118616ec:;
  /* 118616ec mov esp, ebp */
  ESP = (EBP);
  /* 118616ee pop ebp */
  EBP = (pop32());
  /* 118616ef ret  */
  ESPCHK(0x11861650u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x118616f0 (32 bytes, 18 insns) */
void f_118616f0(void) {
  FTRACE(0x118616f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118616f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118616f1 mov ebp, esp */
  EBP = (ESP);
  /* 118616f3 push ebx */
  push32((uint32_t)(EBX));
  /* 118616f4 push esi */
  push32((uint32_t)(ESI));
  /* 118616f5 push edi */
  push32((uint32_t)(EDI));
  /* 118616f6 push ebp */
  push32((uint32_t)(EBP));
  /* 118616f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 118616f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 118616fb push 0x11861708 */
  push32((uint32_t)(0x11861708u));
  /* 11861700 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11861703 call 0x11868e3c */
  push32(0x11861708u); f_11868e3c();
  /* 11861708 pop ebp */
  EBP = (pop32());
  /* 11861709 pop edi */
  EDI = (pop32());
  /* 1186170a pop esi */
  ESI = (pop32());
  /* 1186170b pop ebx */
  EBX = (pop32());
  /* 1186170c mov esp, ebp */
  ESP = (EBP);
  /* 1186170e pop ebp */
  EBP = (pop32());
  /* 1186170f ret  */
  ESPCHK(0x118616f0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11861732 (104 bytes, 33 insns) */
void f_11861732(void) {
  FTRACE(0x11861732u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861732 push ebx */
  push32((uint32_t)(EBX));
  /* 11861733 push esi */
  push32((uint32_t)(ESI));
  /* 11861734 push edi */
  push32((uint32_t)(EDI));
  /* 11861735 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11861739 push eax */
  push32((uint32_t)(EAX));
  /* 1186173a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1186173c push 0x11861710 */
  push32((uint32_t)(0x11861710u));
  /* 11861741 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11861748 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1186174f:;
  /* 1186174f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11861753 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11861756 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11861759 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186175c je 0x1186178c */
  if (C.zf) goto L_1186178c;
  /* 1186175e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861762 je 0x1186178c */
  if (C.zf) goto L_1186178c;
  /* 11861764 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11861767 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1186176a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1186176e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11861771 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861776 jne 0x1186178a */
  if (!C.zf) goto L_1186178a;
  /* 11861778 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1186177d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11861781 call 0x118617c6 */
  push32(0x11861786u); f_118617c6();
  /* 11861786 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1186178au);
L_1186178a:;
  /* 1186178a jmp 0x1186174f */
  goto L_1186174f;
L_1186178c:;
  /* 1186178c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11861793 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861796 pop edi */
  EDI = (pop32());
  /* 11861797 pop esi */
  ESI = (pop32());
  /* 11861798 pop ebx */
  EBX = (pop32());
  /* 11861799 ret  */
  ESPCHK(0x11861732u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c6 @ 0x118617c6 (24 bytes, 10 insns) */
void f_118617c6(void) {
  FTRACE(0x118617c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118617c6 push ebx */
  push32((uint32_t)(EBX));
  /* 118617c7 push ecx */
  push32((uint32_t)(ECX));
  /* 118617c8 mov ebx, 0x118833b8 */
  EBX = (0x118833b8u);
  /* 118617cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118617d0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 118617d3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 118617d6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 118617d9 pop ecx */
  ECX = (pop32());
  /* 118617da pop ebx */
  EBX = (pop32());
  /* 118617db ret 4 */
  ESPCHK(0x118617c6u, _esp0);
  ESP += 8; return;
}

/* FUN_100118a5 @ 0x118618a5 (27 bytes, 11 insns) */
void f_118618a5(void) {
  FTRACE(0x118618a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118618a5 push ebp */
  push32((uint32_t)(EBP));
  /* 118618a6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 118618aa mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 118618ac mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 118618af push eax */
  push32((uint32_t)(EAX));
  /* 118618b0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 118618b3 push eax */
  push32((uint32_t)(EAX));
  /* 118618b4 call 0x11861732 */
  push32(0x118618b9u); f_11861732();
  /* 118618b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118618bc pop ebp */
  EBP = (pop32());
  /* 118618bd ret 4 */
  ESPCHK(0x118618a5u, _esp0);
  ESP += 8; return;
}

/* FUN_100118c0 @ 0x118618c0 (482 bytes, 138 insns) */
void f_118618c0(void) {
  FTRACE(0x118618c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118618c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118618c1 mov ebp, esp */
  EBP = (ESP);
  /* 118618c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118618c6 push esi */
  push32((uint32_t)(ESI));
  /* 118618c7 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 118618ce push 0x12 */
  push32((uint32_t)(0x12u));
  /* 118618d0 call 0x1185c0e0 */
  push32(0x118618d5u); f_1185c0e0();
  /* 118618d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118618d8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118618df jmp 0x118618ea */
  goto L_118618ea;
L_118618e1:;
  /* 118618e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118618e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118618e7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_118618ea:;
  /* 118618ea cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118618ee jge 0x11861a90 */
  if ((C.sf==C.of)) goto L_11861a90;
  /* 118618f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118618f7 cmp dword ptr [ecx*4 + 0x11886260], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11886260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118618ff je 0x118619f6 */
  if (C.zf) goto L_118619f6;
  /* 11861905 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861908 mov eax, dword ptr [edx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 1186190f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11861912 jmp 0x1186191d */
  goto L_1186191d;
L_11861914:;
  /* 11861914 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861917 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186191a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1186191d:;
  /* 1186191d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861920 mov eax, dword ptr [edx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 11861927 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186192c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186192f jae 0x118619e6 */
  if (!C.cf) goto L_118619e6;
  /* 11861935 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861938 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1186193c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1186193f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11861941 jne 0x118619e1 */
  if (!C.zf) goto L_118619e1;
  /* 11861947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186194a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186194e jne 0x11861989 */
  if (!C.zf) goto L_11861989;
  /* 11861950 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11861952 call 0x1185c0e0 */
  push32(0x11861957u); f_1185c0e0();
  /* 11861957 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186195a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186195d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861961 jne 0x1186197f */
  if (!C.zf) goto L_1186197f;
  /* 11861963 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861966 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861969 push edx */
  push32((uint32_t)(EDX));
  /* 1186196a call dword ptr [0x11887370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887370))), 0x11861970u);
  /* 11861970 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861973 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11861976 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861979 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186197c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1186197f:;
  /* 1186197f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11861981 call 0x1185c180 */
  push32(0x11861986u); f_1185c180();
  /* 11861986 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861989:;
  /* 11861989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186198c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186198f push eax */
  push32((uint32_t)(EAX));
  /* 11861990 call dword ptr [0x11887360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887360))), 0x11861996u);
  /* 11861996 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861999 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1186199d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 118619a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118619a2 je 0x118619b6 */
  if (C.zf) goto L_118619b6;
  /* 118619a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118619a7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118619aa push eax */
  push32((uint32_t)(EAX));
  /* 118619ab call dword ptr [0x1188735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188735c))), 0x118619b1u);
  /* 118619b1 jmp 0x11861914 */
  goto L_11861914;
L_118619b6:;
  /* 118619b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118619b9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 118619bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118619c2 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 118619c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118619c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118619cb sub eax, dword ptr [edx*4 + 0x11886260] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x11886260))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118619d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118619d3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 118619d8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 118619da add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118619dc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118619df jmp 0x118619e6 */
  goto L_118619e6;
L_118619e1:;
  /* 118619e1 jmp 0x11861914 */
  goto L_11861914;
L_118619e6:;
  /* 118619e6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118619ea je 0x118619f1 */
  if (C.zf) goto L_118619f1;
  /* 118619ec jmp 0x11861a90 */
  goto L_11861a90;
L_118619f1:;
  /* 118619f1 jmp 0x11861a8b */
  goto L_11861a8b;
L_118619f6:;
  /* 118619f6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 118619f8 push 0x11880994 */
  push32((uint32_t)(0x11880994u));
  /* 118619fd push 2 */
  push32((uint32_t)(0x2u));
  /* 118619ff push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11861a04 call 0x118586e0 */
  push32(0x11861a09u); f_118586e0();
  /* 11861a09 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861a0c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11861a0f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861a13 je 0x11861a89 */
  if (C.zf) goto L_11861a89;
  /* 11861a15 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861a18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a1b mov dword ptr [eax*4 + 0x11886260], ecx */
  w32((uint32_t)(EAX*4 + 0x11886260), (ECX));
  /* 11861a22 mov edx, dword ptr [0x1188639c] */
  EDX = (r32((uint32_t)(0x1188639c)));
  /* 11861a28 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861a2b mov dword ptr [0x1188639c], edx */
  w32((uint32_t)(0x1188639c), (EDX));
  /* 11861a31 jmp 0x11861a3c */
  goto L_11861a3c;
L_11861a33:;
  /* 11861a33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a36 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861a39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11861a3c:;
  /* 11861a3c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861a3f mov edx, dword ptr [ecx*4 + 0x11886260] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861a46 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861a4c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861a4f jae 0x11861a74 */
  if (!C.cf) goto L_11861a74;
  /* 11861a51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a54 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11861a58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a5b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11861a61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a64 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11861a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861a6b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11861a72 jmp 0x11861a33 */
  goto L_11861a33;
L_11861a74:;
  /* 11861a74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11861a77 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861a7a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11861a7d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861a80 push edx */
  push32((uint32_t)(EDX));
  /* 11861a81 call 0x11861dd0 */
  push32(0x11861a86u); f_11861dd0();
  /* 11861a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861a89:;
  /* 11861a89 jmp 0x11861a90 */
  goto L_11861a90;
L_11861a8b:;
  /* 11861a8b jmp 0x118618e1 */
  goto L_118618e1;
L_11861a90:;
  /* 11861a90 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 11861a92 call 0x1185c180 */
  push32(0x11861a97u); f_1185c180();
  /* 11861a97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861a9a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861a9d pop esi */
  ESI = (pop32());
  /* 11861a9e mov esp, ebp */
  ESP = (EBP);
  /* 11861aa0 pop ebp */
  EBP = (pop32());
  /* 11861aa1 ret  */
  ESPCHK(0x118618c0u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x11861ab0 (183 bytes, 57 insns) */
void f_11861ab0(void) {
  FTRACE(0x11861ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11861ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11861ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 11861ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861ab7 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861abd jae 0x11861b4a */
  if (!C.cf) goto L_11861b4a;
  /* 11861ac3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861ac6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861ac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861acc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11861acf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861ad2 mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861ad9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861add jne 0x11861b4a */
  if (!C.zf) goto L_11861b4a;
  /* 11861adf cmp dword ptr [0x11884874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861ae6 jne 0x11861b2a */
  if (!C.zf) goto L_11861b2a;
  /* 11861ae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861aeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11861aee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861af2 je 0x11861b02 */
  if (C.zf) goto L_11861b02;
  /* 11861af4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861af8 je 0x11861b10 */
  if (C.zf) goto L_11861b10;
  /* 11861afa cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861afe je 0x11861b1e */
  if (C.zf) goto L_11861b1e;
  /* 11861b00 jmp 0x11861b2a */
  goto L_11861b2a;
L_11861b02:;
  /* 11861b02 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861b05 push edx */
  push32((uint32_t)(EDX));
  /* 11861b06 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11861b08 call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861b0eu);
  /* 11861b0e jmp 0x11861b2a */
  goto L_11861b2a;
L_11861b10:;
  /* 11861b10 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861b13 push eax */
  push32((uint32_t)(EAX));
  /* 11861b14 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11861b16 call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861b1cu);
  /* 11861b1c jmp 0x11861b2a */
  goto L_11861b2a;
L_11861b1e:;
  /* 11861b1e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861b21 push ecx */
  push32((uint32_t)(ECX));
  /* 11861b22 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11861b24 call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861b2au);
L_11861b2a:;
  /* 11861b2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861b2d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11861b30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861b33 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11861b36 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861b39 mov ecx, dword ptr [edx*4 + 0x11886260] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 11861b40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861b43 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 11861b46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11861b48 jmp 0x11861b63 */
  goto L_11861b63;
L_11861b4a:;
  /* 11861b4a call 0x118605b0 */
  push32(0x11861b4fu); f_118605b0();
  /* 11861b4f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11861b55 call 0x118605c0 */
  push32(0x11861b5au); f_118605c0();
  /* 11861b5a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11861b60 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11861b63:;
  /* 11861b63 mov esp, ebp */
  ESP = (EBP);
  /* 11861b65 pop ebp */
  EBP = (pop32());
  /* 11861b66 ret  */
  ESPCHK(0x11861ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x11861b70 (216 bytes, 63 insns) */
void f_11861b70(void) {
  FTRACE(0x11861b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861b70 push ebp */
  push32((uint32_t)(EBP));
  /* 11861b71 mov ebp, esp */
  EBP = (ESP);
  /* 11861b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11861b74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861b77 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861b7d jae 0x11861c2b */
  if (!C.cf) goto L_11861c2b;
  /* 11861b83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861b86 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861b89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861b8c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11861b8f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861b92 mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861b99 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11861b9e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11861ba1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11861ba3 je 0x11861c2b */
  if (C.zf) goto L_11861c2b;
  /* 11861ba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861bac sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11861baf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861bb2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11861bb5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861bb8 mov ecx, dword ptr [edx*4 + 0x11886260] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 11861bbf cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861bc3 je 0x11861c2b */
  if (C.zf) goto L_11861c2b;
  /* 11861bc5 cmp dword ptr [0x11884874], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11884874))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861bcc jne 0x11861c0a */
  if (!C.zf) goto L_11861c0a;
  /* 11861bce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861bd1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11861bd4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861bd8 je 0x11861be8 */
  if (C.zf) goto L_11861be8;
  /* 11861bda cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861bde je 0x11861bf4 */
  if (C.zf) goto L_11861bf4;
  /* 11861be0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861be4 je 0x11861c00 */
  if (C.zf) goto L_11861c00;
  /* 11861be6 jmp 0x11861c0a */
  goto L_11861c0a;
L_11861be8:;
  /* 11861be8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11861bea push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 11861bec call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861bf2u);
  /* 11861bf2 jmp 0x11861c0a */
  goto L_11861c0a;
L_11861bf4:;
  /* 11861bf4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11861bf6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 11861bf8 call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861bfeu);
  /* 11861bfe jmp 0x11861c0a */
  goto L_11861c0a;
L_11861c00:;
  /* 11861c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11861c02 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11861c04 call dword ptr [0x11887328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887328))), 0x11861c0au);
L_11861c0a:;
  /* 11861c0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c0d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861c10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c13 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861c16 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861c19 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861c20 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 11861c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11861c29 jmp 0x11861c44 */
  goto L_11861c44;
L_11861c2b:;
  /* 11861c2b call 0x118605b0 */
  push32(0x11861c30u); f_118605b0();
  /* 11861c30 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11861c36 call 0x118605c0 */
  push32(0x11861c3bu); f_118605c0();
  /* 11861c3b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11861c41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11861c44:;
  /* 11861c44 mov esp, ebp */
  ESP = (EBP);
  /* 11861c46 pop ebp */
  EBP = (pop32());
  /* 11861c47 ret  */
  ESPCHK(0x11861b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c50 @ 0x11861c50 (102 bytes, 30 insns) */
void f_11861c50(void) {
  FTRACE(0x11861c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11861c51 mov ebp, esp */
  EBP = (ESP);
  /* 11861c53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c56 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861c5c jae 0x11861c9b */
  if (!C.cf) goto L_11861c9b;
  /* 11861c5e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c61 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11861c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c67 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11861c6a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861c6d mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11861c74 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11861c79 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11861c7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11861c7e je 0x11861c9b */
  if (C.zf) goto L_11861c9b;
  /* 11861c80 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c83 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11861c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861c89 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11861c8c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861c8f mov ecx, dword ptr [edx*4 + 0x11886260] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11886260)));
  /* 11861c96 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 11861c99 jmp 0x11861cb4 */
  goto L_11861cb4;
L_11861c9b:;
  /* 11861c9b call 0x118605b0 */
  push32(0x11861ca0u); f_118605b0();
  /* 11861ca0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11861ca6 call 0x118605c0 */
  push32(0x11861cabu); f_118605c0();
  /* 11861cab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11861cb1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11861cb4:;
  /* 11861cb4 pop ebp */
  EBP = (pop32());
  /* 11861cb5 ret  */
  ESPCHK(0x11861c50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cc0 @ 0x11861cc0 (260 bytes, 83 insns) */
void f_11861cc0(void) {
  FTRACE(0x11861cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11861cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11861cc3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11861cc6 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 11861cca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861ccd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11861cd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11861cd2 je 0x11861cdd */
  if (C.zf) goto L_11861cdd;
  /* 11861cd4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861cd7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11861cda mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_11861cdd:;
  /* 11861cdd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861ce0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11861ce6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11861ce8 je 0x11861cf2 */
  if (C.zf) goto L_11861cf2;
  /* 11861cea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861ced or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 11861cef mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_11861cf2:;
  /* 11861cf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11861cf5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11861cfb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11861cfd je 0x11861d08 */
  if (C.zf) goto L_11861d08;
  /* 11861cff mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861d02 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11861d05 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11861d08:;
  /* 11861d08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861d0b push eax */
  push32((uint32_t)(EAX));
  /* 11861d0c call dword ptr [0x118873a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873a4))), 0x11861d12u);
  /* 11861d12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11861d15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861d19 jne 0x11861d32 */
  if (!C.zf) goto L_11861d32;
  /* 11861d1b call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11861d21u);
  /* 11861d21 push eax */
  push32((uint32_t)(EAX));
  /* 11861d22 call 0x11860510 */
  push32(0x11861d27u); f_11860510();
  /* 11861d27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861d2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861d2d jmp 0x11861dc0 */
  goto L_11861dc0;
L_11861d32:;
  /* 11861d32 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861d36 jne 0x11861d43 */
  if (!C.zf) goto L_11861d43;
  /* 11861d38 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861d3b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11861d3e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11861d41 jmp 0x11861d52 */
  goto L_11861d52;
L_11861d43:;
  /* 11861d43 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861d47 jne 0x11861d52 */
  if (!C.zf) goto L_11861d52;
  /* 11861d49 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861d4c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11861d4f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_11861d52:;
  /* 11861d52 call 0x118618c0 */
  push32(0x11861d57u); f_118618c0();
  /* 11861d57 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11861d5a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861d5e jne 0x11861d7b */
  if (!C.zf) goto L_11861d7b;
  /* 11861d60 call 0x118605b0 */
  push32(0x11861d65u); f_118605b0();
  /* 11861d65 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 11861d6b call 0x118605c0 */
  push32(0x11861d70u); f_118605c0();
  /* 11861d70 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11861d76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861d79 jmp 0x11861dc0 */
  goto L_11861dc0;
L_11861d7b:;
  /* 11861d7b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861d7e push eax */
  push32((uint32_t)(EAX));
  /* 11861d7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861d82 push ecx */
  push32((uint32_t)(ECX));
  /* 11861d83 call 0x11861ab0 */
  push32(0x11861d88u); f_11861ab0();
  /* 11861d88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861d8b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861d8e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 11861d91 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11861d94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861d97 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861d9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861d9d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861da0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861da3 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861daa mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11861dad mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 11861db1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861db4 push ecx */
  push32((uint32_t)(ECX));
  /* 11861db5 call 0x11861e60 */
  push32(0x11861dbau); f_11861e60();
  /* 11861dba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861dbd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11861dc0:;
  /* 11861dc0 mov esp, ebp */
  ESP = (EBP);
  /* 11861dc2 pop ebp */
  EBP = (pop32());
  /* 11861dc3 ret  */
  ESPCHK(0x11861cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011dd0 @ 0x11861dd0 (134 bytes, 44 insns) */
void f_11861dd0(void) {
  FTRACE(0x11861dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11861dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11861dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11861dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861dd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861dda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861ddd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861de0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861de3 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861dea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861dec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11861def mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861df2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861df6 jne 0x11861e31 */
  if (!C.zf) goto L_11861e31;
  /* 11861df8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11861dfa call 0x1185c0e0 */
  push32(0x11861dffu); f_1185c0e0();
  /* 11861dff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861e02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861e05 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861e09 jne 0x11861e27 */
  if (!C.zf) goto L_11861e27;
  /* 11861e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861e0e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861e11 push edx */
  push32((uint32_t)(EDX));
  /* 11861e12 call dword ptr [0x11887370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887370))), 0x11861e18u);
  /* 11861e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861e1b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11861e1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861e21 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861e24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_11861e27:;
  /* 11861e27 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11861e29 call 0x1185c180 */
  push32(0x11861e2eu); f_1185c180();
  /* 11861e2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11861e31:;
  /* 11861e31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861e34 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861e37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861e3a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861e3d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861e40 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861e47 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11861e4b push eax */
  push32((uint32_t)(EAX));
  /* 11861e4c call dword ptr [0x11887360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887360))), 0x11861e52u);
  /* 11861e52 mov esp, ebp */
  ESP = (EBP);
  /* 11861e54 pop ebp */
  EBP = (pop32());
  /* 11861e55 ret  */
  ESPCHK(0x11861dd0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x11861e60 (38 bytes, 13 insns) */
void f_11861e60(void) {
  FTRACE(0x11861e60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861e60 push ebp */
  push32((uint32_t)(EBP));
  /* 11861e61 mov ebp, esp */
  EBP = (ESP);
  /* 11861e63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861e66 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11861e69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861e6c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11861e6f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11861e72 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11861e79 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 11861e7d push eax */
  push32((uint32_t)(EAX));
  /* 11861e7e call dword ptr [0x1188735c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188735c))), 0x11861e84u);
  /* 11861e84 pop ebp */
  EBP = (pop32());
  /* 11861e85 ret  */
  ESPCHK(0x11861e60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e90 @ 0x11861e90 (218 bytes, 63 insns) */
void f_11861e90(void) {
  FTRACE(0x11861e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11861e91 mov ebp, esp */
  EBP = (ESP);
  /* 11861e93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11861e96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11861e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11861e9f call 0x1185c0e0 */
  push32(0x11861ea4u); f_1185c0e0();
  /* 11861ea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861ea7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 11861eae jmp 0x11861eb9 */
  goto L_11861eb9;
L_11861eb0:;
  /* 11861eb0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861eb3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861eb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11861eb9:;
  /* 11861eb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861ebc cmp ecx, dword ptr [0x11885f60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11885f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861ec2 jge 0x11861f59 */
  if ((C.sf==C.of)) goto L_11861f59;
  /* 11861ec8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861ecb mov eax, dword ptr [0x11884c10] */
  EAX = (r32((uint32_t)(0x11884c10)));
  /* 11861ed0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861ed4 je 0x11861f54 */
  if (C.zf) goto L_11861f54;
  /* 11861ed6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861ed9 mov edx, dword ptr [0x11884c10] */
  EDX = (r32((uint32_t)(0x11884c10)));
  /* 11861edf mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11861ee2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11861ee5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11861eeb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11861eed je 0x11861f11 */
  if (C.zf) goto L_11861f11;
  /* 11861eef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861ef2 mov eax, dword ptr [0x11884c10] */
  EAX = (r32((uint32_t)(0x11884c10)));
  /* 11861ef7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11861efa push ecx */
  push32((uint32_t)(ECX));
  /* 11861efb call 0x11862c80 */
  push32(0x11861f00u); f_11862c80();
  /* 11861f00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f03 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861f06 je 0x11861f11 */
  if (C.zf) goto L_11861f11;
  /* 11861f08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861f0b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11861f11:;
  /* 11861f11 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861f15 jl 0x11861f54 */
  if ((C.sf!=C.of)) goto L_11861f54;
  /* 11861f17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861f1a mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 11861f20 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11861f23 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f26 push edx */
  push32((uint32_t)(EDX));
  /* 11861f27 call dword ptr [0x1188739c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188739c))), 0x11861f2du);
  /* 11861f2d push 2 */
  push32((uint32_t)(0x2u));
  /* 11861f2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861f32 mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 11861f38 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11861f3b push edx */
  push32((uint32_t)(EDX));
  /* 11861f3c call 0x11859170 */
  push32(0x11861f41u); f_11859170();
  /* 11861f41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11861f47 mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 11861f4d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11861f54:;
  /* 11861f54 jmp 0x11861eb0 */
  goto L_11861eb0;
L_11861f59:;
  /* 11861f59 push 2 */
  push32((uint32_t)(0x2u));
  /* 11861f5b call 0x1185c180 */
  push32(0x11861f60u); f_1185c180();
  /* 11861f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11861f66 mov esp, ebp */
  ESP = (EBP);
  /* 11861f68 pop ebp */
  EBP = (pop32());
  /* 11861f69 ret  */
  ESPCHK(0x11861e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f70 @ 0x11861f70 (68 bytes, 26 insns) */
void f_11861f70(void) {
  FTRACE(0x11861f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11861f71 mov ebp, esp */
  EBP = (ESP);
  /* 11861f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11861f74 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11861f78 jne 0x11861f86 */
  if (!C.zf) goto L_11861f86;
  /* 11861f7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11861f7c call 0x118620e0 */
  push32(0x11861f81u); f_118620e0();
  /* 11861f81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f84 jmp 0x11861fb0 */
  goto L_11861fb0;
L_11861f86:;
  /* 11861f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861f89 push eax */
  push32((uint32_t)(EAX));
  /* 11861f8a call 0x118614f0 */
  push32(0x11861f8fu); f_118614f0();
  /* 11861f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861f95 push ecx */
  push32((uint32_t)(ECX));
  /* 11861f96 call 0x11861fc0 */
  push32(0x11861f9bu); f_11861fc0();
  /* 11861f9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861f9e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11861fa1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861fa4 push edx */
  push32((uint32_t)(EDX));
  /* 11861fa5 call 0x11861560 */
  push32(0x11861faau); f_11861560();
  /* 11861faa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11861fb0:;
  /* 11861fb0 mov esp, ebp */
  ESP = (EBP);
  /* 11861fb2 pop ebp */
  EBP = (pop32());
  /* 11861fb3 ret  */
  ESPCHK(0x11861f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fc0 @ 0x11861fc0 (65 bytes, 26 insns) */
void f_11861fc0(void) {
  FTRACE(0x11861fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11861fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11861fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11861fc3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861fc6 push eax */
  push32((uint32_t)(EAX));
  /* 11861fc7 call 0x11862010 */
  push32(0x11861fccu); f_11862010();
  /* 11861fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861fcf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11861fd1 je 0x11861fd8 */
  if (C.zf) goto L_11861fd8;
  /* 11861fd3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11861fd6 jmp 0x11861fff */
  goto L_11861fff;
L_11861fd8:;
  /* 11861fd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861fdb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11861fde and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 11861fe4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11861fe6 je 0x11861ffd */
  if (C.zf) goto L_11861ffd;
  /* 11861fe8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11861feb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11861fee push ecx */
  push32((uint32_t)(ECX));
  /* 11861fef call 0x11862dd0 */
  push32(0x11861ff4u); f_11862dd0();
  /* 11861ff4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11861ff7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11861ff9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11861ffb jmp 0x11861fff */
  goto L_11861fff;
L_11861ffd:;
  /* 11861ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11861fff:;
  /* 11861fff pop ebp */
  EBP = (pop32());
  /* 11862000 ret  */
  ESPCHK(0x11861fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012010 @ 0x11862010 (183 bytes, 62 insns) */
void f_11862010(void) {
  FTRACE(0x11862010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862010 push ebp */
  push32((uint32_t)(EBP));
  /* 11862011 mov ebp, esp */
  EBP = (ESP);
  /* 11862013 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862016 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186201d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862020 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11862023 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862026 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11862029 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1186202c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186202f jne 0x118620ab */
  if (!C.zf) goto L_118620ab;
  /* 11862031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862034 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11862037 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1186203d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186203f je 0x118620ab */
  if (C.zf) goto L_118620ab;
  /* 11862041 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862044 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862047 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11862049 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186204c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186204f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862053 jle 0x118620ab */
  if ((C.zf||C.sf!=C.of)) goto L_118620ab;
  /* 11862055 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862058 push edx */
  push32((uint32_t)(EDX));
  /* 11862059 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186205c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1186205f push ecx */
  push32((uint32_t)(ECX));
  /* 11862060 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862063 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11862066 push eax */
  push32((uint32_t)(EAX));
  /* 11862067 call 0x11860f80 */
  push32(0x1186206cu); f_11860f80();
  /* 1186206c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186206f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862072 jne 0x11862095 */
  if (!C.zf) goto L_11862095;
  /* 11862074 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862077 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1186207a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11862080 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11862082 je 0x11862093 */
  if (C.zf) goto L_11862093;
  /* 11862084 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862087 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1186208a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1186208d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862090 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_11862093:;
  /* 11862093 jmp 0x118620ab */
  goto L_118620ab;
L_11862095:;
  /* 11862095 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862098 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1186209b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1186209e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118620a1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 118620a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_118620ab:;
  /* 118620ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118620ae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118620b1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 118620b4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 118620b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118620b9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 118620c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118620c3 mov esp, ebp */
  ESP = (EBP);
  /* 118620c5 pop ebp */
  EBP = (pop32());
  /* 118620c6 ret  */
  ESPCHK(0x11862010u, _esp0);
  ESP += 4; return;
}

/* FUN_100120d0 @ 0x118620d0 (15 bytes, 7 insns) */
void f_118620d0(void) {
  FTRACE(0x118620d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118620d0 push ebp */
  push32((uint32_t)(EBP));
  /* 118620d1 mov ebp, esp */
  EBP = (ESP);
  /* 118620d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118620d5 call 0x118620e0 */
  push32(0x118620dau); f_118620e0();
  /* 118620da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118620dd pop ebp */
  EBP = (pop32());
  /* 118620de ret  */
  ESPCHK(0x118620d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100120e0 @ 0x118620e0 (319 bytes, 94 insns) */
void f_118620e0(void) {
  FTRACE(0x118620e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118620e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118620e1 mov ebp, esp */
  EBP = (ESP);
  /* 118620e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118620e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 118620ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118620f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118620f6 call 0x1185c0e0 */
  push32(0x118620fbu); f_1185c0e0();
  /* 118620fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118620fe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11862105 jmp 0x11862110 */
  goto L_11862110;
L_11862107:;
  /* 11862107 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186210a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186210d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11862110:;
  /* 11862110 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862113 cmp ecx, dword ptr [0x11885f60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11885f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862119 jge 0x11862203 */
  if ((C.sf==C.of)) goto L_11862203;
  /* 1186211f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862122 mov eax, dword ptr [0x11884c10] */
  EAX = (r32((uint32_t)(0x11884c10)));
  /* 11862127 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186212b je 0x118621fe */
  if (C.zf) goto L_118621fe;
  /* 11862131 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862134 mov edx, dword ptr [0x11884c10] */
  EDX = (r32((uint32_t)(0x11884c10)));
  /* 1186213a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1186213d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11862140 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 11862146 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11862148 je 0x118621fe */
  if (C.zf) goto L_118621fe;
  /* 1186214e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862151 mov eax, dword ptr [0x11884c10] */
  EAX = (r32((uint32_t)(0x11884c10)));
  /* 11862156 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11862159 push ecx */
  push32((uint32_t)(ECX));
  /* 1186215a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186215d push edx */
  push32((uint32_t)(EDX));
  /* 1186215e call 0x11861530 */
  push32(0x11862163u); f_11861530();
  /* 11862163 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862166 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862169 mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 1186216f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11862172 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11862175 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1186217a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186217c je 0x118621e5 */
  if (C.zf) goto L_118621e5;
  /* 1186217e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862182 jne 0x118621a9 */
  if (!C.zf) goto L_118621a9;
  /* 11862184 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862187 mov edx, dword ptr [0x11884c10] */
  EDX = (r32((uint32_t)(0x11884c10)));
  /* 1186218d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11862190 push eax */
  push32((uint32_t)(EAX));
  /* 11862191 call 0x11861fc0 */
  push32(0x11862196u); f_11861fc0();
  /* 11862196 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862199 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186219c je 0x118621a7 */
  if (C.zf) goto L_118621a7;
  /* 1186219e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118621a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118621a4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_118621a7:;
  /* 118621a7 jmp 0x118621e5 */
  goto L_118621e5;
L_118621a9:;
  /* 118621a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118621ad jne 0x118621e5 */
  if (!C.zf) goto L_118621e5;
  /* 118621af mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118621b2 mov eax, dword ptr [0x11884c10] */
  EAX = (r32((uint32_t)(0x11884c10)));
  /* 118621b7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118621ba mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118621bd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 118621c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118621c2 je 0x118621e5 */
  if (C.zf) goto L_118621e5;
  /* 118621c4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118621c7 mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 118621cd mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118621d0 push edx */
  push32((uint32_t)(EDX));
  /* 118621d1 call 0x11861fc0 */
  push32(0x118621d6u); f_11861fc0();
  /* 118621d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118621d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118621dc jne 0x118621e5 */
  if (!C.zf) goto L_118621e5;
  /* 118621de mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_118621e5:;
  /* 118621e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118621e8 mov ecx, dword ptr [0x11884c10] */
  ECX = (r32((uint32_t)(0x11884c10)));
  /* 118621ee mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 118621f1 push edx */
  push32((uint32_t)(EDX));
  /* 118621f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118621f5 push eax */
  push32((uint32_t)(EAX));
  /* 118621f6 call 0x118615a0 */
  push32(0x118621fbu); f_118615a0();
  /* 118621fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118621fe:;
  /* 118621fe jmp 0x11862107 */
  goto L_11862107;
L_11862203:;
  /* 11862203 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862205 call 0x1185c180 */
  push32(0x1186220au); f_1185c180();
  /* 1186220a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186220d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862211 jne 0x11862218 */
  if (!C.zf) goto L_11862218;
  /* 11862213 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862216 jmp 0x1186221b */
  goto L_1186221b;
L_11862218:;
  /* 11862218 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1186221b:;
  /* 1186221b mov esp, ebp */
  ESP = (EBP);
  /* 1186221d pop ebp */
  EBP = (pop32());
  /* 1186221e ret  */
  ESPCHK(0x118620e0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11862220 (15 bytes, 7 insns) */
void f_11862220(void) {
  FTRACE(0x11862220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862220 push ebp */
  push32((uint32_t)(EBP));
  /* 11862221 mov ebp, esp */
  EBP = (ESP);
  /* 11862223 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862225 call 0x11857650 */
  push32(0x1186222au); f_11857650();
  /* 1186222a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186222d pop ebp */
  EBP = (pop32());
  /* 1186222e ret  */
  ESPCHK(0x11862220u, _esp0);
  ESP += 4; return;
}

/* FUN_10012230 @ 0x11862230 (1007 bytes, 269 insns) */
void f_11862230(void) {
  FTRACE(0x11862230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862230 push ebp */
  push32((uint32_t)(EBP));
  /* 11862231 mov ebp, esp */
  EBP = (ESP);
  /* 11862233 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186223d jl 0x11862245 */
  if ((C.sf!=C.of)) goto L_11862245;
  /* 1186223f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862243 jle 0x1186224c */
  if ((C.zf||C.sf!=C.of)) goto L_1186224c;
L_11862245:;
  /* 11862245 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862247 jmp 0x1186261b */
  goto L_1186261b;
L_1186224c:;
  /* 1186224c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1186224e call 0x1185c0e0 */
  push32(0x11862253u); f_1185c0e0();
  /* 11862253 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862256 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1186225d mov eax, dword ptr [0x11884bfc] */
  EAX = (r32((uint32_t)(0x11884bfc)));
  /* 11862262 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862265 mov dword ptr [0x11884bfc], eax */
  w32((uint32_t)(0x11884bfc), (EAX));
L_1186226a:;
  /* 1186226a cmp dword ptr [0x11884c0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884c0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862271 je 0x1186227d */
  if (C.zf) goto L_1186227d;
  /* 11862273 push 1 */
  push32((uint32_t)(0x1u));
  /* 11862275 call dword ptr [0x11887318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887318))), 0x1186227bu);
  /* 1186227b jmp 0x1186226a */
  goto L_1186226a;
L_1186227d:;
  /* 1186227d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862281 je 0x118622c1 */
  if (C.zf) goto L_118622c1;
  /* 11862283 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862287 je 0x118622a1 */
  if (C.zf) goto L_118622a1;
  /* 11862289 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186228c push ecx */
  push32((uint32_t)(ECX));
  /* 1186228d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862290 push edx */
  push32((uint32_t)(EDX));
  /* 11862291 call 0x11862620 */
  push32(0x11862296u); f_11862620();
  /* 11862296 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862299 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1186229f jmp 0x118622b3 */
  goto L_118622b3;
L_118622a1:;
  /* 118622a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118622a4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118622a7 mov ecx, dword ptr [eax + 0x118834dc] */
  ECX = (r32((uint32_t)(EAX + 0x118834dc)));
  /* 118622ad mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_118622b3:;
  /* 118622b3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 118622b9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118622bc jmp 0x118625fb */
  goto L_118625fb;
L_118622c1:;
  /* 118622c1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 118622c8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 118622cf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118622d3 je 0x118625f3 */
  if (C.zf) goto L_118625f3;
  /* 118622d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 118622dc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118622df cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118622e2 jne 0x11862504 */
  if (!C.zf) goto L_11862504;
  /* 118622e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118622eb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118622ef cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118622f2 jne 0x11862504 */
  if (!C.zf) goto L_11862504;
  /* 118622f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118622fb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 118622ff cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862302 jne 0x11862504 */
  if (!C.zf) goto L_11862504;
  /* 11862308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186230b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11862311:;
  /* 11862311 push 0x118809e4 */
  push32((uint32_t)(0x118809e4u));
  /* 11862316 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1186231c push ecx */
  push32((uint32_t)(ECX));
  /* 1186231d call 0x11864480 */
  push32(0x11862322u); f_11864480();
  /* 11862322 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862325 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1186232b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862332 je 0x1186235d */
  if (C.zf) goto L_1186235d;
  /* 11862334 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1186233a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862340 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11862346 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186234d je 0x1186235d */
  if (C.zf) goto L_1186235d;
  /* 1186234f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11862355 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11862358 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186235b jne 0x11862383 */
  if (!C.zf) goto L_11862383;
L_1186235d:;
  /* 1186235d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862361 je 0x1186237c */
  if (C.zf) goto L_1186237c;
  /* 11862363 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11862365 call 0x1185c180 */
  push32(0x1186236au); f_1185c180();
  /* 1186236a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186236d mov edx, dword ptr [0x11884bfc] */
  EDX = (r32((uint32_t)(0x11884bfc)));
  /* 11862373 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862376 mov dword ptr [0x11884bfc], edx */
  w32((uint32_t)(0x11884bfc), (EDX));
L_1186237c:;
  /* 1186237c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186237e jmp 0x1186261b */
  goto L_1186261b;
L_11862383:;
  /* 11862383 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1186238a jmp 0x11862395 */
  goto L_11862395;
L_1186238c:;
  /* 1186238c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186238f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862392 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11862395:;
  /* 11862395 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862399 jg 0x118623e3 */
  if ((!C.zf&&C.sf==C.of)) goto L_118623e3;
  /* 1186239b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 118623a1 push ecx */
  push32((uint32_t)(ECX));
  /* 118623a2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118623a8 push edx */
  push32((uint32_t)(EDX));
  /* 118623a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 118623ac imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118623af mov ecx, dword ptr [eax + 0x118834d8] */
  ECX = (r32((uint32_t)(EAX + 0x118834d8)));
  /* 118623b5 push ecx */
  push32((uint32_t)(ECX));
  /* 118623b6 call 0x11864440 */
  push32(0x118623bbu); f_11864440();
  /* 118623bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118623be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118623c0 jne 0x118623e1 */
  if (!C.zf) goto L_118623e1;
  /* 118623c2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118623c5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118623c8 mov eax, dword ptr [edx + 0x118834d8] */
  EAX = (r32((uint32_t)(EDX + 0x118834d8)));
  /* 118623ce push eax */
  push32((uint32_t)(EAX));
  /* 118623cf call 0x1185b510 */
  push32(0x118623d4u); f_1185b510();
  /* 118623d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118623d7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118623dd jne 0x118623e1 */
  if (!C.zf) goto L_118623e1;
  /* 118623df jmp 0x118623e3 */
  goto L_118623e3;
L_118623e1:;
  /* 118623e1 jmp 0x1186238c */
  goto L_1186238c;
L_118623e3:;
  /* 118623e3 push 0x118809e0 */
  push32((uint32_t)(0x118809e0u));
  /* 118623e8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118623ee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118623f1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 118623f7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118623fd push edx */
  push32((uint32_t)(EDX));
  /* 118623fe call 0x11864400 */
  push32(0x11862403u); f_11864400();
  /* 11862403 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862406 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1186240c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862413 jne 0x11862449 */
  if (!C.zf) goto L_11862449;
  /* 11862415 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1186241b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1186241e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862421 je 0x11862449 */
  if (C.zf) goto L_11862449;
  /* 11862423 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862427 je 0x11862442 */
  if (C.zf) goto L_11862442;
  /* 11862429 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1186242b call 0x1185c180 */
  push32(0x11862430u); f_1185c180();
  /* 11862430 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862433 mov edx, dword ptr [0x11884bfc] */
  EDX = (r32((uint32_t)(0x11884bfc)));
  /* 11862439 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186243c mov dword ptr [0x11884bfc], edx */
  w32((uint32_t)(0x11884bfc), (EDX));
L_11862442:;
  /* 11862442 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862444 jmp 0x1186261b */
  goto L_1186261b;
L_11862449:;
  /* 11862449 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186244d jg 0x1186249a */
  if ((!C.zf&&C.sf==C.of)) goto L_1186249a;
  /* 1186244f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11862455 push eax */
  push32((uint32_t)(EAX));
  /* 11862456 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1186245c push ecx */
  push32((uint32_t)(ECX));
  /* 1186245d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11862463 push edx */
  push32((uint32_t)(EDX));
  /* 11862464 call 0x1185bf00 */
  push32(0x11862469u); f_1185bf00();
  /* 11862469 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186246c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11862472 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1186247a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11862480 push ecx */
  push32((uint32_t)(ECX));
  /* 11862481 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11862484 push edx */
  push32((uint32_t)(EDX));
  /* 11862485 call 0x11862620 */
  push32(0x1186248au); f_11862620();
  /* 1186248a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186248d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186248f je 0x1186249a */
  if (C.zf) goto L_1186249a;
  /* 11862491 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862494 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862497 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1186249a:;
  /* 1186249a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 118624a0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118624a6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 118624ac mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118624b2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118624b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118624b7 je 0x118624c8 */
  if (C.zf) goto L_118624c8;
  /* 118624b9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118624bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118624c2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_118624c8:;
  /* 118624c8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 118624ce movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 118624d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118624d3 jne 0x11862311 */
  if (!C.zf) goto L_11862311;
  /* 118624d9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118624dd je 0x118624ec */
  if (C.zf) goto L_118624ec;
  /* 118624df call 0x118627c0 */
  push32(0x118624e4u); f_118627c0();
  /* 118624e4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 118624ea jmp 0x118624f6 */
  goto L_118624f6;
L_118624ec:;
  /* 118624ec mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_118624f6:;
  /* 118624f6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 118624fc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118624ff jmp 0x118625f1 */
  goto L_118625f1;
L_11862504:;
  /* 11862504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862507 push edx */
  push32((uint32_t)(EDX));
  /* 11862508 push 0 */
  push32((uint32_t)(0x0u));
  /* 1186250a push 0 */
  push32((uint32_t)(0x0u));
  /* 1186250c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11862512 push eax */
  push32((uint32_t)(EAX));
  /* 11862513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862516 push ecx */
  push32((uint32_t)(ECX));
  /* 11862517 call 0x118628c0 */
  push32(0x1186251cu); f_118628c0();
  /* 1186251c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186251f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11862522 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862526 je 0x118625f1 */
  if (C.zf) goto L_118625f1;
  /* 1186252c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11862533 jmp 0x1186253e */
  goto L_1186253e;
L_11862535:;
  /* 11862535 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11862538 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186253b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1186253e:;
  /* 1186253e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862542 jg 0x118625a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_118625a0;
  /* 11862544 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862548 je 0x1186259e */
  if (C.zf) goto L_1186259e;
  /* 1186254a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186254d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862550 mov ecx, dword ptr [eax + 0x118834dc] */
  ECX = (r32((uint32_t)(EAX + 0x118834dc)));
  /* 11862556 push ecx */
  push32((uint32_t)(ECX));
  /* 11862557 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1186255d push edx */
  push32((uint32_t)(EDX));
  /* 1186255e call 0x11864370 */
  push32(0x11862563u); f_11864370();
  /* 11862563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862566 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862568 je 0x11862595 */
  if (C.zf) goto L_11862595;
  /* 1186256a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11862570 push eax */
  push32((uint32_t)(EAX));
  /* 11862571 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11862574 push ecx */
  push32((uint32_t)(ECX));
  /* 11862575 call 0x11862620 */
  push32(0x1186257au); f_11862620();
  /* 1186257a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186257d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186257f je 0x1186258c */
  if (C.zf) goto L_1186258c;
  /* 11862581 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862584 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862587 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1186258a jmp 0x11862593 */
  goto L_11862593;
L_1186258c:;
  /* 1186258c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11862593:;
  /* 11862593 jmp 0x1186259e */
  goto L_1186259e;
L_11862595:;
  /* 11862595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862598 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186259b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1186259e:;
  /* 1186259e jmp 0x11862535 */
  goto L_11862535;
L_118625a0:;
  /* 118625a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118625a4 je 0x118625cb */
  if (C.zf) goto L_118625cb;
  /* 118625a6 call 0x118627c0 */
  push32(0x118625abu); f_118627c0();
  /* 118625ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118625ae push 2 */
  push32((uint32_t)(0x2u));
  /* 118625b0 mov ecx, dword ptr [0x118834dc] */
  ECX = (r32((uint32_t)(0x118834dc)));
  /* 118625b6 push ecx */
  push32((uint32_t)(ECX));
  /* 118625b7 call 0x11859170 */
  push32(0x118625bcu); f_11859170();
  /* 118625bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118625bf mov dword ptr [0x118834dc], 0 */
  w32((uint32_t)(0x118834dc), (0x0u));
  /* 118625c9 jmp 0x118625f1 */
  goto L_118625f1;
L_118625cb:;
  /* 118625cb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118625cf je 0x118625de */
  if (C.zf) goto L_118625de;
  /* 118625d1 call 0x118627c0 */
  push32(0x118625d6u); f_118627c0();
  /* 118625d6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 118625dc jmp 0x118625e8 */
  goto L_118625e8;
L_118625de:;
  /* 118625de mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_118625e8:;
  /* 118625e8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 118625ee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_118625f1:;
  /* 118625f1 jmp 0x118625fb */
  goto L_118625fb;
L_118625f3:;
  /* 118625f3 call 0x118627c0 */
  push32(0x118625f8u); f_118627c0();
  /* 118625f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118625fb:;
  /* 118625fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118625ff je 0x11862618 */
  if (C.zf) goto L_11862618;
  /* 11862601 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11862603 call 0x1185c180 */
  push32(0x11862608u); f_1185c180();
  /* 11862608 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186260b mov eax, dword ptr [0x11884bfc] */
  EAX = (r32((uint32_t)(0x11884bfc)));
  /* 11862610 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862613 mov dword ptr [0x11884bfc], eax */
  w32((uint32_t)(0x11884bfc), (EAX));
L_11862618:;
  /* 11862618 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1186261b:;
  /* 1186261b mov esp, ebp */
  ESP = (EBP);
  /* 1186261d pop ebp */
  EBP = (pop32());
  /* 1186261e ret  */
  ESPCHK(0x11862230u, _esp0);
  ESP += 4; return;
}

/* FUN_10012620 @ 0x11862620 (403 bytes, 117 insns) */
void f_11862620(void) {
  FTRACE(0x11862620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862620 push ebp */
  push32((uint32_t)(EBP));
  /* 11862621 mov ebp, esp */
  EBP = (ESP);
  /* 11862623 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862629 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186262c push eax */
  push32((uint32_t)(EAX));
  /* 1186262d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11862633 push ecx */
  push32((uint32_t)(ECX));
  /* 11862634 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1186263a push edx */
  push32((uint32_t)(EDX));
  /* 1186263b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11862641 push eax */
  push32((uint32_t)(EAX));
  /* 11862642 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862645 push ecx */
  push32((uint32_t)(ECX));
  /* 11862646 call 0x118628c0 */
  push32(0x1186264bu); f_118628c0();
  /* 1186264b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186264e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862650 jne 0x11862659 */
  if (!C.zf) goto L_11862659;
  /* 11862652 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862654 jmp 0x118627af */
  goto L_118627af;
L_11862659:;
  /* 11862659 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1186265e push 0x118809e8 */
  push32((uint32_t)(0x118809e8u));
  /* 11862663 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862665 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1186266b push edx */
  push32((uint32_t)(EDX));
  /* 1186266c call 0x1185b510 */
  push32(0x11862671u); f_1185b510();
  /* 11862671 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862674 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862677 push eax */
  push32((uint32_t)(EAX));
  /* 11862678 call 0x118586e0 */
  push32(0x1186267du); f_118586e0();
  /* 1186267d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862680 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11862683 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862687 jne 0x11862690 */
  if (!C.zf) goto L_11862690;
  /* 11862689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186268b jmp 0x118627af */
  goto L_118627af;
L_11862690:;
  /* 11862690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862693 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862696 mov ecx, dword ptr [eax + 0x118834dc] */
  ECX = (r32((uint32_t)(EAX + 0x118834dc)));
  /* 1186269c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186269f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118626a2 mov eax, dword ptr [edx*4 + 0x11884a78] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11884a78)));
  /* 118626a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118626ac push 6 */
  push32((uint32_t)(0x6u));
  /* 118626ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118626b1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118626b4 add ecx, 0x11884ac8 */
  { uint32_t _a=(ECX),_b=(0x11884ac8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118626ba push ecx */
  push32((uint32_t)(ECX));
  /* 118626bb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 118626be push edx */
  push32((uint32_t)(EDX));
  /* 118626bf call 0x1185efc0 */
  push32(0x118626c4u); f_1185efc0();
  /* 118626c4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118626c7 mov eax, dword ptr [0x11884a90] */
  EAX = (r32((uint32_t)(0x11884a90)));
  /* 118626cc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 118626cf lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 118626d5 push ecx */
  push32((uint32_t)(ECX));
  /* 118626d6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 118626d9 push edx */
  push32((uint32_t)(EDX));
  /* 118626da call 0x1185b690 */
  push32(0x118626dfu); f_1185b690();
  /* 118626df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118626e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118626e5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118626e8 mov dword ptr [ecx + 0x118834dc], eax */
  w32((uint32_t)(ECX + 0x118834dc), (EAX));
  /* 118626ee mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 118626f4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118626fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118626fd mov dword ptr [eax*4 + 0x11884a78], edx */
  w32((uint32_t)(EAX*4 + 0x11884a78), (EDX));
  /* 11862704 push 6 */
  push32((uint32_t)(0x6u));
  /* 11862706 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1186270c push ecx */
  push32((uint32_t)(ECX));
  /* 1186270d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862710 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862713 add edx, 0x11884ac8 */
  { uint32_t _a=(EDX),_b=(0x11884ac8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862719 push edx */
  push32((uint32_t)(EDX));
  /* 1186271a call 0x1185efc0 */
  push32(0x1186271fu); f_1185efc0();
  /* 1186271f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862722 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862726 jne 0x11862733 */
  if (!C.zf) goto L_11862733;
  /* 11862728 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1186272e mov dword ptr [0x11884a90], eax */
  w32((uint32_t)(0x11884a90), (EAX));
L_11862733:;
  /* 11862733 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862737 jne 0x11862745 */
  if (!C.zf) goto L_11862745;
  /* 11862739 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1186273f mov dword ptr [0x11884a94], ecx */
  w32((uint32_t)(0x11884a94), (ECX));
L_11862745:;
  /* 11862745 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862748 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186274b call dword ptr [edx + 0x118834e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x118834e0))), 0x11862751u);
  /* 11862751 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862753 je 0x1186278c */
  if (C.zf) goto L_1186278c;
  /* 11862755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862758 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186275b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186275e mov dword ptr [eax + 0x118834dc], ecx */
  w32((uint32_t)(EAX + 0x118834dc), (ECX));
  /* 11862764 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862766 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862769 push edx */
  push32((uint32_t)(EDX));
  /* 1186276a call 0x11859170 */
  push32(0x1186276fu); f_11859170();
  /* 1186276f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862772 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862775 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862778 mov dword ptr [eax*4 + 0x11884a78], ecx */
  w32((uint32_t)(EAX*4 + 0x11884a78), (ECX));
  /* 1186277f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11862782 mov dword ptr [0x11884a90], edx */
  w32((uint32_t)(0x11884a90), (EDX));
  /* 11862788 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186278a jmp 0x118627af */
  goto L_118627af;
L_1186278c:;
  /* 1186278c cmp dword ptr [ebp - 0xc], 0x118833c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x118833c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862793 je 0x118627a3 */
  if (C.zf) goto L_118627a3;
  /* 11862795 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862797 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186279a push eax */
  push32((uint32_t)(EAX));
  /* 1186279b call 0x11859170 */
  push32(0x118627a0u); f_11859170();
  /* 118627a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118627a3:;
  /* 118627a3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118627a6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118627a9 mov eax, dword ptr [ecx + 0x118834dc] */
  EAX = (r32((uint32_t)(ECX + 0x118834dc)));
L_118627af:;
  /* 118627af mov esp, ebp */
  ESP = (EBP);
  /* 118627b1 pop ebp */
  EBP = (pop32());
  /* 118627b2 ret  */
  ESPCHK(0x11862620u, _esp0);
  ESP += 4; return;
}

/* FUN_100127c0 @ 0x118627c0 (256 bytes, 72 insns) */
void f_118627c0(void) {
  FTRACE(0x118627c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118627c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118627c1 mov ebp, esp */
  EBP = (ESP);
  /* 118627c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118627c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118627cd cmp dword ptr [0x118834dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x118834dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118627d4 jne 0x118627f4 */
  if (!C.zf) goto L_118627f4;
  /* 118627d6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 118627db push 0x118809e8 */
  push32((uint32_t)(0x118809e8u));
  /* 118627e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118627e2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 118627e7 call 0x118586e0 */
  push32(0x118627ecu); f_118586e0();
  /* 118627ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118627ef mov dword ptr [0x118834dc], eax */
  w32((uint32_t)(0x118834dc), (EAX));
L_118627f4:;
  /* 118627f4 mov eax, dword ptr [0x118834dc] */
  EAX = (r32((uint32_t)(0x118834dc)));
  /* 118627f9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 118627fc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11862803 jmp 0x1186280e */
  goto L_1186280e;
L_11862805:;
  /* 11862805 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862808 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186280b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1186280e:;
  /* 1186280e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862811 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862814 mov eax, dword ptr [edx + 0x118834dc] */
  EAX = (r32((uint32_t)(EDX + 0x118834dc)));
  /* 1186281a push eax */
  push32((uint32_t)(EAX));
  /* 1186281b push 0x118809f4 */
  push32((uint32_t)(0x118809f4u));
  /* 11862820 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862823 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862826 mov edx, dword ptr [ecx + 0x118834d8] */
  EDX = (r32((uint32_t)(ECX + 0x118834d8)));
  /* 1186282c push edx */
  push32((uint32_t)(EDX));
  /* 1186282d push 3 */
  push32((uint32_t)(0x3u));
  /* 1186282f mov eax, dword ptr [0x118834dc] */
  EAX = (r32((uint32_t)(0x118834dc)));
  /* 11862834 push eax */
  push32((uint32_t)(EAX));
  /* 11862835 call 0x11862a60 */
  push32(0x1186283au); f_11862a60();
  /* 1186283a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186283d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862841 jge 0x11862889 */
  if ((C.sf==C.of)) goto L_11862889;
  /* 11862843 push 0x118809e0 */
  push32((uint32_t)(0x118809e0u));
  /* 11862848 mov ecx, dword ptr [0x118834dc] */
  ECX = (r32((uint32_t)(0x118834dc)));
  /* 1186284e push ecx */
  push32((uint32_t)(ECX));
  /* 1186284f call 0x1185b6a0 */
  push32(0x11862854u); f_1185b6a0();
  /* 11862854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862857 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186285a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186285d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862860 mov eax, dword ptr [edx + 0x118834dc] */
  EAX = (r32((uint32_t)(EDX + 0x118834dc)));
  /* 11862866 push eax */
  push32((uint32_t)(EAX));
  /* 11862867 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186286a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186286d mov edx, dword ptr [ecx + 0x118834dc] */
  EDX = (r32((uint32_t)(ECX + 0x118834dc)));
  /* 11862873 push edx */
  push32((uint32_t)(EDX));
  /* 11862874 call 0x11864370 */
  push32(0x11862879u); f_11864370();
  /* 11862879 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186287c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186287e je 0x11862887 */
  if (C.zf) goto L_11862887;
  /* 11862880 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11862887:;
  /* 11862887 jmp 0x118628b7 */
  goto L_118628b7;
L_11862889:;
  /* 11862889 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186288d jne 0x11862896 */
  if (!C.zf) goto L_11862896;
  /* 1186288f mov eax, dword ptr [0x118834dc] */
  EAX = (r32((uint32_t)(0x118834dc)));
  /* 11862894 jmp 0x118628bc */
  goto L_118628bc;
L_11862896:;
  /* 11862896 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862898 mov eax, dword ptr [0x118834dc] */
  EAX = (r32((uint32_t)(0x118834dc)));
  /* 1186289d push eax */
  push32((uint32_t)(EAX));
  /* 1186289e call 0x11859170 */
  push32(0x118628a3u); f_11859170();
  /* 118628a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118628a6 mov dword ptr [0x118834dc], 0 */
  w32((uint32_t)(0x118834dc), (0x0u));
  /* 118628b0 mov eax, dword ptr [0x118834f4] */
  EAX = (r32((uint32_t)(0x118834f4)));
  /* 118628b5 jmp 0x118628bc */
  goto L_118628bc;
L_118628b7:;
  /* 118628b7 jmp 0x11862805 */
  goto L_11862805;
L_118628bc:;
  /* 118628bc mov esp, ebp */
  ESP = (EBP);
  /* 118628be pop ebp */
  EBP = (pop32());
  /* 118628bf ret  */
  ESPCHK(0x118627c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100128c0 @ 0x118628c0 (388 bytes, 115 insns) */
void f_118628c0(void) {
  FTRACE(0x118628c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118628c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118628c1 mov ebp, esp */
  EBP = (ESP);
  /* 118628c3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118628c9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118628cd jne 0x118628d6 */
  if (!C.zf) goto L_118628d6;
  /* 118628cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118628d1 jmp 0x11862a40 */
  goto L_11862a40;
L_118628d6:;
  /* 118628d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118628d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118628dc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118628df jne 0x11862930 */
  if (!C.zf) goto L_11862930;
  /* 118628e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118628e4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 118628e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118628ea jne 0x11862930 */
  if (!C.zf) goto L_11862930;
  /* 118628ec mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 118628ef mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 118628f2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 118628f5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 118628f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118628fd je 0x11862919 */
  if (C.zf) goto L_11862919;
  /* 118628ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11862902 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11862907 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186290a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11862910 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11862913 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11862919:;
  /* 11862919 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186291d je 0x11862928 */
  if (C.zf) goto L_11862928;
  /* 1186291f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11862922 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11862928:;
  /* 11862928 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186292b jmp 0x11862a40 */
  goto L_11862a40;
L_11862930:;
  /* 11862930 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862933 push ecx */
  push32((uint32_t)(ECX));
  /* 11862934 push 0x11883450 */
  push32((uint32_t)(0x11883450u));
  /* 11862939 call 0x11864370 */
  push32(0x1186293eu); f_11864370();
  /* 1186293e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862941 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862943 je 0x118629f8 */
  if (C.zf) goto L_118629f8;
  /* 11862949 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186294c push edx */
  push32((uint32_t)(EDX));
  /* 1186294d push 0x118833cc */
  push32((uint32_t)(0x118833ccu));
  /* 11862952 call 0x11864370 */
  push32(0x11862957u); f_11864370();
  /* 11862957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186295a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186295c je 0x118629f8 */
  if (C.zf) goto L_118629f8;
  /* 11862962 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862965 push eax */
  push32((uint32_t)(EAX));
  /* 11862966 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1186296c push ecx */
  push32((uint32_t)(ECX));
  /* 1186296d call 0x11862ab0 */
  push32(0x11862972u); f_11862ab0();
  /* 11862972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862975 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862977 je 0x11862980 */
  if (C.zf) goto L_11862980;
  /* 11862979 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186297b jmp 0x11862a40 */
  goto L_11862a40;
L_11862980:;
  /* 11862980 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11862986 push edx */
  push32((uint32_t)(EDX));
  /* 11862987 push 0x11884aa0 */
  push32((uint32_t)(0x11884aa0u));
  /* 1186298c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11862992 push eax */
  push32((uint32_t)(EAX));
  /* 11862993 call 0x118644c0 */
  push32(0x11862998u); f_118644c0();
  /* 11862998 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186299b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186299d jne 0x118629a6 */
  if (!C.zf) goto L_118629a6;
  /* 1186299f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118629a1 jmp 0x11862a40 */
  goto L_11862a40;
L_118629a6:;
  /* 118629a6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 118629a8 mov cx, word ptr [0x11884aa4] */
  CX = (r16((uint32_t)(0x11884aa4)));
  /* 118629af mov dword ptr [0x11884aa8], ecx */
  w32((uint32_t)(0x11884aa8), (ECX));
  /* 118629b5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 118629bb push edx */
  push32((uint32_t)(EDX));
  /* 118629bc push 0x11883450 */
  push32((uint32_t)(0x11883450u));
  /* 118629c1 call 0x11862c10 */
  push32(0x118629c6u); f_11862c10();
  /* 118629c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118629c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118629cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118629cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118629d1 je 0x118629e6 */
  if (C.zf) goto L_118629e6;
  /* 118629d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118629d6 push edx */
  push32((uint32_t)(EDX));
  /* 118629d7 push 0x118833cc */
  push32((uint32_t)(0x118833ccu));
  /* 118629dc call 0x1185b690 */
  push32(0x118629e1u); f_1185b690();
  /* 118629e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118629e4 jmp 0x118629f8 */
  goto L_118629f8;
L_118629e6:;
  /* 118629e6 push 0x11883450 */
  push32((uint32_t)(0x11883450u));
  /* 118629eb push 0x118833cc */
  push32((uint32_t)(0x118833ccu));
  /* 118629f0 call 0x1185b690 */
  push32(0x118629f5u); f_1185b690();
  /* 118629f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118629f8:;
  /* 118629f8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118629fc je 0x11862a11 */
  if (C.zf) goto L_11862a11;
  /* 118629fe push 6 */
  push32((uint32_t)(0x6u));
  /* 11862a00 push 0x11884aa0 */
  push32((uint32_t)(0x11884aa0u));
  /* 11862a05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11862a08 push eax */
  push32((uint32_t)(EAX));
  /* 11862a09 call 0x1185efc0 */
  push32(0x11862a0eu); f_1185efc0();
  /* 11862a0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11862a11:;
  /* 11862a11 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862a15 je 0x11862a2a */
  if (C.zf) goto L_11862a2a;
  /* 11862a17 push 4 */
  push32((uint32_t)(0x4u));
  /* 11862a19 push 0x11884aa8 */
  push32((uint32_t)(0x11884aa8u));
  /* 11862a1e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11862a21 push ecx */
  push32((uint32_t)(ECX));
  /* 11862a22 call 0x1185efc0 */
  push32(0x11862a27u); f_1185efc0();
  /* 11862a27 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11862a2a:;
  /* 11862a2a push 0x11883450 */
  push32((uint32_t)(0x11883450u));
  /* 11862a2f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862a32 push edx */
  push32((uint32_t)(EDX));
  /* 11862a33 call 0x1185b690 */
  push32(0x11862a38u); f_1185b690();
  /* 11862a38 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862a3b mov eax, 0x11883450 */
  EAX = (0x11883450u);
L_11862a40:;
  /* 11862a40 mov esp, ebp */
  ESP = (EBP);
  /* 11862a42 pop ebp */
  EBP = (pop32());
  /* 11862a43 ret  */
  ESPCHK(0x118628c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a50 @ 0x11862a50 (7 bytes, 5 insns) */
void f_11862a50(void) {
  FTRACE(0x11862a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11862a51 mov ebp, esp */
  EBP = (ESP);
  /* 11862a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862a55 pop ebp */
  EBP = (pop32());
  /* 11862a56 ret  */
  ESPCHK(0x11862a50u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11862a60 (79 bytes, 28 insns) */
void f_11862a60(void) {
  FTRACE(0x11862a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11862a61 mov ebp, esp */
  EBP = (ESP);
  /* 11862a63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862a66 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11862a69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862a6c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11862a73 jmp 0x11862a7e */
  goto L_11862a7e;
L_11862a75:;
  /* 11862a75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862a78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862a7b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11862a7e:;
  /* 11862a7e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862a81 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862a84 jge 0x11862aa4 */
  if ((C.sf==C.of)) goto L_11862aa4;
  /* 11862a86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862a89 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862a8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862a8f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862a92 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11862a95 push edx */
  push32((uint32_t)(EDX));
  /* 11862a96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862a99 push eax */
  push32((uint32_t)(EAX));
  /* 11862a9a call 0x1185b6a0 */
  push32(0x11862a9fu); f_1185b6a0();
  /* 11862a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862aa2 jmp 0x11862a75 */
  goto L_11862a75;
L_11862aa4:;
  /* 11862aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11862aab mov esp, ebp */
  ESP = (EBP);
  /* 11862aad pop ebp */
  EBP = (pop32());
  /* 11862aae ret  */
  ESPCHK(0x11862a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ab0 @ 0x11862ab0 (349 bytes, 122 insns) */
void f_11862ab0(void) {
  FTRACE(0x11862ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11862ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11862ab3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862ab6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11862abb push 0 */
  push32((uint32_t)(0x0u));
  /* 11862abd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862ac0 push eax */
  push32((uint32_t)(EAX));
  /* 11862ac1 call 0x1185c450 */
  push32(0x11862ac6u); f_1185c450();
  /* 11862ac6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ac9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862acc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11862acf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11862ad1 jne 0x11862ada */
  if (!C.zf) goto L_11862ada;
  /* 11862ad3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862ad5 jmp 0x11862c09 */
  goto L_11862c09;
L_11862ada:;
  /* 11862ada mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862add movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11862ae0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862ae3 jne 0x11862b10 */
  if (!C.zf) goto L_11862b10;
  /* 11862ae5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862ae8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11862aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862aee je 0x11862b10 */
  if (C.zf) goto L_11862b10;
  /* 11862af0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862af3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862af6 push ecx */
  push32((uint32_t)(ECX));
  /* 11862af7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862afa add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b00 push edx */
  push32((uint32_t)(EDX));
  /* 11862b01 call 0x1185b690 */
  push32(0x11862b06u); f_1185b690();
  /* 11862b06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862b0b jmp 0x11862c09 */
  goto L_11862c09;
L_11862b10:;
  /* 11862b10 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11862b17 jmp 0x11862b22 */
  goto L_11862b22;
L_11862b19:;
  /* 11862b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862b1c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11862b22:;
  /* 11862b22 push 0x118809f8 */
  push32((uint32_t)(0x118809f8u));
  /* 11862b27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862b2a push ecx */
  push32((uint32_t)(ECX));
  /* 11862b2b call 0x11864400 */
  push32(0x11862b30u); f_11864400();
  /* 11862b30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b33 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11862b36 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b3a jne 0x11862b44 */
  if (!C.zf) goto L_11862b44;
  /* 11862b3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11862b3f jmp 0x11862c09 */
  goto L_11862c09;
L_11862b44:;
  /* 11862b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862b47 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b4a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11862b4c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11862b4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b53 jne 0x11862b7a */
  if (!C.zf) goto L_11862b7a;
  /* 11862b55 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b59 jge 0x11862b7a */
  if ((C.sf==C.of)) goto L_11862b7a;
  /* 11862b5b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862b5f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b62 je 0x11862b7a */
  if (C.zf) goto L_11862b7a;
  /* 11862b64 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862b67 push edx */
  push32((uint32_t)(EDX));
  /* 11862b68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862b6b push eax */
  push32((uint32_t)(EAX));
  /* 11862b6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862b6f push ecx */
  push32((uint32_t)(ECX));
  /* 11862b70 call 0x1185bf00 */
  push32(0x11862b75u); f_1185bf00();
  /* 11862b75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b78 jmp 0x11862be0 */
  goto L_11862be0;
L_11862b7a:;
  /* 11862b7a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b7e jne 0x11862ba8 */
  if (!C.zf) goto L_11862ba8;
  /* 11862b80 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b84 jge 0x11862ba8 */
  if ((C.sf==C.of)) goto L_11862ba8;
  /* 11862b86 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862b8a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862b8d je 0x11862ba8 */
  if (C.zf) goto L_11862ba8;
  /* 11862b8f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862b92 push eax */
  push32((uint32_t)(EAX));
  /* 11862b93 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862b96 push ecx */
  push32((uint32_t)(ECX));
  /* 11862b97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862b9a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862b9d push edx */
  push32((uint32_t)(EDX));
  /* 11862b9e call 0x1185bf00 */
  push32(0x11862ba3u); f_1185bf00();
  /* 11862ba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ba6 jmp 0x11862be0 */
  goto L_11862be0;
L_11862ba8:;
  /* 11862ba8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862bac jne 0x11862bdb */
  if (!C.zf) goto L_11862bdb;
  /* 11862bae movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862bb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862bb4 je 0x11862bbf */
  if (C.zf) goto L_11862bbf;
  /* 11862bb6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862bba cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862bbd jne 0x11862bdb */
  if (!C.zf) goto L_11862bdb;
L_11862bbf:;
  /* 11862bbf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862bc2 push edx */
  push32((uint32_t)(EDX));
  /* 11862bc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862bc6 push eax */
  push32((uint32_t)(EAX));
  /* 11862bc7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862bca add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862bd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11862bd1 call 0x1185bf00 */
  push32(0x11862bd6u); f_1185bf00();
  /* 11862bd6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862bd9 jmp 0x11862be0 */
  goto L_11862be0;
L_11862bdb:;
  /* 11862bdb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11862bde jmp 0x11862c09 */
  goto L_11862c09;
L_11862be0:;
  /* 11862be0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862be4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862be7 jne 0x11862beb */
  if (!C.zf) goto L_11862beb;
  /* 11862be9 jmp 0x11862c07 */
  goto L_11862c07;
L_11862beb:;
  /* 11862beb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11862bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862bf1 jne 0x11862bf5 */
  if (!C.zf) goto L_11862bf5;
  /* 11862bf3 jmp 0x11862c07 */
  goto L_11862c07;
L_11862bf5:;
  /* 11862bf5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862bf8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862bfb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11862bff mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11862c02 jmp 0x11862b19 */
  goto L_11862b19;
L_11862c07:;
  /* 11862c07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11862c09:;
  /* 11862c09 mov esp, ebp */
  ESP = (EBP);
  /* 11862c0b pop ebp */
  EBP = (pop32());
  /* 11862c0c ret  */
  ESPCHK(0x11862ab0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11862c10 (101 bytes, 36 insns) */
void f_11862c10(void) {
  FTRACE(0x11862c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11862c11 mov ebp, esp */
  EBP = (ESP);
  /* 11862c13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862c16 push eax */
  push32((uint32_t)(EAX));
  /* 11862c17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862c1a push ecx */
  push32((uint32_t)(ECX));
  /* 11862c1b call 0x1185b690 */
  push32(0x11862c20u); f_1185b690();
  /* 11862c20 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862c23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862c26 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11862c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862c2c je 0x11862c48 */
  if (C.zf) goto L_11862c48;
  /* 11862c2e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862c31 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11862c35 push 0x11880a00 */
  push32((uint32_t)(0x11880a00u));
  /* 11862c3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11862c3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862c3f push edx */
  push32((uint32_t)(EDX));
  /* 11862c40 call 0x11862a60 */
  push32(0x11862c45u); f_11862a60();
  /* 11862c45 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11862c48:;
  /* 11862c48 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862c4b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11862c52 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11862c54 je 0x11862c73 */
  if (C.zf) goto L_11862c73;
  /* 11862c56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11862c59 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862c5f push edx */
  push32((uint32_t)(EDX));
  /* 11862c60 push 0x118809fc */
  push32((uint32_t)(0x118809fcu));
  /* 11862c65 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862c67 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862c6a push eax */
  push32((uint32_t)(EAX));
  /* 11862c6b call 0x11862a60 */
  push32(0x11862c70u); f_11862a60();
  /* 11862c70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11862c73:;
  /* 11862c73 pop ebp */
  EBP = (pop32());
  /* 11862c74 ret  */
  ESPCHK(0x11862c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c80 @ 0x11862c80 (130 bytes, 50 insns) */
void f_11862c80(void) {
  FTRACE(0x11862c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11862c81 mov ebp, esp */
  EBP = (ESP);
  /* 11862c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11862c84 push ebx */
  push32((uint32_t)(EBX));
  /* 11862c85 push esi */
  push32((uint32_t)(ESI));
  /* 11862c86 push edi */
  push32((uint32_t)(EDI));
  /* 11862c87 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11862c8e:;
  /* 11862c8e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862c92 jne 0x11862cb2 */
  if (!C.zf) goto L_11862cb2;
  /* 11862c94 push 0x11880a10 */
  push32((uint32_t)(0x11880a10u));
  /* 11862c99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11862c9b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 11862c9d push 0x11880a04 */
  push32((uint32_t)(0x11880a04u));
  /* 11862ca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862ca4 call 0x118577a0 */
  push32(0x11862ca9u); f_118577a0();
  /* 11862ca9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862cac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862caf jne 0x11862cb2 */
  if (!C.zf) goto L_11862cb2;
  /* 11862cb1 int3  */
  x86_unimpl("int3 @ 0x11862cb1");
L_11862cb2:;
  /* 11862cb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862cb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862cb6 jne 0x11862c8e */
  if (!C.zf) goto L_11862c8e;
  /* 11862cb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862cbb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11862cbe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11862cc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11862cc3 je 0x11862cd1 */
  if (C.zf) goto L_11862cd1;
  /* 11862cc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862cc8 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11862ccf jmp 0x11862cf8 */
  goto L_11862cf8;
L_11862cd1:;
  /* 11862cd1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862cd4 push ecx */
  push32((uint32_t)(ECX));
  /* 11862cd5 call 0x118614f0 */
  push32(0x11862cdau); f_118614f0();
  /* 11862cda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862cdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862ce0 push edx */
  push32((uint32_t)(EDX));
  /* 11862ce1 call 0x11862d10 */
  push32(0x11862ce6u); f_11862d10();
  /* 11862ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862cec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862cef push eax */
  push32((uint32_t)(EAX));
  /* 11862cf0 call 0x11861560 */
  push32(0x11862cf5u); f_11861560();
  /* 11862cf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11862cf8:;
  /* 11862cf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862cfb pop edi */
  EDI = (pop32());
  /* 11862cfc pop esi */
  ESI = (pop32());
  /* 11862cfd pop ebx */
  EBX = (pop32());
  /* 11862cfe mov esp, ebp */
  ESP = (EBP);
  /* 11862d00 pop ebp */
  EBP = (pop32());
  /* 11862d01 ret  */
  ESPCHK(0x11862c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d10 @ 0x11862d10 (190 bytes, 67 insns) */
void f_11862d10(void) {
  FTRACE(0x11862d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11862d11 mov ebp, esp */
  EBP = (ESP);
  /* 11862d13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862d16 push ebx */
  push32((uint32_t)(EBX));
  /* 11862d17 push esi */
  push32((uint32_t)(ESI));
  /* 11862d18 push edi */
  push32((uint32_t)(EDI));
  /* 11862d19 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11862d20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862d23 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11862d26:;
  /* 11862d26 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862d2a jne 0x11862d4a */
  if (!C.zf) goto L_11862d4a;
  /* 11862d2c push 0x118808b4 */
  push32((uint32_t)(0x118808b4u));
  /* 11862d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11862d33 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 11862d35 push 0x11880a04 */
  push32((uint32_t)(0x11880a04u));
  /* 11862d3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11862d3c call 0x118577a0 */
  push32(0x11862d41u); f_118577a0();
  /* 11862d41 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862d44 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862d47 jne 0x11862d4a */
  if (!C.zf) goto L_11862d4a;
  /* 11862d49 int3  */
  x86_unimpl("int3 @ 0x11862d49");
L_11862d4a:;
  /* 11862d4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11862d4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11862d4e jne 0x11862d26 */
  if (!C.zf) goto L_11862d26;
  /* 11862d50 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862d53 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11862d56 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 11862d5b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862d5d je 0x11862dba */
  if (C.zf) goto L_11862dba;
  /* 11862d5f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862d62 push ecx */
  push32((uint32_t)(ECX));
  /* 11862d63 call 0x11862010 */
  push32(0x11862d68u); f_11862010();
  /* 11862d68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862d6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862d6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862d71 push edx */
  push32((uint32_t)(EDX));
  /* 11862d72 call 0x11865390 */
  push32(0x11862d77u); f_11865390();
  /* 11862d77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862d7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862d7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11862d80 push ecx */
  push32((uint32_t)(ECX));
  /* 11862d81 call 0x11865260 */
  push32(0x11862d86u); f_11865260();
  /* 11862d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862d8b jge 0x11862d96 */
  if ((C.sf==C.of)) goto L_11862d96;
  /* 11862d8d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11862d94 jmp 0x11862dba */
  goto L_11862dba;
L_11862d96:;
  /* 11862d96 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862d99 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862d9d je 0x11862dba */
  if (C.zf) goto L_11862dba;
  /* 11862d9f push 2 */
  push32((uint32_t)(0x2u));
  /* 11862da1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862da4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11862da7 push ecx */
  push32((uint32_t)(ECX));
  /* 11862da8 call 0x11859170 */
  push32(0x11862dadu); f_11859170();
  /* 11862dad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862db0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862db3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_11862dba:;
  /* 11862dba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11862dbd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 11862dc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862dc7 pop edi */
  EDI = (pop32());
  /* 11862dc8 pop esi */
  ESI = (pop32());
  /* 11862dc9 pop ebx */
  EBX = (pop32());
  /* 11862dca mov esp, ebp */
  ESP = (EBP);
  /* 11862dcc pop ebp */
  EBP = (pop32());
  /* 11862dcd ret  */
  ESPCHK(0x11862d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012dd0 @ 0x11862dd0 (210 bytes, 63 insns) */
void f_11862dd0(void) {
  FTRACE(0x11862dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11862dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11862dd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11862dd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862dd7 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862ddd jae 0x11862e01 */
  if (!C.cf) goto L_11862e01;
  /* 11862ddf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862de2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11862de5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862de8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11862deb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862dee mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11862df5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11862dfa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11862dfd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11862dff jne 0x11862e14 */
  if (!C.zf) goto L_11862e14;
L_11862e01:;
  /* 11862e01 call 0x118605b0 */
  push32(0x11862e06u); f_118605b0();
  /* 11862e06 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11862e0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11862e0f jmp 0x11862e9e */
  goto L_11862e9e;
L_11862e14:;
  /* 11862e14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862e17 push edx */
  push32((uint32_t)(EDX));
  /* 11862e18 call 0x11861dd0 */
  push32(0x11862e1du); f_11861dd0();
  /* 11862e1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862e23 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11862e26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862e29 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11862e2c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11862e2f mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11862e36 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11862e3b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11862e3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862e40 je 0x11862e7d */
  if (C.zf) goto L_11862e7d;
  /* 11862e42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862e45 push ecx */
  push32((uint32_t)(ECX));
  /* 11862e46 call 0x11861c50 */
  push32(0x11862e4bu); f_11861c50();
  /* 11862e4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862e4e push eax */
  push32((uint32_t)(EAX));
  /* 11862e4f call dword ptr [0x11887314] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887314))), 0x11862e55u);
  /* 11862e55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862e57 jne 0x11862e64 */
  if (!C.zf) goto L_11862e64;
  /* 11862e59 call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11862e5fu);
  /* 11862e5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862e62 jmp 0x11862e6b */
  goto L_11862e6b;
L_11862e64:;
  /* 11862e64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11862e6b:;
  /* 11862e6b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862e6f jne 0x11862e73 */
  if (!C.zf) goto L_11862e73;
  /* 11862e71 jmp 0x11862e8f */
  goto L_11862e8f;
L_11862e73:;
  /* 11862e73 call 0x118605c0 */
  push32(0x11862e78u); f_118605c0();
  /* 11862e78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862e7b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11862e7d:;
  /* 11862e7d call 0x118605b0 */
  push32(0x11862e82u); f_118605b0();
  /* 11862e82 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11862e88 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11862e8f:;
  /* 11862e8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862e92 push eax */
  push32((uint32_t)(EAX));
  /* 11862e93 call 0x11861e60 */
  push32(0x11862e98u); f_11861e60();
  /* 11862e98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862e9b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11862e9e:;
  /* 11862e9e mov esp, ebp */
  ESP = (EBP);
  /* 11862ea0 pop ebp */
  EBP = (pop32());
  /* 11862ea1 ret  */
  ESPCHK(0x11862dd0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x11862eb0 (219 bytes, 64 insns) */
void f_11862eb0(void) {
  FTRACE(0x11862eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11862eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11862eb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11862eb4 cmp dword ptr [0x11884a8c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a8c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862ebb je 0x11862f51 */
  if (C.zf) goto L_11862f51;
  /* 11862ec1 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 11862ec3 push 0x11880a20 */
  push32((uint32_t)(0x11880a20u));
  /* 11862ec8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862eca push 0xac */
  push32((uint32_t)(0xacu));
  /* 11862ecf push 1 */
  push32((uint32_t)(0x1u));
  /* 11862ed1 call 0x11858af0 */
  push32(0x11862ed6u); f_11858af0();
  /* 11862ed6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ed9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862edc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862ee0 jne 0x11862eec */
  if (!C.zf) goto L_11862eec;
  /* 11862ee2 mov eax, 1 */
  EAX = (0x1u);
  /* 11862ee7 jmp 0x11862f87 */
  goto L_11862f87;
L_11862eec:;
  /* 11862eec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862eef push eax */
  push32((uint32_t)(EAX));
  /* 11862ef0 call 0x11862f90 */
  push32(0x11862ef5u); f_11862f90();
  /* 11862ef5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ef8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11862efa je 0x11862f1d */
  if (C.zf) goto L_11862f1d;
  /* 11862efc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862eff push ecx */
  push32((uint32_t)(ECX));
  /* 11862f00 call 0x11863520 */
  push32(0x11862f05u); f_11863520();
  /* 11862f05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f08 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862f0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862f0d push edx */
  push32((uint32_t)(EDX));
  /* 11862f0e call 0x11859170 */
  push32(0x11862f13u); f_11859170();
  /* 11862f13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f16 mov eax, 1 */
  EAX = (0x1u);
  /* 11862f1b jmp 0x11862f87 */
  goto L_11862f87;
L_11862f1d:;
  /* 11862f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862f20 mov dword ptr [0x11883c98], eax */
  w32((uint32_t)(0x11883c98), (EAX));
  /* 11862f25 mov ecx, dword ptr [0x11884aac] */
  ECX = (r32((uint32_t)(0x11884aac)));
  /* 11862f2b push ecx */
  push32((uint32_t)(ECX));
  /* 11862f2c call 0x11863520 */
  push32(0x11862f31u); f_11863520();
  /* 11862f31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f34 push 2 */
  push32((uint32_t)(0x2u));
  /* 11862f36 mov edx, dword ptr [0x11884aac] */
  EDX = (r32((uint32_t)(0x11884aac)));
  /* 11862f3c push edx */
  push32((uint32_t)(EDX));
  /* 11862f3d call 0x11859170 */
  push32(0x11862f42u); f_11859170();
  /* 11862f42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862f48 mov dword ptr [0x11884aac], eax */
  w32((uint32_t)(0x11884aac), (EAX));
  /* 11862f4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862f4f jmp 0x11862f87 */
  goto L_11862f87;
L_11862f51:;
  /* 11862f51 mov dword ptr [0x11883c98], 0x11883ca0 */
  w32((uint32_t)(0x11883c98), (0x11883ca0u));
  /* 11862f5b mov ecx, dword ptr [0x11884aac] */
  ECX = (r32((uint32_t)(0x11884aac)));
  /* 11862f61 push ecx */
  push32((uint32_t)(ECX));
  /* 11862f62 call 0x11863520 */
  push32(0x11862f67u); f_11863520();
  /* 11862f67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f6a push 2 */
  push32((uint32_t)(0x2u));
  /* 11862f6c mov edx, dword ptr [0x11884aac] */
  EDX = (r32((uint32_t)(0x11884aac)));
  /* 11862f72 push edx */
  push32((uint32_t)(EDX));
  /* 11862f73 call 0x11859170 */
  push32(0x11862f78u); f_11859170();
  /* 11862f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862f7b mov dword ptr [0x11884aac], 0 */
  w32((uint32_t)(0x11884aac), (0x0u));
  /* 11862f85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11862f87:;
  /* 11862f87 mov esp, ebp */
  ESP = (EBP);
  /* 11862f89 pop ebp */
  EBP = (pop32());
  /* 11862f8a ret  */
  ESPCHK(0x11862eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f90 @ 0x11862f90 (1423 bytes, 533 insns) */
void f_11862f90(void) {
  FTRACE(0x11862f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11862f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11862f91 mov ebp, esp */
  EBP = (ESP);
  /* 11862f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11862f96 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11862f9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11862f9f mov ax, word ptr [0x11884ae6] */
  AX = (r16((uint32_t)(0x11884ae6)));
  /* 11862fa5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11862fa8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11862faa mov cx, word ptr [0x11884ae8] */
  CX = (r16((uint32_t)(0x11884ae8)));
  /* 11862fb1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11862fb4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11862fb8 jne 0x11862fc2 */
  if (!C.zf) goto L_11862fc2;
  /* 11862fba or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11862fbd jmp 0x1186351b */
  goto L_1186351b;
L_11862fc2:;
  /* 11862fc2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862fc5 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862fc8 push edx */
  push32((uint32_t)(EDX));
  /* 11862fc9 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 11862fcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862fce push eax */
  push32((uint32_t)(EAX));
  /* 11862fcf push 1 */
  push32((uint32_t)(0x1u));
  /* 11862fd1 call 0x118668a0 */
  push32(0x11862fd6u); f_118668a0();
  /* 11862fd6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862fd9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862fdc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11862fde mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11862fe1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11862fe4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11862fe7 push edx */
  push32((uint32_t)(EDX));
  /* 11862fe8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 11862fea mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11862fed push eax */
  push32((uint32_t)(EAX));
  /* 11862fee push 1 */
  push32((uint32_t)(0x1u));
  /* 11862ff0 call 0x118668a0 */
  push32(0x11862ff5u); f_118668a0();
  /* 11862ff5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11862ff8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11862ffb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11862ffd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863000 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863003 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863006 push edx */
  push32((uint32_t)(EDX));
  /* 11863007 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 11863009 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186300c push eax */
  push32((uint32_t)(EAX));
  /* 1186300d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186300f call 0x118668a0 */
  push32(0x11863014u); f_118668a0();
  /* 11863014 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863017 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186301a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186301c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186301f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863022 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863025 push edx */
  push32((uint32_t)(EDX));
  /* 11863026 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 11863028 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186302b push eax */
  push32((uint32_t)(EAX));
  /* 1186302c push 1 */
  push32((uint32_t)(0x1u));
  /* 1186302e call 0x118668a0 */
  push32(0x11863033u); f_118668a0();
  /* 11863033 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863036 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863039 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186303b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186303e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863041 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863044 push edx */
  push32((uint32_t)(EDX));
  /* 11863045 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 11863047 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186304a push eax */
  push32((uint32_t)(EAX));
  /* 1186304b push 1 */
  push32((uint32_t)(0x1u));
  /* 1186304d call 0x118668a0 */
  push32(0x11863052u); f_118668a0();
  /* 11863052 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863055 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863058 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186305a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186305d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863060 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863063 push edx */
  push32((uint32_t)(EDX));
  /* 11863064 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 11863066 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863069 push eax */
  push32((uint32_t)(EAX));
  /* 1186306a push 1 */
  push32((uint32_t)(0x1u));
  /* 1186306c call 0x118668a0 */
  push32(0x11863071u); f_118668a0();
  /* 11863071 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863077 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863079 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186307c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186307f push edx */
  push32((uint32_t)(EDX));
  /* 11863080 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 11863082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863085 push eax */
  push32((uint32_t)(EAX));
  /* 11863086 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863088 call 0x118668a0 */
  push32(0x1186308du); f_118668a0();
  /* 1186308d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863090 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863093 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863095 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186309b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186309e push edx */
  push32((uint32_t)(EDX));
  /* 1186309f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 118630a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118630a4 push eax */
  push32((uint32_t)(EAX));
  /* 118630a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 118630a7 call 0x118668a0 */
  push32(0x118630acu); f_118668a0();
  /* 118630ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118630af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118630b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118630b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118630b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118630ba add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118630bd push edx */
  push32((uint32_t)(EDX));
  /* 118630be push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 118630c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118630c3 push eax */
  push32((uint32_t)(EAX));
  /* 118630c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118630c6 call 0x118668a0 */
  push32(0x118630cbu); f_118668a0();
  /* 118630cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118630ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118630d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118630d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118630d6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118630d9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118630dc push edx */
  push32((uint32_t)(EDX));
  /* 118630dd push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 118630df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118630e2 push eax */
  push32((uint32_t)(EAX));
  /* 118630e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118630e5 call 0x118668a0 */
  push32(0x118630eau); f_118668a0();
  /* 118630ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118630ed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118630f0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118630f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118630f5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118630f8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118630fb push edx */
  push32((uint32_t)(EDX));
  /* 118630fc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 118630fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863101 push eax */
  push32((uint32_t)(EAX));
  /* 11863102 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863104 call 0x118668a0 */
  push32(0x11863109u); f_118668a0();
  /* 11863109 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186310c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186310f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863111 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863117 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186311a push edx */
  push32((uint32_t)(EDX));
  /* 1186311b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1186311d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863120 push eax */
  push32((uint32_t)(EAX));
  /* 11863121 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863123 call 0x118668a0 */
  push32(0x11863128u); f_118668a0();
  /* 11863128 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186312b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186312e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863130 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863136 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863139 push edx */
  push32((uint32_t)(EDX));
  /* 1186313a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1186313c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186313f push eax */
  push32((uint32_t)(EAX));
  /* 11863140 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863142 call 0x118668a0 */
  push32(0x11863147u); f_118668a0();
  /* 11863147 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186314a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186314d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186314f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863152 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863155 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863158 push edx */
  push32((uint32_t)(EDX));
  /* 11863159 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1186315b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186315e push eax */
  push32((uint32_t)(EAX));
  /* 1186315f push 1 */
  push32((uint32_t)(0x1u));
  /* 11863161 call 0x118668a0 */
  push32(0x11863166u); f_118668a0();
  /* 11863166 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863169 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186316c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186316e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863174 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863177 push edx */
  push32((uint32_t)(EDX));
  /* 11863178 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1186317a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186317d push eax */
  push32((uint32_t)(EAX));
  /* 1186317e push 1 */
  push32((uint32_t)(0x1u));
  /* 11863180 call 0x118668a0 */
  push32(0x11863185u); f_118668a0();
  /* 11863185 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863188 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186318b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186318d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863190 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863193 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863196 push edx */
  push32((uint32_t)(EDX));
  /* 11863197 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 11863199 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186319c push eax */
  push32((uint32_t)(EAX));
  /* 1186319d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186319f call 0x118668a0 */
  push32(0x118631a4u); f_118668a0();
  /* 118631a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118631a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118631aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118631ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118631af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118631b2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118631b5 push edx */
  push32((uint32_t)(EDX));
  /* 118631b6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 118631b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118631bb push eax */
  push32((uint32_t)(EAX));
  /* 118631bc push 1 */
  push32((uint32_t)(0x1u));
  /* 118631be call 0x118668a0 */
  push32(0x118631c3u); f_118668a0();
  /* 118631c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118631c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118631c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118631cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118631ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118631d1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118631d4 push edx */
  push32((uint32_t)(EDX));
  /* 118631d5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 118631d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118631da push eax */
  push32((uint32_t)(EAX));
  /* 118631db push 1 */
  push32((uint32_t)(0x1u));
  /* 118631dd call 0x118668a0 */
  push32(0x118631e2u); f_118668a0();
  /* 118631e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118631e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118631e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118631ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118631ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118631f0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118631f3 push edx */
  push32((uint32_t)(EDX));
  /* 118631f4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 118631f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118631f9 push eax */
  push32((uint32_t)(EAX));
  /* 118631fa push 1 */
  push32((uint32_t)(0x1u));
  /* 118631fc call 0x118668a0 */
  push32(0x11863201u); f_118668a0();
  /* 11863201 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863204 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863207 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863209 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186320c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186320f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863212 push edx */
  push32((uint32_t)(EDX));
  /* 11863213 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 11863215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863218 push eax */
  push32((uint32_t)(EAX));
  /* 11863219 push 1 */
  push32((uint32_t)(0x1u));
  /* 1186321b call 0x118668a0 */
  push32(0x11863220u); f_118668a0();
  /* 11863220 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863223 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863226 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863228 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186322b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186322e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863231 push edx */
  push32((uint32_t)(EDX));
  /* 11863232 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11863234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863237 push eax */
  push32((uint32_t)(EAX));
  /* 11863238 push 1 */
  push32((uint32_t)(0x1u));
  /* 1186323a call 0x118668a0 */
  push32(0x1186323fu); f_118668a0();
  /* 1186323f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863242 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863245 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863247 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186324a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186324d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863250 push edx */
  push32((uint32_t)(EDX));
  /* 11863251 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 11863253 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863256 push eax */
  push32((uint32_t)(EAX));
  /* 11863257 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863259 call 0x118668a0 */
  push32(0x1186325eu); f_118668a0();
  /* 1186325e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863261 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863264 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863266 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863269 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186326c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186326f push edx */
  push32((uint32_t)(EDX));
  /* 11863270 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 11863272 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863275 push eax */
  push32((uint32_t)(EAX));
  /* 11863276 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863278 call 0x118668a0 */
  push32(0x1186327du); f_118668a0();
  /* 1186327d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863280 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863285 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863288 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186328b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186328e push edx */
  push32((uint32_t)(EDX));
  /* 1186328f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 11863291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863294 push eax */
  push32((uint32_t)(EAX));
  /* 11863295 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863297 call 0x118668a0 */
  push32(0x1186329cu); f_118668a0();
  /* 1186329c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186329f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118632a2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118632a4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118632a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118632aa add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118632ad push edx */
  push32((uint32_t)(EDX));
  /* 118632ae push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 118632b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118632b3 push eax */
  push32((uint32_t)(EAX));
  /* 118632b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118632b6 call 0x118668a0 */
  push32(0x118632bbu); f_118668a0();
  /* 118632bb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118632be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118632c1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118632c3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118632c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118632c9 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118632cc push edx */
  push32((uint32_t)(EDX));
  /* 118632cd push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 118632cf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118632d2 push eax */
  push32((uint32_t)(EAX));
  /* 118632d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118632d5 call 0x118668a0 */
  push32(0x118632dau); f_118668a0();
  /* 118632da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118632dd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118632e0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118632e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118632e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118632e8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118632eb push edx */
  push32((uint32_t)(EDX));
  /* 118632ec push 0x38 */
  push32((uint32_t)(0x38u));
  /* 118632ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118632f1 push eax */
  push32((uint32_t)(EAX));
  /* 118632f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 118632f4 call 0x118668a0 */
  push32(0x118632f9u); f_118668a0();
  /* 118632f9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118632fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118632ff or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863301 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863304 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863307 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186330a push edx */
  push32((uint32_t)(EDX));
  /* 1186330b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1186330d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863310 push eax */
  push32((uint32_t)(EAX));
  /* 11863311 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863313 call 0x118668a0 */
  push32(0x11863318u); f_118668a0();
  /* 11863318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186331b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186331e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863320 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863323 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863326 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863329 push edx */
  push32((uint32_t)(EDX));
  /* 1186332a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1186332c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186332f push eax */
  push32((uint32_t)(EAX));
  /* 11863330 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863332 call 0x118668a0 */
  push32(0x11863337u); f_118668a0();
  /* 11863337 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186333a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186333d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186333f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863342 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863345 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863348 push edx */
  push32((uint32_t)(EDX));
  /* 11863349 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1186334b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186334e push eax */
  push32((uint32_t)(EAX));
  /* 1186334f push 1 */
  push32((uint32_t)(0x1u));
  /* 11863351 call 0x118668a0 */
  push32(0x11863356u); f_118668a0();
  /* 11863356 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863359 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186335c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186335e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863361 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863364 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863367 push edx */
  push32((uint32_t)(EDX));
  /* 11863368 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1186336a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186336d push eax */
  push32((uint32_t)(EAX));
  /* 1186336e push 1 */
  push32((uint32_t)(0x1u));
  /* 11863370 call 0x118668a0 */
  push32(0x11863375u); f_118668a0();
  /* 11863375 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863378 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186337b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186337d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863383 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863386 push edx */
  push32((uint32_t)(EDX));
  /* 11863387 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11863389 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186338c push eax */
  push32((uint32_t)(EAX));
  /* 1186338d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186338f call 0x118668a0 */
  push32(0x11863394u); f_118668a0();
  /* 11863394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863397 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186339a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186339c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186339f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118633a2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118633a8 push edx */
  push32((uint32_t)(EDX));
  /* 118633a9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 118633ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118633ae push eax */
  push32((uint32_t)(EAX));
  /* 118633af push 1 */
  push32((uint32_t)(0x1u));
  /* 118633b1 call 0x118668a0 */
  push32(0x118633b6u); f_118668a0();
  /* 118633b6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118633b9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118633bc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118633be mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118633c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118633c4 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118633ca push edx */
  push32((uint32_t)(EDX));
  /* 118633cb push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 118633cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118633d0 push eax */
  push32((uint32_t)(EAX));
  /* 118633d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118633d3 call 0x118668a0 */
  push32(0x118633d8u); f_118668a0();
  /* 118633d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118633db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118633de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118633e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118633e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118633e6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118633ec push edx */
  push32((uint32_t)(EDX));
  /* 118633ed push 0x40 */
  push32((uint32_t)(0x40u));
  /* 118633ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118633f2 push eax */
  push32((uint32_t)(EAX));
  /* 118633f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118633f5 call 0x118668a0 */
  push32(0x118633fau); f_118668a0();
  /* 118633fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118633fd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863400 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863402 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863405 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863408 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186340e push edx */
  push32((uint32_t)(EDX));
  /* 1186340f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 11863411 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863414 push eax */
  push32((uint32_t)(EAX));
  /* 11863415 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863417 call 0x118668a0 */
  push32(0x1186341cu); f_118668a0();
  /* 1186341c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186341f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863422 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863424 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863427 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186342a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863430 push edx */
  push32((uint32_t)(EDX));
  /* 11863431 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 11863433 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863436 push eax */
  push32((uint32_t)(EAX));
  /* 11863437 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863439 call 0x118668a0 */
  push32(0x1186343eu); f_118668a0();
  /* 1186343e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863441 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863444 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863446 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863449 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186344c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863452 push edx */
  push32((uint32_t)(EDX));
  /* 11863453 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 11863455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863458 push eax */
  push32((uint32_t)(EAX));
  /* 11863459 push 1 */
  push32((uint32_t)(0x1u));
  /* 1186345b call 0x118668a0 */
  push32(0x11863460u); f_118668a0();
  /* 11863460 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863463 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863466 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863468 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186346b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186346e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863474 push edx */
  push32((uint32_t)(EDX));
  /* 11863475 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 11863477 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186347a push eax */
  push32((uint32_t)(EAX));
  /* 1186347b push 1 */
  push32((uint32_t)(0x1u));
  /* 1186347d call 0x118668a0 */
  push32(0x11863482u); f_118668a0();
  /* 11863482 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863485 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863488 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186348a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1186348d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863490 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863496 push edx */
  push32((uint32_t)(EDX));
  /* 11863497 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 11863499 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186349c push eax */
  push32((uint32_t)(EAX));
  /* 1186349d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186349f call 0x118668a0 */
  push32(0x118634a4u); f_118668a0();
  /* 118634a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118634a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118634aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118634ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118634af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118634b2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118634b8 push edx */
  push32((uint32_t)(EDX));
  /* 118634b9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 118634bb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118634be push eax */
  push32((uint32_t)(EAX));
  /* 118634bf push 1 */
  push32((uint32_t)(0x1u));
  /* 118634c1 call 0x118668a0 */
  push32(0x118634c6u); f_118668a0();
  /* 118634c6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118634c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118634cc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118634ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118634d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118634d4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118634da push edx */
  push32((uint32_t)(EDX));
  /* 118634db push 0x20 */
  push32((uint32_t)(0x20u));
  /* 118634dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118634e0 push eax */
  push32((uint32_t)(EAX));
  /* 118634e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 118634e3 call 0x118668a0 */
  push32(0x118634e8u); f_118668a0();
  /* 118634e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118634eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118634ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118634f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 118634f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118634f6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118634fc push edx */
  push32((uint32_t)(EDX));
  /* 118634fd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 11863502 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863505 push eax */
  push32((uint32_t)(EAX));
  /* 11863506 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863508 call 0x118668a0 */
  push32(0x1186350du); f_118668a0();
  /* 1186350d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11863513 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863515 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11863518 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1186351b:;
  /* 1186351b mov esp, ebp */
  ESP = (EBP);
  /* 1186351d pop ebp */
  EBP = (pop32());
  /* 1186351e ret  */
  ESPCHK(0x11862f90u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x11863520 (779 bytes, 265 insns) */
void f_11863520(void) {
  FTRACE(0x11863520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863520 push ebp */
  push32((uint32_t)(EBP));
  /* 11863521 mov ebp, esp */
  EBP = (ESP);
  /* 11863523 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863527 jne 0x1186352e */
  if (!C.zf) goto L_1186352e;
  /* 11863529 jmp 0x11863829 */
  goto L_11863829;
L_1186352e:;
  /* 1186352e push 2 */
  push32((uint32_t)(0x2u));
  /* 11863530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863533 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11863536 push ecx */
  push32((uint32_t)(ECX));
  /* 11863537 call 0x11859170 */
  push32(0x1186353cu); f_11859170();
  /* 1186353c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186353f push 2 */
  push32((uint32_t)(0x2u));
  /* 11863541 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863544 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11863547 push eax */
  push32((uint32_t)(EAX));
  /* 11863548 call 0x11859170 */
  push32(0x1186354du); f_11859170();
  /* 1186354d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863550 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863552 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863555 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11863558 push edx */
  push32((uint32_t)(EDX));
  /* 11863559 call 0x11859170 */
  push32(0x1186355eu); f_11859170();
  /* 1186355e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863561 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863563 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863566 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11863569 push ecx */
  push32((uint32_t)(ECX));
  /* 1186356a call 0x11859170 */
  push32(0x1186356fu); f_11859170();
  /* 1186356f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863572 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863574 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863577 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1186357a push eax */
  push32((uint32_t)(EAX));
  /* 1186357b call 0x11859170 */
  push32(0x11863580u); f_11859170();
  /* 11863580 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863583 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863585 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863588 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1186358b push edx */
  push32((uint32_t)(EDX));
  /* 1186358c call 0x11859170 */
  push32(0x11863591u); f_11859170();
  /* 11863591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863594 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863599 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1186359b push ecx */
  push32((uint32_t)(ECX));
  /* 1186359c call 0x11859170 */
  push32(0x118635a1u); f_11859170();
  /* 118635a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635a9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 118635ac push eax */
  push32((uint32_t)(EAX));
  /* 118635ad call 0x11859170 */
  push32(0x118635b2u); f_11859170();
  /* 118635b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635ba mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 118635bd push edx */
  push32((uint32_t)(EDX));
  /* 118635be call 0x11859170 */
  push32(0x118635c3u); f_11859170();
  /* 118635c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635cb mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 118635ce push ecx */
  push32((uint32_t)(ECX));
  /* 118635cf call 0x11859170 */
  push32(0x118635d4u); f_11859170();
  /* 118635d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635dc mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 118635df push eax */
  push32((uint32_t)(EAX));
  /* 118635e0 call 0x11859170 */
  push32(0x118635e5u); f_11859170();
  /* 118635e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635e8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635ed mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 118635f0 push edx */
  push32((uint32_t)(EDX));
  /* 118635f1 call 0x11859170 */
  push32(0x118635f6u); f_11859170();
  /* 118635f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118635f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118635fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118635fe mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 11863601 push ecx */
  push32((uint32_t)(ECX));
  /* 11863602 call 0x11859170 */
  push32(0x11863607u); f_11859170();
  /* 11863607 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186360a push 2 */
  push32((uint32_t)(0x2u));
  /* 1186360c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186360f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11863612 push eax */
  push32((uint32_t)(EAX));
  /* 11863613 call 0x11859170 */
  push32(0x11863618u); f_11859170();
  /* 11863618 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186361b push 2 */
  push32((uint32_t)(0x2u));
  /* 1186361d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863620 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 11863623 push edx */
  push32((uint32_t)(EDX));
  /* 11863624 call 0x11859170 */
  push32(0x11863629u); f_11859170();
  /* 11863629 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186362c push 2 */
  push32((uint32_t)(0x2u));
  /* 1186362e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863631 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 11863634 push ecx */
  push32((uint32_t)(ECX));
  /* 11863635 call 0x11859170 */
  push32(0x1186363au); f_11859170();
  /* 1186363a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186363d push 2 */
  push32((uint32_t)(0x2u));
  /* 1186363f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863642 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11863645 push eax */
  push32((uint32_t)(EAX));
  /* 11863646 call 0x11859170 */
  push32(0x1186364bu); f_11859170();
  /* 1186364b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186364e push 2 */
  push32((uint32_t)(0x2u));
  /* 11863650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863653 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 11863656 push edx */
  push32((uint32_t)(EDX));
  /* 11863657 call 0x11859170 */
  push32(0x1186365cu); f_11859170();
  /* 1186365c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186365f push 2 */
  push32((uint32_t)(0x2u));
  /* 11863661 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863664 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 11863667 push ecx */
  push32((uint32_t)(ECX));
  /* 11863668 call 0x11859170 */
  push32(0x1186366du); f_11859170();
  /* 1186366d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863670 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863675 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 11863678 push eax */
  push32((uint32_t)(EAX));
  /* 11863679 call 0x11859170 */
  push32(0x1186367eu); f_11859170();
  /* 1186367e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863681 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863686 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11863689 push edx */
  push32((uint32_t)(EDX));
  /* 1186368a call 0x11859170 */
  push32(0x1186368fu); f_11859170();
  /* 1186368f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863692 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863694 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863697 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1186369a push ecx */
  push32((uint32_t)(ECX));
  /* 1186369b call 0x11859170 */
  push32(0x118636a0u); f_11859170();
  /* 118636a0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636a8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 118636ab push eax */
  push32((uint32_t)(EAX));
  /* 118636ac call 0x11859170 */
  push32(0x118636b1u); f_11859170();
  /* 118636b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636b9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 118636bc push edx */
  push32((uint32_t)(EDX));
  /* 118636bd call 0x11859170 */
  push32(0x118636c2u); f_11859170();
  /* 118636c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636ca mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 118636cd push ecx */
  push32((uint32_t)(ECX));
  /* 118636ce call 0x11859170 */
  push32(0x118636d3u); f_11859170();
  /* 118636d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636db mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 118636de push eax */
  push32((uint32_t)(EAX));
  /* 118636df call 0x11859170 */
  push32(0x118636e4u); f_11859170();
  /* 118636e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636ec mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 118636ef push edx */
  push32((uint32_t)(EDX));
  /* 118636f0 call 0x11859170 */
  push32(0x118636f5u); f_11859170();
  /* 118636f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118636f8 push 2 */
  push32((uint32_t)(0x2u));
  /* 118636fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118636fd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11863700 push ecx */
  push32((uint32_t)(ECX));
  /* 11863701 call 0x11859170 */
  push32(0x11863706u); f_11859170();
  /* 11863706 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863709 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186370b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186370e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 11863711 push eax */
  push32((uint32_t)(EAX));
  /* 11863712 call 0x11859170 */
  push32(0x11863717u); f_11859170();
  /* 11863717 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186371a push 2 */
  push32((uint32_t)(0x2u));
  /* 1186371c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186371f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 11863722 push edx */
  push32((uint32_t)(EDX));
  /* 11863723 call 0x11859170 */
  push32(0x11863728u); f_11859170();
  /* 11863728 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186372b push 2 */
  push32((uint32_t)(0x2u));
  /* 1186372d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863730 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 11863733 push ecx */
  push32((uint32_t)(ECX));
  /* 11863734 call 0x11859170 */
  push32(0x11863739u); f_11859170();
  /* 11863739 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186373c push 2 */
  push32((uint32_t)(0x2u));
  /* 1186373e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863741 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 11863744 push eax */
  push32((uint32_t)(EAX));
  /* 11863745 call 0x11859170 */
  push32(0x1186374au); f_11859170();
  /* 1186374a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186374d push 2 */
  push32((uint32_t)(0x2u));
  /* 1186374f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863752 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 11863758 push edx */
  push32((uint32_t)(EDX));
  /* 11863759 call 0x11859170 */
  push32(0x1186375eu); f_11859170();
  /* 1186375e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863761 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863763 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863766 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1186376c push ecx */
  push32((uint32_t)(ECX));
  /* 1186376d call 0x11859170 */
  push32(0x11863772u); f_11859170();
  /* 11863772 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863775 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863777 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186377a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 11863780 push eax */
  push32((uint32_t)(EAX));
  /* 11863781 call 0x11859170 */
  push32(0x11863786u); f_11859170();
  /* 11863786 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863789 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186378b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186378e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 11863794 push edx */
  push32((uint32_t)(EDX));
  /* 11863795 call 0x11859170 */
  push32(0x1186379au); f_11859170();
  /* 1186379a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186379d push 2 */
  push32((uint32_t)(0x2u));
  /* 1186379f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118637a2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 118637a8 push ecx */
  push32((uint32_t)(ECX));
  /* 118637a9 call 0x11859170 */
  push32(0x118637aeu); f_11859170();
  /* 118637ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118637b1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118637b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118637b6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 118637bc push eax */
  push32((uint32_t)(EAX));
  /* 118637bd call 0x11859170 */
  push32(0x118637c2u); f_11859170();
  /* 118637c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118637c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 118637c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118637ca mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 118637d0 push edx */
  push32((uint32_t)(EDX));
  /* 118637d1 call 0x11859170 */
  push32(0x118637d6u); f_11859170();
  /* 118637d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118637d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 118637db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118637de mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 118637e4 push ecx */
  push32((uint32_t)(ECX));
  /* 118637e5 call 0x11859170 */
  push32(0x118637eau); f_11859170();
  /* 118637ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118637ed push 2 */
  push32((uint32_t)(0x2u));
  /* 118637ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118637f2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 118637f8 push eax */
  push32((uint32_t)(EAX));
  /* 118637f9 call 0x11859170 */
  push32(0x118637feu); f_11859170();
  /* 118637fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863801 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863806 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1186380c push edx */
  push32((uint32_t)(EDX));
  /* 1186380d call 0x11859170 */
  push32(0x11863812u); f_11859170();
  /* 11863812 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863815 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863817 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186381a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 11863820 push ecx */
  push32((uint32_t)(ECX));
  /* 11863821 call 0x11859170 */
  push32(0x11863826u); f_11859170();
  /* 11863826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11863829:;
  /* 11863829 pop ebp */
  EBP = (pop32());
  /* 1186382a ret  */
  ESPCHK(0x11863520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013830 @ 0x11863830 (678 bytes, 180 insns) */
void f_11863830(void) {
  FTRACE(0x11863830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863830 push ebp */
  push32((uint32_t)(EBP));
  /* 11863831 mov ebp, esp */
  EBP = (ESP);
  /* 11863833 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11863836 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1186383d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186383f mov ax, word ptr [0x11884ae2] */
  AX = (r16((uint32_t)(0x11884ae2)));
  /* 11863845 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11863848 cmp dword ptr [0x11884a88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186384f je 0x118639aa */
  if (C.zf) goto L_118639aa;
  /* 11863855 push 0x11884ab0 */
  push32((uint32_t)(0x11884ab0u));
  /* 1186385a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1186385c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186385f push ecx */
  push32((uint32_t)(ECX));
  /* 11863860 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863862 call 0x118668a0 */
  push32(0x11863867u); f_118668a0();
  /* 11863867 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186386a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186386d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1186386f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11863872 push 0x11884ab4 */
  push32((uint32_t)(0x11884ab4u));
  /* 11863877 push 0xf */
  push32((uint32_t)(0xfu));
  /* 11863879 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186387c push eax */
  push32((uint32_t)(EAX));
  /* 1186387d push 1 */
  push32((uint32_t)(0x1u));
  /* 1186387f call 0x118668a0 */
  push32(0x11863884u); f_118668a0();
  /* 11863884 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863887 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1186388a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1186388c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1186388f push 0x11884ab8 */
  push32((uint32_t)(0x11884ab8u));
  /* 11863894 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11863896 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863899 push edx */
  push32((uint32_t)(EDX));
  /* 1186389a push 1 */
  push32((uint32_t)(0x1u));
  /* 1186389c call 0x118668a0 */
  push32(0x118638a1u); f_118668a0();
  /* 118638a1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118638a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118638a7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 118638a9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118638ac mov edx, dword ptr [0x11884ab8] */
  EDX = (r32((uint32_t)(0x11884ab8)));
  /* 118638b2 push edx */
  push32((uint32_t)(EDX));
  /* 118638b3 call 0x11863ae0 */
  push32(0x118638b8u); f_11863ae0();
  /* 118638b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118638bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118638bf je 0x11863919 */
  if (C.zf) goto L_11863919;
  /* 118638c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118638c3 mov eax, dword ptr [0x11884ab0] */
  EAX = (r32((uint32_t)(0x11884ab0)));
  /* 118638c8 push eax */
  push32((uint32_t)(EAX));
  /* 118638c9 call 0x11859170 */
  push32(0x118638ceu); f_11859170();
  /* 118638ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118638d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 118638d3 mov ecx, dword ptr [0x11884ab4] */
  ECX = (r32((uint32_t)(0x11884ab4)));
  /* 118638d9 push ecx */
  push32((uint32_t)(ECX));
  /* 118638da call 0x11859170 */
  push32(0x118638dfu); f_11859170();
  /* 118638df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118638e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118638e4 mov edx, dword ptr [0x11884ab8] */
  EDX = (r32((uint32_t)(0x11884ab8)));
  /* 118638ea push edx */
  push32((uint32_t)(EDX));
  /* 118638eb call 0x11859170 */
  push32(0x118638f0u); f_11859170();
  /* 118638f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118638f3 mov dword ptr [0x11884ab0], 0 */
  w32((uint32_t)(0x11884ab0), (0x0u));
  /* 118638fd mov dword ptr [0x11884ab4], 0 */
  w32((uint32_t)(0x11884ab4), (0x0u));
  /* 11863907 mov dword ptr [0x11884ab8], 0 */
  w32((uint32_t)(0x11884ab8), (0x0u));
  /* 11863911 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11863914 jmp 0x11863ad2 */
  goto L_11863ad2;
L_11863919:;
  /* 11863919 mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 1186391e cmp dword ptr [eax], 0x11883d50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x11883d50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863924 je 0x11863960 */
  if (C.zf) goto L_11863960;
  /* 11863926 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863928 mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 1186392e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11863930 push edx */
  push32((uint32_t)(EDX));
  /* 11863931 call 0x11859170 */
  push32(0x11863936u); f_11859170();
  /* 11863936 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863939 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186393b mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863940 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11863943 push ecx */
  push32((uint32_t)(ECX));
  /* 11863944 call 0x11859170 */
  push32(0x11863949u); f_11859170();
  /* 11863949 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186394c push 2 */
  push32((uint32_t)(0x2u));
  /* 1186394e mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863954 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11863957 push eax */
  push32((uint32_t)(EAX));
  /* 11863958 call 0x11859170 */
  push32(0x1186395du); f_11859170();
  /* 1186395d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11863960:;
  /* 11863960 mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863966 mov edx, dword ptr [0x11884ab0] */
  EDX = (r32((uint32_t)(0x11884ab0)));
  /* 1186396c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1186396e mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863973 mov ecx, dword ptr [0x11884ab4] */
  ECX = (r32((uint32_t)(0x11884ab4)));
  /* 11863979 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1186397c mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863982 mov eax, dword ptr [0x11884ab8] */
  EAX = (r32((uint32_t)(0x11884ab8)));
  /* 11863987 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1186398a mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863990 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11863992 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11863994 mov byte ptr [0x11882ea8], al */
  w8((uint32_t)(0x11882ea8), (AL));
  /* 11863999 mov dword ptr [0x11882eac], 1 */
  w32((uint32_t)(0x11882eac), (0x1u));
  /* 118639a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118639a5 jmp 0x11863ad2 */
  goto L_11863ad2;
L_118639aa:;
  /* 118639aa push 2 */
  push32((uint32_t)(0x2u));
  /* 118639ac mov ecx, dword ptr [0x11884ab0] */
  ECX = (r32((uint32_t)(0x11884ab0)));
  /* 118639b2 push ecx */
  push32((uint32_t)(ECX));
  /* 118639b3 call 0x11859170 */
  push32(0x118639b8u); f_11859170();
  /* 118639b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118639bb push 2 */
  push32((uint32_t)(0x2u));
  /* 118639bd mov edx, dword ptr [0x11884ab4] */
  EDX = (r32((uint32_t)(0x11884ab4)));
  /* 118639c3 push edx */
  push32((uint32_t)(EDX));
  /* 118639c4 call 0x11859170 */
  push32(0x118639c9u); f_11859170();
  /* 118639c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118639cc push 2 */
  push32((uint32_t)(0x2u));
  /* 118639ce mov eax, dword ptr [0x11884ab8] */
  EAX = (r32((uint32_t)(0x11884ab8)));
  /* 118639d3 push eax */
  push32((uint32_t)(EAX));
  /* 118639d4 call 0x11859170 */
  push32(0x118639d9u); f_11859170();
  /* 118639d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118639dc mov dword ptr [0x11884ab0], 0 */
  w32((uint32_t)(0x11884ab0), (0x0u));
  /* 118639e6 mov dword ptr [0x11884ab4], 0 */
  w32((uint32_t)(0x11884ab4), (0x0u));
  /* 118639f0 mov dword ptr [0x11884ab8], 0 */
  w32((uint32_t)(0x11884ab8), (0x0u));
  /* 118639fa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 118639ff push 0x11880a2c */
  push32((uint32_t)(0x11880a2cu));
  /* 11863a04 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a06 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a08 call 0x118586e0 */
  push32(0x11863a0du); f_118586e0();
  /* 11863a0d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863a10 mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863a16 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11863a18 mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863a1e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863a21 jne 0x11863a2b */
  if (!C.zf) goto L_11863a2b;
  /* 11863a23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11863a26 jmp 0x11863ad2 */
  goto L_11863ad2;
L_11863a2b:;
  /* 11863a2b push 0x118809fc */
  push32((uint32_t)(0x118809fcu));
  /* 11863a30 mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863a35 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11863a37 push ecx */
  push32((uint32_t)(ECX));
  /* 11863a38 call 0x1185b690 */
  push32(0x11863a3du); f_1185b690();
  /* 11863a3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863a40 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 11863a45 push 0x11880a2c */
  push32((uint32_t)(0x11880a2cu));
  /* 11863a4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a4c push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a4e call 0x118586e0 */
  push32(0x11863a53u); f_118586e0();
  /* 11863a53 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863a56 mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863a5c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11863a5f mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863a64 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863a68 jne 0x11863a6f */
  if (!C.zf) goto L_11863a6f;
  /* 11863a6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11863a6d jmp 0x11863ad2 */
  goto L_11863ad2;
L_11863a6f:;
  /* 11863a6f mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863a75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11863a78 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11863a7b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 11863a80 push 0x11880a2c */
  push32((uint32_t)(0x11880a2cu));
  /* 11863a85 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a87 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863a89 call 0x118586e0 */
  push32(0x11863a8eu); f_118586e0();
  /* 11863a8e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863a91 mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863a97 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11863a9a mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863aa0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863aa4 jne 0x11863aab */
  if (!C.zf) goto L_11863aab;
  /* 11863aa6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11863aa9 jmp 0x11863ad2 */
  goto L_11863ad2;
L_11863aab:;
  /* 11863aab mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863ab0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11863ab3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11863ab6 mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863abc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11863abe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11863ac0 mov byte ptr [0x11882ea8], cl */
  w8((uint32_t)(0x11882ea8), (CL));
  /* 11863ac6 mov dword ptr [0x11882eac], 1 */
  w32((uint32_t)(0x11882eac), (0x1u));
  /* 11863ad0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11863ad2:;
  /* 11863ad2 mov esp, ebp */
  ESP = (EBP);
  /* 11863ad4 pop ebp */
  EBP = (pop32());
  /* 11863ad5 ret  */
  ESPCHK(0x11863830u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11863ae0 (125 bytes, 49 insns) */
void f_11863ae0(void) {
  FTRACE(0x11863ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11863ae1 mov ebp, esp */
  EBP = (ESP);
  /* 11863ae3 push ecx */
  push32((uint32_t)(ECX));
L_11863ae4:;
  /* 11863ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ae7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11863aea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11863aec je 0x11863b59 */
  if (C.zf) goto L_11863b59;
  /* 11863aee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863af1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11863af4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863af7 jl 0x11863b1d */
  if ((C.sf!=C.of)) goto L_11863b1d;
  /* 11863af9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863afc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11863aff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863b02 jg 0x11863b1d */
  if ((!C.zf&&C.sf==C.of)) goto L_11863b1d;
  /* 11863b04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11863b0a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11863b0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b10 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11863b12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863b18 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11863b1b jmp 0x11863b57 */
  goto L_11863b57;
L_11863b1d:;
  /* 11863b1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b20 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11863b23 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863b26 jne 0x11863b4e */
  if (!C.zf) goto L_11863b4e;
  /* 11863b28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11863b2e:;
  /* 11863b2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863b31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863b34 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11863b37 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11863b39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863b3c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863b3f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11863b42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863b45 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11863b48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11863b4a jne 0x11863b2e */
  if (!C.zf) goto L_11863b2e;
  /* 11863b4c jmp 0x11863b57 */
  goto L_11863b57;
L_11863b4e:;
  /* 11863b4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863b51 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863b54 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11863b57:;
  /* 11863b57 jmp 0x11863ae4 */
  goto L_11863ae4;
L_11863b59:;
  /* 11863b59 mov esp, ebp */
  ESP = (EBP);
  /* 11863b5b pop ebp */
  EBP = (pop32());
  /* 11863b5c ret  */
  ESPCHK(0x11863ae0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b60 @ 0x11863b60 (304 bytes, 85 insns) */
void f_11863b60(void) {
  FTRACE(0x11863b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11863b61 mov ebp, esp */
  EBP = (ESP);
  /* 11863b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11863b64 cmp dword ptr [0x11884a84], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a84))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863b6b je 0x11863c2c */
  if (C.zf) goto L_11863c2c;
  /* 11863b71 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 11863b73 push 0x11880a38 */
  push32((uint32_t)(0x11880a38u));
  /* 11863b78 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863b7a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11863b7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11863b7e call 0x11858af0 */
  push32(0x11863b83u); f_11858af0();
  /* 11863b83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863b86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11863b89 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863b8d jne 0x11863b99 */
  if (!C.zf) goto L_11863b99;
  /* 11863b8f mov eax, 1 */
  EAX = (0x1u);
  /* 11863b94 jmp 0x11863c8c */
  goto L_11863c8c;
L_11863b99:;
  /* 11863b99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863b9c push eax */
  push32((uint32_t)(EAX));
  /* 11863b9d call 0x11863c90 */
  push32(0x11863ba2u); f_11863c90();
  /* 11863ba2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11863ba7 je 0x11863bcd */
  if (C.zf) goto L_11863bcd;
  /* 11863ba9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bac push ecx */
  push32((uint32_t)(ECX));
  /* 11863bad call 0x11863f20 */
  push32(0x11863bb2u); f_11863f20();
  /* 11863bb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863bb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863bb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bba push edx */
  push32((uint32_t)(EDX));
  /* 11863bbb call 0x11859170 */
  push32(0x11863bc0u); f_11859170();
  /* 11863bc0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863bc3 mov eax, 1 */
  EAX = (0x1u);
  /* 11863bc8 jmp 0x11863c8c */
  goto L_11863c8c;
L_11863bcd:;
  /* 11863bcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bd0 mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863bd6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11863bd8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11863bda mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bdd mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863be3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11863be6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11863be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bec mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863bf2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11863bf5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11863bf8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863bfb mov dword ptr [0x11883d88], eax */
  w32((uint32_t)(0x11883d88), (EAX));
  /* 11863c00 mov ecx, dword ptr [0x11884abc] */
  ECX = (r32((uint32_t)(0x11884abc)));
  /* 11863c06 push ecx */
  push32((uint32_t)(ECX));
  /* 11863c07 call 0x11863f20 */
  push32(0x11863c0cu); f_11863f20();
  /* 11863c0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863c0f push 2 */
  push32((uint32_t)(0x2u));
  /* 11863c11 mov edx, dword ptr [0x11884abc] */
  EDX = (r32((uint32_t)(0x11884abc)));
  /* 11863c17 push edx */
  push32((uint32_t)(EDX));
  /* 11863c18 call 0x11859170 */
  push32(0x11863c1du); f_11859170();
  /* 11863c1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863c20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863c23 mov dword ptr [0x11884abc], eax */
  w32((uint32_t)(0x11884abc), (EAX));
  /* 11863c28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11863c2a jmp 0x11863c8c */
  goto L_11863c8c;
L_11863c2c:;
  /* 11863c2c mov ecx, dword ptr [0x11883d88] */
  ECX = (r32((uint32_t)(0x11883d88)));
  /* 11863c32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11863c34 mov dword ptr [0x11883d58], edx */
  w32((uint32_t)(0x11883d58), (EDX));
  /* 11863c3a mov eax, dword ptr [0x11883d88] */
  EAX = (r32((uint32_t)(0x11883d88)));
  /* 11863c3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11863c42 mov dword ptr [0x11883d5c], ecx */
  w32((uint32_t)(0x11883d5c), (ECX));
  /* 11863c48 mov edx, dword ptr [0x11883d88] */
  EDX = (r32((uint32_t)(0x11883d88)));
  /* 11863c4e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11863c51 mov dword ptr [0x11883d60], eax */
  w32((uint32_t)(0x11883d60), (EAX));
  /* 11863c56 mov dword ptr [0x11883d88], 0x11883d58 */
  w32((uint32_t)(0x11883d88), (0x11883d58u));
  /* 11863c60 mov ecx, dword ptr [0x11884abc] */
  ECX = (r32((uint32_t)(0x11884abc)));
  /* 11863c66 push ecx */
  push32((uint32_t)(ECX));
  /* 11863c67 call 0x11863f20 */
  push32(0x11863c6cu); f_11863f20();
  /* 11863c6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863c6f push 2 */
  push32((uint32_t)(0x2u));
  /* 11863c71 mov edx, dword ptr [0x11884abc] */
  EDX = (r32((uint32_t)(0x11884abc)));
  /* 11863c77 push edx */
  push32((uint32_t)(EDX));
  /* 11863c78 call 0x11859170 */
  push32(0x11863c7du); f_11859170();
  /* 11863c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863c80 mov dword ptr [0x11884abc], 0 */
  w32((uint32_t)(0x11884abc), (0x0u));
  /* 11863c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11863c8c:;
  /* 11863c8c mov esp, ebp */
  ESP = (EBP);
  /* 11863c8e pop ebp */
  EBP = (pop32());
  /* 11863c8f ret  */
  ESPCHK(0x11863b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c90 @ 0x11863c90 (525 bytes, 200 insns) */
void f_11863c90(void) {
  FTRACE(0x11863c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11863c91 mov ebp, esp */
  EBP = (ESP);
  /* 11863c93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11863c96 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11863c9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11863c9f mov ax, word ptr [0x11884adc] */
  AX = (r16((uint32_t)(0x11884adc)));
  /* 11863ca5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11863ca8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863cac jne 0x11863cb6 */
  if (!C.zf) goto L_11863cb6;
  /* 11863cae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11863cb1 jmp 0x11863e99 */
  goto L_11863e99;
L_11863cb6:;
  /* 11863cb6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863cb9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863cbc push ecx */
  push32((uint32_t)(ECX));
  /* 11863cbd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 11863cbf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863cc2 push edx */
  push32((uint32_t)(EDX));
  /* 11863cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863cc5 call 0x118668a0 */
  push32(0x11863ccau); f_118668a0();
  /* 11863cca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863ccd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863cd0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863cd2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863cd8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863cdb push edx */
  push32((uint32_t)(EDX));
  /* 11863cdc push 0x14 */
  push32((uint32_t)(0x14u));
  /* 11863cde mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863ce1 push eax */
  push32((uint32_t)(EAX));
  /* 11863ce2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863ce4 call 0x118668a0 */
  push32(0x11863ce9u); f_118668a0();
  /* 11863ce9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863cec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863cef or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863cf1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863cf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863cf7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863cfa push edx */
  push32((uint32_t)(EDX));
  /* 11863cfb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11863cfd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863d00 push eax */
  push32((uint32_t)(EAX));
  /* 11863d01 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863d03 call 0x118668a0 */
  push32(0x11863d08u); f_118668a0();
  /* 11863d08 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863d0e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863d10 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863d13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863d16 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d19 push edx */
  push32((uint32_t)(EDX));
  /* 11863d1a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 11863d1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863d1f push eax */
  push32((uint32_t)(EAX));
  /* 11863d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 11863d22 call 0x118668a0 */
  push32(0x11863d27u); f_118668a0();
  /* 11863d27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d2a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863d2d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863d2f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863d32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863d35 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d38 push edx */
  push32((uint32_t)(EDX));
  /* 11863d39 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11863d3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863d3e push eax */
  push32((uint32_t)(EAX));
  /* 11863d3f push 1 */
  push32((uint32_t)(0x1u));
  /* 11863d41 call 0x118668a0 */
  push32(0x11863d46u); f_118668a0();
  /* 11863d46 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863d4c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863d4e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863d51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863d54 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11863d57 push eax */
  push32((uint32_t)(EAX));
  /* 11863d58 call 0x11863ea0 */
  push32(0x11863d5du); f_11863ea0();
  /* 11863d5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863d63 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d66 push ecx */
  push32((uint32_t)(ECX));
  /* 11863d67 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 11863d69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863d6c push edx */
  push32((uint32_t)(EDX));
  /* 11863d6d push 1 */
  push32((uint32_t)(0x1u));
  /* 11863d6f call 0x118668a0 */
  push32(0x11863d74u); f_118668a0();
  /* 11863d74 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863d7a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863d7c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863d7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863d82 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d85 push edx */
  push32((uint32_t)(EDX));
  /* 11863d86 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 11863d88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863d8b push eax */
  push32((uint32_t)(EAX));
  /* 11863d8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11863d8e call 0x118668a0 */
  push32(0x11863d93u); f_118668a0();
  /* 11863d93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863d96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863d99 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863d9b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863d9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863da1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863da4 push edx */
  push32((uint32_t)(EDX));
  /* 11863da5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11863da7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863daa push eax */
  push32((uint32_t)(EAX));
  /* 11863dab push 0 */
  push32((uint32_t)(0x0u));
  /* 11863dad call 0x118668a0 */
  push32(0x11863db2u); f_118668a0();
  /* 11863db2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863db5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863db8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863dba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863dbd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863dc0 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863dc3 push edx */
  push32((uint32_t)(EDX));
  /* 11863dc4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11863dc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863dc9 push eax */
  push32((uint32_t)(EAX));
  /* 11863dca push 0 */
  push32((uint32_t)(0x0u));
  /* 11863dcc call 0x118668a0 */
  push32(0x11863dd1u); f_118668a0();
  /* 11863dd1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863dd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863dd7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863dd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863ddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ddf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863de2 push edx */
  push32((uint32_t)(EDX));
  /* 11863de3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11863de5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863de8 push eax */
  push32((uint32_t)(EAX));
  /* 11863de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863deb call 0x118668a0 */
  push32(0x11863df0u); f_118668a0();
  /* 11863df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863df3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863df6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863df8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863dfb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863dfe add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e01 push edx */
  push32((uint32_t)(EDX));
  /* 11863e02 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 11863e04 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863e07 push eax */
  push32((uint32_t)(EAX));
  /* 11863e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863e0a call 0x118668a0 */
  push32(0x11863e0fu); f_118668a0();
  /* 11863e0f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863e15 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863e17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863e1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863e1d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e20 push edx */
  push32((uint32_t)(EDX));
  /* 11863e21 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 11863e23 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863e26 push eax */
  push32((uint32_t)(EAX));
  /* 11863e27 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863e29 call 0x118668a0 */
  push32(0x11863e2eu); f_118668a0();
  /* 11863e2e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e31 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863e34 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863e36 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863e39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863e3c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e3f push edx */
  push32((uint32_t)(EDX));
  /* 11863e40 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 11863e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863e45 push eax */
  push32((uint32_t)(EAX));
  /* 11863e46 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863e48 call 0x118668a0 */
  push32(0x11863e4du); f_118668a0();
  /* 11863e4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e50 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863e53 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863e55 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863e58 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863e5b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e5e push edx */
  push32((uint32_t)(EDX));
  /* 11863e5f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 11863e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863e64 push eax */
  push32((uint32_t)(EAX));
  /* 11863e65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863e67 call 0x118668a0 */
  push32(0x11863e6cu); f_118668a0();
  /* 11863e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863e72 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863e74 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863e77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863e7a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e7d push edx */
  push32((uint32_t)(EDX));
  /* 11863e7e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 11863e80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863e83 push eax */
  push32((uint32_t)(EAX));
  /* 11863e84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11863e86 call 0x118668a0 */
  push32(0x11863e8bu); f_118668a0();
  /* 11863e8b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863e8e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11863e91 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11863e93 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11863e96 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11863e99:;
  /* 11863e99 mov esp, ebp */
  ESP = (EBP);
  /* 11863e9b pop ebp */
  EBP = (pop32());
  /* 11863e9c ret  */
  ESPCHK(0x11863c90u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x11863ea0 (125 bytes, 49 insns) */
void f_11863ea0(void) {
  FTRACE(0x11863ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11863ea1 mov ebp, esp */
  EBP = (ESP);
  /* 11863ea3 push ecx */
  push32((uint32_t)(ECX));
L_11863ea4:;
  /* 11863ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11863eaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11863eac je 0x11863f19 */
  if (C.zf) goto L_11863f19;
  /* 11863eae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863eb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11863eb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863eb7 jl 0x11863edd */
  if ((C.sf!=C.of)) goto L_11863edd;
  /* 11863eb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11863ebf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863ec2 jg 0x11863edd */
  if ((!C.zf&&C.sf==C.of)) goto L_11863edd;
  /* 11863ec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11863eca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11863ecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ed0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11863ed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863ed8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11863edb jmp 0x11863f17 */
  goto L_11863f17;
L_11863edd:;
  /* 11863edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863ee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11863ee3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863ee6 jne 0x11863f0e */
  if (!C.zf) goto L_11863f0e;
  /* 11863ee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863eeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11863eee:;
  /* 11863eee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863ef1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863ef4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11863ef7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11863ef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863efc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863eff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11863f02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11863f05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11863f08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11863f0a jne 0x11863eee */
  if (!C.zf) goto L_11863eee;
  /* 11863f0c jmp 0x11863f17 */
  goto L_11863f17;
L_11863f0e:;
  /* 11863f0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11863f17:;
  /* 11863f17 jmp 0x11863ea4 */
  goto L_11863ea4;
L_11863f19:;
  /* 11863f19 mov esp, ebp */
  ESP = (EBP);
  /* 11863f1b pop ebp */
  EBP = (pop32());
  /* 11863f1c ret  */
  ESPCHK(0x11863ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013f20 @ 0x11863f20 (147 bytes, 52 insns) */
void f_11863f20(void) {
  FTRACE(0x11863f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11863f21 mov ebp, esp */
  EBP = (ESP);
  /* 11863f23 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863f27 jne 0x11863f2e */
  if (!C.zf) goto L_11863f2e;
  /* 11863f29 jmp 0x11863fb1 */
  goto L_11863fb1;
L_11863f2e:;
  /* 11863f2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f31 cmp dword ptr [eax + 0xc], 0x11884b18 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x11884b18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863f38 je 0x11863fb1 */
  if (C.zf) goto L_11863fb1;
  /* 11863f3a push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11863f42 push edx */
  push32((uint32_t)(EDX));
  /* 11863f43 call 0x11859170 */
  push32(0x11863f48u); f_11859170();
  /* 11863f48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f4b push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f50 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11863f53 push ecx */
  push32((uint32_t)(ECX));
  /* 11863f54 call 0x11859170 */
  push32(0x11863f59u); f_11859170();
  /* 11863f59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f5c push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f61 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11863f64 push eax */
  push32((uint32_t)(EAX));
  /* 11863f65 call 0x11859170 */
  push32(0x11863f6au); f_11859170();
  /* 11863f6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f6d push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f72 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11863f75 push edx */
  push32((uint32_t)(EDX));
  /* 11863f76 call 0x11859170 */
  push32(0x11863f7bu); f_11859170();
  /* 11863f7b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f83 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11863f86 push ecx */
  push32((uint32_t)(ECX));
  /* 11863f87 call 0x11859170 */
  push32(0x11863f8cu); f_11859170();
  /* 11863f8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863f8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11863f91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863f94 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11863f97 push eax */
  push32((uint32_t)(EAX));
  /* 11863f98 call 0x11859170 */
  push32(0x11863f9du); f_11859170();
  /* 11863f9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11863fa0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11863fa2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11863fa5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 11863fa8 push edx */
  push32((uint32_t)(EDX));
  /* 11863fa9 call 0x11859170 */
  push32(0x11863faeu); f_11859170();
  /* 11863fae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11863fb1:;
  /* 11863fb1 pop ebp */
  EBP = (pop32());
  /* 11863fb2 ret  */
  ESPCHK(0x11863f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10013fc0 @ 0x11863fc0 (928 bytes, 284 insns) */
void f_11863fc0(void) {
  FTRACE(0x11863fc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11863fc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11863fc1 mov ebp, esp */
  EBP = (ESP);
  /* 11863fc3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11863fc6 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11863fcd mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11863fd4 cmp dword ptr [0x11884a80], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a80))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863fdb je 0x11864311 */
  if (C.zf) goto L_11864311;
  /* 11863fe1 cmp dword ptr [0x11884a90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884a90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11863fe8 jne 0x11864010 */
  if (!C.zf) goto L_11864010;
  /* 11863fea push 0x11884a90 */
  push32((uint32_t)(0x11884a90u));
  /* 11863fef push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11863ff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11863ff6 mov ax, word ptr [0x11884ad4] */
  AX = (r16((uint32_t)(0x11884ad4)));
  /* 11863ffc push eax */
  push32((uint32_t)(EAX));
  /* 11863ffd push 0 */
  push32((uint32_t)(0x0u));
  /* 11863fff call 0x118668a0 */
  push32(0x11864004u); f_118668a0();
  /* 11864004 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864009 je 0x11864010 */
  if (C.zf) goto L_11864010;
  /* 1186400b jmp 0x118642d2 */
  goto L_118642d2;
L_11864010:;
  /* 11864010 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 11864012 push 0x11880a44 */
  push32((uint32_t)(0x11880a44u));
  /* 11864017 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864019 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1186401e call 0x118586e0 */
  push32(0x11864023u); f_118586e0();
  /* 11864023 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864026 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11864029 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1186402b push 0x11880a44 */
  push32((uint32_t)(0x11880a44u));
  /* 11864030 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864032 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11864037 call 0x118586e0 */
  push32(0x1186403cu); f_118586e0();
  /* 1186403c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186403f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11864042 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 11864044 push 0x11880a44 */
  push32((uint32_t)(0x11880a44u));
  /* 11864049 push 2 */
  push32((uint32_t)(0x2u));
  /* 1186404b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11864050 call 0x118586e0 */
  push32(0x11864055u); f_118586e0();
  /* 11864055 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864058 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1186405b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1186405d push 0x11880a44 */
  push32((uint32_t)(0x11880a44u));
  /* 11864062 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864064 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 11864069 call 0x118586e0 */
  push32(0x1186406eu); f_118586e0();
  /* 1186406e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864071 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11864074 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864078 je 0x1186408c */
  if (C.zf) goto L_1186408c;
  /* 1186407a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186407e je 0x1186408c */
  if (C.zf) goto L_1186408c;
  /* 11864080 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864084 je 0x1186408c */
  if (C.zf) goto L_1186408c;
  /* 11864086 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186408a jne 0x11864091 */
  if (!C.zf) goto L_11864091;
L_1186408c:;
  /* 1186408c jmp 0x118642d2 */
  goto L_118642d2;
L_11864091:;
  /* 11864091 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11864094 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11864097 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1186409e jmp 0x118640a9 */
  goto L_118640a9;
L_118640a0:;
  /* 118640a0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 118640a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118640a6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_118640a9:;
  /* 118640a9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118640b0 jge 0x118640c5 */
  if ((C.sf==C.of)) goto L_118640c5;
  /* 118640b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 118640b5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 118640b8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 118640ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 118640bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118640c0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118640c3 jmp 0x118640a0 */
  goto L_118640a0;
L_118640c5:;
  /* 118640c5 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 118640c8 push eax */
  push32((uint32_t)(EAX));
  /* 118640c9 mov ecx, dword ptr [0x11884a90] */
  ECX = (r32((uint32_t)(0x11884a90)));
  /* 118640cf push ecx */
  push32((uint32_t)(ECX));
  /* 118640d0 call dword ptr [0x11887344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887344))), 0x118640d6u);
  /* 118640d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118640d8 jne 0x118640df */
  if (!C.zf) goto L_118640df;
  /* 118640da jmp 0x118642d2 */
  goto L_118642d2;
L_118640df:;
  /* 118640df cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118640e3 jbe 0x118640ea */
  if ((C.cf||C.zf)) goto L_118640ea;
  /* 118640e5 jmp 0x118642d2 */
  goto L_118642d2;
L_118640ea:;
  /* 118640ea mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118640ed and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 118640f3 mov dword ptr [0x11882ea4], edx */
  w32((uint32_t)(0x11882ea4), (EDX));
  /* 118640f9 cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864100 jle 0x11864159 */
  if ((C.zf||C.sf!=C.of)) goto L_11864159;
  /* 11864102 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 11864105 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11864108 jmp 0x11864113 */
  goto L_11864113;
L_1186410a:;
  /* 1186410a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186410d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864110 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11864113:;
  /* 11864113 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864118 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1186411a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186411c je 0x11864159 */
  if (C.zf) goto L_11864159;
  /* 1186411e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864121 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11864123 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11864126 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11864128 je 0x11864159 */
  if (C.zf) goto L_11864159;
  /* 1186412a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186412d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1186412f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11864131 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11864134 jmp 0x1186413f */
  goto L_1186413f;
L_11864136:;
  /* 11864136 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11864139 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186413c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1186413f:;
  /* 1186413f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864142 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864144 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11864147 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186414a jg 0x11864157 */
  if ((!C.zf&&C.sf==C.of)) goto L_11864157;
  /* 1186414c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1186414f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864152 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11864155 jmp 0x11864136 */
  goto L_11864136;
L_11864157:;
  /* 11864157 jmp 0x1186410a */
  goto L_1186410a;
L_11864159:;
  /* 11864159 push 0 */
  push32((uint32_t)(0x0u));
  /* 1186415b push 0 */
  push32((uint32_t)(0x0u));
  /* 1186415d push 0 */
  push32((uint32_t)(0x0u));
  /* 1186415f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11864162 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864165 push eax */
  push32((uint32_t)(EAX));
  /* 11864166 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1186416b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1186416e push ecx */
  push32((uint32_t)(ECX));
  /* 1186416f push 1 */
  push32((uint32_t)(0x1u));
  /* 11864171 call 0x11860910 */
  push32(0x11864176u); f_11860910();
  /* 11864176 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864179 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186417b jne 0x11864182 */
  if (!C.zf) goto L_11864182;
  /* 1186417d jmp 0x118642d2 */
  goto L_118642d2;
L_11864182:;
  /* 11864182 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11864185 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1186418a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1186418d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11864190 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11864197 jmp 0x118641a2 */
  goto L_118641a2;
L_11864199:;
  /* 11864199 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1186419c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186419f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_118641a2:;
  /* 118641a2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118641a9 jge 0x118641c0 */
  if ((C.sf==C.of)) goto L_118641c0;
  /* 118641ab mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 118641ae mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 118641b2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 118641b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 118641b8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118641bb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 118641be jmp 0x11864199 */
  goto L_11864199;
L_118641c0:;
  /* 118641c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 118641c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 118641c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118641c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118641ca push edx */
  push32((uint32_t)(EDX));
  /* 118641cb push 0x100 */
  push32((uint32_t)(0x100u));
  /* 118641d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 118641d3 push eax */
  push32((uint32_t)(EAX));
  /* 118641d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 118641d6 call 0x11866b40 */
  push32(0x118641dbu); f_11866b40();
  /* 118641db add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118641de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118641e0 jne 0x118641e7 */
  if (!C.zf) goto L_118641e7;
  /* 118641e2 jmp 0x118642d2 */
  goto L_118642d2;
L_118641e7:;
  /* 118641e7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118641ea mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 118641ef cmp dword ptr [0x11882ea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11882ea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118641f6 jle 0x11864253 */
  if ((C.zf||C.sf!=C.of)) goto L_11864253;
  /* 118641f8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 118641fb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 118641fe jmp 0x11864209 */
  goto L_11864209;
L_11864200:;
  /* 11864200 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864203 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864206 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11864209:;
  /* 11864209 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1186420c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1186420e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11864210 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11864212 je 0x11864253 */
  if (C.zf) goto L_11864253;
  /* 11864214 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864217 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864219 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1186421c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186421e je 0x11864253 */
  if (C.zf) goto L_11864253;
  /* 11864220 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864223 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864225 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11864227 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1186422a jmp 0x11864235 */
  goto L_11864235;
L_1186422c:;
  /* 1186422c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1186422f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864232 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11864235:;
  /* 11864235 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11864238 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186423a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1186423d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864240 jg 0x11864251 */
  if ((!C.zf&&C.sf==C.of)) goto L_11864251;
  /* 11864242 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11864245 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11864248 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1186424f jmp 0x1186422c */
  goto L_1186422c;
L_11864251:;
  /* 11864251 jmp 0x11864200 */
  goto L_11864200;
L_11864253:;
  /* 11864253 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11864256 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864259 mov dword ptr [0x11882c98], eax */
  w32((uint32_t)(0x11882c98), (EAX));
  /* 1186425e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11864261 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864264 mov dword ptr [0x11882c9c], ecx */
  w32((uint32_t)(0x11882c9c), (ECX));
  /* 1186426a cmp dword ptr [0x11884ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864271 je 0x11864284 */
  if (C.zf) goto L_11864284;
  /* 11864273 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864275 mov edx, dword ptr [0x11884ac0] */
  EDX = (r32((uint32_t)(0x11884ac0)));
  /* 1186427b push edx */
  push32((uint32_t)(EDX));
  /* 1186427c call 0x11859170 */
  push32(0x11864281u); f_11859170();
  /* 11864281 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11864284:;
  /* 11864284 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11864287 mov dword ptr [0x11884ac0], eax */
  w32((uint32_t)(0x11884ac0), (EAX));
  /* 1186428c cmp dword ptr [0x11884ac4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884ac4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864293 je 0x118642a6 */
  if (C.zf) goto L_118642a6;
  /* 11864295 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864297 mov ecx, dword ptr [0x11884ac4] */
  ECX = (r32((uint32_t)(0x11884ac4)));
  /* 1186429d push ecx */
  push32((uint32_t)(ECX));
  /* 1186429e call 0x11859170 */
  push32(0x118642a3u); f_11859170();
  /* 118642a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118642a6:;
  /* 118642a6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118642a9 mov dword ptr [0x11884ac4], edx */
  w32((uint32_t)(0x11884ac4), (EDX));
  /* 118642af push 2 */
  push32((uint32_t)(0x2u));
  /* 118642b1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118642b4 push eax */
  push32((uint32_t)(EAX));
  /* 118642b5 call 0x11859170 */
  push32(0x118642bau); f_11859170();
  /* 118642ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118642bd push 2 */
  push32((uint32_t)(0x2u));
  /* 118642bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 118642c2 push ecx */
  push32((uint32_t)(ECX));
  /* 118642c3 call 0x11859170 */
  push32(0x118642c8u); f_11859170();
  /* 118642c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118642cb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118642cd jmp 0x1186435c */
  goto L_1186435c;
L_118642d2:;
  /* 118642d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 118642d4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 118642d7 push edx */
  push32((uint32_t)(EDX));
  /* 118642d8 call 0x11859170 */
  push32(0x118642ddu); f_11859170();
  /* 118642dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118642e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 118642e2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 118642e5 push eax */
  push32((uint32_t)(EAX));
  /* 118642e6 call 0x11859170 */
  push32(0x118642ebu); f_11859170();
  /* 118642eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118642ee push 2 */
  push32((uint32_t)(0x2u));
  /* 118642f0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 118642f3 push ecx */
  push32((uint32_t)(ECX));
  /* 118642f4 call 0x11859170 */
  push32(0x118642f9u); f_11859170();
  /* 118642f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118642fc push 2 */
  push32((uint32_t)(0x2u));
  /* 118642fe mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11864301 push edx */
  push32((uint32_t)(EDX));
  /* 11864302 call 0x11859170 */
  push32(0x11864307u); f_11859170();
  /* 11864307 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186430a mov eax, 1 */
  EAX = (0x1u);
  /* 1186430f jmp 0x1186435c */
  goto L_1186435c;
L_11864311:;
  /* 11864311 mov dword ptr [0x11882c98], 0x11882ca2 */
  w32((uint32_t)(0x11882c98), (0x11882ca2u));
  /* 1186431b mov dword ptr [0x11882c9c], 0x11882ca2 */
  w32((uint32_t)(0x11882c9c), (0x11882ca2u));
  /* 11864325 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864327 mov eax, dword ptr [0x11884ac0] */
  EAX = (r32((uint32_t)(0x11884ac0)));
  /* 1186432c push eax */
  push32((uint32_t)(EAX));
  /* 1186432d call 0x11859170 */
  push32(0x11864332u); f_11859170();
  /* 11864332 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864335 push 2 */
  push32((uint32_t)(0x2u));
  /* 11864337 mov ecx, dword ptr [0x11884ac4] */
  ECX = (r32((uint32_t)(0x11884ac4)));
  /* 1186433d push ecx */
  push32((uint32_t)(ECX));
  /* 1186433e call 0x11859170 */
  push32(0x11864343u); f_11859170();
  /* 11864343 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864346 mov dword ptr [0x11884ac0], 0 */
  w32((uint32_t)(0x11884ac0), (0x0u));
  /* 11864350 mov dword ptr [0x11884ac4], 0 */
  w32((uint32_t)(0x11884ac4), (0x0u));
  /* 1186435a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1186435c:;
  /* 1186435c mov esp, ebp */
  ESP = (EBP);
  /* 1186435e pop ebp */
  EBP = (pop32());
  /* 1186435f ret  */
  ESPCHK(0x11863fc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014360 @ 0x11864360 (7 bytes, 5 insns) */
void f_11864360(void) {
  FTRACE(0x11864360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864360 push ebp */
  push32((uint32_t)(EBP));
  /* 11864361 mov ebp, esp */
  EBP = (ESP);
  /* 11864363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864365 pop ebp */
  EBP = (pop32());
  /* 11864366 ret  */
  ESPCHK(0x11864360u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11864370 (129 bytes, 56 insns) */
void f_11864370(void) {
  FTRACE(0x11864370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864370 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11864374 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11864378 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1186437e jne 0x118643bc */
  if (!C.zf) goto L_118643bc;
L_11864380:;
  /* 11864380 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11864382 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11864384 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 11864386 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11864388 je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 1186438a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1186438d jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 1186438f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11864391 je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 11864393 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11864396 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11864399 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 1186439b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1186439d je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 1186439f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118643a2 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 118643a4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118643a7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118643aa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118643ac jne 0x11864380 */
  if (!C.zf) goto L_11864380;
  /* 118643ae mov edi, edi */
  EDI = (EDI);
L_118643b0:;
  /* 118643b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118643b2 ret  */
  ESPCHK(0x11864370u, _esp0);
  ESP += 4; return;
  /* 118643b3 nop  */
  /* nop */
L_118643b4:;
  /* 118643b4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118643b6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118643b8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 118643b9 ret  */
  ESPCHK(0x11864370u, _esp0);
  ESP += 4; return;
  /* 118643ba mov edi, edi */
  EDI = (EDI);
L_118643bc:;
  /* 118643bc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 118643c2 je 0x118643d8 */
  if (C.zf) goto L_118643d8;
  /* 118643c4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 118643c6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 118643c7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118643c9 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 118643cb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 118643cc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118643ce je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 118643d0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 118643d6 je 0x11864380 */
  if (C.zf) goto L_11864380;
L_118643d8:;
  /* 118643d8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 118643db add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118643de cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118643e0 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 118643e2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118643e4 je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 118643e6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 118643e9 jne 0x118643b4 */
  if (!C.zf) goto L_118643b4;
  /* 118643eb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 118643ed je 0x118643b0 */
  if (C.zf) goto L_118643b0;
  /* 118643ef add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118643f2 jmp 0x11864380 */
  goto L_11864380;
}

/* FUN_10014400 @ 0x11864400 (62 bytes, 35 insns) */
void f_11864400(void) {
  FTRACE(0x11864400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864400 push ebp */
  push32((uint32_t)(EBP));
  /* 11864401 mov ebp, esp */
  EBP = (ESP);
  /* 11864403 push esi */
  push32((uint32_t)(ESI));
  /* 11864404 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864406 push eax */
  push32((uint32_t)(EAX));
  /* 11864407 push eax */
  push32((uint32_t)(EAX));
  /* 11864408 push eax */
  push32((uint32_t)(EAX));
  /* 11864409 push eax */
  push32((uint32_t)(EAX));
  /* 1186440a push eax */
  push32((uint32_t)(EAX));
  /* 1186440b push eax */
  push32((uint32_t)(EAX));
  /* 1186440c push eax */
  push32((uint32_t)(EAX));
  /* 1186440d push eax */
  push32((uint32_t)(EAX));
  /* 1186440e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11864411 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11864414:;
  /* 11864414 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11864416 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11864418 je 0x11864421 */
  if (C.zf) goto L_11864421;
  /* 1186441a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1186441b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1186441b");
  /* 1186441f jmp 0x11864414 */
  goto L_11864414;
L_11864421:;
  /* 11864421 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11864424 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11864427 nop  */
  /* nop */
L_11864428:;
  /* 11864428 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11864429 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1186442b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1186442d je 0x11864436 */
  if (C.zf) goto L_11864436;
  /* 1186442f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11864430 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11864430");
  /* 11864434 jae 0x11864428 */
  if (!C.cf) goto L_11864428;
L_11864436:;
  /* 11864436 mov eax, ecx */
  EAX = (ECX);
  /* 11864438 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186443b pop esi */
  ESI = (pop32());
  /* 1186443c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1186443d ret  */
  ESPCHK(0x11864400u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11864440 (56 bytes, 31 insns) */
void f_11864440(void) {
  FTRACE(0x11864440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864440 push ebp */
  push32((uint32_t)(EBP));
  /* 11864441 mov ebp, esp */
  EBP = (ESP);
  /* 11864443 push edi */
  push32((uint32_t)(EDI));
  /* 11864444 push esi */
  push32((uint32_t)(ESI));
  /* 11864445 push ebx */
  push32((uint32_t)(EBX));
  /* 11864446 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11864449 jecxz 0x11864471 */
  x86_unimpl("jecxz @ 0x11864449");
  /* 1186444b mov ebx, ecx */
  EBX = (ECX);
  /* 1186444d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11864450 mov esi, edi */
  ESI = (EDI);
  /* 11864452 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864454 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11864456 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864458 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186445a mov edi, esi */
  EDI = (ESI);
  /* 1186445c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1186445f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11864461 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11864464 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864466 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11864469 ja 0x1186446f */
  if ((!C.cf&&!C.zf)) goto L_1186446f;
  /* 1186446b je 0x11864471 */
  if (C.zf) goto L_11864471;
  /* 1186446d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1186446e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1186446f:;
  /* 1186446f not ecx */
  ECX = (~(ECX));
L_11864471:;
  /* 11864471 mov eax, ecx */
  EAX = (ECX);
  /* 11864473 pop ebx */
  EBX = (pop32());
  /* 11864474 pop esi */
  ESI = (pop32());
  /* 11864475 pop edi */
  EDI = (pop32());
  /* 11864476 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11864477 ret  */
  ESPCHK(0x11864440u, _esp0);
  ESP += 4; return;
}

/* FUN_10014480 @ 0x11864480 (58 bytes, 32 insns) */
void f_11864480(void) {
  FTRACE(0x11864480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864480 push ebp */
  push32((uint32_t)(EBP));
  /* 11864481 mov ebp, esp */
  EBP = (ESP);
  /* 11864483 push esi */
  push32((uint32_t)(ESI));
  /* 11864484 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864486 push eax */
  push32((uint32_t)(EAX));
  /* 11864487 push eax */
  push32((uint32_t)(EAX));
  /* 11864488 push eax */
  push32((uint32_t)(EAX));
  /* 11864489 push eax */
  push32((uint32_t)(EAX));
  /* 1186448a push eax */
  push32((uint32_t)(EAX));
  /* 1186448b push eax */
  push32((uint32_t)(EAX));
  /* 1186448c push eax */
  push32((uint32_t)(EAX));
  /* 1186448d push eax */
  push32((uint32_t)(EAX));
  /* 1186448e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11864491 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11864494:;
  /* 11864494 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11864496 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11864498 je 0x118644a1 */
  if (C.zf) goto L_118644a1;
  /* 1186449a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1186449b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1186449b");
  /* 1186449f jmp 0x11864494 */
  goto L_11864494;
L_118644a1:;
  /* 118644a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_118644a4:;
  /* 118644a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 118644a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 118644a8 je 0x118644b4 */
  if (C.zf) goto L_118644b4;
  /* 118644aa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 118644ab bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x118644ab");
  /* 118644af jae 0x118644a4 */
  if (!C.cf) goto L_118644a4;
  /* 118644b1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_118644b4:;
  /* 118644b4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118644b7 pop esi */
  ESI = (pop32());
  /* 118644b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 118644b9 ret  */
  ESPCHK(0x11864480u, _esp0);
  ESP += 4; return;
}

/* FUN_100144c0 @ 0x118644c0 (512 bytes, 147 insns) */
void f_118644c0(void) {
  FTRACE(0x118644c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118644c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118644c1 mov ebp, esp */
  EBP = (ESP);
  /* 118644c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118644c6 cmp dword ptr [0x11884b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118644cd jne 0x118644f2 */
  if (!C.zf) goto L_118644f2;
  /* 118644cf call 0x11864f90 */
  push32(0x118644d4u); f_11864f90();
  /* 118644d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118644d6 je 0x118644e2 */
  if (C.zf) goto L_118644e2;
  /* 118644d8 mov eax, dword ptr [0x11887308] */
  EAX = (r32((uint32_t)(0x11887308)));
  /* 118644dd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118644e0 jmp 0x118644e9 */
  goto L_118644e9;
L_118644e2:;
  /* 118644e2 mov dword ptr [ebp - 8], 0x11864fe0 */
  w32((uint32_t)(EBP + -0x8), (0x11864fe0u));
L_118644e9:;
  /* 118644e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 118644ec mov dword ptr [0x11884b0c], ecx */
  w32((uint32_t)(0x11884b0c), (ECX));
L_118644f2:;
  /* 118644f2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118644f6 jne 0x11864502 */
  if (!C.zf) goto L_11864502;
  /* 118644f8 call 0x11864de0 */
  push32(0x118644fdu); f_11864de0();
  /* 118644fd jmp 0x118645ce */
  goto L_118645ce;
L_11864502:;
  /* 11864502 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864505 mov dword ptr [0x11884afc], edx */
  w32((uint32_t)(0x11884afc), (EDX));
  /* 1186450b cmp dword ptr [0x11884afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864512 je 0x11864534 */
  if (C.zf) goto L_11864534;
  /* 11864514 mov eax, dword ptr [0x11884afc] */
  EAX = (r32((uint32_t)(0x11884afc)));
  /* 11864519 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1186451c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186451e je 0x11864534 */
  if (C.zf) goto L_11864534;
  /* 11864520 push 0x11884afc */
  push32((uint32_t)(0x11884afcu));
  /* 11864525 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11864527 push 0x11883a90 */
  push32((uint32_t)(0x11883a90u));
  /* 1186452c call 0x118646c0 */
  push32(0x11864531u); f_118646c0();
  /* 11864531 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11864534:;
  /* 11864534 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864537 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186453a mov dword ptr [0x11884b00], edx */
  w32((uint32_t)(0x11884b00), (EDX));
  /* 11864540 cmp dword ptr [0x11884b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864547 je 0x11864569 */
  if (C.zf) goto L_11864569;
  /* 11864549 mov eax, dword ptr [0x11884b00] */
  EAX = (r32((uint32_t)(0x11884b00)));
  /* 1186454e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11864551 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11864553 je 0x11864569 */
  if (C.zf) goto L_11864569;
  /* 11864555 push 0x11884b00 */
  push32((uint32_t)(0x11884b00u));
  /* 1186455a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1186455c push 0x118839d8 */
  push32((uint32_t)(0x118839d8u));
  /* 11864561 call 0x118646c0 */
  push32(0x11864566u); f_118646c0();
  /* 11864566 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11864569:;
  /* 11864569 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 11864573 cmp dword ptr [0x11884afc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884afc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186457a je 0x118645ad */
  if (C.zf) goto L_118645ad;
  /* 1186457c mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864582 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11864585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864587 je 0x118645ad */
  if (C.zf) goto L_118645ad;
  /* 11864589 cmp dword ptr [0x11884b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864590 je 0x118645a6 */
  if (C.zf) goto L_118645a6;
  /* 11864592 mov ecx, dword ptr [0x11884b00] */
  ECX = (r32((uint32_t)(0x11884b00)));
  /* 11864598 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1186459b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1186459d je 0x118645a6 */
  if (C.zf) goto L_118645a6;
  /* 1186459f call 0x11864750 */
  push32(0x118645a4u); f_11864750();
  /* 118645a4 jmp 0x118645ab */
  goto L_118645ab;
L_118645a6:;
  /* 118645a6 call 0x11864b40 */
  push32(0x118645abu); f_11864b40();
L_118645ab:;
  /* 118645ab jmp 0x118645ce */
  goto L_118645ce;
L_118645ad:;
  /* 118645ad cmp dword ptr [0x11884b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118645b4 je 0x118645c9 */
  if (C.zf) goto L_118645c9;
  /* 118645b6 mov eax, dword ptr [0x11884b00] */
  EAX = (r32((uint32_t)(0x11884b00)));
  /* 118645bb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 118645be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118645c0 je 0x118645c9 */
  if (C.zf) goto L_118645c9;
  /* 118645c2 call 0x11864ce0 */
  push32(0x118645c7u); f_11864ce0();
  /* 118645c7 jmp 0x118645ce */
  goto L_118645ce;
L_118645c9:;
  /* 118645c9 call 0x11864de0 */
  push32(0x118645ceu); f_11864de0();
L_118645ce:;
  /* 118645ce cmp dword ptr [0x11884b04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884b04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118645d5 jne 0x118645de */
  if (!C.zf) goto L_118645de;
  /* 118645d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118645d9 jmp 0x118646bc */
  goto L_118646bc;
L_118645de:;
  /* 118645de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118645e1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118645e7 push edx */
  push32((uint32_t)(EDX));
  /* 118645e8 call 0x11864e10 */
  push32(0x118645edu); f_11864e10();
  /* 118645ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118645f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118645f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118645f7 je 0x1186460c */
  if (C.zf) goto L_1186460c;
  /* 118645f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118645fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11864601 push eax */
  push32((uint32_t)(EAX));
  /* 11864602 call dword ptr [0x1188730c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188730c))), 0x11864608u);
  /* 11864608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186460a jne 0x11864613 */
  if (!C.zf) goto L_11864613;
L_1186460c:;
  /* 1186460c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186460e jmp 0x118646bc */
  goto L_118646bc;
L_11864613:;
  /* 11864613 push 1 */
  push32((uint32_t)(0x1u));
  /* 11864615 mov ecx, dword ptr [0x11884aec] */
  ECX = (r32((uint32_t)(0x11884aec)));
  /* 1186461b push ecx */
  push32((uint32_t)(ECX));
  /* 1186461c call dword ptr [0x1188731c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1188731c))), 0x11864622u);
  /* 11864622 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864624 jne 0x1186462d */
  if (!C.zf) goto L_1186462d;
  /* 11864626 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864628 jmp 0x118646bc */
  goto L_118646bc;
L_1186462d:;
  /* 1186462d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864631 je 0x11864658 */
  if (C.zf) goto L_11864658;
  /* 11864633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11864636 mov ax, word ptr [0x11884aec] */
  AX = (r16((uint32_t)(0x11884aec)));
  /* 1186463c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1186463f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11864642 mov dx, word ptr [0x11884b08] */
  DX = (r16((uint32_t)(0x11884b08)));
  /* 11864649 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1186464d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11864650 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11864654 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11864658:;
  /* 11864658 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186465c je 0x118646b7 */
  if (C.zf) goto L_118646b7;
  /* 1186465e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11864660 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11864663 push edx */
  push32((uint32_t)(EDX));
  /* 11864664 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11864669 mov eax, dword ptr [0x11884aec] */
  EAX = (r32((uint32_t)(0x11884aec)));
  /* 1186466e push eax */
  push32((uint32_t)(EAX));
  /* 1186466f call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864675u);
  /* 11864675 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864677 jne 0x1186467d */
  if (!C.zf) goto L_1186467d;
  /* 11864679 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186467b jmp 0x118646bc */
  goto L_118646bc;
L_1186467d:;
  /* 1186467d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1186467f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11864682 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864685 push ecx */
  push32((uint32_t)(ECX));
  /* 11864686 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1186468b mov edx, dword ptr [0x11884b08] */
  EDX = (r32((uint32_t)(0x11884b08)));
  /* 11864691 push edx */
  push32((uint32_t)(EDX));
  /* 11864692 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864698u);
  /* 11864698 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186469a jne 0x118646a0 */
  if (!C.zf) goto L_118646a0;
  /* 1186469c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1186469e jmp 0x118646bc */
  goto L_118646bc;
L_118646a0:;
  /* 118646a0 push 0xa */
  push32((uint32_t)(0xau));
  /* 118646a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 118646a5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118646aa push eax */
  push32((uint32_t)(EAX));
  /* 118646ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118646ae push ecx */
  push32((uint32_t)(ECX));
  /* 118646af call 0x1185b220 */
  push32(0x118646b4u); f_1185b220();
  /* 118646b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_118646b7:;
  /* 118646b7 mov eax, 1 */
  EAX = (0x1u);
L_118646bc:;
  /* 118646bc mov esp, ebp */
  ESP = (EBP);
  /* 118646be pop ebp */
  EBP = (pop32());
  /* 118646bf ret  */
  ESPCHK(0x118644c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146c0 @ 0x118646c0 (130 bytes, 47 insns) */
void f_118646c0(void) {
  FTRACE(0x118646c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118646c0 push ebp */
  push32((uint32_t)(EBP));
  /* 118646c1 mov ebp, esp */
  EBP = (ESP);
  /* 118646c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118646c6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 118646cd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_118646d4:;
  /* 118646d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118646d7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118646da jg 0x1186473e */
  if ((!C.zf&&C.sf==C.of)) goto L_1186473e;
  /* 118646dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118646e0 je 0x1186473e */
  if (C.zf) goto L_1186473e;
  /* 118646e2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118646e5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118646e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 118646e9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118646eb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 118646ed mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118646f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118646f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118646f6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 118646f9 push eax */
  push32((uint32_t)(EAX));
  /* 118646fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 118646fd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 118646ff push edx */
  push32((uint32_t)(EDX));
  /* 11864700 call 0x11866db0 */
  push32(0x11864705u); f_11866db0();
  /* 11864705 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864708 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1186470b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186470f jne 0x11864722 */
  if (!C.zf) goto L_11864722;
  /* 11864711 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11864714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864717 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1186471b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186471e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11864720 jmp 0x1186473c */
  goto L_1186473c;
L_11864722:;
  /* 11864722 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864726 jge 0x11864733 */
  if ((C.sf==C.of)) goto L_11864733;
  /* 11864728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186472b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186472e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11864731 jmp 0x1186473c */
  goto L_1186473c;
L_11864733:;
  /* 11864733 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11864736 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864739 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1186473c:;
  /* 1186473c jmp 0x118646d4 */
  goto L_118646d4;
L_1186473e:;
  /* 1186473e mov esp, ebp */
  ESP = (EBP);
  /* 11864740 pop ebp */
  EBP = (pop32());
  /* 11864741 ret  */
  ESPCHK(0x118646c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014750 @ 0x11864750 (186 bytes, 50 insns) */
void f_11864750(void) {
  FTRACE(0x11864750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864750 push ebp */
  push32((uint32_t)(EBP));
  /* 11864751 mov ebp, esp */
  EBP = (ESP);
  /* 11864753 push ecx */
  push32((uint32_t)(ECX));
  /* 11864754 mov eax, dword ptr [0x11884afc] */
  EAX = (r32((uint32_t)(0x11884afc)));
  /* 11864759 push eax */
  push32((uint32_t)(EAX));
  /* 1186475a call 0x1185b510 */
  push32(0x1186475fu); f_1185b510();
  /* 1186475f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864764 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864767 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1186476a mov dword ptr [0x11884af8], ecx */
  w32((uint32_t)(0x11884af8), (ECX));
  /* 11864770 mov edx, dword ptr [0x11884b00] */
  EDX = (r32((uint32_t)(0x11884b00)));
  /* 11864776 push edx */
  push32((uint32_t)(EDX));
  /* 11864777 call 0x1185b510 */
  push32(0x1186477cu); f_1185b510();
  /* 1186477c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186477f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864781 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864784 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11864787 mov dword ptr [0x11884af0], ecx */
  w32((uint32_t)(0x11884af0), (ECX));
  /* 1186478d mov dword ptr [0x11884aec], 0 */
  w32((uint32_t)(0x11884aec), (0x0u));
  /* 11864797 cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186479e je 0x118647a9 */
  if (C.zf) goto L_118647a9;
  /* 118647a0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 118647a7 jmp 0x118647bb */
  goto L_118647bb;
L_118647a9:;
  /* 118647a9 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 118647af push edx */
  push32((uint32_t)(EDX));
  /* 118647b0 call 0x118651f0 */
  push32(0x118647b5u); f_118651f0();
  /* 118647b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118647b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_118647bb:;
  /* 118647bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118647be mov dword ptr [0x11884af4], eax */
  w32((uint32_t)(0x11884af4), (EAX));
  /* 118647c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 118647c5 push 0x11864810 */
  push32((uint32_t)(0x11864810u));
  /* 118647ca call dword ptr [0x11887310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887310))), 0x118647d0u);
  /* 118647d0 mov ecx, dword ptr [0x11884b04] */
  ECX = (r32((uint32_t)(0x11884b04)));
  /* 118647d6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 118647dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118647de je 0x118647fc */
  if (C.zf) goto L_118647fc;
  /* 118647e0 mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 118647e6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 118647ec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118647ee je 0x118647fc */
  if (C.zf) goto L_118647fc;
  /* 118647f0 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 118647f5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 118647f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118647fa jne 0x11864806 */
  if (!C.zf) goto L_11864806;
L_118647fc:;
  /* 118647fc mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
L_11864806:;
  /* 11864806 mov esp, ebp */
  ESP = (EBP);
  /* 11864808 pop ebp */
  EBP = (pop32());
  /* 11864809 ret  */
  ESPCHK(0x11864750u, _esp0);
  ESP += 4; return;
}

/* FUN_10014810 @ 0x11864810 (804 bytes, 220 insns) */
void f_11864810(void) {
  FTRACE(0x11864810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864810 push ebp */
  push32((uint32_t)(EBP));
  /* 11864811 mov ebp, esp */
  EBP = (ESP);
  /* 11864813 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864816 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864819 push eax */
  push32((uint32_t)(EAX));
  /* 1186481a call 0x11865170 */
  push32(0x1186481fu); f_11865170();
  /* 1186481f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864822 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11864825 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11864827 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1186482a push ecx */
  push32((uint32_t)(ECX));
  /* 1186482b mov edx, dword ptr [0x11884af0] */
  EDX = (r32((uint32_t)(0x11884af0)));
  /* 11864831 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864833 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864835 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1186483b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864841 push edx */
  push32((uint32_t)(EDX));
  /* 11864842 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864845 push eax */
  push32((uint32_t)(EAX));
  /* 11864846 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x1186484cu);
  /* 1186484c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1186484e jne 0x11864864 */
  if (!C.zf) goto L_11864864;
  /* 11864850 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 1186485a mov eax, 1 */
  EAX = (0x1u);
  /* 1186485f jmp 0x11864b2e */
  goto L_11864b2e;
L_11864864:;
  /* 11864864 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864867 push ecx */
  push32((uint32_t)(ECX));
  /* 11864868 mov edx, dword ptr [0x11884b00] */
  EDX = (r32((uint32_t)(0x11884b00)));
  /* 1186486e push edx */
  push32((uint32_t)(EDX));
  /* 1186486f call 0x11866db0 */
  push32(0x11864874u); f_11866db0();
  /* 11864874 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864877 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864879 jne 0x1186499f */
  if (!C.zf) goto L_1186499f;
  /* 1186487f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11864881 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11864884 push eax */
  push32((uint32_t)(EAX));
  /* 11864885 mov ecx, dword ptr [0x11884af8] */
  ECX = (r32((uint32_t)(0x11884af8)));
  /* 1186488b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1186488d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1186488f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11864895 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186489b push ecx */
  push32((uint32_t)(ECX));
  /* 1186489c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1186489f push edx */
  push32((uint32_t)(EDX));
  /* 118648a0 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x118648a6u);
  /* 118648a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118648a8 jne 0x118648be */
  if (!C.zf) goto L_118648be;
  /* 118648aa mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 118648b4 mov eax, 1 */
  EAX = (0x1u);
  /* 118648b9 jmp 0x11864b2e */
  goto L_11864b2e;
L_118648be:;
  /* 118648be lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118648c1 push eax */
  push32((uint32_t)(EAX));
  /* 118648c2 mov ecx, dword ptr [0x11884afc] */
  ECX = (r32((uint32_t)(0x11884afc)));
  /* 118648c8 push ecx */
  push32((uint32_t)(ECX));
  /* 118648c9 call 0x11866db0 */
  push32(0x118648ceu); f_11866db0();
  /* 118648ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118648d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118648d3 jne 0x11864900 */
  if (!C.zf) goto L_11864900;
  /* 118648d5 mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 118648db or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 118648e1 mov dword ptr [0x11884b04], edx */
  w32((uint32_t)(0x11884b04), (EDX));
  /* 118648e7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118648ea mov dword ptr [0x11884b08], eax */
  w32((uint32_t)(0x11884b08), (EAX));
  /* 118648ef mov ecx, dword ptr [0x11884b08] */
  ECX = (r32((uint32_t)(0x11884b08)));
  /* 118648f5 mov dword ptr [0x11884aec], ecx */
  w32((uint32_t)(0x11884aec), (ECX));
  /* 118648fb jmp 0x1186499f */
  goto L_1186499f;
L_11864900:;
  /* 11864900 mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 11864906 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11864909 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1186490b jne 0x1186499f */
  if (!C.zf) goto L_1186499f;
  /* 11864911 cmp dword ptr [0x11884af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864918 je 0x1186496d */
  if (C.zf) goto L_1186496d;
  /* 1186491a mov eax, dword ptr [0x11884af4] */
  EAX = (r32((uint32_t)(0x11884af4)));
  /* 1186491f push eax */
  push32((uint32_t)(EAX));
  /* 11864920 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864923 push ecx */
  push32((uint32_t)(ECX));
  /* 11864924 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 1186492a push edx */
  push32((uint32_t)(EDX));
  /* 1186492b call 0x11866e80 */
  push32(0x11864930u); f_11866e80();
  /* 11864930 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864933 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864935 jne 0x1186496d */
  if (!C.zf) goto L_1186496d;
  /* 11864937 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 1186493c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1186493e mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864943 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864946 mov dword ptr [0x11884b08], ecx */
  w32((uint32_t)(0x11884b08), (ECX));
  /* 1186494c mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864952 push edx */
  push32((uint32_t)(EDX));
  /* 11864953 call 0x1185b510 */
  push32(0x11864958u); f_1185b510();
  /* 11864958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186495b cmp eax, dword ptr [0x11884af4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11884af4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864961 jne 0x1186496b */
  if (!C.zf) goto L_1186496b;
  /* 11864963 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864966 mov dword ptr [0x11884aec], eax */
  w32((uint32_t)(0x11884aec), (EAX));
L_1186496b:;
  /* 1186496b jmp 0x1186499f */
  goto L_1186499f;
L_1186496d:;
  /* 1186496d mov ecx, dword ptr [0x11884b04] */
  ECX = (r32((uint32_t)(0x11884b04)));
  /* 11864973 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11864976 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11864978 jne 0x1186499f */
  if (!C.zf) goto L_1186499f;
  /* 1186497a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1186497d push edx */
  push32((uint32_t)(EDX));
  /* 1186497e call 0x11864eb0 */
  push32(0x11864983u); f_11864eb0();
  /* 11864983 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864986 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864988 je 0x1186499f */
  if (C.zf) goto L_1186499f;
  /* 1186498a mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 1186498f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11864991 mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864996 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864999 mov dword ptr [0x11884b08], ecx */
  w32((uint32_t)(0x11884b08), (ECX));
L_1186499f:;
  /* 1186499f mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 118649a5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 118649ab cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118649b1 je 0x11864b21 */
  if (C.zf) goto L_11864b21;
  /* 118649b7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 118649b9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118649bc push eax */
  push32((uint32_t)(EAX));
  /* 118649bd mov ecx, dword ptr [0x11884af8] */
  ECX = (r32((uint32_t)(0x11884af8)));
  /* 118649c3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 118649c5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118649c7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 118649cd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118649d3 push ecx */
  push32((uint32_t)(ECX));
  /* 118649d4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 118649d7 push edx */
  push32((uint32_t)(EDX));
  /* 118649d8 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x118649deu);
  /* 118649de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118649e0 jne 0x118649f6 */
  if (!C.zf) goto L_118649f6;
  /* 118649e2 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 118649ec mov eax, 1 */
  EAX = (0x1u);
  /* 118649f1 jmp 0x11864b2e */
  goto L_11864b2e;
L_118649f6:;
  /* 118649f6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 118649f9 push eax */
  push32((uint32_t)(EAX));
  /* 118649fa mov ecx, dword ptr [0x11884afc] */
  ECX = (r32((uint32_t)(0x11884afc)));
  /* 11864a00 push ecx */
  push32((uint32_t)(ECX));
  /* 11864a01 call 0x11866db0 */
  push32(0x11864a06u); f_11866db0();
  /* 11864a06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864a0b jne 0x11864ac0 */
  if (!C.zf) goto L_11864ac0;
  /* 11864a11 mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 11864a17 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11864a1a mov dword ptr [0x11884b04], edx */
  w32((uint32_t)(0x11884b04), (EDX));
  /* 11864a20 cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864a27 je 0x11864a4a */
  if (C.zf) goto L_11864a4a;
  /* 11864a29 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864a2e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11864a31 mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864a36 cmp dword ptr [0x11884aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864a3d jne 0x11864a48 */
  if (!C.zf) goto L_11864a48;
  /* 11864a3f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864a42 mov dword ptr [0x11884aec], ecx */
  w32((uint32_t)(0x11884aec), (ECX));
L_11864a48:;
  /* 11864a48 jmp 0x11864abe */
  goto L_11864abe;
L_11864a4a:;
  /* 11864a4a cmp dword ptr [0x11884af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864a51 je 0x11864a9f */
  if (C.zf) goto L_11864a9f;
  /* 11864a53 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864a59 push edx */
  push32((uint32_t)(EDX));
  /* 11864a5a call 0x1185b510 */
  push32(0x11864a5fu); f_1185b510();
  /* 11864a5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864a62 cmp eax, dword ptr [0x11884af4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11884af4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864a68 jne 0x11864a9f */
  if (!C.zf) goto L_11864a9f;
  /* 11864a6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11864a6c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864a6f push eax */
  push32((uint32_t)(EAX));
  /* 11864a70 call 0x11864f00 */
  push32(0x11864a75u); f_11864f00();
  /* 11864a75 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864a78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864a7a je 0x11864a9d */
  if (C.zf) goto L_11864a9d;
  /* 11864a7c mov ecx, dword ptr [0x11884b04] */
  ECX = (r32((uint32_t)(0x11884b04)));
  /* 11864a82 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11864a85 mov dword ptr [0x11884b04], ecx */
  w32((uint32_t)(0x11884b04), (ECX));
  /* 11864a8b cmp dword ptr [0x11884aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864a92 jne 0x11864a9d */
  if (!C.zf) goto L_11864a9d;
  /* 11864a94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864a97 mov dword ptr [0x11884aec], edx */
  w32((uint32_t)(0x11884aec), (EDX));
L_11864a9d:;
  /* 11864a9d jmp 0x11864abe */
  goto L_11864abe;
L_11864a9f:;
  /* 11864a9f mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864aa4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11864aa7 mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864aac cmp dword ptr [0x11884aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864ab3 jne 0x11864abe */
  if (!C.zf) goto L_11864abe;
  /* 11864ab5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864ab8 mov dword ptr [0x11884aec], ecx */
  w32((uint32_t)(0x11884aec), (ECX));
L_11864abe:;
  /* 11864abe jmp 0x11864b21 */
  goto L_11864b21;
L_11864ac0:;
  /* 11864ac0 cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864ac7 jne 0x11864b21 */
  if (!C.zf) goto L_11864b21;
  /* 11864ac9 cmp dword ptr [0x11884af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864ad0 je 0x11864b21 */
  if (C.zf) goto L_11864b21;
  /* 11864ad2 mov edx, dword ptr [0x11884af4] */
  EDX = (r32((uint32_t)(0x11884af4)));
  /* 11864ad8 push edx */
  push32((uint32_t)(EDX));
  /* 11864ad9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11864adc push eax */
  push32((uint32_t)(EAX));
  /* 11864add mov ecx, dword ptr [0x11884afc] */
  ECX = (r32((uint32_t)(0x11884afc)));
  /* 11864ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 11864ae4 call 0x11866e80 */
  push32(0x11864ae9u); f_11866e80();
  /* 11864ae9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864aec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864aee jne 0x11864b21 */
  if (!C.zf) goto L_11864b21;
  /* 11864af0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11864af2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864af5 push edx */
  push32((uint32_t)(EDX));
  /* 11864af6 call 0x11864f00 */
  push32(0x11864afbu); f_11864f00();
  /* 11864afb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864afe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864b00 je 0x11864b21 */
  if (C.zf) goto L_11864b21;
  /* 11864b02 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864b07 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11864b0a mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864b0f cmp dword ptr [0x11884aec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884aec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864b16 jne 0x11864b21 */
  if (!C.zf) goto L_11864b21;
  /* 11864b18 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864b1b mov dword ptr [0x11884aec], ecx */
  w32((uint32_t)(0x11884aec), (ECX));
L_11864b21:;
  /* 11864b21 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864b26 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11864b29 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864b2b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864b2d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11864b2e:;
  /* 11864b2e mov esp, ebp */
  ESP = (EBP);
  /* 11864b30 pop ebp */
  EBP = (pop32());
  /* 11864b31 ret 4 */
  ESPCHK(0x11864810u, _esp0);
  ESP += 8; return;
}

/* FUN_10014b40 @ 0x11864b40 (116 bytes, 33 insns) */
void f_11864b40(void) {
  FTRACE(0x11864b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11864b41 mov ebp, esp */
  EBP = (ESP);
  /* 11864b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11864b44 mov eax, dword ptr [0x11884afc] */
  EAX = (r32((uint32_t)(0x11884afc)));
  /* 11864b49 push eax */
  push32((uint32_t)(EAX));
  /* 11864b4a call 0x1185b510 */
  push32(0x11864b4fu); f_1185b510();
  /* 11864b4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864b52 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864b54 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864b57 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11864b5a mov dword ptr [0x11884af8], ecx */
  w32((uint32_t)(0x11884af8), (ECX));
  /* 11864b60 cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864b67 je 0x11864b72 */
  if (C.zf) goto L_11864b72;
  /* 11864b69 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11864b70 jmp 0x11864b84 */
  goto L_11864b84;
L_11864b72:;
  /* 11864b72 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864b78 push edx */
  push32((uint32_t)(EDX));
  /* 11864b79 call 0x118651f0 */
  push32(0x11864b7eu); f_118651f0();
  /* 11864b7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864b81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11864b84:;
  /* 11864b84 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11864b87 mov dword ptr [0x11884af4], eax */
  w32((uint32_t)(0x11884af4), (EAX));
  /* 11864b8c push 1 */
  push32((uint32_t)(0x1u));
  /* 11864b8e push 0x11864bc0 */
  push32((uint32_t)(0x11864bc0u));
  /* 11864b93 call dword ptr [0x11887310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887310))), 0x11864b99u);
  /* 11864b99 mov ecx, dword ptr [0x11884b04] */
  ECX = (r32((uint32_t)(0x11884b04)));
  /* 11864b9f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11864ba2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11864ba4 jne 0x11864bb0 */
  if (!C.zf) goto L_11864bb0;
  /* 11864ba6 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
L_11864bb0:;
  /* 11864bb0 mov esp, ebp */
  ESP = (EBP);
  /* 11864bb2 pop ebp */
  EBP = (pop32());
  /* 11864bb3 ret  */
  ESPCHK(0x11864b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10014bc0 @ 0x11864bc0 (287 bytes, 86 insns) */
void f_11864bc0(void) {
  FTRACE(0x11864bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11864bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11864bc3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864bc9 push eax */
  push32((uint32_t)(EAX));
  /* 11864bca call 0x11865170 */
  push32(0x11864bcfu); f_11865170();
  /* 11864bcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864bd2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11864bd5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11864bd7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864bda push ecx */
  push32((uint32_t)(ECX));
  /* 11864bdb mov edx, dword ptr [0x11884af8] */
  EDX = (r32((uint32_t)(0x11884af8)));
  /* 11864be1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864be3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864be5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11864beb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864bf1 push edx */
  push32((uint32_t)(EDX));
  /* 11864bf2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864bf5 push eax */
  push32((uint32_t)(EAX));
  /* 11864bf6 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864bfcu);
  /* 11864bfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864bfe jne 0x11864c14 */
  if (!C.zf) goto L_11864c14;
  /* 11864c00 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 11864c0a mov eax, 1 */
  EAX = (0x1u);
  /* 11864c0f jmp 0x11864cd9 */
  goto L_11864cd9;
L_11864c14:;
  /* 11864c14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864c17 push ecx */
  push32((uint32_t)(ECX));
  /* 11864c18 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864c1e push edx */
  push32((uint32_t)(EDX));
  /* 11864c1f call 0x11866db0 */
  push32(0x11864c24u); f_11866db0();
  /* 11864c24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864c27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864c29 jne 0x11864c69 */
  if (!C.zf) goto L_11864c69;
  /* 11864c2b cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864c32 jne 0x11864c46 */
  if (!C.zf) goto L_11864c46;
  /* 11864c34 push 1 */
  push32((uint32_t)(0x1u));
  /* 11864c36 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864c39 push eax */
  push32((uint32_t)(EAX));
  /* 11864c3a call 0x11864f00 */
  push32(0x11864c3fu); f_11864f00();
  /* 11864c3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864c42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864c44 je 0x11864c67 */
  if (C.zf) goto L_11864c67;
L_11864c46:;
  /* 11864c46 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864c49 mov dword ptr [0x11884b08], ecx */
  w32((uint32_t)(0x11884b08), (ECX));
  /* 11864c4f mov edx, dword ptr [0x11884b08] */
  EDX = (r32((uint32_t)(0x11884b08)));
  /* 11864c55 mov dword ptr [0x11884aec], edx */
  w32((uint32_t)(0x11884aec), (EDX));
  /* 11864c5b mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864c60 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11864c62 mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
L_11864c67:;
  /* 11864c67 jmp 0x11864ccc */
  goto L_11864ccc;
L_11864c69:;
  /* 11864c69 cmp dword ptr [0x11884af8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864c70 jne 0x11864ccc */
  if (!C.zf) goto L_11864ccc;
  /* 11864c72 cmp dword ptr [0x11884af4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11884af4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864c79 je 0x11864ccc */
  if (C.zf) goto L_11864ccc;
  /* 11864c7b mov ecx, dword ptr [0x11884af4] */
  ECX = (r32((uint32_t)(0x11884af4)));
  /* 11864c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11864c82 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11864c85 push edx */
  push32((uint32_t)(EDX));
  /* 11864c86 mov eax, dword ptr [0x11884afc] */
  EAX = (r32((uint32_t)(0x11884afc)));
  /* 11864c8b push eax */
  push32((uint32_t)(EAX));
  /* 11864c8c call 0x11866e80 */
  push32(0x11864c91u); f_11866e80();
  /* 11864c91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864c94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864c96 jne 0x11864ccc */
  if (!C.zf) goto L_11864ccc;
  /* 11864c98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11864c9a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864c9d push ecx */
  push32((uint32_t)(ECX));
  /* 11864c9e call 0x11864f00 */
  push32(0x11864ca3u); f_11864f00();
  /* 11864ca3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864ca6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864ca8 je 0x11864ccc */
  if (C.zf) goto L_11864ccc;
  /* 11864caa mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864cad mov dword ptr [0x11884b08], edx */
  w32((uint32_t)(0x11884b08), (EDX));
  /* 11864cb3 mov eax, dword ptr [0x11884b08] */
  EAX = (r32((uint32_t)(0x11884b08)));
  /* 11864cb8 mov dword ptr [0x11884aec], eax */
  w32((uint32_t)(0x11884aec), (EAX));
  /* 11864cbd mov ecx, dword ptr [0x11884b04] */
  ECX = (r32((uint32_t)(0x11884b04)));
  /* 11864cc3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11864cc6 mov dword ptr [0x11884b04], ecx */
  w32((uint32_t)(0x11884b04), (ECX));
L_11864ccc:;
  /* 11864ccc mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864cd1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11864cd4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864cd6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864cd8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11864cd9:;
  /* 11864cd9 mov esp, ebp */
  ESP = (EBP);
  /* 11864cdb pop ebp */
  EBP = (pop32());
  /* 11864cdc ret 4 */
  ESPCHK(0x11864bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10014ce0 @ 0x11864ce0 (69 bytes, 20 insns) */
void f_11864ce0(void) {
  FTRACE(0x11864ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11864ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11864ce3 mov eax, dword ptr [0x11884b00] */
  EAX = (r32((uint32_t)(0x11884b00)));
  /* 11864ce8 push eax */
  push32((uint32_t)(EAX));
  /* 11864ce9 call 0x1185b510 */
  push32(0x11864ceeu); f_1185b510();
  /* 11864cee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864cf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864cf3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864cf6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11864cf9 mov dword ptr [0x11884af0], ecx */
  w32((uint32_t)(0x11884af0), (ECX));
  /* 11864cff push 1 */
  push32((uint32_t)(0x1u));
  /* 11864d01 push 0x11864d30 */
  push32((uint32_t)(0x11864d30u));
  /* 11864d06 call dword ptr [0x11887310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887310))), 0x11864d0cu);
  /* 11864d0c mov edx, dword ptr [0x11884b04] */
  EDX = (r32((uint32_t)(0x11884b04)));
  /* 11864d12 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11864d15 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11864d17 jne 0x11864d23 */
  if (!C.zf) goto L_11864d23;
  /* 11864d19 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
L_11864d23:;
  /* 11864d23 pop ebp */
  EBP = (pop32());
  /* 11864d24 ret  */
  ESPCHK(0x11864ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014d30 @ 0x11864d30 (172 bytes, 54 insns) */
void f_11864d30(void) {
  FTRACE(0x11864d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11864d31 mov ebp, esp */
  EBP = (ESP);
  /* 11864d33 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864d39 push eax */
  push32((uint32_t)(EAX));
  /* 11864d3a call 0x11865170 */
  push32(0x11864d3fu); f_11865170();
  /* 11864d3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864d42 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11864d45 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11864d47 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864d4a push ecx */
  push32((uint32_t)(ECX));
  /* 11864d4b mov edx, dword ptr [0x11884af0] */
  EDX = (r32((uint32_t)(0x11884af0)));
  /* 11864d51 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864d53 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864d55 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11864d5b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864d61 push edx */
  push32((uint32_t)(EDX));
  /* 11864d62 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864d65 push eax */
  push32((uint32_t)(EAX));
  /* 11864d66 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864d6cu);
  /* 11864d6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864d6e jne 0x11864d81 */
  if (!C.zf) goto L_11864d81;
  /* 11864d70 mov dword ptr [0x11884b04], 0 */
  w32((uint32_t)(0x11884b04), (0x0u));
  /* 11864d7a mov eax, 1 */
  EAX = (0x1u);
  /* 11864d7f jmp 0x11864dd6 */
  goto L_11864dd6;
L_11864d81:;
  /* 11864d81 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11864d84 push ecx */
  push32((uint32_t)(ECX));
  /* 11864d85 mov edx, dword ptr [0x11884b00] */
  EDX = (r32((uint32_t)(0x11884b00)));
  /* 11864d8b push edx */
  push32((uint32_t)(EDX));
  /* 11864d8c call 0x11866db0 */
  push32(0x11864d91u); f_11866db0();
  /* 11864d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864d96 jne 0x11864dc9 */
  if (!C.zf) goto L_11864dc9;
  /* 11864d98 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864d9b push eax */
  push32((uint32_t)(EAX));
  /* 11864d9c call 0x11864eb0 */
  push32(0x11864da1u); f_11864eb0();
  /* 11864da1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864da4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864da6 je 0x11864dc9 */
  if (C.zf) goto L_11864dc9;
  /* 11864da8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11864dab mov dword ptr [0x11884b08], ecx */
  w32((uint32_t)(0x11884b08), (ECX));
  /* 11864db1 mov edx, dword ptr [0x11884b08] */
  EDX = (r32((uint32_t)(0x11884b08)));
  /* 11864db7 mov dword ptr [0x11884aec], edx */
  w32((uint32_t)(0x11884aec), (EDX));
  /* 11864dbd mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864dc2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11864dc4 mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
L_11864dc9:;
  /* 11864dc9 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864dce and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11864dd1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11864dd3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864dd5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11864dd6:;
  /* 11864dd6 mov esp, ebp */
  ESP = (EBP);
  /* 11864dd8 pop ebp */
  EBP = (pop32());
  /* 11864dd9 ret 4 */
  ESPCHK(0x11864d30u, _esp0);
  ESP += 8; return;
}

/* FUN_10014de0 @ 0x11864de0 (43 bytes, 11 insns) */
void f_11864de0(void) {
  FTRACE(0x11864de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11864de1 mov ebp, esp */
  EBP = (ESP);
  /* 11864de3 mov eax, dword ptr [0x11884b04] */
  EAX = (r32((uint32_t)(0x11884b04)));
  /* 11864de8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11864ded mov dword ptr [0x11884b04], eax */
  w32((uint32_t)(0x11884b04), (EAX));
  /* 11864df2 call dword ptr [0x11887300] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887300))), 0x11864df8u);
  /* 11864df8 mov dword ptr [0x11884b08], eax */
  w32((uint32_t)(0x11884b08), (EAX));
  /* 11864dfd mov ecx, dword ptr [0x11884b08] */
  ECX = (r32((uint32_t)(0x11884b08)));
  /* 11864e03 mov dword ptr [0x11884aec], ecx */
  w32((uint32_t)(0x11884aec), (ECX));
  /* 11864e09 pop ebp */
  EBP = (pop32());
  /* 11864e0a ret  */
  ESPCHK(0x11864de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e10 @ 0x11864e10 (155 bytes, 57 insns) */
void f_11864e10(void) {
  FTRACE(0x11864e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11864e11 mov ebp, esp */
  EBP = (ESP);
  /* 11864e13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864e16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864e1a je 0x11864e3b */
  if (C.zf) goto L_11864e3b;
  /* 11864e1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864e1f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11864e22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11864e24 je 0x11864e3b */
  if (C.zf) goto L_11864e3b;
  /* 11864e26 push 0x118810d4 */
  push32((uint32_t)(0x118810d4u));
  /* 11864e2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864e2e push edx */
  push32((uint32_t)(EDX));
  /* 11864e2f call 0x11864370 */
  push32(0x11864e34u); f_11864370();
  /* 11864e34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864e37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864e39 jne 0x11864e63 */
  if (!C.zf) goto L_11864e63;
L_11864e3b:;
  /* 11864e3b push 8 */
  push32((uint32_t)(0x8u));
  /* 11864e3d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11864e40 push eax */
  push32((uint32_t)(EAX));
  /* 11864e41 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11864e46 mov ecx, dword ptr [0x11884b08] */
  ECX = (r32((uint32_t)(0x11884b08)));
  /* 11864e4c push ecx */
  push32((uint32_t)(ECX));
  /* 11864e4d call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864e53u);
  /* 11864e53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864e55 jne 0x11864e5b */
  if (!C.zf) goto L_11864e5b;
  /* 11864e57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864e59 jmp 0x11864ea7 */
  goto L_11864ea7;
L_11864e5b:;
  /* 11864e5b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11864e5e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11864e61 jmp 0x11864e9b */
  goto L_11864e9b;
L_11864e63:;
  /* 11864e63 push 0x118810d0 */
  push32((uint32_t)(0x118810d0u));
  /* 11864e68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864e6b push eax */
  push32((uint32_t)(EAX));
  /* 11864e6c call 0x11864370 */
  push32(0x11864e71u); f_11864370();
  /* 11864e71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864e74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864e76 jne 0x11864e9b */
  if (!C.zf) goto L_11864e9b;
  /* 11864e78 push 8 */
  push32((uint32_t)(0x8u));
  /* 11864e7a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11864e7d push ecx */
  push32((uint32_t)(ECX));
  /* 11864e7e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11864e80 mov edx, dword ptr [0x11884b08] */
  EDX = (r32((uint32_t)(0x11884b08)));
  /* 11864e86 push edx */
  push32((uint32_t)(EDX));
  /* 11864e87 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864e8du);
  /* 11864e8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864e8f jne 0x11864e95 */
  if (!C.zf) goto L_11864e95;
  /* 11864e91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864e93 jmp 0x11864ea7 */
  goto L_11864ea7;
L_11864e95:;
  /* 11864e95 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11864e98 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11864e9b:;
  /* 11864e9b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864e9e push ecx */
  push32((uint32_t)(ECX));
  /* 11864e9f call 0x11866f90 */
  push32(0x11864ea4u); f_11866f90();
  /* 11864ea4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11864ea7:;
  /* 11864ea7 mov esp, ebp */
  ESP = (EBP);
  /* 11864ea9 pop ebp */
  EBP = (pop32());
  /* 11864eaa ret  */
  ESPCHK(0x11864e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10014eb0 @ 0x11864eb0 (79 bytes, 26 insns) */
void f_11864eb0(void) {
  FTRACE(0x11864eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11864eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11864eb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864eb6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11864eba mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11864ebe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11864ec5 jmp 0x11864ed0 */
  goto L_11864ed0;
L_11864ec7:;
  /* 11864ec7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11864eca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11864ecd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11864ed0:;
  /* 11864ed0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864ed4 jae 0x11864ef6 */
  if (!C.cf) goto L_11864ef6;
  /* 11864ed6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11864ed9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11864edf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11864ee2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11864ee4 mov cx, word ptr [eax*2 + 0x118839c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x118839c4)));
  /* 11864eec cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864eee jne 0x11864ef4 */
  if (!C.zf) goto L_11864ef4;
  /* 11864ef0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864ef2 jmp 0x11864efb */
  goto L_11864efb;
L_11864ef4:;
  /* 11864ef4 jmp 0x11864ec7 */
  goto L_11864ec7;
L_11864ef6:;
  /* 11864ef6 mov eax, 1 */
  EAX = (0x1u);
L_11864efb:;
  /* 11864efb mov esp, ebp */
  ESP = (EBP);
  /* 11864efd pop ebp */
  EBP = (pop32());
  /* 11864efe ret  */
  ESPCHK(0x11864eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f00 @ 0x11864f00 (135 bytes, 48 insns) */
void f_11864f00(void) {
  FTRACE(0x11864f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864f00 push ebp */
  push32((uint32_t)(EBP));
  /* 11864f01 mov ebp, esp */
  EBP = (ESP);
  /* 11864f03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864f06 push esi */
  push32((uint32_t)(ESI));
  /* 11864f07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11864f0a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11864f0f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11864f14 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11864f19 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11864f1c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11864f21 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11864f24 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11864f26 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11864f29 push ecx */
  push32((uint32_t)(ECX));
  /* 11864f2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11864f2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11864f2f push edx */
  push32((uint32_t)(EDX));
  /* 11864f30 call dword ptr [0x11884b0c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11884b0c))), 0x11864f36u);
  /* 11864f36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864f38 jne 0x11864f3e */
  if (!C.zf) goto L_11864f3e;
  /* 11864f3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864f3c jmp 0x11864f82 */
  goto L_11864f82;
L_11864f3e:;
  /* 11864f3e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11864f41 push eax */
  push32((uint32_t)(EAX));
  /* 11864f42 call 0x11865170 */
  push32(0x11864f47u); f_11865170();
  /* 11864f47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864f4a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864f4d je 0x11864f7d */
  if (C.zf) goto L_11864f7d;
  /* 11864f4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864f53 je 0x11864f7d */
  if (C.zf) goto L_11864f7d;
  /* 11864f55 mov ecx, dword ptr [0x11884afc] */
  ECX = (r32((uint32_t)(0x11884afc)));
  /* 11864f5b push ecx */
  push32((uint32_t)(ECX));
  /* 11864f5c call 0x118651f0 */
  push32(0x11864f61u); f_118651f0();
  /* 11864f61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864f64 mov esi, eax */
  ESI = (EAX);
  /* 11864f66 mov edx, dword ptr [0x11884afc] */
  EDX = (r32((uint32_t)(0x11884afc)));
  /* 11864f6c push edx */
  push32((uint32_t)(EDX));
  /* 11864f6d call 0x1185b510 */
  push32(0x11864f72u); f_1185b510();
  /* 11864f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11864f75 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864f77 jne 0x11864f7d */
  if (!C.zf) goto L_11864f7d;
  /* 11864f79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11864f7b jmp 0x11864f82 */
  goto L_11864f82;
L_11864f7d:;
  /* 11864f7d mov eax, 1 */
  EAX = (0x1u);
L_11864f82:;
  /* 11864f82 pop esi */
  ESI = (pop32());
  /* 11864f83 mov esp, ebp */
  ESP = (EBP);
  /* 11864f85 pop ebp */
  EBP = (pop32());
  /* 11864f86 ret  */
  ESPCHK(0x11864f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014f90 @ 0x11864f90 (77 bytes, 18 insns) */
void f_11864f90(void) {
  FTRACE(0x11864f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11864f91 mov ebp, esp */
  EBP = (ESP);
  /* 11864f93 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864f99 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11864fa3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11864fa9 push eax */
  push32((uint32_t)(EAX));
  /* 11864faa call dword ptr [0x118872fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x118872fc))), 0x11864fb0u);
  /* 11864fb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11864fb2 je 0x11864fc9 */
  if (C.zf) goto L_11864fc9;
  /* 11864fb4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11864fbb jne 0x11864fc9 */
  if (!C.zf) goto L_11864fc9;
  /* 11864fbd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11864fc7 jmp 0x11864fd3 */
  goto L_11864fd3;
L_11864fc9:;
  /* 11864fc9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11864fd3:;
  /* 11864fd3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11864fd9 mov esp, ebp */
  ESP = (EBP);
  /* 11864fdb pop ebp */
  EBP = (pop32());
  /* 11864fdc ret  */
  ESPCHK(0x11864f90u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11864fe0 (388 bytes, 118 insns) */
void f_11864fe0(void) {
  FTRACE(0x11864fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11864fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11864fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11864fe3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11864fe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11864fed mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11864ff4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11864ffb:;
  /* 11864ffb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11864ffe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865001 jg 0x11865148 */
  if ((!C.zf&&C.sf==C.of)) goto L_11865148;
  /* 11865007 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186500a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186500d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1186500e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865010 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11865012 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11865015 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865018 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186501b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186501e cmp edx, dword ptr [ecx + 0x11883520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11883520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865024 jne 0x1186511e */
  if (!C.zf) goto L_1186511e;
  /* 1186502a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1186502d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11865030 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865034 ja 0x11865057 */
  if ((!C.cf&&!C.zf)) goto L_11865057;
  /* 11865036 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186503a je 0x118650c9 */
  if (C.zf) goto L_118650c9;
  /* 11865040 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865044 je 0x11865074 */
  if (C.zf) goto L_11865074;
  /* 11865046 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186504a je 0x11865096 */
  if (C.zf) goto L_11865096;
  /* 1186504c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865050 je 0x118650b8 */
  if (C.zf) goto L_118650b8;
  /* 11865052 jmp 0x118650e8 */
  goto L_118650e8;
L_11865057:;
  /* 11865057 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186505e je 0x11865085 */
  if (C.zf) goto L_11865085;
  /* 11865060 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865067 je 0x118650a7 */
  if (C.zf) goto L_118650a7;
  /* 11865069 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865070 je 0x118650da */
  if (C.zf) goto L_118650da;
  /* 11865072 jmp 0x118650e8 */
  goto L_118650e8;
L_11865074:;
  /* 11865074 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865077 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186507a add ecx, 0x11883524 */
  { uint32_t _a=(ECX),_b=(0x11883524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865080 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11865083 jmp 0x118650e8 */
  goto L_118650e8;
L_11865085:;
  /* 11865085 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865088 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186508b mov eax, dword ptr [edx + 0x1188352c] */
  EAX = (r32((uint32_t)(EDX + 0x1188352c)));
  /* 11865091 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11865094 jmp 0x118650e8 */
  goto L_118650e8;
L_11865096:;
  /* 11865096 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865099 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186509c add ecx, 0x11883530 */
  { uint32_t _a=(ECX),_b=(0x11883530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118650a2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118650a5 jmp 0x118650e8 */
  goto L_118650e8;
L_118650a7:;
  /* 118650a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118650aa imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118650ad mov eax, dword ptr [edx + 0x11883534] */
  EAX = (r32((uint32_t)(EDX + 0x11883534)));
  /* 118650b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 118650b6 jmp 0x118650e8 */
  goto L_118650e8;
L_118650b8:;
  /* 118650b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 118650bb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118650be add ecx, 0x11883538 */
  { uint32_t _a=(ECX),_b=(0x11883538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118650c4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 118650c7 jmp 0x118650e8 */
  goto L_118650e8;
L_118650c9:;
  /* 118650c9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 118650cc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118650cf add edx, 0x1188353c */
  { uint32_t _a=(EDX),_b=(0x1188353cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118650d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118650d8 jmp 0x118650e8 */
  goto L_118650e8;
L_118650da:;
  /* 118650da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118650dd imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 118650e0 add eax, 0x11883544 */
  { uint32_t _a=(EAX),_b=(0x11883544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118650e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_118650e8:;
  /* 118650e8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118650ec je 0x118650f4 */
  if (C.zf) goto L_118650f4;
  /* 118650ee cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118650f2 jge 0x118650f6 */
  if ((C.sf==C.of)) goto L_118650f6;
L_118650f4:;
  /* 118650f4 jmp 0x11865148 */
  goto L_11865148;
L_118650f6:;
  /* 118650f6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 118650f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 118650fc push ecx */
  push32((uint32_t)(ECX));
  /* 118650fd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11865100 push edx */
  push32((uint32_t)(EDX));
  /* 11865101 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865104 push eax */
  push32((uint32_t)(EAX));
  /* 11865105 call 0x1185bf00 */
  push32(0x1186510au); f_1185bf00();
  /* 1186510a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186510d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11865110 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865113 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11865117 mov eax, 1 */
  EAX = (0x1u);
  /* 1186511c jmp 0x1186515e */
  goto L_1186515e;
L_1186511e:;
  /* 1186511e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865121 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11865124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865127 cmp eax, dword ptr [edx + 0x11883520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11883520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186512d jae 0x1186513a */
  if (!C.cf) goto L_1186513a;
  /* 1186512f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865132 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865135 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11865138 jmp 0x11865143 */
  goto L_11865143;
L_1186513a:;
  /* 1186513a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1186513d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865140 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11865143:;
  /* 11865143 jmp 0x11864ffb */
  goto L_11864ffb;
L_11865148:;
  /* 11865148 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1186514b push eax */
  push32((uint32_t)(EAX));
  /* 1186514c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1186514f push ecx */
  push32((uint32_t)(ECX));
  /* 11865150 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11865153 push edx */
  push32((uint32_t)(EDX));
  /* 11865154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865157 push eax */
  push32((uint32_t)(EAX));
  /* 11865158 call dword ptr [0x11887308] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887308))), 0x1186515eu);
L_1186515e:;
  /* 1186515e mov esp, ebp */
  ESP = (EBP);
  /* 11865160 pop ebp */
  EBP = (pop32());
  /* 11865161 ret 0x10 */
  ESPCHK(0x11864fe0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015170 @ 0x11865170 (118 bytes, 42 insns) */
void f_11865170(void) {
  FTRACE(0x11865170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865170 push ebp */
  push32((uint32_t)(EBP));
  /* 11865171 mov ebp, esp */
  EBP = (ESP);
  /* 11865173 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865176 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1186517d:;
  /* 1186517d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865180 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11865182 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11865185 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11865189 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186518c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186518f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11865192 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11865194 je 0x118651df */
  if (C.zf) goto L_118651df;
  /* 11865196 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1186519a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186519d jl 0x118651b2 */
  if ((C.sf!=C.of)) goto L_118651b2;
  /* 1186519f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118651a3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118651a6 jg 0x118651b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_118651b2;
  /* 118651a8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118651ab add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118651ad mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 118651b0 jmp 0x118651cc */
  goto L_118651cc;
L_118651b2:;
  /* 118651b2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118651b6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118651b9 jl 0x118651cc */
  if ((C.sf!=C.of)) goto L_118651cc;
  /* 118651bb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118651bf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118651c2 jg 0x118651cc */
  if ((!C.zf&&C.sf==C.of)) goto L_118651cc;
  /* 118651c4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 118651c7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 118651c9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_118651cc:;
  /* 118651cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118651cf shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 118651d2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 118651d6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 118651da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118651dd jmp 0x1186517d */
  goto L_1186517d;
L_118651df:;
  /* 118651df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 118651e2 mov esp, ebp */
  ESP = (EBP);
  /* 118651e4 pop ebp */
  EBP = (pop32());
  /* 118651e5 ret  */
  ESPCHK(0x11865170u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x118651f0 (101 bytes, 36 insns) */
void f_118651f0(void) {
  FTRACE(0x118651f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118651f0 push ebp */
  push32((uint32_t)(EBP));
  /* 118651f1 mov ebp, esp */
  EBP = (ESP);
  /* 118651f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 118651f6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 118651fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865200 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11865202 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11865205 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865208 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186520b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1186520e:;
  /* 1186520e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11865212 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865215 jl 0x11865220 */
  if ((C.sf!=C.of)) goto L_11865220;
  /* 11865217 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1186521b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186521e jle 0x11865232 */
  if ((C.zf||C.sf!=C.of)) goto L_11865232;
L_11865220:;
  /* 11865220 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11865224 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865227 jl 0x1186524e */
  if ((C.sf!=C.of)) goto L_1186524e;
  /* 11865229 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1186522d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865230 jg 0x1186524e */
  if ((!C.zf&&C.sf==C.of)) goto L_1186524e;
L_11865232:;
  /* 11865232 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11865235 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865238 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1186523b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186523e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11865240 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11865243 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865246 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865249 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1186524c jmp 0x1186520e */
  goto L_1186520e;
L_1186524e:;
  /* 1186524e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11865251 mov esp, ebp */
  ESP = (EBP);
  /* 11865253 pop ebp */
  EBP = (pop32());
  /* 11865254 ret  */
  ESPCHK(0x118651f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015260 @ 0x11865260 (122 bytes, 39 insns) */
void f_11865260(void) {
  FTRACE(0x11865260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865260 push ebp */
  push32((uint32_t)(EBP));
  /* 11865261 mov ebp, esp */
  EBP = (ESP);
  /* 11865263 push ecx */
  push32((uint32_t)(ECX));
  /* 11865264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865267 cmp eax, dword ptr [0x1188639c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1188639c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186526d jae 0x11865291 */
  if (!C.cf) goto L_11865291;
  /* 1186526f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865272 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11865275 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865278 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1186527b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1186527e mov eax, dword ptr [ecx*4 + 0x11886260] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11886260)));
  /* 11865285 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1186528a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1186528d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1186528f jne 0x118652ac */
  if (!C.zf) goto L_118652ac;
L_11865291:;
  /* 11865291 call 0x118605b0 */
  push32(0x11865296u); f_118605b0();
  /* 11865296 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1186529c call 0x118605c0 */
  push32(0x118652a1u); f_118605c0();
  /* 118652a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 118652a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 118652aa jmp 0x118652d6 */
  goto L_118652d6;
L_118652ac:;
  /* 118652ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118652af push edx */
  push32((uint32_t)(EDX));
  /* 118652b0 call 0x11861dd0 */
  push32(0x118652b5u); f_11861dd0();
  /* 118652b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118652b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118652bb push eax */
  push32((uint32_t)(EAX));
  /* 118652bc call 0x118652e0 */
  push32(0x118652c1u); f_118652e0();
  /* 118652c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118652c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118652c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118652ca push ecx */
  push32((uint32_t)(ECX));
  /* 118652cb call 0x11861e60 */
  push32(0x118652d0u); f_11861e60();
  /* 118652d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118652d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_118652d6:;
  /* 118652d6 mov esp, ebp */
  ESP = (EBP);
  /* 118652d8 pop ebp */
  EBP = (pop32());
  /* 118652d9 ret  */
  ESPCHK(0x11865260u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x118652e0 (170 bytes, 59 insns) */
void f_118652e0(void) {
  FTRACE(0x118652e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 118652e0 push ebp */
  push32((uint32_t)(EBP));
  /* 118652e1 mov ebp, esp */
  EBP = (ESP);
  /* 118652e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118652e4 push esi */
  push32((uint32_t)(ESI));
  /* 118652e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118652e8 push eax */
  push32((uint32_t)(EAX));
  /* 118652e9 call 0x11861c50 */
  push32(0x118652eeu); f_11861c50();
  /* 118652ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118652f1 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118652f4 je 0x11865333 */
  if (C.zf) goto L_11865333;
  /* 118652f6 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118652fa je 0x11865302 */
  if (C.zf) goto L_11865302;
  /* 118652fc cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865300 jne 0x1186531c */
  if (!C.zf) goto L_1186531c;
L_11865302:;
  /* 11865302 push 1 */
  push32((uint32_t)(0x1u));
  /* 11865304 call 0x11861c50 */
  push32(0x11865309u); f_11861c50();
  /* 11865309 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186530c mov esi, eax */
  ESI = (EAX);
  /* 1186530e push 2 */
  push32((uint32_t)(0x2u));
  /* 11865310 call 0x11861c50 */
  push32(0x11865315u); f_11861c50();
  /* 11865315 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865318 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186531a je 0x11865333 */
  if (C.zf) goto L_11865333;
L_1186531c:;
  /* 1186531c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186531f push ecx */
  push32((uint32_t)(ECX));
  /* 11865320 call 0x11861c50 */
  push32(0x11865325u); f_11861c50();
  /* 11865325 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865328 push eax */
  push32((uint32_t)(EAX));
  /* 11865329 call dword ptr [0x11887304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11887304))), 0x1186532fu);
  /* 1186532f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11865331 je 0x1186533c */
  if (C.zf) goto L_1186533c;
L_11865333:;
  /* 11865333 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1186533a jmp 0x11865345 */
  goto L_11865345;
L_1186533c:;
  /* 1186533c call dword ptr [0x118873f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x118873f8))), 0x11865342u);
  /* 11865342 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11865345:;
  /* 11865345 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865348 push edx */
  push32((uint32_t)(EDX));
  /* 11865349 call 0x11861b70 */
  push32(0x1186534eu); f_11861b70();
  /* 1186534e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865351 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865354 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11865357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186535a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1186535d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11865360 mov edx, dword ptr [eax*4 + 0x11886260] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11886260)));
  /* 11865367 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1186536c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11865370 je 0x11865383 */
  if (C.zf) goto L_11865383;
  /* 11865372 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11865375 push eax */
  push32((uint32_t)(EAX));
  /* 11865376 call 0x11860510 */
  push32(0x1186537bu); f_11860510();
  /* 1186537b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186537e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11865381 jmp 0x11865385 */
  goto L_11865385;
L_11865383:;
  /* 11865383 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11865385:;
  /* 11865385 pop esi */
  ESI = (pop32());
  /* 11865386 mov esp, ebp */
  ESP = (EBP);
  /* 11865388 pop ebp */
  EBP = (pop32());
  /* 11865389 ret  */
  ESPCHK(0x118652e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015390 @ 0x11865390 (146 bytes, 52 insns) */
void f_11865390(void) {
  FTRACE(0x11865390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865390 push ebp */
  push32((uint32_t)(EBP));
  /* 11865391 mov ebp, esp */
  EBP = (ESP);
  /* 11865393 push ebx */
  push32((uint32_t)(EBX));
  /* 11865394 push esi */
  push32((uint32_t)(ESI));
  /* 11865395 push edi */
  push32((uint32_t)(EDI));
L_11865396:;
  /* 11865396 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186539a jne 0x118653ba */
  if (!C.zf) goto L_118653ba;
  /* 1186539c push 0x11880a10 */
  push32((uint32_t)(0x11880a10u));
  /* 118653a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 118653a3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 118653a5 push 0x118810d8 */
  push32((uint32_t)(0x118810d8u));
  /* 118653aa push 2 */
  push32((uint32_t)(0x2u));
  /* 118653ac call 0x118577a0 */
  push32(0x118653b1u); f_118577a0();
  /* 118653b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118653b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118653b7 jne 0x118653ba */
  if (!C.zf) goto L_118653ba;
  /* 118653b9 int3  */
  x86_unimpl("int3 @ 0x118653b9");
L_118653ba:;
  /* 118653ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 118653bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 118653be jne 0x11865396 */
  if (!C.zf) goto L_11865396;
  /* 118653c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118653c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118653c6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 118653cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 118653ce je 0x1186541d */
  if (C.zf) goto L_1186541d;
  /* 118653d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118653d3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 118653d6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 118653d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 118653db je 0x1186541d */
  if (C.zf) goto L_1186541d;
  /* 118653dd push 2 */
  push32((uint32_t)(0x2u));
  /* 118653df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 118653e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 118653e5 push eax */
  push32((uint32_t)(EAX));
  /* 118653e6 call 0x11859170 */
  push32(0x118653ebu); f_11859170();
  /* 118653eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118653ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 118653f1 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 118653f4 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 118653fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 118653fd mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11865400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865403 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11865409 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1186540c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11865413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11865416 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1186541d:;
  /* 1186541d pop edi */
  EDI = (pop32());
  /* 1186541e pop esi */
  ESI = (pop32());
  /* 1186541f pop ebx */
  EBX = (pop32());
  /* 11865420 pop ebp */
  EBP = (pop32());
  /* 11865421 ret  */
  ESPCHK(0x11865390u, _esp0);
  ESP += 4; return;
}

/* FUN_10015430 @ 0x11865430 (289 bytes, 97 insns) */
void f_11865430(void) {
  FTRACE(0x11865430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865430 push ebp */
  push32((uint32_t)(EBP));
  /* 11865431 mov ebp, esp */
  EBP = (ESP);
  /* 11865433 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865436 push esi */
  push32((uint32_t)(ESI));
  /* 11865437 mov eax, dword ptr [0x11883c98] */
  EAX = (r32((uint32_t)(0x11883c98)));
  /* 1186543c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1186543f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11865446 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1186544d jmp 0x11865458 */
  goto L_11865458;
L_1186544f:;
  /* 1186544f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865452 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865455 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11865458:;
  /* 11865458 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186545c jae 0x11865491 */
  if (!C.cf) goto L_11865491;
  /* 1186545e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865461 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865464 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11865467 push ecx */
  push32((uint32_t)(ECX));
  /* 11865468 call 0x1185b510 */
  push32(0x1186546du); f_1185b510();
  /* 1186546d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865470 mov esi, eax */
  ESI = (EAX);
  /* 11865472 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865475 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865478 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1186547c push ecx */
  push32((uint32_t)(ECX));
  /* 1186547d call 0x1185b510 */
  push32(0x11865482u); f_1185b510();
  /* 11865482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865485 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865488 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1186548c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1186548f jmp 0x1186544f */
  goto L_1186544f;
L_11865491:;
  /* 11865491 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11865494 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865497 push eax */
  push32((uint32_t)(EAX));
  /* 11865498 call 0x118586c0 */
  push32(0x1186549du); f_118586c0();
  /* 1186549d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118654a0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118654a3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118654a7 je 0x11865549 */
  if (C.zf) goto L_11865549;
  /* 118654ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118654b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118654b3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118654ba jmp 0x118654c5 */
  goto L_118654c5;
L_118654bc:;
  /* 118654bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118654bf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118654c2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118654c5:;
  /* 118654c5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118654c9 jae 0x1186553a */
  if (!C.cf) goto L_1186553a;
  /* 118654cb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118654ce mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 118654d1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118654d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118654d7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118654da mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118654dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118654e0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 118654e3 push ecx */
  push32((uint32_t)(ECX));
  /* 118654e4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 118654e7 push edx */
  push32((uint32_t)(EDX));
  /* 118654e8 call 0x1185b690 */
  push32(0x118654edu); f_1185b690();
  /* 118654ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118654f0 push eax */
  push32((uint32_t)(EAX));
  /* 118654f1 call 0x1185b510 */
  push32(0x118654f6u); f_1185b510();
  /* 118654f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118654f9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 118654fc add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 118654fe mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11865501 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865504 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11865507 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186550a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186550d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11865510 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865513 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865516 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1186551a push eax */
  push32((uint32_t)(EAX));
  /* 1186551b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186551e push ecx */
  push32((uint32_t)(ECX));
  /* 1186551f call 0x1185b690 */
  push32(0x11865524u); f_1185b690();
  /* 11865524 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865527 push eax */
  push32((uint32_t)(EAX));
  /* 11865528 call 0x1185b510 */
  push32(0x1186552du); f_1185b510();
  /* 1186552d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865530 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865533 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865535 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11865538 jmp 0x118654bc */
  goto L_118654bc;
L_1186553a:;
  /* 1186553a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186553d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11865540 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865543 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865546 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11865549:;
  /* 11865549 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186554c pop esi */
  ESI = (pop32());
  /* 1186554d mov esp, ebp */
  ESP = (EBP);
  /* 1186554f pop ebp */
  EBP = (pop32());
  /* 11865550 ret  */
  ESPCHK(0x11865430u, _esp0);
  ESP += 4; return;
}

/* FUN_10015560 @ 0x11865560 (291 bytes, 97 insns) */
void f_11865560(void) {
  FTRACE(0x11865560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11865560 push ebp */
  push32((uint32_t)(EBP));
  /* 11865561 mov ebp, esp */
  EBP = (ESP);
  /* 11865563 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11865566 push esi */
  push32((uint32_t)(ESI));
  /* 11865567 mov eax, dword ptr [0x11883c98] */
  EAX = (r32((uint32_t)(0x11883c98)));
  /* 1186556c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1186556f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11865576 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1186557d jmp 0x11865588 */
  goto L_11865588;
L_1186557f:;
  /* 1186557f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865582 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865585 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11865588:;
  /* 11865588 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1186558c jae 0x118655c2 */
  if (!C.cf) goto L_118655c2;
  /* 1186558e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865594 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11865598 push ecx */
  push32((uint32_t)(ECX));
  /* 11865599 call 0x1185b510 */
  push32(0x1186559eu); f_1185b510();
  /* 1186559e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118655a1 mov esi, eax */
  ESI = (EAX);
  /* 118655a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118655a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 118655a9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 118655ad push ecx */
  push32((uint32_t)(ECX));
  /* 118655ae call 0x1185b510 */
  push32(0x118655b3u); f_1185b510();
  /* 118655b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118655b6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118655b9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 118655bd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 118655c0 jmp 0x1186557f */
  goto L_1186557f;
L_118655c2:;
  /* 118655c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 118655c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 118655c8 push eax */
  push32((uint32_t)(EAX));
  /* 118655c9 call 0x118586c0 */
  push32(0x118655ceu); f_118586c0();
  /* 118655ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 118655d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 118655d4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118655d8 je 0x1186567b */
  if (C.zf) goto L_1186567b;
  /* 118655de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 118655e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 118655e4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 118655eb jmp 0x118655f6 */
  goto L_118655f6;
L_118655ed:;
  /* 118655ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 118655f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 118655f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_118655f6:;
  /* 118655f6 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 118655fa jae 0x1186566c */
  if (!C.cf) goto L_1186566c;
  /* 118655fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 118655ff mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11865602 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865605 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865608 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1186560b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1186560e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865611 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11865615 push ecx */
  push32((uint32_t)(ECX));
  /* 11865616 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865619 push edx */
  push32((uint32_t)(EDX));
  /* 1186561a call 0x1185b690 */
  push32(0x1186561fu); f_1185b690();
  /* 1186561f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865622 push eax */
  push32((uint32_t)(EAX));
  /* 11865623 call 0x1185b510 */
  push32(0x11865628u); f_1185b510();
  /* 11865628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1186562b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186562e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865630 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11865633 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865636 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11865639 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186563c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1186563f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11865642 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11865645 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11865648 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1186564c push eax */
  push32((uint32_t)(EAX));
  /* 1186564d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865650 push ecx */
  push32((uint32_t)(ECX));
  /* 11865651 call 0x1185b690 */
  push32(0x11865656u); f_1185b690();
  /* 11865656 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865659 push eax */
  push32((uint32_t)(EAX));
  /* 1186565a call 0x1185b510 */
  push32(0x1186565fu); f_1185b510();
  /* 1186565f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11865662 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865665 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865667 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1186566a jmp 0x118655ed */
  goto L_118655ed;
L_1186566c:;
  /* 1186566c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1186566f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11865672 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11865675 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11865678 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1186567b:;
  /* 1186567b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1186567e pop esi */
  ESI = (pop32());
  /* 1186567f mov esp, ebp */
  ESP = (EBP);
  /* 11865681 pop ebp */
  EBP = (pop32());
  /* 11865682 ret  */
  ESPCHK(0x11865560u, _esp0);
  ESP += 4; return;
}

