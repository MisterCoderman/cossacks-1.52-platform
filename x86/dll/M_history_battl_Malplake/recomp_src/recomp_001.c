#include "recomp.h"

/* FUN_100067e0 @ 0x12a067e0 (10 bytes, 5 insns) */
void f_12a067e0(void) {
  FTRACE(0x12a067e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a067e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a067e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a067e3 mov eax, 1 */
  EAX = (0x1u);
  /* 12a067e8 pop ebp */
  EBP = (pop32());
  /* 12a067e9 ret  */
  ESPCHK(0x12a067e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100067f0 @ 0x12a067f0 (173 bytes, 59 insns) */
void f_12a067f0(void) {
  FTRACE(0x12a067f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a067f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a067f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a067f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a067f6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a067fa jbe 0x12a06803 */
  if ((C.cf||C.zf)) goto L_12a06803;
  /* 12a067fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a067fe jmp 0x12a06899 */
  goto L_12a06899;
L_12a06803:;
  /* 12a06803 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06805 call 0x12a06320 */
  push32(0x12a0680au); f_12a06320();
  /* 12a0680a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0680d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06810 push eax */
  push32((uint32_t)(EAX));
  /* 12a06811 call 0x12a06c20 */
  push32(0x12a06816u); f_12a06c20();
  /* 12a06816 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06819 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0681c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06820 je 0x12a06861 */
  if (C.zf) goto L_12a06861;
  /* 12a06822 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a06829 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0682c cmp ecx, dword ptr [0x12a2cc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06832 ja 0x12a06852 */
  if ((!C.cf&&!C.zf)) goto L_12a06852;
  /* 12a06834 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06837 push edx */
  push32((uint32_t)(EDX));
  /* 12a06838 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0683b push eax */
  push32((uint32_t)(EAX));
  /* 12a0683c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0683f push ecx */
  push32((uint32_t)(ECX));
  /* 12a06840 call 0x12a07af0 */
  push32(0x12a06845u); f_12a07af0();
  /* 12a06845 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0684a je 0x12a06852 */
  if (C.zf) goto L_12a06852;
  /* 12a0684c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0684f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a06852:;
  /* 12a06852 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06854 call 0x12a063c0 */
  push32(0x12a06859u); f_12a063c0();
  /* 12a06859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0685c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0685f jmp 0x12a06899 */
  goto L_12a06899;
L_12a06861:;
  /* 12a06861 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06863 call 0x12a063c0 */
  push32(0x12a06868u); f_12a063c0();
  /* 12a06868 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0686b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0686f jne 0x12a06878 */
  if (!C.zf) goto L_12a06878;
  /* 12a06871 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12a06878:;
  /* 12a06878 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0687b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0687e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12a06880 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12a06883 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06886 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06887 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0688a push edx */
  push32((uint32_t)(EDX));
  /* 12a0688b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12a0688d mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a06892 push eax */
  push32((uint32_t)(EAX));
  /* 12a06893 call dword ptr [0x12a302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f8))), 0x12a06899u);
L_12a06899:;
  /* 12a06899 mov esp, ebp */
  ESP = (EBP);
  /* 12a0689b pop ebp */
  EBP = (pop32());
  /* 12a0689c ret  */
  ESPCHK(0x12a067f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068a0 @ 0x12a068a0 (490 bytes, 165 insns) */
void f_12a068a0(void) {
  FTRACE(0x12a068a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a068a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a068a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a068a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a068a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a068aa jne 0x12a068bd */
  if (!C.zf) goto L_12a068bd;
  /* 12a068ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a068af push eax */
  push32((uint32_t)(EAX));
  /* 12a068b0 call 0x12a066f0 */
  push32(0x12a068b5u); f_12a066f0();
  /* 12a068b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a068b8 jmp 0x12a06a86 */
  goto L_12a06a86;
L_12a068bd:;
  /* 12a068bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a068c1 jne 0x12a068d6 */
  if (!C.zf) goto L_12a068d6;
  /* 12a068c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a068c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a068c7 call 0x12a06a90 */
  push32(0x12a068ccu); f_12a06a90();
  /* 12a068cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a068cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a068d1 jmp 0x12a06a86 */
  goto L_12a06a86;
L_12a068d6:;
  /* 12a068d6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a068dd cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a068e1 ja 0x12a06a59 */
  if ((!C.cf&&!C.zf)) goto L_12a06a59;
  /* 12a068e7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a068e9 call 0x12a06320 */
  push32(0x12a068eeu); f_12a06320();
  /* 12a068ee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a068f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a068f4 push edx */
  push32((uint32_t)(EDX));
  /* 12a068f5 call 0x12a06c20 */
  push32(0x12a068fau); f_12a06c20();
  /* 12a068fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a068fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a06900 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06904 je 0x12a06a1c */
  if (C.zf) goto L_12a06a1c;
  /* 12a0690a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0690d cmp eax, dword ptr [0x12a2cc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2cc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06913 ja 0x12a06990 */
  if ((!C.cf&&!C.zf)) goto L_12a06990;
  /* 12a06915 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06918 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0691c push edx */
  push32((uint32_t)(EDX));
  /* 12a0691d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06920 push eax */
  push32((uint32_t)(EAX));
  /* 12a06921 call 0x12a07af0 */
  push32(0x12a06926u); f_12a07af0();
  /* 12a06926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0692b je 0x12a06935 */
  if (C.zf) goto L_12a06935;
  /* 12a0692d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06930 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a06933 jmp 0x12a06990 */
  goto L_12a06990;
L_12a06935:;
  /* 12a06935 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06938 push edx */
  push32((uint32_t)(EDX));
  /* 12a06939 call 0x12a072b0 */
  push32(0x12a0693eu); f_12a072b0();
  /* 12a0693e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06941 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a06944 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06948 je 0x12a06990 */
  if (C.zf) goto L_12a06990;
  /* 12a0694a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0694d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 12a06950 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06953 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a06956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06959 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0695c jae 0x12a06966 */
  if (!C.cf) goto L_12a06966;
  /* 12a0695e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06961 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a06964 jmp 0x12a0696c */
  goto L_12a0696c;
L_12a06966:;
  /* 12a06966 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06969 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12a0696c:;
  /* 12a0696c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0696f push edx */
  push32((uint32_t)(EDX));
  /* 12a06970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06973 push eax */
  push32((uint32_t)(EAX));
  /* 12a06974 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06977 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06978 call 0x12a09200 */
  push32(0x12a0697du); f_12a09200();
  /* 12a0697d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06980 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06983 push edx */
  push32((uint32_t)(EDX));
  /* 12a06984 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06987 push eax */
  push32((uint32_t)(EAX));
  /* 12a06988 call 0x12a06ce0 */
  push32(0x12a0698du); f_12a06ce0();
  /* 12a0698d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a06990:;
  /* 12a06990 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06994 jne 0x12a06a10 */
  if (!C.zf) goto L_12a06a10;
  /* 12a06996 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0699a jne 0x12a069a3 */
  if (!C.zf) goto L_12a069a3;
  /* 12a0699c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12a069a3:;
  /* 12a069a3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a069a6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a069a9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 12a069ac mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12a069af mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a069b2 push edx */
  push32((uint32_t)(EDX));
  /* 12a069b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a069b5 mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a069ba push eax */
  push32((uint32_t)(EAX));
  /* 12a069bb call dword ptr [0x12a302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f4))), 0x12a069c1u);
  /* 12a069c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a069c4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a069c8 je 0x12a06a10 */
  if (C.zf) goto L_12a06a10;
  /* 12a069ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a069cd mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a069d0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a069d3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a069d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a069d9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a069dc jae 0x12a069e6 */
  if (!C.cf) goto L_12a069e6;
  /* 12a069de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a069e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a069e4 jmp 0x12a069ec */
  goto L_12a069ec;
L_12a069e6:;
  /* 12a069e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a069e9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12a069ec:;
  /* 12a069ec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a069ef push eax */
  push32((uint32_t)(EAX));
  /* 12a069f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a069f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a069f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a069f7 push edx */
  push32((uint32_t)(EDX));
  /* 12a069f8 call 0x12a09200 */
  push32(0x12a069fdu); f_12a09200();
  /* 12a069fd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06a03 push eax */
  push32((uint32_t)(EAX));
  /* 12a06a04 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06a07 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06a08 call 0x12a06ce0 */
  push32(0x12a06a0du); f_12a06ce0();
  /* 12a06a0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a06a10:;
  /* 12a06a10 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06a12 call 0x12a063c0 */
  push32(0x12a06a17u); f_12a063c0();
  /* 12a06a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06a1a jmp 0x12a06a59 */
  goto L_12a06a59;
L_12a06a1c:;
  /* 12a06a1c push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06a1e call 0x12a063c0 */
  push32(0x12a06a23u); f_12a063c0();
  /* 12a06a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06a26 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06a2a jne 0x12a06a33 */
  if (!C.zf) goto L_12a06a33;
  /* 12a06a2c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12a06a33:;
  /* 12a06a33 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06a36 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06a39 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12a06a3c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12a06a3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06a42 push eax */
  push32((uint32_t)(EAX));
  /* 12a06a43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06a46 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06a47 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a06a49 mov edx, dword ptr [0x12a2fe2c] */
  EDX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a06a4f push edx */
  push32((uint32_t)(EDX));
  /* 12a06a50 call dword ptr [0x12a302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f8))), 0x12a06a56u);
  /* 12a06a56 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a06a59:;
  /* 12a06a59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06a5d jne 0x12a06a68 */
  if (!C.zf) goto L_12a06a68;
  /* 12a06a5f cmp dword ptr [0x12a2e670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06a66 jne 0x12a06a6d */
  if (!C.zf) goto L_12a06a6d;
L_12a06a68:;
  /* 12a06a68 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06a6b jmp 0x12a06a86 */
  goto L_12a06a86;
L_12a06a6d:;
  /* 12a06a6d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06a70 push eax */
  push32((uint32_t)(EAX));
  /* 12a06a71 call 0x12a06660 */
  push32(0x12a06a76u); f_12a06660();
  /* 12a06a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06a79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a06a7b jne 0x12a06a81 */
  if (!C.zf) goto L_12a06a81;
  /* 12a06a7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06a7f jmp 0x12a06a86 */
  goto L_12a06a86;
L_12a06a81:;
  /* 12a06a81 jmp 0x12a068d6 */
  goto L_12a068d6;
L_12a06a86:;
  /* 12a06a86 mov esp, ebp */
  ESP = (EBP);
  /* 12a06a88 pop ebp */
  EBP = (pop32());
  /* 12a06a89 ret  */
  ESPCHK(0x12a068a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x12a06a90 (104 bytes, 38 insns) */
void f_12a06a90(void) {
  FTRACE(0x12a06a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06a91 mov ebp, esp */
  EBP = (ESP);
  /* 12a06a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06a94 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06a98 jne 0x12a06a9c */
  if (!C.zf) goto L_12a06a9c;
  /* 12a06a9a jmp 0x12a06af4 */
  goto L_12a06af4;
L_12a06a9c:;
  /* 12a06a9c push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06a9e call 0x12a06320 */
  push32(0x12a06aa3u); f_12a06320();
  /* 12a06aa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06aa9 push eax */
  push32((uint32_t)(EAX));
  /* 12a06aaa call 0x12a06c20 */
  push32(0x12a06aafu); f_12a06c20();
  /* 12a06aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06ab2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a06ab5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06ab9 je 0x12a06ad7 */
  if (C.zf) goto L_12a06ad7;
  /* 12a06abb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06abe push ecx */
  push32((uint32_t)(ECX));
  /* 12a06abf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06ac2 push edx */
  push32((uint32_t)(EDX));
  /* 12a06ac3 call 0x12a06ce0 */
  push32(0x12a06ac8u); f_12a06ce0();
  /* 12a06ac8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06acb push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06acd call 0x12a063c0 */
  push32(0x12a06ad2u); f_12a063c0();
  /* 12a06ad2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06ad5 jmp 0x12a06af4 */
  goto L_12a06af4;
L_12a06ad7:;
  /* 12a06ad7 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06ad9 call 0x12a063c0 */
  push32(0x12a06adeu); f_12a063c0();
  /* 12a06ade add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06ae1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06ae4 push eax */
  push32((uint32_t)(EAX));
  /* 12a06ae5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a06ae7 mov ecx, dword ptr [0x12a2fe2c] */
  ECX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a06aed push ecx */
  push32((uint32_t)(ECX));
  /* 12a06aee call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a06af4u);
L_12a06af4:;
  /* 12a06af4 mov esp, ebp */
  ESP = (EBP);
  /* 12a06af6 pop ebp */
  EBP = (pop32());
  /* 12a06af7 ret  */
  ESPCHK(0x12a06a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b00 @ 0x12a06b00 (116 bytes, 34 insns) */
void f_12a06b00(void) {
  FTRACE(0x12a06b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06b00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06b01 mov ebp, esp */
  EBP = (ESP);
  /* 12a06b03 push ecx */
  push32((uint32_t)(ECX));
  /* 12a06b04 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12a06b0b push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06b0d call 0x12a06320 */
  push32(0x12a06b12u); f_12a06320();
  /* 12a06b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06b15 call 0x12a08210 */
  push32(0x12a06b1au); f_12a08210();
  /* 12a06b1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a06b1c jge 0x12a06b25 */
  if ((C.sf==C.of)) goto L_12a06b25;
  /* 12a06b1e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12a06b25:;
  /* 12a06b25 push 9 */
  push32((uint32_t)(0x9u));
  /* 12a06b27 call 0x12a063c0 */
  push32(0x12a06b2cu); f_12a063c0();
  /* 12a06b2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06b2f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a06b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a06b33 mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a06b38 push eax */
  push32((uint32_t)(EAX));
  /* 12a06b39 call dword ptr [0x12a302b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302b4))), 0x12a06b3fu);
  /* 12a06b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a06b41 jne 0x12a06b6d */
  if (!C.zf) goto L_12a06b6d;
  /* 12a06b43 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a06b49u);
  /* 12a06b49 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06b4c jne 0x12a06b66 */
  if (!C.zf) goto L_12a06b66;
  /* 12a06b4e call 0x12a0a800 */
  push32(0x12a06b53u); f_12a0a800();
  /* 12a06b53 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12a06b59 call 0x12a0a7f0 */
  push32(0x12a06b5eu); f_12a0a7f0();
  /* 12a06b5e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12a06b64 jmp 0x12a06b6d */
  goto L_12a06b6d;
L_12a06b66:;
  /* 12a06b66 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12a06b6d:;
  /* 12a06b6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06b70 mov esp, ebp */
  ESP = (EBP);
  /* 12a06b72 pop ebp */
  EBP = (pop32());
  /* 12a06b73 ret  */
  ESPCHK(0x12a06b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x12a06b80 (10 bytes, 5 insns) */
void f_12a06b80(void) {
  FTRACE(0x12a06b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06b80 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06b81 mov ebp, esp */
  EBP = (ESP);
  /* 12a06b83 call 0x12a06b00 */
  push32(0x12a06b88u); f_12a06b00();
  /* 12a06b88 pop ebp */
  EBP = (pop32());
  /* 12a06b89 ret  */
  ESPCHK(0x12a06b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b90 @ 0x12a06b90 (10 bytes, 5 insns) */
void f_12a06b90(void) {
  FTRACE(0x12a06b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06b90 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06b91 mov ebp, esp */
  EBP = (ESP);
  /* 12a06b93 mov eax, dword ptr [0x12a2cc94] */
  EAX = (r32((uint32_t)(0x12a2cc94)));
  /* 12a06b98 pop ebp */
  EBP = (pop32());
  /* 12a06b99 ret  */
  ESPCHK(0x12a06b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ba0 @ 0x12a06ba0 (31 bytes, 11 insns) */
void f_12a06ba0(void) {
  FTRACE(0x12a06ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06ba1 mov ebp, esp */
  EBP = (ESP);
  /* 12a06ba3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06baa jbe 0x12a06bb0 */
  if ((C.cf||C.zf)) goto L_12a06bb0;
  /* 12a06bac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06bae jmp 0x12a06bbd */
  goto L_12a06bbd;
L_12a06bb0:;
  /* 12a06bb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06bb3 mov dword ptr [0x12a2cc94], eax */
  w32((uint32_t)(0x12a2cc94), (EAX));
  /* 12a06bb8 mov eax, 1 */
  EAX = (0x1u);
L_12a06bbd:;
  /* 12a06bbd pop ebp */
  EBP = (pop32());
  /* 12a06bbe ret  */
  ESPCHK(0x12a06ba0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bc0 @ 0x12a06bc0 (89 bytes, 20 insns) */
void f_12a06bc0(void) {
  FTRACE(0x12a06bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06bc1 mov ebp, esp */
  EBP = (ESP);
  /* 12a06bc3 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12a06bc8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a06bca mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a06bcf push eax */
  push32((uint32_t)(EAX));
  /* 12a06bd0 call dword ptr [0x12a302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f4))), 0x12a06bd6u);
  /* 12a06bd6 mov dword ptr [0x12a2fe28], eax */
  w32((uint32_t)(0x12a2fe28), (EAX));
  /* 12a06bdb cmp dword ptr [0x12a2fe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06be2 jne 0x12a06be8 */
  if (!C.zf) goto L_12a06be8;
  /* 12a06be4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06be6 jmp 0x12a06c17 */
  goto L_12a06c17;
L_12a06be8:;
  /* 12a06be8 mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a06bee mov dword ptr [0x12a2fe1c], ecx */
  w32((uint32_t)(0x12a2fe1c), (ECX));
  /* 12a06bf4 mov dword ptr [0x12a2fe20], 0 */
  w32((uint32_t)(0x12a2fe20), (0x0u));
  /* 12a06bfe mov dword ptr [0x12a2fe24], 0 */
  w32((uint32_t)(0x12a2fe24), (0x0u));
  /* 12a06c08 mov dword ptr [0x12a2fe08], 0x10 */
  w32((uint32_t)(0x12a2fe08), (0x10u));
  /* 12a06c12 mov eax, 1 */
  EAX = (0x1u);
L_12a06c17:;
  /* 12a06c17 pop ebp */
  EBP = (pop32());
  /* 12a06c18 ret  */
  ESPCHK(0x12a06bc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c20 @ 0x12a06c20 (85 bytes, 29 insns) */
void f_12a06c20(void) {
  FTRACE(0x12a06c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06c20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06c21 mov ebp, esp */
  EBP = (ESP);
  /* 12a06c23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06c26 mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a06c2b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a06c2e mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a06c34 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06c36 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a06c39 mov edx, dword ptr [0x12a2fe28] */
  EDX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a06c3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a06c42:;
  /* 12a06c42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06c45 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06c48 jae 0x12a06c6f */
  if (!C.cf) goto L_12a06c6f;
  /* 12a06c4a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06c4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06c50 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06c53 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a06c56 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06c5d jae 0x12a06c64 */
  if (!C.cf) goto L_12a06c64;
  /* 12a06c5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06c62 jmp 0x12a06c71 */
  goto L_12a06c71;
L_12a06c64:;
  /* 12a06c64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06c67 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06c6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a06c6d jmp 0x12a06c42 */
  goto L_12a06c42;
L_12a06c6f:;
  /* 12a06c6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a06c71:;
  /* 12a06c71 mov esp, ebp */
  ESP = (EBP);
  /* 12a06c73 pop ebp */
  EBP = (pop32());
  /* 12a06c74 ret  */
  ESPCHK(0x12a06c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c80 @ 0x12a06c80 (95 bytes, 33 insns) */
void f_12a06c80(void) {
  FTRACE(0x12a06c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06c80 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06c81 mov ebp, esp */
  EBP = (ESP);
  /* 12a06c83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06c89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06c8c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06c8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a06c92 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06c95 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12a06c98 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a06c9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a06ca0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06ca3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a06ca5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06ca8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a06cab and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a06cad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a06caf jne 0x12a06cd1 */
  if (!C.zf) goto L_12a06cd1;
  /* 12a06cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06cb4 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12a06cb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a06cb9 jne 0x12a06cd1 */
  if (!C.zf) goto L_12a06cd1;
  /* 12a06cbb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a06cbe and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a06cc4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06cc6 je 0x12a06cd1 */
  if (C.zf) goto L_12a06cd1;
  /* 12a06cc8 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12a06ccf jmp 0x12a06cd8 */
  goto L_12a06cd8;
L_12a06cd1:;
  /* 12a06cd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12a06cd8:;
  /* 12a06cd8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06cdb mov esp, ebp */
  ESP = (EBP);
  /* 12a06cdd pop ebp */
  EBP = (pop32());
  /* 12a06cde ret  */
  ESPCHK(0x12a06c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x12a06ce0 (1485 bytes, 453 insns) */
void f_12a06ce0(void) {
  FTRACE(0x12a06ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a06ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a06ce1 mov ebp, esp */
  EBP = (ESP);
  /* 12a06ce3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06ce6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06ce9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a06cec mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12a06cef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06cf2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06cf5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06cf8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a06cfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a06cfe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12a06d01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a06d04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06d07 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a06d0d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06d10 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12a06d17 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a06d1a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a06d1d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06d20 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a06d23 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a06d26 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a06d28 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06d2b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12a06d2e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a06d31 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06d34 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12a06d37 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06d3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a06d3c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a06d3f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a06d42 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12a06d45 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a06d48 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a06d4b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a06d4e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06d50 jne 0x12a06e78 */
  if (!C.zf) goto L_12a06e78;
  /* 12a06d56 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a06d59 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a06d5c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06d5f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a06d62 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06d66 jbe 0x12a06d6f */
  if ((C.cf||C.zf)) goto L_12a06d6f;
  /* 12a06d68 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12a06d6f:;
  /* 12a06d6f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06d72 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06d75 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a06d78 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06d7b jne 0x12a06e51 */
  if (!C.zf) goto L_12a06e51;
  /* 12a06d81 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06d85 jae 0x12a06de6 */
  if (!C.cf) goto L_12a06de6;
  /* 12a06d87 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a06d8c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a06d8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a06d91 not eax */
  EAX = (~(EAX));
  /* 12a06d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06d96 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06d99 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12a06d9d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a06d9f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06da2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06da5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12a06da9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06dac add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06daf mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12a06db2 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a06db5 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06db8 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06dbb mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12a06dbe mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06dc1 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06dc4 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a06dc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a06dca jne 0x12a06de4 */
  if (!C.zf) goto L_12a06de4;
  /* 12a06dcc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a06dd1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a06dd4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a06dd6 not eax */
  EAX = (~(EAX));
  /* 12a06dd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06ddb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a06ddd and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a06ddf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06de2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a06de4:;
  /* 12a06de4 jmp 0x12a06e51 */
  goto L_12a06e51;
L_12a06de6:;
  /* 12a06de6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a06de9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06dec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a06df1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a06df3 not edx */
  EDX = (~(EDX));
  /* 12a06df5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06df8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06dfb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12a06e02 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06e04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06e07 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06e0a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12a06e11 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06e14 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06e17 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a06e1a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a06e1d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06e20 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06e23 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12a06e26 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06e29 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06e2c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a06e30 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06e32 jne 0x12a06e51 */
  if (!C.zf) goto L_12a06e51;
  /* 12a06e34 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a06e37 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06e3a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a06e3f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a06e41 not edx */
  EDX = (~(EDX));
  /* 12a06e43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06e46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a06e49 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a06e4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06e4e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12a06e51:;
  /* 12a06e51 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06e54 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a06e57 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06e5a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a06e5d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12a06e60 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06e63 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a06e66 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a06e69 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a06e6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a06e6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a06e72 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06e75 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12a06e78:;
  /* 12a06e78 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a06e7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12a06e7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06e81 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a06e84 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06e88 jbe 0x12a06e91 */
  if ((C.cf||C.zf)) goto L_12a06e91;
  /* 12a06e8a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12a06e91:;
  /* 12a06e91 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06e94 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a06e97 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06e99 jne 0x12a06ff5 */
  if (!C.zf) goto L_12a06ff5;
  /* 12a06e9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a06ea2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06ea5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12a06ea8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06eab sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12a06eae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06eb1 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12a06eb4 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06eb8 jbe 0x12a06ec1 */
  if ((C.cf||C.zf)) goto L_12a06ec1;
  /* 12a06eba mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12a06ec1:;
  /* 12a06ec1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a06ec4 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06ec7 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12a06eca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a06ecd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a06ed0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06ed3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12a06ed6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06eda jbe 0x12a06ee3 */
  if ((C.cf||C.zf)) goto L_12a06ee3;
  /* 12a06edc mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12a06ee3:;
  /* 12a06ee3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a06ee6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06ee9 je 0x12a06fef */
  if (C.zf) goto L_12a06fef;
  /* 12a06eef mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06ef2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06ef5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a06ef8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06efb jne 0x12a06fd1 */
  if (!C.zf) goto L_12a06fd1;
  /* 12a06f01 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a06f05 jae 0x12a06f66 */
  if (!C.cf) goto L_12a06f66;
  /* 12a06f07 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a06f0c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a06f0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a06f11 not edx */
  EDX = (~(EDX));
  /* 12a06f13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06f16 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f19 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12a06f1d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a06f1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06f22 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f25 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12a06f29 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f2c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06f2f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a06f32 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a06f35 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f38 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06f3b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12a06f3e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f41 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06f44 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a06f48 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06f4a jne 0x12a06f64 */
  if (!C.zf) goto L_12a06f64;
  /* 12a06f4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a06f51 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a06f54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a06f56 not edx */
  EDX = (~(EDX));
  /* 12a06f58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06f5b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a06f5d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a06f5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06f62 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a06f64:;
  /* 12a06f64 jmp 0x12a06fd1 */
  goto L_12a06fd1;
L_12a06f66:;
  /* 12a06f66 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a06f69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06f6c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a06f71 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a06f73 not eax */
  EAX = (~(EAX));
  /* 12a06f75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06f78 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f7b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12a06f82 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a06f84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a06f87 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f8a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12a06f91 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06f94 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06f97 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12a06f9a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a06f9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06fa0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06fa3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12a06fa6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a06fa9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a06fac movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a06fb0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a06fb2 jne 0x12a06fd1 */
  if (!C.zf) goto L_12a06fd1;
  /* 12a06fb4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a06fb7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a06fba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a06fbf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a06fc1 not eax */
  EAX = (~(EAX));
  /* 12a06fc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06fc6 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a06fc9 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a06fcb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a06fce mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a06fd1:;
  /* 12a06fd1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06fd4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a06fd7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06fda mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a06fdd mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a06fe0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06fe3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a06fe6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06fe9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a06fec mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12a06fef:;
  /* 12a06fef mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a06ff2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12a06ff5:;
  /* 12a06ff5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a06ff8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a06ffb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a06ffd jne 0x12a0700b */
  if (!C.zf) goto L_12a0700b;
  /* 12a06fff mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07002 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07005 je 0x12a0711b */
  if (C.zf) goto L_12a0711b;
L_12a0700b:;
  /* 12a0700b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0700e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07011 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12a07014 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a07017 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0701a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0701d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07020 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a07023 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07026 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07029 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12a0702c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0702f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07032 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12a07035 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07038 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0703b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0703e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a07041 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07044 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07047 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0704a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0704d jne 0x12a0711b */
  if (!C.zf) goto L_12a0711b;
  /* 12a07053 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07057 jae 0x12a070b4 */
  if (!C.cf) goto L_12a070b4;
  /* 12a07059 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a0705c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0705f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a07063 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a07066 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07069 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a0706c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0706f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a07072 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07075 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12a07078 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0707a jne 0x12a07092 */
  if (!C.zf) goto L_12a07092;
  /* 12a0707c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07081 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07084 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07086 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07089 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0708b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0708d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07090 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a07092:;
  /* 12a07092 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07097 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0709a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a0709c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0709f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a070a2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12a070a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a070a8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a070ab mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a070ae mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12a070b2 jmp 0x12a0711b */
  goto L_12a0711b;
L_12a070b4:;
  /* 12a070b4 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a070b7 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a070ba movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a070be mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a070c1 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a070c4 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a070c7 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a070ca mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a070cd add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a070d0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12a070d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a070d5 jne 0x12a070f2 */
  if (!C.zf) goto L_12a070f2;
  /* 12a070d7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a070da sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a070dd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a070e2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a070e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a070e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a070ea or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a070ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a070ef mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12a070f2:;
  /* 12a070f2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a070f5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a070f8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a070fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a070ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07102 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a07105 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12a0710c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0710e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07111 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12a07114 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12a0711b:;
  /* 12a0711b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0711e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07121 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a07123 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07126 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07129 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0712c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 12a0712f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07132 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a07134 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0713a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a0713c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0713f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07142 jne 0x12a072a9 */
  if (!C.zf) goto L_12a072a9;
  /* 12a07148 cmp dword ptr [0x12a2fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0714f je 0x12a07298 */
  if (C.zf) goto L_12a07298;
  /* 12a07155 mov eax, dword ptr [0x12a2fe18] */
  EAX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a0715a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12a0715d mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07163 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a07166 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07168 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a0716b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12a07170 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a07175 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07178 push eax */
  push32((uint32_t)(EAX));
  /* 12a07179 call dword ptr [0x12a302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d8))), 0x12a0717fu);
  /* 12a0717f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07184 mov ecx, dword ptr [0x12a2fe18] */
  ECX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a0718a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a0718c mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07191 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a07194 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07196 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a0719c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a0719f mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071a4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a071a7 mov edx, dword ptr [0x12a2fe18] */
  EDX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a071ad mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12a071b8 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071bd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a071c0 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12a071c3 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a071c6 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071cb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a071ce mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12a071d1 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071d7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a071da movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12a071de test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a071e0 jne 0x12a071f6 */
  if (!C.zf) goto L_12a071f6;
  /* 12a071e2 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a071eb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12a071ed mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071f3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12a071f6:;
  /* 12a071f6 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a071fc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07200 jne 0x12a07298 */
  if (!C.zf) goto L_12a07298;
  /* 12a07206 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a0720b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0720d mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07212 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a07215 push ecx */
  push32((uint32_t)(ECX));
  /* 12a07216 call dword ptr [0x12a302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d8))), 0x12a0721cu);
  /* 12a0721c mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07222 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a07225 push eax */
  push32((uint32_t)(EAX));
  /* 12a07226 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a07228 mov ecx, dword ptr [0x12a2fe2c] */
  ECX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a0722e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0722f call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a07235u);
  /* 12a07235 mov edx, dword ptr [0x12a2fe24] */
  EDX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a0723b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0723e mov eax, dword ptr [0x12a2fe28] */
  EAX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a07243 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07245 mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a0724b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0724e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07250 push eax */
  push32((uint32_t)(EAX));
  /* 12a07251 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07257 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0725a push edx */
  push32((uint32_t)(EDX));
  /* 12a0725b mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a07260 push eax */
  push32((uint32_t)(EAX));
  /* 12a07261 call 0x12a0a810 */
  push32(0x12a07266u); f_12a0a810();
  /* 12a07266 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07269 mov ecx, dword ptr [0x12a2fe24] */
  ECX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a0726f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07272 mov dword ptr [0x12a2fe24], ecx */
  w32((uint32_t)(0x12a2fe24), (ECX));
  /* 12a07278 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0727b cmp edx, dword ptr [0x12a2fe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12a2fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07281 jbe 0x12a0728c */
  if ((C.cf||C.zf)) goto L_12a0728c;
  /* 12a07283 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07286 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07289 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a0728c:;
  /* 12a0728c mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a07292 mov dword ptr [0x12a2fe1c], ecx */
  w32((uint32_t)(0x12a2fe1c), (ECX));
L_12a07298:;
  /* 12a07298 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0729b mov dword ptr [0x12a2fe20], edx */
  w32((uint32_t)(0x12a2fe20), (EDX));
  /* 12a072a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a072a4 mov dword ptr [0x12a2fe18], eax */
  w32((uint32_t)(0x12a2fe18), (EAX));
L_12a072a9:;
  /* 12a072a9 mov esp, ebp */
  ESP = (EBP);
  /* 12a072ab pop ebp */
  EBP = (pop32());
  /* 12a072ac ret  */
  ESPCHK(0x12a06ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_100072b0 @ 0x12a072b0 (1334 bytes, 427 insns) */
void f_12a072b0(void) {
  FTRACE(0x12a072b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a072b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a072b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a072b3 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a072b6 push esi */
  push32((uint32_t)(ESI));
  /* 12a072b7 mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a072bc imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a072bf mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a072c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a072c7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a072ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a072cd add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a072d0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12a072d3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12a072d6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a072d9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12a072dc sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a072df mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a072e2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a072e6 jge 0x12a072fc */
  if ((C.sf==C.of)) goto L_12a072fc;
  /* 12a072e8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a072eb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a072ee shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a072f0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a072f3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 12a072fa jmp 0x12a07311 */
  goto L_12a07311;
L_12a072fc:;
  /* 12a072fc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a07303 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07306 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07309 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0730c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a0730e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_12a07311:;
  /* 12a07311 mov ecx, dword ptr [0x12a2fe1c] */
  ECX = (r32((uint32_t)(0x12a2fe1c)));
  /* 12a07317 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12a0731a:;
  /* 12a0731a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0731d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07320 jae 0x12a07346 */
  if (!C.cf) goto L_12a07346;
  /* 12a07322 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07325 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a07328 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 12a0732a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0732d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a07330 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 12a07333 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07335 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a07337 je 0x12a0733b */
  if (C.zf) goto L_12a0733b;
  /* 12a07339 jmp 0x12a07346 */
  goto L_12a07346;
L_12a0733b:;
  /* 12a0733b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0733e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07341 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a07344 jmp 0x12a0731a */
  goto L_12a0731a;
L_12a07346:;
  /* 12a07346 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07349 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0734c jne 0x12a0742d */
  if (!C.zf) goto L_12a0742d;
  /* 12a07352 mov eax, dword ptr [0x12a2fe28] */
  EAX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a07357 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12a0735a:;
  /* 12a0735a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0735d cmp ecx, dword ptr [0x12a2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07363 jae 0x12a07389 */
  if (!C.cf) goto L_12a07389;
  /* 12a07365 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07368 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0736b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 12a0736d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07370 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a07373 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12a07376 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07378 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0737a je 0x12a0737e */
  if (C.zf) goto L_12a0737e;
  /* 12a0737c jmp 0x12a07389 */
  goto L_12a07389;
L_12a0737e:;
  /* 12a0737e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07381 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07384 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a07387 jmp 0x12a0735a */
  goto L_12a0735a;
L_12a07389:;
  /* 12a07389 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0738c cmp ecx, dword ptr [0x12a2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07392 jne 0x12a0742d */
  if (!C.zf) goto L_12a0742d;
L_12a07398:;
  /* 12a07398 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0739b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0739e jae 0x12a073b6 */
  if (!C.cf) goto L_12a073b6;
  /* 12a073a0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073a3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073a7 je 0x12a073ab */
  if (C.zf) goto L_12a073ab;
  /* 12a073a9 jmp 0x12a073b6 */
  goto L_12a073b6;
L_12a073ab:;
  /* 12a073ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a073b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a073b4 jmp 0x12a07398 */
  goto L_12a07398;
L_12a073b6:;
  /* 12a073b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073bc jne 0x12a07407 */
  if (!C.zf) goto L_12a07407;
  /* 12a073be mov eax, dword ptr [0x12a2fe28] */
  EAX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a073c3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12a073c6:;
  /* 12a073c6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073c9 cmp ecx, dword ptr [0x12a2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073cf jae 0x12a073e7 */
  if (!C.cf) goto L_12a073e7;
  /* 12a073d1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073d4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073d8 je 0x12a073dc */
  if (C.zf) goto L_12a073dc;
  /* 12a073da jmp 0x12a073e7 */
  goto L_12a073e7;
L_12a073dc:;
  /* 12a073dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073df add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a073e2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a073e5 jmp 0x12a073c6 */
  goto L_12a073c6;
L_12a073e7:;
  /* 12a073e7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a073ea cmp ecx, dword ptr [0x12a2fe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073f0 jne 0x12a07407 */
  if (!C.zf) goto L_12a07407;
  /* 12a073f2 call 0x12a077f0 */
  push32(0x12a073f7u); f_12a077f0();
  /* 12a073f7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a073fa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a073fe jne 0x12a07407 */
  if (!C.zf) goto L_12a07407;
  /* 12a07400 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07402 jmp 0x12a077e1 */
  goto L_12a077e1;
L_12a07407:;
  /* 12a07407 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0740a push edx */
  push32((uint32_t)(EDX));
  /* 12a0740b call 0x12a07900 */
  push32(0x12a07410u); f_12a07900();
  /* 12a07410 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07413 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07416 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a07419 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a0741b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0741e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a07421 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07424 jne 0x12a0742d */
  if (!C.zf) goto L_12a0742d;
  /* 12a07426 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07428 jmp 0x12a077e1 */
  goto L_12a077e1;
L_12a0742d:;
  /* 12a0742d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07430 mov dword ptr [0x12a2fe1c], edx */
  w32((uint32_t)(0x12a2fe1c), (EDX));
  /* 12a07436 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07439 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0743c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 12a0743f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07442 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a07444 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12a07447 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0744b je 0x12a07470 */
  if (C.zf) goto L_12a07470;
  /* 12a0744d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07450 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07453 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a07456 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 12a0745a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0745d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07460 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12a07463 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12a0746a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12a0746c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0746e jne 0x12a074a5 */
  if (!C.zf) goto L_12a074a5;
L_12a07470:;
  /* 12a07470 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12a07477:;
  /* 12a07477 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0747a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a0747d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a07480 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12a07484 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07487 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a0748a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 12a0748d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12a07494 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12a07496 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07498 jne 0x12a074a5 */
  if (!C.zf) goto L_12a074a5;
  /* 12a0749a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0749d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a074a0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12a074a3 jmp 0x12a07477 */
  goto L_12a07477;
L_12a074a5:;
  /* 12a074a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a074a8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a074ae mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a074b1 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12a074b8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a074bb mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a074c2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a074c5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a074c8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a074cb and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12a074cf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12a074d2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a074d6 jne 0x12a074f2 */
  if (!C.zf) goto L_12a074f2;
  /* 12a074d8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 12a074df mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a074e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a074e5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a074e8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 12a074ef mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12a074f2:;
  /* 12a074f2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a074f6 jl 0x12a0750b */
  if ((C.sf!=C.of)) goto L_12a0750b;
  /* 12a074f8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a074fb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a074fd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a07500 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07503 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07506 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a07509 jmp 0x12a074f2 */
  goto L_12a074f2;
L_12a0750b:;
  /* 12a0750b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0750e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07511 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 12a07515 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a07518 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0751b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0751d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07520 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a07523 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07526 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12a07529 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0752c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a0752f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07533 jle 0x12a0753c */
  if ((C.zf||C.sf!=C.of)) goto L_12a0753c;
  /* 12a07535 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_12a0753c:;
  /* 12a0753c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0753f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07542 je 0x12a07760 */
  if (C.zf) goto L_12a07760;
  /* 12a07548 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0754b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0754e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07551 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07554 jne 0x12a0762a */
  if (!C.zf) goto L_12a0762a;
  /* 12a0755a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0755e jge 0x12a075bf */
  if ((C.sf==C.of)) goto L_12a075bf;
  /* 12a07560 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07565 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07568 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a0756a not eax */
  EAX = (~(EAX));
  /* 12a0756c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0756f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07572 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12a07576 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07578 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0757b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a0757e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12a07582 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07585 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07588 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12a0758b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a0758e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07591 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07594 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12a07597 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a0759a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0759d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a075a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a075a3 jne 0x12a075bd */
  if (!C.zf) goto L_12a075bd;
  /* 12a075a5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a075aa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a075ad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a075af not eax */
  EAX = (~(EAX));
  /* 12a075b1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a075b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a075b6 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a075b8 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a075bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a075bd:;
  /* 12a075bd jmp 0x12a0762a */
  goto L_12a0762a;
L_12a075bf:;
  /* 12a075bf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a075c2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a075c5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a075ca shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a075cc not edx */
  EDX = (~(EDX));
  /* 12a075ce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a075d1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a075d4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12a075db and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a075dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a075e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a075e3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12a075ea mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a075ed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a075f0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a075f3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a075f6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a075f9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a075fc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12a075ff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07602 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07605 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a07609 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0760b jne 0x12a0762a */
  if (!C.zf) goto L_12a0762a;
  /* 12a0760d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07610 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07613 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07618 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a0761a not edx */
  EDX = (~(EDX));
  /* 12a0761c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0761f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07622 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07624 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07627 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12a0762a:;
  /* 12a0762a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0762d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a07630 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07633 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a07636 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12a07639 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0763c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0763f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07642 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a07645 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a07648 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0764c je 0x12a07760 */
  if (C.zf) goto L_12a07760;
  /* 12a07652 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07658 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12a0765b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0765e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07661 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a07664 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07667 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a0766a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0766d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a07670 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a07673 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a07676 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07679 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12a0767c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0767f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07682 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07685 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12a07688 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0768b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0768e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07691 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07694 jne 0x12a07760 */
  if (!C.zf) goto L_12a07760;
  /* 12a0769a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0769e jge 0x12a076fa */
  if ((C.sf==C.of)) goto L_12a076fa;
  /* 12a076a0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076a3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a076a6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a076aa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076ad add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a076b0 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12a076b3 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a076b5 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076b8 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a076bb mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12a076be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a076c0 jne 0x12a076d8 */
  if (!C.zf) goto L_12a076d8;
  /* 12a076c2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a076c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a076ca shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a076cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a076cf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a076d1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a076d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a076d6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a076d8:;
  /* 12a076d8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a076dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a076e0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a076e2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a076e5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076e8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12a076ec or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a076ee mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a076f1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076f4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12a076f8 jmp 0x12a07760 */
  goto L_12a07760;
L_12a076fa:;
  /* 12a076fa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a076fd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07700 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a07704 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07707 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0770a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12a0770d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0770f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07712 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07715 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12a07718 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0771a jne 0x12a07737 */
  if (!C.zf) goto L_12a07737;
  /* 12a0771c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0771f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07722 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07727 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07729 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0772c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0772f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a07731 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07734 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a07737:;
  /* 12a07737 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0773a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0773d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07742 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07744 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07747 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a0774a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12a07751 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07753 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07756 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a07759 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12a07760:;
  /* 12a07760 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07764 je 0x12a0777a */
  if (C.zf) goto L_12a0777a;
  /* 12a07766 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07769 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0776c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a0776e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07771 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07777 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12a0777a:;
  /* 12a0777a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0777d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07780 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a07783 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07789 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0778c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0778e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07794 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07797 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0779a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12a0779d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a077a0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a077a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a077a5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a077a7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a077aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a077ad mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a077af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a077b1 jne 0x12a077d3 */
  if (!C.zf) goto L_12a077d3;
  /* 12a077b3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a077b6 cmp eax, dword ptr [0x12a2fe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2fe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a077bc jne 0x12a077d3 */
  if (!C.zf) goto L_12a077d3;
  /* 12a077be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a077c1 cmp ecx, dword ptr [0x12a2fe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a077c7 jne 0x12a077d3 */
  if (!C.zf) goto L_12a077d3;
  /* 12a077c9 mov dword ptr [0x12a2fe20], 0 */
  w32((uint32_t)(0x12a2fe20), (0x0u));
L_12a077d3:;
  /* 12a077d3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12a077d6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a077d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12a077db mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a077de add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12a077e1:;
  /* 12a077e1 pop esi */
  ESI = (pop32());
  /* 12a077e2 mov esp, ebp */
  ESP = (EBP);
  /* 12a077e4 pop ebp */
  EBP = (pop32());
  /* 12a077e5 ret  */
  ESPCHK(0x12a072b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100077f0 @ 0x12a077f0 (271 bytes, 78 insns) */
void f_12a077f0(void) {
  FTRACE(0x12a077f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a077f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a077f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a077f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a077f4 mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a077f9 cmp eax, dword ptr [0x12a2fe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2fe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a077ff jne 0x12a0784b */
  if (!C.zf) goto L_12a0784b;
  /* 12a07801 mov ecx, dword ptr [0x12a2fe08] */
  ECX = (r32((uint32_t)(0x12a2fe08)));
  /* 12a07807 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0780a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0780d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0780e mov edx, dword ptr [0x12a2fe28] */
  EDX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a07814 push edx */
  push32((uint32_t)(EDX));
  /* 12a07815 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a07817 mov eax, dword ptr [0x12a2fe2c] */
  EAX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a0781c push eax */
  push32((uint32_t)(EAX));
  /* 12a0781d call dword ptr [0x12a302f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f8))), 0x12a07823u);
  /* 12a07823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a07826 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0782a jne 0x12a07833 */
  if (!C.zf) goto L_12a07833;
  /* 12a0782c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0782e jmp 0x12a078fb */
  goto L_12a078fb;
L_12a07833:;
  /* 12a07833 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07836 mov dword ptr [0x12a2fe28], ecx */
  w32((uint32_t)(0x12a2fe28), (ECX));
  /* 12a0783c mov edx, dword ptr [0x12a2fe08] */
  EDX = (r32((uint32_t)(0x12a2fe08)));
  /* 12a07842 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07845 mov dword ptr [0x12a2fe08], edx */
  w32((uint32_t)(0x12a2fe08), (EDX));
L_12a0784b:;
  /* 12a0784b mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a07850 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a07853 mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a07859 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0785b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0785e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12a07863 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a07865 mov edx, dword ptr [0x12a2fe2c] */
  EDX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a0786b push edx */
  push32((uint32_t)(EDX));
  /* 12a0786c call dword ptr [0x12a302f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302f4))), 0x12a07872u);
  /* 12a07872 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07875 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12a07878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0787b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0787f jne 0x12a07885 */
  if (!C.zf) goto L_12a07885;
  /* 12a07881 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07883 jmp 0x12a078fb */
  goto L_12a078fb;
L_12a07885:;
  /* 12a07885 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a07887 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 12a0788c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12a07891 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a07893 call dword ptr [0x12a302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302fc))), 0x12a07899u);
  /* 12a07899 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0789c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12a0789f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078a2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a078a6 jne 0x12a078c2 */
  if (!C.zf) goto L_12a078c2;
  /* 12a078a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078ab mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a078ae push ecx */
  push32((uint32_t)(ECX));
  /* 12a078af push 0 */
  push32((uint32_t)(0x0u));
  /* 12a078b1 mov edx, dword ptr [0x12a2fe2c] */
  EDX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a078b7 push edx */
  push32((uint32_t)(EDX));
  /* 12a078b8 call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a078beu);
  /* 12a078be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a078c0 jmp 0x12a078fb */
  goto L_12a078fb;
L_12a078c2:;
  /* 12a078c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078c5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a078cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078ce mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12a078d5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078d8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 12a078df mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a078e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a078e7 mov dword ptr [0x12a2fe24], eax */
  w32((uint32_t)(0x12a2fe24), (EAX));
  /* 12a078ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a078ef mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a078f2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12a078f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a078fb:;
  /* 12a078fb mov esp, ebp */
  ESP = (EBP);
  /* 12a078fd pop ebp */
  EBP = (pop32());
  /* 12a078fe ret  */
  ESPCHK(0x12a077f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007900 @ 0x12a07900 (494 bytes, 149 insns) */
void f_12a07900(void) {
  FTRACE(0x12a07900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a07900 push ebp */
  push32((uint32_t)(EBP));
  /* 12a07901 mov ebp, esp */
  EBP = (ESP);
  /* 12a07903 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07906 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07909 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0790c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a0790f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07912 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a07915 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a07918 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_12a0791f:;
  /* 12a0791f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07923 jl 0x12a07938 */
  if ((C.sf!=C.of)) goto L_12a07938;
  /* 12a07925 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07928 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12a0792a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0792d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07930 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07933 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12a07936 jmp 0x12a0791f */
  goto L_12a0791f;
L_12a07938:;
  /* 12a07938 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0793b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a07941 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07944 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12a0794b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a0794e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a07955 jmp 0x12a07960 */
  goto L_12a07960;
L_12a07957:;
  /* 12a07957 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0795a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0795d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12a07960:;
  /* 12a07960 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07964 jge 0x12a07986 */
  if ((C.sf==C.of)) goto L_12a07986;
  /* 12a07966 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07969 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0796c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 12a0796f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a07972 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07975 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07978 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12a0797b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0797e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07981 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12a07984 jmp 0x12a07957 */
  goto L_12a07957;
L_12a07986:;
  /* 12a07986 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07989 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12a0798c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0798f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a07992 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07994 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a07997 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a07999 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12a0799e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a079a3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a079a6 push edx */
  push32((uint32_t)(EDX));
  /* 12a079a7 call dword ptr [0x12a302fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302fc))), 0x12a079adu);
  /* 12a079ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a079af jne 0x12a079b9 */
  if (!C.zf) goto L_12a079b9;
  /* 12a079b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a079b4 jmp 0x12a07aea */
  goto L_12a07aea;
L_12a079b9:;
  /* 12a079b9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a079bc add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a079c1 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a079c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a079c7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a079ca jmp 0x12a079d8 */
  goto L_12a079d8;
L_12a079cc:;
  /* 12a079cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a079cf add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a079d5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a079d8:;
  /* 12a079d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a079db cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a079de ja 0x12a07a3d */
  if ((!C.cf&&!C.zf)) goto L_12a07a3d;
  /* 12a079e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a079e3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 12a079ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a079ed mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12a079f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a079fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a079fd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a07a00 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a03 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12a07a09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a0c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07a12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a15 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a07a18 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a1b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07a21 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a24 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a07a27 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a2a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07a2f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a07a32 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a07a35 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12a07a3b jmp 0x12a079cc */
  goto L_12a079cc;
L_12a07a3d:;
  /* 12a07a3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a07a40 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07a46 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a07a49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07a4c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07a4f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a52 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12a07a55 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a58 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a07a5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a07a5e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a64 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12a07a67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07a6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07a6d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a70 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12a07a73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a76 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a07a79 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a07a7c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07a7f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07a82 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12a07a85 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07a88 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07a8b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12a07a93 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07a96 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07a99 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12a07aa4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07aa7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12a07aab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07aae mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12a07ab1 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a07ab4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07ab7 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12a07aba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07abc jne 0x12a07acd */
  if (!C.zf) goto L_12a07acd;
  /* 12a07abe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07ac1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07ac4 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a07ac7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07aca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a07acd:;
  /* 12a07acd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07ad2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07ad5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07ad7 not edx */
  EDX = (~(EDX));
  /* 12a07ad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07adc mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a07adf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07ae1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07ae4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a07ae7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12a07aea:;
  /* 12a07aea mov esp, ebp */
  ESP = (EBP);
  /* 12a07aec pop ebp */
  EBP = (pop32());
  /* 12a07aed ret  */
  ESPCHK(0x12a07900u, _esp0);
  ESP += 4; return;
}

/* FUN_10007af0 @ 0x12a07af0 (1515 bytes, 489 insns) */
void f_12a07af0(void) {
  FTRACE(0x12a07af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a07af0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a07af1 mov ebp, esp */
  EBP = (ESP);
  /* 12a07af3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07af6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a07af9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07afc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12a07afe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a07b01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07b04 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12a07b07 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12a07b0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07b0d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a07b10 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07b13 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a07b16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a07b19 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12a07b1c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a07b1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07b22 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a07b28 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07b2b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12a07b32 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a07b35 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a07b38 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07b3b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a07b3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07b41 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a07b43 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07b46 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12a07b49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07b4c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07b4f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12a07b52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07b55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a07b57 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a07b5a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07b5d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07b60 jle 0x12a07e16 */
  if ((C.zf||C.sf!=C.of)) goto L_12a07e16;
  /* 12a07b66 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07b69 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a07b6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a07b6e jne 0x12a07b7b */
  if (!C.zf) goto L_12a07b7b;
  /* 12a07b70 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07b73 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07b76 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07b79 jle 0x12a07b82 */
  if ((C.zf||C.sf!=C.of)) goto L_12a07b82;
L_12a07b7b:;
  /* 12a07b7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07b7d jmp 0x12a080d7 */
  goto L_12a080d7;
L_12a07b82:;
  /* 12a07b82 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07b85 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12a07b88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07b8b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a07b8e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07b92 jbe 0x12a07b9b */
  if ((C.cf||C.zf)) goto L_12a07b9b;
  /* 12a07b94 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12a07b9b:;
  /* 12a07b9b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07b9e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07ba1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07ba4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07ba7 jne 0x12a07c7d */
  if (!C.zf) goto L_12a07c7d;
  /* 12a07bad cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07bb1 jae 0x12a07c12 */
  if (!C.cf) goto L_12a07c12;
  /* 12a07bb3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07bb8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07bbb shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07bbd not edx */
  EDX = (~(EDX));
  /* 12a07bbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07bc2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07bc5 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12a07bc9 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07bcb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07bce mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07bd1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12a07bd5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07bd8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07bdb mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a07bde sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a07be1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07be4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07be7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12a07bea mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07bed add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07bf0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a07bf4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a07bf6 jne 0x12a07c10 */
  if (!C.zf) goto L_12a07c10;
  /* 12a07bf8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07bfd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07c00 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07c02 not edx */
  EDX = (~(EDX));
  /* 12a07c04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07c07 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a07c09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07c0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a07c10:;
  /* 12a07c10 jmp 0x12a07c7d */
  goto L_12a07c7d;
L_12a07c12:;
  /* 12a07c12 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07c15 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07c18 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07c1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07c1f not eax */
  EAX = (~(EAX));
  /* 12a07c21 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07c24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07c27 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12a07c2e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07c30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07c33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07c36 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12a07c3d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07c40 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07c43 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12a07c46 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a07c49 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07c4c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07c4f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12a07c52 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07c55 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07c58 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a07c5c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07c5e jne 0x12a07c7d */
  if (!C.zf) goto L_12a07c7d;
  /* 12a07c60 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07c63 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07c66 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07c6b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07c6d not eax */
  EAX = (~(EAX));
  /* 12a07c6f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07c72 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07c75 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a07c77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07c7a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a07c7d:;
  /* 12a07c7d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07c80 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a07c83 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07c86 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07c89 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a07c8c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07c8f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a07c92 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07c95 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a07c98 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12a07c9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07c9e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07ca1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07ca4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a07ca7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07cab jle 0x12a07df7 */
  if ((C.zf||C.sf!=C.of)) goto L_12a07df7;
  /* 12a07cb1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07cb4 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07cb7 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a07cba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07cbd sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a07cc0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07cc3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a07cc6 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07cca jbe 0x12a07cd3 */
  if ((C.cf||C.zf)) goto L_12a07cd3;
  /* 12a07ccc mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12a07cd3:;
  /* 12a07cd3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07cd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07cd9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12a07cdc mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a07cdf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07ce2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07ce5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07ce8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a07ceb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07cee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07cf1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12a07cf4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07cf7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07cfa mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12a07cfd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07d00 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07d03 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07d06 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a07d09 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07d0c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07d0f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07d12 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07d15 jne 0x12a07de3 */
  if (!C.zf) goto L_12a07de3;
  /* 12a07d1b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07d1f jae 0x12a07d7c */
  if (!C.cf) goto L_12a07d7c;
  /* 12a07d21 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d24 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d27 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a07d2b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d2e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d31 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a07d34 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a07d37 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d3a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d3d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12a07d40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07d42 jne 0x12a07d5a */
  if (!C.zf) goto L_12a07d5a;
  /* 12a07d44 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07d49 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07d4c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07d4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07d51 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a07d53 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07d58 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a07d5a:;
  /* 12a07d5a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07d5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07d62 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07d64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07d67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d6a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12a07d6e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07d70 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07d73 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d76 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12a07d7a jmp 0x12a07de3 */
  goto L_12a07de3;
L_12a07d7c:;
  /* 12a07d7c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d7f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d82 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a07d86 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d89 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d8c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a07d8f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a07d92 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07d95 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07d98 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12a07d9b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07d9d jne 0x12a07dba */
  if (!C.zf) goto L_12a07dba;
  /* 12a07d9f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07da2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07da5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07daa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07dac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07daf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07db2 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07db4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07db7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12a07dba:;
  /* 12a07dba mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07dbd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07dc0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07dc5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07dca mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07dcd mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12a07dd4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07dd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07dd9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07ddc mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12a07de3:;
  /* 12a07de3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07de6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07de9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a07deb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07dee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07df1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07df4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12a07df7:;
  /* 12a07df7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07dfa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07dfd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07e00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a07e02 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07e05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e08 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07e0b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e0e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12a07e11 jmp 0x12a080d2 */
  goto L_12a080d2;
L_12a07e16:;
  /* 12a07e16 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07e19 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07e1c jge 0x12a080d2 */
  if ((C.sf==C.of)) goto L_12a080d2;
  /* 12a07e22 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07e25 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e28 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07e2b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a07e2d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a07e30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e33 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07e36 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e39 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12a07e3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07e3f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07e42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12a07e45 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07e48 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07e4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a07e4e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07e51 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12a07e54 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07e57 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a07e5a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07e5e jbe 0x12a07e67 */
  if ((C.cf||C.zf)) goto L_12a07e67;
  /* 12a07e60 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12a07e67:;
  /* 12a07e67 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07e6a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a07e6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07e6f jne 0x12a07fb0 */
  if (!C.zf) goto L_12a07fb0;
  /* 12a07e75 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a07e78 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12a07e7b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07e7e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a07e81 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07e85 jbe 0x12a07e8e */
  if ((C.cf||C.zf)) goto L_12a07e8e;
  /* 12a07e87 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12a07e8e:;
  /* 12a07e8e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07e91 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07e94 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07e97 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07e9a jne 0x12a07f70 */
  if (!C.zf) goto L_12a07f70;
  /* 12a07ea0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07ea4 jae 0x12a07f05 */
  if (!C.cf) goto L_12a07f05;
  /* 12a07ea6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07eab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07eae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07eb0 not edx */
  EDX = (~(EDX));
  /* 12a07eb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07eb5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07eb8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12a07ebc and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a07ebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07ec1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07ec4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12a07ec8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07ecb add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07ece mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12a07ed1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a07ed4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07ed7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07eda mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12a07edd mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07ee0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07ee3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a07ee7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a07ee9 jne 0x12a07f03 */
  if (!C.zf) goto L_12a07f03;
  /* 12a07eeb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a07ef0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07ef3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a07ef5 not edx */
  EDX = (~(EDX));
  /* 12a07ef7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07efa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a07efc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07efe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07f01 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12a07f03:;
  /* 12a07f03 jmp 0x12a07f70 */
  goto L_12a07f70;
L_12a07f05:;
  /* 12a07f05 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07f08 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07f0b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07f10 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07f12 not eax */
  EAX = (~(EAX));
  /* 12a07f14 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07f17 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07f1a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12a07f21 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a07f23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a07f26 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07f29 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12a07f30 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07f33 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07f36 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12a07f39 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a07f3c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07f3f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07f42 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12a07f45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a07f48 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07f4b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a07f4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a07f51 jne 0x12a07f70 */
  if (!C.zf) goto L_12a07f70;
  /* 12a07f53 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a07f56 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07f59 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a07f5e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a07f60 not eax */
  EAX = (~(EAX));
  /* 12a07f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07f65 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a07f68 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a07f6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a07f6d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a07f70:;
  /* 12a07f70 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07f73 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a07f76 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07f79 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07f7c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a07f7f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07f82 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a07f85 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a07f88 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a07f8b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12a07f8e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07f91 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a07f94 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a07f97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a07f9a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12a07f9d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a07fa0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a07fa3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07fa7 jbe 0x12a07fb0 */
  if ((C.cf||C.zf)) goto L_12a07fb0;
  /* 12a07fa9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12a07fb0:;
  /* 12a07fb0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a07fb3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a07fb6 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12a07fb9 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a07fbc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fbf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07fc2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07fc5 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a07fc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fcb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07fce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a07fd1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a07fd4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fd7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12a07fda mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fdd mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07fe0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fe3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12a07fe6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fe9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a07fec mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a07fef cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07ff2 jne 0x12a080be */
  if (!C.zf) goto L_12a080be;
  /* 12a07ff8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a07ffc jae 0x12a08058 */
  if (!C.cf) goto L_12a08058;
  /* 12a07ffe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08001 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08004 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a08008 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0800b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0800e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12a08011 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a08013 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08016 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08019 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12a0801c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0801e jne 0x12a08036 */
  if (!C.zf) goto L_12a08036;
  /* 12a08020 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a08025 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08028 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a0802a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0802d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0802f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08031 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08034 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a08036:;
  /* 12a08036 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a0803b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0803e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a08040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08043 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08046 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12a0804a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0804c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0804f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08052 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12a08056 jmp 0x12a080be */
  goto L_12a080be;
L_12a08058:;
  /* 12a08058 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0805b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0805e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12a08062 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08065 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08068 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12a0806b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0806d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a08070 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08073 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12a08076 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a08078 jne 0x12a08095 */
  if (!C.zf) goto L_12a08095;
  /* 12a0807a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0807d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08080 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12a08085 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12a08087 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0808a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0808d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0808f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08092 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12a08095:;
  /* 12a08095 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08098 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0809b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a080a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a080a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a080a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a080a8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12a080af or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a080b1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a080b4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a080b7 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_12a080be:;
  /* 12a080be mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a080c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a080c4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a080c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a080c9 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a080cc mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a080cf mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12a080d2:;
  /* 12a080d2 mov eax, 1 */
  EAX = (0x1u);
L_12a080d7:;
  /* 12a080d7 mov esp, ebp */
  ESP = (EBP);
  /* 12a080d9 pop ebp */
  EBP = (pop32());
  /* 12a080da ret  */
  ESPCHK(0x12a07af0u, _esp0);
  ESP += 4; return;
}

/* FUN_100080e0 @ 0x12a080e0 (304 bytes, 79 insns) */
void f_12a080e0(void) {
  FTRACE(0x12a080e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a080e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a080e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a080e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a080e4 cmp dword ptr [0x12a2fe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a080eb je 0x12a0820c */
  if (C.zf) goto L_12a0820c;
  /* 12a080f1 mov eax, dword ptr [0x12a2fe18] */
  EAX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a080f6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12a080f9 mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a080ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a08102 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08104 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a08107 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12a0810c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a08111 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08114 push eax */
  push32((uint32_t)(EAX));
  /* 12a08115 call dword ptr [0x12a302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d8))), 0x12a0811bu);
  /* 12a0811b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a08120 mov ecx, dword ptr [0x12a2fe18] */
  ECX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a08126 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a08128 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a0812d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a08130 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12a08132 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08138 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a0813b mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08140 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a08143 mov edx, dword ptr [0x12a2fe18] */
  EDX = (r32((uint32_t)(0x12a2fe18)));
  /* 12a08149 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12a08154 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08159 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0815c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12a0815f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12a08162 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08167 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0816a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12a0816d mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08173 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a08176 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 12a0817a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0817c jne 0x12a08192 */
  if (!C.zf) goto L_12a08192;
  /* 12a0817e mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08184 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a08187 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12a08189 mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a0818f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12a08192:;
  /* 12a08192 mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a08198 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0819c jne 0x12a08202 */
  if (!C.zf) goto L_12a08202;
  /* 12a0819e cmp dword ptr [0x12a2fe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a081a5 jle 0x12a08202 */
  if ((C.zf||C.sf!=C.of)) goto L_12a08202;
  /* 12a081a7 mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a081ac mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a081af push ecx */
  push32((uint32_t)(ECX));
  /* 12a081b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a081b2 mov edx, dword ptr [0x12a2fe2c] */
  EDX = (r32((uint32_t)(0x12a2fe2c)));
  /* 12a081b8 push edx */
  push32((uint32_t)(EDX));
  /* 12a081b9 call dword ptr [0x12a302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302d4))), 0x12a081bfu);
  /* 12a081bf mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a081c4 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a081c7 mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a081cd add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a081cf mov edx, dword ptr [0x12a2fe20] */
  EDX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a081d5 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a081d8 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a081da push ecx */
  push32((uint32_t)(ECX));
  /* 12a081db mov eax, dword ptr [0x12a2fe20] */
  EAX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a081e0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a081e3 push eax */
  push32((uint32_t)(EAX));
  /* 12a081e4 mov ecx, dword ptr [0x12a2fe20] */
  ECX = (r32((uint32_t)(0x12a2fe20)));
  /* 12a081ea push ecx */
  push32((uint32_t)(ECX));
  /* 12a081eb call 0x12a0a810 */
  push32(0x12a081f0u); f_12a0a810();
  /* 12a081f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a081f3 mov edx, dword ptr [0x12a2fe24] */
  EDX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a081f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a081fc mov dword ptr [0x12a2fe24], edx */
  w32((uint32_t)(0x12a2fe24), (EDX));
L_12a08202:;
  /* 12a08202 mov dword ptr [0x12a2fe20], 0 */
  w32((uint32_t)(0x12a2fe20), (0x0u));
L_12a0820c:;
  /* 12a0820c mov esp, ebp */
  ESP = (EBP);
  /* 12a0820e pop ebp */
  EBP = (pop32());
  /* 12a0820f ret  */
  ESPCHK(0x12a080e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008210 @ 0x12a08210 (1565 bytes, 343 insns) */
void f_12a08210(void) {
  FTRACE(0x12a08210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08210 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08211 mov ebp, esp */
  EBP = (ESP);
  /* 12a08213 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08219 mov eax, dword ptr [0x12a2fe24] */
  EAX = (r32((uint32_t)(0x12a2fe24)));
  /* 12a0821e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a08221 push eax */
  push32((uint32_t)(EAX));
  /* 12a08222 mov ecx, dword ptr [0x12a2fe28] */
  ECX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a08228 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08229 call dword ptr [0x12a302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302ac))), 0x12a0822fu);
  /* 12a0822f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08231 je 0x12a0823b */
  if (C.zf) goto L_12a0823b;
  /* 12a08233 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a08236 jmp 0x12a08829 */
  goto L_12a08829;
L_12a0823b:;
  /* 12a0823b mov edx, dword ptr [0x12a2fe28] */
  EDX = (r32((uint32_t)(0x12a2fe28)));
  /* 12a08241 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 12a08247 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 12a08251 jmp 0x12a08262 */
  goto L_12a08262;
L_12a08253:;
  /* 12a08253 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 12a08259 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0825c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_12a08262:;
  /* 12a08262 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 12a08268 cmp ecx, dword ptr [0x12a2fe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0826e jge 0x12a08827 */
  if ((C.sf==C.of)) goto L_12a08827;
  /* 12a08274 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a0827a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0827d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12a08283 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12a08288 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12a0828e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0828f call dword ptr [0x12a302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302ac))), 0x12a08295u);
  /* 12a08295 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08297 je 0x12a082a3 */
  if (C.zf) goto L_12a082a3;
  /* 12a08299 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 12a0829e jmp 0x12a08829 */
  goto L_12a08829;
L_12a082a3:;
  /* 12a082a3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a082a9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a082ac mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12a082b2 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12a082b8 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a082be mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a082c1 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a082c7 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a082ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a082cd mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12a082d7 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12a082e1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a082e8 jmp 0x12a082f3 */
  goto L_12a082f3;
L_12a082ea:;
  /* 12a082ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a082ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a082f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12a082f3:;
  /* 12a082f3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a082f7 jge 0x12a087eb */
  if ((C.sf==C.of)) goto L_12a087eb;
  /* 12a082fd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12a08307 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 12a08311 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 12a0831b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 12a08325 jmp 0x12a08336 */
  goto L_12a08336;
L_12a08327:;
  /* 12a08327 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12a0832d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08330 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_12a08336:;
  /* 12a08336 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0833d jge 0x12a08352 */
  if ((C.sf==C.of)) goto L_12a08352;
  /* 12a0833f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12a08345 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 12a08350 jmp 0x12a08327 */
  goto L_12a08327;
L_12a08352:;
  /* 12a08352 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08356 jl 0x12a0878d */
  if ((C.sf!=C.of)) goto L_12a0878d;
  /* 12a0835c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12a08361 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 12a08367 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08368 call dword ptr [0x12a302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302ac))), 0x12a0836eu);
  /* 12a0836e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08370 je 0x12a0837c */
  if (C.zf) goto L_12a0837c;
  /* 12a08372 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12a08377 jmp 0x12a08829 */
  goto L_12a08829;
L_12a0837c:;
  /* 12a0837c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12a08382 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a08385 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 12a0838f jmp 0x12a083a0 */
  goto L_12a083a0;
L_12a08391:;
  /* 12a08391 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12a08397 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0839a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12a083a0:;
  /* 12a083a0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a083a7 jge 0x12a08524 */
  if ((C.sf==C.of)) goto L_12a08524;
  /* 12a083ad mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a083b0 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a083b3 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12a083b9 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a083bf add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a083c5 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 12a083cb mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a083d1 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a083d5 jne 0x12a083e2 */
  if (!C.zf) goto L_12a083e2;
  /* 12a083d7 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 12a083dd cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a083e0 je 0x12a083ec */
  if (C.zf) goto L_12a083ec;
L_12a083e2:;
  /* 12a083e2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12a083e7 jmp 0x12a08829 */
  goto L_12a08829;
L_12a083ec:;
  /* 12a083ec mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a083f2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a083f4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12a083fa mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12a08400 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12a08406 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 12a0840c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0840f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a08411 je 0x12a08449 */
  if (C.zf) goto L_12a08449;
  /* 12a08413 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12a08419 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0841c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 12a08422 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0842c jle 0x12a08438 */
  if ((C.zf||C.sf!=C.of)) goto L_12a08438;
  /* 12a0842e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 12a08433 jmp 0x12a08829 */
  goto L_12a08829;
L_12a08438:;
  /* 12a08438 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 12a0843e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08441 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 12a08447 jmp 0x12a0848b */
  goto L_12a0848b;
L_12a08449:;
  /* 12a08449 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 12a0844f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a08452 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08455 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12a0845b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08462 jle 0x12a0846e */
  if ((C.zf||C.sf!=C.of)) goto L_12a0846e;
  /* 12a08464 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12a0846e:;
  /* 12a0846e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12a08474 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 12a0847b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0847e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12a08484 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_12a0848b:;
  /* 12a0848b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08492 jl 0x12a084ad */
  if ((C.sf!=C.of)) goto L_12a084ad;
  /* 12a08494 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 12a0849a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0849d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0849f jne 0x12a084ad */
  if (!C.zf) goto L_12a084ad;
  /* 12a084a1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a084ab jle 0x12a084b7 */
  if ((C.zf||C.sf!=C.of)) goto L_12a084b7;
L_12a084ad:;
  /* 12a084ad mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12a084b2 jmp 0x12a08829 */
  goto L_12a08829;
L_12a084b7:;
  /* 12a084b7 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a084bd add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a084c3 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a084c6 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a084cc je 0x12a084d8 */
  if (C.zf) goto L_12a084d8;
  /* 12a084ce mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12a084d3 jmp 0x12a08829 */
  goto L_12a08829;
L_12a084d8:;
  /* 12a084d8 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a084de add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a084e4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12a084ea mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a084f0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a084f6 jb 0x12a083ec */
  if (C.cf) goto L_12a083ec;
  /* 12a084fc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a08502 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08508 je 0x12a08514 */
  if (C.zf) goto L_12a08514;
  /* 12a0850a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12a0850f jmp 0x12a08829 */
  goto L_12a08829;
L_12a08514:;
  /* 12a08514 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08517 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0851c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0851f jmp 0x12a08391 */
  goto L_12a08391;
L_12a08524:;
  /* 12a08524 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a08527 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a08529 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0852f je 0x12a0853b */
  if (C.zf) goto L_12a0853b;
  /* 12a08531 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 12a08536 jmp 0x12a08829 */
  goto L_12a08829;
L_12a0853b:;
  /* 12a0853b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0853e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 12a08544 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 12a0854b jmp 0x12a08556 */
  goto L_12a08556;
L_12a0854d:;
  /* 12a0854d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a08550 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08553 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12a08556:;
  /* 12a08556 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0855a jge 0x12a0878d */
  if ((C.sf==C.of)) goto L_12a0878d;
  /* 12a08560 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 12a0856a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12a08570 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12a08576:;
  /* 12a08576 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a0857c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a0857f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12a08585 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a0858b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08591 je 0x12a086ba */
  if (C.zf) goto L_12a086ba;
  /* 12a08597 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0859a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12a085a0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a085a7 je 0x12a086ba */
  if (C.zf) goto L_12a086ba;
  /* 12a085ad mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a085b3 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a085b9 jb 0x12a085ce */
  if (C.cf) goto L_12a085ce;
  /* 12a085bb mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12a085c1 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a085c6 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a085cc jb 0x12a085d8 */
  if (C.cf) goto L_12a085d8;
L_12a085ce:;
  /* 12a085ce mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12a085d3 jmp 0x12a08829 */
  goto L_12a08829;
L_12a085d8:;
  /* 12a085d8 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a085de and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12a085e4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 12a085ea mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12a085f0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a085f3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a085f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a085f9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a085fe mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12a08604:;
  /* 12a08604 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a08607 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0860d je 0x12a0862e */
  if (C.zf) goto L_12a0862e;
  /* 12a0860f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a08612 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08618 jne 0x12a0861c */
  if (!C.zf) goto L_12a0861c;
  /* 12a0861a jmp 0x12a0862e */
  goto L_12a0862e;
L_12a0861c:;
  /* 12a0861c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0861f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a08621 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 12a08624 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a08627 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08629 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a0862c jmp 0x12a08604 */
  goto L_12a08604;
L_12a0862e:;
  /* 12a0862e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a08631 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08637 jne 0x12a08643 */
  if (!C.zf) goto L_12a08643;
  /* 12a08639 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 12a0863e jmp 0x12a08829 */
  goto L_12a08829;
L_12a08643:;
  /* 12a08643 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a08649 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0864b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a0864e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08651 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 12a08657 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0865e jle 0x12a0866a */
  if ((C.zf||C.sf!=C.of)) goto L_12a0866a;
  /* 12a08660 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_12a0866a:;
  /* 12a0866a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12a08670 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08673 je 0x12a0867f */
  if (C.zf) goto L_12a0867f;
  /* 12a08675 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 12a0867a jmp 0x12a08829 */
  goto L_12a08829;
L_12a0867f:;
  /* 12a0867f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a08685 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a08688 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0868e je 0x12a0869a */
  if (C.zf) goto L_12a0869a;
  /* 12a08690 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12a08695 jmp 0x12a08829 */
  goto L_12a08829;
L_12a0869a:;
  /* 12a0869a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12a086a0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12a086a6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12a086ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a086af mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12a086b5 jmp 0x12a08576 */
  goto L_12a08576;
L_12a086ba:;
  /* 12a086ba cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a086c1 je 0x12a08731 */
  if (C.zf) goto L_12a08731;
  /* 12a086c3 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a086c7 jge 0x12a086fb */
  if ((C.sf==C.of)) goto L_12a086fb;
  /* 12a086c9 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a086ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a086d1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a086d3 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12a086d9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a086db mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12a086e1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a086e6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a086e9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a086eb mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12a086f1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a086f3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12a086f9 jmp 0x12a08731 */
  goto L_12a08731;
L_12a086fb:;
  /* 12a086fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a086fe sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08701 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a08706 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a08708 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 12a0870e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08710 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 12a08716 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a08719 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0871c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12a08721 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12a08723 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 12a08729 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0872b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_12a08731:;
  /* 12a08731 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12a08737 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0873a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08740 jne 0x12a08754 */
  if (!C.zf) goto L_12a08754;
  /* 12a08742 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a08745 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12a0874b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08752 je 0x12a0875e */
  if (C.zf) goto L_12a0875e;
L_12a08754:;
  /* 12a08754 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 12a08759 jmp 0x12a08829 */
  goto L_12a08829;
L_12a0875e:;
  /* 12a0875e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12a08764 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a08767 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0876d je 0x12a08779 */
  if (C.zf) goto L_12a08779;
  /* 12a0876f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12a08774 jmp 0x12a08829 */
  goto L_12a08829;
L_12a08779:;
  /* 12a08779 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 12a0877f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08782 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12a08788 jmp 0x12a0854d */
  goto L_12a0854d;
L_12a0878d:;
  /* 12a0878d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08790 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12a08796 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12a0879c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a087a0 jne 0x12a087ba */
  if (!C.zf) goto L_12a087ba;
  /* 12a087a2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a087a5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12a087ab mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12a087b1 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a087b8 je 0x12a087c1 */
  if (C.zf) goto L_12a087c1;
L_12a087ba:;
  /* 12a087ba mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 12a087bf jmp 0x12a08829 */
  goto L_12a08829;
L_12a087c1:;
  /* 12a087c1 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12a087c7 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a087cd mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12a087d3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a087d6 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a087db mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a087de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a087e1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12a087e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a087e6 jmp 0x12a082ea */
  goto L_12a082ea;
L_12a087eb:;
  /* 12a087eb mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a087f1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12a087f7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a087f9 jne 0x12a0880c */
  if (!C.zf) goto L_12a0880c;
  /* 12a087fb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a08801 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12a08807 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0880a je 0x12a08813 */
  if (C.zf) goto L_12a08813;
L_12a0880c:;
  /* 12a0880c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 12a08811 jmp 0x12a08829 */
  goto L_12a08829;
L_12a08813:;
  /* 12a08813 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12a08819 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0881c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 12a08822 jmp 0x12a08253 */
  goto L_12a08253;
L_12a08827:;
  /* 12a08827 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a08829:;
  /* 12a08829 mov esp, ebp */
  ESP = (EBP);
  /* 12a0882b pop ebp */
  EBP = (pop32());
  /* 12a0882c ret  */
  ESPCHK(0x12a08210u, _esp0);
  ESP += 4; return;
}

/* FUN_10008830 @ 0x12a08830 (250 bytes, 92 insns) */
void f_12a08830(void) {
  FTRACE(0x12a08830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08830 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08831 mov ebp, esp */
  EBP = (ESP);
  /* 12a08833 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08836 push ebx */
  push32((uint32_t)(EBX));
  /* 12a08837 push esi */
  push32((uint32_t)(ESI));
  /* 12a08838 push edi */
  push32((uint32_t)(EDI));
  /* 12a08839 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 12a0883c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a0883f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12a08842 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_12a08845:;
  /* 12a08845 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08849 jne 0x12a08869 */
  if (!C.zf) goto L_12a08869;
  /* 12a0884b push 0x12a29dc0 */
  push32((uint32_t)(0x12a29dc0u));
  /* 12a08850 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a08852 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 12a08854 push 0x12a29db4 */
  push32((uint32_t)(0x12a29db4u));
  /* 12a08859 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0885b call 0x12a019e0 */
  push32(0x12a08860u); f_12a019e0();
  /* 12a08860 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08863 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08866 jne 0x12a08869 */
  if (!C.zf) goto L_12a08869;
  /* 12a08868 int3  */
  x86_unimpl("int3 @ 0x12a08868");
L_12a08869:;
  /* 12a08869 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0886b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0886d jne 0x12a08845 */
  if (!C.zf) goto L_12a08845;
L_12a0886f:;
  /* 12a0886f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08873 jne 0x12a08893 */
  if (!C.zf) goto L_12a08893;
  /* 12a08875 push 0x12a29da4 */
  push32((uint32_t)(0x12a29da4u));
  /* 12a0887a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0887c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12a0887e push 0x12a29db4 */
  push32((uint32_t)(0x12a29db4u));
  /* 12a08883 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a08885 call 0x12a019e0 */
  push32(0x12a0888au); f_12a019e0();
  /* 12a0888a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0888d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08890 jne 0x12a08893 */
  if (!C.zf) goto L_12a08893;
  /* 12a08892 int3  */
  x86_unimpl("int3 @ 0x12a08892");
L_12a08893:;
  /* 12a08893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08895 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08897 jne 0x12a0886f */
  if (!C.zf) goto L_12a0886f;
  /* 12a08899 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0889c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12a088a3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a088a9 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a088ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a088b2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a088b4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088b7 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 12a088be mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a088c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a088c2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a088c5 push edx */
  push32((uint32_t)(EDX));
  /* 12a088c6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088c9 push eax */
  push32((uint32_t)(EAX));
  /* 12a088ca call 0x12a098b0 */
  push32(0x12a088cfu); f_12a098b0();
  /* 12a088cf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a088d2 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a088d5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088d8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a088db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a088de mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a088e4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088e7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a088eb jl 0x12a0890f */
  if ((C.sf!=C.of)) goto L_12a0890f;
  /* 12a088ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a088f0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a088f2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a088f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a088f7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a088fd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12a08900 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08903 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a08905 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08908 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0890b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a0890d jmp 0x12a08920 */
  goto L_12a08920;
L_12a0890f:;
  /* 12a0890f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08912 push edx */
  push32((uint32_t)(EDX));
  /* 12a08913 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a08915 call 0x12a09630 */
  push32(0x12a0891au); f_12a09630();
  /* 12a0891a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0891d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_12a08920:;
  /* 12a08920 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08923 pop edi */
  EDI = (pop32());
  /* 12a08924 pop esi */
  ESI = (pop32());
  /* 12a08925 pop ebx */
  EBX = (pop32());
  /* 12a08926 mov esp, ebp */
  ESP = (EBP);
  /* 12a08928 pop ebp */
  EBP = (pop32());
  /* 12a08929 ret  */
  ESPCHK(0x12a08830u, _esp0);
  ESP += 4; return;
}

/* FUN_10008930 @ 0x12a08930 (183 bytes, 58 insns) */
void f_12a08930(void) {
  FTRACE(0x12a08930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08930 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08931 mov ebp, esp */
  EBP = (ESP);
  /* 12a08933 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08936 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08939 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0893c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08941 ja 0x12a0895a */
  if ((!C.cf&&!C.zf)) goto L_12a0895a;
  /* 12a08943 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08946 mov edx, dword ptr [0x12a2cc98] */
  EDX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a0894c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0894e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12a08952 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 12a08955 jmp 0x12a089e3 */
  goto L_12a089e3;
L_12a0895a:;
  /* 12a0895a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0895d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12a08960 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a08966 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0896c mov edx, dword ptr [0x12a2cc98] */
  EDX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a08972 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08974 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12a08978 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0897d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0897f je 0x12a089a3 */
  if (C.zf) goto L_12a089a3;
  /* 12a08981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08984 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12a08987 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0898d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12a08990 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a08993 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12a08996 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 12a0899a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12a089a1 jmp 0x12a089b4 */
  goto L_12a089b4;
L_12a089a3:;
  /* 12a089a3 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a089a6 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12a089a9 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 12a089ad mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12a089b4:;
  /* 12a089b4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a089b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a089b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a089ba lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 12a089bd push ecx */
  push32((uint32_t)(ECX));
  /* 12a089be mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a089c1 push edx */
  push32((uint32_t)(EDX));
  /* 12a089c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12a089c5 push eax */
  push32((uint32_t)(EAX));
  /* 12a089c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a089c8 call 0x12a0ab50 */
  push32(0x12a089cdu); f_12a0ab50();
  /* 12a089cd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a089d0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a089d2 jne 0x12a089d8 */
  if (!C.zf) goto L_12a089d8;
  /* 12a089d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a089d6 jmp 0x12a089e3 */
  goto L_12a089e3;
L_12a089d8:;
  /* 12a089d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a089db and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a089e0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12a089e3:;
  /* 12a089e3 mov esp, ebp */
  ESP = (EBP);
  /* 12a089e5 pop ebp */
  EBP = (pop32());
  /* 12a089e6 ret  */
  ESPCHK(0x12a08930u, _esp0);
  ESP += 4; return;
}

/* FUN_100089f0 @ 0x12a089f0 (836 bytes, 238 insns) */
void f_12a089f0(void) {
  FTRACE(0x12a089f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a089f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a089f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a089f3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a089f6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a089f8 call 0x12a06320 */
  push32(0x12a089fdu); f_12a06320();
  /* 12a089fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08a03 push eax */
  push32((uint32_t)(EAX));
  /* 12a08a04 call 0x12a08d40 */
  push32(0x12a08a09u); f_12a08d40();
  /* 12a08a09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a08a0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08a12 cmp ecx, dword ptr [0x12a2fb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08a18 jne 0x12a08a2b */
  if (!C.zf) goto L_12a08a2b;
  /* 12a08a1a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08a1c call 0x12a063c0 */
  push32(0x12a08a21u); f_12a063c0();
  /* 12a08a21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08a26 jmp 0x12a08d30 */
  goto L_12a08d30;
L_12a08a2b:;
  /* 12a08a2b cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08a2f jne 0x12a08a4c */
  if (!C.zf) goto L_12a08a4c;
  /* 12a08a31 call 0x12a08e20 */
  push32(0x12a08a36u); f_12a08e20();
  /* 12a08a36 call 0x12a08ea0 */
  push32(0x12a08a3bu); f_12a08ea0();
  /* 12a08a3b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08a3d call 0x12a063c0 */
  push32(0x12a08a42u); f_12a063c0();
  /* 12a08a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a45 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08a47 jmp 0x12a08d30 */
  goto L_12a08d30;
L_12a08a4c:;
  /* 12a08a4c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a08a53 jmp 0x12a08a5e */
  goto L_12a08a5e;
L_12a08a55:;
  /* 12a08a55 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08a58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a5b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a08a5e:;
  /* 12a08a5e cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08a62 jae 0x12a08baf */
  if (!C.cf) goto L_12a08baf;
  /* 12a08a68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08a6b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a08a6e mov ecx, dword ptr [eax + 0x12a2ceb8] */
  ECX = (r32((uint32_t)(EAX + 0x12a2ceb8)));
  /* 12a08a74 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08a77 jne 0x12a08baa */
  if (!C.zf) goto L_12a08baa;
  /* 12a08a7d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a08a84 jmp 0x12a08a8f */
  goto L_12a08a8f;
L_12a08a86:;
  /* 12a08a86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08a89 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08a8c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12a08a8f:;
  /* 12a08a8f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08a96 jae 0x12a08aa4 */
  if (!C.cf) goto L_12a08aa4;
  /* 12a08a98 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08a9b mov byte ptr [eax + 0x12a2fd00], 0 */
  w8((uint32_t)(EAX + 0x12a2fd00), (0x0u));
  /* 12a08aa2 jmp 0x12a08a86 */
  goto L_12a08a86;
L_12a08aa4:;
  /* 12a08aa4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a08aab jmp 0x12a08ab6 */
  goto L_12a08ab6;
L_12a08aad:;
  /* 12a08aad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08ab0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08ab3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12a08ab6:;
  /* 12a08ab6 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08aba jae 0x12a08b37 */
  if (!C.cf) goto L_12a08b37;
  /* 12a08abc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08abf imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a08ac2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08ac5 lea ecx, [edx + eax*8 + 0x12a2cec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x12a2cec8));
  /* 12a08acc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a08acf jmp 0x12a08ada */
  goto L_12a08ada;
L_12a08ad1:;
  /* 12a08ad1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08ad4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08ad7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a08ada:;
  /* 12a08ada mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08add xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a08adf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a08ae1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a08ae3 je 0x12a08b32 */
  if (C.zf) goto L_12a08b32;
  /* 12a08ae5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08ae8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08aea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a08aed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08aef je 0x12a08b32 */
  if (C.zf) goto L_12a08b32;
  /* 12a08af1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08af4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08af6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a08af8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a08afb jmp 0x12a08b06 */
  goto L_12a08b06;
L_12a08afd:;
  /* 12a08afd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08b00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08b03 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a08b06:;
  /* 12a08b06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a08b09 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08b0b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12a08b0e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08b11 ja 0x12a08b30 */
  if ((!C.cf&&!C.zf)) goto L_12a08b30;
  /* 12a08b13 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08b16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08b19 mov dl, byte ptr [eax + 0x12a2fd01] */
  DL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a08b1f or dl, byte ptr [ecx + 0x12a2ceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x12a2ceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12a08b25 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08b28 mov byte ptr [eax + 0x12a2fd01], dl */
  w8((uint32_t)(EAX + 0x12a2fd01), (DL));
  /* 12a08b2e jmp 0x12a08afd */
  goto L_12a08afd;
L_12a08b30:;
  /* 12a08b30 jmp 0x12a08ad1 */
  goto L_12a08ad1;
L_12a08b32:;
  /* 12a08b32 jmp 0x12a08aad */
  goto L_12a08aad;
L_12a08b37:;
  /* 12a08b37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08b3a mov dword ptr [0x12a2fb64], ecx */
  w32((uint32_t)(0x12a2fb64), (ECX));
  /* 12a08b40 mov dword ptr [0x12a2fbec], 1 */
  w32((uint32_t)(0x12a2fbec), (0x1u));
  /* 12a08b4a mov edx, dword ptr [0x12a2fb64] */
  EDX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08b50 push edx */
  push32((uint32_t)(EDX));
  /* 12a08b51 call 0x12a08da0 */
  push32(0x12a08b56u); f_12a08da0();
  /* 12a08b56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08b59 mov dword ptr [0x12a2fe04], eax */
  w32((uint32_t)(0x12a2fe04), (EAX));
  /* 12a08b5e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a08b65 jmp 0x12a08b70 */
  goto L_12a08b70;
L_12a08b67:;
  /* 12a08b67 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08b6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08b6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a08b70:;
  /* 12a08b70 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08b74 jae 0x12a08b94 */
  if (!C.cf) goto L_12a08b94;
  /* 12a08b76 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08b79 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a08b7c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08b7f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08b82 mov cx, word ptr [ecx + eax*2 + 0x12a2cebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x12a2cebc)));
  /* 12a08b8a mov word ptr [edx*2 + 0x12a2fbe0], cx */
  w16((uint32_t)(EDX*2 + 0x12a2fbe0), (CX));
  /* 12a08b92 jmp 0x12a08b67 */
  goto L_12a08b67;
L_12a08b94:;
  /* 12a08b94 call 0x12a08ea0 */
  push32(0x12a08b99u); f_12a08ea0();
  /* 12a08b99 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08b9b call 0x12a063c0 */
  push32(0x12a08ba0u); f_12a063c0();
  /* 12a08ba0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08ba3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08ba5 jmp 0x12a08d30 */
  goto L_12a08d30;
L_12a08baa:;
  /* 12a08baa jmp 0x12a08a55 */
  goto L_12a08a55;
L_12a08baf:;
  /* 12a08baf lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12a08bb2 push edx */
  push32((uint32_t)(EDX));
  /* 12a08bb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08bb6 push eax */
  push32((uint32_t)(EAX));
  /* 12a08bb7 call dword ptr [0x12a302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c0))), 0x12a08bbdu);
  /* 12a08bbd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08bc0 jne 0x12a08d02 */
  if (!C.zf) goto L_12a08d02;
  /* 12a08bc6 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a08bcd jmp 0x12a08bd8 */
  goto L_12a08bd8;
L_12a08bcf:;
  /* 12a08bcf mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08bd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08bd5 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12a08bd8:;
  /* 12a08bd8 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08bdf jae 0x12a08bed */
  if (!C.cf) goto L_12a08bed;
  /* 12a08be1 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08be4 mov byte ptr [edx + 0x12a2fd00], 0 */
  w8((uint32_t)(EDX + 0x12a2fd00), (0x0u));
  /* 12a08beb jmp 0x12a08bcf */
  goto L_12a08bcf;
L_12a08bed:;
  /* 12a08bed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08bf0 mov dword ptr [0x12a2fb64], eax */
  w32((uint32_t)(0x12a2fb64), (EAX));
  /* 12a08bf5 mov dword ptr [0x12a2fe04], 0 */
  w32((uint32_t)(0x12a2fe04), (0x0u));
  /* 12a08bff cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08c03 jbe 0x12a08cbe */
  if ((C.cf||C.zf)) goto L_12a08cbe;
  /* 12a08c09 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12a08c0c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12a08c0f jmp 0x12a08c1a */
  goto L_12a08c1a;
L_12a08c11:;
  /* 12a08c11 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08c14 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08c17 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12a08c1a:;
  /* 12a08c1a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08c1d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a08c1f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a08c21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a08c23 je 0x12a08c6c */
  if (C.zf) goto L_12a08c6c;
  /* 12a08c25 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08c28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08c2a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a08c2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a08c2f je 0x12a08c6c */
  if (C.zf) goto L_12a08c6c;
  /* 12a08c31 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08c34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08c36 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a08c38 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a08c3b jmp 0x12a08c46 */
  goto L_12a08c46;
L_12a08c3d:;
  /* 12a08c3d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c40 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08c43 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a08c46:;
  /* 12a08c46 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a08c49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08c4b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12a08c4e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08c51 ja 0x12a08c6a */
  if ((!C.cf&&!C.zf)) goto L_12a08c6a;
  /* 12a08c53 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c56 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a08c5c or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12a08c5f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c62 mov byte ptr [edx + 0x12a2fd01], cl */
  w8((uint32_t)(EDX + 0x12a2fd01), (CL));
  /* 12a08c68 jmp 0x12a08c3d */
  goto L_12a08c3d;
L_12a08c6a:;
  /* 12a08c6a jmp 0x12a08c11 */
  goto L_12a08c11;
L_12a08c6c:;
  /* 12a08c6c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12a08c73 jmp 0x12a08c7e */
  goto L_12a08c7e;
L_12a08c75:;
  /* 12a08c75 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c78 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08c7b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a08c7e:;
  /* 12a08c7e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08c85 jae 0x12a08c9e */
  if (!C.cf) goto L_12a08c9e;
  /* 12a08c87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c8a mov dl, byte ptr [ecx + 0x12a2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12a2fd01)));
  /* 12a08c90 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12a08c93 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a08c96 mov byte ptr [eax + 0x12a2fd01], dl */
  w8((uint32_t)(EAX + 0x12a2fd01), (DL));
  /* 12a08c9c jmp 0x12a08c75 */
  goto L_12a08c75;
L_12a08c9e:;
  /* 12a08c9e mov ecx, dword ptr [0x12a2fb64] */
  ECX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08ca4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08ca5 call 0x12a08da0 */
  push32(0x12a08caau); f_12a08da0();
  /* 12a08caa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08cad mov dword ptr [0x12a2fe04], eax */
  w32((uint32_t)(0x12a2fe04), (EAX));
  /* 12a08cb2 mov dword ptr [0x12a2fbec], 1 */
  w32((uint32_t)(0x12a2fbec), (0x1u));
  /* 12a08cbc jmp 0x12a08cc8 */
  goto L_12a08cc8;
L_12a08cbe:;
  /* 12a08cbe mov dword ptr [0x12a2fbec], 0 */
  w32((uint32_t)(0x12a2fbec), (0x0u));
L_12a08cc8:;
  /* 12a08cc8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a08ccf jmp 0x12a08cda */
  goto L_12a08cda;
L_12a08cd1:;
  /* 12a08cd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08cd4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08cd7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a08cda:;
  /* 12a08cda cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08cde jae 0x12a08cef */
  if (!C.cf) goto L_12a08cef;
  /* 12a08ce0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a08ce3 mov word ptr [eax*2 + 0x12a2fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12a2fbe0), (0x0u));
  /* 12a08ced jmp 0x12a08cd1 */
  goto L_12a08cd1;
L_12a08cef:;
  /* 12a08cef call 0x12a08ea0 */
  push32(0x12a08cf4u); f_12a08ea0();
  /* 12a08cf4 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08cf6 call 0x12a063c0 */
  push32(0x12a08cfbu); f_12a063c0();
  /* 12a08cfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08cfe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08d00 jmp 0x12a08d30 */
  goto L_12a08d30;
L_12a08d02:;
  /* 12a08d02 cmp dword ptr [0x12a2e678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08d09 je 0x12a08d23 */
  if (C.zf) goto L_12a08d23;
  /* 12a08d0b call 0x12a08e20 */
  push32(0x12a08d10u); f_12a08e20();
  /* 12a08d10 call 0x12a08ea0 */
  push32(0x12a08d15u); f_12a08ea0();
  /* 12a08d15 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08d17 call 0x12a063c0 */
  push32(0x12a08d1cu); f_12a063c0();
  /* 12a08d1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08d1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a08d21 jmp 0x12a08d30 */
  goto L_12a08d30;
L_12a08d23:;
  /* 12a08d23 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a08d25 call 0x12a063c0 */
  push32(0x12a08d2au); f_12a063c0();
  /* 12a08d2a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08d2d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a08d30:;
  /* 12a08d30 mov esp, ebp */
  ESP = (EBP);
  /* 12a08d32 pop ebp */
  EBP = (pop32());
  /* 12a08d33 ret  */
  ESPCHK(0x12a089f0u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12a08d40 (89 bytes, 21 insns) */
void f_12a08d40(void) {
  FTRACE(0x12a08d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08d40 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08d41 mov ebp, esp */
  EBP = (ESP);
  /* 12a08d43 mov dword ptr [0x12a2e678], 0 */
  w32((uint32_t)(0x12a2e678), (0x0u));
  /* 12a08d4d cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08d51 jne 0x12a08d65 */
  if (!C.zf) goto L_12a08d65;
  /* 12a08d53 mov dword ptr [0x12a2e678], 1 */
  w32((uint32_t)(0x12a2e678), (0x1u));
  /* 12a08d5d call dword ptr [0x12a30308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30308))), 0x12a08d63u);
  /* 12a08d63 jmp 0x12a08d97 */
  goto L_12a08d97;
L_12a08d65:;
  /* 12a08d65 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08d69 jne 0x12a08d7d */
  if (!C.zf) goto L_12a08d7d;
  /* 12a08d6b mov dword ptr [0x12a2e678], 1 */
  w32((uint32_t)(0x12a2e678), (0x1u));
  /* 12a08d75 call dword ptr [0x12a30304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30304))), 0x12a08d7bu);
  /* 12a08d7b jmp 0x12a08d97 */
  goto L_12a08d97;
L_12a08d7d:;
  /* 12a08d7d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08d81 jne 0x12a08d94 */
  if (!C.zf) goto L_12a08d94;
  /* 12a08d83 mov dword ptr [0x12a2e678], 1 */
  w32((uint32_t)(0x12a2e678), (0x1u));
  /* 12a08d8d mov eax, dword ptr [0x12a2e698] */
  EAX = (r32((uint32_t)(0x12a2e698)));
  /* 12a08d92 jmp 0x12a08d97 */
  goto L_12a08d97;
L_12a08d94:;
  /* 12a08d94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12a08d97:;
  /* 12a08d97 pop ebp */
  EBP = (pop32());
  /* 12a08d98 ret  */
  ESPCHK(0x12a08d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10008da0 @ 0x12a08da0 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12a08da0(void) {
  FTRACE(0x12a08da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08da0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08da1 mov ebp, esp */
  EBP = (ESP);
  /* 12a08da3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08da4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a08da7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a08daa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08dad sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08db3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a08db6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08dba ja 0x12a08dea */
  if ((!C.cf&&!C.zf)) goto L_12a08dea;
  /* 12a08dbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08dbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08dc1 mov dl, byte ptr [eax + 0x12a08e04] */
  DL = (r8((uint32_t)(EAX + 0x12a08e04)));
  /* 12a08dc7 jmp dword ptr [edx*4 + 0x12a08df0] */
  switch (EDX) {
    case 0: goto L_12a08dce;
    case 1: goto L_12a08dd5;
    case 2: goto L_12a08ddc;
    case 3: goto L_12a08de3;
    case 4: goto L_12a08dea;
    default: x86_unimpl("switch@0x12a08dc7 out of table"); return;
  }
L_12a08dce:;
  /* 12a08dce mov eax, 0x411 */
  EAX = (0x411u);
  /* 12a08dd3 jmp 0x12a08dec */
  goto L_12a08dec;
L_12a08dd5:;
  /* 12a08dd5 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12a08dda jmp 0x12a08dec */
  goto L_12a08dec;
L_12a08ddc:;
  /* 12a08ddc mov eax, 0x412 */
  EAX = (0x412u);
  /* 12a08de1 jmp 0x12a08dec */
  goto L_12a08dec;
L_12a08de3:;
  /* 12a08de3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12a08de8 jmp 0x12a08dec */
  goto L_12a08dec;
L_12a08dea:;
  /* 12a08dea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a08dec:;
  /* 12a08dec mov esp, ebp */
  ESP = (EBP);
  /* 12a08dee pop ebp */
  EBP = (pop32());
  /* 12a08def ret  */
  ESPCHK(0x12a08da0u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12a08e20 (116 bytes, 29 insns) */
void f_12a08e20(void) {
  FTRACE(0x12a08e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08e20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08e21 mov ebp, esp */
  EBP = (ESP);
  /* 12a08e23 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08e24 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a08e2b jmp 0x12a08e36 */
  goto L_12a08e36;
L_12a08e2d:;
  /* 12a08e2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08e30 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08e33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a08e36:;
  /* 12a08e36 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08e3d jge 0x12a08e4b */
  if ((C.sf==C.of)) goto L_12a08e4b;
  /* 12a08e3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08e42 mov byte ptr [ecx + 0x12a2fd00], 0 */
  w8((uint32_t)(ECX + 0x12a2fd00), (0x0u));
  /* 12a08e49 jmp 0x12a08e2d */
  goto L_12a08e2d;
L_12a08e4b:;
  /* 12a08e4b mov dword ptr [0x12a2fb64], 0 */
  w32((uint32_t)(0x12a2fb64), (0x0u));
  /* 12a08e55 mov dword ptr [0x12a2fbec], 0 */
  w32((uint32_t)(0x12a2fbec), (0x0u));
  /* 12a08e5f mov dword ptr [0x12a2fe04], 0 */
  w32((uint32_t)(0x12a2fe04), (0x0u));
  /* 12a08e69 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a08e70 jmp 0x12a08e7b */
  goto L_12a08e7b;
L_12a08e72:;
  /* 12a08e72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08e75 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08e78 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a08e7b:;
  /* 12a08e7b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08e7f jge 0x12a08e90 */
  if ((C.sf==C.of)) goto L_12a08e90;
  /* 12a08e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08e84 mov word ptr [eax*2 + 0x12a2fbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x12a2fbe0), (0x0u));
  /* 12a08e8e jmp 0x12a08e72 */
  goto L_12a08e72;
L_12a08e90:;
  /* 12a08e90 mov esp, ebp */
  ESP = (EBP);
  /* 12a08e92 pop ebp */
  EBP = (pop32());
  /* 12a08e93 ret  */
  ESPCHK(0x12a08e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ea0 @ 0x12a08ea0 (770 bytes, 175 insns) */
void f_12a08ea0(void) {
  FTRACE(0x12a08ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a08ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a08ea1 mov ebp, esp */
  EBP = (ESP);
  /* 12a08ea3 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a08ea9 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12a08eaf push eax */
  push32((uint32_t)(EAX));
  /* 12a08eb0 mov ecx, dword ptr [0x12a2fb64] */
  ECX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08eb6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08eb7 call dword ptr [0x12a302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c0))), 0x12a08ebdu);
  /* 12a08ebd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08ec0 jne 0x12a090d9 */
  if (!C.zf) goto L_12a090d9;
  /* 12a08ec6 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12a08ed0 jmp 0x12a08ee1 */
  goto L_12a08ee1;
L_12a08ed2:;
  /* 12a08ed2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a08ed8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08edb mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12a08ee1:;
  /* 12a08ee1 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08eeb jae 0x12a08f02 */
  if (!C.cf) goto L_12a08f02;
  /* 12a08eed mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a08ef3 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12a08ef9 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12a08f00 jmp 0x12a08ed2 */
  goto L_12a08ed2;
L_12a08f02:;
  /* 12a08f02 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12a08f09 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12a08f0f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a08f12 jmp 0x12a08f1d */
  goto L_12a08f1d;
L_12a08f14:;
  /* 12a08f14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08f17 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08f1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a08f1d:;
  /* 12a08f1d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08f20 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a08f22 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a08f24 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a08f26 je 0x12a08f68 */
  if (C.zf) goto L_12a08f68;
  /* 12a08f28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08f2b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a08f2d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a08f2f mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12a08f35 jmp 0x12a08f46 */
  goto L_12a08f46;
L_12a08f37:;
  /* 12a08f37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a08f3d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08f40 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12a08f46:;
  /* 12a08f46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a08f49 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a08f4b mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12a08f4e cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a08f54 ja 0x12a08f66 */
  if ((!C.cf&&!C.zf)) goto L_12a08f66;
  /* 12a08f56 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a08f5c mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12a08f64 jmp 0x12a08f37 */
  goto L_12a08f37;
L_12a08f66:;
  /* 12a08f66 jmp 0x12a08f14 */
  goto L_12a08f14;
L_12a08f68:;
  /* 12a08f68 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a08f6a mov eax, dword ptr [0x12a2fe04] */
  EAX = (r32((uint32_t)(0x12a2fe04)));
  /* 12a08f6f push eax */
  push32((uint32_t)(EAX));
  /* 12a08f70 mov ecx, dword ptr [0x12a2fb64] */
  ECX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08f76 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08f77 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12a08f7d push edx */
  push32((uint32_t)(EDX));
  /* 12a08f7e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08f83 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12a08f89 push eax */
  push32((uint32_t)(EAX));
  /* 12a08f8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a08f8c call 0x12a0ab50 */
  push32(0x12a08f91u); f_12a0ab50();
  /* 12a08f91 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08f94 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a08f96 mov ecx, dword ptr [0x12a2fb64] */
  ECX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08f9c push ecx */
  push32((uint32_t)(ECX));
  /* 12a08f9d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08fa2 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12a08fa8 push edx */
  push32((uint32_t)(EDX));
  /* 12a08fa9 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08fae lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12a08fb4 push eax */
  push32((uint32_t)(EAX));
  /* 12a08fb5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08fba mov ecx, dword ptr [0x12a2fe04] */
  ECX = (r32((uint32_t)(0x12a2fe04)));
  /* 12a08fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08fc1 call 0x12a0ad10 */
  push32(0x12a08fc6u); f_12a0ad10();
  /* 12a08fc6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08fc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a08fcb mov edx, dword ptr [0x12a2fb64] */
  EDX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a08fd1 push edx */
  push32((uint32_t)(EDX));
  /* 12a08fd2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08fd7 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12a08fdd push eax */
  push32((uint32_t)(EAX));
  /* 12a08fde push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a08fe3 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12a08fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a08fea push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12a08fef mov edx, dword ptr [0x12a2fe04] */
  EDX = (r32((uint32_t)(0x12a2fe04)));
  /* 12a08ff5 push edx */
  push32((uint32_t)(EDX));
  /* 12a08ff6 call 0x12a0ad10 */
  push32(0x12a08ffbu); f_12a0ad10();
  /* 12a08ffb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a08ffe mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12a09008 jmp 0x12a09019 */
  goto L_12a09019;
L_12a0900a:;
  /* 12a0900a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09010 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09013 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12a09019:;
  /* 12a09019 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09023 jae 0x12a090d4 */
  if (!C.cf) goto L_12a090d4;
  /* 12a09029 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0902f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a09031 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12a09039 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0903c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0903e je 0x12a09076 */
  if (C.zf) goto L_12a09076;
  /* 12a09040 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09046 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a0904c or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12a0904f mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09055 mov byte ptr [edx + 0x12a2fd01], cl */
  w8((uint32_t)(EDX + 0x12a2fd01), (CL));
  /* 12a0905b mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09061 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09067 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12a0906e mov byte ptr [eax + 0x12a2fc00], dl */
  w8((uint32_t)(EAX + 0x12a2fc00), (DL));
  /* 12a09074 jmp 0x12a090cf */
  goto L_12a090cf;
L_12a09076:;
  /* 12a09076 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0907c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0907e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12a09086 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09089 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0908b je 0x12a090c2 */
  if (C.zf) goto L_12a090c2;
  /* 12a0908d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09093 mov al, byte ptr [edx + 0x12a2fd01] */
  AL = (r8((uint32_t)(EDX + 0x12a2fd01)));
  /* 12a09099 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12a0909b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a090a1 mov byte ptr [ecx + 0x12a2fd01], al */
  w8((uint32_t)(ECX + 0x12a2fd01), (AL));
  /* 12a090a7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a090ad mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a090b3 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 12a090ba mov byte ptr [edx + 0x12a2fc00], cl */
  w8((uint32_t)(EDX + 0x12a2fc00), (CL));
  /* 12a090c0 jmp 0x12a090cf */
  goto L_12a090cf;
L_12a090c2:;
  /* 12a090c2 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a090c8 mov byte ptr [edx + 0x12a2fc00], 0 */
  w8((uint32_t)(EDX + 0x12a2fc00), (0x0u));
L_12a090cf:;
  /* 12a090cf jmp 0x12a0900a */
  goto L_12a0900a;
L_12a090d4:;
  /* 12a090d4 jmp 0x12a0919e */
  goto L_12a0919e;
L_12a090d9:;
  /* 12a090d9 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12a090e3 jmp 0x12a090f4 */
  goto L_12a090f4;
L_12a090e5:;
  /* 12a090e5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a090eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a090ee mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12a090f4:;
  /* 12a090f4 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a090fe jae 0x12a0919e */
  if (!C.cf) goto L_12a0919e;
  /* 12a09104 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0910b jb 0x12a09148 */
  if (C.cf) goto L_12a09148;
  /* 12a0910d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09114 ja 0x12a09148 */
  if ((!C.cf&&!C.zf)) goto L_12a09148;
  /* 12a09116 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0911c mov dl, byte ptr [ecx + 0x12a2fd01] */
  DL = (r8((uint32_t)(ECX + 0x12a2fd01)));
  /* 12a09122 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12a09125 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0912b mov byte ptr [eax + 0x12a2fd01], dl */
  w8((uint32_t)(EAX + 0x12a2fd01), (DL));
  /* 12a09131 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09137 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0913a mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09140 mov byte ptr [edx + 0x12a2fc00], cl */
  w8((uint32_t)(EDX + 0x12a2fc00), (CL));
  /* 12a09146 jmp 0x12a09199 */
  goto L_12a09199;
L_12a09148:;
  /* 12a09148 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0914f jb 0x12a0918c */
  if (C.cf) goto L_12a0918c;
  /* 12a09151 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09158 ja 0x12a0918c */
  if ((!C.cf&&!C.zf)) goto L_12a0918c;
  /* 12a0915a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09160 mov cl, byte ptr [eax + 0x12a2fd01] */
  CL = (r8((uint32_t)(EAX + 0x12a2fd01)));
  /* 12a09166 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12a09169 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0916f mov byte ptr [edx + 0x12a2fd01], cl */
  w8((uint32_t)(EDX + 0x12a2fd01), (CL));
  /* 12a09175 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a0917b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0917e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09184 mov byte ptr [ecx + 0x12a2fc00], al */
  w8((uint32_t)(ECX + 0x12a2fc00), (AL));
  /* 12a0918a jmp 0x12a09199 */
  goto L_12a09199;
L_12a0918c:;
  /* 12a0918c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12a09192 mov byte ptr [edx + 0x12a2fc00], 0 */
  w8((uint32_t)(EDX + 0x12a2fc00), (0x0u));
L_12a09199:;
  /* 12a09199 jmp 0x12a090e5 */
  goto L_12a090e5;
L_12a0919e:;
  /* 12a0919e mov esp, ebp */
  ESP = (EBP);
  /* 12a091a0 pop ebp */
  EBP = (pop32());
  /* 12a091a1 ret  */
  ESPCHK(0x12a08ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091b0 @ 0x12a091b0 (23 bytes, 9 insns) */
void f_12a091b0(void) {
  FTRACE(0x12a091b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a091b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a091b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a091b3 cmp dword ptr [0x12a2fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a091ba je 0x12a091c3 */
  if (C.zf) goto L_12a091c3;
  /* 12a091bc mov eax, dword ptr [0x12a2fb64] */
  EAX = (r32((uint32_t)(0x12a2fb64)));
  /* 12a091c1 jmp 0x12a091c5 */
  goto L_12a091c5;
L_12a091c3:;
  /* 12a091c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a091c5:;
  /* 12a091c5 pop ebp */
  EBP = (pop32());
  /* 12a091c6 ret  */
  ESPCHK(0x12a091b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100091d0 @ 0x12a091d0 (34 bytes, 10 insns) */
void f_12a091d0(void) {
  FTRACE(0x12a091d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a091d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a091d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a091d3 cmp dword ptr [0x12a2ffb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2ffb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a091da jne 0x12a091f0 */
  if (!C.zf) goto L_12a091f0;
  /* 12a091dc push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 12a091de call 0x12a089f0 */
  push32(0x12a091e3u); f_12a089f0();
  /* 12a091e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a091e6 mov dword ptr [0x12a2ffb0], 1 */
  w32((uint32_t)(0x12a2ffb0), (0x1u));
L_12a091f0:;
  /* 12a091f0 pop ebp */
  EBP = (pop32());
  /* 12a091f1 ret  */
  ESPCHK(0x12a091d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009200 @ 0x12a09200 (664 bytes, 257 insns) [15 switch table(s)] */
void f_12a09200(void) {
  FTRACE(0x12a09200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a09200 push ebp */
  push32((uint32_t)(EBP));
  /* 12a09201 mov ebp, esp */
  EBP = (ESP);
  /* 12a09203 push edi */
  push32((uint32_t)(EDI));
  /* 12a09204 push esi */
  push32((uint32_t)(ESI));
  /* 12a09205 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a09208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0920b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0920e mov eax, ecx */
  EAX = (ECX);
  /* 12a09210 mov edx, ecx */
  EDX = (ECX);
  /* 12a09212 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09214 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09216 jbe 0x12a09220 */
  if ((C.cf||C.zf)) goto L_12a09220;
  /* 12a09218 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0921a jb 0x12a09398 */
  if (C.cf) goto L_12a09398;
L_12a09220:;
  /* 12a09220 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a09226 jne 0x12a0923c */
  if (!C.zf) goto L_12a0923c;
  /* 12a09228 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0922b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0922e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09231 jb 0x12a0925c */
  if (C.cf) goto L_12a0925c;
  /* 12a09233 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a09235 jmp dword ptr [edx*4 + 0x12a09348] */
  switch (EDX) {
    case 0: goto L_12a09358;
    case 1: goto L_12a09360;
    case 2: goto L_12a0936c;
    case 3: goto L_12a09380;
    default: x86_unimpl("switch@0x12a09235 out of table"); return;
  }
L_12a0923c:;
  /* 12a0923c mov eax, edi */
  EAX = (EDI);
  /* 12a0923e mov edx, 3 */
  EDX = (0x3u);
  /* 12a09243 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09246 jb 0x12a09254 */
  if (C.cf) goto L_12a09254;
  /* 12a09248 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0924b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0924d jmp dword ptr [eax*4 + 0x12a09260] */
  switch (EAX) {
    case 1: goto L_12a09270;
    case 2: goto L_12a0929c;
    case 3: goto L_12a092c0;
    default: x86_unimpl("switch@0x12a0924d out of table"); return;
  }
L_12a09254:;
  /* 12a09254 jmp dword ptr [ecx*4 + 0x12a09358] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12a09358)))); return;
  /* 12a0925b nop  */
  /* nop */
L_12a0925c:;
  /* 12a0925c jmp dword ptr [ecx*4 + 0x12a092dc] */
  switch (ECX) {
    case 0: goto L_12a0933f;
    case 1: goto L_12a0932c;
    case 2: goto L_12a09324;
    case 3: goto L_12a0931c;
    case 4: goto L_12a09314;
    case 5: goto L_12a0930c;
    case 6: goto L_12a09304;
    case 7: goto L_12a092fc;
    default: x86_unimpl("switch@0x12a0925c out of table"); return;
  }
  /* 12a09263 nop  */
  /* nop */
L_12a09270:;
  /* 12a09270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a09272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a09274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a09276 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a09279 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0927c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0927f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a09282 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a09285 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09288 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0928b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0928e jb 0x12a0925c */
  if (C.cf) goto L_12a0925c;
  /* 12a09290 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a09292 jmp dword ptr [edx*4 + 0x12a09348] */
  switch (EDX) {
    case 0: goto L_12a09358;
    case 1: goto L_12a09360;
    case 2: goto L_12a0936c;
    case 3: goto L_12a09380;
    default: x86_unimpl("switch@0x12a09292 out of table"); return;
  }
  /* 12a09299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0929c:;
  /* 12a0929c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0929e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a092a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a092a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a092a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a092a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a092ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a092ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a092b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a092b4 jb 0x12a0925c */
  if (C.cf) goto L_12a0925c;
  /* 12a092b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a092b8 jmp dword ptr [edx*4 + 0x12a09348] */
  switch (EDX) {
    case 0: goto L_12a09358;
    case 1: goto L_12a09360;
    case 2: goto L_12a0936c;
    case 3: goto L_12a09380;
    default: x86_unimpl("switch@0x12a092b8 out of table"); return;
  }
  /* 12a092bf nop  */
  /* nop */
L_12a092c0:;
  /* 12a092c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a092c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a092c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a092c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a092c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a092ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a092cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a092ce jb 0x12a0925c */
  if (C.cf) goto L_12a0925c;
  /* 12a092d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a092d2 jmp dword ptr [edx*4 + 0x12a09348] */
  switch (EDX) {
    case 0: goto L_12a09358;
    case 1: goto L_12a09360;
    case 2: goto L_12a0936c;
    case 3: goto L_12a09380;
    default: x86_unimpl("switch@0x12a092d2 out of table"); return;
  }
  /* 12a092d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a092fc:;
  /* 12a092fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12a09300 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12a09304:;
  /* 12a09304 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12a09308 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12a0930c:;
  /* 12a0930c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12a09310 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12a09314:;
  /* 12a09314 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12a09318 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12a0931c:;
  /* 12a0931c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12a09320 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12a09324:;
  /* 12a09324 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12a09328 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12a0932c:;
  /* 12a0932c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12a09330 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12a09334 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12a0933b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0933d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12a0933f:;
  /* 12a0933f jmp dword ptr [edx*4 + 0x12a09348] */
  switch (EDX) {
    case 0: goto L_12a09358;
    case 1: goto L_12a09360;
    case 2: goto L_12a0936c;
    case 3: goto L_12a09380;
    default: x86_unimpl("switch@0x12a0933f out of table"); return;
  }
  /* 12a09346 mov edi, edi */
  EDI = (EDI);
L_12a09358:;
  /* 12a09358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0935b pop esi */
  ESI = (pop32());
  /* 12a0935c pop edi */
  EDI = (pop32());
  /* 12a0935d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0935e ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a0935f nop  */
  /* nop */
L_12a09360:;
  /* 12a09360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a09362 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a09364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09367 pop esi */
  ESI = (pop32());
  /* 12a09368 pop edi */
  EDI = (pop32());
  /* 12a09369 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0936a ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a0936b nop  */
  /* nop */
L_12a0936c:;
  /* 12a0936c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0936e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a09370 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a09373 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a09376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09379 pop esi */
  ESI = (pop32());
  /* 12a0937a pop edi */
  EDI = (pop32());
  /* 12a0937b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0937c ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a0937d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a09380:;
  /* 12a09380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a09382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a09384 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a09387 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0938a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0938d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a09390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09393 pop esi */
  ESI = (pop32());
  /* 12a09394 pop edi */
  EDI = (pop32());
  /* 12a09395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a09396 ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a09397 nop  */
  /* nop */
L_12a09398:;
  /* 12a09398 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12a0939c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12a093a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a093a6 jne 0x12a093cc */
  if (!C.zf) goto L_12a093cc;
  /* 12a093a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a093ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a093ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a093b1 jb 0x12a093c0 */
  if (C.cf) goto L_12a093c0;
  /* 12a093b3 std  */
  C.df=1;
  /* 12a093b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a093b6 cld  */
  C.df=0;
  /* 12a093b7 jmp dword ptr [edx*4 + 0x12a094e0] */
  switch (EDX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a093b7 out of table"); return;
  }
  /* 12a093be mov edi, edi */
  EDI = (EDI);
L_12a093c0:;
  /* 12a093c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a093c2 jmp dword ptr [ecx*4 + 0x12a09490] */
  switch (ECX) {
    case 0: goto L_12a094d7;
    default: x86_unimpl("switch@0x12a093c2 out of table"); return;
  }
  /* 12a093c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a093cc:;
  /* 12a093cc mov eax, edi */
  EAX = (EDI);
  /* 12a093ce mov edx, 3 */
  EDX = (0x3u);
  /* 12a093d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a093d6 jb 0x12a093e4 */
  if (C.cf) goto L_12a093e4;
  /* 12a093d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12a093db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a093dd jmp dword ptr [eax*4 + 0x12a093e8] */
  switch (EAX) {
    case 1: goto L_12a093f8;
    case 2: goto L_12a09418;
    case 3: goto L_12a09440;
    default: x86_unimpl("switch@0x12a093dd out of table"); return;
  }
L_12a093e4:;
  /* 12a093e4 jmp dword ptr [ecx*4 + 0x12a094e0] */
  switch (ECX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a093e4 out of table"); return;
  }
  /* 12a093eb nop  */
  /* nop */
L_12a093f8:;
  /* 12a093f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a093fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a093fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a09400 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12a09401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a09404 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12a09405 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09408 jb 0x12a093c0 */
  if (C.cf) goto L_12a093c0;
  /* 12a0940a std  */
  C.df=1;
  /* 12a0940b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0940d cld  */
  C.df=0;
  /* 12a0940e jmp dword ptr [edx*4 + 0x12a094e0] */
  switch (EDX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a0940e out of table"); return;
  }
  /* 12a09415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a09418:;
  /* 12a09418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0941b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0941d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a09420 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a09423 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a09426 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a09429 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0942c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0942f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09432 jb 0x12a093c0 */
  if (C.cf) goto L_12a093c0;
  /* 12a09434 std  */
  C.df=1;
  /* 12a09435 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a09437 cld  */
  C.df=0;
  /* 12a09438 jmp dword ptr [edx*4 + 0x12a094e0] */
  switch (EDX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a09438 out of table"); return;
  }
  /* 12a0943f nop  */
  /* nop */
L_12a09440:;
  /* 12a09440 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a09443 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a09445 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a09448 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0944b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0944e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a09451 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a09454 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a09457 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0945a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0945d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09460 jb 0x12a093c0 */
  if (C.cf) goto L_12a093c0;
  /* 12a09466 std  */
  C.df=1;
  /* 12a09467 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a09469 cld  */
  C.df=0;
  /* 12a0946a jmp dword ptr [edx*4 + 0x12a094e0] */
  switch (EDX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a0946a out of table"); return;
  }
  /* 12a09471 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12a09474 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12a09475 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 12a09476 mov al, byte ptr [0xa0949c12] */
  AL = (r8((uint32_t)(0xa0949c12)));
  /* 12a0947b adc ah, byte ptr [esp + edx*4 - 0x6b53ed60] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ESP + EDX*4 + -0x6b53ed60))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 12a09482 mov al, byte ptr [0xa094b412] */
  AL = (r8((uint32_t)(0xa094b412)));
  /* 12a09487 adc bh, byte ptr [esp + edx*4 - 0x6b3bed60] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ESP + EDX*4 + -0x6b3bed60))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12a09494 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12a09498 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12a0949c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12a094a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12a094a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12a094a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12a094ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12a094b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12a094b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12a094b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12a094bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12a094c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12a094c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12a094c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12a094cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12a094d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a094d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12a094d7:;
  /* 12a094d7 jmp dword ptr [edx*4 + 0x12a094e0] */
  switch (EDX) {
    case 0: goto L_12a094f0;
    case 1: goto L_12a094f8;
    case 2: goto L_12a09508;
    case 3: goto L_12a0951c;
    default: x86_unimpl("switch@0x12a094d7 out of table"); return;
  }
  /* 12a094de mov edi, edi */
  EDI = (EDI);
L_12a094f0:;
  /* 12a094f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a094f3 pop esi */
  ESI = (pop32());
  /* 12a094f4 pop edi */
  EDI = (pop32());
  /* 12a094f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a094f6 ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a094f7 nop  */
  /* nop */
L_12a094f8:;
  /* 12a094f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a094fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a094fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09501 pop esi */
  ESI = (pop32());
  /* 12a09502 pop edi */
  EDI = (pop32());
  /* 12a09503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a09504 ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a09505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a09508:;
  /* 12a09508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0950b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0950e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a09511 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a09514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09517 pop esi */
  ESI = (pop32());
  /* 12a09518 pop edi */
  EDI = (pop32());
  /* 12a09519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0951a ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
  /* 12a0951b nop  */
  /* nop */
L_12a0951c:;
  /* 12a0951c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0951f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a09522 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a09525 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a09528 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0952b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0952e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09531 pop esi */
  ESI = (pop32());
  /* 12a09532 pop edi */
  EDI = (pop32());
  /* 12a09533 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a09534 ret  */
  ESPCHK(0x12a09200u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x12a09540 (104 bytes, 43 insns) */
void f_12a09540(void) {
  FTRACE(0x12a09540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a09540 push ebx */
  push32((uint32_t)(EBX));
  /* 12a09541 push esi */
  push32((uint32_t)(ESI));
  /* 12a09542 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 12a09546 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a09548 jne 0x12a09562 */
  if (!C.zf) goto L_12a09562;
  /* 12a0954a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 12a0954e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a09552 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a09554 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a09556 mov ebx, eax */
  EBX = (EAX);
  /* 12a09558 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a0955c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a0955e mov edx, ebx */
  EDX = (EBX);
  /* 12a09560 jmp 0x12a095a3 */
  goto L_12a095a3;
L_12a09562:;
  /* 12a09562 mov ecx, eax */
  ECX = (EAX);
  /* 12a09564 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 12a09568 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a0956c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12a09570:;
  /* 12a09570 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12a09572 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12a09574 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12a09576 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12a09578 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0957a jne 0x12a09570 */
  if (!C.zf) goto L_12a09570;
  /* 12a0957c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a0957e mov esi, eax */
  ESI = (EAX);
  /* 12a09580 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a09584 mov ecx, eax */
  ECX = (EAX);
  /* 12a09586 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12a0958a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a0958c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0958e jb 0x12a0959e */
  if (C.cf) goto L_12a0959e;
  /* 12a09590 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09594 ja 0x12a0959e */
  if ((!C.cf&&!C.zf)) goto L_12a0959e;
  /* 12a09596 jb 0x12a0959f */
  if (C.cf) goto L_12a0959f;
  /* 12a09598 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0959c jbe 0x12a0959f */
  if ((C.cf||C.zf)) goto L_12a0959f;
L_12a0959e:;
  /* 12a0959e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_12a0959f:;
  /* 12a0959f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a095a1 mov eax, esi */
  EAX = (ESI);
L_12a095a3:;
  /* 12a095a3 pop esi */
  ESI = (pop32());
  /* 12a095a4 pop ebx */
  EBX = (pop32());
  /* 12a095a5 ret 0x10 */
  ESPCHK(0x12a09540u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12a095b0 (117 bytes, 44 insns) */
void f_12a095b0(void) {
  FTRACE(0x12a095b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a095b0 push ebx */
  push32((uint32_t)(EBX));
  /* 12a095b1 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12a095b5 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a095b7 jne 0x12a095d1 */
  if (!C.zf) goto L_12a095d1;
  /* 12a095b9 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a095bd mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a095c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a095c3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a095c5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a095c9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a095cb mov eax, edx */
  EAX = (EDX);
  /* 12a095cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a095cf jmp 0x12a09621 */
  goto L_12a09621;
L_12a095d1:;
  /* 12a095d1 mov ecx, eax */
  ECX = (EAX);
  /* 12a095d3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a095d7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 12a095db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_12a095df:;
  /* 12a095df shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12a095e1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12a095e3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12a095e5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12a095e7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a095e9 jne 0x12a095df */
  if (!C.zf) goto L_12a095df;
  /* 12a095eb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a095ed mov ecx, eax */
  ECX = (EAX);
  /* 12a095ef mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a095f3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12a095f4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12a095f8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a095fa jb 0x12a0960a */
  if (C.cf) goto L_12a0960a;
  /* 12a095fc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09600 ja 0x12a0960a */
  if ((!C.cf&&!C.zf)) goto L_12a0960a;
  /* 12a09602 jb 0x12a09612 */
  if (C.cf) goto L_12a09612;
  /* 12a09604 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09608 jbe 0x12a09612 */
  if ((C.cf||C.zf)) goto L_12a09612;
L_12a0960a:;
  /* 12a0960a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0960e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12a09612:;
  /* 12a09612 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09616 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0961a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0961c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0961e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_12a09621:;
  /* 12a09621 pop ebx */
  EBX = (pop32());
  /* 12a09622 ret 0x10 */
  ESPCHK(0x12a095b0u, _esp0);
  ESP += 20; return;
}

/* FUN_10009630 @ 0x12a09630 (628 bytes, 214 insns) */
void f_12a09630(void) {
  FTRACE(0x12a09630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a09630 push ebp */
  push32((uint32_t)(EBP));
  /* 12a09631 mov ebp, esp */
  EBP = (ESP);
  /* 12a09633 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09636 push ebx */
  push32((uint32_t)(EBX));
  /* 12a09637 push esi */
  push32((uint32_t)(ESI));
  /* 12a09638 push edi */
  push32((uint32_t)(EDI));
L_12a09639:;
  /* 12a09639 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0963d jne 0x12a0965d */
  if (!C.zf) goto L_12a0965d;
  /* 12a0963f push 0x12a29e6c */
  push32((uint32_t)(0x12a29e6cu));
  /* 12a09644 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a09646 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 12a09648 push 0x12a29e60 */
  push32((uint32_t)(0x12a29e60u));
  /* 12a0964d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0964f call 0x12a019e0 */
  push32(0x12a09654u); f_12a019e0();
  /* 12a09654 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09657 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0965a jne 0x12a0965d */
  if (!C.zf) goto L_12a0965d;
  /* 12a0965c int3  */
  x86_unimpl("int3 @ 0x12a0965c");
L_12a0965d:;
  /* 12a0965d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0965f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09661 jne 0x12a09639 */
  if (!C.zf) goto L_12a09639;
  /* 12a09663 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a09666 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a09669 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0966c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0966f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a09672 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09675 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a09678 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0967e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a09680 je 0x12a0968f */
  if (C.zf) goto L_12a0968f;
  /* 12a09682 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09685 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a09688 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0968b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0968d je 0x12a096a5 */
  if (C.zf) goto L_12a096a5;
L_12a0968f:;
  /* 12a0968f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09692 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a09695 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12a09697 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0969a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 12a0969d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a096a0 jmp 0x12a0989d */
  goto L_12a0989d;
L_12a096a5:;
  /* 12a096a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096a8 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a096ab and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12a096ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a096b0 je 0x12a096fc */
  if (C.zf) goto L_12a096fc;
  /* 12a096b2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096b5 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12a096bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096bf mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a096c2 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12a096c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a096c7 je 0x12a096e5 */
  if (C.zf) goto L_12a096e5;
  /* 12a096c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096cf mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a096d2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a096d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096d7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a096da and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 12a096dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096e0 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a096e3 jmp 0x12a096fc */
  goto L_12a096fc;
L_12a096e5:;
  /* 12a096e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096e8 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a096eb or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12a096ee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096f1 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a096f4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a096f7 jmp 0x12a0989d */
  goto L_12a0989d;
L_12a096fc:;
  /* 12a096fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a096ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a09702 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12a09705 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09708 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a0970b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0970e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a09711 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 12a09714 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09717 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a0971a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0971d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12a09724 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0972b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0972e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a09731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09734 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a09737 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0973d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0973f jne 0x12a0976f */
  if (!C.zf) goto L_12a0976f;
  /* 12a09741 cmp dword ptr [ebp - 8], 0x12a2d140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12a2d140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09748 je 0x12a09753 */
  if (C.zf) goto L_12a09753;
  /* 12a0974a cmp dword ptr [ebp - 8], 0x12a2d160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12a2d160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09751 jne 0x12a09763 */
  if (!C.zf) goto L_12a09763;
L_12a09753:;
  /* 12a09753 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a09756 push edx */
  push32((uint32_t)(EDX));
  /* 12a09757 call 0x12a0b5a0 */
  push32(0x12a0975cu); f_12a0b5a0();
  /* 12a0975c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0975f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09761 jne 0x12a0976f */
  if (!C.zf) goto L_12a0976f;
L_12a09763:;
  /* 12a09763 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09766 push eax */
  push32((uint32_t)(EAX));
  /* 12a09767 call 0x12a0b4d0 */
  push32(0x12a0976cu); f_12a0b4d0();
  /* 12a0976c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0976f:;
  /* 12a0976f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09772 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a09775 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0977b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0977d je 0x12a0985b */
  if (C.zf) goto L_12a0985b;
L_12a09783:;
  /* 12a09783 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09786 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09789 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 12a0978b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0978e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a09790 jge 0x12a097b3 */
  if ((C.sf==C.of)) goto L_12a097b3;
  /* 12a09792 push 0x12a29e20 */
  push32((uint32_t)(0x12a29e20u));
  /* 12a09797 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a09799 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 12a0979e push 0x12a29e60 */
  push32((uint32_t)(0x12a29e60u));
  /* 12a097a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a097a5 call 0x12a019e0 */
  push32(0x12a097aau); f_12a019e0();
  /* 12a097aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a097ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a097b0 jne 0x12a097b3 */
  if (!C.zf) goto L_12a097b3;
  /* 12a097b2 int3  */
  x86_unimpl("int3 @ 0x12a097b2");
L_12a097b3:;
  /* 12a097b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a097b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a097b7 jne 0x12a09783 */
  if (!C.zf) goto L_12a09783;
  /* 12a097b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097bc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097bf mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12a097c1 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a097c4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a097c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097ca mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a097cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a097d0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a097d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097d8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a097db sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a097de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097e1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a097e4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a097e8 jle 0x12a09806 */
  if ((C.zf||C.sf!=C.of)) goto L_12a09806;
  /* 12a097ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a097ed push ecx */
  push32((uint32_t)(ECX));
  /* 12a097ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a097f1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a097f4 push eax */
  push32((uint32_t)(EAX));
  /* 12a097f5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a097f8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a097f9 call 0x12a0b1c0 */
  push32(0x12a097feu); f_12a0b1c0();
  /* 12a097fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09801 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a09804 jmp 0x12a0984e */
  goto L_12a0984e;
L_12a09806:;
  /* 12a09806 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0980a je 0x12a09829 */
  if (C.zf) goto L_12a09829;
  /* 12a0980c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0980f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12a09812 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a09815 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12a09818 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0981b mov ecx, dword ptr [edx*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a09822 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09824 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12a09827 jmp 0x12a09830 */
  goto L_12a09830;
L_12a09829:;
  /* 12a09829 mov dword ptr [ebp - 0x14], 0x12a2ca60 */
  w32((uint32_t)(EBP + -0x14), (0x12a2ca60u));
L_12a09830:;
  /* 12a09830 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a09833 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 12a09837 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0983a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0983c je 0x12a0984e */
  if (C.zf) goto L_12a0984e;
  /* 12a0983e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a09840 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a09842 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a09845 push ecx */
  push32((uint32_t)(ECX));
  /* 12a09846 call 0x12a0b070 */
  push32(0x12a0984bu); f_12a0b070();
  /* 12a0984b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0984e:;
  /* 12a0984e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09851 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a09854 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a09857 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12a09859 jmp 0x12a09879 */
  goto L_12a09879;
L_12a0985b:;
  /* 12a0985b mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a09862 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09865 push edx */
  push32((uint32_t)(EDX));
  /* 12a09866 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12a09869 push eax */
  push32((uint32_t)(EAX));
  /* 12a0986a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0986d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0986e call 0x12a0b1c0 */
  push32(0x12a09873u); f_12a0b1c0();
  /* 12a09873 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09876 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a09879:;
  /* 12a09879 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0987c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0987f je 0x12a09895 */
  if (C.zf) goto L_12a09895;
  /* 12a09881 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09884 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a09887 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0988a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0988d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12a09890 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a09893 jmp 0x12a0989d */
  goto L_12a0989d;
L_12a09895:;
  /* 12a09895 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a09898 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_12a0989d:;
  /* 12a0989d pop edi */
  EDI = (pop32());
  /* 12a0989e pop esi */
  ESI = (pop32());
  /* 12a0989f pop ebx */
  EBX = (pop32());
  /* 12a098a0 mov esp, ebp */
  ESP = (EBP);
  /* 12a098a2 pop ebp */
  EBP = (pop32());
  /* 12a098a3 ret  */
  ESPCHK(0x12a09630u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x12a098b0 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12a098b0(void) {
  FTRACE(0x12a098b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a098b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a098b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a098b3 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a098b9 push ebx */
  push32((uint32_t)(EBX));
  /* 12a098ba push esi */
  push32((uint32_t)(ESI));
  /* 12a098bb push edi */
  push32((uint32_t)(EDI));
  /* 12a098bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a098c3 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 12a098cd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12a098d4:;
  /* 12a098d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a098d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a098d9 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 12a098dc movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a098e0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a098e3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a098e6 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12a098e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a098eb je 0x12a0a4c7 */
  if (C.zf) goto L_12a0a4c7;
  /* 12a098f1 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a098f8 jl 0x12a0a4c7 */
  if ((C.sf!=C.of)) goto L_12a0a4c7;
  /* 12a098fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09902 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09905 jl 0x12a09926 */
  if ((C.sf!=C.of)) goto L_12a09926;
  /* 12a09907 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a0990b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0990e jg 0x12a09926 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a09926;
  /* 12a09910 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09914 movsx ecx, byte ptr [eax + 0x12a29e58] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x12a29e58))));
  /* 12a0991b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0991e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 12a09924 jmp 0x12a09930 */
  goto L_12a09930;
L_12a09926:;
  /* 12a09926 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_12a09930:;
  /* 12a09930 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 12a09936 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a09939 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0993c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0993f movsx edx, byte ptr [ecx + eax*8 + 0x12a29e78] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x12a29e78))));
  /* 12a09947 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12a0994a mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a0994d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a09950 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 12a09956 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0995d ja 0x12a0a4c2 */
  if ((!C.cf&&!C.zf)) goto L_12a0a4c2;
  /* 12a09963 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 12a09969 jmp dword ptr [ecx*4 + 0x12a0a4d4] */
  switch (ECX) {
    case 0: goto L_12a09970;
    case 1: goto L_12a09a0a;
    case 2: goto L_12a09a4c;
    case 3: goto L_12a09abb;
    case 4: goto L_12a09b13;
    case 5: goto L_12a09b22;
    case 6: goto L_12a09b6e;
    case 7: goto L_12a09c01;
    case 8: goto L_12a09a98;
    case 9: goto L_12a09aa3;
    case 10: goto L_12a09a8e;
    case 11: goto L_12a09a83;
    case 12: goto L_12a09aae;
    case 13: goto L_12a09ab6;
    default: x86_unimpl("switch@0x12a09969 out of table"); return;
  }
L_12a09970:;
  /* 12a09970 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12a09977 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0997a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a09980 mov eax, dword ptr [0x12a2cc98] */
  EAX = (r32((uint32_t)(0x12a2cc98)));
  /* 12a09985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a09987 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12a0998b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09991 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a09993 je 0x12a099ed */
  if (C.zf) goto L_12a099ed;
  /* 12a09995 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 12a0999b push edx */
  push32((uint32_t)(EDX));
  /* 12a0999c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0999f push eax */
  push32((uint32_t)(EAX));
  /* 12a099a0 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a099a4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a099a5 call 0x12a0a5e0 */
  push32(0x12a099aau); f_12a0a5e0();
  /* 12a099aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a099ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a099b0 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a099b2 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12a099b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a099b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a099bb mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_12a099be:;
  /* 12a099be movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a099c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a099c4 jne 0x12a099e7 */
  if (!C.zf) goto L_12a099e7;
  /* 12a099c6 push 0x12a29ef8 */
  push32((uint32_t)(0x12a29ef8u));
  /* 12a099cb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a099cd push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12a099d2 push 0x12a29eec */
  push32((uint32_t)(0x12a29eecu));
  /* 12a099d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a099d9 call 0x12a019e0 */
  push32(0x12a099deu); f_12a019e0();
  /* 12a099de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a099e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a099e4 jne 0x12a099e7 */
  if (!C.zf) goto L_12a099e7;
  /* 12a099e6 int3  */
  x86_unimpl("int3 @ 0x12a099e6");
L_12a099e7:;
  /* 12a099e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a099e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a099eb jne 0x12a099be */
  if (!C.zf) goto L_12a099be;
L_12a099ed:;
  /* 12a099ed lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12a099f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a099f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a099f7 push edx */
  push32((uint32_t)(EDX));
  /* 12a099f8 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a099fc push eax */
  push32((uint32_t)(EAX));
  /* 12a099fd call 0x12a0a5e0 */
  push32(0x12a09a02u); f_12a0a5e0();
  /* 12a09a02 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09a05 jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09a0a:;
  /* 12a09a0a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a09a11 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09a14 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 12a09a1a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 12a09a20 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 12a09a26 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 12a09a2c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12a09a2f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a09a36 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 12a09a40 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12a09a47 jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09a4c:;
  /* 12a09a4c movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09a50 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 12a09a56 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 12a09a5c sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09a5f mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 12a09a65 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09a6c ja 0x12a09ab6 */
  if ((!C.cf&&!C.zf)) goto L_12a09ab6;
  /* 12a09a6e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12a09a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a09a76 mov al, byte ptr [ecx + 0x12a0a50c] */
  AL = (r8((uint32_t)(ECX + 0x12a0a50c)));
  /* 12a09a7c jmp dword ptr [eax*4 + 0x12a0a4f4] */
  switch (EAX) {
    case 0: goto L_12a09a98;
    case 1: goto L_12a09aa3;
    case 2: goto L_12a09a8e;
    case 3: goto L_12a09a83;
    case 4: goto L_12a09aae;
    case 5: goto L_12a09ab6;
    default: x86_unimpl("switch@0x12a09a7c out of table"); return;
  }
L_12a09a83:;
  /* 12a09a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09a86 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a09a89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a09a8c jmp 0x12a09ab6 */
  goto L_12a09ab6;
L_12a09a8e:;
  /* 12a09a8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09a91 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12a09a93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a09a96 jmp 0x12a09ab6 */
  goto L_12a09ab6;
L_12a09a98:;
  /* 12a09a98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09a9b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09a9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a09aa1 jmp 0x12a09ab6 */
  goto L_12a09ab6;
L_12a09aa3:;
  /* 12a09aa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09aa6 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12a09aa9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a09aac jmp 0x12a09ab6 */
  goto L_12a09ab6;
L_12a09aae:;
  /* 12a09aae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09ab1 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12a09ab3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a09ab6:;
  /* 12a09ab6 jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09abb:;
  /* 12a09abb movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09abf cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09ac2 jne 0x12a09af7 */
  if (!C.zf) goto L_12a09af7;
  /* 12a09ac4 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12a09ac7 push edx */
  push32((uint32_t)(EDX));
  /* 12a09ac8 call 0x12a0a6f0 */
  push32(0x12a09acdu); f_12a0a6f0();
  /* 12a09acd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09ad0 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12a09ad6 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09add jge 0x12a09af5 */
  if ((C.sf==C.of)) goto L_12a09af5;
  /* 12a09adf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09ae2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12a09ae4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a09ae7 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12a09aed neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a09aef mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12a09af5:;
  /* 12a09af5 jmp 0x12a09b0e */
  goto L_12a09b0e;
L_12a09af7:;
  /* 12a09af7 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12a09afd imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a09b00 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09b04 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12a09b08 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12a09b0e:;
  /* 12a09b0e jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09b13:;
  /* 12a09b13 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12a09b1d jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09b22:;
  /* 12a09b22 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09b26 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09b29 jne 0x12a09b52 */
  if (!C.zf) goto L_12a09b52;
  /* 12a09b2b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12a09b2e push eax */
  push32((uint32_t)(EAX));
  /* 12a09b2f call 0x12a0a6f0 */
  push32(0x12a09b34u); f_12a0a6f0();
  /* 12a09b34 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09b37 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12a09b3d cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09b44 jge 0x12a09b50 */
  if ((C.sf==C.of)) goto L_12a09b50;
  /* 12a09b46 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12a09b50:;
  /* 12a09b50 jmp 0x12a09b69 */
  goto L_12a09b69;
L_12a09b52:;
  /* 12a09b52 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12a09b58 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a09b5b movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09b5f lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12a09b63 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12a09b69:;
  /* 12a09b69 jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09b6e:;
  /* 12a09b6e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09b72 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12a09b78 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12a09b7e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09b81 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12a09b87 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09b8e ja 0x12a09bfc */
  if ((!C.cf&&!C.zf)) goto L_12a09bfc;
  /* 12a09b90 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12a09b96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a09b98 mov al, byte ptr [ecx + 0x12a0a531] */
  AL = (r8((uint32_t)(ECX + 0x12a0a531)));
  /* 12a09b9e jmp dword ptr [eax*4 + 0x12a0a51d] */
  switch (EAX) {
    case 0: goto L_12a09bb0;
    case 1: goto L_12a09be9;
    case 2: goto L_12a09ba5;
    case 3: goto L_12a09bf3;
    case 4: goto L_12a09bfc;
    default: x86_unimpl("switch@0x12a09b9e out of table"); return;
  }
L_12a09ba5:;
  /* 12a09ba5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09ba8 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12a09bab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a09bae jmp 0x12a09bfc */
  goto L_12a09bfc;
L_12a09bb0:;
  /* 12a09bb0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a09bb3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a09bb6 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09bb9 jne 0x12a09bdb */
  if (!C.zf) goto L_12a09bdb;
  /* 12a09bbb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a09bbe movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a09bc2 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09bc5 jne 0x12a09bdb */
  if (!C.zf) goto L_12a09bdb;
  /* 12a09bc7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a09bca add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09bcd mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12a09bd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09bd3 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12a09bd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a09bd9 jmp 0x12a09be7 */
  goto L_12a09be7;
L_12a09bdb:;
  /* 12a09bdb mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12a09be2 jmp 0x12a09970 */
  goto L_12a09970;
L_12a09be7:;
  /* 12a09be7 jmp 0x12a09bfc */
  goto L_12a09bfc;
L_12a09be9:;
  /* 12a09be9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09bec or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12a09bee mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a09bf1 jmp 0x12a09bfc */
  goto L_12a09bfc;
L_12a09bf3:;
  /* 12a09bf3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09bf6 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12a09bf9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a09bfc:;
  /* 12a09bfc jmp 0x12a0a4c2 */
  goto L_12a0a4c2;
L_12a09c01:;
  /* 12a09c01 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09c05 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12a09c0b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12a09c11 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09c14 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12a09c1a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09c21 ja 0x12a0a2e7 */
  if ((!C.cf&&!C.zf)) goto L_12a0a2e7;
  /* 12a09c27 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12a09c2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a09c2f mov cl, byte ptr [edx + 0x12a0a59c] */
  CL = (r8((uint32_t)(EDX + 0x12a0a59c)));
  /* 12a09c35 jmp dword ptr [ecx*4 + 0x12a0a560] */
  switch (ECX) {
    case 0: goto L_12a09c3c;
    case 1: goto L_12a09ed0;
    case 2: goto L_12a09d60;
    case 3: goto L_12a0a009;
    case 4: goto L_12a09ccb;
    case 5: goto L_12a09c51;
    case 6: goto L_12a09fdb;
    case 7: goto L_12a09ee0;
    case 8: goto L_12a09e85;
    case 9: goto L_12a0a055;
    case 10: goto L_12a09fff;
    case 11: goto L_12a09d76;
    case 12: goto L_12a09ff3;
    case 13: goto L_12a0a015;
    case 14: goto L_12a0a2e7;
    default: x86_unimpl("switch@0x12a09c35 out of table"); return;
  }
L_12a09c3c:;
  /* 12a09c3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09c3f and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12a09c44 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09c46 jne 0x12a09c51 */
  if (!C.zf) goto L_12a09c51;
  /* 12a09c48 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09c4b or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12a09c4e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a09c51:;
  /* 12a09c51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09c54 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12a09c5a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a09c5c je 0x12a09c97 */
  if (C.zf) goto L_12a09c97;
  /* 12a09c5e lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12a09c61 push eax */
  push32((uint32_t)(EAX));
  /* 12a09c62 call 0x12a0a730 */
  push32(0x12a09c67u); f_12a0a730();
  /* 12a09c67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09c6a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12a09c6e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12a09c72 push ecx */
  push32((uint32_t)(ECX));
  /* 12a09c73 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12a09c79 push edx */
  push32((uint32_t)(EDX));
  /* 12a09c7a call 0x12a0b810 */
  push32(0x12a09c7fu); f_12a0b810();
  /* 12a09c7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09c82 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a09c85 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09c89 jge 0x12a09c95 */
  if ((C.sf==C.of)) goto L_12a09c95;
  /* 12a09c8b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12a09c95:;
  /* 12a09c95 jmp 0x12a09cbd */
  goto L_12a09cbd;
L_12a09c97:;
  /* 12a09c97 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12a09c9a push eax */
  push32((uint32_t)(EAX));
  /* 12a09c9b call 0x12a0a6f0 */
  push32(0x12a09ca0u); f_12a0a6f0();
  /* 12a09ca0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09ca3 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12a09caa mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12a09cb0 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12a09cb6 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12a09cbd:;
  /* 12a09cbd lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12a09cc3 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a09cc6 jmp 0x12a0a2e7 */
  goto L_12a0a2e7;
L_12a09ccb:;
  /* 12a09ccb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12a09cce push eax */
  push32((uint32_t)(EAX));
  /* 12a09ccf call 0x12a0a6f0 */
  push32(0x12a09cd4u); f_12a0a6f0();
  /* 12a09cd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09cd7 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12a09cdd cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09ce4 je 0x12a09cf2 */
  if (C.zf) goto L_12a09cf2;
  /* 12a09ce6 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12a09cec cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09cf0 jne 0x12a09d0c */
  if (!C.zf) goto L_12a09d0c;
L_12a09cf2:;
  /* 12a09cf2 mov edx, dword ptr [0x12a2cfb0] */
  EDX = (r32((uint32_t)(0x12a2cfb0)));
  /* 12a09cf8 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a09cfb mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09cfe push eax */
  push32((uint32_t)(EAX));
  /* 12a09cff call 0x12a05750 */
  push32(0x12a09d04u); f_12a05750();
  /* 12a09d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09d07 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a09d0a jmp 0x12a09d5b */
  goto L_12a09d5b;
L_12a09d0c:;
  /* 12a09d0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09d0f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09d15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a09d17 je 0x12a09d3c */
  if (C.zf) goto L_12a09d3c;
  /* 12a09d19 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12a09d1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12a09d22 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a09d25 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12a09d2b movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12a09d2e shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12a09d30 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a09d33 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12a09d3a jmp 0x12a09d5b */
  goto L_12a09d5b;
L_12a09d3c:;
  /* 12a09d3c mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12a09d43 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12a09d49 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a09d4c mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a09d4f mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12a09d55 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12a09d58 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12a09d5b:;
  /* 12a09d5b jmp 0x12a0a2e7 */
  goto L_12a0a2e7;
L_12a09d60:;
  /* 12a09d60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09d63 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09d69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a09d6b jne 0x12a09d76 */
  if (!C.zf) goto L_12a09d76;
  /* 12a09d6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09d70 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12a09d73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a09d76:;
  /* 12a09d76 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09d7d jne 0x12a09d8b */
  if (!C.zf) goto L_12a09d8b;
  /* 12a09d7f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12a09d89 jmp 0x12a09d97 */
  goto L_12a09d97;
L_12a09d8b:;
  /* 12a09d8b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12a09d91 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12a09d97:;
  /* 12a09d97 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12a09d9d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12a09da3 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12a09da6 push edx */
  push32((uint32_t)(EDX));
  /* 12a09da7 call 0x12a0a6f0 */
  push32(0x12a09dacu); f_12a0a6f0();
  /* 12a09dac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09daf mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a09db2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09db5 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12a09dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09dbc je 0x12a09e26 */
  if (C.zf) goto L_12a09e26;
  /* 12a09dbe cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09dc2 jne 0x12a09dcd */
  if (!C.zf) goto L_12a09dcd;
  /* 12a09dc4 mov ecx, dword ptr [0x12a2cfb4] */
  ECX = (r32((uint32_t)(0x12a2cfb4)));
  /* 12a09dca mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12a09dcd:;
  /* 12a09dcd mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12a09dd4 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09dd7 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12a09ddd:;
  /* 12a09ddd mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12a09de3 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12a09de9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09dec mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12a09df2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09df4 je 0x12a09e16 */
  if (C.zf) goto L_12a09e16;
  /* 12a09df6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12a09dfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a09dfe mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12a09e01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09e03 je 0x12a09e16 */
  if (C.zf) goto L_12a09e16;
  /* 12a09e05 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12a09e0b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09e0e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12a09e14 jmp 0x12a09ddd */
  goto L_12a09ddd;
L_12a09e16:;
  /* 12a09e16 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12a09e1c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09e1f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12a09e21 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12a09e24 jmp 0x12a09e80 */
  goto L_12a09e80;
L_12a09e26:;
  /* 12a09e26 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09e2a jne 0x12a09e34 */
  if (!C.zf) goto L_12a09e34;
  /* 12a09e2c mov eax, dword ptr [0x12a2cfb0] */
  EAX = (r32((uint32_t)(0x12a2cfb0)));
  /* 12a09e31 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12a09e34:;
  /* 12a09e34 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09e37 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12a09e3d:;
  /* 12a09e3d mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12a09e43 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12a09e49 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09e4c mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12a09e52 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a09e54 je 0x12a09e74 */
  if (C.zf) goto L_12a09e74;
  /* 12a09e56 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12a09e5c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a09e5f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a09e61 je 0x12a09e74 */
  if (C.zf) goto L_12a09e74;
  /* 12a09e63 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12a09e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09e6c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12a09e72 jmp 0x12a09e3d */
  goto L_12a09e3d;
L_12a09e74:;
  /* 12a09e74 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12a09e7a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09e7d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12a09e80:;
  /* 12a09e80 jmp 0x12a0a2e7 */
  goto L_12a0a2e7;
L_12a09e85:;
  /* 12a09e85 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12a09e88 push edx */
  push32((uint32_t)(EDX));
  /* 12a09e89 call 0x12a0a6f0 */
  push32(0x12a09e8eu); f_12a0a6f0();
  /* 12a09e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09e91 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12a09e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09e9a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12a09e9d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09e9f je 0x12a09eb3 */
  if (C.zf) goto L_12a09eb3;
  /* 12a09ea1 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12a09ea7 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12a09eae mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12a09eb1 jmp 0x12a09ec1 */
  goto L_12a09ec1;
L_12a09eb3:;
  /* 12a09eb3 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12a09eb9 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12a09ebf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12a09ec1:;
  /* 12a09ec1 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12a09ecb jmp 0x12a0a2e7 */
  goto L_12a0a2e7;
L_12a09ed0:;
  /* 12a09ed0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12a09ed7 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12a09eda add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a09edd mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12a09ee0:;
  /* 12a09ee0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09ee3 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12a09ee5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a09ee8 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12a09eee mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a09ef1 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09ef8 jge 0x12a09f06 */
  if ((C.sf==C.of)) goto L_12a09f06;
  /* 12a09efa mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12a09f04 jmp 0x12a09f22 */
  goto L_12a09f22;
L_12a09f06:;
  /* 12a09f06 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09f0d jne 0x12a09f22 */
  if (!C.zf) goto L_12a09f22;
  /* 12a09f0f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09f13 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09f16 jne 0x12a09f22 */
  if (!C.zf) goto L_12a09f22;
  /* 12a09f18 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12a09f22:;
  /* 12a09f22 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a09f25 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09f28 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12a09f2b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a09f2e sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a09f31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a09f33 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a09f36 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12a09f3c mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12a09f42 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a09f45 push ecx */
  push32((uint32_t)(ECX));
  /* 12a09f46 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12a09f4c push edx */
  push32((uint32_t)(EDX));
  /* 12a09f4d movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09f51 push eax */
  push32((uint32_t)(EAX));
  /* 12a09f52 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09f55 push ecx */
  push32((uint32_t)(ECX));
  /* 12a09f56 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12a09f5c push edx */
  push32((uint32_t)(EDX));
  /* 12a09f5d call dword ptr [0x12a2d3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2d3a0))), 0x12a09f63u);
  /* 12a09f63 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09f66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09f69 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12a09f6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09f70 je 0x12a09f88 */
  if (C.zf) goto L_12a09f88;
  /* 12a09f72 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09f79 jne 0x12a09f88 */
  if (!C.zf) goto L_12a09f88;
  /* 12a09f7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09f7e push ecx */
  push32((uint32_t)(ECX));
  /* 12a09f7f call dword ptr [0x12a2d3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2d3ac))), 0x12a09f85u);
  /* 12a09f85 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a09f88:;
  /* 12a09f88 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12a09f8c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09f8f jne 0x12a09faa */
  if (!C.zf) goto L_12a09faa;
  /* 12a09f91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09f94 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12a09f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a09f9b jne 0x12a09faa */
  if (!C.zf) goto L_12a09faa;
  /* 12a09f9d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09fa0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a09fa1 call dword ptr [0x12a2d3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2d3a4))), 0x12a09fa7u);
  /* 12a09fa7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a09faa:;
  /* 12a09faa mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09fad movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a09fb0 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a09fb3 jne 0x12a09fc7 */
  if (!C.zf) goto L_12a09fc7;
  /* 12a09fb5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09fb8 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12a09fbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a09fbe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09fc1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09fc4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12a09fc7:;
  /* 12a09fc7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a09fca push eax */
  push32((uint32_t)(EAX));
  /* 12a09fcb call 0x12a05750 */
  push32(0x12a09fd0u); f_12a05750();
  /* 12a09fd0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a09fd3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a09fd6 jmp 0x12a0a2e7 */
  goto L_12a0a2e7;
L_12a09fdb:;
  /* 12a09fdb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a09fde or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12a09fe1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a09fe4 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12a09fee jmp 0x12a0a075 */
  goto L_12a0a075;
L_12a09ff3:;
  /* 12a09ff3 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12a09ffd jmp 0x12a0a075 */
  goto L_12a0a075;
L_12a09fff:;
  /* 12a09fff mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12a0a009:;
  /* 12a0a009 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12a0a013 jmp 0x12a0a01f */
  goto L_12a0a01f;
L_12a0a015:;
  /* 12a0a015 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12a0a01f:;
  /* 12a0a01f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12a0a029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a02c and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a032 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a034 je 0x12a0a053 */
  if (C.zf) goto L_12a0a053;
  /* 12a0a036 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12a0a03d mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12a0a043 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a046 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12a0a04c mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12a0a053:;
  /* 12a0a053 jmp 0x12a0a075 */
  goto L_12a0a075;
L_12a0a055:;
  /* 12a0a055 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12a0a05f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a062 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a068 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0a06a je 0x12a0a075 */
  if (C.zf) goto L_12a0a075;
  /* 12a0a06c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a06f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12a0a072 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0a075:;
  /* 12a0a075 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a078 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a07f je 0x12a0a09e */
  if (C.zf) goto L_12a0a09e;
  /* 12a0a081 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12a0a084 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a085 call 0x12a0a710 */
  push32(0x12a0a08au); f_12a0a710();
  /* 12a0a08a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a08d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12a0a093 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12a0a099 jmp 0x12a0a12f */
  goto L_12a0a12f;
L_12a0a09e:;
  /* 12a0a09e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a0a1 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a0a4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a0a6 je 0x12a0a0f0 */
  if (C.zf) goto L_12a0a0f0;
  /* 12a0a0a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a0ab and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a0ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a0b0 je 0x12a0a0d0 */
  if (C.zf) goto L_12a0a0d0;
  /* 12a0a0b2 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12a0a0b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a0b6 call 0x12a0a6f0 */
  push32(0x12a0a0bbu); f_12a0a6f0();
  /* 12a0a0bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a0be movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 12a0a0c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0a0c2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12a0a0c8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12a0a0ce jmp 0x12a0a0ee */
  goto L_12a0a0ee;
L_12a0a0d0:;
  /* 12a0a0d0 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12a0a0d3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a0d4 call 0x12a0a6f0 */
  push32(0x12a0a0d9u); f_12a0a6f0();
  /* 12a0a0d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a0dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a0e1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0a0e2 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12a0a0e8 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_12a0a0ee:;
  /* 12a0a0ee jmp 0x12a0a12f */
  goto L_12a0a12f;
L_12a0a0f0:;
  /* 12a0a0f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a0f3 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a0f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a0f8 je 0x12a0a115 */
  if (C.zf) goto L_12a0a115;
  /* 12a0a0fa lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 12a0a0fd push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a0fe call 0x12a0a6f0 */
  push32(0x12a0a103u); f_12a0a6f0();
  /* 12a0a103 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a106 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0a107 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12a0a10d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 12a0a113 jmp 0x12a0a12f */
  goto L_12a0a12f;
L_12a0a115:;
  /* 12a0a115 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12a0a118 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a119 call 0x12a0a6f0 */
  push32(0x12a0a11eu); f_12a0a6f0();
  /* 12a0a11e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a121 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a123 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 12a0a129 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_12a0a12f:;
  /* 12a0a12f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a132 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a135 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a137 je 0x12a0a177 */
  if (C.zf) goto L_12a0a177;
  /* 12a0a139 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a140 jg 0x12a0a177 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0a177;
  /* 12a0a142 jl 0x12a0a14d */
  if ((C.sf!=C.of)) goto L_12a0a14d;
  /* 12a0a144 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a14b jae 0x12a0a177 */
  if (!C.cf) goto L_12a0a177;
L_12a0a14d:;
  /* 12a0a14d mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12a0a153 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0a155 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12a0a15b adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a15e neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0a160 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12a0a166 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 12a0a16c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a16f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12a0a172 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0a175 jmp 0x12a0a18f */
  goto L_12a0a18f;
L_12a0a177:;
  /* 12a0a177 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 12a0a17d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12a0a183 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 12a0a189 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12a0a18f:;
  /* 12a0a18f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a192 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a198 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a19a jne 0x12a0a1b7 */
  if (!C.zf) goto L_12a0a1b7;
  /* 12a0a19c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12a0a1a2 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12a0a1a8 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a1ab mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12a0a1b1 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_12a0a1b7:;
  /* 12a0a1b7 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a1be jge 0x12a0a1cc */
  if ((C.sf==C.of)) goto L_12a0a1cc;
  /* 12a0a1c0 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 12a0a1ca jmp 0x12a0a1d5 */
  goto L_12a0a1d5;
L_12a0a1cc:;
  /* 12a0a1cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a1cf and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a1d2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0a1d5:;
  /* 12a0a1d5 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12a0a1db or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a1e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a1e3 jne 0x12a0a1ec */
  if (!C.zf) goto L_12a0a1ec;
  /* 12a0a1e5 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_12a0a1ec:;
  /* 12a0a1ec lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12a0a1ef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12a0a1f2:;
  /* 12a0a1f2 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12a0a1f8 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12a0a1fe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a201 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12a0a207 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a209 jg 0x12a0a21f */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0a21f;
  /* 12a0a20b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12a0a211 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a217 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0a219 je 0x12a0a2a0 */
  if (C.zf) goto L_12a0a2a0;
L_12a0a21f:;
  /* 12a0a21f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12a0a225 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0a226 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a227 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a228 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 12a0a22e push edx */
  push32((uint32_t)(EDX));
  /* 12a0a22f mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12a0a235 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a236 call 0x12a095b0 */
  push32(0x12a0a23bu); f_12a095b0();
  /* 12a0a23b add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a23e mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 12a0a244 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 12a0a24a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0a24b push edx */
  push32((uint32_t)(EDX));
  /* 12a0a24c push eax */
  push32((uint32_t)(EAX));
  /* 12a0a24d mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 12a0a253 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a254 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 12a0a25a push edx */
  push32((uint32_t)(EDX));
  /* 12a0a25b call 0x12a09540 */
  push32(0x12a0a260u); f_12a09540();
  /* 12a0a260 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 12a0a266 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 12a0a26c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a273 jle 0x12a0a287 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0a287;
  /* 12a0a275 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 12a0a27b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a281 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_12a0a287:;
  /* 12a0a287 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a28a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 12a0a290 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12a0a292 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a295 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a298 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a0a29b jmp 0x12a0a1f2 */
  goto L_12a0a1f2;
L_12a0a2a0:;
  /* 12a0a2a0 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 12a0a2a3 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a2a6 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a0a2a9 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a2ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a2af mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a0a2b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a2b5 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a2ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a2bc je 0x12a0a2e7 */
  if (C.zf) goto L_12a0a2e7;
  /* 12a0a2be mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a2c1 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0a2c4 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a2c7 jne 0x12a0a2cf */
  if (!C.zf) goto L_12a0a2cf;
  /* 12a0a2c9 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a2cd jne 0x12a0a2e7 */
  if (!C.zf) goto L_12a0a2e7;
L_12a0a2cf:;
  /* 12a0a2cf mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a2d2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a2d5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a0a2d8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a2db mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 12a0a2de mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0a2e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a2e4 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12a0a2e7:;
  /* 12a0a2e7 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a2ee jne 0x12a0a4c2 */
  if (!C.zf) goto L_12a0a4c2;
  /* 12a0a2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a2f7 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a2fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a2fc je 0x12a0a34d */
  if (C.zf) goto L_12a0a34d;
  /* 12a0a2fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a301 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a307 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0a309 je 0x12a0a31b */
  if (C.zf) goto L_12a0a31b;
  /* 12a0a30b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 12a0a312 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12a0a319 jmp 0x12a0a34d */
  goto L_12a0a34d;
L_12a0a31b:;
  /* 12a0a31b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a31e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a321 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a323 je 0x12a0a335 */
  if (C.zf) goto L_12a0a335;
  /* 12a0a325 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 12a0a32c mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12a0a333 jmp 0x12a0a34d */
  goto L_12a0a34d;
L_12a0a335:;
  /* 12a0a335 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a338 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a33b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a33d je 0x12a0a34d */
  if (C.zf) goto L_12a0a34d;
  /* 12a0a33f mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 12a0a346 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_12a0a34d:;
  /* 12a0a34d mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12a0a353 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a356 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a359 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 12a0a35f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a362 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a365 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a367 jne 0x12a0a385 */
  if (!C.zf) goto L_12a0a385;
  /* 12a0a369 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a36f push eax */
  push32((uint32_t)(EAX));
  /* 12a0a370 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a373 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a374 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12a0a37a push edx */
  push32((uint32_t)(EDX));
  /* 12a0a37b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12a0a37d call 0x12a0a660 */
  push32(0x12a0a382u); f_12a0a660();
  /* 12a0a382 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0a385:;
  /* 12a0a385 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a38b push eax */
  push32((uint32_t)(EAX));
  /* 12a0a38c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a38f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a390 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0a393 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a394 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 12a0a39a push eax */
  push32((uint32_t)(EAX));
  /* 12a0a39b call 0x12a0a6a0 */
  push32(0x12a0a3a0u); f_12a0a6a0();
  /* 12a0a3a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a3a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a3a6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a3a9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0a3ab je 0x12a0a3d3 */
  if (C.zf) goto L_12a0a3d3;
  /* 12a0a3ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a3b0 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a3b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a3b5 jne 0x12a0a3d3 */
  if (!C.zf) goto L_12a0a3d3;
  /* 12a0a3b7 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a3bd push eax */
  push32((uint32_t)(EAX));
  /* 12a0a3be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a3c1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a3c2 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12a0a3c8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a3c9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12a0a3cb call 0x12a0a660 */
  push32(0x12a0a3d0u); f_12a0a660();
  /* 12a0a3d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0a3d3:;
  /* 12a0a3d3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a3d7 je 0x12a0a481 */
  if (C.zf) goto L_12a0a481;
  /* 12a0a3dd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a3e1 jle 0x12a0a481 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0a481;
  /* 12a0a3e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a3ea mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 12a0a3f0 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0a3f3 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_12a0a3f9:;
  /* 12a0a3f9 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 12a0a3ff mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 12a0a405 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a408 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 12a0a40e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a410 je 0x12a0a47f */
  if (C.zf) goto L_12a0a47f;
  /* 12a0a412 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 12a0a418 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 12a0a41b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 12a0a422 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 12a0a429 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a42a lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 12a0a430 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a431 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 12a0a437 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a43a mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 12a0a440 call 0x12a0b810 */
  push32(0x12a0a445u); f_12a0b810();
  /* 12a0a445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a448 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 12a0a44e cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a455 jg 0x12a0a459 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0a459;
  /* 12a0a457 jmp 0x12a0a47f */
  goto L_12a0a47f;
L_12a0a459:;
  /* 12a0a459 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a45f push eax */
  push32((uint32_t)(EAX));
  /* 12a0a460 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a463 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a464 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 12a0a46a push edx */
  push32((uint32_t)(EDX));
  /* 12a0a46b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 12a0a471 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a472 call 0x12a0a6a0 */
  push32(0x12a0a477u); f_12a0a6a0();
  /* 12a0a477 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a47a jmp 0x12a0a3f9 */
  goto L_12a0a3f9;
L_12a0a47f:;
  /* 12a0a47f jmp 0x12a0a49c */
  goto L_12a0a49c;
L_12a0a481:;
  /* 12a0a481 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a487 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a488 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a48b push edx */
  push32((uint32_t)(EDX));
  /* 12a0a48c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0a48f push eax */
  push32((uint32_t)(EAX));
  /* 12a0a490 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0a493 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a494 call 0x12a0a6a0 */
  push32(0x12a0a499u); f_12a0a6a0();
  /* 12a0a499 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0a49c:;
  /* 12a0a49c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a49f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a4a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0a4a4 je 0x12a0a4c2 */
  if (C.zf) goto L_12a0a4c2;
  /* 12a0a4a6 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 12a0a4ac push eax */
  push32((uint32_t)(EAX));
  /* 12a0a4ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a4b0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a4b1 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 12a0a4b7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a4b8 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12a0a4ba call 0x12a0a660 */
  push32(0x12a0a4bfu); f_12a0a660();
  /* 12a0a4bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0a4c2:;
  /* 12a0a4c2 jmp 0x12a098d4 */
  goto L_12a098d4;
L_12a0a4c7:;
  /* 12a0a4c7 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12a0a4cd pop edi */
  EDI = (pop32());
  /* 12a0a4ce pop esi */
  ESI = (pop32());
  /* 12a0a4cf pop ebx */
  EBX = (pop32());
  /* 12a0a4d0 mov esp, ebp */
  ESP = (EBP);
  /* 12a0a4d2 pop ebp */
  EBP = (pop32());
  /* 12a0a4d3 ret  */
  ESPCHK(0x12a098b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5e0 @ 0x12a0a5e0 (119 bytes, 44 insns) */
void f_12a0a5e0(void) {
  FTRACE(0x12a0a5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a5e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a5e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a0a5ea sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a5ed mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a5f0 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12a0a5f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a5f6 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a5fa jl 0x12a0a622 */
  if ((C.sf!=C.of)) goto L_12a0a622;
  /* 12a0a5fc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a5ff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0a601 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12a0a604 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12a0a606 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12a0a60a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0a610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0a613 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a616 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0a618 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a61b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a61e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a0a620 jmp 0x12a0a635 */
  goto L_12a0a635;
L_12a0a622:;
  /* 12a0a622 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a625 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a626 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a629 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a62a call 0x12a09630 */
  push32(0x12a0a62fu); f_12a09630();
  /* 12a0a62f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a632 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0a635:;
  /* 12a0a635 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a639 jne 0x12a0a646 */
  if (!C.zf) goto L_12a0a646;
  /* 12a0a63b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a63e mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12a0a644 jmp 0x12a0a653 */
  goto L_12a0a653;
L_12a0a646:;
  /* 12a0a646 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a649 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0a64b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a64e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a651 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12a0a653:;
  /* 12a0a653 mov esp, ebp */
  ESP = (EBP);
  /* 12a0a655 pop ebp */
  EBP = (pop32());
  /* 12a0a656 ret  */
  ESPCHK(0x12a0a5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a660 @ 0x12a0a660 (53 bytes, 23 insns) */
void f_12a0a660(void) {
  FTRACE(0x12a0a660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a660 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a661 mov ebp, esp */
  EBP = (ESP);
L_12a0a663:;
  /* 12a0a663 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a666 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a669 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a66c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12a0a66f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a671 jle 0x12a0a693 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0a693;
  /* 12a0a673 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0a676 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a677 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a67a push eax */
  push32((uint32_t)(EAX));
  /* 12a0a67b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a67e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a67f call 0x12a0a5e0 */
  push32(0x12a0a684u); f_12a0a5e0();
  /* 12a0a684 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a687 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0a68a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a68d jne 0x12a0a691 */
  if (!C.zf) goto L_12a0a691;
  /* 12a0a68f jmp 0x12a0a693 */
  goto L_12a0a693;
L_12a0a691:;
  /* 12a0a691 jmp 0x12a0a663 */
  goto L_12a0a663;
L_12a0a693:;
  /* 12a0a693 pop ebp */
  EBP = (pop32());
  /* 12a0a694 ret  */
  ESPCHK(0x12a0a660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x12a0a6a0 (74 bytes, 31 insns) */
void f_12a0a6a0(void) {
  FTRACE(0x12a0a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a6a3 push ecx */
  push32((uint32_t)(ECX));
L_12a0a6a4:;
  /* 12a0a6a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a6a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a6aa sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a6ad mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12a0a6b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0a6b2 jle 0x12a0a6e6 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0a6e6;
  /* 12a0a6b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0a6b7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0a6b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a6bb push eax */
  push32((uint32_t)(EAX));
  /* 12a0a6bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a6bf movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0a6c2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0a6c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a6c8 push eax */
  push32((uint32_t)(EAX));
  /* 12a0a6c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a6cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a6cf mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a0a6d2 call 0x12a0a5e0 */
  push32(0x12a0a6d7u); f_12a0a5e0();
  /* 12a0a6d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a6da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0a6dd cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a6e0 jne 0x12a0a6e4 */
  if (!C.zf) goto L_12a0a6e4;
  /* 12a0a6e2 jmp 0x12a0a6e6 */
  goto L_12a0a6e6;
L_12a0a6e4:;
  /* 12a0a6e4 jmp 0x12a0a6a4 */
  goto L_12a0a6a4;
L_12a0a6e6:;
  /* 12a0a6e6 mov esp, ebp */
  ESP = (EBP);
  /* 12a0a6e8 pop ebp */
  EBP = (pop32());
  /* 12a0a6e9 ret  */
  ESPCHK(0x12a0a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6f0 @ 0x12a0a6f0 (26 bytes, 12 insns) */
void f_12a0a6f0(void) {
  FTRACE(0x12a0a6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a6f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a6f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a6f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a6f8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a6fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a6fe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a0a700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a703 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a705 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a0a708 pop ebp */
  EBP = (pop32());
  /* 12a0a709 ret  */
  ESPCHK(0x12a0a6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a710 @ 0x12a0a710 (31 bytes, 14 insns) */
void f_12a0a710(void) {
  FTRACE(0x12a0a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a710 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a711 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a713 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a716 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a718 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a71b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a71e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a0a720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a723 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a725 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a728 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12a0a72a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0a72d pop ebp */
  EBP = (pop32());
  /* 12a0a72e ret  */
  ESPCHK(0x12a0a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a730 @ 0x12a0a730 (27 bytes, 12 insns) */
void f_12a0a730(void) {
  FTRACE(0x12a0a730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a730 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a731 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a736 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a738 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a73b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a73e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12a0a740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a743 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0a745 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 12a0a749 pop ebp */
  EBP = (pop32());
  /* 12a0a74a ret  */
  ESPCHK(0x12a0a730u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x12a0a750 (145 bytes, 42 insns) */
void f_12a0a750(void) {
  FTRACE(0x12a0a750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a750 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a751 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a753 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0a754 call 0x12a0a800 */
  push32(0x12a0a759u); f_12a0a800();
  /* 12a0a759 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a75c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a0a75e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0a765 jmp 0x12a0a770 */
  goto L_12a0a770;
L_12a0a767:;
  /* 12a0a767 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a76a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a76d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0a770:;
  /* 12a0a770 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a774 jae 0x12a0a79a */
  if (!C.cf) goto L_12a0a79a;
  /* 12a0a776 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a77c cmp ecx, dword ptr [eax*8 + 0x12a2cfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x12a2cfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a783 jne 0x12a0a798 */
  if (!C.zf) goto L_12a0a798;
  /* 12a0a785 call 0x12a0a7f0 */
  push32(0x12a0a78au); f_12a0a7f0();
  /* 12a0a78a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0a78d mov ecx, dword ptr [edx*8 + 0x12a2cfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x12a2cfbc)));
  /* 12a0a794 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a0a796 jmp 0x12a0a7dd */
  goto L_12a0a7dd;
L_12a0a798:;
  /* 12a0a798 jmp 0x12a0a767 */
  goto L_12a0a767;
L_12a0a79a:;
  /* 12a0a79a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a79e jb 0x12a0a7b3 */
  if (C.cf) goto L_12a0a7b3;
  /* 12a0a7a0 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a7a4 ja 0x12a0a7b3 */
  if ((!C.cf&&!C.zf)) goto L_12a0a7b3;
  /* 12a0a7a6 call 0x12a0a7f0 */
  push32(0x12a0a7abu); f_12a0a7f0();
  /* 12a0a7ab mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 12a0a7b1 jmp 0x12a0a7dd */
  goto L_12a0a7dd;
L_12a0a7b3:;
  /* 12a0a7b3 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a7ba jb 0x12a0a7d2 */
  if (C.cf) goto L_12a0a7d2;
  /* 12a0a7bc cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a7c3 ja 0x12a0a7d2 */
  if ((!C.cf&&!C.zf)) goto L_12a0a7d2;
  /* 12a0a7c5 call 0x12a0a7f0 */
  push32(0x12a0a7cau); f_12a0a7f0();
  /* 12a0a7ca mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 12a0a7d0 jmp 0x12a0a7dd */
  goto L_12a0a7dd;
L_12a0a7d2:;
  /* 12a0a7d2 call 0x12a0a7f0 */
  push32(0x12a0a7d7u); f_12a0a7f0();
  /* 12a0a7d7 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_12a0a7dd:;
  /* 12a0a7dd mov esp, ebp */
  ESP = (EBP);
  /* 12a0a7df pop ebp */
  EBP = (pop32());
  /* 12a0a7e0 ret  */
  ESPCHK(0x12a0a750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7f0 @ 0x12a0a7f0 (13 bytes, 6 insns) */
void f_12a0a7f0(void) {
  FTRACE(0x12a0a7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a7f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a7f3 call 0x12a02360 */
  push32(0x12a0a7f8u); f_12a02360();
  /* 12a0a7f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a7fb pop ebp */
  EBP = (pop32());
  /* 12a0a7fc ret  */
  ESPCHK(0x12a0a7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x12a0a800 (13 bytes, 6 insns) */
void f_12a0a800(void) {
  FTRACE(0x12a0a800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a800 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a801 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a803 call 0x12a02360 */
  push32(0x12a0a808u); f_12a02360();
  /* 12a0a808 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a80b pop ebp */
  EBP = (pop32());
  /* 12a0a80c ret  */
  ESPCHK(0x12a0a800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a810 @ 0x12a0a810 (664 bytes, 259 insns) [15 switch table(s)] */
void f_12a0a810(void) {
  FTRACE(0x12a0a810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0a810 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0a811 mov ebp, esp */
  EBP = (ESP);
  /* 12a0a813 push edi */
  push32((uint32_t)(EDI));
  /* 12a0a814 push esi */
  push32((uint32_t)(ESI));
  /* 12a0a815 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0a818 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0a81b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a81e mov eax, ecx */
  EAX = (ECX);
  /* 12a0a820 mov edx, ecx */
  EDX = (ECX);
  /* 12a0a822 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a824 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a826 jbe 0x12a0a830 */
  if ((C.cf||C.zf)) goto L_12a0a830;
  /* 12a0a828 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a82a jb 0x12a0a9a8 */
  if (C.cf) goto L_12a0a9a8;
L_12a0a830:;
  /* 12a0a830 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a0a836 jne 0x12a0a84c */
  if (!C.zf) goto L_12a0a84c;
  /* 12a0a838 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0a83b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a83e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a841 jb 0x12a0a86c */
  if (C.cf) goto L_12a0a86c;
  /* 12a0a843 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0a845 jmp dword ptr [edx*4 + 0x12a0a958] */
  switch (EDX) {
    case 0: goto L_12a0a968;
    case 1: goto L_12a0a970;
    case 2: goto L_12a0a97c;
    case 3: goto L_12a0a990;
    default: x86_unimpl("switch@0x12a0a845 out of table"); return;
  }
L_12a0a84c:;
  /* 12a0a84c mov eax, edi */
  EAX = (EDI);
  /* 12a0a84e mov edx, 3 */
  EDX = (0x3u);
  /* 12a0a853 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a856 jb 0x12a0a864 */
  if (C.cf) goto L_12a0a864;
  /* 12a0a858 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a85b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a85d jmp dword ptr [eax*4 + 0x12a0a870] */
  switch (EAX) {
    case 1: goto L_12a0a880;
    case 2: goto L_12a0a8ac;
    case 3: goto L_12a0a8d0;
    default: x86_unimpl("switch@0x12a0a85d out of table"); return;
  }
L_12a0a864:;
  /* 12a0a864 jmp dword ptr [ecx*4 + 0x12a0a968] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x12a0a968)))); return;
  /* 12a0a86b nop  */
  /* nop */
L_12a0a86c:;
  /* 12a0a86c jmp dword ptr [ecx*4 + 0x12a0a8ec] */
  switch (ECX) {
    case 0: goto L_12a0a94f;
    case 1: goto L_12a0a93c;
    case 2: goto L_12a0a934;
    case 3: goto L_12a0a92c;
    case 4: goto L_12a0a924;
    case 5: goto L_12a0a91c;
    case 6: goto L_12a0a914;
    case 7: goto L_12a0a90c;
    default: x86_unimpl("switch@0x12a0a86c out of table"); return;
  }
  /* 12a0a873 nop  */
  /* nop */
L_12a0a880:;
  /* 12a0a880 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a882 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a884 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a886 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0a889 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0a88c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0a88f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0a892 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0a895 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a898 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a89b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a89e jb 0x12a0a86c */
  if (C.cf) goto L_12a0a86c;
  /* 12a0a8a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0a8a2 jmp dword ptr [edx*4 + 0x12a0a958] */
  switch (EDX) {
    case 0: goto L_12a0a968;
    case 1: goto L_12a0a970;
    case 2: goto L_12a0a97c;
    case 3: goto L_12a0a990;
    default: x86_unimpl("switch@0x12a0a8a2 out of table"); return;
  }
  /* 12a0a8a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0a8ac:;
  /* 12a0a8ac and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a8ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a8b0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a8b2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0a8b5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0a8b8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0a8bb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a8be add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a8c1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a8c4 jb 0x12a0a86c */
  if (C.cf) goto L_12a0a86c;
  /* 12a0a8c6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0a8c8 jmp dword ptr [edx*4 + 0x12a0a958] */
  switch (EDX) {
    case 0: goto L_12a0a968;
    case 1: goto L_12a0a970;
    case 2: goto L_12a0a97c;
    case 3: goto L_12a0a990;
    default: x86_unimpl("switch@0x12a0a8c8 out of table"); return;
  }
  /* 12a0a8cf nop  */
  /* nop */
L_12a0a8d0:;
  /* 12a0a8d0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a8d2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a8d4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a8d6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a0a8d7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0a8da inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12a0a8db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a8de jb 0x12a0a86c */
  if (C.cf) goto L_12a0a86c;
  /* 12a0a8e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0a8e2 jmp dword ptr [edx*4 + 0x12a0a958] */
  switch (EDX) {
    case 0: goto L_12a0a968;
    case 1: goto L_12a0a970;
    case 2: goto L_12a0a97c;
    case 3: goto L_12a0a990;
    default: x86_unimpl("switch@0x12a0a8e2 out of table"); return;
  }
  /* 12a0a8e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0a90c:;
  /* 12a0a90c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12a0a910 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12a0a914:;
  /* 12a0a914 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12a0a918 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_12a0a91c:;
  /* 12a0a91c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 12a0a920 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_12a0a924:;
  /* 12a0a924 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 12a0a928 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_12a0a92c:;
  /* 12a0a92c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 12a0a930 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_12a0a934:;
  /* 12a0a934 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 12a0a938 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_12a0a93c:;
  /* 12a0a93c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 12a0a940 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 12a0a944 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12a0a94b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0a94d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12a0a94f:;
  /* 12a0a94f jmp dword ptr [edx*4 + 0x12a0a958] */
  switch (EDX) {
    case 0: goto L_12a0a968;
    case 1: goto L_12a0a970;
    case 2: goto L_12a0a97c;
    case 3: goto L_12a0a990;
    default: x86_unimpl("switch@0x12a0a94f out of table"); return;
  }
  /* 12a0a956 mov edi, edi */
  EDI = (EDI);
L_12a0a968:;
  /* 12a0a968 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a96b pop esi */
  ESI = (pop32());
  /* 12a0a96c pop edi */
  EDI = (pop32());
  /* 12a0a96d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0a96e ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0a96f nop  */
  /* nop */
L_12a0a970:;
  /* 12a0a970 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a972 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a974 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a977 pop esi */
  ESI = (pop32());
  /* 12a0a978 pop edi */
  EDI = (pop32());
  /* 12a0a979 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0a97a ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0a97b nop  */
  /* nop */
L_12a0a97c:;
  /* 12a0a97c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a97e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a980 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0a983 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0a986 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a989 pop esi */
  ESI = (pop32());
  /* 12a0a98a pop edi */
  EDI = (pop32());
  /* 12a0a98b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0a98c ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0a98d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0a990:;
  /* 12a0a990 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0a992 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12a0a994 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0a997 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0a99a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0a99d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0a9a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0a9a3 pop esi */
  ESI = (pop32());
  /* 12a0a9a4 pop edi */
  EDI = (pop32());
  /* 12a0a9a5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0a9a6 ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0a9a7 nop  */
  /* nop */
L_12a0a9a8:;
  /* 12a0a9a8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 12a0a9ac lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12a0a9b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12a0a9b6 jne 0x12a0a9dc */
  if (!C.zf) goto L_12a0a9dc;
  /* 12a0a9b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0a9bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0a9be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a9c1 jb 0x12a0a9d0 */
  if (C.cf) goto L_12a0a9d0;
  /* 12a0a9c3 std  */
  C.df=1;
  /* 12a0a9c4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0a9c6 cld  */
  C.df=0;
  /* 12a0a9c7 jmp dword ptr [edx*4 + 0x12a0aaf0] */
  switch (EDX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0a9c7 out of table"); return;
  }
  /* 12a0a9ce mov edi, edi */
  EDI = (EDI);
L_12a0a9d0:;
  /* 12a0a9d0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0a9d2 jmp dword ptr [ecx*4 + 0x12a0aaa0] */
  switch (ECX) {
    case 0: goto L_12a0aae7;
    default: x86_unimpl("switch@0x12a0a9d2 out of table"); return;
  }
  /* 12a0a9d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0a9dc:;
  /* 12a0a9dc mov eax, edi */
  EAX = (EDI);
  /* 12a0a9de mov edx, 3 */
  EDX = (0x3u);
  /* 12a0a9e3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0a9e6 jb 0x12a0a9f4 */
  if (C.cf) goto L_12a0a9f4;
  /* 12a0a9e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0a9eb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0a9ed jmp dword ptr [eax*4 + 0x12a0a9f8] */
  switch (EAX) {
    case 1: goto L_12a0aa08;
    case 2: goto L_12a0aa28;
    case 3: goto L_12a0aa50;
    default: x86_unimpl("switch@0x12a0a9ed out of table"); return;
  }
L_12a0a9f4:;
  /* 12a0a9f4 jmp dword ptr [ecx*4 + 0x12a0aaf0] */
  switch (ECX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0a9f4 out of table"); return;
  }
  /* 12a0a9fb nop  */
  /* nop */
L_12a0aa08:;
  /* 12a0aa08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0aa0b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0aa0d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0aa10 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12a0aa11 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0aa14 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12a0aa15 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aa18 jb 0x12a0a9d0 */
  if (C.cf) goto L_12a0a9d0;
  /* 12a0aa1a std  */
  C.df=1;
  /* 12a0aa1b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0aa1d cld  */
  C.df=0;
  /* 12a0aa1e jmp dword ptr [edx*4 + 0x12a0aaf0] */
  switch (EDX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0aa1e out of table"); return;
  }
  /* 12a0aa25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0aa28:;
  /* 12a0aa28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0aa2b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0aa2d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0aa30 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0aa33 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0aa36 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0aa39 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0aa3c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0aa3f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aa42 jb 0x12a0a9d0 */
  if (C.cf) goto L_12a0a9d0;
  /* 12a0aa44 std  */
  C.df=1;
  /* 12a0aa45 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0aa47 cld  */
  C.df=0;
  /* 12a0aa48 jmp dword ptr [edx*4 + 0x12a0aaf0] */
  switch (EDX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0aa48 out of table"); return;
  }
  /* 12a0aa4f nop  */
  /* nop */
L_12a0aa50:;
  /* 12a0aa50 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0aa53 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0aa55 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0aa58 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0aa5b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0aa5e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0aa61 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12a0aa64 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0aa67 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0aa6a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0aa6d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aa70 jb 0x12a0a9d0 */
  if (C.cf) goto L_12a0a9d0;
  /* 12a0aa76 std  */
  C.df=1;
  /* 12a0aa77 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12a0aa79 cld  */
  C.df=0;
  /* 12a0aa7a jmp dword ptr [edx*4 + 0x12a0aaf0] */
  switch (EDX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0aa7a out of table"); return;
  }
  /* 12a0aa81 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12a0aa84 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 12a0aa85 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12a0aa86 mov al, byte ptr [0xa0aaac12] */
  AL = (r8((uint32_t)(0xa0aaac12)));
  /* 12a0aa8b adc dh, byte ptr [edx + ebp*4 - 0x5543ed60] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDX + EBP*4 + -0x5543ed60))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0aa92 mov al, byte ptr [0xa0aac412] */
  AL = (r8((uint32_t)(0xa0aac412)));
  /* 12a0aa97 adc cl, ah */
  { uint32_t _a=(CL),_b=(AH),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0aa99 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 12a0aa9a mov al, byte ptr [0xa0aad412] */
  AL = (r8((uint32_t)(0xa0aad412)));
  /* 12a0aaa4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12a0aaa8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 12a0aaac mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12a0aab0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12a0aab4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12a0aab8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 12a0aabc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12a0aac0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12a0aac4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12a0aac8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 12a0aacc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12a0aad0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12a0aad4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12a0aad8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 12a0aadc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12a0aae3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0aae5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12a0aae7:;
  /* 12a0aae7 jmp dword ptr [edx*4 + 0x12a0aaf0] */
  switch (EDX) {
    case 0: goto L_12a0ab00;
    case 1: goto L_12a0ab08;
    case 2: goto L_12a0ab18;
    case 3: goto L_12a0ab2c;
    default: x86_unimpl("switch@0x12a0aae7 out of table"); return;
  }
  /* 12a0aaee mov edi, edi */
  EDI = (EDI);
L_12a0ab00:;
  /* 12a0ab00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ab03 pop esi */
  ESI = (pop32());
  /* 12a0ab04 pop edi */
  EDI = (pop32());
  /* 12a0ab05 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0ab06 ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0ab07 nop  */
  /* nop */
L_12a0ab08:;
  /* 12a0ab08 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0ab0b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0ab0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ab11 pop esi */
  ESI = (pop32());
  /* 12a0ab12 pop edi */
  EDI = (pop32());
  /* 12a0ab13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0ab14 ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0ab15 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0ab18:;
  /* 12a0ab18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0ab1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0ab1e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0ab21 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0ab24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ab27 pop esi */
  ESI = (pop32());
  /* 12a0ab28 pop edi */
  EDI = (pop32());
  /* 12a0ab29 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0ab2a ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
  /* 12a0ab2b nop  */
  /* nop */
L_12a0ab2c:;
  /* 12a0ab2c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 12a0ab2f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12a0ab32 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 12a0ab35 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12a0ab38 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12a0ab3b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12a0ab3e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ab41 pop esi */
  ESI = (pop32());
  /* 12a0ab42 pop edi */
  EDI = (pop32());
  /* 12a0ab43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0ab44 ret  */
  ESPCHK(0x12a0a810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab50 @ 0x12a0ab50 (421 bytes, 148 insns) */
void f_12a0ab50(void) {
  FTRACE(0x12a0ab50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ab50 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ab51 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ab53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a0ab55 push 0x12a29f10 */
  push32((uint32_t)(0x12a29f10u));
  /* 12a0ab5a push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a0ab5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a0ab65 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ab66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a0ab6d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ab70 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0ab71 push esi */
  push32((uint32_t)(ESI));
  /* 12a0ab72 push edi */
  push32((uint32_t)(EDI));
  /* 12a0ab73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a0ab76 cmp dword ptr [0x12a2e67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ab7d jne 0x12a0abce */
  if (!C.zf) goto L_12a0abce;
  /* 12a0ab7f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12a0ab82 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ab83 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ab85 push 0x12a29f0c */
  push32((uint32_t)(0x12a29f0cu));
  /* 12a0ab8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ab8c call dword ptr [0x12a30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30314))), 0x12a0ab92u);
  /* 12a0ab92 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ab94 je 0x12a0aba2 */
  if (C.zf) goto L_12a0aba2;
  /* 12a0ab96 mov dword ptr [0x12a2e67c], 1 */
  w32((uint32_t)(0x12a2e67c), (0x1u));
  /* 12a0aba0 jmp 0x12a0abce */
  goto L_12a0abce;
L_12a0aba2:;
  /* 12a0aba2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12a0aba5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0aba6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0aba8 push 0x12a29f08 */
  push32((uint32_t)(0x12a29f08u));
  /* 12a0abad push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0abaf push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0abb1 call dword ptr [0x12a30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30310))), 0x12a0abb7u);
  /* 12a0abb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0abb9 je 0x12a0abc7 */
  if (C.zf) goto L_12a0abc7;
  /* 12a0abbb mov dword ptr [0x12a2e67c], 2 */
  w32((uint32_t)(0x12a2e67c), (0x2u));
  /* 12a0abc5 jmp 0x12a0abce */
  goto L_12a0abce;
L_12a0abc7:;
  /* 12a0abc7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0abc9 jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0abce:;
  /* 12a0abce cmp dword ptr [0x12a2e67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0abd5 jne 0x12a0ac05 */
  if (!C.zf) goto L_12a0ac05;
  /* 12a0abd7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0abdb jne 0x12a0abe6 */
  if (!C.zf) goto L_12a0abe6;
  /* 12a0abdd mov edx, dword ptr [0x12a2e688] */
  EDX = (r32((uint32_t)(0x12a2e688)));
  /* 12a0abe3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12a0abe6:;
  /* 12a0abe6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0abe9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0abea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0abed push ecx */
  push32((uint32_t)(ECX));
  /* 12a0abee mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0abf1 push edx */
  push32((uint32_t)(EDX));
  /* 12a0abf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0abf5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0abf6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a0abf9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0abfa call dword ptr [0x12a30310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30310))), 0x12a0ac00u);
  /* 12a0ac00 jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0ac05:;
  /* 12a0ac05 cmp dword ptr [0x12a2e67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ac0c jne 0x12a0acf6 */
  if (!C.zf) goto L_12a0acf6;
  /* 12a0ac12 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ac16 jne 0x12a0ac21 */
  if (!C.zf) goto L_12a0ac21;
  /* 12a0ac18 mov edx, dword ptr [0x12a2e698] */
  EDX = (r32((uint32_t)(0x12a2e698)));
  /* 12a0ac1e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_12a0ac21:;
  /* 12a0ac21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ac23 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ac25 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ac28 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ac29 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ac2c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ac2d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a0ac30 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ac32 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ac34 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ac37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ac3a push edx */
  push32((uint32_t)(EDX));
  /* 12a0ac3b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0ac3e push eax */
  push32((uint32_t)(EAX));
  /* 12a0ac3f call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a0ac45u);
  /* 12a0ac45 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a0ac48 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ac4c jne 0x12a0ac55 */
  if (!C.zf) goto L_12a0ac55;
  /* 12a0ac4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ac50 jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0ac55:;
  /* 12a0ac55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0ac5c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0ac5f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0ac61 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ac64 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a0ac66 call 0x12a05ac0 */
  push32(0x12a0ac6bu); f_12a05ac0();
  /* 12a0ac6b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 12a0ac6e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a0ac71 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0ac74 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a0ac77 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0ac7a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12a0ac7c push edx */
  push32((uint32_t)(EDX));
  /* 12a0ac7d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ac7f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0ac82 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ac83 call 0x12a06690 */
  push32(0x12a0ac88u); f_12a06690();
  /* 12a0ac88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ac8b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a0ac92 jmp 0x12a0acab */
  goto L_12a0acab;
  /* 12a0ac94 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ac99 ret  */
  ESPCHK(0x12a0ab50u, _esp0);
  ESP += 4; return;
  /* 12a0ac9a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0ac9d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a0aca4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0acab:;
  /* 12a0acab cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0acaf jne 0x12a0acb5 */
  if (!C.zf) goto L_12a0acb5;
  /* 12a0acb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0acb3 jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0acb5:;
  /* 12a0acb5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0acb8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0acb9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0acbc push edx */
  push32((uint32_t)(EDX));
  /* 12a0acbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0acc0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0acc1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0acc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0acc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0acc7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0acca push edx */
  push32((uint32_t)(EDX));
  /* 12a0accb call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a0acd1u);
  /* 12a0acd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a0acd4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0acd8 jne 0x12a0acde */
  if (!C.zf) goto L_12a0acde;
  /* 12a0acda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0acdc jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0acde:;
  /* 12a0acde mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ace1 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ace2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0ace5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ace6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0ace9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0acea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0aced push eax */
  push32((uint32_t)(EAX));
  /* 12a0acee call dword ptr [0x12a30314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30314))), 0x12a0acf4u);
  /* 12a0acf4 jmp 0x12a0acf8 */
  goto L_12a0acf8;
L_12a0acf6:;
  /* 12a0acf6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0acf8:;
  /* 12a0acf8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 12a0acfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0acfe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a0ad05 pop edi */
  EDI = (pop32());
  /* 12a0ad06 pop esi */
  ESI = (pop32());
  /* 12a0ad07 pop ebx */
  EBX = (pop32());
  /* 12a0ad08 mov esp, ebp */
  ESP = (EBP);
  /* 12a0ad0a pop ebp */
  EBP = (pop32());
  /* 12a0ad0b ret  */
  ESPCHK(0x12a0ab50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad10 @ 0x12a0ad10 (727 bytes, 263 insns) */
void f_12a0ad10(void) {
  FTRACE(0x12a0ad10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ad10 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ad11 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ad13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12a0ad15 push 0x12a29f20 */
  push32((uint32_t)(0x12a29f20u));
  /* 12a0ad1a push 0x12a0ba28 */
  push32((uint32_t)(0x12a0ba28u));
  /* 12a0ad1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12a0ad25 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ad26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12a0ad2d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ad30 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0ad31 push esi */
  push32((uint32_t)(ESI));
  /* 12a0ad32 push edi */
  push32((uint32_t)(EDI));
  /* 12a0ad33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a0ad36 cmp dword ptr [0x12a2e6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ad3d jne 0x12a0ad96 */
  if (!C.zf) goto L_12a0ad96;
  /* 12a0ad3f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad41 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad43 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ad45 push 0x12a29f0c */
  push32((uint32_t)(0x12a29f0cu));
  /* 12a0ad4a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a0ad4f push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad51 call dword ptr [0x12a3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3031c))), 0x12a0ad57u);
  /* 12a0ad57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ad59 je 0x12a0ad67 */
  if (C.zf) goto L_12a0ad67;
  /* 12a0ad5b mov dword ptr [0x12a2e6a0], 1 */
  w32((uint32_t)(0x12a2e6a0), (0x1u));
  /* 12a0ad65 jmp 0x12a0ad96 */
  goto L_12a0ad96;
L_12a0ad67:;
  /* 12a0ad67 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad69 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad6b push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ad6d push 0x12a29f08 */
  push32((uint32_t)(0x12a29f08u));
  /* 12a0ad72 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a0ad77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ad79 call dword ptr [0x12a30318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30318))), 0x12a0ad7fu);
  /* 12a0ad7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ad81 je 0x12a0ad8f */
  if (C.zf) goto L_12a0ad8f;
  /* 12a0ad83 mov dword ptr [0x12a2e6a0], 2 */
  w32((uint32_t)(0x12a2e6a0), (0x2u));
  /* 12a0ad8d jmp 0x12a0ad96 */
  goto L_12a0ad96;
L_12a0ad8f:;
  /* 12a0ad8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ad91 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0ad96:;
  /* 12a0ad96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ad9a jle 0x12a0adaf */
  if ((C.zf||C.sf!=C.of)) goto L_12a0adaf;
  /* 12a0ad9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ad9f push eax */
  push32((uint32_t)(EAX));
  /* 12a0ada0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ada3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ada4 call 0x12a0b020 */
  push32(0x12a0ada9u); f_12a0b020();
  /* 12a0ada9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0adac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12a0adaf:;
  /* 12a0adaf cmp dword ptr [0x12a2e6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0adb6 jne 0x12a0addb */
  if (!C.zf) goto L_12a0addb;
  /* 12a0adb8 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a0adbb push edx */
  push32((uint32_t)(EDX));
  /* 12a0adbc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0adbf push eax */
  push32((uint32_t)(EAX));
  /* 12a0adc0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0adc3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0adc4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0adc7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0adc8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0adcb push eax */
  push32((uint32_t)(EAX));
  /* 12a0adcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0adcf push ecx */
  push32((uint32_t)(ECX));
  /* 12a0add0 call dword ptr [0x12a30318] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30318))), 0x12a0add6u);
  /* 12a0add6 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0addb:;
  /* 12a0addb cmp dword ptr [0x12a2e6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ade2 jne 0x12a0afff */
  if (!C.zf) goto L_12a0afff;
  /* 12a0ade8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0adec jne 0x12a0adf7 */
  if (!C.zf) goto L_12a0adf7;
  /* 12a0adee mov edx, dword ptr [0x12a2e698] */
  EDX = (r32((uint32_t)(0x12a2e698)));
  /* 12a0adf4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_12a0adf7:;
  /* 12a0adf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0adf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0adfb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0adfe push eax */
  push32((uint32_t)(EAX));
  /* 12a0adff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ae02 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ae03 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 12a0ae06 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ae08 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ae0a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ae0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ae10 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ae11 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a0ae14 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ae15 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a0ae1bu);
  /* 12a0ae1b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a0ae1e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ae22 jne 0x12a0ae2b */
  if (!C.zf) goto L_12a0ae2b;
  /* 12a0ae24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ae26 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0ae2b:;
  /* 12a0ae2b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0ae32 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0ae35 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0ae37 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ae3a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a0ae3c call 0x12a05ac0 */
  push32(0x12a0ae41u); f_12a05ac0();
  /* 12a0ae41 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12a0ae44 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a0ae47 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0ae4a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a0ae4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a0ae54 jmp 0x12a0ae6d */
  goto L_12a0ae6d;
  /* 12a0ae56 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ae5b ret  */
  ESPCHK(0x12a0ad10u, _esp0);
  ESP += 4; return;
  /* 12a0ae5c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0ae5f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12a0ae66 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0ae6d:;
  /* 12a0ae6d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ae71 jne 0x12a0ae7a */
  if (!C.zf) goto L_12a0ae7a;
  /* 12a0ae73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ae75 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0ae7a:;
  /* 12a0ae7a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0ae7d push edx */
  push32((uint32_t)(EDX));
  /* 12a0ae7e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0ae81 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ae82 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0ae85 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ae86 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0ae89 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ae8a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ae8c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a0ae8f push eax */
  push32((uint32_t)(EAX));
  /* 12a0ae90 call dword ptr [0x12a3030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3030c))), 0x12a0ae96u);
  /* 12a0ae96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ae98 jne 0x12a0aea1 */
  if (!C.zf) goto L_12a0aea1;
  /* 12a0ae9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ae9c jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0aea1:;
  /* 12a0aea1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0aea3 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0aea5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0aea8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0aea9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0aeac push edx */
  push32((uint32_t)(EDX));
  /* 12a0aead mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0aeb0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0aeb1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0aeb4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0aeb5 call dword ptr [0x12a3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3031c))), 0x12a0aebbu);
  /* 12a0aebb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a0aebe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aec2 jne 0x12a0aecb */
  if (!C.zf) goto L_12a0aecb;
  /* 12a0aec4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0aec6 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0aecb:;
  /* 12a0aecb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0aece and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0aed4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0aed6 je 0x12a0af1b */
  if (C.zf) goto L_12a0af1b;
  /* 12a0aed8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aedc je 0x12a0af16 */
  if (C.zf) goto L_12a0af16;
  /* 12a0aede mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0aee1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aee4 jle 0x12a0aeed */
  if ((C.zf||C.sf!=C.of)) goto L_12a0aeed;
  /* 12a0aee6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0aee8 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0aeed:;
  /* 12a0aeed mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a0aef0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0aef1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0aef4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0aef5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0aef8 push eax */
  push32((uint32_t)(EAX));
  /* 12a0aef9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0aefc push ecx */
  push32((uint32_t)(ECX));
  /* 12a0aefd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0af00 push edx */
  push32((uint32_t)(EDX));
  /* 12a0af01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0af04 push eax */
  push32((uint32_t)(EAX));
  /* 12a0af05 call dword ptr [0x12a3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3031c))), 0x12a0af0bu);
  /* 12a0af0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0af0d jne 0x12a0af16 */
  if (!C.zf) goto L_12a0af16;
  /* 12a0af0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0af11 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0af16:;
  /* 12a0af16 jmp 0x12a0affa */
  goto L_12a0affa;
L_12a0af1b:;
  /* 12a0af1b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0af1e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12a0af21 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a0af28 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0af2b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0af2d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0af30 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12a0af32 call 0x12a05ac0 */
  push32(0x12a0af37u); f_12a05ac0();
  /* 12a0af37 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12a0af3a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12a0af3d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12a0af40 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12a0af43 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a0af4a jmp 0x12a0af63 */
  goto L_12a0af63;
  /* 12a0af4c mov eax, 1 */
  EAX = (0x1u);
  /* 12a0af51 ret  */
  ESPCHK(0x12a0ad10u, _esp0);
  ESP += 4; return;
  /* 12a0af52 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0af55 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a0af5c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0af63:;
  /* 12a0af63 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0af67 jne 0x12a0af70 */
  if (!C.zf) goto L_12a0af70;
  /* 12a0af69 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0af6b jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0af70:;
  /* 12a0af70 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0af73 push eax */
  push32((uint32_t)(EAX));
  /* 12a0af74 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0af77 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0af78 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0af7b push edx */
  push32((uint32_t)(EDX));
  /* 12a0af7c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0af7f push eax */
  push32((uint32_t)(EAX));
  /* 12a0af80 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0af83 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0af84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0af87 push edx */
  push32((uint32_t)(EDX));
  /* 12a0af88 call dword ptr [0x12a3031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3031c))), 0x12a0af8eu);
  /* 12a0af8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0af90 jne 0x12a0af96 */
  if (!C.zf) goto L_12a0af96;
  /* 12a0af92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0af94 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0af96:;
  /* 12a0af96 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0af9a jne 0x12a0afca */
  if (!C.zf) goto L_12a0afca;
  /* 12a0af9c push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0af9e push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0afa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0afa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0afa4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0afa7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0afa8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0afab push ecx */
  push32((uint32_t)(ECX));
  /* 12a0afac push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a0afb1 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a0afb4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0afb5 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a0afbbu);
  /* 12a0afbb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a0afbe cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0afc2 jne 0x12a0afc8 */
  if (!C.zf) goto L_12a0afc8;
  /* 12a0afc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0afc6 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0afc8:;
  /* 12a0afc8 jmp 0x12a0affa */
  goto L_12a0affa;
L_12a0afca:;
  /* 12a0afca push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0afcc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0afce mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12a0afd1 push eax */
  push32((uint32_t)(EAX));
  /* 12a0afd2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12a0afd5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0afd6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0afd9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0afda mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0afdd push eax */
  push32((uint32_t)(EAX));
  /* 12a0afde push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a0afe3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12a0afe6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0afe7 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a0afedu);
  /* 12a0afed mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a0aff0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0aff4 jne 0x12a0affa */
  if (!C.zf) goto L_12a0affa;
  /* 12a0aff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0aff8 jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0affa:;
  /* 12a0affa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0affd jmp 0x12a0b001 */
  goto L_12a0b001;
L_12a0afff:;
  /* 12a0afff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0b001:;
  /* 12a0b001 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12a0b004 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0b007 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12a0b00e pop edi */
  EDI = (pop32());
  /* 12a0b00f pop esi */
  ESI = (pop32());
  /* 12a0b010 pop ebx */
  EBX = (pop32());
  /* 12a0b011 mov esp, ebp */
  ESP = (EBP);
  /* 12a0b013 pop ebp */
  EBP = (pop32());
  /* 12a0b014 ret  */
  ESPCHK(0x12a0ad10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b020 @ 0x12a0b020 (80 bytes, 32 insns) */
void f_12a0b020(void) {
  FTRACE(0x12a0b020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b020 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b021 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b026 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b029 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0b02c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b02f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a0b032:;
  /* 12a0b032 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b035 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b038 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b03b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0b03e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0b040 je 0x12a0b057 */
  if (C.zf) goto L_12a0b057;
  /* 12a0b042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b045 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0b048 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0b04a je 0x12a0b057 */
  if (C.zf) goto L_12a0b057;
  /* 12a0b04c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b04f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b055 jmp 0x12a0b032 */
  goto L_12a0b032;
L_12a0b057:;
  /* 12a0b057 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b05a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0b05d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0b05f jne 0x12a0b069 */
  if (!C.zf) goto L_12a0b069;
  /* 12a0b061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b064 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b067 jmp 0x12a0b06c */
  goto L_12a0b06c;
L_12a0b069:;
  /* 12a0b069 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12a0b06c:;
  /* 12a0b06c mov esp, ebp */
  ESP = (EBP);
  /* 12a0b06e pop ebp */
  EBP = (pop32());
  /* 12a0b06f ret  */
  ESPCHK(0x12a0b020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b070 @ 0x12a0b070 (130 bytes, 43 insns) */
void f_12a0b070(void) {
  FTRACE(0x12a0b070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b070 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b071 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b073 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b077 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b07d jae 0x12a0b0a1 */
  if (!C.cf) goto L_12a0b0a1;
  /* 12a0b07f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b082 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b085 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b088 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b08b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b08e mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b095 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0b09a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b09d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0b09f jne 0x12a0b0bc */
  if (!C.zf) goto L_12a0b0bc;
L_12a0b0a1:;
  /* 12a0b0a1 call 0x12a0a7f0 */
  push32(0x12a0b0a6u); f_12a0a7f0();
  /* 12a0b0a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0b0ac call 0x12a0a800 */
  push32(0x12a0b0b1u); f_12a0a800();
  /* 12a0b0b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0b0b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b0ba jmp 0x12a0b0ee */
  goto L_12a0b0ee;
L_12a0b0bc:;
  /* 12a0b0bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b0bf push edx */
  push32((uint32_t)(EDX));
  /* 12a0b0c0 call 0x12a0c010 */
  push32(0x12a0b0c5u); f_12a0c010();
  /* 12a0b0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b0c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0b0cb push eax */
  push32((uint32_t)(EAX));
  /* 12a0b0cc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b0cf push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b0d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b0d3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b0d4 call 0x12a0b100 */
  push32(0x12a0b0d9u); f_12a0b100();
  /* 12a0b0d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b0dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b0df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b0e2 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b0e3 call 0x12a0c0a0 */
  push32(0x12a0b0e8u); f_12a0c0a0();
  /* 12a0b0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b0eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0b0ee:;
  /* 12a0b0ee mov esp, ebp */
  ESP = (EBP);
  /* 12a0b0f0 pop ebp */
  EBP = (pop32());
  /* 12a0b0f1 ret  */
  ESPCHK(0x12a0b070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b100 @ 0x12a0b100 (178 bytes, 56 insns) */
void f_12a0b100(void) {
  FTRACE(0x12a0b100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b100 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b101 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b103 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b109 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b10a call 0x12a0be90 */
  push32(0x12a0b10fu); f_12a0be90();
  /* 12a0b10f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b112 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0b115 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b119 jne 0x12a0b12e */
  if (!C.zf) goto L_12a0b12e;
  /* 12a0b11b call 0x12a0a7f0 */
  push32(0x12a0b120u); f_12a0a7f0();
  /* 12a0b120 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0b126 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b129 jmp 0x12a0b1ae */
  goto L_12a0b1ae;
L_12a0b12e:;
  /* 12a0b12e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0b131 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b132 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b134 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b137 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b138 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0b13b push eax */
  push32((uint32_t)(EAX));
  /* 12a0b13c call dword ptr [0x12a30300] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30300))), 0x12a0b142u);
  /* 12a0b142 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0b145 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b149 jne 0x12a0b156 */
  if (!C.zf) goto L_12a0b156;
  /* 12a0b14b call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0b151u);
  /* 12a0b151 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b154 jmp 0x12a0b15d */
  goto L_12a0b15d;
L_12a0b156:;
  /* 12a0b156 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a0b15d:;
  /* 12a0b15d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b161 je 0x12a0b174 */
  if (C.zf) goto L_12a0b174;
  /* 12a0b163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b166 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b167 call 0x12a0a750 */
  push32(0x12a0b16cu); f_12a0a750();
  /* 12a0b16c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b16f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b172 jmp 0x12a0b1ae */
  goto L_12a0b1ae;
L_12a0b174:;
  /* 12a0b174 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b177 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12a0b17a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b17d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b180 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b183 mov ecx, dword ptr [edx*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0b18a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 12a0b18e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 12a0b191 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b194 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b197 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b19a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b19d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b1a0 mov eax, dword ptr [eax*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0b1a7 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 12a0b1ab mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0b1ae:;
  /* 12a0b1ae mov esp, ebp */
  ESP = (EBP);
  /* 12a0b1b0 pop ebp */
  EBP = (pop32());
  /* 12a0b1b1 ret  */
  ESPCHK(0x12a0b100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x12a0b1c0 (130 bytes, 43 insns) */
void f_12a0b1c0(void) {
  FTRACE(0x12a0b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b1c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b1c7 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b1cd jae 0x12a0b1f1 */
  if (!C.cf) goto L_12a0b1f1;
  /* 12a0b1cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b1d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b1d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b1d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b1db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b1de mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b1e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0b1ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b1ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0b1ef jne 0x12a0b20c */
  if (!C.zf) goto L_12a0b20c;
L_12a0b1f1:;
  /* 12a0b1f1 call 0x12a0a7f0 */
  push32(0x12a0b1f6u); f_12a0a7f0();
  /* 12a0b1f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0b1fc call 0x12a0a800 */
  push32(0x12a0b201u); f_12a0a800();
  /* 12a0b201 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0b207 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b20a jmp 0x12a0b23e */
  goto L_12a0b23e;
L_12a0b20c:;
  /* 12a0b20c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b20f push edx */
  push32((uint32_t)(EDX));
  /* 12a0b210 call 0x12a0c010 */
  push32(0x12a0b215u); f_12a0c010();
  /* 12a0b215 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b218 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0b21b push eax */
  push32((uint32_t)(EAX));
  /* 12a0b21c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b21f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b220 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b223 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b224 call 0x12a0b250 */
  push32(0x12a0b229u); f_12a0b250();
  /* 12a0b229 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b22c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b22f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b232 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b233 call 0x12a0c0a0 */
  push32(0x12a0b238u); f_12a0c0a0();
  /* 12a0b238 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b23b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0b23e:;
  /* 12a0b23e mov esp, ebp */
  ESP = (EBP);
  /* 12a0b240 pop ebp */
  EBP = (pop32());
  /* 12a0b241 ret  */
  ESPCHK(0x12a0b1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b250 @ 0x12a0b250 (627 bytes, 182 insns) */
void f_12a0b250(void) {
  FTRACE(0x12a0b250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b250 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b251 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b253 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b259 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0b260 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0b263 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 12a0b269 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b26d jne 0x12a0b276 */
  if (!C.zf) goto L_12a0b276;
  /* 12a0b26f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b271 jmp 0x12a0b4bf */
  goto L_12a0b4bf;
L_12a0b276:;
  /* 12a0b276 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b279 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b27c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b27f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b282 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b285 mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b28c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0b291 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b294 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0b296 je 0x12a0b2a8 */
  if (C.zf) goto L_12a0b2a8;
  /* 12a0b298 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0b29a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b29f push edx */
  push32((uint32_t)(EDX));
  /* 12a0b2a0 call 0x12a0b100 */
  push32(0x12a0b2a5u); f_12a0b100();
  /* 12a0b2a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0b2a8:;
  /* 12a0b2a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b2ab sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b2ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b2b1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b2b4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b2b7 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0b2be movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12a0b2c3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b2c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b2ca je 0x12a0b3dc */
  if (C.zf) goto L_12a0b3dc;
  /* 12a0b2d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b2d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0b2d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12a0b2dd:;
  /* 12a0b2dd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b2e0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b2e3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b2e6 jae 0x12a0b3da */
  if (!C.cf) goto L_12a0b3da;
  /* 12a0b2ec lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12a0b2f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0b2f5:;
  /* 12a0b2f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b2f8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12a0b2fe sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b300 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b306 jge 0x12a0b367 */
  if ((C.sf==C.of)) goto L_12a0b367;
  /* 12a0b308 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b30b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b30e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b311 jae 0x12a0b367 */
  if (!C.cf) goto L_12a0b367;
  /* 12a0b313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b316 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0b318 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 12a0b31e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b321 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b324 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b327 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 12a0b32e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b331 jne 0x12a0b351 */
  if (!C.zf) goto L_12a0b351;
  /* 12a0b333 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 12a0b339 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b33c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 12a0b342 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b345 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 12a0b348 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b34b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b34e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a0b351:;
  /* 12a0b351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b354 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 12a0b35a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12a0b35c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b35f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b362 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0b365 jmp 0x12a0b2f5 */
  goto L_12a0b2f5;
L_12a0b367:;
  /* 12a0b367 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b369 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12a0b36f push edx */
  push32((uint32_t)(EDX));
  /* 12a0b370 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b373 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 12a0b379 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b37b push eax */
  push32((uint32_t)(EAX));
  /* 12a0b37c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 12a0b382 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b383 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b386 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b38c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b38f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b392 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0b399 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 12a0b39c push eax */
  push32((uint32_t)(EAX));
  /* 12a0b39d call dword ptr [0x12a30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30254))), 0x12a0b3a3u);
  /* 12a0b3a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b3a5 je 0x12a0b3ca */
  if (C.zf) goto L_12a0b3ca;
  /* 12a0b3a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0b3aa add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b3b0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12a0b3b3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b3b6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 12a0b3bc sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b3be cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b3c4 jge 0x12a0b3c8 */
  if ((C.sf==C.of)) goto L_12a0b3c8;
  /* 12a0b3c6 jmp 0x12a0b3da */
  goto L_12a0b3da;
L_12a0b3c8:;
  /* 12a0b3c8 jmp 0x12a0b3d5 */
  goto L_12a0b3d5;
L_12a0b3ca:;
  /* 12a0b3ca call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0b3d0u);
  /* 12a0b3d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0b3d3 jmp 0x12a0b3da */
  goto L_12a0b3da;
L_12a0b3d5:;
  /* 12a0b3d5 jmp 0x12a0b2dd */
  goto L_12a0b2dd;
L_12a0b3da:;
  /* 12a0b3da jmp 0x12a0b42c */
  goto L_12a0b42c;
L_12a0b3dc:;
  /* 12a0b3dc push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b3de lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 12a0b3e4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b3e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0b3e8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b3e9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b3ec push eax */
  push32((uint32_t)(EAX));
  /* 12a0b3ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b3f0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b3f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b3f6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b3f9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b3fc mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b403 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 12a0b406 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b407 call dword ptr [0x12a30254] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30254))), 0x12a0b40du);
  /* 12a0b40d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b40f je 0x12a0b423 */
  if (C.zf) goto L_12a0b423;
  /* 12a0b411 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0b418 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 12a0b41e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12a0b421 jmp 0x12a0b42c */
  goto L_12a0b42c;
L_12a0b423:;
  /* 12a0b423 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0b429u);
  /* 12a0b429 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0b42c:;
  /* 12a0b42c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b430 jne 0x12a0b4b6 */
  if (!C.zf) goto L_12a0b4b6;
  /* 12a0b436 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b43a je 0x12a0b46a */
  if (C.zf) goto L_12a0b46a;
  /* 12a0b43c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b440 jne 0x12a0b459 */
  if (!C.zf) goto L_12a0b459;
  /* 12a0b442 call 0x12a0a7f0 */
  push32(0x12a0b447u); f_12a0a7f0();
  /* 12a0b447 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0b44d call 0x12a0a800 */
  push32(0x12a0b452u); f_12a0a800();
  /* 12a0b452 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0b455 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12a0b457 jmp 0x12a0b465 */
  goto L_12a0b465;
L_12a0b459:;
  /* 12a0b459 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0b45c push edx */
  push32((uint32_t)(EDX));
  /* 12a0b45d call 0x12a0a750 */
  push32(0x12a0b462u); f_12a0a750();
  /* 12a0b462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0b465:;
  /* 12a0b465 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b468 jmp 0x12a0b4bf */
  goto L_12a0b4bf;
L_12a0b46a:;
  /* 12a0b46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b46d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b473 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b476 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b479 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0b480 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12a0b485 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b488 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b48a je 0x12a0b49b */
  if (C.zf) goto L_12a0b49b;
  /* 12a0b48c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b48f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0b492 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b495 jne 0x12a0b49b */
  if (!C.zf) goto L_12a0b49b;
  /* 12a0b497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b499 jmp 0x12a0b4bf */
  goto L_12a0b4bf;
L_12a0b49b:;
  /* 12a0b49b call 0x12a0a7f0 */
  push32(0x12a0b4a0u); f_12a0a7f0();
  /* 12a0b4a0 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 12a0b4a6 call 0x12a0a800 */
  push32(0x12a0b4abu); f_12a0a800();
  /* 12a0b4ab mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0b4b1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b4b4 jmp 0x12a0b4bf */
  goto L_12a0b4bf;
L_12a0b4b6:;
  /* 12a0b4b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0b4b9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12a0b4bf:;
  /* 12a0b4bf mov esp, ebp */
  ESP = (EBP);
  /* 12a0b4c1 pop ebp */
  EBP = (pop32());
  /* 12a0b4c2 ret  */
  ESPCHK(0x12a0b250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4d0 @ 0x12a0b4d0 (199 bytes, 68 insns) */
void f_12a0b4d0(void) {
  FTRACE(0x12a0b4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b4d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b4d3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b4d4 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0b4d5 push esi */
  push32((uint32_t)(ESI));
  /* 12a0b4d6 push edi */
  push32((uint32_t)(EDI));
L_12a0b4d7:;
  /* 12a0b4d7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b4db jne 0x12a0b4fb */
  if (!C.zf) goto L_12a0b4fb;
  /* 12a0b4dd push 0x12a29e6c */
  push32((uint32_t)(0x12a29e6cu));
  /* 12a0b4e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b4e4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12a0b4e6 push 0x12a29f38 */
  push32((uint32_t)(0x12a29f38u));
  /* 12a0b4eb push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0b4ed call 0x12a019e0 */
  push32(0x12a0b4f2u); f_12a019e0();
  /* 12a0b4f2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b4f5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b4f8 jne 0x12a0b4fb */
  if (!C.zf) goto L_12a0b4fb;
  /* 12a0b4fa int3  */
  x86_unimpl("int3 @ 0x12a0b4fa");
L_12a0b4fb:;
  /* 12a0b4fb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b4fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b4ff jne 0x12a0b4d7 */
  if (!C.zf) goto L_12a0b4d7;
  /* 12a0b501 mov ecx, dword ptr [0x12a2e6a4] */
  ECX = (r32((uint32_t)(0x12a2e6a4)));
  /* 12a0b507 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b50a mov dword ptr [0x12a2e6a4], ecx */
  w32((uint32_t)(0x12a2e6a4), (ECX));
  /* 12a0b510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b513 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0b516 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12a0b518 push 0x12a29f38 */
  push32((uint32_t)(0x12a29f38u));
  /* 12a0b51d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0b51f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 12a0b524 call 0x12a02920 */
  push32(0x12a0b529u); f_12a02920();
  /* 12a0b529 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b52c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b52f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12a0b532 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b535 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b539 je 0x12a0b556 */
  if (C.zf) goto L_12a0b556;
  /* 12a0b53b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b53e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0b541 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0b544 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b547 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12a0b54a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b54d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 12a0b554 jmp 0x12a0b57b */
  goto L_12a0b57b;
L_12a0b556:;
  /* 12a0b556 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b559 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0b55c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b55f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b562 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12a0b565 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b568 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b56b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b56e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12a0b571 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b574 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_12a0b57b:;
  /* 12a0b57b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b57e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b581 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a0b584 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a0b586 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b589 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12a0b590 pop edi */
  EDI = (pop32());
  /* 12a0b591 pop esi */
  ESI = (pop32());
  /* 12a0b592 pop ebx */
  EBX = (pop32());
  /* 12a0b593 mov esp, ebp */
  ESP = (EBP);
  /* 12a0b595 pop ebp */
  EBP = (pop32());
  /* 12a0b596 ret  */
  ESPCHK(0x12a0b4d0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x12a0b5a0 (50 bytes, 17 insns) */
void f_12a0b5a0(void) {
  FTRACE(0x12a0b5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b5a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b5a6 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b5ac jb 0x12a0b5b2 */
  if (C.cf) goto L_12a0b5b2;
  /* 12a0b5ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b5b0 jmp 0x12a0b5d0 */
  goto L_12a0b5d0;
L_12a0b5b2:;
  /* 12a0b5b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b5b5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b5b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b5bb and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b5be imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b5c1 mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b5c8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0b5cd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_12a0b5d0:;
  /* 12a0b5d0 pop ebp */
  EBP = (pop32());
  /* 12a0b5d1 ret  */
  ESPCHK(0x12a0b5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e0 @ 0x12a0b5e0 (300 bytes, 80 insns) */
void f_12a0b5e0(void) {
  FTRACE(0x12a0b5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b5e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b5e4 cmp dword ptr [0x12a2fb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b5eb jne 0x12a0b5f9 */
  if (!C.zf) goto L_12a0b5f9;
  /* 12a0b5ed mov dword ptr [0x12a2fb60], 0x200 */
  w32((uint32_t)(0x12a2fb60), (0x200u));
  /* 12a0b5f7 jmp 0x12a0b60c */
  goto L_12a0b60c;
L_12a0b5f9:;
  /* 12a0b5f9 cmp dword ptr [0x12a2fb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x12a2fb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b600 jge 0x12a0b60c */
  if ((C.sf==C.of)) goto L_12a0b60c;
  /* 12a0b602 mov dword ptr [0x12a2fb60], 0x14 */
  w32((uint32_t)(0x12a2fb60), (0x14u));
L_12a0b60c:;
  /* 12a0b60c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 12a0b611 push 0x12a29f44 */
  push32((uint32_t)(0x12a29f44u));
  /* 12a0b616 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0b618 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a0b61a mov eax, dword ptr [0x12a2fb60] */
  EAX = (r32((uint32_t)(0x12a2fb60)));
  /* 12a0b61f push eax */
  push32((uint32_t)(EAX));
  /* 12a0b620 call 0x12a02d30 */
  push32(0x12a0b625u); f_12a02d30();
  /* 12a0b625 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b628 mov dword ptr [0x12a2e818], eax */
  w32((uint32_t)(0x12a2e818), (EAX));
  /* 12a0b62d cmp dword ptr [0x12a2e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b634 jne 0x12a0b675 */
  if (!C.zf) goto L_12a0b675;
  /* 12a0b636 mov dword ptr [0x12a2fb60], 0x14 */
  w32((uint32_t)(0x12a2fb60), (0x14u));
  /* 12a0b640 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 12a0b645 push 0x12a29f44 */
  push32((uint32_t)(0x12a29f44u));
  /* 12a0b64a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0b64c push 4 */
  push32((uint32_t)(0x4u));
  /* 12a0b64e mov ecx, dword ptr [0x12a2fb60] */
  ECX = (r32((uint32_t)(0x12a2fb60)));
  /* 12a0b654 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b655 call 0x12a02d30 */
  push32(0x12a0b65au); f_12a02d30();
  /* 12a0b65a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b65d mov dword ptr [0x12a2e818], eax */
  w32((uint32_t)(0x12a2e818), (EAX));
  /* 12a0b662 cmp dword ptr [0x12a2e818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b669 jne 0x12a0b675 */
  if (!C.zf) goto L_12a0b675;
  /* 12a0b66b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12a0b66d call 0x12a01890 */
  push32(0x12a0b672u); f_12a01890();
  /* 12a0b672 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0b675:;
  /* 12a0b675 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0b67c jmp 0x12a0b687 */
  goto L_12a0b687;
L_12a0b67e:;
  /* 12a0b67e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b681 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b684 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0b687:;
  /* 12a0b687 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b68b jge 0x12a0b6a6 */
  if ((C.sf==C.of)) goto L_12a0b6a6;
  /* 12a0b68d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b690 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b693 add eax, 0x12a2d120 */
  { uint32_t _a=(EAX),_b=(0x12a2d120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b698 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b69b mov edx, dword ptr [0x12a2e818] */
  EDX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0b6a1 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12a0b6a4 jmp 0x12a0b67e */
  goto L_12a0b67e;
L_12a0b6a6:;
  /* 12a0b6a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0b6ad jmp 0x12a0b6b8 */
  goto L_12a0b6b8;
L_12a0b6af:;
  /* 12a0b6af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6b2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b6b5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0b6b8:;
  /* 12a0b6b8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b6bc jge 0x12a0b708 */
  if ((C.sf==C.of)) goto L_12a0b708;
  /* 12a0b6be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6c1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b6c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6c7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b6ca imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b6cd mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b6d4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b6d8 je 0x12a0b6f6 */
  if (C.zf) goto L_12a0b6f6;
  /* 12a0b6da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6dd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b6e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6e3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0b6e6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0b6e9 mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0b6f0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b6f4 jne 0x12a0b706 */
  if (!C.zf) goto L_12a0b706;
L_12a0b6f6:;
  /* 12a0b6f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0b6f9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0b6fc mov dword ptr [ecx + 0x12a2d130], 0xffffffff */
  w32((uint32_t)(ECX + 0x12a2d130), (0xffffffffu));
L_12a0b706:;
  /* 12a0b706 jmp 0x12a0b6af */
  goto L_12a0b6af;
L_12a0b708:;
  /* 12a0b708 mov esp, ebp */
  ESP = (EBP);
  /* 12a0b70a pop ebp */
  EBP = (pop32());
  /* 12a0b70b ret  */
  ESPCHK(0x12a0b5e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b710 @ 0x12a0b710 (26 bytes, 9 insns) */
void f_12a0b710(void) {
  FTRACE(0x12a0b710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b710 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b711 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b713 call 0x12a0c310 */
  push32(0x12a0b718u); f_12a0c310();
  /* 12a0b718 movsx eax, byte ptr [0x12a2e4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x12a2e4bc))));
  /* 12a0b71f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0b721 je 0x12a0b728 */
  if (C.zf) goto L_12a0b728;
  /* 12a0b723 call 0x12a0c0d0 */
  push32(0x12a0b728u); f_12a0c0d0();
L_12a0b728:;
  /* 12a0b728 pop ebp */
  EBP = (pop32());
  /* 12a0b729 ret  */
  ESPCHK(0x12a0b710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x12a0b730 (61 bytes, 20 insns) */
void f_12a0b730(void) {
  FTRACE(0x12a0b730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b730 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b731 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b733 cmp dword ptr [ebp + 8], 0x12a2d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12a2d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b73a jb 0x12a0b75e */
  if (C.cf) goto L_12a0b75e;
  /* 12a0b73c cmp dword ptr [ebp + 8], 0x12a2d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12a2d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b743 ja 0x12a0b75e */
  if ((!C.cf&&!C.zf)) goto L_12a0b75e;
  /* 12a0b745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b748 sub eax, 0x12a2d120 */
  { uint32_t _a=(EAX),_b=(0x12a2d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b74d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b750 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b753 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b754 call 0x12a06320 */
  push32(0x12a0b759u); f_12a06320();
  /* 12a0b759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b75c jmp 0x12a0b76b */
  goto L_12a0b76b;
L_12a0b75e:;
  /* 12a0b75e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b761 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b764 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b765 call dword ptr [0x12a302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e4))), 0x12a0b76bu);
L_12a0b76b:;
  /* 12a0b76b pop ebp */
  EBP = (pop32());
  /* 12a0b76c ret  */
  ESPCHK(0x12a0b730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x12a0b770 (41 bytes, 16 insns) */
void f_12a0b770(void) {
  FTRACE(0x12a0b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b770 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b771 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b773 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b777 jge 0x12a0b78a */
  if ((C.sf==C.of)) goto L_12a0b78a;
  /* 12a0b779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b77c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b77f push eax */
  push32((uint32_t)(EAX));
  /* 12a0b780 call 0x12a06320 */
  push32(0x12a0b785u); f_12a06320();
  /* 12a0b785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b788 jmp 0x12a0b797 */
  goto L_12a0b797;
L_12a0b78a:;
  /* 12a0b78a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b78d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b790 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b791 call dword ptr [0x12a302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e4))), 0x12a0b797u);
L_12a0b797:;
  /* 12a0b797 pop ebp */
  EBP = (pop32());
  /* 12a0b798 ret  */
  ESPCHK(0x12a0b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x12a0b7a0 (61 bytes, 20 insns) */
void f_12a0b7a0(void) {
  FTRACE(0x12a0b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b7a3 cmp dword ptr [ebp + 8], 0x12a2d120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12a2d120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b7aa jb 0x12a0b7ce */
  if (C.cf) goto L_12a0b7ce;
  /* 12a0b7ac cmp dword ptr [ebp + 8], 0x12a2d380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x12a2d380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b7b3 ja 0x12a0b7ce */
  if ((!C.cf&&!C.zf)) goto L_12a0b7ce;
  /* 12a0b7b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b7b8 sub eax, 0x12a2d120 */
  { uint32_t _a=(EAX),_b=(0x12a2d120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b7bd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0b7c0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b7c3 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b7c4 call 0x12a063c0 */
  push32(0x12a0b7c9u); f_12a063c0();
  /* 12a0b7c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b7cc jmp 0x12a0b7db */
  goto L_12a0b7db;
L_12a0b7ce:;
  /* 12a0b7ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b7d1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b7d4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b7d5 call dword ptr [0x12a302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e8))), 0x12a0b7dbu);
L_12a0b7db:;
  /* 12a0b7db pop ebp */
  EBP = (pop32());
  /* 12a0b7dc ret  */
  ESPCHK(0x12a0b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7e0 @ 0x12a0b7e0 (41 bytes, 16 insns) */
void f_12a0b7e0(void) {
  FTRACE(0x12a0b7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b7e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b7e3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b7e7 jge 0x12a0b7fa */
  if ((C.sf==C.of)) goto L_12a0b7fa;
  /* 12a0b7e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b7ec add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b7ef push eax */
  push32((uint32_t)(EAX));
  /* 12a0b7f0 call 0x12a063c0 */
  push32(0x12a0b7f5u); f_12a063c0();
  /* 12a0b7f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b7f8 jmp 0x12a0b807 */
  goto L_12a0b807;
L_12a0b7fa:;
  /* 12a0b7fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b7fd add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b800 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b801 call dword ptr [0x12a302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e8))), 0x12a0b807u);
L_12a0b807:;
  /* 12a0b807 pop ebp */
  EBP = (pop32());
  /* 12a0b808 ret  */
  ESPCHK(0x12a0b7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b810 @ 0x12a0b810 (119 bytes, 34 insns) */
void f_12a0b810(void) {
  FTRACE(0x12a0b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b810 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b811 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b813 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b816 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0b81b call dword ptr [0x12a30268] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30268))), 0x12a0b821u);
  /* 12a0b821 cmp dword ptr [0x12a2e804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b828 je 0x12a0b848 */
  if (C.zf) goto L_12a0b848;
  /* 12a0b82a push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0b82f call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a0b835u);
  /* 12a0b835 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0b837 call 0x12a06320 */
  push32(0x12a0b83cu); f_12a06320();
  /* 12a0b83c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b83f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a0b846 jmp 0x12a0b84f */
  goto L_12a0b84f;
L_12a0b848:;
  /* 12a0b848 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a0b84f:;
  /* 12a0b84f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 12a0b853 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b854 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b857 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b858 call 0x12a0b890 */
  push32(0x12a0b85du); f_12a0b890();
  /* 12a0b85d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b860 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0b863 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b867 je 0x12a0b875 */
  if (C.zf) goto L_12a0b875;
  /* 12a0b869 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0b86b call 0x12a063c0 */
  push32(0x12a0b870u); f_12a063c0();
  /* 12a0b870 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b873 jmp 0x12a0b880 */
  goto L_12a0b880;
L_12a0b875:;
  /* 12a0b875 push 0x12a2e814 */
  push32((uint32_t)(0x12a2e814u));
  /* 12a0b87a call dword ptr [0x12a30258] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30258))), 0x12a0b880u);
L_12a0b880:;
  /* 12a0b880 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0b883 mov esp, ebp */
  ESP = (EBP);
  /* 12a0b885 pop ebp */
  EBP = (pop32());
  /* 12a0b886 ret  */
  ESPCHK(0x12a0b810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b890 @ 0x12a0b890 (160 bytes, 50 insns) */
void f_12a0b890(void) {
  FTRACE(0x12a0b890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b890 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b891 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0b896 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b89a jne 0x12a0b8a3 */
  if (!C.zf) goto L_12a0b8a3;
  /* 12a0b89c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b89e jmp 0x12a0b92c */
  goto L_12a0b92c;
L_12a0b8a3:;
  /* 12a0b8a3 cmp dword ptr [0x12a2e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b8aa jne 0x12a0b8da */
  if (!C.zf) goto L_12a0b8da;
  /* 12a0b8ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0b8af and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b8b4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b8b9 jle 0x12a0b8cb */
  if ((C.zf||C.sf!=C.of)) goto L_12a0b8cb;
  /* 12a0b8bb call 0x12a0a7f0 */
  push32(0x12a0b8c0u); f_12a0a7f0();
  /* 12a0b8c0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12a0b8c6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b8c9 jmp 0x12a0b92c */
  goto L_12a0b92c;
L_12a0b8cb:;
  /* 12a0b8cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b8ce mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 12a0b8d1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 12a0b8d3 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0b8d8 jmp 0x12a0b92c */
  goto L_12a0b92c;
L_12a0b8da:;
  /* 12a0b8da mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0b8e1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12a0b8e4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b8e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b8e7 mov ecx, dword ptr [0x12a2cea4] */
  ECX = (r32((uint32_t)(0x12a2cea4)));
  /* 12a0b8ed push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b8ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0b8f1 push edx */
  push32((uint32_t)(EDX));
  /* 12a0b8f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0b8f4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 12a0b8f7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b8f8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12a0b8fd mov ecx, dword ptr [0x12a2e698] */
  ECX = (r32((uint32_t)(0x12a2e698)));
  /* 12a0b903 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0b904 call dword ptr [0x12a3021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3021c))), 0x12a0b90au);
  /* 12a0b90a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0b90d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b911 je 0x12a0b919 */
  if (C.zf) goto L_12a0b919;
  /* 12a0b913 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b917 je 0x12a0b929 */
  if (C.zf) goto L_12a0b929;
L_12a0b919:;
  /* 12a0b919 call 0x12a0a7f0 */
  push32(0x12a0b91eu); f_12a0a7f0();
  /* 12a0b91e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 12a0b924 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0b927 jmp 0x12a0b92c */
  goto L_12a0b92c;
L_12a0b929:;
  /* 12a0b929 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0b92c:;
  /* 12a0b92c mov esp, ebp */
  ESP = (EBP);
  /* 12a0b92e pop ebp */
  EBP = (pop32());
  /* 12a0b92f ret  */
  ESPCHK(0x12a0b890u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x12a0b930 (32 bytes, 18 insns) */
void f_12a0b930(void) {
  FTRACE(0x12a0b930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b930 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b931 mov ebp, esp */
  EBP = (ESP);
  /* 12a0b933 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0b934 push esi */
  push32((uint32_t)(ESI));
  /* 12a0b935 push edi */
  push32((uint32_t)(EDI));
  /* 12a0b936 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0b937 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b939 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0b93b push 0x12a0b948 */
  push32((uint32_t)(0x12a0b948u));
  /* 12a0b940 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 12a0b943 call 0x12a1307c */
  push32(0x12a0b948u); f_12a1307c();
  /* 12a0b948 pop ebp */
  EBP = (pop32());
  /* 12a0b949 pop edi */
  EDI = (pop32());
  /* 12a0b94a pop esi */
  ESI = (pop32());
  /* 12a0b94b pop ebx */
  EBX = (pop32());
  /* 12a0b94c mov esp, ebp */
  ESP = (EBP);
  /* 12a0b94e pop ebp */
  EBP = (pop32());
  /* 12a0b94f ret  */
  ESPCHK(0x12a0b930u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x12a0b972 (104 bytes, 33 insns) */
void f_12a0b972(void) {
  FTRACE(0x12a0b972u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0b972 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0b973 push esi */
  push32((uint32_t)(ESI));
  /* 12a0b974 push edi */
  push32((uint32_t)(EDI));
  /* 12a0b975 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 12a0b979 push eax */
  push32((uint32_t)(EAX));
  /* 12a0b97a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 12a0b97c push 0x12a0b950 */
  push32((uint32_t)(0x12a0b950u));
  /* 12a0b981 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 12a0b988 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_12a0b98f:;
  /* 12a0b98f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 12a0b993 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0b996 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0b999 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b99c je 0x12a0b9cc */
  if (C.zf) goto L_12a0b9cc;
  /* 12a0b99e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b9a2 je 0x12a0b9cc */
  if (C.zf) goto L_12a0b9cc;
  /* 12a0b9a4 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 12a0b9a7 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 12a0b9aa mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 12a0b9ae mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 12a0b9b1 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0b9b6 jne 0x12a0b9ca */
  if (!C.zf) goto L_12a0b9ca;
  /* 12a0b9b8 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12a0b9bd mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 12a0b9c1 call 0x12a0ba06 */
  push32(0x12a0b9c6u); f_12a0ba06();
  /* 12a0b9c6 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x12a0b9cau);
L_12a0b9ca:;
  /* 12a0b9ca jmp 0x12a0b98f */
  goto L_12a0b98f;
L_12a0b9cc:;
  /* 12a0b9cc pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 12a0b9d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0b9d6 pop edi */
  EDI = (pop32());
  /* 12a0b9d7 pop esi */
  ESI = (pop32());
  /* 12a0b9d8 pop ebx */
  EBX = (pop32());
  /* 12a0b9d9 ret  */
  ESPCHK(0x12a0b972u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba06 @ 0x12a0ba06 (24 bytes, 10 insns) */
void f_12a0ba06(void) {
  FTRACE(0x12a0ba06u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ba06 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0ba07 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ba08 mov ebx, 0x12a2d3b8 */
  EBX = (0x12a2d3b8u);
  /* 12a0ba0d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ba10 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 12a0ba13 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 12a0ba16 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 12a0ba19 pop ecx */
  ECX = (pop32());
  /* 12a0ba1a pop ebx */
  EBX = (pop32());
  /* 12a0ba1b ret 4 */
  ESPCHK(0x12a0ba06u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bae5 @ 0x12a0bae5 (27 bytes, 11 insns) */
void f_12a0bae5(void) {
  FTRACE(0x12a0bae5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0bae5 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0bae6 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a0baea mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 12a0baec mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12a0baef push eax */
  push32((uint32_t)(EAX));
  /* 12a0baf0 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a0baf3 push eax */
  push32((uint32_t)(EAX));
  /* 12a0baf4 call 0x12a0b972 */
  push32(0x12a0baf9u); f_12a0b972();
  /* 12a0baf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bafc pop ebp */
  EBP = (pop32());
  /* 12a0bafd ret 4 */
  ESPCHK(0x12a0bae5u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bb00 @ 0x12a0bb00 (482 bytes, 138 insns) */
void f_12a0bb00(void) {
  FTRACE(0x12a0bb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0bb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0bb01 mov ebp, esp */
  EBP = (ESP);
  /* 12a0bb03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0bb06 push esi */
  push32((uint32_t)(ESI));
  /* 12a0bb07 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 12a0bb0e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12a0bb10 call 0x12a06320 */
  push32(0x12a0bb15u); f_12a06320();
  /* 12a0bb15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bb18 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0bb1f jmp 0x12a0bb2a */
  goto L_12a0bb2a;
L_12a0bb21:;
  /* 12a0bb21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bb24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bb27 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0bb2a:;
  /* 12a0bb2a cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bb2e jge 0x12a0bcd0 */
  if ((C.sf==C.of)) goto L_12a0bcd0;
  /* 12a0bb34 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bb37 cmp dword ptr [ecx*4 + 0x12a2fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x12a2fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bb3f je 0x12a0bc36 */
  if (C.zf) goto L_12a0bc36;
  /* 12a0bb45 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bb48 mov eax, dword ptr [edx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0bb4f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0bb52 jmp 0x12a0bb5d */
  goto L_12a0bb5d;
L_12a0bb54:;
  /* 12a0bb54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bb57 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bb5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a0bb5d:;
  /* 12a0bb5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bb60 mov eax, dword ptr [edx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0bb67 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bb6c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bb6f jae 0x12a0bc26 */
  if (!C.cf) goto L_12a0bc26;
  /* 12a0bb75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bb78 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a0bb7c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0bb7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0bb81 jne 0x12a0bc21 */
  if (!C.zf) goto L_12a0bc21;
  /* 12a0bb87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bb8a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bb8e jne 0x12a0bbc9 */
  if (!C.zf) goto L_12a0bbc9;
  /* 12a0bb90 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0bb92 call 0x12a06320 */
  push32(0x12a0bb97u); f_12a06320();
  /* 12a0bb97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bb9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bb9d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bba1 jne 0x12a0bbbf */
  if (!C.zf) goto L_12a0bbbf;
  /* 12a0bba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bba6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bba9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0bbaa call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a0bbb0u);
  /* 12a0bbb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbb3 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0bbb6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bbb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12a0bbbf:;
  /* 12a0bbbf push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0bbc1 call 0x12a063c0 */
  push32(0x12a0bbc6u); f_12a063c0();
  /* 12a0bbc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0bbc9:;
  /* 12a0bbc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbcc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bbcf push eax */
  push32((uint32_t)(EAX));
  /* 12a0bbd0 call dword ptr [0x12a302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e4))), 0x12a0bbd6u);
  /* 12a0bbd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbd9 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12a0bbdd and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0bbe0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0bbe2 je 0x12a0bbf6 */
  if (C.zf) goto L_12a0bbf6;
  /* 12a0bbe4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbe7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bbea push eax */
  push32((uint32_t)(EAX));
  /* 12a0bbeb call dword ptr [0x12a302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e8))), 0x12a0bbf1u);
  /* 12a0bbf1 jmp 0x12a0bb54 */
  goto L_12a0bb54;
L_12a0bbf6:;
  /* 12a0bbf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bbf9 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12a0bbff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bc02 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0bc05 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bc08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bc0b sub eax, dword ptr [edx*4 + 0x12a2fe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x12a2fe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0bc12 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0bc13 mov esi, 0x24 */
  ESI = (0x24u);
  /* 12a0bc18 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12a0bc1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bc1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0bc1f jmp 0x12a0bc26 */
  goto L_12a0bc26;
L_12a0bc21:;
  /* 12a0bc21 jmp 0x12a0bb54 */
  goto L_12a0bb54;
L_12a0bc26:;
  /* 12a0bc26 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bc2a je 0x12a0bc31 */
  if (C.zf) goto L_12a0bc31;
  /* 12a0bc2c jmp 0x12a0bcd0 */
  goto L_12a0bcd0;
L_12a0bc31:;
  /* 12a0bc31 jmp 0x12a0bccb */
  goto L_12a0bccb;
L_12a0bc36:;
  /* 12a0bc36 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 12a0bc38 push 0x12a29f4c */
  push32((uint32_t)(0x12a29f4cu));
  /* 12a0bc3d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0bc3f push 0x480 */
  push32((uint32_t)(0x480u));
  /* 12a0bc44 call 0x12a02920 */
  push32(0x12a0bc49u); f_12a02920();
  /* 12a0bc49 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bc4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0bc4f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bc53 je 0x12a0bcc9 */
  if (C.zf) goto L_12a0bcc9;
  /* 12a0bc55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bc58 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bc5b mov dword ptr [eax*4 + 0x12a2fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x12a2fe60), (ECX));
  /* 12a0bc62 mov edx, dword ptr [0x12a2ff9c] */
  EDX = (r32((uint32_t)(0x12a2ff9c)));
  /* 12a0bc68 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bc6b mov dword ptr [0x12a2ff9c], edx */
  w32((uint32_t)(0x12a2ff9c), (EDX));
  /* 12a0bc71 jmp 0x12a0bc7c */
  goto L_12a0bc7c;
L_12a0bc73:;
  /* 12a0bc73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bc76 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bc79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0bc7c:;
  /* 12a0bc7c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bc7f mov edx, dword ptr [ecx*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0bc86 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bc8c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bc8f jae 0x12a0bcb4 */
  if (!C.cf) goto L_12a0bcb4;
  /* 12a0bc91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bc94 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 12a0bc98 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bc9b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 12a0bca1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bca4 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 12a0bca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0bcab mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 12a0bcb2 jmp 0x12a0bc73 */
  goto L_12a0bc73;
L_12a0bcb4:;
  /* 12a0bcb4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0bcb7 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0bcba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0bcbd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bcc0 push edx */
  push32((uint32_t)(EDX));
  /* 12a0bcc1 call 0x12a0c010 */
  push32(0x12a0bcc6u); f_12a0c010();
  /* 12a0bcc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0bcc9:;
  /* 12a0bcc9 jmp 0x12a0bcd0 */
  goto L_12a0bcd0;
L_12a0bccb:;
  /* 12a0bccb jmp 0x12a0bb21 */
  goto L_12a0bb21;
L_12a0bcd0:;
  /* 12a0bcd0 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 12a0bcd2 call 0x12a063c0 */
  push32(0x12a0bcd7u); f_12a063c0();
  /* 12a0bcd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bcda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bcdd pop esi */
  ESI = (pop32());
  /* 12a0bcde mov esp, ebp */
  ESP = (EBP);
  /* 12a0bce0 pop ebp */
  EBP = (pop32());
  /* 12a0bce1 ret  */
  ESPCHK(0x12a0bb00u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x12a0bcf0 (183 bytes, 57 insns) */
void f_12a0bcf0(void) {
  FTRACE(0x12a0bcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0bcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0bcf1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0bcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0bcf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bcf7 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bcfd jae 0x12a0bd8a */
  if (!C.cf) goto L_12a0bd8a;
  /* 12a0bd03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bd06 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0bd09 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bd0c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0bd0f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bd12 mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0bd19 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bd1d jne 0x12a0bd8a */
  if (!C.zf) goto L_12a0bd8a;
  /* 12a0bd1f cmp dword ptr [0x12a2e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bd26 jne 0x12a0bd6a */
  if (!C.zf) goto L_12a0bd6a;
  /* 12a0bd28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bd2b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0bd2e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bd32 je 0x12a0bd42 */
  if (C.zf) goto L_12a0bd42;
  /* 12a0bd34 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bd38 je 0x12a0bd50 */
  if (C.zf) goto L_12a0bd50;
  /* 12a0bd3a cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bd3e je 0x12a0bd5e */
  if (C.zf) goto L_12a0bd5e;
  /* 12a0bd40 jmp 0x12a0bd6a */
  goto L_12a0bd6a;
L_12a0bd42:;
  /* 12a0bd42 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bd45 push edx */
  push32((uint32_t)(EDX));
  /* 12a0bd46 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12a0bd48 call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0bd4eu);
  /* 12a0bd4e jmp 0x12a0bd6a */
  goto L_12a0bd6a;
L_12a0bd50:;
  /* 12a0bd50 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bd53 push eax */
  push32((uint32_t)(EAX));
  /* 12a0bd54 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12a0bd56 call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0bd5cu);
  /* 12a0bd5c jmp 0x12a0bd6a */
  goto L_12a0bd6a;
L_12a0bd5e:;
  /* 12a0bd5e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bd61 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0bd62 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12a0bd64 call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0bd6au);
L_12a0bd6a:;
  /* 12a0bd6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bd6d sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12a0bd70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bd73 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bd76 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bd79 mov ecx, dword ptr [edx*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0bd80 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bd83 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 12a0bd86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bd88 jmp 0x12a0bda3 */
  goto L_12a0bda3;
L_12a0bd8a:;
  /* 12a0bd8a call 0x12a0a7f0 */
  push32(0x12a0bd8fu); f_12a0a7f0();
  /* 12a0bd8f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0bd95 call 0x12a0a800 */
  push32(0x12a0bd9au); f_12a0a800();
  /* 12a0bd9a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0bda0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a0bda3:;
  /* 12a0bda3 mov esp, ebp */
  ESP = (EBP);
  /* 12a0bda5 pop ebp */
  EBP = (pop32());
  /* 12a0bda6 ret  */
  ESPCHK(0x12a0bcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x12a0bdb0 (216 bytes, 63 insns) */
void f_12a0bdb0(void) {
  FTRACE(0x12a0bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0bdb3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0bdb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bdb7 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bdbd jae 0x12a0be6b */
  if (!C.cf) goto L_12a0be6b;
  /* 12a0bdc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bdc6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0bdc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bdcc and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0bdcf imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bdd2 mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0bdd9 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0bdde and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0bde1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0bde3 je 0x12a0be6b */
  if (C.zf) goto L_12a0be6b;
  /* 12a0bde9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bdec sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12a0bdef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bdf2 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bdf5 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bdf8 mov ecx, dword ptr [edx*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0bdff cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be03 je 0x12a0be6b */
  if (C.zf) goto L_12a0be6b;
  /* 12a0be05 cmp dword ptr [0x12a2e47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be0c jne 0x12a0be4a */
  if (!C.zf) goto L_12a0be4a;
  /* 12a0be0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0be11 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0be14 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be18 je 0x12a0be28 */
  if (C.zf) goto L_12a0be28;
  /* 12a0be1a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be1e je 0x12a0be34 */
  if (C.zf) goto L_12a0be34;
  /* 12a0be20 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be24 je 0x12a0be40 */
  if (C.zf) goto L_12a0be40;
  /* 12a0be26 jmp 0x12a0be4a */
  goto L_12a0be4a;
L_12a0be28:;
  /* 12a0be28 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0be2a push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 12a0be2c call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0be32u);
  /* 12a0be32 jmp 0x12a0be4a */
  goto L_12a0be4a;
L_12a0be34:;
  /* 12a0be34 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0be36 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 12a0be38 call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0be3eu);
  /* 12a0be3e jmp 0x12a0be4a */
  goto L_12a0be4a;
L_12a0be40:;
  /* 12a0be40 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0be42 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 12a0be44 call dword ptr [0x12a30324] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30324))), 0x12a0be4au);
L_12a0be4a:;
  /* 12a0be4a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0be4d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0be50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0be53 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0be56 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0be59 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0be60 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 12a0be67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0be69 jmp 0x12a0be84 */
  goto L_12a0be84;
L_12a0be6b:;
  /* 12a0be6b call 0x12a0a7f0 */
  push32(0x12a0be70u); f_12a0a7f0();
  /* 12a0be70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0be76 call 0x12a0a800 */
  push32(0x12a0be7bu); f_12a0a800();
  /* 12a0be7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0be81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a0be84:;
  /* 12a0be84 mov esp, ebp */
  ESP = (EBP);
  /* 12a0be86 pop ebp */
  EBP = (pop32());
  /* 12a0be87 ret  */
  ESPCHK(0x12a0bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be90 @ 0x12a0be90 (102 bytes, 30 insns) */
void f_12a0be90(void) {
  FTRACE(0x12a0be90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0be90 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0be91 mov ebp, esp */
  EBP = (ESP);
  /* 12a0be93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0be96 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0be9c jae 0x12a0bedb */
  if (!C.cf) goto L_12a0bedb;
  /* 12a0be9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bea1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0bea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bea7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0beaa imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bead mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0beb4 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0beb9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0bebc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0bebe je 0x12a0bedb */
  if (C.zf) goto L_12a0bedb;
  /* 12a0bec0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bec3 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 12a0bec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bec9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0becc imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0becf mov ecx, dword ptr [edx*4 + 0x12a2fe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x12a2fe60)));
  /* 12a0bed6 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 12a0bed9 jmp 0x12a0bef4 */
  goto L_12a0bef4;
L_12a0bedb:;
  /* 12a0bedb call 0x12a0a7f0 */
  push32(0x12a0bee0u); f_12a0a7f0();
  /* 12a0bee0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0bee6 call 0x12a0a800 */
  push32(0x12a0beebu); f_12a0a800();
  /* 12a0beeb mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0bef1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12a0bef4:;
  /* 12a0bef4 pop ebp */
  EBP = (pop32());
  /* 12a0bef5 ret  */
  ESPCHK(0x12a0be90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf00 @ 0x12a0bf00 (260 bytes, 83 insns) */
void f_12a0bf00(void) {
  FTRACE(0x12a0bf00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0bf00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0bf01 mov ebp, esp */
  EBP = (ESP);
  /* 12a0bf03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0bf06 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0bf0a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bf0d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bf10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0bf12 je 0x12a0bf1d */
  if (C.zf) goto L_12a0bf1d;
  /* 12a0bf14 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bf17 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12a0bf1a mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_12a0bf1d:;
  /* 12a0bf1d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bf20 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0bf26 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0bf28 je 0x12a0bf32 */
  if (C.zf) goto L_12a0bf32;
  /* 12a0bf2a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bf2d or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 12a0bf2f mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_12a0bf32:;
  /* 12a0bf32 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0bf35 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0bf3b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0bf3d je 0x12a0bf48 */
  if (C.zf) goto L_12a0bf48;
  /* 12a0bf3f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bf42 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 12a0bf45 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12a0bf48:;
  /* 12a0bf48 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bf4b push eax */
  push32((uint32_t)(EAX));
  /* 12a0bf4c call dword ptr [0x12a302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a0))), 0x12a0bf52u);
  /* 12a0bf52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0bf55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bf59 jne 0x12a0bf72 */
  if (!C.zf) goto L_12a0bf72;
  /* 12a0bf5b call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0bf61u);
  /* 12a0bf61 push eax */
  push32((uint32_t)(EAX));
  /* 12a0bf62 call 0x12a0a750 */
  push32(0x12a0bf67u); f_12a0a750();
  /* 12a0bf67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bf6a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bf6d jmp 0x12a0c000 */
  goto L_12a0c000;
L_12a0bf72:;
  /* 12a0bf72 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bf76 jne 0x12a0bf83 */
  if (!C.zf) goto L_12a0bf83;
  /* 12a0bf78 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bf7b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 12a0bf7e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12a0bf81 jmp 0x12a0bf92 */
  goto L_12a0bf92;
L_12a0bf83:;
  /* 12a0bf83 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bf87 jne 0x12a0bf92 */
  if (!C.zf) goto L_12a0bf92;
  /* 12a0bf89 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bf8c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12a0bf8f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_12a0bf92:;
  /* 12a0bf92 call 0x12a0bb00 */
  push32(0x12a0bf97u); f_12a0bb00();
  /* 12a0bf97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0bf9a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0bf9e jne 0x12a0bfbb */
  if (!C.zf) goto L_12a0bfbb;
  /* 12a0bfa0 call 0x12a0a7f0 */
  push32(0x12a0bfa5u); f_12a0a7f0();
  /* 12a0bfa5 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 12a0bfab call 0x12a0a800 */
  push32(0x12a0bfb0u); f_12a0a800();
  /* 12a0bfb0 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0bfb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0bfb9 jmp 0x12a0c000 */
  goto L_12a0c000;
L_12a0bfbb:;
  /* 12a0bfbb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0bfbe push eax */
  push32((uint32_t)(EAX));
  /* 12a0bfbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bfc2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0bfc3 call 0x12a0bcf0 */
  push32(0x12a0bfc8u); f_12a0bcf0();
  /* 12a0bfc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bfcb mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bfce or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 12a0bfd1 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 12a0bfd4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bfd7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0bfda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bfdd and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0bfe0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0bfe3 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0bfea mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12a0bfed mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 12a0bff1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0bff4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0bff5 call 0x12a0c0a0 */
  push32(0x12a0bffau); f_12a0c0a0();
  /* 12a0bffa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0bffd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0c000:;
  /* 12a0c000 mov esp, ebp */
  ESP = (EBP);
  /* 12a0c002 pop ebp */
  EBP = (pop32());
  /* 12a0c003 ret  */
  ESPCHK(0x12a0bf00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c010 @ 0x12a0c010 (134 bytes, 44 insns) */
void f_12a0c010(void) {
  FTRACE(0x12a0c010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c010 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c011 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c013 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c017 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0c01a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c01d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c020 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c023 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0c02a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c02c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12a0c02f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c032 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c036 jne 0x12a0c071 */
  if (!C.zf) goto L_12a0c071;
  /* 12a0c038 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0c03a call 0x12a06320 */
  push32(0x12a0c03fu); f_12a06320();
  /* 12a0c03f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c042 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c045 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c049 jne 0x12a0c067 */
  if (!C.zf) goto L_12a0c067;
  /* 12a0c04b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c04e add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c051 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c052 call dword ptr [0x12a302e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e0))), 0x12a0c058u);
  /* 12a0c058 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c05b mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0c05e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c061 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c064 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_12a0c067:;
  /* 12a0c067 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 12a0c069 call 0x12a063c0 */
  push32(0x12a0c06eu); f_12a063c0();
  /* 12a0c06e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0c071:;
  /* 12a0c071 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c074 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0c077 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c07a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c07d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c080 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0c087 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12a0c08b push eax */
  push32((uint32_t)(EAX));
  /* 12a0c08c call dword ptr [0x12a302e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e4))), 0x12a0c092u);
  /* 12a0c092 mov esp, ebp */
  ESP = (EBP);
  /* 12a0c094 pop ebp */
  EBP = (pop32());
  /* 12a0c095 ret  */
  ESPCHK(0x12a0c010u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x12a0c0a0 (38 bytes, 13 insns) */
void f_12a0c0a0(void) {
  FTRACE(0x12a0c0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c0a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c0a6 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0c0a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c0ac and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c0af imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c0b2 mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0c0b9 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 12a0c0bd push eax */
  push32((uint32_t)(EAX));
  /* 12a0c0be call dword ptr [0x12a302e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302e8))), 0x12a0c0c4u);
  /* 12a0c0c4 pop ebp */
  EBP = (pop32());
  /* 12a0c0c5 ret  */
  ESPCHK(0x12a0c0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0d0 @ 0x12a0c0d0 (218 bytes, 63 insns) */
void f_12a0c0d0(void) {
  FTRACE(0x12a0c0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c0d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c0d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c0d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0c0dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c0df call 0x12a06320 */
  push32(0x12a0c0e4u); f_12a06320();
  /* 12a0c0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c0e7 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 12a0c0ee jmp 0x12a0c0f9 */
  goto L_12a0c0f9;
L_12a0c0f0:;
  /* 12a0c0f0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c0f3 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c0f6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0c0f9:;
  /* 12a0c0f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c0fc cmp ecx, dword ptr [0x12a2fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c102 jge 0x12a0c199 */
  if ((C.sf==C.of)) goto L_12a0c199;
  /* 12a0c108 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c10b mov eax, dword ptr [0x12a2e818] */
  EAX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c110 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c114 je 0x12a0c194 */
  if (C.zf) goto L_12a0c194;
  /* 12a0c116 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c119 mov edx, dword ptr [0x12a2e818] */
  EDX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c11f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12a0c122 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0c125 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c12b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0c12d je 0x12a0c151 */
  if (C.zf) goto L_12a0c151;
  /* 12a0c12f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c132 mov eax, dword ptr [0x12a2e818] */
  EAX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c137 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0c13a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c13b call 0x12a0cec0 */
  push32(0x12a0c140u); f_12a0cec0();
  /* 12a0c140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c143 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c146 je 0x12a0c151 */
  if (C.zf) goto L_12a0c151;
  /* 12a0c148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c14b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c14e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12a0c151:;
  /* 12a0c151 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c155 jl 0x12a0c194 */
  if ((C.sf!=C.of)) goto L_12a0c194;
  /* 12a0c157 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c15a mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c160 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0c163 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c166 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c167 call dword ptr [0x12a302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302a8))), 0x12a0c16du);
  /* 12a0c16d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c16f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c172 mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c178 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0c17b push edx */
  push32((uint32_t)(EDX));
  /* 12a0c17c call 0x12a033b0 */
  push32(0x12a0c181u); f_12a033b0();
  /* 12a0c181 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c184 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c187 mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c18d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_12a0c194:;
  /* 12a0c194 jmp 0x12a0c0f0 */
  goto L_12a0c0f0;
L_12a0c199:;
  /* 12a0c199 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c19b call 0x12a063c0 */
  push32(0x12a0c1a0u); f_12a063c0();
  /* 12a0c1a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c1a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c1a6 mov esp, ebp */
  ESP = (EBP);
  /* 12a0c1a8 pop ebp */
  EBP = (pop32());
  /* 12a0c1a9 ret  */
  ESPCHK(0x12a0c0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b0 @ 0x12a0c1b0 (68 bytes, 26 insns) */
void f_12a0c1b0(void) {
  FTRACE(0x12a0c1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c1b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c1b4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c1b8 jne 0x12a0c1c6 */
  if (!C.zf) goto L_12a0c1c6;
  /* 12a0c1ba push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0c1bc call 0x12a0c320 */
  push32(0x12a0c1c1u); f_12a0c320();
  /* 12a0c1c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c1c4 jmp 0x12a0c1f0 */
  goto L_12a0c1f0;
L_12a0c1c6:;
  /* 12a0c1c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c1c9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c1ca call 0x12a0b730 */
  push32(0x12a0c1cfu); f_12a0b730();
  /* 12a0c1cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c1d6 call 0x12a0c200 */
  push32(0x12a0c1dbu); f_12a0c200();
  /* 12a0c1db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c1de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0c1e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c1e4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c1e5 call 0x12a0b7a0 */
  push32(0x12a0c1eau); f_12a0b7a0();
  /* 12a0c1ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c1ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0c1f0:;
  /* 12a0c1f0 mov esp, ebp */
  ESP = (EBP);
  /* 12a0c1f2 pop ebp */
  EBP = (pop32());
  /* 12a0c1f3 ret  */
  ESPCHK(0x12a0c1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c200 @ 0x12a0c200 (65 bytes, 26 insns) */
void f_12a0c200(void) {
  FTRACE(0x12a0c200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c200 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c201 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c203 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c206 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c207 call 0x12a0c250 */
  push32(0x12a0c20cu); f_12a0c250();
  /* 12a0c20c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c20f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c211 je 0x12a0c218 */
  if (C.zf) goto L_12a0c218;
  /* 12a0c213 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c216 jmp 0x12a0c23f */
  goto L_12a0c23f;
L_12a0c218:;
  /* 12a0c218 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c21b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0c21e and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0c224 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0c226 je 0x12a0c23d */
  if (C.zf) goto L_12a0c23d;
  /* 12a0c228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c22b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0c22e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c22f call 0x12a0d010 */
  push32(0x12a0c234u); f_12a0d010();
  /* 12a0c234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c237 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0c239 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c23b jmp 0x12a0c23f */
  goto L_12a0c23f;
L_12a0c23d:;
  /* 12a0c23d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0c23f:;
  /* 12a0c23f pop ebp */
  EBP = (pop32());
  /* 12a0c240 ret  */
  ESPCHK(0x12a0c200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c250 @ 0x12a0c250 (183 bytes, 62 insns) */
void f_12a0c250(void) {
  FTRACE(0x12a0c250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c250 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c251 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c253 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c256 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0c25d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c260 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0c263 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c266 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0c269 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0c26c cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c26f jne 0x12a0c2eb */
  if (!C.zf) goto L_12a0c2eb;
  /* 12a0c271 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c274 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0c277 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c27d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0c27f je 0x12a0c2eb */
  if (C.zf) goto L_12a0c2eb;
  /* 12a0c281 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c287 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12a0c289 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c28c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0c28f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c293 jle 0x12a0c2eb */
  if ((C.zf||C.sf!=C.of)) goto L_12a0c2eb;
  /* 12a0c295 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c298 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c299 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c29c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0c29f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c2a0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2a3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12a0c2a6 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c2a7 call 0x12a0b1c0 */
  push32(0x12a0c2acu); f_12a0b1c0();
  /* 12a0c2ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c2af cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c2b2 jne 0x12a0c2d5 */
  if (!C.zf) goto L_12a0c2d5;
  /* 12a0c2b4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0c2ba and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0c2c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0c2c2 je 0x12a0c2d3 */
  if (C.zf) goto L_12a0c2d3;
  /* 12a0c2c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2c7 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0c2ca and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c2cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2d0 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_12a0c2d3:;
  /* 12a0c2d3 jmp 0x12a0c2eb */
  goto L_12a0c2eb;
L_12a0c2d5:;
  /* 12a0c2d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2d8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0c2db or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c2de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2e1 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12a0c2e4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0c2eb:;
  /* 12a0c2eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2f1 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a0c2f4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0c2f6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c2f9 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 12a0c300 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c303 mov esp, ebp */
  ESP = (EBP);
  /* 12a0c305 pop ebp */
  EBP = (pop32());
  /* 12a0c306 ret  */
  ESPCHK(0x12a0c250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c310 @ 0x12a0c310 (15 bytes, 7 insns) */
void f_12a0c310(void) {
  FTRACE(0x12a0c310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c310 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c311 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c313 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0c315 call 0x12a0c320 */
  push32(0x12a0c31au); f_12a0c320();
  /* 12a0c31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c31d pop ebp */
  EBP = (pop32());
  /* 12a0c31e ret  */
  ESPCHK(0x12a0c310u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x12a0c320 (319 bytes, 94 insns) */
void f_12a0c320(void) {
  FTRACE(0x12a0c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c320 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c321 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c326 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0c32d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0c334 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c336 call 0x12a06320 */
  push32(0x12a0c33bu); f_12a06320();
  /* 12a0c33b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c33e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0c345 jmp 0x12a0c350 */
  goto L_12a0c350;
L_12a0c347:;
  /* 12a0c347 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c34a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c34d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0c350:;
  /* 12a0c350 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c353 cmp ecx, dword ptr [0x12a2fb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12a2fb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c359 jge 0x12a0c443 */
  if ((C.sf==C.of)) goto L_12a0c443;
  /* 12a0c35f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c362 mov eax, dword ptr [0x12a2e818] */
  EAX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c367 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c36b je 0x12a0c43e */
  if (C.zf) goto L_12a0c43e;
  /* 12a0c371 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c374 mov edx, dword ptr [0x12a2e818] */
  EDX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c37a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12a0c37d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12a0c380 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0c386 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0c388 je 0x12a0c43e */
  if (C.zf) goto L_12a0c43e;
  /* 12a0c38e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c391 mov eax, dword ptr [0x12a2e818] */
  EAX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c396 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0c399 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c39a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c39d push edx */
  push32((uint32_t)(EDX));
  /* 12a0c39e call 0x12a0b770 */
  push32(0x12a0c3a3u); f_12a0b770();
  /* 12a0c3a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c3a6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c3a9 mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c3af mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0c3b2 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a0c3b5 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c3ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c3bc je 0x12a0c425 */
  if (C.zf) goto L_12a0c425;
  /* 12a0c3be cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c3c2 jne 0x12a0c3e9 */
  if (!C.zf) goto L_12a0c3e9;
  /* 12a0c3c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c3c7 mov edx, dword ptr [0x12a2e818] */
  EDX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c3cd mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12a0c3d0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c3d1 call 0x12a0c200 */
  push32(0x12a0c3d6u); f_12a0c200();
  /* 12a0c3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c3d9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c3dc je 0x12a0c3e7 */
  if (C.zf) goto L_12a0c3e7;
  /* 12a0c3de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c3e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c3e4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a0c3e7:;
  /* 12a0c3e7 jmp 0x12a0c425 */
  goto L_12a0c425;
L_12a0c3e9:;
  /* 12a0c3e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c3ed jne 0x12a0c425 */
  if (!C.zf) goto L_12a0c425;
  /* 12a0c3ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c3f2 mov eax, dword ptr [0x12a2e818] */
  EAX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c3f7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12a0c3fa mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0c3fd and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0c400 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0c402 je 0x12a0c425 */
  if (C.zf) goto L_12a0c425;
  /* 12a0c404 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c407 mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c40d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0c410 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c411 call 0x12a0c200 */
  push32(0x12a0c416u); f_12a0c200();
  /* 12a0c416 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c419 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c41c jne 0x12a0c425 */
  if (!C.zf) goto L_12a0c425;
  /* 12a0c41e mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_12a0c425:;
  /* 12a0c425 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c428 mov ecx, dword ptr [0x12a2e818] */
  ECX = (r32((uint32_t)(0x12a2e818)));
  /* 12a0c42e mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12a0c431 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c432 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c435 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c436 call 0x12a0b7e0 */
  push32(0x12a0c43bu); f_12a0b7e0();
  /* 12a0c43b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0c43e:;
  /* 12a0c43e jmp 0x12a0c347 */
  goto L_12a0c347;
L_12a0c443:;
  /* 12a0c443 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c445 call 0x12a063c0 */
  push32(0x12a0c44au); f_12a063c0();
  /* 12a0c44a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c44d cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c451 jne 0x12a0c458 */
  if (!C.zf) goto L_12a0c458;
  /* 12a0c453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c456 jmp 0x12a0c45b */
  goto L_12a0c45b;
L_12a0c458:;
  /* 12a0c458 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0c45b:;
  /* 12a0c45b mov esp, ebp */
  ESP = (EBP);
  /* 12a0c45d pop ebp */
  EBP = (pop32());
  /* 12a0c45e ret  */
  ESPCHK(0x12a0c320u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x12a0c460 (15 bytes, 7 insns) */
void f_12a0c460(void) {
  FTRACE(0x12a0c460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c460 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c461 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c463 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c465 call 0x12a01890 */
  push32(0x12a0c46au); f_12a01890();
  /* 12a0c46a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c46d pop ebp */
  EBP = (pop32());
  /* 12a0c46e ret  */
  ESPCHK(0x12a0c460u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c470 @ 0x12a0c470 (1007 bytes, 269 insns) */
void f_12a0c470(void) {
  FTRACE(0x12a0c470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c470 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c471 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c473 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c479 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c47d jl 0x12a0c485 */
  if ((C.sf!=C.of)) goto L_12a0c485;
  /* 12a0c47f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c483 jle 0x12a0c48c */
  if ((C.zf||C.sf!=C.of)) goto L_12a0c48c;
L_12a0c485:;
  /* 12a0c485 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c487 jmp 0x12a0c85b */
  goto L_12a0c85b;
L_12a0c48c:;
  /* 12a0c48c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0c48e call 0x12a06320 */
  push32(0x12a0c493u); f_12a06320();
  /* 12a0c493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c496 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a0c49d mov eax, dword ptr [0x12a2e804] */
  EAX = (r32((uint32_t)(0x12a2e804)));
  /* 12a0c4a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c4a5 mov dword ptr [0x12a2e804], eax */
  w32((uint32_t)(0x12a2e804), (EAX));
L_12a0c4aa:;
  /* 12a0c4aa cmp dword ptr [0x12a2e814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c4b1 je 0x12a0c4bd */
  if (C.zf) goto L_12a0c4bd;
  /* 12a0c4b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0c4b5 call dword ptr [0x12a30328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30328))), 0x12a0c4bbu);
  /* 12a0c4bb jmp 0x12a0c4aa */
  goto L_12a0c4aa;
L_12a0c4bd:;
  /* 12a0c4bd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c4c1 je 0x12a0c501 */
  if (C.zf) goto L_12a0c501;
  /* 12a0c4c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c4c7 je 0x12a0c4e1 */
  if (C.zf) goto L_12a0c4e1;
  /* 12a0c4c9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c4cc push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c4cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c4d0 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c4d1 call 0x12a0c860 */
  push32(0x12a0c4d6u); f_12a0c860();
  /* 12a0c4d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c4d9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12a0c4df jmp 0x12a0c4f3 */
  goto L_12a0c4f3;
L_12a0c4e1:;
  /* 12a0c4e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c4e4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c4e7 mov ecx, dword ptr [eax + 0x12a2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12a2d4dc)));
  /* 12a0c4ed mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_12a0c4f3:;
  /* 12a0c4f3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12a0c4f9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0c4fc jmp 0x12a0c83b */
  goto L_12a0c83b;
L_12a0c501:;
  /* 12a0c501 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 12a0c508 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0c50f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c513 je 0x12a0c833 */
  if (C.zf) goto L_12a0c833;
  /* 12a0c519 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c51c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0c51f cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c522 jne 0x12a0c744 */
  if (!C.zf) goto L_12a0c744;
  /* 12a0c528 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c52b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a0c52f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c532 jne 0x12a0c744 */
  if (!C.zf) goto L_12a0c744;
  /* 12a0c538 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c53b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 12a0c53f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c542 jne 0x12a0c744 */
  if (!C.zf) goto L_12a0c744;
  /* 12a0c548 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c54b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_12a0c551:;
  /* 12a0c551 push 0x12a29f9c */
  push32((uint32_t)(0x12a29f9cu));
  /* 12a0c556 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a0c55c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c55d call 0x12a0e6c0 */
  push32(0x12a0c562u); f_12a0e6c0();
  /* 12a0c562 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c565 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 12a0c56b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c572 je 0x12a0c59d */
  if (C.zf) goto L_12a0c59d;
  /* 12a0c574 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c57a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c580 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 12a0c586 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c58d je 0x12a0c59d */
  if (C.zf) goto L_12a0c59d;
  /* 12a0c58f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c595 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0c598 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c59b jne 0x12a0c5c3 */
  if (!C.zf) goto L_12a0c5c3;
L_12a0c59d:;
  /* 12a0c59d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c5a1 je 0x12a0c5bc */
  if (C.zf) goto L_12a0c5bc;
  /* 12a0c5a3 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0c5a5 call 0x12a063c0 */
  push32(0x12a0c5aau); f_12a063c0();
  /* 12a0c5aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c5ad mov edx, dword ptr [0x12a2e804] */
  EDX = (r32((uint32_t)(0x12a2e804)));
  /* 12a0c5b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c5b6 mov dword ptr [0x12a2e804], edx */
  w32((uint32_t)(0x12a2e804), (EDX));
L_12a0c5bc:;
  /* 12a0c5bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c5be jmp 0x12a0c85b */
  goto L_12a0c85b;
L_12a0c5c3:;
  /* 12a0c5c3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 12a0c5ca jmp 0x12a0c5d5 */
  goto L_12a0c5d5;
L_12a0c5cc:;
  /* 12a0c5cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c5cf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c5d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12a0c5d5:;
  /* 12a0c5d5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c5d9 jg 0x12a0c623 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0c623;
  /* 12a0c5db mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12a0c5e1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c5e2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a0c5e8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c5e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c5ec imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c5ef mov ecx, dword ptr [eax + 0x12a2d4d8] */
  ECX = (r32((uint32_t)(EAX + 0x12a2d4d8)));
  /* 12a0c5f5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c5f6 call 0x12a0e680 */
  push32(0x12a0c5fbu); f_12a0e680();
  /* 12a0c5fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c5fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c600 jne 0x12a0c621 */
  if (!C.zf) goto L_12a0c621;
  /* 12a0c602 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c605 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c608 mov eax, dword ptr [edx + 0x12a2d4d8] */
  EAX = (r32((uint32_t)(EDX + 0x12a2d4d8)));
  /* 12a0c60e push eax */
  push32((uint32_t)(EAX));
  /* 12a0c60f call 0x12a05750 */
  push32(0x12a0c614u); f_12a05750();
  /* 12a0c614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c617 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c61d jne 0x12a0c621 */
  if (!C.zf) goto L_12a0c621;
  /* 12a0c61f jmp 0x12a0c623 */
  goto L_12a0c623;
L_12a0c621:;
  /* 12a0c621 jmp 0x12a0c5cc */
  goto L_12a0c5cc;
L_12a0c623:;
  /* 12a0c623 push 0x12a29f98 */
  push32((uint32_t)(0x12a29f98u));
  /* 12a0c628 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c62e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c631 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 12a0c637 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c63d push edx */
  push32((uint32_t)(EDX));
  /* 12a0c63e call 0x12a0e640 */
  push32(0x12a0c643u); f_12a0e640();
  /* 12a0c643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c646 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 12a0c64c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c653 jne 0x12a0c689 */
  if (!C.zf) goto L_12a0c689;
  /* 12a0c655 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c65b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0c65e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c661 je 0x12a0c689 */
  if (C.zf) goto L_12a0c689;
  /* 12a0c663 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c667 je 0x12a0c682 */
  if (C.zf) goto L_12a0c682;
  /* 12a0c669 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0c66b call 0x12a063c0 */
  push32(0x12a0c670u); f_12a063c0();
  /* 12a0c670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c673 mov edx, dword ptr [0x12a2e804] */
  EDX = (r32((uint32_t)(0x12a2e804)));
  /* 12a0c679 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c67c mov dword ptr [0x12a2e804], edx */
  w32((uint32_t)(0x12a2e804), (EDX));
L_12a0c682:;
  /* 12a0c682 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c684 jmp 0x12a0c85b */
  goto L_12a0c85b;
L_12a0c689:;
  /* 12a0c689 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c68d jg 0x12a0c6da */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0c6da;
  /* 12a0c68f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12a0c695 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c696 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c69c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c69d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12a0c6a3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c6a4 call 0x12a06140 */
  push32(0x12a0c6a9u); f_12a06140();
  /* 12a0c6a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c6ac mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12a0c6b2 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 12a0c6ba lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 12a0c6c0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c6c1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c6c4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c6c5 call 0x12a0c860 */
  push32(0x12a0c6cau); f_12a0c860();
  /* 12a0c6ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c6cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c6cf je 0x12a0c6da */
  if (C.zf) goto L_12a0c6da;
  /* 12a0c6d1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c6d4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c6d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0c6da:;
  /* 12a0c6da mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c6e0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c6e6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12a0c6ec mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a0c6f2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0c6f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c6f7 je 0x12a0c708 */
  if (C.zf) goto L_12a0c708;
  /* 12a0c6f9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a0c6ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c702 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_12a0c708:;
  /* 12a0c708 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12a0c70e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0c711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c713 jne 0x12a0c551 */
  if (!C.zf) goto L_12a0c551;
  /* 12a0c719 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c71d je 0x12a0c72c */
  if (C.zf) goto L_12a0c72c;
  /* 12a0c71f call 0x12a0ca00 */
  push32(0x12a0c724u); f_12a0ca00();
  /* 12a0c724 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 12a0c72a jmp 0x12a0c736 */
  goto L_12a0c736;
L_12a0c72c:;
  /* 12a0c72c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_12a0c736:;
  /* 12a0c736 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 12a0c73c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0c73f jmp 0x12a0c831 */
  goto L_12a0c831;
L_12a0c744:;
  /* 12a0c744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c747 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c748 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0c74a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0c74c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12a0c752 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c753 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c756 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c757 call 0x12a0cb00 */
  push32(0x12a0c75cu); f_12a0cb00();
  /* 12a0c75c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c75f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0c762 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c766 je 0x12a0c831 */
  if (C.zf) goto L_12a0c831;
  /* 12a0c76c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0c773 jmp 0x12a0c77e */
  goto L_12a0c77e;
L_12a0c775:;
  /* 12a0c775 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c778 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c77b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a0c77e:;
  /* 12a0c77e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c782 jg 0x12a0c7e0 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0c7e0;
  /* 12a0c784 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c788 je 0x12a0c7de */
  if (C.zf) goto L_12a0c7de;
  /* 12a0c78a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c78d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c790 mov ecx, dword ptr [eax + 0x12a2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12a2d4dc)));
  /* 12a0c796 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c797 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 12a0c79d push edx */
  push32((uint32_t)(EDX));
  /* 12a0c79e call 0x12a0e5b0 */
  push32(0x12a0c7a3u); f_12a0e5b0();
  /* 12a0c7a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c7a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c7a8 je 0x12a0c7d5 */
  if (C.zf) goto L_12a0c7d5;
  /* 12a0c7aa lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 12a0c7b0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c7b1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0c7b4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c7b5 call 0x12a0c860 */
  push32(0x12a0c7bau); f_12a0c860();
  /* 12a0c7ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c7bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c7bf je 0x12a0c7cc */
  if (C.zf) goto L_12a0c7cc;
  /* 12a0c7c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c7c4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c7c7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12a0c7ca jmp 0x12a0c7d3 */
  goto L_12a0c7d3;
L_12a0c7cc:;
  /* 12a0c7cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_12a0c7d3:;
  /* 12a0c7d3 jmp 0x12a0c7de */
  goto L_12a0c7de;
L_12a0c7d5:;
  /* 12a0c7d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c7d8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c7db mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12a0c7de:;
  /* 12a0c7de jmp 0x12a0c775 */
  goto L_12a0c775;
L_12a0c7e0:;
  /* 12a0c7e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c7e4 je 0x12a0c80b */
  if (C.zf) goto L_12a0c80b;
  /* 12a0c7e6 call 0x12a0ca00 */
  push32(0x12a0c7ebu); f_12a0ca00();
  /* 12a0c7eb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0c7ee push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c7f0 mov ecx, dword ptr [0x12a2d4dc] */
  ECX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0c7f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c7f7 call 0x12a033b0 */
  push32(0x12a0c7fcu); f_12a033b0();
  /* 12a0c7fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c7ff mov dword ptr [0x12a2d4dc], 0 */
  w32((uint32_t)(0x12a2d4dc), (0x0u));
  /* 12a0c809 jmp 0x12a0c831 */
  goto L_12a0c831;
L_12a0c80b:;
  /* 12a0c80b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c80f je 0x12a0c81e */
  if (C.zf) goto L_12a0c81e;
  /* 12a0c811 call 0x12a0ca00 */
  push32(0x12a0c816u); f_12a0ca00();
  /* 12a0c816 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 12a0c81c jmp 0x12a0c828 */
  goto L_12a0c828;
L_12a0c81e:;
  /* 12a0c81e mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_12a0c828:;
  /* 12a0c828 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 12a0c82e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12a0c831:;
  /* 12a0c831 jmp 0x12a0c83b */
  goto L_12a0c83b;
L_12a0c833:;
  /* 12a0c833 call 0x12a0ca00 */
  push32(0x12a0c838u); f_12a0ca00();
  /* 12a0c838 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0c83b:;
  /* 12a0c83b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c83f je 0x12a0c858 */
  if (C.zf) goto L_12a0c858;
  /* 12a0c841 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12a0c843 call 0x12a063c0 */
  push32(0x12a0c848u); f_12a063c0();
  /* 12a0c848 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c84b mov eax, dword ptr [0x12a2e804] */
  EAX = (r32((uint32_t)(0x12a2e804)));
  /* 12a0c850 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c853 mov dword ptr [0x12a2e804], eax */
  w32((uint32_t)(0x12a2e804), (EAX));
L_12a0c858:;
  /* 12a0c858 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0c85b:;
  /* 12a0c85b mov esp, ebp */
  ESP = (EBP);
  /* 12a0c85d pop ebp */
  EBP = (pop32());
  /* 12a0c85e ret  */
  ESPCHK(0x12a0c470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c860 @ 0x12a0c860 (403 bytes, 117 insns) */
void f_12a0c860(void) {
  FTRACE(0x12a0c860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0c860 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0c861 mov ebp, esp */
  EBP = (ESP);
  /* 12a0c863 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0c869 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c86c push eax */
  push32((uint32_t)(EAX));
  /* 12a0c86d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 12a0c873 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c874 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 12a0c87a push edx */
  push32((uint32_t)(EDX));
  /* 12a0c87b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 12a0c881 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c882 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0c885 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c886 call 0x12a0cb00 */
  push32(0x12a0c88bu); f_12a0cb00();
  /* 12a0c88b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c88e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c890 jne 0x12a0c899 */
  if (!C.zf) goto L_12a0c899;
  /* 12a0c892 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c894 jmp 0x12a0c9ef */
  goto L_12a0c9ef;
L_12a0c899:;
  /* 12a0c899 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 12a0c89e push 0x12a29fa0 */
  push32((uint32_t)(0x12a29fa0u));
  /* 12a0c8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c8a5 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 12a0c8ab push edx */
  push32((uint32_t)(EDX));
  /* 12a0c8ac call 0x12a05750 */
  push32(0x12a0c8b1u); f_12a05750();
  /* 12a0c8b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c8b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c8b7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0c8b8 call 0x12a02920 */
  push32(0x12a0c8bdu); f_12a02920();
  /* 12a0c8bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c8c0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0c8c3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c8c7 jne 0x12a0c8d0 */
  if (!C.zf) goto L_12a0c8d0;
  /* 12a0c8c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c8cb jmp 0x12a0c9ef */
  goto L_12a0c9ef;
L_12a0c8d0:;
  /* 12a0c8d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c8d3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c8d6 mov ecx, dword ptr [eax + 0x12a2d4dc] */
  ECX = (r32((uint32_t)(EAX + 0x12a2d4dc)));
  /* 12a0c8dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0c8df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c8e2 mov eax, dword ptr [edx*4 + 0x12a2e680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12a2e680)));
  /* 12a0c8e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0c8ec push 6 */
  push32((uint32_t)(0x6u));
  /* 12a0c8ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c8f1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c8f4 add ecx, 0x12a2e6d0 */
  { uint32_t _a=(ECX),_b=(0x12a2e6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c8fa push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c8fb lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 12a0c8fe push edx */
  push32((uint32_t)(EDX));
  /* 12a0c8ff call 0x12a09200 */
  push32(0x12a0c904u); f_12a09200();
  /* 12a0c904 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c907 mov eax, dword ptr [0x12a2e698] */
  EAX = (r32((uint32_t)(0x12a2e698)));
  /* 12a0c90c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a0c90f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 12a0c915 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c916 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c919 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c91a call 0x12a058d0 */
  push32(0x12a0c91fu); f_12a058d0();
  /* 12a0c91f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c922 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c925 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c928 mov dword ptr [ecx + 0x12a2d4dc], eax */
  w32((uint32_t)(ECX + 0x12a2d4dc), (EAX));
  /* 12a0c92e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 12a0c934 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0c93a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c93d mov dword ptr [eax*4 + 0x12a2e680], edx */
  w32((uint32_t)(EAX*4 + 0x12a2e680), (EDX));
  /* 12a0c944 push 6 */
  push32((uint32_t)(0x6u));
  /* 12a0c946 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 12a0c94c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0c94d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c950 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c953 add edx, 0x12a2e6d0 */
  { uint32_t _a=(EDX),_b=(0x12a2e6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c959 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c95a call 0x12a09200 */
  push32(0x12a0c95fu); f_12a09200();
  /* 12a0c95f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c962 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c966 jne 0x12a0c973 */
  if (!C.zf) goto L_12a0c973;
  /* 12a0c968 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c96e mov dword ptr [0x12a2e698], eax */
  w32((uint32_t)(0x12a2e698), (EAX));
L_12a0c973:;
  /* 12a0c973 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c977 jne 0x12a0c985 */
  if (!C.zf) goto L_12a0c985;
  /* 12a0c979 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12a0c97f mov dword ptr [0x12a2e69c], ecx */
  w32((uint32_t)(0x12a2e69c), (ECX));
L_12a0c985:;
  /* 12a0c985 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c988 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c98b call dword ptr [edx + 0x12a2d4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x12a2d4e0))), 0x12a0c991u);
  /* 12a0c991 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0c993 je 0x12a0c9cc */
  if (C.zf) goto L_12a0c9cc;
  /* 12a0c995 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c998 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c99b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c99e mov dword ptr [eax + 0x12a2d4dc], ecx */
  w32((uint32_t)(EAX + 0x12a2d4dc), (ECX));
  /* 12a0c9a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c9a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0c9a9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0c9aa call 0x12a033b0 */
  push32(0x12a0c9afu); f_12a033b0();
  /* 12a0c9af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0c9b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c9b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0c9b8 mov dword ptr [eax*4 + 0x12a2e680], ecx */
  w32((uint32_t)(EAX*4 + 0x12a2e680), (ECX));
  /* 12a0c9bf mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0c9c2 mov dword ptr [0x12a2e698], edx */
  w32((uint32_t)(0x12a2e698), (EDX));
  /* 12a0c9c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0c9ca jmp 0x12a0c9ef */
  goto L_12a0c9ef;
L_12a0c9cc:;
  /* 12a0c9cc cmp dword ptr [ebp - 0xc], 0x12a2d3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x12a2d3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0c9d3 je 0x12a0c9e3 */
  if (C.zf) goto L_12a0c9e3;
  /* 12a0c9d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0c9d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0c9da push eax */
  push32((uint32_t)(EAX));
  /* 12a0c9db call 0x12a033b0 */
  push32(0x12a0c9e0u); f_12a033b0();
  /* 12a0c9e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0c9e3:;
  /* 12a0c9e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0c9e6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0c9e9 mov eax, dword ptr [ecx + 0x12a2d4dc] */
  EAX = (r32((uint32_t)(ECX + 0x12a2d4dc)));
L_12a0c9ef:;
  /* 12a0c9ef mov esp, ebp */
  ESP = (EBP);
  /* 12a0c9f1 pop ebp */
  EBP = (pop32());
  /* 12a0c9f2 ret  */
  ESPCHK(0x12a0c860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca00 @ 0x12a0ca00 (256 bytes, 72 insns) */
void f_12a0ca00(void) {
  FTRACE(0x12a0ca00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ca00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ca01 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ca03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ca06 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12a0ca0d cmp dword ptr [0x12a2d4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2d4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ca14 jne 0x12a0ca34 */
  if (!C.zf) goto L_12a0ca34;
  /* 12a0ca16 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 12a0ca1b push 0x12a29fa0 */
  push32((uint32_t)(0x12a29fa0u));
  /* 12a0ca20 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ca22 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 12a0ca27 call 0x12a02920 */
  push32(0x12a0ca2cu); f_12a02920();
  /* 12a0ca2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ca2f mov dword ptr [0x12a2d4dc], eax */
  w32((uint32_t)(0x12a2d4dc), (EAX));
L_12a0ca34:;
  /* 12a0ca34 mov eax, dword ptr [0x12a2d4dc] */
  EAX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0ca39 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12a0ca3c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12a0ca43 jmp 0x12a0ca4e */
  goto L_12a0ca4e;
L_12a0ca45:;
  /* 12a0ca45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ca48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ca4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12a0ca4e:;
  /* 12a0ca4e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ca51 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0ca54 mov eax, dword ptr [edx + 0x12a2d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12a2d4dc)));
  /* 12a0ca5a push eax */
  push32((uint32_t)(EAX));
  /* 12a0ca5b push 0x12a29fac */
  push32((uint32_t)(0x12a29facu));
  /* 12a0ca60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ca63 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0ca66 mov edx, dword ptr [ecx + 0x12a2d4d8] */
  EDX = (r32((uint32_t)(ECX + 0x12a2d4d8)));
  /* 12a0ca6c push edx */
  push32((uint32_t)(EDX));
  /* 12a0ca6d push 3 */
  push32((uint32_t)(0x3u));
  /* 12a0ca6f mov eax, dword ptr [0x12a2d4dc] */
  EAX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0ca74 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ca75 call 0x12a0cca0 */
  push32(0x12a0ca7au); f_12a0cca0();
  /* 12a0ca7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ca7d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ca81 jge 0x12a0cac9 */
  if ((C.sf==C.of)) goto L_12a0cac9;
  /* 12a0ca83 push 0x12a29f98 */
  push32((uint32_t)(0x12a29f98u));
  /* 12a0ca88 mov ecx, dword ptr [0x12a2d4dc] */
  ECX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0ca8e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ca8f call 0x12a058e0 */
  push32(0x12a0ca94u); f_12a058e0();
  /* 12a0ca94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ca97 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ca9a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ca9d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0caa0 mov eax, dword ptr [edx + 0x12a2d4dc] */
  EAX = (r32((uint32_t)(EDX + 0x12a2d4dc)));
  /* 12a0caa6 push eax */
  push32((uint32_t)(EAX));
  /* 12a0caa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0caaa imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0caad mov edx, dword ptr [ecx + 0x12a2d4dc] */
  EDX = (r32((uint32_t)(ECX + 0x12a2d4dc)));
  /* 12a0cab3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cab4 call 0x12a0e5b0 */
  push32(0x12a0cab9u); f_12a0e5b0();
  /* 12a0cab9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cabc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cabe je 0x12a0cac7 */
  if (C.zf) goto L_12a0cac7;
  /* 12a0cac0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a0cac7:;
  /* 12a0cac7 jmp 0x12a0caf7 */
  goto L_12a0caf7;
L_12a0cac9:;
  /* 12a0cac9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cacd jne 0x12a0cad6 */
  if (!C.zf) goto L_12a0cad6;
  /* 12a0cacf mov eax, dword ptr [0x12a2d4dc] */
  EAX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0cad4 jmp 0x12a0cafc */
  goto L_12a0cafc;
L_12a0cad6:;
  /* 12a0cad6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0cad8 mov eax, dword ptr [0x12a2d4dc] */
  EAX = (r32((uint32_t)(0x12a2d4dc)));
  /* 12a0cadd push eax */
  push32((uint32_t)(EAX));
  /* 12a0cade call 0x12a033b0 */
  push32(0x12a0cae3u); f_12a033b0();
  /* 12a0cae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cae6 mov dword ptr [0x12a2d4dc], 0 */
  w32((uint32_t)(0x12a2d4dc), (0x0u));
  /* 12a0caf0 mov eax, dword ptr [0x12a2d4f4] */
  EAX = (r32((uint32_t)(0x12a2d4f4)));
  /* 12a0caf5 jmp 0x12a0cafc */
  goto L_12a0cafc;
L_12a0caf7:;
  /* 12a0caf7 jmp 0x12a0ca45 */
  goto L_12a0ca45;
L_12a0cafc:;
  /* 12a0cafc mov esp, ebp */
  ESP = (EBP);
  /* 12a0cafe pop ebp */
  EBP = (pop32());
  /* 12a0caff ret  */
  ESPCHK(0x12a0ca00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cb00 @ 0x12a0cb00 (388 bytes, 115 insns) */
void f_12a0cb00(void) {
  FTRACE(0x12a0cb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0cb00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0cb01 mov ebp, esp */
  EBP = (ESP);
  /* 12a0cb03 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0cb09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cb0d jne 0x12a0cb16 */
  if (!C.zf) goto L_12a0cb16;
  /* 12a0cb0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cb11 jmp 0x12a0cc80 */
  goto L_12a0cc80;
L_12a0cb16:;
  /* 12a0cb16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cb19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0cb1c cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cb1f jne 0x12a0cb70 */
  if (!C.zf) goto L_12a0cb70;
  /* 12a0cb21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cb24 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a0cb28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cb2a jne 0x12a0cb70 */
  if (!C.zf) goto L_12a0cb70;
  /* 12a0cb2c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cb2f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 12a0cb32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cb35 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 12a0cb39 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cb3d je 0x12a0cb59 */
  if (C.zf) goto L_12a0cb59;
  /* 12a0cb3f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0cb42 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 12a0cb47 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0cb4a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 12a0cb50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0cb53 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_12a0cb59:;
  /* 12a0cb59 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cb5d je 0x12a0cb68 */
  if (C.zf) goto L_12a0cb68;
  /* 12a0cb5f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0cb62 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12a0cb68:;
  /* 12a0cb68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cb6b jmp 0x12a0cc80 */
  goto L_12a0cc80;
L_12a0cb70:;
  /* 12a0cb70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cb73 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cb74 push 0x12a2d450 */
  push32((uint32_t)(0x12a2d450u));
  /* 12a0cb79 call 0x12a0e5b0 */
  push32(0x12a0cb7eu); f_12a0e5b0();
  /* 12a0cb7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cb81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cb83 je 0x12a0cc38 */
  if (C.zf) goto L_12a0cc38;
  /* 12a0cb89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cb8c push edx */
  push32((uint32_t)(EDX));
  /* 12a0cb8d push 0x12a2d3cc */
  push32((uint32_t)(0x12a2d3ccu));
  /* 12a0cb92 call 0x12a0e5b0 */
  push32(0x12a0cb97u); f_12a0e5b0();
  /* 12a0cb97 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cb9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cb9c je 0x12a0cc38 */
  if (C.zf) goto L_12a0cc38;
  /* 12a0cba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cba5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0cba6 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 12a0cbac push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cbad call 0x12a0ccf0 */
  push32(0x12a0cbb2u); f_12a0ccf0();
  /* 12a0cbb2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cbb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cbb7 je 0x12a0cbc0 */
  if (C.zf) goto L_12a0cbc0;
  /* 12a0cbb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cbbb jmp 0x12a0cc80 */
  goto L_12a0cc80;
L_12a0cbc0:;
  /* 12a0cbc0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12a0cbc6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cbc7 push 0x12a2e6a8 */
  push32((uint32_t)(0x12a2e6a8u));
  /* 12a0cbcc lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 12a0cbd2 push eax */
  push32((uint32_t)(EAX));
  /* 12a0cbd3 call 0x12a0e700 */
  push32(0x12a0cbd8u); f_12a0e700();
  /* 12a0cbd8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cbdb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cbdd jne 0x12a0cbe6 */
  if (!C.zf) goto L_12a0cbe6;
  /* 12a0cbdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cbe1 jmp 0x12a0cc80 */
  goto L_12a0cc80;
L_12a0cbe6:;
  /* 12a0cbe6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0cbe8 mov cx, word ptr [0x12a2e6ac] */
  CX = (r16((uint32_t)(0x12a2e6ac)));
  /* 12a0cbef mov dword ptr [0x12a2e6b0], ecx */
  w32((uint32_t)(0x12a2e6b0), (ECX));
  /* 12a0cbf5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 12a0cbfb push edx */
  push32((uint32_t)(EDX));
  /* 12a0cbfc push 0x12a2d450 */
  push32((uint32_t)(0x12a2d450u));
  /* 12a0cc01 call 0x12a0ce50 */
  push32(0x12a0cc06u); f_12a0ce50();
  /* 12a0cc06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cc09 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cc0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0cc0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0cc11 je 0x12a0cc26 */
  if (C.zf) goto L_12a0cc26;
  /* 12a0cc13 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cc16 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cc17 push 0x12a2d3cc */
  push32((uint32_t)(0x12a2d3ccu));
  /* 12a0cc1c call 0x12a058d0 */
  push32(0x12a0cc21u); f_12a058d0();
  /* 12a0cc21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cc24 jmp 0x12a0cc38 */
  goto L_12a0cc38;
L_12a0cc26:;
  /* 12a0cc26 push 0x12a2d450 */
  push32((uint32_t)(0x12a2d450u));
  /* 12a0cc2b push 0x12a2d3cc */
  push32((uint32_t)(0x12a2d3ccu));
  /* 12a0cc30 call 0x12a058d0 */
  push32(0x12a0cc35u); f_12a058d0();
  /* 12a0cc35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0cc38:;
  /* 12a0cc38 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cc3c je 0x12a0cc51 */
  if (C.zf) goto L_12a0cc51;
  /* 12a0cc3e push 6 */
  push32((uint32_t)(0x6u));
  /* 12a0cc40 push 0x12a2e6a8 */
  push32((uint32_t)(0x12a2e6a8u));
  /* 12a0cc45 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0cc48 push eax */
  push32((uint32_t)(EAX));
  /* 12a0cc49 call 0x12a09200 */
  push32(0x12a0cc4eu); f_12a09200();
  /* 12a0cc4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0cc51:;
  /* 12a0cc51 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cc55 je 0x12a0cc6a */
  if (C.zf) goto L_12a0cc6a;
  /* 12a0cc57 push 4 */
  push32((uint32_t)(0x4u));
  /* 12a0cc59 push 0x12a2e6b0 */
  push32((uint32_t)(0x12a2e6b0u));
  /* 12a0cc5e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0cc61 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cc62 call 0x12a09200 */
  push32(0x12a0cc67u); f_12a09200();
  /* 12a0cc67 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0cc6a:;
  /* 12a0cc6a push 0x12a2d450 */
  push32((uint32_t)(0x12a2d450u));
  /* 12a0cc6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cc72 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cc73 call 0x12a058d0 */
  push32(0x12a0cc78u); f_12a058d0();
  /* 12a0cc78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cc7b mov eax, 0x12a2d450 */
  EAX = (0x12a2d450u);
L_12a0cc80:;
  /* 12a0cc80 mov esp, ebp */
  ESP = (EBP);
  /* 12a0cc82 pop ebp */
  EBP = (pop32());
  /* 12a0cc83 ret  */
  ESPCHK(0x12a0cb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc90 @ 0x12a0cc90 (7 bytes, 5 insns) */
void f_12a0cc90(void) {
  FTRACE(0x12a0cc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0cc90 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0cc91 mov ebp, esp */
  EBP = (ESP);
  /* 12a0cc93 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cc95 pop ebp */
  EBP = (pop32());
  /* 12a0cc96 ret  */
  ESPCHK(0x12a0cc90u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x12a0cca0 (79 bytes, 28 insns) */
void f_12a0cca0(void) {
  FTRACE(0x12a0cca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0cca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0cca1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0cca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0cca6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12a0cca9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0ccac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0ccb3 jmp 0x12a0ccbe */
  goto L_12a0ccbe;
L_12a0ccb5:;
  /* 12a0ccb5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0ccb8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ccbb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a0ccbe:;
  /* 12a0ccbe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0ccc1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ccc4 jge 0x12a0cce4 */
  if ((C.sf==C.of)) goto L_12a0cce4;
  /* 12a0ccc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ccc9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cccc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0cccf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ccd2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12a0ccd5 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ccd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ccd9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ccda call 0x12a058e0 */
  push32(0x12a0ccdfu); f_12a058e0();
  /* 12a0ccdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cce2 jmp 0x12a0ccb5 */
  goto L_12a0ccb5;
L_12a0cce4:;
  /* 12a0cce4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0cceb mov esp, ebp */
  ESP = (EBP);
  /* 12a0cced pop ebp */
  EBP = (pop32());
  /* 12a0ccee ret  */
  ESPCHK(0x12a0cca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccf0 @ 0x12a0ccf0 (349 bytes, 122 insns) */
void f_12a0ccf0(void) {
  FTRACE(0x12a0ccf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ccf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ccf1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ccf3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ccf6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12a0ccfb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ccfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cd00 push eax */
  push32((uint32_t)(EAX));
  /* 12a0cd01 call 0x12a06690 */
  push32(0x12a0cd06u); f_12a06690();
  /* 12a0cd06 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd0c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0cd0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0cd11 jne 0x12a0cd1a */
  if (!C.zf) goto L_12a0cd1a;
  /* 12a0cd13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cd15 jmp 0x12a0ce49 */
  goto L_12a0ce49;
L_12a0cd1a:;
  /* 12a0cd1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0cd20 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cd23 jne 0x12a0cd50 */
  if (!C.zf) goto L_12a0cd50;
  /* 12a0cd25 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd28 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12a0cd2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cd2e je 0x12a0cd50 */
  if (C.zf) goto L_12a0cd50;
  /* 12a0cd30 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd33 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd36 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cd37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cd3a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd40 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cd41 call 0x12a058d0 */
  push32(0x12a0cd46u); f_12a058d0();
  /* 12a0cd46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cd4b jmp 0x12a0ce49 */
  goto L_12a0ce49;
L_12a0cd50:;
  /* 12a0cd50 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12a0cd57 jmp 0x12a0cd62 */
  goto L_12a0cd62;
L_12a0cd59:;
  /* 12a0cd59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0cd5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd5f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0cd62:;
  /* 12a0cd62 push 0x12a29fb0 */
  push32((uint32_t)(0x12a29fb0u));
  /* 12a0cd67 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd6a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cd6b call 0x12a0e640 */
  push32(0x12a0cd70u); f_12a0e640();
  /* 12a0cd70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd73 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0cd76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cd7a jne 0x12a0cd84 */
  if (!C.zf) goto L_12a0cd84;
  /* 12a0cd7c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cd7f jmp 0x12a0ce49 */
  goto L_12a0ce49;
L_12a0cd84:;
  /* 12a0cd84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cd87 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cd8a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0cd8c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12a0cd8f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cd93 jne 0x12a0cdba */
  if (!C.zf) goto L_12a0cdba;
  /* 12a0cd95 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cd99 jge 0x12a0cdba */
  if ((C.sf==C.of)) goto L_12a0cdba;
  /* 12a0cd9b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0cd9f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cda2 je 0x12a0cdba */
  if (C.zf) goto L_12a0cdba;
  /* 12a0cda4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0cda7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cda8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cdab push eax */
  push32((uint32_t)(EAX));
  /* 12a0cdac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cdaf push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cdb0 call 0x12a06140 */
  push32(0x12a0cdb5u); f_12a06140();
  /* 12a0cdb5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cdb8 jmp 0x12a0ce20 */
  goto L_12a0ce20;
L_12a0cdba:;
  /* 12a0cdba cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cdbe jne 0x12a0cde8 */
  if (!C.zf) goto L_12a0cde8;
  /* 12a0cdc0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cdc4 jge 0x12a0cde8 */
  if ((C.sf==C.of)) goto L_12a0cde8;
  /* 12a0cdc6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0cdca cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cdcd je 0x12a0cde8 */
  if (C.zf) goto L_12a0cde8;
  /* 12a0cdcf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0cdd2 push eax */
  push32((uint32_t)(EAX));
  /* 12a0cdd3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0cdd6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cdd7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cdda add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cddd push edx */
  push32((uint32_t)(EDX));
  /* 12a0cdde call 0x12a06140 */
  push32(0x12a0cde3u); f_12a06140();
  /* 12a0cde3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cde6 jmp 0x12a0ce20 */
  goto L_12a0ce20;
L_12a0cde8:;
  /* 12a0cde8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cdec jne 0x12a0ce1b */
  if (!C.zf) goto L_12a0ce1b;
  /* 12a0cdee movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0cdf2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cdf4 je 0x12a0cdff */
  if (C.zf) goto L_12a0cdff;
  /* 12a0cdf6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0cdfa cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cdfd jne 0x12a0ce1b */
  if (!C.zf) goto L_12a0ce1b;
L_12a0cdff:;
  /* 12a0cdff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0ce02 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ce03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce06 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ce07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ce0a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ce10 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ce11 call 0x12a06140 */
  push32(0x12a0ce16u); f_12a06140();
  /* 12a0ce16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ce19 jmp 0x12a0ce20 */
  goto L_12a0ce20;
L_12a0ce1b:;
  /* 12a0ce1b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ce1e jmp 0x12a0ce49 */
  goto L_12a0ce49;
L_12a0ce20:;
  /* 12a0ce20 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0ce24 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ce27 jne 0x12a0ce2b */
  if (!C.zf) goto L_12a0ce2b;
  /* 12a0ce29 jmp 0x12a0ce47 */
  goto L_12a0ce47;
L_12a0ce2b:;
  /* 12a0ce2b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0ce2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ce31 jne 0x12a0ce35 */
  if (!C.zf) goto L_12a0ce35;
  /* 12a0ce33 jmp 0x12a0ce47 */
  goto L_12a0ce47;
L_12a0ce35:;
  /* 12a0ce35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0ce38 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce3b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 12a0ce3f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12a0ce42 jmp 0x12a0cd59 */
  goto L_12a0cd59;
L_12a0ce47:;
  /* 12a0ce47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0ce49:;
  /* 12a0ce49 mov esp, ebp */
  ESP = (EBP);
  /* 12a0ce4b pop ebp */
  EBP = (pop32());
  /* 12a0ce4c ret  */
  ESPCHK(0x12a0ccf0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x12a0ce50 (101 bytes, 36 insns) */
void f_12a0ce50(void) {
  FTRACE(0x12a0ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ce51 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ce53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce56 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ce57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ce5a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ce5b call 0x12a058d0 */
  push32(0x12a0ce60u); f_12a058d0();
  /* 12a0ce60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ce63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce66 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 12a0ce6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ce6c je 0x12a0ce88 */
  if (C.zf) goto L_12a0ce88;
  /* 12a0ce6e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce71 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ce74 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ce75 push 0x12a29fb8 */
  push32((uint32_t)(0x12a29fb8u));
  /* 12a0ce7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ce7c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ce7f push edx */
  push32((uint32_t)(EDX));
  /* 12a0ce80 call 0x12a0cca0 */
  push32(0x12a0ce85u); f_12a0cca0();
  /* 12a0ce85 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0ce88:;
  /* 12a0ce88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce8b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 12a0ce92 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0ce94 je 0x12a0ceb3 */
  if (C.zf) goto L_12a0ceb3;
  /* 12a0ce96 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0ce99 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ce9f push edx */
  push32((uint32_t)(EDX));
  /* 12a0cea0 push 0x12a29fb4 */
  push32((uint32_t)(0x12a29fb4u));
  /* 12a0cea5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0cea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ceaa push eax */
  push32((uint32_t)(EAX));
  /* 12a0ceab call 0x12a0cca0 */
  push32(0x12a0ceb0u); f_12a0cca0();
  /* 12a0ceb0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0ceb3:;
  /* 12a0ceb3 pop ebp */
  EBP = (pop32());
  /* 12a0ceb4 ret  */
  ESPCHK(0x12a0ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x12a0cec0 (130 bytes, 50 insns) */
void f_12a0cec0(void) {
  FTRACE(0x12a0cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0cec1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0cec3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cec4 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0cec5 push esi */
  push32((uint32_t)(ESI));
  /* 12a0cec6 push edi */
  push32((uint32_t)(EDI));
  /* 12a0cec7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0cece:;
  /* 12a0cece cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ced2 jne 0x12a0cef2 */
  if (!C.zf) goto L_12a0cef2;
  /* 12a0ced4 push 0x12a29fc8 */
  push32((uint32_t)(0x12a29fc8u));
  /* 12a0ced9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0cedb push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12a0cedd push 0x12a29fbc */
  push32((uint32_t)(0x12a29fbcu));
  /* 12a0cee2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0cee4 call 0x12a019e0 */
  push32(0x12a0cee9u); f_12a019e0();
  /* 12a0cee9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ceec cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ceef jne 0x12a0cef2 */
  if (!C.zf) goto L_12a0cef2;
  /* 12a0cef1 int3  */
  x86_unimpl("int3 @ 0x12a0cef1");
L_12a0cef2:;
  /* 12a0cef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cef4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cef6 jne 0x12a0cece */
  if (!C.zf) goto L_12a0cece;
  /* 12a0cef8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cefb mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0cefe and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0cf01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0cf03 je 0x12a0cf11 */
  if (C.zf) goto L_12a0cf11;
  /* 12a0cf05 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cf08 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12a0cf0f jmp 0x12a0cf38 */
  goto L_12a0cf38;
L_12a0cf11:;
  /* 12a0cf11 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cf14 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cf15 call 0x12a0b730 */
  push32(0x12a0cf1au); f_12a0b730();
  /* 12a0cf1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cf1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cf20 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cf21 call 0x12a0cf50 */
  push32(0x12a0cf26u); f_12a0cf50();
  /* 12a0cf26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cf29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0cf2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cf2f push eax */
  push32((uint32_t)(EAX));
  /* 12a0cf30 call 0x12a0b7a0 */
  push32(0x12a0cf35u); f_12a0b7a0();
  /* 12a0cf35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0cf38:;
  /* 12a0cf38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0cf3b pop edi */
  EDI = (pop32());
  /* 12a0cf3c pop esi */
  ESI = (pop32());
  /* 12a0cf3d pop ebx */
  EBX = (pop32());
  /* 12a0cf3e mov esp, ebp */
  ESP = (EBP);
  /* 12a0cf40 pop ebp */
  EBP = (pop32());
  /* 12a0cf41 ret  */
  ESPCHK(0x12a0cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf50 @ 0x12a0cf50 (190 bytes, 67 insns) */
void f_12a0cf50(void) {
  FTRACE(0x12a0cf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0cf50 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0cf51 mov ebp, esp */
  EBP = (ESP);
  /* 12a0cf53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0cf56 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0cf57 push esi */
  push32((uint32_t)(ESI));
  /* 12a0cf58 push edi */
  push32((uint32_t)(EDI));
  /* 12a0cf59 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a0cf60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0cf63 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0cf66:;
  /* 12a0cf66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cf6a jne 0x12a0cf8a */
  if (!C.zf) goto L_12a0cf8a;
  /* 12a0cf6c push 0x12a29e6c */
  push32((uint32_t)(0x12a29e6cu));
  /* 12a0cf71 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0cf73 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 12a0cf75 push 0x12a29fbc */
  push32((uint32_t)(0x12a29fbcu));
  /* 12a0cf7a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0cf7c call 0x12a019e0 */
  push32(0x12a0cf81u); f_12a019e0();
  /* 12a0cf81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cf84 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cf87 jne 0x12a0cf8a */
  if (!C.zf) goto L_12a0cf8a;
  /* 12a0cf89 int3  */
  x86_unimpl("int3 @ 0x12a0cf89");
L_12a0cf8a:;
  /* 12a0cf8a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0cf8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0cf8e jne 0x12a0cf66 */
  if (!C.zf) goto L_12a0cf66;
  /* 12a0cf90 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cf93 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12a0cf96 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0cf9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cf9d je 0x12a0cffa */
  if (C.zf) goto L_12a0cffa;
  /* 12a0cf9f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cfa2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cfa3 call 0x12a0c250 */
  push32(0x12a0cfa8u); f_12a0c250();
  /* 12a0cfa8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cfab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0cfae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cfb1 push edx */
  push32((uint32_t)(EDX));
  /* 12a0cfb2 call 0x12a0f5d0 */
  push32(0x12a0cfb7u); f_12a0f5d0();
  /* 12a0cfb7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cfba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cfbd mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0cfc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cfc1 call 0x12a0f4a0 */
  push32(0x12a0cfc6u); f_12a0f4a0();
  /* 12a0cfc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cfc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0cfcb jge 0x12a0cfd6 */
  if ((C.sf==C.of)) goto L_12a0cfd6;
  /* 12a0cfcd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12a0cfd4 jmp 0x12a0cffa */
  goto L_12a0cffa;
L_12a0cfd6:;
  /* 12a0cfd6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cfd9 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0cfdd je 0x12a0cffa */
  if (C.zf) goto L_12a0cffa;
  /* 12a0cfdf push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0cfe1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cfe4 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a0cfe7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0cfe8 call 0x12a033b0 */
  push32(0x12a0cfedu); f_12a033b0();
  /* 12a0cfed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0cff0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cff3 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_12a0cffa:;
  /* 12a0cffa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0cffd mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 12a0d004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d007 pop edi */
  EDI = (pop32());
  /* 12a0d008 pop esi */
  ESI = (pop32());
  /* 12a0d009 pop ebx */
  EBX = (pop32());
  /* 12a0d00a mov esp, ebp */
  ESP = (EBP);
  /* 12a0d00c pop ebp */
  EBP = (pop32());
  /* 12a0d00d ret  */
  ESPCHK(0x12a0cf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d010 @ 0x12a0d010 (210 bytes, 63 insns) */
void f_12a0d010(void) {
  FTRACE(0x12a0d010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0d010 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0d011 mov ebp, esp */
  EBP = (ESP);
  /* 12a0d013 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d014 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d017 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d01d jae 0x12a0d041 */
  if (!C.cf) goto L_12a0d041;
  /* 12a0d01f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d022 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0d025 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d028 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0d02b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0d02e mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0d035 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0d03a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d03d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0d03f jne 0x12a0d054 */
  if (!C.zf) goto L_12a0d054;
L_12a0d041:;
  /* 12a0d041 call 0x12a0a7f0 */
  push32(0x12a0d046u); f_12a0a7f0();
  /* 12a0d046 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0d04c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0d04f jmp 0x12a0d0de */
  goto L_12a0d0de;
L_12a0d054:;
  /* 12a0d054 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d057 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d058 call 0x12a0c010 */
  push32(0x12a0d05du); f_12a0c010();
  /* 12a0d05d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d060 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d063 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12a0d066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d069 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d06c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0d06f mov edx, dword ptr [eax*4 + 0x12a2fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12a2fe60)));
  /* 12a0d076 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 12a0d07b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0d07e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0d080 je 0x12a0d0bd */
  if (C.zf) goto L_12a0d0bd;
  /* 12a0d082 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d085 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d086 call 0x12a0be90 */
  push32(0x12a0d08bu); f_12a0be90();
  /* 12a0d08b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d08e push eax */
  push32((uint32_t)(EAX));
  /* 12a0d08f call dword ptr [0x12a3032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3032c))), 0x12a0d095u);
  /* 12a0d095 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0d097 jne 0x12a0d0a4 */
  if (!C.zf) goto L_12a0d0a4;
  /* 12a0d099 call dword ptr [0x12a30294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30294))), 0x12a0d09fu);
  /* 12a0d09f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0d0a2 jmp 0x12a0d0ab */
  goto L_12a0d0ab;
L_12a0d0a4:;
  /* 12a0d0a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a0d0ab:;
  /* 12a0d0ab cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d0af jne 0x12a0d0b3 */
  if (!C.zf) goto L_12a0d0b3;
  /* 12a0d0b1 jmp 0x12a0d0cf */
  goto L_12a0d0cf;
L_12a0d0b3:;
  /* 12a0d0b3 call 0x12a0a800 */
  push32(0x12a0d0b8u); f_12a0a800();
  /* 12a0d0b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d0bb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12a0d0bd:;
  /* 12a0d0bd call 0x12a0a7f0 */
  push32(0x12a0d0c2u); f_12a0a7f0();
  /* 12a0d0c2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0d0c8 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12a0d0cf:;
  /* 12a0d0cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d0d2 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d0d3 call 0x12a0c0a0 */
  push32(0x12a0d0d8u); f_12a0c0a0();
  /* 12a0d0d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d0db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0d0de:;
  /* 12a0d0de mov esp, ebp */
  ESP = (EBP);
  /* 12a0d0e0 pop ebp */
  EBP = (pop32());
  /* 12a0d0e1 ret  */
  ESPCHK(0x12a0d010u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x12a0d0f0 (219 bytes, 64 insns) */
void f_12a0d0f0(void) {
  FTRACE(0x12a0d0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0d0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0d0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0d0f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d0f4 cmp dword ptr [0x12a2e694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d0fb je 0x12a0d191 */
  if (C.zf) goto L_12a0d191;
  /* 12a0d101 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12a0d103 push 0x12a29fd8 */
  push32((uint32_t)(0x12a29fd8u));
  /* 12a0d108 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d10a push 0xac */
  push32((uint32_t)(0xacu));
  /* 12a0d10f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d111 call 0x12a02d30 */
  push32(0x12a0d116u); f_12a02d30();
  /* 12a0d116 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d119 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0d11c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d120 jne 0x12a0d12c */
  if (!C.zf) goto L_12a0d12c;
  /* 12a0d122 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0d127 jmp 0x12a0d1c7 */
  goto L_12a0d1c7;
L_12a0d12c:;
  /* 12a0d12c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d12f push eax */
  push32((uint32_t)(EAX));
  /* 12a0d130 call 0x12a0d1d0 */
  push32(0x12a0d135u); f_12a0d1d0();
  /* 12a0d135 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0d13a je 0x12a0d15d */
  if (C.zf) goto L_12a0d15d;
  /* 12a0d13c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d13f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d140 call 0x12a0d760 */
  push32(0x12a0d145u); f_12a0d760();
  /* 12a0d145 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d148 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d14a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d14d push edx */
  push32((uint32_t)(EDX));
  /* 12a0d14e call 0x12a033b0 */
  push32(0x12a0d153u); f_12a033b0();
  /* 12a0d153 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d156 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0d15b jmp 0x12a0d1c7 */
  goto L_12a0d1c7;
L_12a0d15d:;
  /* 12a0d15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d160 mov dword ptr [0x12a2dc98], eax */
  w32((uint32_t)(0x12a2dc98), (EAX));
  /* 12a0d165 mov ecx, dword ptr [0x12a2e6b4] */
  ECX = (r32((uint32_t)(0x12a2e6b4)));
  /* 12a0d16b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d16c call 0x12a0d760 */
  push32(0x12a0d171u); f_12a0d760();
  /* 12a0d171 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d174 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d176 mov edx, dword ptr [0x12a2e6b4] */
  EDX = (r32((uint32_t)(0x12a2e6b4)));
  /* 12a0d17c push edx */
  push32((uint32_t)(EDX));
  /* 12a0d17d call 0x12a033b0 */
  push32(0x12a0d182u); f_12a033b0();
  /* 12a0d182 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d185 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d188 mov dword ptr [0x12a2e6b4], eax */
  w32((uint32_t)(0x12a2e6b4), (EAX));
  /* 12a0d18d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0d18f jmp 0x12a0d1c7 */
  goto L_12a0d1c7;
L_12a0d191:;
  /* 12a0d191 mov dword ptr [0x12a2dc98], 0x12a2dca0 */
  w32((uint32_t)(0x12a2dc98), (0x12a2dca0u));
  /* 12a0d19b mov ecx, dword ptr [0x12a2e6b4] */
  ECX = (r32((uint32_t)(0x12a2e6b4)));
  /* 12a0d1a1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d1a2 call 0x12a0d760 */
  push32(0x12a0d1a7u); f_12a0d760();
  /* 12a0d1a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d1aa push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d1ac mov edx, dword ptr [0x12a2e6b4] */
  EDX = (r32((uint32_t)(0x12a2e6b4)));
  /* 12a0d1b2 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d1b3 call 0x12a033b0 */
  push32(0x12a0d1b8u); f_12a033b0();
  /* 12a0d1b8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d1bb mov dword ptr [0x12a2e6b4], 0 */
  w32((uint32_t)(0x12a2e6b4), (0x0u));
  /* 12a0d1c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0d1c7:;
  /* 12a0d1c7 mov esp, ebp */
  ESP = (EBP);
  /* 12a0d1c9 pop ebp */
  EBP = (pop32());
  /* 12a0d1ca ret  */
  ESPCHK(0x12a0d0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1d0 @ 0x12a0d1d0 (1423 bytes, 533 insns) */
void f_12a0d1d0(void) {
  FTRACE(0x12a0d1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0d1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0d1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0d1d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0d1d6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12a0d1dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0d1df mov ax, word ptr [0x12a2e6ee] */
  AX = (r16((uint32_t)(0x12a2e6ee)));
  /* 12a0d1e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0d1e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d1ea mov cx, word ptr [0x12a2e6f0] */
  CX = (r16((uint32_t)(0x12a2e6f0)));
  /* 12a0d1f1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0d1f4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d1f8 jne 0x12a0d202 */
  if (!C.zf) goto L_12a0d202;
  /* 12a0d1fa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0d1fd jmp 0x12a0d75b */
  goto L_12a0d75b;
L_12a0d202:;
  /* 12a0d202 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d205 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d208 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d209 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 12a0d20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d20e push eax */
  push32((uint32_t)(EAX));
  /* 12a0d20f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d211 call 0x12a10ae0 */
  push32(0x12a0d216u); f_12a10ae0();
  /* 12a0d216 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d219 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d21c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d21e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d221 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d224 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d227 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d228 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 12a0d22a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d22d push eax */
  push32((uint32_t)(EAX));
  /* 12a0d22e push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d230 call 0x12a10ae0 */
  push32(0x12a0d235u); f_12a10ae0();
  /* 12a0d235 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d238 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d23b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d23d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d240 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d243 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d246 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d247 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 12a0d249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d24c push eax */
  push32((uint32_t)(EAX));
  /* 12a0d24d push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d24f call 0x12a10ae0 */
  push32(0x12a0d254u); f_12a10ae0();
  /* 12a0d254 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d257 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d25a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d25c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d25f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d262 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d265 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d266 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 12a0d268 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d26b push eax */
  push32((uint32_t)(EAX));
  /* 12a0d26c push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d26e call 0x12a10ae0 */
  push32(0x12a0d273u); f_12a10ae0();
  /* 12a0d273 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d276 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d279 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d27b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d27e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d281 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d284 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d285 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 12a0d287 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d28a push eax */
  push32((uint32_t)(EAX));
  /* 12a0d28b push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d28d call 0x12a10ae0 */
  push32(0x12a0d292u); f_12a10ae0();
  /* 12a0d292 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d295 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d298 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d29a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d29d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d2a0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2a3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d2a4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 12a0d2a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d2a9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d2aa push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d2ac call 0x12a10ae0 */
  push32(0x12a0d2b1u); f_12a10ae0();
  /* 12a0d2b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d2b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d2b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d2bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d2bf push edx */
  push32((uint32_t)(EDX));
  /* 12a0d2c0 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 12a0d2c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d2c5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d2c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d2c8 call 0x12a10ae0 */
  push32(0x12a0d2cdu); f_12a10ae0();
  /* 12a0d2cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d2d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d2d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d2d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d2db add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2de push edx */
  push32((uint32_t)(EDX));
  /* 12a0d2df push 0x2a */
  push32((uint32_t)(0x2au));
  /* 12a0d2e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d2e4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d2e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d2e7 call 0x12a10ae0 */
  push32(0x12a0d2ecu); f_12a10ae0();
  /* 12a0d2ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d2f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d2f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d2f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d2fa add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d2fd push edx */
  push32((uint32_t)(EDX));
  /* 12a0d2fe push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 12a0d300 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d303 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d304 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d306 call 0x12a10ae0 */
  push32(0x12a0d30bu); f_12a10ae0();
  /* 12a0d30b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d30e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d311 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d313 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d316 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d319 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d31c push edx */
  push32((uint32_t)(EDX));
  /* 12a0d31d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 12a0d31f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d322 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d323 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d325 call 0x12a10ae0 */
  push32(0x12a0d32au); f_12a10ae0();
  /* 12a0d32a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d32d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d330 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d332 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d338 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d33b push edx */
  push32((uint32_t)(EDX));
  /* 12a0d33c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 12a0d33e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d341 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d342 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d344 call 0x12a10ae0 */
  push32(0x12a0d349u); f_12a10ae0();
  /* 12a0d349 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d34c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d34f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d351 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d354 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d357 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d35a push edx */
  push32((uint32_t)(EDX));
  /* 12a0d35b push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 12a0d35d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d360 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d361 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d363 call 0x12a10ae0 */
  push32(0x12a0d368u); f_12a10ae0();
  /* 12a0d368 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d36b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d36e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d370 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d373 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d376 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d379 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d37a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 12a0d37c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d37f push eax */
  push32((uint32_t)(EAX));
  /* 12a0d380 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d382 call 0x12a10ae0 */
  push32(0x12a0d387u); f_12a10ae0();
  /* 12a0d387 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d38a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d38d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d38f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d392 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d395 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d398 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d399 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12a0d39b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d39e push eax */
  push32((uint32_t)(EAX));
  /* 12a0d39f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d3a1 call 0x12a10ae0 */
  push32(0x12a0d3a6u); f_12a10ae0();
  /* 12a0d3a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d3ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d3ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d3b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d3b4 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3b7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d3b8 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 12a0d3ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d3bd push eax */
  push32((uint32_t)(EAX));
  /* 12a0d3be push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d3c0 call 0x12a10ae0 */
  push32(0x12a0d3c5u); f_12a10ae0();
  /* 12a0d3c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d3cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d3cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d3d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d3d3 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3d6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d3d7 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 12a0d3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d3dc push eax */
  push32((uint32_t)(EAX));
  /* 12a0d3dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d3df call 0x12a10ae0 */
  push32(0x12a0d3e4u); f_12a10ae0();
  /* 12a0d3e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d3ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d3ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d3ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d3f2 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d3f5 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d3f6 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 12a0d3f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d3fb push eax */
  push32((uint32_t)(EAX));
  /* 12a0d3fc push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d3fe call 0x12a10ae0 */
  push32(0x12a0d403u); f_12a10ae0();
  /* 12a0d403 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d406 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d409 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d40b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d40e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d411 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d414 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d415 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 12a0d417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d41a push eax */
  push32((uint32_t)(EAX));
  /* 12a0d41b push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d41d call 0x12a10ae0 */
  push32(0x12a0d422u); f_12a10ae0();
  /* 12a0d422 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d425 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d428 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d42a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d42d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d430 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d433 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d434 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 12a0d436 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d439 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d43a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d43c call 0x12a10ae0 */
  push32(0x12a0d441u); f_12a10ae0();
  /* 12a0d441 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d444 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d447 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d449 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d44f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d452 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d453 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 12a0d455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d458 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d459 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d45b call 0x12a10ae0 */
  push32(0x12a0d460u); f_12a10ae0();
  /* 12a0d460 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d463 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d466 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d468 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d46b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d46e add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d471 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d472 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12a0d474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d477 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d478 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d47a call 0x12a10ae0 */
  push32(0x12a0d47fu); f_12a10ae0();
  /* 12a0d47f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d482 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d485 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d487 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d48a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d48d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d490 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d491 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 12a0d493 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d496 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d497 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d499 call 0x12a10ae0 */
  push32(0x12a0d49eu); f_12a10ae0();
  /* 12a0d49e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d4a4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d4a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d4a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d4ac add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4af push edx */
  push32((uint32_t)(EDX));
  /* 12a0d4b0 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 12a0d4b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d4b5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d4b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d4b8 call 0x12a10ae0 */
  push32(0x12a0d4bdu); f_12a10ae0();
  /* 12a0d4bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d4c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d4c5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d4c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d4cb add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4ce push edx */
  push32((uint32_t)(EDX));
  /* 12a0d4cf push 0x4d */
  push32((uint32_t)(0x4du));
  /* 12a0d4d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d4d4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d4d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d4d7 call 0x12a10ae0 */
  push32(0x12a0d4dcu); f_12a10ae0();
  /* 12a0d4dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d4e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d4e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d4e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d4ea add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4ed push edx */
  push32((uint32_t)(EDX));
  /* 12a0d4ee push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 12a0d4f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d4f3 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d4f4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d4f6 call 0x12a10ae0 */
  push32(0x12a0d4fbu); f_12a10ae0();
  /* 12a0d4fb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d4fe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d501 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d503 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d506 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d509 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d50c push edx */
  push32((uint32_t)(EDX));
  /* 12a0d50d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 12a0d50f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d512 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d513 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d515 call 0x12a10ae0 */
  push32(0x12a0d51au); f_12a10ae0();
  /* 12a0d51a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d51d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d520 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d522 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d525 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d528 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d52b push edx */
  push32((uint32_t)(EDX));
  /* 12a0d52c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 12a0d52e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d531 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d532 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d534 call 0x12a10ae0 */
  push32(0x12a0d539u); f_12a10ae0();
  /* 12a0d539 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d53c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d53f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d541 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d544 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d547 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d54a push edx */
  push32((uint32_t)(EDX));
  /* 12a0d54b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 12a0d54d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d550 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d551 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d553 call 0x12a10ae0 */
  push32(0x12a0d558u); f_12a10ae0();
  /* 12a0d558 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d55b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d55e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d560 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d563 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d566 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d569 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d56a push 0x3a */
  push32((uint32_t)(0x3au));
  /* 12a0d56c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d56f push eax */
  push32((uint32_t)(EAX));
  /* 12a0d570 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d572 call 0x12a10ae0 */
  push32(0x12a0d577u); f_12a10ae0();
  /* 12a0d577 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d57a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d57d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d57f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d582 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d585 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d588 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d589 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 12a0d58b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d58e push eax */
  push32((uint32_t)(EAX));
  /* 12a0d58f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d591 call 0x12a10ae0 */
  push32(0x12a0d596u); f_12a10ae0();
  /* 12a0d596 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d599 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d59c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d59e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d5a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d5a4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5a7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d5a8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 12a0d5aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d5ad push eax */
  push32((uint32_t)(EAX));
  /* 12a0d5ae push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d5b0 call 0x12a10ae0 */
  push32(0x12a0d5b5u); f_12a10ae0();
  /* 12a0d5b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d5bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d5bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d5c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d5c3 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5c6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d5c7 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12a0d5c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d5cc push eax */
  push32((uint32_t)(EAX));
  /* 12a0d5cd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d5cf call 0x12a10ae0 */
  push32(0x12a0d5d4u); f_12a10ae0();
  /* 12a0d5d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d5da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d5dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d5df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d5e2 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5e8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d5e9 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 12a0d5eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d5ee push eax */
  push32((uint32_t)(EAX));
  /* 12a0d5ef push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d5f1 call 0x12a10ae0 */
  push32(0x12a0d5f6u); f_12a10ae0();
  /* 12a0d5f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d5f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d5fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d5fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d604 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d60a push edx */
  push32((uint32_t)(EDX));
  /* 12a0d60b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12a0d60d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d610 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d611 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d613 call 0x12a10ae0 */
  push32(0x12a0d618u); f_12a10ae0();
  /* 12a0d618 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d61b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d61e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d623 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d626 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d62c push edx */
  push32((uint32_t)(EDX));
  /* 12a0d62d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12a0d62f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d632 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d633 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d635 call 0x12a10ae0 */
  push32(0x12a0d63au); f_12a10ae0();
  /* 12a0d63a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d63d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d640 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d642 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d645 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d648 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d64e push edx */
  push32((uint32_t)(EDX));
  /* 12a0d64f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 12a0d651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d654 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d655 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d657 call 0x12a10ae0 */
  push32(0x12a0d65cu); f_12a10ae0();
  /* 12a0d65c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d65f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d662 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d664 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d66a add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d670 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d671 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 12a0d673 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d676 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d677 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d679 call 0x12a10ae0 */
  push32(0x12a0d67eu); f_12a10ae0();
  /* 12a0d67e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d681 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d684 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d686 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d689 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d68c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d692 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d693 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 12a0d695 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d698 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d699 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d69b call 0x12a10ae0 */
  push32(0x12a0d6a0u); f_12a10ae0();
  /* 12a0d6a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6a3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d6a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d6a8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d6ae add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6b4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d6b5 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 12a0d6b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d6ba push eax */
  push32((uint32_t)(EAX));
  /* 12a0d6bb push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d6bd call 0x12a10ae0 */
  push32(0x12a0d6c2u); f_12a10ae0();
  /* 12a0d6c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d6c8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d6ca mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d6cd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d6d0 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6d6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d6d7 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 12a0d6d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0d6dc push eax */
  push32((uint32_t)(EAX));
  /* 12a0d6dd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d6df call 0x12a10ae0 */
  push32(0x12a0d6e4u); f_12a10ae0();
  /* 12a0d6e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d6ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d6ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d6f2 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d6f8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d6f9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 12a0d6fb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0d6fe push eax */
  push32((uint32_t)(EAX));
  /* 12a0d6ff push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d701 call 0x12a10ae0 */
  push32(0x12a0d706u); f_12a10ae0();
  /* 12a0d706 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d70c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d70e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d714 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d71a push edx */
  push32((uint32_t)(EDX));
  /* 12a0d71b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 12a0d71d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0d720 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d721 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d723 call 0x12a10ae0 */
  push32(0x12a0d728u); f_12a10ae0();
  /* 12a0d728 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d72b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d72e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d730 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d736 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d73c push edx */
  push32((uint32_t)(EDX));
  /* 12a0d73d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 12a0d742 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0d745 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d746 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0d748 call 0x12a10ae0 */
  push32(0x12a0d74du); f_12a10ae0();
  /* 12a0d74d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d750 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0d753 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0d755 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12a0d758 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_12a0d75b:;
  /* 12a0d75b mov esp, ebp */
  ESP = (EBP);
  /* 12a0d75d pop ebp */
  EBP = (pop32());
  /* 12a0d75e ret  */
  ESPCHK(0x12a0d1d0u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x12a0d760 (779 bytes, 265 insns) */
void f_12a0d760(void) {
  FTRACE(0x12a0d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0d760 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0d761 mov ebp, esp */
  EBP = (ESP);
  /* 12a0d763 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0d767 jne 0x12a0d76e */
  if (!C.zf) goto L_12a0d76e;
  /* 12a0d769 jmp 0x12a0da69 */
  goto L_12a0da69;
L_12a0d76e:;
  /* 12a0d76e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d773 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a0d776 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d777 call 0x12a033b0 */
  push32(0x12a0d77cu); f_12a033b0();
  /* 12a0d77c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d77f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d784 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a0d787 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d788 call 0x12a033b0 */
  push32(0x12a0d78du); f_12a033b0();
  /* 12a0d78d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d790 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d792 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d795 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0d798 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d799 call 0x12a033b0 */
  push32(0x12a0d79eu); f_12a033b0();
  /* 12a0d79e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7a6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0d7a9 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d7aa call 0x12a033b0 */
  push32(0x12a0d7afu); f_12a033b0();
  /* 12a0d7af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7b7 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a0d7ba push eax */
  push32((uint32_t)(EAX));
  /* 12a0d7bb call 0x12a033b0 */
  push32(0x12a0d7c0u); f_12a033b0();
  /* 12a0d7c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7c8 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a0d7cb push edx */
  push32((uint32_t)(EDX));
  /* 12a0d7cc call 0x12a033b0 */
  push32(0x12a0d7d1u); f_12a033b0();
  /* 12a0d7d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7d9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0d7db push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d7dc call 0x12a033b0 */
  push32(0x12a0d7e1u); f_12a033b0();
  /* 12a0d7e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7e9 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12a0d7ec push eax */
  push32((uint32_t)(EAX));
  /* 12a0d7ed call 0x12a033b0 */
  push32(0x12a0d7f2u); f_12a033b0();
  /* 12a0d7f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d7f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d7f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d7fa mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12a0d7fd push edx */
  push32((uint32_t)(EDX));
  /* 12a0d7fe call 0x12a033b0 */
  push32(0x12a0d803u); f_12a033b0();
  /* 12a0d803 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d806 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d808 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d80b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 12a0d80e push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d80f call 0x12a033b0 */
  push32(0x12a0d814u); f_12a033b0();
  /* 12a0d814 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d817 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d819 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d81c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 12a0d81f push eax */
  push32((uint32_t)(EAX));
  /* 12a0d820 call 0x12a033b0 */
  push32(0x12a0d825u); f_12a033b0();
  /* 12a0d825 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d828 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d82a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d82d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 12a0d830 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d831 call 0x12a033b0 */
  push32(0x12a0d836u); f_12a033b0();
  /* 12a0d836 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d839 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d83b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d83e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 12a0d841 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d842 call 0x12a033b0 */
  push32(0x12a0d847u); f_12a033b0();
  /* 12a0d847 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d84a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d84c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d84f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a0d852 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d853 call 0x12a033b0 */
  push32(0x12a0d858u); f_12a033b0();
  /* 12a0d858 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d85b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d85d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d860 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 12a0d863 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d864 call 0x12a033b0 */
  push32(0x12a0d869u); f_12a033b0();
  /* 12a0d869 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d86c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d86e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d871 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 12a0d874 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d875 call 0x12a033b0 */
  push32(0x12a0d87au); f_12a033b0();
  /* 12a0d87a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d87d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d87f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d882 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 12a0d885 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d886 call 0x12a033b0 */
  push32(0x12a0d88bu); f_12a033b0();
  /* 12a0d88b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d88e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d893 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 12a0d896 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d897 call 0x12a033b0 */
  push32(0x12a0d89cu); f_12a033b0();
  /* 12a0d89c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d89f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8a4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 12a0d8a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d8a8 call 0x12a033b0 */
  push32(0x12a0d8adu); f_12a033b0();
  /* 12a0d8ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d8b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8b2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8b5 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 12a0d8b8 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d8b9 call 0x12a033b0 */
  push32(0x12a0d8beu); f_12a033b0();
  /* 12a0d8be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d8c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8c6 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 12a0d8c9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d8ca call 0x12a033b0 */
  push32(0x12a0d8cfu); f_12a033b0();
  /* 12a0d8cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d8d2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8d7 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 12a0d8da push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d8db call 0x12a033b0 */
  push32(0x12a0d8e0u); f_12a033b0();
  /* 12a0d8e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d8e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8e8 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 12a0d8eb push eax */
  push32((uint32_t)(EAX));
  /* 12a0d8ec call 0x12a033b0 */
  push32(0x12a0d8f1u); f_12a033b0();
  /* 12a0d8f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d8f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d8f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d8f9 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 12a0d8fc push edx */
  push32((uint32_t)(EDX));
  /* 12a0d8fd call 0x12a033b0 */
  push32(0x12a0d902u); f_12a033b0();
  /* 12a0d902 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d905 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d907 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d90a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 12a0d90d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d90e call 0x12a033b0 */
  push32(0x12a0d913u); f_12a033b0();
  /* 12a0d913 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d916 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d918 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d91b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 12a0d91e push eax */
  push32((uint32_t)(EAX));
  /* 12a0d91f call 0x12a033b0 */
  push32(0x12a0d924u); f_12a033b0();
  /* 12a0d924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d927 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d92c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 12a0d92f push edx */
  push32((uint32_t)(EDX));
  /* 12a0d930 call 0x12a033b0 */
  push32(0x12a0d935u); f_12a033b0();
  /* 12a0d935 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d938 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d93a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d93d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 12a0d940 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d941 call 0x12a033b0 */
  push32(0x12a0d946u); f_12a033b0();
  /* 12a0d946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d949 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d94b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d94e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 12a0d951 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d952 call 0x12a033b0 */
  push32(0x12a0d957u); f_12a033b0();
  /* 12a0d957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d95a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d95c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d95f mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 12a0d962 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d963 call 0x12a033b0 */
  push32(0x12a0d968u); f_12a033b0();
  /* 12a0d968 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d96b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d96d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d970 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 12a0d973 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d974 call 0x12a033b0 */
  push32(0x12a0d979u); f_12a033b0();
  /* 12a0d979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d97c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d981 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 12a0d984 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d985 call 0x12a033b0 */
  push32(0x12a0d98au); f_12a033b0();
  /* 12a0d98a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d98d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d98f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d992 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 12a0d998 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d999 call 0x12a033b0 */
  push32(0x12a0d99eu); f_12a033b0();
  /* 12a0d99e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d9a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d9a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d9a6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 12a0d9ac push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d9ad call 0x12a033b0 */
  push32(0x12a0d9b2u); f_12a033b0();
  /* 12a0d9b2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d9b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d9b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d9ba mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 12a0d9c0 push eax */
  push32((uint32_t)(EAX));
  /* 12a0d9c1 call 0x12a033b0 */
  push32(0x12a0d9c6u); f_12a033b0();
  /* 12a0d9c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d9c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d9cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d9ce mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 12a0d9d4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0d9d5 call 0x12a033b0 */
  push32(0x12a0d9dau); f_12a033b0();
  /* 12a0d9da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d9dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d9df mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d9e2 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 12a0d9e8 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0d9e9 call 0x12a033b0 */
  push32(0x12a0d9eeu); f_12a033b0();
  /* 12a0d9ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0d9f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0d9f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0d9f6 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 12a0d9fc push eax */
  push32((uint32_t)(EAX));
  /* 12a0d9fd call 0x12a033b0 */
  push32(0x12a0da02u); f_12a033b0();
  /* 12a0da02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0da05 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0da07 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0da0a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 12a0da10 push edx */
  push32((uint32_t)(EDX));
  /* 12a0da11 call 0x12a033b0 */
  push32(0x12a0da16u); f_12a033b0();
  /* 12a0da16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0da19 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0da1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0da1e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12a0da24 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0da25 call 0x12a033b0 */
  push32(0x12a0da2au); f_12a033b0();
  /* 12a0da2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0da2d push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0da2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0da32 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12a0da38 push eax */
  push32((uint32_t)(EAX));
  /* 12a0da39 call 0x12a033b0 */
  push32(0x12a0da3eu); f_12a033b0();
  /* 12a0da3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0da41 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0da43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0da46 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12a0da4c push edx */
  push32((uint32_t)(EDX));
  /* 12a0da4d call 0x12a033b0 */
  push32(0x12a0da52u); f_12a033b0();
  /* 12a0da52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0da55 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0da57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0da5a mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 12a0da60 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0da61 call 0x12a033b0 */
  push32(0x12a0da66u); f_12a033b0();
  /* 12a0da66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0da69:;
  /* 12a0da69 pop ebp */
  EBP = (pop32());
  /* 12a0da6a ret  */
  ESPCHK(0x12a0d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da70 @ 0x12a0da70 (678 bytes, 180 insns) */
void f_12a0da70(void) {
  FTRACE(0x12a0da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0da70 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0da71 mov ebp, esp */
  EBP = (ESP);
  /* 12a0da73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0da76 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0da7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0da7f mov ax, word ptr [0x12a2e6ea] */
  AX = (r16((uint32_t)(0x12a2e6ea)));
  /* 12a0da85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0da88 cmp dword ptr [0x12a2e690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0da8f je 0x12a0dbea */
  if (C.zf) goto L_12a0dbea;
  /* 12a0da95 push 0x12a2e6b8 */
  push32((uint32_t)(0x12a2e6b8u));
  /* 12a0da9a push 0xe */
  push32((uint32_t)(0xeu));
  /* 12a0da9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0da9f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0daa0 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0daa2 call 0x12a10ae0 */
  push32(0x12a0daa7u); f_12a10ae0();
  /* 12a0daa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0daaa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0daad or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0daaf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0dab2 push 0x12a2e6bc */
  push32((uint32_t)(0x12a2e6bcu));
  /* 12a0dab7 push 0xf */
  push32((uint32_t)(0xfu));
  /* 12a0dab9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dabc push eax */
  push32((uint32_t)(EAX));
  /* 12a0dabd push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0dabf call 0x12a10ae0 */
  push32(0x12a0dac4u); f_12a10ae0();
  /* 12a0dac4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dac7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0daca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0dacc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0dacf push 0x12a2e6c0 */
  push32((uint32_t)(0x12a2e6c0u));
  /* 12a0dad4 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 12a0dad6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dad9 push edx */
  push32((uint32_t)(EDX));
  /* 12a0dada push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0dadc call 0x12a10ae0 */
  push32(0x12a0dae1u); f_12a10ae0();
  /* 12a0dae1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dae4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0dae7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0dae9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0daec mov edx, dword ptr [0x12a2e6c0] */
  EDX = (r32((uint32_t)(0x12a2e6c0)));
  /* 12a0daf2 push edx */
  push32((uint32_t)(EDX));
  /* 12a0daf3 call 0x12a0dd20 */
  push32(0x12a0daf8u); f_12a0dd20();
  /* 12a0daf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dafb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0daff je 0x12a0db59 */
  if (C.zf) goto L_12a0db59;
  /* 12a0db01 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db03 mov eax, dword ptr [0x12a2e6b8] */
  EAX = (r32((uint32_t)(0x12a2e6b8)));
  /* 12a0db08 push eax */
  push32((uint32_t)(EAX));
  /* 12a0db09 call 0x12a033b0 */
  push32(0x12a0db0eu); f_12a033b0();
  /* 12a0db0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0db11 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db13 mov ecx, dword ptr [0x12a2e6bc] */
  ECX = (r32((uint32_t)(0x12a2e6bc)));
  /* 12a0db19 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0db1a call 0x12a033b0 */
  push32(0x12a0db1fu); f_12a033b0();
  /* 12a0db1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0db22 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db24 mov edx, dword ptr [0x12a2e6c0] */
  EDX = (r32((uint32_t)(0x12a2e6c0)));
  /* 12a0db2a push edx */
  push32((uint32_t)(EDX));
  /* 12a0db2b call 0x12a033b0 */
  push32(0x12a0db30u); f_12a033b0();
  /* 12a0db30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0db33 mov dword ptr [0x12a2e6b8], 0 */
  w32((uint32_t)(0x12a2e6b8), (0x0u));
  /* 12a0db3d mov dword ptr [0x12a2e6bc], 0 */
  w32((uint32_t)(0x12a2e6bc), (0x0u));
  /* 12a0db47 mov dword ptr [0x12a2e6c0], 0 */
  w32((uint32_t)(0x12a2e6c0), (0x0u));
  /* 12a0db51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0db54 jmp 0x12a0dd12 */
  goto L_12a0dd12;
L_12a0db59:;
  /* 12a0db59 mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0db5e cmp dword ptr [eax], 0x12a2dd50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12a2dd50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0db64 je 0x12a0dba0 */
  if (C.zf) goto L_12a0dba0;
  /* 12a0db66 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db68 mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0db6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0db70 push edx */
  push32((uint32_t)(EDX));
  /* 12a0db71 call 0x12a033b0 */
  push32(0x12a0db76u); f_12a033b0();
  /* 12a0db76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0db79 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db7b mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0db80 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a0db83 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0db84 call 0x12a033b0 */
  push32(0x12a0db89u); f_12a033b0();
  /* 12a0db89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0db8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0db8e mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0db94 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a0db97 push eax */
  push32((uint32_t)(EAX));
  /* 12a0db98 call 0x12a033b0 */
  push32(0x12a0db9du); f_12a033b0();
  /* 12a0db9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0dba0:;
  /* 12a0dba0 mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dba6 mov edx, dword ptr [0x12a2e6b8] */
  EDX = (r32((uint32_t)(0x12a2e6b8)));
  /* 12a0dbac mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12a0dbae mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dbb3 mov ecx, dword ptr [0x12a2e6bc] */
  ECX = (r32((uint32_t)(0x12a2e6bc)));
  /* 12a0dbb9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12a0dbbc mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dbc2 mov eax, dword ptr [0x12a2e6c0] */
  EAX = (r32((uint32_t)(0x12a2e6c0)));
  /* 12a0dbc7 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12a0dbca mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dbd0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0dbd2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0dbd4 mov byte ptr [0x12a2cea8], al */
  w8((uint32_t)(0x12a2cea8), (AL));
  /* 12a0dbd9 mov dword ptr [0x12a2ceac], 1 */
  w32((uint32_t)(0x12a2ceac), (0x1u));
  /* 12a0dbe3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0dbe5 jmp 0x12a0dd12 */
  goto L_12a0dd12;
L_12a0dbea:;
  /* 12a0dbea push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dbec mov ecx, dword ptr [0x12a2e6b8] */
  ECX = (r32((uint32_t)(0x12a2e6b8)));
  /* 12a0dbf2 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dbf3 call 0x12a033b0 */
  push32(0x12a0dbf8u); f_12a033b0();
  /* 12a0dbf8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dbfb push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dbfd mov edx, dword ptr [0x12a2e6bc] */
  EDX = (r32((uint32_t)(0x12a2e6bc)));
  /* 12a0dc03 push edx */
  push32((uint32_t)(EDX));
  /* 12a0dc04 call 0x12a033b0 */
  push32(0x12a0dc09u); f_12a033b0();
  /* 12a0dc09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dc0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dc0e mov eax, dword ptr [0x12a2e6c0] */
  EAX = (r32((uint32_t)(0x12a2e6c0)));
  /* 12a0dc13 push eax */
  push32((uint32_t)(EAX));
  /* 12a0dc14 call 0x12a033b0 */
  push32(0x12a0dc19u); f_12a033b0();
  /* 12a0dc19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dc1c mov dword ptr [0x12a2e6b8], 0 */
  w32((uint32_t)(0x12a2e6b8), (0x0u));
  /* 12a0dc26 mov dword ptr [0x12a2e6bc], 0 */
  w32((uint32_t)(0x12a2e6bc), (0x0u));
  /* 12a0dc30 mov dword ptr [0x12a2e6c0], 0 */
  w32((uint32_t)(0x12a2e6c0), (0x0u));
  /* 12a0dc3a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 12a0dc3f push 0x12a29fe4 */
  push32((uint32_t)(0x12a29fe4u));
  /* 12a0dc44 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dc46 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dc48 call 0x12a02920 */
  push32(0x12a0dc4du); f_12a02920();
  /* 12a0dc4d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dc50 mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dc56 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12a0dc58 mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dc5e cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dc61 jne 0x12a0dc6b */
  if (!C.zf) goto L_12a0dc6b;
  /* 12a0dc63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0dc66 jmp 0x12a0dd12 */
  goto L_12a0dd12;
L_12a0dc6b:;
  /* 12a0dc6b push 0x12a29fb4 */
  push32((uint32_t)(0x12a29fb4u));
  /* 12a0dc70 mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dc75 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12a0dc77 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dc78 call 0x12a058d0 */
  push32(0x12a0dc7du); f_12a058d0();
  /* 12a0dc7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dc80 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 12a0dc85 push 0x12a29fe4 */
  push32((uint32_t)(0x12a29fe4u));
  /* 12a0dc8a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dc8c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dc8e call 0x12a02920 */
  push32(0x12a0dc93u); f_12a02920();
  /* 12a0dc93 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dc96 mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dc9c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12a0dc9f mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dca4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dca8 jne 0x12a0dcaf */
  if (!C.zf) goto L_12a0dcaf;
  /* 12a0dcaa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0dcad jmp 0x12a0dd12 */
  goto L_12a0dd12;
L_12a0dcaf:;
  /* 12a0dcaf mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dcb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0dcb8 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a0dcbb push 0x92 */
  push32((uint32_t)(0x92u));
  /* 12a0dcc0 push 0x12a29fe4 */
  push32((uint32_t)(0x12a29fe4u));
  /* 12a0dcc5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dcc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0dcc9 call 0x12a02920 */
  push32(0x12a0dcceu); f_12a02920();
  /* 12a0dcce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dcd1 mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dcd7 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12a0dcda mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dce0 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dce4 jne 0x12a0dceb */
  if (!C.zf) goto L_12a0dceb;
  /* 12a0dce6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0dce9 jmp 0x12a0dd12 */
  goto L_12a0dd12;
L_12a0dceb:;
  /* 12a0dceb mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dcf0 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12a0dcf3 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 12a0dcf6 mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0dcfc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0dcfe mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a0dd00 mov byte ptr [0x12a2cea8], cl */
  w8((uint32_t)(0x12a2cea8), (CL));
  /* 12a0dd06 mov dword ptr [0x12a2ceac], 1 */
  w32((uint32_t)(0x12a2ceac), (0x1u));
  /* 12a0dd10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0dd12:;
  /* 12a0dd12 mov esp, ebp */
  ESP = (EBP);
  /* 12a0dd14 pop ebp */
  EBP = (pop32());
  /* 12a0dd15 ret  */
  ESPCHK(0x12a0da70u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12a0dd20 (125 bytes, 49 insns) */
void f_12a0dd20(void) {
  FTRACE(0x12a0dd20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0dd20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0dd21 mov ebp, esp */
  EBP = (ESP);
  /* 12a0dd23 push ecx */
  push32((uint32_t)(ECX));
L_12a0dd24:;
  /* 12a0dd24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd27 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0dd2a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0dd2c je 0x12a0dd99 */
  if (C.zf) goto L_12a0dd99;
  /* 12a0dd2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd31 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0dd34 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dd37 jl 0x12a0dd5d */
  if ((C.sf!=C.of)) goto L_12a0dd5d;
  /* 12a0dd39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd3c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0dd3f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dd42 jg 0x12a0dd5d */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0dd5d;
  /* 12a0dd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd47 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0dd4a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0dd4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd50 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12a0dd52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dd58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a0dd5b jmp 0x12a0dd97 */
  goto L_12a0dd97;
L_12a0dd5d:;
  /* 12a0dd5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd60 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0dd63 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0dd66 jne 0x12a0dd8e */
  if (!C.zf) goto L_12a0dd8e;
  /* 12a0dd68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0dd6e:;
  /* 12a0dd6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dd71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dd74 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a0dd77 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a0dd79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dd7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dd7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0dd82 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dd85 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0dd88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0dd8a jne 0x12a0dd6e */
  if (!C.zf) goto L_12a0dd6e;
  /* 12a0dd8c jmp 0x12a0dd97 */
  goto L_12a0dd97;
L_12a0dd8e:;
  /* 12a0dd8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dd91 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dd94 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12a0dd97:;
  /* 12a0dd97 jmp 0x12a0dd24 */
  goto L_12a0dd24;
L_12a0dd99:;
  /* 12a0dd99 mov esp, ebp */
  ESP = (EBP);
  /* 12a0dd9b pop ebp */
  EBP = (pop32());
  /* 12a0dd9c ret  */
  ESPCHK(0x12a0dd20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dda0 @ 0x12a0dda0 (304 bytes, 85 insns) */
void f_12a0dda0(void) {
  FTRACE(0x12a0dda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0dda0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0dda1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0dda3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dda4 cmp dword ptr [0x12a2e68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ddab je 0x12a0de6c */
  if (C.zf) goto L_12a0de6c;
  /* 12a0ddb1 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 12a0ddb3 push 0x12a29ff0 */
  push32((uint32_t)(0x12a29ff0u));
  /* 12a0ddb8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ddba push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12a0ddbc push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ddbe call 0x12a02d30 */
  push32(0x12a0ddc3u); f_12a02d30();
  /* 12a0ddc3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ddc6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0ddc9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ddcd jne 0x12a0ddd9 */
  if (!C.zf) goto L_12a0ddd9;
  /* 12a0ddcf mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ddd4 jmp 0x12a0decc */
  goto L_12a0decc;
L_12a0ddd9:;
  /* 12a0ddd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dddc push eax */
  push32((uint32_t)(EAX));
  /* 12a0dddd call 0x12a0ded0 */
  push32(0x12a0dde2u); f_12a0ded0();
  /* 12a0dde2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dde5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0dde7 je 0x12a0de0d */
  if (C.zf) goto L_12a0de0d;
  /* 12a0dde9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ddec push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dded call 0x12a0e160 */
  push32(0x12a0ddf2u); f_12a0e160();
  /* 12a0ddf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ddf5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0ddf7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0ddfa push edx */
  push32((uint32_t)(EDX));
  /* 12a0ddfb call 0x12a033b0 */
  push32(0x12a0de00u); f_12a033b0();
  /* 12a0de00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0de03 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0de08 jmp 0x12a0decc */
  goto L_12a0decc;
L_12a0de0d:;
  /* 12a0de0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0de10 mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de16 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0de18 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0de1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0de1d mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12a0de26 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12a0de29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0de2c mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de32 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12a0de35 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12a0de38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0de3b mov dword ptr [0x12a2dd88], eax */
  w32((uint32_t)(0x12a2dd88), (EAX));
  /* 12a0de40 mov ecx, dword ptr [0x12a2e6c4] */
  ECX = (r32((uint32_t)(0x12a2e6c4)));
  /* 12a0de46 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0de47 call 0x12a0e160 */
  push32(0x12a0de4cu); f_12a0e160();
  /* 12a0de4c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0de4f push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0de51 mov edx, dword ptr [0x12a2e6c4] */
  EDX = (r32((uint32_t)(0x12a2e6c4)));
  /* 12a0de57 push edx */
  push32((uint32_t)(EDX));
  /* 12a0de58 call 0x12a033b0 */
  push32(0x12a0de5du); f_12a033b0();
  /* 12a0de5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0de60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0de63 mov dword ptr [0x12a2e6c4], eax */
  w32((uint32_t)(0x12a2e6c4), (EAX));
  /* 12a0de68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0de6a jmp 0x12a0decc */
  goto L_12a0decc;
L_12a0de6c:;
  /* 12a0de6c mov ecx, dword ptr [0x12a2dd88] */
  ECX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de72 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0de74 mov dword ptr [0x12a2dd58], edx */
  w32((uint32_t)(0x12a2dd58), (EDX));
  /* 12a0de7a mov eax, dword ptr [0x12a2dd88] */
  EAX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12a0de82 mov dword ptr [0x12a2dd5c], ecx */
  w32((uint32_t)(0x12a2dd5c), (ECX));
  /* 12a0de88 mov edx, dword ptr [0x12a2dd88] */
  EDX = (r32((uint32_t)(0x12a2dd88)));
  /* 12a0de8e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12a0de91 mov dword ptr [0x12a2dd60], eax */
  w32((uint32_t)(0x12a2dd60), (EAX));
  /* 12a0de96 mov dword ptr [0x12a2dd88], 0x12a2dd58 */
  w32((uint32_t)(0x12a2dd88), (0x12a2dd58u));
  /* 12a0dea0 mov ecx, dword ptr [0x12a2e6c4] */
  ECX = (r32((uint32_t)(0x12a2e6c4)));
  /* 12a0dea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dea7 call 0x12a0e160 */
  push32(0x12a0deacu); f_12a0e160();
  /* 12a0deac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0deaf push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0deb1 mov edx, dword ptr [0x12a2e6c4] */
  EDX = (r32((uint32_t)(0x12a2e6c4)));
  /* 12a0deb7 push edx */
  push32((uint32_t)(EDX));
  /* 12a0deb8 call 0x12a033b0 */
  push32(0x12a0debdu); f_12a033b0();
  /* 12a0debd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dec0 mov dword ptr [0x12a2e6c4], 0 */
  w32((uint32_t)(0x12a2e6c4), (0x0u));
  /* 12a0deca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0decc:;
  /* 12a0decc mov esp, ebp */
  ESP = (EBP);
  /* 12a0dece pop ebp */
  EBP = (pop32());
  /* 12a0decf ret  */
  ESPCHK(0x12a0dda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ded0 @ 0x12a0ded0 (525 bytes, 200 insns) */
void f_12a0ded0(void) {
  FTRACE(0x12a0ded0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ded0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ded1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ded3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ded6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0dedd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0dedf mov ax, word ptr [0x12a2e6e4] */
  AX = (r16((uint32_t)(0x12a2e6e4)));
  /* 12a0dee5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0dee8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0deec jne 0x12a0def6 */
  if (!C.zf) goto L_12a0def6;
  /* 12a0deee or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0def1 jmp 0x12a0e0d9 */
  goto L_12a0e0d9;
L_12a0def6:;
  /* 12a0def6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0def9 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0defc push ecx */
  push32((uint32_t)(ECX));
  /* 12a0defd push 0x15 */
  push32((uint32_t)(0x15u));
  /* 12a0deff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0df02 push edx */
  push32((uint32_t)(EDX));
  /* 12a0df03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0df05 call 0x12a10ae0 */
  push32(0x12a0df0au); f_12a10ae0();
  /* 12a0df0a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df0d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0df10 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0df12 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0df15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0df18 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df1b push edx */
  push32((uint32_t)(EDX));
  /* 12a0df1c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 12a0df1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0df21 push eax */
  push32((uint32_t)(EAX));
  /* 12a0df22 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0df24 call 0x12a10ae0 */
  push32(0x12a0df29u); f_12a10ae0();
  /* 12a0df29 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df2c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0df2f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0df31 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0df34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0df37 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df3a push edx */
  push32((uint32_t)(EDX));
  /* 12a0df3b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12a0df3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0df40 push eax */
  push32((uint32_t)(EAX));
  /* 12a0df41 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0df43 call 0x12a10ae0 */
  push32(0x12a0df48u); f_12a10ae0();
  /* 12a0df48 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0df4e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0df50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0df53 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0df56 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df59 push edx */
  push32((uint32_t)(EDX));
  /* 12a0df5a push 0x17 */
  push32((uint32_t)(0x17u));
  /* 12a0df5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0df5f push eax */
  push32((uint32_t)(EAX));
  /* 12a0df60 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0df62 call 0x12a10ae0 */
  push32(0x12a0df67u); f_12a10ae0();
  /* 12a0df67 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0df6d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0df6f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0df72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0df75 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df78 push edx */
  push32((uint32_t)(EDX));
  /* 12a0df79 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 12a0df7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0df7e push eax */
  push32((uint32_t)(EAX));
  /* 12a0df7f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0df81 call 0x12a10ae0 */
  push32(0x12a0df86u); f_12a10ae0();
  /* 12a0df86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0df89 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0df8c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0df8e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0df91 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0df94 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12a0df97 push eax */
  push32((uint32_t)(EAX));
  /* 12a0df98 call 0x12a0e0e0 */
  push32(0x12a0df9du); f_12a0e0e0();
  /* 12a0df9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dfa3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfa6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0dfa7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 12a0dfa9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dfac push edx */
  push32((uint32_t)(EDX));
  /* 12a0dfad push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0dfaf call 0x12a10ae0 */
  push32(0x12a0dfb4u); f_12a10ae0();
  /* 12a0dfb4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0dfba or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0dfbc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0dfbf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dfc2 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfc5 push edx */
  push32((uint32_t)(EDX));
  /* 12a0dfc6 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 12a0dfc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dfcb push eax */
  push32((uint32_t)(EAX));
  /* 12a0dfcc push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0dfce call 0x12a10ae0 */
  push32(0x12a0dfd3u); f_12a10ae0();
  /* 12a0dfd3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfd6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0dfd9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0dfdb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0dfde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0dfe1 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dfe4 push edx */
  push32((uint32_t)(EDX));
  /* 12a0dfe5 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 12a0dfe7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0dfea push eax */
  push32((uint32_t)(EAX));
  /* 12a0dfeb push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0dfed call 0x12a10ae0 */
  push32(0x12a0dff2u); f_12a10ae0();
  /* 12a0dff2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0dff5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0dff8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0dffa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0dffd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e000 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e003 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e004 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12a0e006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e009 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e00a push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e00c call 0x12a10ae0 */
  push32(0x12a0e011u); f_12a10ae0();
  /* 12a0e011 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e014 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e017 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e019 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e01c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e01f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e022 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e023 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 12a0e025 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e028 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e029 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e02b call 0x12a10ae0 */
  push32(0x12a0e030u); f_12a10ae0();
  /* 12a0e030 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e033 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e036 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e038 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e03b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e03e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e041 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e042 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 12a0e044 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e047 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e048 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e04a call 0x12a10ae0 */
  push32(0x12a0e04fu); f_12a10ae0();
  /* 12a0e04f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e052 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e055 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e057 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e05a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e05d add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e060 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e061 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 12a0e063 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e066 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e067 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e069 call 0x12a10ae0 */
  push32(0x12a0e06eu); f_12a10ae0();
  /* 12a0e06e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e071 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e074 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e076 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e079 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e07c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e07f push edx */
  push32((uint32_t)(EDX));
  /* 12a0e080 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 12a0e082 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e085 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e086 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e088 call 0x12a10ae0 */
  push32(0x12a0e08du); f_12a10ae0();
  /* 12a0e08d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e090 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e093 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e095 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e098 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e09b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e09e push edx */
  push32((uint32_t)(EDX));
  /* 12a0e09f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 12a0e0a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e0a4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e0a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e0a7 call 0x12a10ae0 */
  push32(0x12a0e0acu); f_12a10ae0();
  /* 12a0e0ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e0af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e0b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e0b4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e0b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e0ba add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e0bd push edx */
  push32((uint32_t)(EDX));
  /* 12a0e0be push 0x53 */
  push32((uint32_t)(0x53u));
  /* 12a0e0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e0c3 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e0c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e0c6 call 0x12a10ae0 */
  push32(0x12a0e0cbu); f_12a10ae0();
  /* 12a0e0cb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e0ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e0d1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e0d3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0e0d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12a0e0d9:;
  /* 12a0e0d9 mov esp, ebp */
  ESP = (EBP);
  /* 12a0e0db pop ebp */
  EBP = (pop32());
  /* 12a0e0dc ret  */
  ESPCHK(0x12a0ded0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x12a0e0e0 (125 bytes, 49 insns) */
void f_12a0e0e0(void) {
  FTRACE(0x12a0e0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e0e1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e0e3 push ecx */
  push32((uint32_t)(ECX));
L_12a0e0e4:;
  /* 12a0e0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e0e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0e0ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0e0ec je 0x12a0e159 */
  if (C.zf) goto L_12a0e159;
  /* 12a0e0ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e0f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0e0f4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e0f7 jl 0x12a0e11d */
  if ((C.sf!=C.of)) goto L_12a0e11d;
  /* 12a0e0f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e0fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0e0ff cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e102 jg 0x12a0e11d */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0e11d;
  /* 12a0e104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e107 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0e10a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e10d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e110 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12a0e112 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e115 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e118 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a0e11b jmp 0x12a0e157 */
  goto L_12a0e157;
L_12a0e11d:;
  /* 12a0e11d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e120 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0e123 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e126 jne 0x12a0e14e */
  if (!C.zf) goto L_12a0e14e;
  /* 12a0e128 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e12b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0e12e:;
  /* 12a0e12e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e131 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e134 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a0e137 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12a0e139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e13f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0e142 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e145 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0e148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e14a jne 0x12a0e12e */
  if (!C.zf) goto L_12a0e12e;
  /* 12a0e14c jmp 0x12a0e157 */
  goto L_12a0e157;
L_12a0e14e:;
  /* 12a0e14e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e151 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e154 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12a0e157:;
  /* 12a0e157 jmp 0x12a0e0e4 */
  goto L_12a0e0e4;
L_12a0e159:;
  /* 12a0e159 mov esp, ebp */
  ESP = (EBP);
  /* 12a0e15b pop ebp */
  EBP = (pop32());
  /* 12a0e15c ret  */
  ESPCHK(0x12a0e0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x12a0e160 (147 bytes, 52 insns) */
void f_12a0e160(void) {
  FTRACE(0x12a0e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e160 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e161 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e163 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e167 jne 0x12a0e16e */
  if (!C.zf) goto L_12a0e16e;
  /* 12a0e169 jmp 0x12a0e1f1 */
  goto L_12a0e1f1;
L_12a0e16e:;
  /* 12a0e16e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e171 cmp dword ptr [eax + 0xc], 0x12a2e720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x12a2e720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e178 je 0x12a0e1f1 */
  if (C.zf) goto L_12a0e1f1;
  /* 12a0e17a push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e17c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e17f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12a0e182 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e183 call 0x12a033b0 */
  push32(0x12a0e188u); f_12a033b0();
  /* 12a0e188 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e18b push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e18d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e190 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12a0e193 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e194 call 0x12a033b0 */
  push32(0x12a0e199u); f_12a033b0();
  /* 12a0e199 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e19c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e19e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e1a1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12a0e1a4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e1a5 call 0x12a033b0 */
  push32(0x12a0e1aau); f_12a033b0();
  /* 12a0e1aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e1ad push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e1af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e1b2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12a0e1b5 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e1b6 call 0x12a033b0 */
  push32(0x12a0e1bbu); f_12a033b0();
  /* 12a0e1bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e1be push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e1c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e1c3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12a0e1c6 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e1c7 call 0x12a033b0 */
  push32(0x12a0e1ccu); f_12a033b0();
  /* 12a0e1cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e1cf push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e1d4 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 12a0e1d7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e1d8 call 0x12a033b0 */
  push32(0x12a0e1ddu); f_12a033b0();
  /* 12a0e1dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e1e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e1e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e1e5 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 12a0e1e8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e1e9 call 0x12a033b0 */
  push32(0x12a0e1eeu); f_12a033b0();
  /* 12a0e1ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e1f1:;
  /* 12a0e1f1 pop ebp */
  EBP = (pop32());
  /* 12a0e1f2 ret  */
  ESPCHK(0x12a0e160u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e200 @ 0x12a0e200 (928 bytes, 284 insns) */
void f_12a0e200(void) {
  FTRACE(0x12a0e200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e200 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e201 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e203 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e206 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12a0e20d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12a0e214 cmp dword ptr [0x12a2e688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e21b je 0x12a0e551 */
  if (C.zf) goto L_12a0e551;
  /* 12a0e221 cmp dword ptr [0x12a2e698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e228 jne 0x12a0e250 */
  if (!C.zf) goto L_12a0e250;
  /* 12a0e22a push 0x12a2e698 */
  push32((uint32_t)(0x12a2e698u));
  /* 12a0e22f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12a0e234 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e236 mov ax, word ptr [0x12a2e6dc] */
  AX = (r16((uint32_t)(0x12a2e6dc)));
  /* 12a0e23c push eax */
  push32((uint32_t)(EAX));
  /* 12a0e23d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e23f call 0x12a10ae0 */
  push32(0x12a0e244u); f_12a10ae0();
  /* 12a0e244 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e247 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e249 je 0x12a0e250 */
  if (C.zf) goto L_12a0e250;
  /* 12a0e24b jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e250:;
  /* 12a0e250 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 12a0e252 push 0x12a29ffc */
  push32((uint32_t)(0x12a29ffcu));
  /* 12a0e257 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e259 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12a0e25e call 0x12a02920 */
  push32(0x12a0e263u); f_12a02920();
  /* 12a0e263 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e266 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12a0e269 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 12a0e26b push 0x12a29ffc */
  push32((uint32_t)(0x12a29ffcu));
  /* 12a0e270 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e272 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12a0e277 call 0x12a02920 */
  push32(0x12a0e27cu); f_12a02920();
  /* 12a0e27c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e27f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12a0e282 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 12a0e284 push 0x12a29ffc */
  push32((uint32_t)(0x12a29ffcu));
  /* 12a0e289 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e28b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 12a0e290 call 0x12a02920 */
  push32(0x12a0e295u); f_12a02920();
  /* 12a0e295 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e298 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12a0e29b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 12a0e29d push 0x12a29ffc */
  push32((uint32_t)(0x12a29ffcu));
  /* 12a0e2a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e2a4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 12a0e2a9 call 0x12a02920 */
  push32(0x12a0e2aeu); f_12a02920();
  /* 12a0e2ae add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e2b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12a0e2b4 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e2b8 je 0x12a0e2cc */
  if (C.zf) goto L_12a0e2cc;
  /* 12a0e2ba cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e2be je 0x12a0e2cc */
  if (C.zf) goto L_12a0e2cc;
  /* 12a0e2c0 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e2c4 je 0x12a0e2cc */
  if (C.zf) goto L_12a0e2cc;
  /* 12a0e2c6 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e2ca jne 0x12a0e2d1 */
  if (!C.zf) goto L_12a0e2d1;
L_12a0e2cc:;
  /* 12a0e2cc jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e2d1:;
  /* 12a0e2d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0e2d4 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12a0e2d7 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a0e2de jmp 0x12a0e2e9 */
  goto L_12a0e2e9;
L_12a0e2e0:;
  /* 12a0e2e0 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0e2e3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e2e6 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12a0e2e9:;
  /* 12a0e2e9 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e2f0 jge 0x12a0e305 */
  if ((C.sf==C.of)) goto L_12a0e305;
  /* 12a0e2f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e2f5 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 12a0e2f8 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 12a0e2fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e2fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e300 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a0e303 jmp 0x12a0e2e0 */
  goto L_12a0e2e0;
L_12a0e305:;
  /* 12a0e305 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 12a0e308 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e309 mov ecx, dword ptr [0x12a2e698] */
  ECX = (r32((uint32_t)(0x12a2e698)));
  /* 12a0e30f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e310 call dword ptr [0x12a302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302c0))), 0x12a0e316u);
  /* 12a0e316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e318 jne 0x12a0e31f */
  if (!C.zf) goto L_12a0e31f;
  /* 12a0e31a jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e31f:;
  /* 12a0e31f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e323 jbe 0x12a0e32a */
  if ((C.cf||C.zf)) goto L_12a0e32a;
  /* 12a0e325 jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e32a:;
  /* 12a0e32a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12a0e32d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0e333 mov dword ptr [0x12a2cea4], edx */
  w32((uint32_t)(0x12a2cea4), (EDX));
  /* 12a0e339 cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e340 jle 0x12a0e399 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0e399;
  /* 12a0e342 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 12a0e345 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12a0e348 jmp 0x12a0e353 */
  goto L_12a0e353;
L_12a0e34a:;
  /* 12a0e34a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e34d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e350 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_12a0e353:;
  /* 12a0e353 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e356 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e358 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0e35a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e35c je 0x12a0e399 */
  if (C.zf) goto L_12a0e399;
  /* 12a0e35e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e361 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0e363 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12a0e366 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0e368 je 0x12a0e399 */
  if (C.zf) goto L_12a0e399;
  /* 12a0e36a mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e36d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e36f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a0e371 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12a0e374 jmp 0x12a0e37f */
  goto L_12a0e37f;
L_12a0e376:;
  /* 12a0e376 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0e379 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e37c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12a0e37f:;
  /* 12a0e37f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e382 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e384 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12a0e387 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e38a jg 0x12a0e397 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0e397;
  /* 12a0e38c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0e38f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e392 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12a0e395 jmp 0x12a0e376 */
  goto L_12a0e376;
L_12a0e397:;
  /* 12a0e397 jmp 0x12a0e34a */
  goto L_12a0e34a;
L_12a0e399:;
  /* 12a0e399 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e39b push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e39d push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e39f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e3a2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e3a5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e3a6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a0e3ab mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0e3ae push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e3af push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0e3b1 call 0x12a0ab50 */
  push32(0x12a0e3b6u); f_12a0ab50();
  /* 12a0e3b6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e3b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e3bb jne 0x12a0e3c2 */
  if (!C.zf) goto L_12a0e3c2;
  /* 12a0e3bd jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e3c2:;
  /* 12a0e3c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e3c5 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 12a0e3ca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0e3cd mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12a0e3d0 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12a0e3d7 jmp 0x12a0e3e2 */
  goto L_12a0e3e2;
L_12a0e3d9:;
  /* 12a0e3d9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0e3dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e3df mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12a0e3e2:;
  /* 12a0e3e2 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e3e9 jge 0x12a0e400 */
  if ((C.sf==C.of)) goto L_12a0e400;
  /* 12a0e3eb mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0e3ee mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 12a0e3f2 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12a0e3f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12a0e3f8 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e3fb mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12a0e3fe jmp 0x12a0e3d9 */
  goto L_12a0e3d9;
L_12a0e400:;
  /* 12a0e400 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e402 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0e404 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0e407 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e40a push edx */
  push32((uint32_t)(EDX));
  /* 12a0e40b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12a0e410 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0e413 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e414 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0e416 call 0x12a10d80 */
  push32(0x12a0e41bu); f_12a10d80();
  /* 12a0e41b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e41e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e420 jne 0x12a0e427 */
  if (!C.zf) goto L_12a0e427;
  /* 12a0e422 jmp 0x12a0e512 */
  goto L_12a0e512;
L_12a0e427:;
  /* 12a0e427 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0e42a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 12a0e42f cmp dword ptr [0x12a2cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12a2cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e436 jle 0x12a0e493 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0e493;
  /* 12a0e438 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 12a0e43b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12a0e43e jmp 0x12a0e449 */
  goto L_12a0e449;
L_12a0e440:;
  /* 12a0e440 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e443 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e446 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12a0e449:;
  /* 12a0e449 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e44c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12a0e44e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12a0e450 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0e452 je 0x12a0e493 */
  if (C.zf) goto L_12a0e493;
  /* 12a0e454 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e457 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e459 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12a0e45c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0e45e je 0x12a0e493 */
  if (C.zf) goto L_12a0e493;
  /* 12a0e460 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e463 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e465 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0e467 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12a0e46a jmp 0x12a0e475 */
  goto L_12a0e475;
L_12a0e46c:;
  /* 12a0e46c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0e46f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e472 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12a0e475:;
  /* 12a0e475 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12a0e478 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e47a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12a0e47d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e480 jg 0x12a0e491 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0e491;
  /* 12a0e482 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12a0e485 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e488 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 12a0e48f jmp 0x12a0e46c */
  goto L_12a0e46c;
L_12a0e491:;
  /* 12a0e491 jmp 0x12a0e440 */
  goto L_12a0e440;
L_12a0e493:;
  /* 12a0e493 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e496 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e499 mov dword ptr [0x12a2cc98], eax */
  w32((uint32_t)(0x12a2cc98), (EAX));
  /* 12a0e49e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0e4a1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e4a4 mov dword ptr [0x12a2cc9c], ecx */
  w32((uint32_t)(0x12a2cc9c), (ECX));
  /* 12a0e4aa cmp dword ptr [0x12a2e6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e4b1 je 0x12a0e4c4 */
  if (C.zf) goto L_12a0e4c4;
  /* 12a0e4b3 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e4b5 mov edx, dword ptr [0x12a2e6c8] */
  EDX = (r32((uint32_t)(0x12a2e6c8)));
  /* 12a0e4bb push edx */
  push32((uint32_t)(EDX));
  /* 12a0e4bc call 0x12a033b0 */
  push32(0x12a0e4c1u); f_12a033b0();
  /* 12a0e4c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e4c4:;
  /* 12a0e4c4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e4c7 mov dword ptr [0x12a2e6c8], eax */
  w32((uint32_t)(0x12a2e6c8), (EAX));
  /* 12a0e4cc cmp dword ptr [0x12a2e6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e4d3 je 0x12a0e4e6 */
  if (C.zf) goto L_12a0e4e6;
  /* 12a0e4d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e4d7 mov ecx, dword ptr [0x12a2e6cc] */
  ECX = (r32((uint32_t)(0x12a2e6cc)));
  /* 12a0e4dd push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e4de call 0x12a033b0 */
  push32(0x12a0e4e3u); f_12a033b0();
  /* 12a0e4e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e4e6:;
  /* 12a0e4e6 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0e4e9 mov dword ptr [0x12a2e6cc], edx */
  w32((uint32_t)(0x12a2e6cc), (EDX));
  /* 12a0e4ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e4f1 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0e4f4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e4f5 call 0x12a033b0 */
  push32(0x12a0e4fau); f_12a033b0();
  /* 12a0e4fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e4fd push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e4ff mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0e502 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e503 call 0x12a033b0 */
  push32(0x12a0e508u); f_12a033b0();
  /* 12a0e508 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e50b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e50d jmp 0x12a0e59c */
  goto L_12a0e59c;
L_12a0e512:;
  /* 12a0e512 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e514 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12a0e517 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e518 call 0x12a033b0 */
  push32(0x12a0e51du); f_12a033b0();
  /* 12a0e51d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e520 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e522 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12a0e525 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e526 call 0x12a033b0 */
  push32(0x12a0e52bu); f_12a033b0();
  /* 12a0e52b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e52e push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e530 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12a0e533 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e534 call 0x12a033b0 */
  push32(0x12a0e539u); f_12a033b0();
  /* 12a0e539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e53c push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e53e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12a0e541 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e542 call 0x12a033b0 */
  push32(0x12a0e547u); f_12a033b0();
  /* 12a0e547 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e54a mov eax, 1 */
  EAX = (0x1u);
  /* 12a0e54f jmp 0x12a0e59c */
  goto L_12a0e59c;
L_12a0e551:;
  /* 12a0e551 mov dword ptr [0x12a2cc98], 0x12a2cca2 */
  w32((uint32_t)(0x12a2cc98), (0x12a2cca2u));
  /* 12a0e55b mov dword ptr [0x12a2cc9c], 0x12a2cca2 */
  w32((uint32_t)(0x12a2cc9c), (0x12a2cca2u));
  /* 12a0e565 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e567 mov eax, dword ptr [0x12a2e6c8] */
  EAX = (r32((uint32_t)(0x12a2e6c8)));
  /* 12a0e56c push eax */
  push32((uint32_t)(EAX));
  /* 12a0e56d call 0x12a033b0 */
  push32(0x12a0e572u); f_12a033b0();
  /* 12a0e572 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e575 push 2 */
  push32((uint32_t)(0x2u));
  /* 12a0e577 mov ecx, dword ptr [0x12a2e6cc] */
  ECX = (r32((uint32_t)(0x12a2e6cc)));
  /* 12a0e57d push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e57e call 0x12a033b0 */
  push32(0x12a0e583u); f_12a033b0();
  /* 12a0e583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e586 mov dword ptr [0x12a2e6c8], 0 */
  w32((uint32_t)(0x12a2e6c8), (0x0u));
  /* 12a0e590 mov dword ptr [0x12a2e6cc], 0 */
  w32((uint32_t)(0x12a2e6cc), (0x0u));
  /* 12a0e59a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12a0e59c:;
  /* 12a0e59c mov esp, ebp */
  ESP = (EBP);
  /* 12a0e59e pop ebp */
  EBP = (pop32());
  /* 12a0e59f ret  */
  ESPCHK(0x12a0e200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e5a0 @ 0x12a0e5a0 (7 bytes, 5 insns) */
void f_12a0e5a0(void) {
  FTRACE(0x12a0e5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e5a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e5a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e5a5 pop ebp */
  EBP = (pop32());
  /* 12a0e5a6 ret  */
  ESPCHK(0x12a0e5a0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x12a0e5b0 (129 bytes, 56 insns) */
void f_12a0e5b0(void) {
  FTRACE(0x12a0e5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e5b0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 12a0e5b4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 12a0e5b8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12a0e5be jne 0x12a0e5fc */
  if (!C.zf) goto L_12a0e5fc;
L_12a0e5c0:;
  /* 12a0e5c0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12a0e5c2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e5c4 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e5c6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e5c8 je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e5ca cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e5cd jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e5cf or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12a0e5d1 je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e5d3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12a0e5d6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e5d9 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e5db or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e5dd je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e5df cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e5e2 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e5e4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e5e7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e5ea or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12a0e5ec jne 0x12a0e5c0 */
  if (!C.zf) goto L_12a0e5c0;
  /* 12a0e5ee mov edi, edi */
  EDI = (EDI);
L_12a0e5f0:;
  /* 12a0e5f0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e5f2 ret  */
  ESPCHK(0x12a0e5b0u, _esp0);
  ESP += 4; return;
  /* 12a0e5f3 nop  */
  /* nop */
L_12a0e5f4:;
  /* 12a0e5f4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e5f6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0e5f8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12a0e5f9 ret  */
  ESPCHK(0x12a0e5b0u, _esp0);
  ESP += 4; return;
  /* 12a0e5fa mov edi, edi */
  EDI = (EDI);
L_12a0e5fc:;
  /* 12a0e5fc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 12a0e602 je 0x12a0e618 */
  if (C.zf) goto L_12a0e618;
  /* 12a0e604 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0e606 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12a0e607 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e609 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e60b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12a0e60c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e60e je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e610 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 12a0e616 je 0x12a0e5c0 */
  if (C.zf) goto L_12a0e5c0;
L_12a0e618:;
  /* 12a0e618 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12a0e61b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e61e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e620 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e622 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e624 je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e626 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e629 jne 0x12a0e5f4 */
  if (!C.zf) goto L_12a0e5f4;
  /* 12a0e62b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12a0e62d je 0x12a0e5f0 */
  if (C.zf) goto L_12a0e5f0;
  /* 12a0e62f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e632 jmp 0x12a0e5c0 */
  goto L_12a0e5c0;
}

/* FUN_1000e640 @ 0x12a0e640 (62 bytes, 35 insns) */
void f_12a0e640(void) {
  FTRACE(0x12a0e640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e640 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e641 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e643 push esi */
  push32((uint32_t)(ESI));
  /* 12a0e644 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e646 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e647 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e648 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e649 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e64a push eax */
  push32((uint32_t)(EAX));
  /* 12a0e64b push eax */
  push32((uint32_t)(EAX));
  /* 12a0e64c push eax */
  push32((uint32_t)(EAX));
  /* 12a0e64d push eax */
  push32((uint32_t)(EAX));
  /* 12a0e64e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e651 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0e654:;
  /* 12a0e654 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0e656 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e658 je 0x12a0e661 */
  if (C.zf) goto L_12a0e661;
  /* 12a0e65a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12a0e65b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12a0e65b");
  /* 12a0e65f jmp 0x12a0e654 */
  goto L_12a0e654;
L_12a0e661:;
  /* 12a0e661 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e664 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e667 nop  */
  /* nop */
L_12a0e668:;
  /* 12a0e668 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 12a0e669 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0e66b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e66d je 0x12a0e676 */
  if (C.zf) goto L_12a0e676;
  /* 12a0e66f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a0e670 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12a0e670");
  /* 12a0e674 jae 0x12a0e668 */
  if (!C.cf) goto L_12a0e668;
L_12a0e676:;
  /* 12a0e676 mov eax, ecx */
  EAX = (ECX);
  /* 12a0e678 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e67b pop esi */
  ESI = (pop32());
  /* 12a0e67c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0e67d ret  */
  ESPCHK(0x12a0e640u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x12a0e680 (56 bytes, 31 insns) */
void f_12a0e680(void) {
  FTRACE(0x12a0e680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e680 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e681 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e683 push edi */
  push32((uint32_t)(EDI));
  /* 12a0e684 push esi */
  push32((uint32_t)(ESI));
  /* 12a0e685 push ebx */
  push32((uint32_t)(EBX));
  /* 12a0e686 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e689 jecxz 0x12a0e6b1 */
  x86_unimpl("jecxz @ 0x12a0e689");
  /* 12a0e68b mov ebx, ecx */
  EBX = (ECX);
  /* 12a0e68d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e690 mov esi, edi */
  ESI = (EDI);
  /* 12a0e692 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e694 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 12a0e696 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0e698 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e69a mov edi, esi */
  EDI = (ESI);
  /* 12a0e69c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e69f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 12a0e6a1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 12a0e6a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e6a6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12a0e6a9 ja 0x12a0e6af */
  if ((!C.cf&&!C.zf)) goto L_12a0e6af;
  /* 12a0e6ab je 0x12a0e6b1 */
  if (C.zf) goto L_12a0e6b1;
  /* 12a0e6ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12a0e6ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_12a0e6af:;
  /* 12a0e6af not ecx */
  ECX = (~(ECX));
L_12a0e6b1:;
  /* 12a0e6b1 mov eax, ecx */
  EAX = (ECX);
  /* 12a0e6b3 pop ebx */
  EBX = (pop32());
  /* 12a0e6b4 pop esi */
  ESI = (pop32());
  /* 12a0e6b5 pop edi */
  EDI = (pop32());
  /* 12a0e6b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0e6b7 ret  */
  ESPCHK(0x12a0e680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e6c0 @ 0x12a0e6c0 (58 bytes, 32 insns) */
void f_12a0e6c0(void) {
  FTRACE(0x12a0e6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e6c1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e6c3 push esi */
  push32((uint32_t)(ESI));
  /* 12a0e6c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e6c6 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6c7 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6c8 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6c9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6ca push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6cb push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6cc push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6cd push eax */
  push32((uint32_t)(EAX));
  /* 12a0e6ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e6d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12a0e6d4:;
  /* 12a0e6d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0e6d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e6d8 je 0x12a0e6e1 */
  if (C.zf) goto L_12a0e6e1;
  /* 12a0e6da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12a0e6db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x12a0e6db");
  /* 12a0e6df jmp 0x12a0e6d4 */
  goto L_12a0e6d4;
L_12a0e6e1:;
  /* 12a0e6e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_12a0e6e4:;
  /* 12a0e6e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12a0e6e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12a0e6e8 je 0x12a0e6f4 */
  if (C.zf) goto L_12a0e6f4;
  /* 12a0e6ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12a0e6eb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x12a0e6eb");
  /* 12a0e6ef jae 0x12a0e6e4 */
  if (!C.cf) goto L_12a0e6e4;
  /* 12a0e6f1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_12a0e6f4:;
  /* 12a0e6f4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e6f7 pop esi */
  ESI = (pop32());
  /* 12a0e6f8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12a0e6f9 ret  */
  ESPCHK(0x12a0e6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e700 @ 0x12a0e700 (512 bytes, 147 insns) */
void f_12a0e700(void) {
  FTRACE(0x12a0e700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e700 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e701 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e703 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e706 cmp dword ptr [0x12a2e714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e70d jne 0x12a0e732 */
  if (!C.zf) goto L_12a0e732;
  /* 12a0e70f call 0x12a0f1d0 */
  push32(0x12a0e714u); f_12a0f1d0();
  /* 12a0e714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e716 je 0x12a0e722 */
  if (C.zf) goto L_12a0e722;
  /* 12a0e718 mov eax, dword ptr [0x12a30338] */
  EAX = (r32((uint32_t)(0x12a30338)));
  /* 12a0e71d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0e720 jmp 0x12a0e729 */
  goto L_12a0e729;
L_12a0e722:;
  /* 12a0e722 mov dword ptr [ebp - 8], 0x12a0f220 */
  w32((uint32_t)(EBP + -0x8), (0x12a0f220u));
L_12a0e729:;
  /* 12a0e729 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0e72c mov dword ptr [0x12a2e714], ecx */
  w32((uint32_t)(0x12a2e714), (ECX));
L_12a0e732:;
  /* 12a0e732 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e736 jne 0x12a0e742 */
  if (!C.zf) goto L_12a0e742;
  /* 12a0e738 call 0x12a0f020 */
  push32(0x12a0e73du); f_12a0f020();
  /* 12a0e73d jmp 0x12a0e80e */
  goto L_12a0e80e;
L_12a0e742:;
  /* 12a0e742 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e745 mov dword ptr [0x12a2e704], edx */
  w32((uint32_t)(0x12a2e704), (EDX));
  /* 12a0e74b cmp dword ptr [0x12a2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e752 je 0x12a0e774 */
  if (C.zf) goto L_12a0e774;
  /* 12a0e754 mov eax, dword ptr [0x12a2e704] */
  EAX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0e759 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0e75c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0e75e je 0x12a0e774 */
  if (C.zf) goto L_12a0e774;
  /* 12a0e760 push 0x12a2e704 */
  push32((uint32_t)(0x12a2e704u));
  /* 12a0e765 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12a0e767 push 0x12a2da90 */
  push32((uint32_t)(0x12a2da90u));
  /* 12a0e76c call 0x12a0e900 */
  push32(0x12a0e771u); f_12a0e900();
  /* 12a0e771 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e774:;
  /* 12a0e774 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e777 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e77a mov dword ptr [0x12a2e708], edx */
  w32((uint32_t)(0x12a2e708), (EDX));
  /* 12a0e780 cmp dword ptr [0x12a2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e787 je 0x12a0e7a9 */
  if (C.zf) goto L_12a0e7a9;
  /* 12a0e789 mov eax, dword ptr [0x12a2e708] */
  EAX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0e78e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0e791 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0e793 je 0x12a0e7a9 */
  if (C.zf) goto L_12a0e7a9;
  /* 12a0e795 push 0x12a2e708 */
  push32((uint32_t)(0x12a2e708u));
  /* 12a0e79a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12a0e79c push 0x12a2d9d8 */
  push32((uint32_t)(0x12a2d9d8u));
  /* 12a0e7a1 call 0x12a0e900 */
  push32(0x12a0e7a6u); f_12a0e900();
  /* 12a0e7a6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e7a9:;
  /* 12a0e7a9 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0e7b3 cmp dword ptr [0x12a2e704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e7ba je 0x12a0e7ed */
  if (C.zf) goto L_12a0e7ed;
  /* 12a0e7bc mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0e7c2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12a0e7c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e7c7 je 0x12a0e7ed */
  if (C.zf) goto L_12a0e7ed;
  /* 12a0e7c9 cmp dword ptr [0x12a2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e7d0 je 0x12a0e7e6 */
  if (C.zf) goto L_12a0e7e6;
  /* 12a0e7d2 mov ecx, dword ptr [0x12a2e708] */
  ECX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0e7d8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12a0e7db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0e7dd je 0x12a0e7e6 */
  if (C.zf) goto L_12a0e7e6;
  /* 12a0e7df call 0x12a0e990 */
  push32(0x12a0e7e4u); f_12a0e990();
  /* 12a0e7e4 jmp 0x12a0e7eb */
  goto L_12a0e7eb;
L_12a0e7e6:;
  /* 12a0e7e6 call 0x12a0ed80 */
  push32(0x12a0e7ebu); f_12a0ed80();
L_12a0e7eb:;
  /* 12a0e7eb jmp 0x12a0e80e */
  goto L_12a0e80e;
L_12a0e7ed:;
  /* 12a0e7ed cmp dword ptr [0x12a2e708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e7f4 je 0x12a0e809 */
  if (C.zf) goto L_12a0e809;
  /* 12a0e7f6 mov eax, dword ptr [0x12a2e708] */
  EAX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0e7fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0e7fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0e800 je 0x12a0e809 */
  if (C.zf) goto L_12a0e809;
  /* 12a0e802 call 0x12a0ef20 */
  push32(0x12a0e807u); f_12a0ef20();
  /* 12a0e807 jmp 0x12a0e80e */
  goto L_12a0e80e;
L_12a0e809:;
  /* 12a0e809 call 0x12a0f020 */
  push32(0x12a0e80eu); f_12a0f020();
L_12a0e80e:;
  /* 12a0e80e cmp dword ptr [0x12a2e70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e815 jne 0x12a0e81e */
  if (!C.zf) goto L_12a0e81e;
  /* 12a0e817 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e819 jmp 0x12a0e8fc */
  goto L_12a0e8fc;
L_12a0e81e:;
  /* 12a0e81e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e821 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e827 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e828 call 0x12a0f050 */
  push32(0x12a0e82du); f_12a0f050();
  /* 12a0e82d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e830 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0e833 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e837 je 0x12a0e84c */
  if (C.zf) goto L_12a0e84c;
  /* 12a0e839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e83c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e841 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e842 call dword ptr [0x12a30334] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30334))), 0x12a0e848u);
  /* 12a0e848 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e84a jne 0x12a0e853 */
  if (!C.zf) goto L_12a0e853;
L_12a0e84c:;
  /* 12a0e84c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e84e jmp 0x12a0e8fc */
  goto L_12a0e8fc;
L_12a0e853:;
  /* 12a0e853 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0e855 mov ecx, dword ptr [0x12a2e6f4] */
  ECX = (r32((uint32_t)(0x12a2e6f4)));
  /* 12a0e85b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e85c call dword ptr [0x12a30330] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30330))), 0x12a0e862u);
  /* 12a0e862 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e864 jne 0x12a0e86d */
  if (!C.zf) goto L_12a0e86d;
  /* 12a0e866 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e868 jmp 0x12a0e8fc */
  goto L_12a0e8fc;
L_12a0e86d:;
  /* 12a0e86d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e871 je 0x12a0e898 */
  if (C.zf) goto L_12a0e898;
  /* 12a0e873 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e876 mov ax, word ptr [0x12a2e6f4] */
  AX = (r16((uint32_t)(0x12a2e6f4)));
  /* 12a0e87c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12a0e87f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e882 mov dx, word ptr [0x12a2e710] */
  DX = (r16((uint32_t)(0x12a2e710)));
  /* 12a0e889 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12a0e88d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0e890 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12a0e894 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12a0e898:;
  /* 12a0e898 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e89c je 0x12a0e8f7 */
  if (C.zf) goto L_12a0e8f7;
  /* 12a0e89e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12a0e8a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e8a3 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e8a4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12a0e8a9 mov eax, dword ptr [0x12a2e6f4] */
  EAX = (r32((uint32_t)(0x12a2e6f4)));
  /* 12a0e8ae push eax */
  push32((uint32_t)(EAX));
  /* 12a0e8af call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0e8b5u);
  /* 12a0e8b5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e8b7 jne 0x12a0e8bd */
  if (!C.zf) goto L_12a0e8bd;
  /* 12a0e8b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e8bb jmp 0x12a0e8fc */
  goto L_12a0e8fc;
L_12a0e8bd:;
  /* 12a0e8bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12a0e8bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e8c2 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e8c5 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e8c6 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12a0e8cb mov edx, dword ptr [0x12a2e710] */
  EDX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0e8d1 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e8d2 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0e8d8u);
  /* 12a0e8d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0e8da jne 0x12a0e8e0 */
  if (!C.zf) goto L_12a0e8e0;
  /* 12a0e8dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0e8de jmp 0x12a0e8fc */
  goto L_12a0e8fc;
L_12a0e8e0:;
  /* 12a0e8e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12a0e8e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e8e5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e8ea push eax */
  push32((uint32_t)(EAX));
  /* 12a0e8eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e8ee push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e8ef call 0x12a05460 */
  push32(0x12a0e8f4u); f_12a05460();
  /* 12a0e8f4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0e8f7:;
  /* 12a0e8f7 mov eax, 1 */
  EAX = (0x1u);
L_12a0e8fc:;
  /* 12a0e8fc mov esp, ebp */
  ESP = (EBP);
  /* 12a0e8fe pop ebp */
  EBP = (pop32());
  /* 12a0e8ff ret  */
  ESPCHK(0x12a0e700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e900 @ 0x12a0e900 (130 bytes, 47 insns) */
void f_12a0e900(void) {
  FTRACE(0x12a0e900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e900 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e901 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e906 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12a0e90d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12a0e914:;
  /* 12a0e914 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0e917 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e91a jg 0x12a0e97e */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0e97e;
  /* 12a0e91c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e920 je 0x12a0e97e */
  if (C.zf) goto L_12a0e97e;
  /* 12a0e922 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0e925 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e928 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0e929 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e92b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0e92d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0e930 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e933 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e936 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12a0e939 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e93a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e93d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12a0e93f push edx */
  push32((uint32_t)(EDX));
  /* 12a0e940 call 0x12a10ff0 */
  push32(0x12a0e945u); f_12a10ff0();
  /* 12a0e945 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e948 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0e94b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e94f jne 0x12a0e962 */
  if (!C.zf) goto L_12a0e962;
  /* 12a0e951 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e954 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0e957 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12a0e95b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0e95e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12a0e960 jmp 0x12a0e97c */
  goto L_12a0e97c;
L_12a0e962:;
  /* 12a0e962 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e966 jge 0x12a0e973 */
  if ((C.sf==C.of)) goto L_12a0e973;
  /* 12a0e968 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e96b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0e96e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12a0e971 jmp 0x12a0e97c */
  goto L_12a0e97c;
L_12a0e973:;
  /* 12a0e973 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e976 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e979 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12a0e97c:;
  /* 12a0e97c jmp 0x12a0e914 */
  goto L_12a0e914;
L_12a0e97e:;
  /* 12a0e97e mov esp, ebp */
  ESP = (EBP);
  /* 12a0e980 pop ebp */
  EBP = (pop32());
  /* 12a0e981 ret  */
  ESPCHK(0x12a0e900u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x12a0e990 (186 bytes, 50 insns) */
void f_12a0e990(void) {
  FTRACE(0x12a0e990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0e990 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0e991 mov ebp, esp */
  EBP = (ESP);
  /* 12a0e993 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0e994 mov eax, dword ptr [0x12a2e704] */
  EAX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0e999 push eax */
  push32((uint32_t)(EAX));
  /* 12a0e99a call 0x12a05750 */
  push32(0x12a0e99fu); f_12a05750();
  /* 12a0e99f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e9a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e9a4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e9a7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12a0e9aa mov dword ptr [0x12a2e700], ecx */
  w32((uint32_t)(0x12a2e700), (ECX));
  /* 12a0e9b0 mov edx, dword ptr [0x12a2e708] */
  EDX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0e9b6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0e9b7 call 0x12a05750 */
  push32(0x12a0e9bcu); f_12a05750();
  /* 12a0e9bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e9bf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0e9c1 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e9c4 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12a0e9c7 mov dword ptr [0x12a2e6f8], ecx */
  w32((uint32_t)(0x12a2e6f8), (ECX));
  /* 12a0e9cd mov dword ptr [0x12a2e6f4], 0 */
  w32((uint32_t)(0x12a2e6f4), (0x0u));
  /* 12a0e9d7 cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0e9de je 0x12a0e9e9 */
  if (C.zf) goto L_12a0e9e9;
  /* 12a0e9e0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12a0e9e7 jmp 0x12a0e9fb */
  goto L_12a0e9fb;
L_12a0e9e9:;
  /* 12a0e9e9 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0e9ef push edx */
  push32((uint32_t)(EDX));
  /* 12a0e9f0 call 0x12a0f430 */
  push32(0x12a0e9f5u); f_12a0f430();
  /* 12a0e9f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0e9f8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0e9fb:;
  /* 12a0e9fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0e9fe mov dword ptr [0x12a2e6fc], eax */
  w32((uint32_t)(0x12a2e6fc), (EAX));
  /* 12a0ea03 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ea05 push 0x12a0ea50 */
  push32((uint32_t)(0x12a0ea50u));
  /* 12a0ea0a call dword ptr [0x12a302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302bc))), 0x12a0ea10u);
  /* 12a0ea10 mov ecx, dword ptr [0x12a2e70c] */
  ECX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ea16 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ea1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0ea1e je 0x12a0ea3c */
  if (C.zf) goto L_12a0ea3c;
  /* 12a0ea20 mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ea26 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ea2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0ea2e je 0x12a0ea3c */
  if (C.zf) goto L_12a0ea3c;
  /* 12a0ea30 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ea35 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ea38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ea3a jne 0x12a0ea46 */
  if (!C.zf) goto L_12a0ea46;
L_12a0ea3c:;
  /* 12a0ea3c mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
L_12a0ea46:;
  /* 12a0ea46 mov esp, ebp */
  ESP = (EBP);
  /* 12a0ea48 pop ebp */
  EBP = (pop32());
  /* 12a0ea49 ret  */
  ESPCHK(0x12a0e990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea50 @ 0x12a0ea50 (804 bytes, 220 insns) */
void f_12a0ea50(void) {
  FTRACE(0x12a0ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ea51 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ea53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ea56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ea59 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ea5a call 0x12a0f3b0 */
  push32(0x12a0ea5fu); f_12a0f3b0();
  /* 12a0ea5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ea62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12a0ea65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0ea67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0ea6a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ea6b mov edx, dword ptr [0x12a2e6f8] */
  EDX = (r32((uint32_t)(0x12a2e6f8)));
  /* 12a0ea71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ea73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ea75 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ea7b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ea81 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ea82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ea85 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ea86 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0ea8cu);
  /* 12a0ea8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ea8e jne 0x12a0eaa4 */
  if (!C.zf) goto L_12a0eaa4;
  /* 12a0ea90 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0ea9a mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ea9f jmp 0x12a0ed6e */
  goto L_12a0ed6e;
L_12a0eaa4:;
  /* 12a0eaa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0eaa7 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eaa8 mov edx, dword ptr [0x12a2e708] */
  EDX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0eaae push edx */
  push32((uint32_t)(EDX));
  /* 12a0eaaf call 0x12a10ff0 */
  push32(0x12a0eab4u); f_12a10ff0();
  /* 12a0eab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eab9 jne 0x12a0ebdf */
  if (!C.zf) goto L_12a0ebdf;
  /* 12a0eabf push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0eac1 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12a0eac4 push eax */
  push32((uint32_t)(EAX));
  /* 12a0eac5 mov ecx, dword ptr [0x12a2e700] */
  ECX = (r32((uint32_t)(0x12a2e700)));
  /* 12a0eacb neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0eacd sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0eacf and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ead5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eadb push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eadc mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eadf push edx */
  push32((uint32_t)(EDX));
  /* 12a0eae0 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0eae6u);
  /* 12a0eae6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eae8 jne 0x12a0eafe */
  if (!C.zf) goto L_12a0eafe;
  /* 12a0eaea mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0eaf4 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0eaf9 jmp 0x12a0ed6e */
  goto L_12a0ed6e;
L_12a0eafe:;
  /* 12a0eafe lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12a0eb01 push eax */
  push32((uint32_t)(EAX));
  /* 12a0eb02 mov ecx, dword ptr [0x12a2e704] */
  ECX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0eb08 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eb09 call 0x12a10ff0 */
  push32(0x12a0eb0eu); f_12a10ff0();
  /* 12a0eb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eb11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eb13 jne 0x12a0eb40 */
  if (!C.zf) goto L_12a0eb40;
  /* 12a0eb15 mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0eb1b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0eb21 mov dword ptr [0x12a2e70c], edx */
  w32((uint32_t)(0x12a2e70c), (EDX));
  /* 12a0eb27 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eb2a mov dword ptr [0x12a2e710], eax */
  w32((uint32_t)(0x12a2e710), (EAX));
  /* 12a0eb2f mov ecx, dword ptr [0x12a2e710] */
  ECX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0eb35 mov dword ptr [0x12a2e6f4], ecx */
  w32((uint32_t)(0x12a2e6f4), (ECX));
  /* 12a0eb3b jmp 0x12a0ebdf */
  goto L_12a0ebdf;
L_12a0eb40:;
  /* 12a0eb40 mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0eb46 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0eb49 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0eb4b jne 0x12a0ebdf */
  if (!C.zf) goto L_12a0ebdf;
  /* 12a0eb51 cmp dword ptr [0x12a2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eb58 je 0x12a0ebad */
  if (C.zf) goto L_12a0ebad;
  /* 12a0eb5a mov eax, dword ptr [0x12a2e6fc] */
  EAX = (r32((uint32_t)(0x12a2e6fc)));
  /* 12a0eb5f push eax */
  push32((uint32_t)(EAX));
  /* 12a0eb60 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0eb63 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eb64 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0eb6a push edx */
  push32((uint32_t)(EDX));
  /* 12a0eb6b call 0x12a110c0 */
  push32(0x12a0eb70u); f_12a110c0();
  /* 12a0eb70 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eb73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eb75 jne 0x12a0ebad */
  if (!C.zf) goto L_12a0ebad;
  /* 12a0eb77 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0eb7c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12a0eb7e mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0eb83 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eb86 mov dword ptr [0x12a2e710], ecx */
  w32((uint32_t)(0x12a2e710), (ECX));
  /* 12a0eb8c mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0eb92 push edx */
  push32((uint32_t)(EDX));
  /* 12a0eb93 call 0x12a05750 */
  push32(0x12a0eb98u); f_12a05750();
  /* 12a0eb98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eb9b cmp eax, dword ptr [0x12a2e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eba1 jne 0x12a0ebab */
  if (!C.zf) goto L_12a0ebab;
  /* 12a0eba3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eba6 mov dword ptr [0x12a2e6f4], eax */
  w32((uint32_t)(0x12a2e6f4), (EAX));
L_12a0ebab:;
  /* 12a0ebab jmp 0x12a0ebdf */
  goto L_12a0ebdf;
L_12a0ebad:;
  /* 12a0ebad mov ecx, dword ptr [0x12a2e70c] */
  ECX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ebb3 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ebb6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0ebb8 jne 0x12a0ebdf */
  if (!C.zf) goto L_12a0ebdf;
  /* 12a0ebba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ebbd push edx */
  push32((uint32_t)(EDX));
  /* 12a0ebbe call 0x12a0f0f0 */
  push32(0x12a0ebc3u); f_12a0f0f0();
  /* 12a0ebc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ebc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ebc8 je 0x12a0ebdf */
  if (C.zf) goto L_12a0ebdf;
  /* 12a0ebca mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ebcf or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12a0ebd1 mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0ebd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ebd9 mov dword ptr [0x12a2e710], ecx */
  w32((uint32_t)(0x12a2e710), (ECX));
L_12a0ebdf:;
  /* 12a0ebdf mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ebe5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ebeb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ebf1 je 0x12a0ed61 */
  if (C.zf) goto L_12a0ed61;
  /* 12a0ebf7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0ebf9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12a0ebfc push eax */
  push32((uint32_t)(EAX));
  /* 12a0ebfd mov ecx, dword ptr [0x12a2e700] */
  ECX = (r32((uint32_t)(0x12a2e700)));
  /* 12a0ec03 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ec05 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ec07 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ec0d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ec13 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ec14 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ec17 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ec18 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0ec1eu);
  /* 12a0ec1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ec20 jne 0x12a0ec36 */
  if (!C.zf) goto L_12a0ec36;
  /* 12a0ec22 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0ec2c mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ec31 jmp 0x12a0ed6e */
  goto L_12a0ed6e;
L_12a0ec36:;
  /* 12a0ec36 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12a0ec39 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ec3a mov ecx, dword ptr [0x12a2e704] */
  ECX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0ec40 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ec41 call 0x12a10ff0 */
  push32(0x12a0ec46u); f_12a10ff0();
  /* 12a0ec46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ec49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ec4b jne 0x12a0ed00 */
  if (!C.zf) goto L_12a0ed00;
  /* 12a0ec51 mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ec57 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12a0ec5a mov dword ptr [0x12a2e70c], edx */
  w32((uint32_t)(0x12a2e70c), (EDX));
  /* 12a0ec60 cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ec67 je 0x12a0ec8a */
  if (C.zf) goto L_12a0ec8a;
  /* 12a0ec69 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ec6e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12a0ec71 mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0ec76 cmp dword ptr [0x12a2e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ec7d jne 0x12a0ec88 */
  if (!C.zf) goto L_12a0ec88;
  /* 12a0ec7f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ec82 mov dword ptr [0x12a2e6f4], ecx */
  w32((uint32_t)(0x12a2e6f4), (ECX));
L_12a0ec88:;
  /* 12a0ec88 jmp 0x12a0ecfe */
  goto L_12a0ecfe;
L_12a0ec8a:;
  /* 12a0ec8a cmp dword ptr [0x12a2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ec91 je 0x12a0ecdf */
  if (C.zf) goto L_12a0ecdf;
  /* 12a0ec93 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0ec99 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ec9a call 0x12a05750 */
  push32(0x12a0ec9fu); f_12a05750();
  /* 12a0ec9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eca2 cmp eax, dword ptr [0x12a2e6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2e6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eca8 jne 0x12a0ecdf */
  if (!C.zf) goto L_12a0ecdf;
  /* 12a0ecaa push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ecac mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ecaf push eax */
  push32((uint32_t)(EAX));
  /* 12a0ecb0 call 0x12a0f140 */
  push32(0x12a0ecb5u); f_12a0f140();
  /* 12a0ecb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ecb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ecba je 0x12a0ecdd */
  if (C.zf) goto L_12a0ecdd;
  /* 12a0ecbc mov ecx, dword ptr [0x12a2e70c] */
  ECX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ecc2 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12a0ecc5 mov dword ptr [0x12a2e70c], ecx */
  w32((uint32_t)(0x12a2e70c), (ECX));
  /* 12a0eccb cmp dword ptr [0x12a2e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ecd2 jne 0x12a0ecdd */
  if (!C.zf) goto L_12a0ecdd;
  /* 12a0ecd4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ecd7 mov dword ptr [0x12a2e6f4], edx */
  w32((uint32_t)(0x12a2e6f4), (EDX));
L_12a0ecdd:;
  /* 12a0ecdd jmp 0x12a0ecfe */
  goto L_12a0ecfe;
L_12a0ecdf:;
  /* 12a0ecdf mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ece4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12a0ece7 mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0ecec cmp dword ptr [0x12a2e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ecf3 jne 0x12a0ecfe */
  if (!C.zf) goto L_12a0ecfe;
  /* 12a0ecf5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ecf8 mov dword ptr [0x12a2e6f4], ecx */
  w32((uint32_t)(0x12a2e6f4), (ECX));
L_12a0ecfe:;
  /* 12a0ecfe jmp 0x12a0ed61 */
  goto L_12a0ed61;
L_12a0ed00:;
  /* 12a0ed00 cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ed07 jne 0x12a0ed61 */
  if (!C.zf) goto L_12a0ed61;
  /* 12a0ed09 cmp dword ptr [0x12a2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ed10 je 0x12a0ed61 */
  if (C.zf) goto L_12a0ed61;
  /* 12a0ed12 mov edx, dword ptr [0x12a2e6fc] */
  EDX = (r32((uint32_t)(0x12a2e6fc)));
  /* 12a0ed18 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ed19 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12a0ed1c push eax */
  push32((uint32_t)(EAX));
  /* 12a0ed1d mov ecx, dword ptr [0x12a2e704] */
  ECX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0ed23 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ed24 call 0x12a110c0 */
  push32(0x12a0ed29u); f_12a110c0();
  /* 12a0ed29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ed2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ed2e jne 0x12a0ed61 */
  if (!C.zf) goto L_12a0ed61;
  /* 12a0ed30 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0ed32 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ed35 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ed36 call 0x12a0f140 */
  push32(0x12a0ed3bu); f_12a0f140();
  /* 12a0ed3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ed3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ed40 je 0x12a0ed61 */
  if (C.zf) goto L_12a0ed61;
  /* 12a0ed42 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ed47 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12a0ed4a mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0ed4f cmp dword ptr [0x12a2e6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ed56 jne 0x12a0ed61 */
  if (!C.zf) goto L_12a0ed61;
  /* 12a0ed58 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ed5b mov dword ptr [0x12a2e6f4], ecx */
  w32((uint32_t)(0x12a2e6f4), (ECX));
L_12a0ed61:;
  /* 12a0ed61 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ed66 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ed69 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ed6b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ed6d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12a0ed6e:;
  /* 12a0ed6e mov esp, ebp */
  ESP = (EBP);
  /* 12a0ed70 pop ebp */
  EBP = (pop32());
  /* 12a0ed71 ret 4 */
  ESPCHK(0x12a0ea50u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed80 @ 0x12a0ed80 (116 bytes, 33 insns) */
void f_12a0ed80(void) {
  FTRACE(0x12a0ed80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ed80 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ed81 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ed83 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ed84 mov eax, dword ptr [0x12a2e704] */
  EAX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0ed89 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ed8a call 0x12a05750 */
  push32(0x12a0ed8fu); f_12a05750();
  /* 12a0ed8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ed92 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ed94 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ed97 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12a0ed9a mov dword ptr [0x12a2e700], ecx */
  w32((uint32_t)(0x12a2e700), (ECX));
  /* 12a0eda0 cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eda7 je 0x12a0edb2 */
  if (C.zf) goto L_12a0edb2;
  /* 12a0eda9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12a0edb0 jmp 0x12a0edc4 */
  goto L_12a0edc4;
L_12a0edb2:;
  /* 12a0edb2 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0edb8 push edx */
  push32((uint32_t)(EDX));
  /* 12a0edb9 call 0x12a0f430 */
  push32(0x12a0edbeu); f_12a0f430();
  /* 12a0edbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0edc1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12a0edc4:;
  /* 12a0edc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0edc7 mov dword ptr [0x12a2e6fc], eax */
  w32((uint32_t)(0x12a2e6fc), (EAX));
  /* 12a0edcc push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0edce push 0x12a0ee00 */
  push32((uint32_t)(0x12a0ee00u));
  /* 12a0edd3 call dword ptr [0x12a302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302bc))), 0x12a0edd9u);
  /* 12a0edd9 mov ecx, dword ptr [0x12a2e70c] */
  ECX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0eddf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ede2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0ede4 jne 0x12a0edf0 */
  if (!C.zf) goto L_12a0edf0;
  /* 12a0ede6 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
L_12a0edf0:;
  /* 12a0edf0 mov esp, ebp */
  ESP = (EBP);
  /* 12a0edf2 pop ebp */
  EBP = (pop32());
  /* 12a0edf3 ret  */
  ESPCHK(0x12a0ed80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ee00 @ 0x12a0ee00 (287 bytes, 86 insns) */
void f_12a0ee00(void) {
  FTRACE(0x12a0ee00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ee00 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ee01 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ee03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ee06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ee09 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ee0a call 0x12a0f3b0 */
  push32(0x12a0ee0fu); f_12a0f3b0();
  /* 12a0ee0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ee12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12a0ee15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0ee17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0ee1a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ee1b mov edx, dword ptr [0x12a2e700] */
  EDX = (r32((uint32_t)(0x12a2e700)));
  /* 12a0ee21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ee23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ee25 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ee2b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ee31 push edx */
  push32((uint32_t)(EDX));
  /* 12a0ee32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ee35 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ee36 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0ee3cu);
  /* 12a0ee3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ee3e jne 0x12a0ee54 */
  if (!C.zf) goto L_12a0ee54;
  /* 12a0ee40 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0ee4a mov eax, 1 */
  EAX = (0x1u);
  /* 12a0ee4f jmp 0x12a0ef19 */
  goto L_12a0ef19;
L_12a0ee54:;
  /* 12a0ee54 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0ee57 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ee58 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0ee5e push edx */
  push32((uint32_t)(EDX));
  /* 12a0ee5f call 0x12a10ff0 */
  push32(0x12a0ee64u); f_12a10ff0();
  /* 12a0ee64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ee67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ee69 jne 0x12a0eea9 */
  if (!C.zf) goto L_12a0eea9;
  /* 12a0ee6b cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ee72 jne 0x12a0ee86 */
  if (!C.zf) goto L_12a0ee86;
  /* 12a0ee74 push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ee76 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ee79 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ee7a call 0x12a0f140 */
  push32(0x12a0ee7fu); f_12a0f140();
  /* 12a0ee7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ee82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0ee84 je 0x12a0eea7 */
  if (C.zf) goto L_12a0eea7;
L_12a0ee86:;
  /* 12a0ee86 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0ee89 mov dword ptr [0x12a2e710], ecx */
  w32((uint32_t)(0x12a2e710), (ECX));
  /* 12a0ee8f mov edx, dword ptr [0x12a2e710] */
  EDX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0ee95 mov dword ptr [0x12a2e6f4], edx */
  w32((uint32_t)(0x12a2e6f4), (EDX));
  /* 12a0ee9b mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0eea0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12a0eea2 mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
L_12a0eea7:;
  /* 12a0eea7 jmp 0x12a0ef0c */
  goto L_12a0ef0c;
L_12a0eea9:;
  /* 12a0eea9 cmp dword ptr [0x12a2e700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eeb0 jne 0x12a0ef0c */
  if (!C.zf) goto L_12a0ef0c;
  /* 12a0eeb2 cmp dword ptr [0x12a2e6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12a2e6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0eeb9 je 0x12a0ef0c */
  if (C.zf) goto L_12a0ef0c;
  /* 12a0eebb mov ecx, dword ptr [0x12a2e6fc] */
  ECX = (r32((uint32_t)(0x12a2e6fc)));
  /* 12a0eec1 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eec2 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12a0eec5 push edx */
  push32((uint32_t)(EDX));
  /* 12a0eec6 mov eax, dword ptr [0x12a2e704] */
  EAX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0eecb push eax */
  push32((uint32_t)(EAX));
  /* 12a0eecc call 0x12a110c0 */
  push32(0x12a0eed1u); f_12a110c0();
  /* 12a0eed1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eed4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eed6 jne 0x12a0ef0c */
  if (!C.zf) goto L_12a0ef0c;
  /* 12a0eed8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12a0eeda mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eedd push ecx */
  push32((uint32_t)(ECX));
  /* 12a0eede call 0x12a0f140 */
  push32(0x12a0eee3u); f_12a0f140();
  /* 12a0eee3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0eee6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0eee8 je 0x12a0ef0c */
  if (C.zf) goto L_12a0ef0c;
  /* 12a0eeea mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0eeed mov dword ptr [0x12a2e710], edx */
  w32((uint32_t)(0x12a2e710), (EDX));
  /* 12a0eef3 mov eax, dword ptr [0x12a2e710] */
  EAX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0eef8 mov dword ptr [0x12a2e6f4], eax */
  w32((uint32_t)(0x12a2e6f4), (EAX));
  /* 12a0eefd mov ecx, dword ptr [0x12a2e70c] */
  ECX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ef03 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ef06 mov dword ptr [0x12a2e70c], ecx */
  w32((uint32_t)(0x12a2e70c), (ECX));
L_12a0ef0c:;
  /* 12a0ef0c mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ef11 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0ef14 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ef16 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ef18 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12a0ef19:;
  /* 12a0ef19 mov esp, ebp */
  ESP = (EBP);
  /* 12a0ef1b pop ebp */
  EBP = (pop32());
  /* 12a0ef1c ret 4 */
  ESPCHK(0x12a0ee00u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ef20 @ 0x12a0ef20 (69 bytes, 20 insns) */
void f_12a0ef20(void) {
  FTRACE(0x12a0ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ef21 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ef23 mov eax, dword ptr [0x12a2e708] */
  EAX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0ef28 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ef29 call 0x12a05750 */
  push32(0x12a0ef2eu); f_12a05750();
  /* 12a0ef2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ef31 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0ef33 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0ef36 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12a0ef39 mov dword ptr [0x12a2e6f8], ecx */
  w32((uint32_t)(0x12a2e6f8), (ECX));
  /* 12a0ef3f push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0ef41 push 0x12a0ef70 */
  push32((uint32_t)(0x12a0ef70u));
  /* 12a0ef46 call dword ptr [0x12a302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a302bc))), 0x12a0ef4cu);
  /* 12a0ef4c mov edx, dword ptr [0x12a2e70c] */
  EDX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0ef52 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ef55 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0ef57 jne 0x12a0ef63 */
  if (!C.zf) goto L_12a0ef63;
  /* 12a0ef59 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
L_12a0ef63:;
  /* 12a0ef63 pop ebp */
  EBP = (pop32());
  /* 12a0ef64 ret  */
  ESPCHK(0x12a0ef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef70 @ 0x12a0ef70 (172 bytes, 54 insns) */
void f_12a0ef70(void) {
  FTRACE(0x12a0ef70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0ef70 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0ef71 mov ebp, esp */
  EBP = (ESP);
  /* 12a0ef73 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ef76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0ef79 push eax */
  push32((uint32_t)(EAX));
  /* 12a0ef7a call 0x12a0f3b0 */
  push32(0x12a0ef7fu); f_12a0f3b0();
  /* 12a0ef7f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0ef82 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12a0ef85 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0ef87 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0ef8a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0ef8b mov edx, dword ptr [0x12a2e6f8] */
  EDX = (r32((uint32_t)(0x12a2e6f8)));
  /* 12a0ef91 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0ef93 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0ef95 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12a0ef9b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0efa1 push edx */
  push32((uint32_t)(EDX));
  /* 12a0efa2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0efa5 push eax */
  push32((uint32_t)(EAX));
  /* 12a0efa6 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0efacu);
  /* 12a0efac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0efae jne 0x12a0efc1 */
  if (!C.zf) goto L_12a0efc1;
  /* 12a0efb0 mov dword ptr [0x12a2e70c], 0 */
  w32((uint32_t)(0x12a2e70c), (0x0u));
  /* 12a0efba mov eax, 1 */
  EAX = (0x1u);
  /* 12a0efbf jmp 0x12a0f016 */
  goto L_12a0f016;
L_12a0efc1:;
  /* 12a0efc1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12a0efc4 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0efc5 mov edx, dword ptr [0x12a2e708] */
  EDX = (r32((uint32_t)(0x12a2e708)));
  /* 12a0efcb push edx */
  push32((uint32_t)(EDX));
  /* 12a0efcc call 0x12a10ff0 */
  push32(0x12a0efd1u); f_12a10ff0();
  /* 12a0efd1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0efd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0efd6 jne 0x12a0f009 */
  if (!C.zf) goto L_12a0f009;
  /* 12a0efd8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0efdb push eax */
  push32((uint32_t)(EAX));
  /* 12a0efdc call 0x12a0f0f0 */
  push32(0x12a0efe1u); f_12a0f0f0();
  /* 12a0efe1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0efe4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0efe6 je 0x12a0f009 */
  if (C.zf) goto L_12a0f009;
  /* 12a0efe8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12a0efeb mov dword ptr [0x12a2e710], ecx */
  w32((uint32_t)(0x12a2e710), (ECX));
  /* 12a0eff1 mov edx, dword ptr [0x12a2e710] */
  EDX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0eff7 mov dword ptr [0x12a2e6f4], edx */
  w32((uint32_t)(0x12a2e6f4), (EDX));
  /* 12a0effd mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0f002 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12a0f004 mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
L_12a0f009:;
  /* 12a0f009 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0f00e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f011 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12a0f013 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f015 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12a0f016:;
  /* 12a0f016 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f018 pop ebp */
  EBP = (pop32());
  /* 12a0f019 ret 4 */
  ESPCHK(0x12a0ef70u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f020 @ 0x12a0f020 (43 bytes, 11 insns) */
void f_12a0f020(void) {
  FTRACE(0x12a0f020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f020 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f021 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f023 mov eax, dword ptr [0x12a2e70c] */
  EAX = (r32((uint32_t)(0x12a2e70c)));
  /* 12a0f028 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f02d mov dword ptr [0x12a2e70c], eax */
  w32((uint32_t)(0x12a2e70c), (EAX));
  /* 12a0f032 call dword ptr [0x12a30240] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30240))), 0x12a0f038u);
  /* 12a0f038 mov dword ptr [0x12a2e710], eax */
  w32((uint32_t)(0x12a2e710), (EAX));
  /* 12a0f03d mov ecx, dword ptr [0x12a2e710] */
  ECX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0f043 mov dword ptr [0x12a2e6f4], ecx */
  w32((uint32_t)(0x12a2e6f4), (ECX));
  /* 12a0f049 pop ebp */
  EBP = (pop32());
  /* 12a0f04a ret  */
  ESPCHK(0x12a0f020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f050 @ 0x12a0f050 (155 bytes, 57 insns) */
void f_12a0f050(void) {
  FTRACE(0x12a0f050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f050 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f051 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f056 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f05a je 0x12a0f07b */
  if (C.zf) goto L_12a0f07b;
  /* 12a0f05c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f05f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12a0f062 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0f064 je 0x12a0f07b */
  if (C.zf) goto L_12a0f07b;
  /* 12a0f066 push 0x12a2a68c */
  push32((uint32_t)(0x12a2a68cu));
  /* 12a0f06b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f06e push edx */
  push32((uint32_t)(EDX));
  /* 12a0f06f call 0x12a0e5b0 */
  push32(0x12a0f074u); f_12a0e5b0();
  /* 12a0f074 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f077 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f079 jne 0x12a0f0a3 */
  if (!C.zf) goto L_12a0f0a3;
L_12a0f07b:;
  /* 12a0f07b push 8 */
  push32((uint32_t)(0x8u));
  /* 12a0f07d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12a0f080 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f081 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12a0f086 mov ecx, dword ptr [0x12a2e710] */
  ECX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0f08c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f08d call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0f093u);
  /* 12a0f093 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f095 jne 0x12a0f09b */
  if (!C.zf) goto L_12a0f09b;
  /* 12a0f097 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f099 jmp 0x12a0f0e7 */
  goto L_12a0f0e7;
L_12a0f09b:;
  /* 12a0f09b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12a0f09e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12a0f0a1 jmp 0x12a0f0db */
  goto L_12a0f0db;
L_12a0f0a3:;
  /* 12a0f0a3 push 0x12a2a688 */
  push32((uint32_t)(0x12a2a688u));
  /* 12a0f0a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f0ab push eax */
  push32((uint32_t)(EAX));
  /* 12a0f0ac call 0x12a0e5b0 */
  push32(0x12a0f0b1u); f_12a0e5b0();
  /* 12a0f0b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f0b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f0b6 jne 0x12a0f0db */
  if (!C.zf) goto L_12a0f0db;
  /* 12a0f0b8 push 8 */
  push32((uint32_t)(0x8u));
  /* 12a0f0ba lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12a0f0bd push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f0be push 0xb */
  push32((uint32_t)(0xbu));
  /* 12a0f0c0 mov edx, dword ptr [0x12a2e710] */
  EDX = (r32((uint32_t)(0x12a2e710)));
  /* 12a0f0c6 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f0c7 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0f0cdu);
  /* 12a0f0cd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f0cf jne 0x12a0f0d5 */
  if (!C.zf) goto L_12a0f0d5;
  /* 12a0f0d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f0d3 jmp 0x12a0f0e7 */
  goto L_12a0f0e7;
L_12a0f0d5:;
  /* 12a0f0d5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12a0f0d8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12a0f0db:;
  /* 12a0f0db mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f0de push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f0df call 0x12a111d0 */
  push32(0x12a0f0e4u); f_12a111d0();
  /* 12a0f0e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12a0f0e7:;
  /* 12a0f0e7 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f0e9 pop ebp */
  EBP = (pop32());
  /* 12a0f0ea ret  */
  ESPCHK(0x12a0f050u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0f0 @ 0x12a0f0f0 (79 bytes, 26 insns) */
void f_12a0f0f0(void) {
  FTRACE(0x12a0f0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f0f1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f0f6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12a0f0fa mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12a0f0fe mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0f105 jmp 0x12a0f110 */
  goto L_12a0f110;
L_12a0f107:;
  /* 12a0f107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f10a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f10d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12a0f110:;
  /* 12a0f110 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f114 jae 0x12a0f136 */
  if (!C.cf) goto L_12a0f136;
  /* 12a0f116 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f119 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0f11f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f122 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12a0f124 mov cx, word ptr [eax*2 + 0x12a2d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12a2d9c4)));
  /* 12a0f12c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f12e jne 0x12a0f134 */
  if (!C.zf) goto L_12a0f134;
  /* 12a0f130 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f132 jmp 0x12a0f13b */
  goto L_12a0f13b;
L_12a0f134:;
  /* 12a0f134 jmp 0x12a0f107 */
  goto L_12a0f107;
L_12a0f136:;
  /* 12a0f136 mov eax, 1 */
  EAX = (0x1u);
L_12a0f13b:;
  /* 12a0f13b mov esp, ebp */
  ESP = (EBP);
  /* 12a0f13d pop ebp */
  EBP = (pop32());
  /* 12a0f13e ret  */
  ESPCHK(0x12a0f0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f140 @ 0x12a0f140 (135 bytes, 48 insns) */
void f_12a0f140(void) {
  FTRACE(0x12a0f140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f140 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f141 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f143 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f146 push esi */
  push32((uint32_t)(ESI));
  /* 12a0f147 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f14a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f14f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f154 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f159 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12a0f15c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f161 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0f164 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12a0f166 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12a0f169 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f16a push 1 */
  push32((uint32_t)(0x1u));
  /* 12a0f16c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f16f push edx */
  push32((uint32_t)(EDX));
  /* 12a0f170 call dword ptr [0x12a2e714] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a2e714))), 0x12a0f176u);
  /* 12a0f176 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f178 jne 0x12a0f17e */
  if (!C.zf) goto L_12a0f17e;
  /* 12a0f17a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f17c jmp 0x12a0f1c2 */
  goto L_12a0f1c2;
L_12a0f17e:;
  /* 12a0f17e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12a0f181 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f182 call 0x12a0f3b0 */
  push32(0x12a0f187u); f_12a0f3b0();
  /* 12a0f187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f18a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f18d je 0x12a0f1bd */
  if (C.zf) goto L_12a0f1bd;
  /* 12a0f18f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f193 je 0x12a0f1bd */
  if (C.zf) goto L_12a0f1bd;
  /* 12a0f195 mov ecx, dword ptr [0x12a2e704] */
  ECX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0f19b push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f19c call 0x12a0f430 */
  push32(0x12a0f1a1u); f_12a0f430();
  /* 12a0f1a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f1a4 mov esi, eax */
  ESI = (EAX);
  /* 12a0f1a6 mov edx, dword ptr [0x12a2e704] */
  EDX = (r32((uint32_t)(0x12a2e704)));
  /* 12a0f1ac push edx */
  push32((uint32_t)(EDX));
  /* 12a0f1ad call 0x12a05750 */
  push32(0x12a0f1b2u); f_12a05750();
  /* 12a0f1b2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f1b5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f1b7 jne 0x12a0f1bd */
  if (!C.zf) goto L_12a0f1bd;
  /* 12a0f1b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f1bb jmp 0x12a0f1c2 */
  goto L_12a0f1c2;
L_12a0f1bd:;
  /* 12a0f1bd mov eax, 1 */
  EAX = (0x1u);
L_12a0f1c2:;
  /* 12a0f1c2 pop esi */
  ESI = (pop32());
  /* 12a0f1c3 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f1c5 pop ebp */
  EBP = (pop32());
  /* 12a0f1c6 ret  */
  ESPCHK(0x12a0f140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1d0 @ 0x12a0f1d0 (77 bytes, 18 insns) */
void f_12a0f1d0(void) {
  FTRACE(0x12a0f1d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f1d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f1d1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f1d3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f1d9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12a0f1e3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12a0f1e9 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f1ea call dword ptr [0x12a3023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a3023c))), 0x12a0f1f0u);
  /* 12a0f1f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12a0f1f2 je 0x12a0f209 */
  if (C.zf) goto L_12a0f209;
  /* 12a0f1f4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f1fb jne 0x12a0f209 */
  if (!C.zf) goto L_12a0f209;
  /* 12a0f1fd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12a0f207 jmp 0x12a0f213 */
  goto L_12a0f213;
L_12a0f209:;
  /* 12a0f209 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12a0f213:;
  /* 12a0f213 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12a0f219 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f21b pop ebp */
  EBP = (pop32());
  /* 12a0f21c ret  */
  ESPCHK(0x12a0f1d0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12a0f220 (388 bytes, 118 insns) */
void f_12a0f220(void) {
  FTRACE(0x12a0f220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f220 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f221 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f223 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f226 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12a0f22d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12a0f234 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12a0f23b:;
  /* 12a0f23b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f23e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f241 jg 0x12a0f388 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0f388;
  /* 12a0f247 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12a0f24a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f24d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12a0f24e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f250 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12a0f252 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12a0f255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f258 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f25b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f25e cmp edx, dword ptr [ecx + 0x12a2d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12a2d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f264 jne 0x12a0f35e */
  if (!C.zf) goto L_12a0f35e;
  /* 12a0f26a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0f26d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12a0f270 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f274 ja 0x12a0f297 */
  if ((!C.cf&&!C.zf)) goto L_12a0f297;
  /* 12a0f276 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f27a je 0x12a0f309 */
  if (C.zf) goto L_12a0f309;
  /* 12a0f280 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f284 je 0x12a0f2b4 */
  if (C.zf) goto L_12a0f2b4;
  /* 12a0f286 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f28a je 0x12a0f2d6 */
  if (C.zf) goto L_12a0f2d6;
  /* 12a0f28c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f290 je 0x12a0f2f8 */
  if (C.zf) goto L_12a0f2f8;
  /* 12a0f292 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f297:;
  /* 12a0f297 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f29e je 0x12a0f2c5 */
  if (C.zf) goto L_12a0f2c5;
  /* 12a0f2a0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f2a7 je 0x12a0f2e7 */
  if (C.zf) goto L_12a0f2e7;
  /* 12a0f2a9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f2b0 je 0x12a0f31a */
  if (C.zf) goto L_12a0f31a;
  /* 12a0f2b2 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f2b4:;
  /* 12a0f2b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f2b7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f2ba add ecx, 0x12a2d524 */
  { uint32_t _a=(ECX),_b=(0x12a2d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f2c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0f2c3 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f2c5:;
  /* 12a0f2c5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f2c8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f2cb mov eax, dword ptr [edx + 0x12a2d52c] */
  EAX = (r32((uint32_t)(EDX + 0x12a2d52c)));
  /* 12a0f2d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0f2d4 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f2d6:;
  /* 12a0f2d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f2d9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f2dc add ecx, 0x12a2d530 */
  { uint32_t _a=(ECX),_b=(0x12a2d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f2e2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0f2e5 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f2e7:;
  /* 12a0f2e7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f2ea imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f2ed mov eax, dword ptr [edx + 0x12a2d534] */
  EAX = (r32((uint32_t)(EDX + 0x12a2d534)));
  /* 12a0f2f3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12a0f2f6 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f2f8:;
  /* 12a0f2f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f2fb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f2fe add ecx, 0x12a2d538 */
  { uint32_t _a=(ECX),_b=(0x12a2d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f304 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0f307 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f309:;
  /* 12a0f309 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f30c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f30f add edx, 0x12a2d53c */
  { uint32_t _a=(EDX),_b=(0x12a2d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f315 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12a0f318 jmp 0x12a0f328 */
  goto L_12a0f328;
L_12a0f31a:;
  /* 12a0f31a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f31d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f320 add eax, 0x12a2d544 */
  { uint32_t _a=(EAX),_b=(0x12a2d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f325 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12a0f328:;
  /* 12a0f328 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f32c je 0x12a0f334 */
  if (C.zf) goto L_12a0f334;
  /* 12a0f32e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f332 jge 0x12a0f336 */
  if ((C.sf==C.of)) goto L_12a0f336;
L_12a0f334:;
  /* 12a0f334 jmp 0x12a0f388 */
  goto L_12a0f388;
L_12a0f336:;
  /* 12a0f336 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0f339 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f33c push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f33d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f340 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f341 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0f344 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f345 call 0x12a06140 */
  push32(0x12a0f34au); f_12a06140();
  /* 12a0f34a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f34d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0f350 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f353 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12a0f357 mov eax, 1 */
  EAX = (0x1u);
  /* 12a0f35c jmp 0x12a0f39e */
  goto L_12a0f39e;
L_12a0f35e:;
  /* 12a0f35e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f361 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f367 cmp eax, dword ptr [edx + 0x12a2d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12a2d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f36d jae 0x12a0f37a */
  if (!C.cf) goto L_12a0f37a;
  /* 12a0f36f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f372 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f375 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12a0f378 jmp 0x12a0f383 */
  goto L_12a0f383;
L_12a0f37a:;
  /* 12a0f37a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12a0f37d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f380 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12a0f383:;
  /* 12a0f383 jmp 0x12a0f23b */
  goto L_12a0f23b;
L_12a0f388:;
  /* 12a0f388 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12a0f38b push eax */
  push32((uint32_t)(EAX));
  /* 12a0f38c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12a0f38f push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f390 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12a0f393 push edx */
  push32((uint32_t)(EDX));
  /* 12a0f394 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f397 push eax */
  push32((uint32_t)(EAX));
  /* 12a0f398 call dword ptr [0x12a30338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12a30338))), 0x12a0f39eu);
L_12a0f39e:;
  /* 12a0f39e mov esp, ebp */
  ESP = (EBP);
  /* 12a0f3a0 pop ebp */
  EBP = (pop32());
  /* 12a0f3a1 ret 0x10 */
  ESPCHK(0x12a0f220u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f3b0 @ 0x12a0f3b0 (118 bytes, 42 insns) */
void f_12a0f3b0(void) {
  FTRACE(0x12a0f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f3b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f3b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12a0f3bd:;
  /* 12a0f3bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f3c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a0f3c2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12a0f3c5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f3c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f3cc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f3cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12a0f3d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12a0f3d4 je 0x12a0f41f */
  if (C.zf) goto L_12a0f41f;
  /* 12a0f3d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f3da cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f3dd jl 0x12a0f3f2 */
  if ((C.sf!=C.of)) goto L_12a0f3f2;
  /* 12a0f3df movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f3e3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f3e6 jg 0x12a0f3f2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0f3f2;
  /* 12a0f3e8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12a0f3eb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0f3ed mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12a0f3f0 jmp 0x12a0f40c */
  goto L_12a0f40c;
L_12a0f3f2:;
  /* 12a0f3f2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f3f6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f3f9 jl 0x12a0f40c */
  if ((C.sf!=C.of)) goto L_12a0f40c;
  /* 12a0f3fb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f3ff cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f402 jg 0x12a0f40c */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0f40c;
  /* 12a0f404 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12a0f407 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12a0f409 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12a0f40c:;
  /* 12a0f40c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f40f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12a0f412 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12a0f416 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12a0f41a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0f41d jmp 0x12a0f3bd */
  goto L_12a0f3bd;
L_12a0f41f:;
  /* 12a0f41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12a0f422 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f424 pop ebp */
  EBP = (pop32());
  /* 12a0f425 ret  */
  ESPCHK(0x12a0f3b0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12a0f430 (101 bytes, 36 insns) */
void f_12a0f430(void) {
  FTRACE(0x12a0f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f430 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f431 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f433 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12a0f436 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12a0f43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f440 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12a0f442 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12a0f445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f448 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f44b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12a0f44e:;
  /* 12a0f44e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12a0f452 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f455 jl 0x12a0f460 */
  if ((C.sf!=C.of)) goto L_12a0f460;
  /* 12a0f457 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12a0f45b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f45e jle 0x12a0f472 */
  if ((C.zf||C.sf!=C.of)) goto L_12a0f472;
L_12a0f460:;
  /* 12a0f460 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12a0f464 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f467 jl 0x12a0f48e */
  if ((C.sf!=C.of)) goto L_12a0f48e;
  /* 12a0f469 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12a0f46d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f470 jg 0x12a0f48e */
  if ((!C.zf&&C.sf==C.of)) goto L_12a0f48e;
L_12a0f472:;
  /* 12a0f472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f475 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f478 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12a0f47b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f47e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12a0f480 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12a0f483 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f486 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f489 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12a0f48c jmp 0x12a0f44e */
  goto L_12a0f44e;
L_12a0f48e:;
  /* 12a0f48e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12a0f491 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f493 pop ebp */
  EBP = (pop32());
  /* 12a0f494 ret  */
  ESPCHK(0x12a0f430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4a0 @ 0x12a0f4a0 (122 bytes, 39 insns) */
void f_12a0f4a0(void) {
  FTRACE(0x12a0f4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12a0f4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12a0f4a1 mov ebp, esp */
  EBP = (ESP);
  /* 12a0f4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f4a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f4a7 cmp eax, dword ptr [0x12a2ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12a2ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12a0f4ad jae 0x12a0f4d1 */
  if (!C.cf) goto L_12a0f4d1;
  /* 12a0f4af mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f4b2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12a0f4b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f4b8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12a0f4bb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12a0f4be mov eax, dword ptr [ecx*4 + 0x12a2fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12a2fe60)));
  /* 12a0f4c5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12a0f4ca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12a0f4cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12a0f4cf jne 0x12a0f4ec */
  if (!C.zf) goto L_12a0f4ec;
L_12a0f4d1:;
  /* 12a0f4d1 call 0x12a0a7f0 */
  push32(0x12a0f4d6u); f_12a0a7f0();
  /* 12a0f4d6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12a0f4dc call 0x12a0a800 */
  push32(0x12a0f4e1u); f_12a0a800();
  /* 12a0f4e1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12a0f4e7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12a0f4ea jmp 0x12a0f516 */
  goto L_12a0f516;
L_12a0f4ec:;
  /* 12a0f4ec mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f4ef push edx */
  push32((uint32_t)(EDX));
  /* 12a0f4f0 call 0x12a0c010 */
  push32(0x12a0f4f5u); f_12a0c010();
  /* 12a0f4f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f4f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f4fb push eax */
  push32((uint32_t)(EAX));
  /* 12a0f4fc call 0x12a0f520 */
  push32(0x12a0f501u); f_12a0f520();
  /* 12a0f501 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f504 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12a0f507 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12a0f50a push ecx */
  push32((uint32_t)(ECX));
  /* 12a0f50b call 0x12a0c0a0 */
  push32(0x12a0f510u); f_12a0c0a0();
  /* 12a0f510 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12a0f513 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12a0f516:;
  /* 12a0f516 mov esp, ebp */
  ESP = (EBP);
  /* 12a0f518 pop ebp */
  EBP = (pop32());
  /* 12a0f519 ret  */
  ESPCHK(0x12a0f4a0u, _esp0);
  ESP += 4; return;
}

