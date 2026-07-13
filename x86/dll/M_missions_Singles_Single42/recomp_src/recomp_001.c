#include "recomp.h"

/* FID_conflict:___AdjustPointer @ 0x11726780 (70 bytes, 27 insns) */
void f_11726780(void) {
  FTRACE(0x11726780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726780 push ebp */
  push32((uint32_t)(EBP));
  /* 11726781 mov ebp, esp */
  EBP = (ESP);
  /* 11726783 push ecx */
  push32((uint32_t)(ECX));
  /* 11726784 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172678a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172678c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172678f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11726792 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726796 jl 0x117267bf */
  if ((C.sf!=C.of)) goto L_117267bf;
  /* 11726798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172679b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172679e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117267a1 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 117267a4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117267a7 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117267aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117267ad add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117267b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117267b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 117267b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117267b9 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117267bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_117267bf:;
  /* 117267bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117267c2 mov esp, ebp */
  ESP = (EBP);
  /* 117267c4 pop ebp */
  EBP = (pop32());
  /* 117267c5 ret  */
  ESPCHK(0x11726780u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x117267d0 (76 bytes, 34 insns) */
void f_117267d0(void) {
  FTRACE(0x117267d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117267d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117267d1 mov ebp, esp */
  EBP = (ESP);
  /* 117267d3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117267d6 push ebx */
  push32((uint32_t)(EBX));
  /* 117267d7 push ecx */
  push32((uint32_t)(ECX));
  /* 117267d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117267db add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117267de mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117267e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117267e4 push ebp */
  push32((uint32_t)(EBP));
  /* 117267e5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 117267e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117267eb mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 117267ee call 0x11722e9d */
  push32(0x117267f3u); f_11722e9d();
  /* 117267f3 push esi */
  push32((uint32_t)(ESI));
  /* 117267f4 push edi */
  push32((uint32_t)(EDI));
  /* 117267f5 call eax */
  call_ind((uint32_t)(EAX), 0x117267f7u);
  /* 117267f7 pop edi */
  EDI = (pop32());
  /* 117267f8 pop esi */
  ESI = (pop32());
  /* 117267f9 mov ebx, ebp */
  EBX = (EBP);
  /* 117267fb pop ebp */
  EBP = (pop32());
  /* 117267fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117267ff push ebp */
  push32((uint32_t)(EBP));
  /* 11726800 mov ebp, ebx */
  EBP = (EBX);
  /* 11726802 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726808 jne 0x1172680f */
  if (!C.zf) goto L_1172680f;
  /* 1172680a mov ecx, 2 */
  ECX = (0x2u);
L_1172680f:;
  /* 1172680f push ecx */
  push32((uint32_t)(ECX));
  /* 11726810 call 0x11722e9d */
  push32(0x11726815u); f_11722e9d();
  /* 11726815 pop ebp */
  EBP = (pop32());
  /* 11726816 pop ecx */
  ECX = (pop32());
  /* 11726817 pop ebx */
  EBX = (pop32());
  /* 11726818 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11726819 ret 0xc */
  ESPCHK(0x117267d0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006820 @ 0x11726820 (130 bytes, 42 insns) */
void f_11726820(void) {
  FTRACE(0x11726820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726820 push ebp */
  push32((uint32_t)(EBP));
  /* 11726821 mov ebp, esp */
  EBP = (ESP);
  /* 11726823 push ecx */
  push32((uint32_t)(ECX));
  /* 11726824 call 0x11723a20 */
  push32(0x11726829u); f_11723a20();
  /* 11726829 call dword ptr [0x1175532c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175532c))), 0x1172682fu);
  /* 1172682f mov dword ptr [0x11750e70], eax */
  w32((uint32_t)(0x11750e70), (EAX));
  /* 11726834 cmp dword ptr [0x11750e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11750e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172683b jne 0x11726841 */
  if (!C.zf) goto L_11726841;
  /* 1172683d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172683f jmp 0x1172689e */
  goto L_1172689e;
L_11726841:;
  /* 11726841 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11726843 push 0x1174db84 */
  push32((uint32_t)(0x1174db84u));
  /* 11726848 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172684a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1172684c push 1 */
  push32((uint32_t)(0x1u));
  /* 1172684e call 0x11724010 */
  push32(0x11726853u); f_11724010();
  /* 11726853 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726856 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11726859 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172685d je 0x11726874 */
  if (C.zf) goto L_11726874;
  /* 1172685f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726862 push eax */
  push32((uint32_t)(EAX));
  /* 11726863 mov ecx, dword ptr [0x11750e70] */
  ECX = (r32((uint32_t)(0x11750e70)));
  /* 11726869 push ecx */
  push32((uint32_t)(ECX));
  /* 1172686a call dword ptr [0x11755328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755328))), 0x11726870u);
  /* 11726870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726872 jne 0x11726878 */
  if (!C.zf) goto L_11726878;
L_11726874:;
  /* 11726874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11726876 jmp 0x1172689e */
  goto L_1172689e;
L_11726878:;
  /* 11726878 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172687b push edx */
  push32((uint32_t)(EDX));
  /* 1172687c call 0x117268e0 */
  push32(0x11726881u); f_117268e0();
  /* 11726881 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726884 call dword ptr [0x11755324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755324))), 0x1172688au);
  /* 1172688a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172688d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172688f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726892 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11726899 mov eax, 1 */
  EAX = (0x1u);
L_1172689e:;
  /* 1172689e mov esp, ebp */
  ESP = (EBP);
  /* 117268a0 pop ebp */
  EBP = (pop32());
  /* 117268a1 ret  */
  ESPCHK(0x11726820u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x117268b0 (41 bytes, 11 insns) */
void f_117268b0(void) {
  FTRACE(0x117268b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117268b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117268b1 mov ebp, esp */
  EBP = (ESP);
  /* 117268b3 call 0x11723a60 */
  push32(0x117268b8u); f_11723a60();
  /* 117268b8 cmp dword ptr [0x11750e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11750e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117268bf je 0x117268d7 */
  if (C.zf) goto L_117268d7;
  /* 117268c1 mov eax, dword ptr [0x11750e70] */
  EAX = (r32((uint32_t)(0x11750e70)));
  /* 117268c6 push eax */
  push32((uint32_t)(EAX));
  /* 117268c7 call dword ptr [0x1175526c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175526c))), 0x117268cdu);
  /* 117268cd mov dword ptr [0x11750e70], 0xffffffff */
  w32((uint32_t)(0x11750e70), (0xffffffffu));
L_117268d7:;
  /* 117268d7 pop ebp */
  EBP = (pop32());
  /* 117268d8 ret  */
  ESPCHK(0x117268b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100068e0 @ 0x117268e0 (25 bytes, 8 insns) */
void f_117268e0(void) {
  FTRACE(0x117268e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117268e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117268e1 mov ebp, esp */
  EBP = (ESP);
  /* 117268e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117268e6 mov dword ptr [eax + 0x50], 0x11751150 */
  w32((uint32_t)(EAX + 0x50), (0x11751150u));
  /* 117268ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117268f0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 117268f7 pop ebp */
  EBP = (pop32());
  /* 117268f8 ret  */
  ESPCHK(0x117268e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006900 @ 0x11726900 (152 bytes, 48 insns) */
void f_11726900(void) {
  FTRACE(0x11726900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726900 push ebp */
  push32((uint32_t)(EBP));
  /* 11726901 mov ebp, esp */
  EBP = (ESP);
  /* 11726903 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726906 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x1172690cu);
  /* 1172690c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172690f mov eax, dword ptr [0x11750e70] */
  EAX = (r32((uint32_t)(0x11750e70)));
  /* 11726914 push eax */
  push32((uint32_t)(EAX));
  /* 11726915 call dword ptr [0x11755338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755338))), 0x1172691bu);
  /* 1172691b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172691e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726922 jne 0x11726987 */
  if (!C.zf) goto L_11726987;
  /* 11726924 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11726929 push 0x1174db84 */
  push32((uint32_t)(0x1174db84u));
  /* 1172692e push 2 */
  push32((uint32_t)(0x2u));
  /* 11726930 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11726932 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726934 call 0x11724010 */
  push32(0x11726939u); f_11724010();
  /* 11726939 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172693c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172693f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726943 je 0x1172697d */
  if (C.zf) goto L_1172697d;
  /* 11726945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726948 push ecx */
  push32((uint32_t)(ECX));
  /* 11726949 mov edx, dword ptr [0x11750e70] */
  EDX = (r32((uint32_t)(0x11750e70)));
  /* 1172694f push edx */
  push32((uint32_t)(EDX));
  /* 11726950 call dword ptr [0x11755328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755328))), 0x11726956u);
  /* 11726956 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726958 je 0x1172697d */
  if (C.zf) goto L_1172697d;
  /* 1172695a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172695d push eax */
  push32((uint32_t)(EAX));
  /* 1172695e call 0x117268e0 */
  push32(0x11726963u); f_117268e0();
  /* 11726963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726966 call dword ptr [0x11755324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755324))), 0x1172696cu);
  /* 1172696c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172696f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11726971 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726974 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1172697b jmp 0x11726987 */
  goto L_11726987;
L_1172697d:;
  /* 1172697d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1172697f call 0x11723230 */
  push32(0x11726984u); f_11723230();
  /* 11726984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726987:;
  /* 11726987 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172698a push eax */
  push32((uint32_t)(EAX));
  /* 1172698b call dword ptr [0x11755270] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755270))), 0x11726991u);
  /* 11726991 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726994 mov esp, ebp */
  ESP = (EBP);
  /* 11726996 pop ebp */
  EBP = (pop32());
  /* 11726997 ret  */
  ESPCHK(0x11726900u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a0 @ 0x117269a0 (263 bytes, 86 insns) */
void f_117269a0(void) {
  FTRACE(0x117269a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117269a0 push ebp */
  push32((uint32_t)(EBP));
  /* 117269a1 mov ebp, esp */
  EBP = (ESP);
  /* 117269a3 cmp dword ptr [0x11750e70], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11750e70))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117269aa je 0x11726aa5 */
  if (C.zf) goto L_11726aa5;
  /* 117269b0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117269b4 jne 0x117269c5 */
  if (!C.zf) goto L_117269c5;
  /* 117269b6 mov eax, dword ptr [0x11750e70] */
  EAX = (r32((uint32_t)(0x11750e70)));
  /* 117269bb push eax */
  push32((uint32_t)(EAX));
  /* 117269bc call dword ptr [0x11755338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755338))), 0x117269c2u);
  /* 117269c2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117269c5:;
  /* 117269c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117269c9 je 0x11726a96 */
  if (C.zf) goto L_11726a96;
  /* 117269cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117269d2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117269d6 je 0x117269e9 */
  if (C.zf) goto L_117269e9;
  /* 117269d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 117269da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117269dd mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 117269e0 push eax */
  push32((uint32_t)(EAX));
  /* 117269e1 call 0x11724690 */
  push32(0x117269e6u); f_11724690();
  /* 117269e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117269e9:;
  /* 117269e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 117269ec cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117269f0 je 0x11726a03 */
  if (C.zf) goto L_11726a03;
  /* 117269f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 117269f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117269f7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 117269fa push eax */
  push32((uint32_t)(EAX));
  /* 117269fb call 0x11724690 */
  push32(0x11726a00u); f_11724690();
  /* 11726a00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a03:;
  /* 11726a03 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a06 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726a0a je 0x11726a1d */
  if (C.zf) goto L_11726a1d;
  /* 11726a0c push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a0e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a11 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11726a14 push eax */
  push32((uint32_t)(EAX));
  /* 11726a15 call 0x11724690 */
  push32(0x11726a1au); f_11724690();
  /* 11726a1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a1d:;
  /* 11726a1d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a20 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726a24 je 0x11726a37 */
  if (C.zf) goto L_11726a37;
  /* 11726a26 push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a2b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11726a2e push eax */
  push32((uint32_t)(EAX));
  /* 11726a2f call 0x11724690 */
  push32(0x11726a34u); f_11724690();
  /* 11726a34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a37:;
  /* 11726a37 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a3a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726a3e je 0x11726a51 */
  if (C.zf) goto L_11726a51;
  /* 11726a40 push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a45 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11726a48 push eax */
  push32((uint32_t)(EAX));
  /* 11726a49 call 0x11724690 */
  push32(0x11726a4eu); f_11724690();
  /* 11726a4e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a51:;
  /* 11726a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a54 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726a58 je 0x11726a6b */
  if (C.zf) goto L_11726a6b;
  /* 11726a5a push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a5c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a5f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11726a62 push eax */
  push32((uint32_t)(EAX));
  /* 11726a63 call 0x11724690 */
  push32(0x11726a68u); f_11724690();
  /* 11726a68 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a6b:;
  /* 11726a6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a6e cmp dword ptr [ecx + 0x50], 0x11751150 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11751150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726a75 je 0x11726a88 */
  if (C.zf) goto L_11726a88;
  /* 11726a77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a7c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11726a7f push eax */
  push32((uint32_t)(EAX));
  /* 11726a80 call 0x11724690 */
  push32(0x11726a85u); f_11724690();
  /* 11726a85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a88:;
  /* 11726a88 push 2 */
  push32((uint32_t)(0x2u));
  /* 11726a8a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726a8d push ecx */
  push32((uint32_t)(ECX));
  /* 11726a8e call 0x11724690 */
  push32(0x11726a93u); f_11724690();
  /* 11726a93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726a96:;
  /* 11726a96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726a98 mov edx, dword ptr [0x11750e70] */
  EDX = (r32((uint32_t)(0x11750e70)));
  /* 11726a9e push edx */
  push32((uint32_t)(EDX));
  /* 11726a9f call dword ptr [0x11755328] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755328))), 0x11726aa5u);
L_11726aa5:;
  /* 11726aa5 pop ebp */
  EBP = (pop32());
  /* 11726aa6 ret  */
  ESPCHK(0x117269a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ab0 @ 0x11726ab0 (11 bytes, 5 insns) */
void f_11726ab0(void) {
  FTRACE(0x11726ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11726ab3 call dword ptr [0x11755324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755324))), 0x11726ab9u);
  /* 11726ab9 pop ebp */
  EBP = (pop32());
  /* 11726aba ret  */
  ESPCHK(0x11726ab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ac0 @ 0x11726ac0 (11 bytes, 5 insns) */
void f_11726ac0(void) {
  FTRACE(0x11726ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11726ac3 call dword ptr [0x11755340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755340))), 0x11726ac9u);
  /* 11726ac9 pop ebp */
  EBP = (pop32());
  /* 11726aca ret  */
  ESPCHK(0x11726ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad0 @ 0x11726ad0 (92 bytes, 29 insns) */
void f_11726ad0(void) {
  FTRACE(0x11726ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11726ad3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11726ad5 push 0x1174db90 */
  push32((uint32_t)(0x1174db90u));
  /* 11726ada push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 11726adf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11726ae5 push eax */
  push32((uint32_t)(EAX));
  /* 11726ae6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11726aed sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726af0 push ebx */
  push32((uint32_t)(EBX));
  /* 11726af1 push esi */
  push32((uint32_t)(ESI));
  /* 11726af2 push edi */
  push32((uint32_t)(EDI));
  /* 11726af3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11726af6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11726afd call 0x11726900 */
  push32(0x11726b02u); f_11726900();
  /* 11726b02 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726b06 je 0x11726b30 */
  if (C.zf) goto L_11726b30;
  /* 11726b08 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11726b0f call 0x11726900 */
  push32(0x11726b14u); f_11726900();
  /* 11726b14 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11726b17u);
  /* 11726b17 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11726b1e jmp 0x11726b30 */
  goto L_11726b30;
  /* 11726b20 mov eax, 1 */
  EAX = (0x1u);
  /* 11726b25 ret  */
  ESPCHK(0x11726ad0u, _esp0);
  ESP += 4; return;
  /* 11726b26 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11726b29 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11726b30:;
  /* 11726b30 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11726b37 call 0x11726b3e */
  push32(0x11726b3cu); f_11726b3e();
  /* 11726b3c jmp 0x11726b44 */
  jmp_ind(0x11726b44u); return;
}

/* _abort @ 0x11726b3e (5 bytes, 2 insns) */
void f_11726b3e(void) {
  FTRACE(0x11726b3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726b3e call 0x1172b760 */
  push32(0x11726b43u); f_1172b760();
  /* 11726b43 ret  */
  ESPCHK(0x11726b3eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006b60 @ 0x11726b60 (29 bytes, 10 insns) */
void f_11726b60(void) {
  FTRACE(0x11726b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11726b61 mov ebp, esp */
  EBP = (ESP);
  /* 11726b63 call 0x11726900 */
  push32(0x11726b68u); f_11726900();
  /* 11726b68 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726b6c je 0x11726b76 */
  if (C.zf) goto L_11726b76;
  /* 11726b6e call 0x11726900 */
  push32(0x11726b73u); f_11726900();
  /* 11726b73 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11726b76u);
L_11726b76:;
  /* 11726b76 call 0x11726ad0 */
  push32(0x11726b7bu); f_11726ad0();
  /* 11726b7b pop ebp */
  EBP = (pop32());
  /* 11726b7c ret  */
  ESPCHK(0x11726b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b80 @ 0x11726b80 (90 bytes, 27 insns) */
void f_11726b80(void) {
  FTRACE(0x11726b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11726b81 mov ebp, esp */
  EBP = (ESP);
  /* 11726b83 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11726b85 push 0x1174dba8 */
  push32((uint32_t)(0x1174dba8u));
  /* 11726b8a push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 11726b8f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11726b95 push eax */
  push32((uint32_t)(EAX));
  /* 11726b96 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11726b9d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726ba0 push ebx */
  push32((uint32_t)(EBX));
  /* 11726ba1 push esi */
  push32((uint32_t)(ESI));
  /* 11726ba2 push edi */
  push32((uint32_t)(EDI));
  /* 11726ba3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11726ba6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11726bad cmp dword ptr [0x11750e74], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11750e74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726bb4 je 0x11726bdc */
  if (C.zf) goto L_11726bdc;
  /* 11726bb6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11726bbd call dword ptr [0x11750e74] */
  call_ind((uint32_t)(r32((uint32_t)(0x11750e74))), 0x11726bc3u);
  /* 11726bc3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11726bca jmp 0x11726bdc */
  goto L_11726bdc;
  /* 11726bcc mov eax, 1 */
  EAX = (0x1u);
  /* 11726bd1 ret  */
  ESPCHK(0x11726b80u, _esp0);
  ESP += 4; return;
  /* 11726bd2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11726bd5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11726bdc:;
  /* 11726bdc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11726be3 call 0x11726bea */
  push32(0x11726be8u); f_11726bea();
  /* 11726be8 jmp 0x11726bf0 */
  f_11726bf0(); return;
}

/* FUN_10006bea @ 0x11726bea (6 bytes, 2 insns) */
void f_11726bea(void) {
  FTRACE(0x11726beau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726bea call 0x11726ad0 */
  push32(0x11726befu); f_11726ad0();
  /* 11726bef ret  */
  ESPCHK(0x11726beau, _esp0);
  ESP += 4; return;
}

/* FUN_10006bf0 @ 0x11726bf0 (17 bytes, 8 insns) */
void f_11726bf0(void) {
  FTRACE(0x11726bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726bf0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11726bf3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11726bfa pop edi */
  EDI = (pop32());
  /* 11726bfb pop esi */
  ESI = (pop32());
  /* 11726bfc pop ebx */
  EBX = (pop32());
  /* 11726bfd mov esp, ebp */
  ESP = (EBP);
  /* 11726bff pop ebp */
  EBP = (pop32());
  /* 11726c00 ret  */
  ESPCHK(0x11726bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x11726c10 (56 bytes, 15 insns) */
void f_11726c10(void) {
  FTRACE(0x11726c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11726c11 mov ebp, esp */
  EBP = (ESP);
  /* 11726c13 cmp dword ptr [0x1175451c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1175451c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726c1a je 0x11726c22 */
  if (C.zf) goto L_11726c22;
  /* 11726c1c call dword ptr [0x1175451c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175451c))), 0x11726c22u);
L_11726c22:;
  /* 11726c22 push 0x11750624 */
  push32((uint32_t)(0x11750624u));
  /* 11726c27 push 0x1175030c */
  push32((uint32_t)(0x1175030cu));
  /* 11726c2c call 0x11726de0 */
  push32(0x11726c31u); f_11726de0();
  /* 11726c31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726c34 push 0x11750208 */
  push32((uint32_t)(0x11750208u));
  /* 11726c39 push 0x11750000 */
  push32((uint32_t)(0x11750000u));
  /* 11726c3e call 0x11726de0 */
  push32(0x11726c43u); f_11726de0();
  /* 11726c43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726c46 pop ebp */
  EBP = (pop32());
  /* 11726c47 ret  */
  ESPCHK(0x11726c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c50 @ 0x11726c50 (21 bytes, 10 insns) */
void f_11726c50(void) {
  FTRACE(0x11726c50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726c50 push ebp */
  push32((uint32_t)(EBP));
  /* 11726c51 mov ebp, esp */
  EBP = (ESP);
  /* 11726c53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726c55 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726c57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726c5a push eax */
  push32((uint32_t)(EAX));
  /* 11726c5b call 0x11726cd0 */
  push32(0x11726c60u); f_11726cd0();
  /* 11726c60 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726c63 pop ebp */
  EBP = (pop32());
  /* 11726c64 ret  */
  ESPCHK(0x11726c50u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11726c70 (21 bytes, 10 insns) */
void f_11726c70(void) {
  FTRACE(0x11726c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11726c71 mov ebp, esp */
  EBP = (ESP);
  /* 11726c73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726c75 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726c77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726c7a push eax */
  push32((uint32_t)(EAX));
  /* 11726c7b call 0x11726cd0 */
  push32(0x11726c80u); f_11726cd0();
  /* 11726c80 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726c83 pop ebp */
  EBP = (pop32());
  /* 11726c84 ret  */
  ESPCHK(0x11726c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x11726c90 (19 bytes, 9 insns) */
void f_11726c90(void) {
  FTRACE(0x11726c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11726c91 mov ebp, esp */
  EBP = (ESP);
  /* 11726c93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726c95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726c97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726c99 call 0x11726cd0 */
  push32(0x11726c9eu); f_11726cd0();
  /* 11726c9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726ca1 pop ebp */
  EBP = (pop32());
  /* 11726ca2 ret  */
  ESPCHK(0x11726c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cb0 @ 0x11726cb0 (19 bytes, 9 insns) */
void f_11726cb0(void) {
  FTRACE(0x11726cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11726cb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726cb5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11726cb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11726cb9 call 0x11726cd0 */
  push32(0x11726cbeu); f_11726cd0();
  /* 11726cbe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726cc1 pop ebp */
  EBP = (pop32());
  /* 11726cc2 ret  */
  ESPCHK(0x11726cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006cd0 @ 0x11726cd0 (227 bytes, 61 insns) */
void f_11726cd0(void) {
  FTRACE(0x11726cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11726cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11726cd4 call 0x11726dc0 */
  push32(0x11726cd9u); f_11726dc0();
  /* 11726cd9 cmp dword ptr [0x11752ab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752ab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726ce0 jne 0x11726cf3 */
  if (!C.zf) goto L_11726cf3;
  /* 11726ce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11726ce6 call dword ptr [0x11755348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755348))), 0x11726cecu);
  /* 11726cec push eax */
  push32((uint32_t)(EAX));
  /* 11726ced call dword ptr [0x11755344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755344))), 0x11726cf3u);
L_11726cf3:;
  /* 11726cf3 mov dword ptr [0x11752ab0], 1 */
  w32((uint32_t)(0x11752ab0), (0x1u));
  /* 11726cfd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11726d00 mov byte ptr [0x11752aac], cl */
  w8((uint32_t)(0x11752aac), (CL));
  /* 11726d06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d0a jne 0x11726d53 */
  if (!C.zf) goto L_11726d53;
  /* 11726d0c cmp dword ptr [0x11754518], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754518))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d13 je 0x11726d41 */
  if (C.zf) goto L_11726d41;
  /* 11726d15 mov edx, dword ptr [0x11754514] */
  EDX = (r32((uint32_t)(0x11754514)));
  /* 11726d1b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11726d1e:;
  /* 11726d1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726d21 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726d24 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11726d27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726d2a cmp ecx, dword ptr [0x11754518] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11754518))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d30 jb 0x11726d41 */
  if (C.cf) goto L_11726d41;
  /* 11726d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726d35 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d38 je 0x11726d3f */
  if (C.zf) goto L_11726d3f;
  /* 11726d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726d3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11726d3fu);
L_11726d3f:;
  /* 11726d3f jmp 0x11726d1e */
  goto L_11726d1e;
L_11726d41:;
  /* 11726d41 push 0x11750930 */
  push32((uint32_t)(0x11750930u));
  /* 11726d46 push 0x11750728 */
  push32((uint32_t)(0x11750728u));
  /* 11726d4b call 0x11726de0 */
  push32(0x11726d50u); f_11726de0();
  /* 11726d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726d53:;
  /* 11726d53 push 0x11750c3c */
  push32((uint32_t)(0x11750c3cu));
  /* 11726d58 push 0x11750a34 */
  push32((uint32_t)(0x11750a34u));
  /* 11726d5d call 0x11726de0 */
  push32(0x11726d62u); f_11726de0();
  /* 11726d62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726d65 cmp dword ptr [0x11752ab8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752ab8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d6c jne 0x11726d8e */
  if (!C.zf) goto L_11726d8e;
  /* 11726d6e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11726d70 call 0x11725110 */
  push32(0x11726d75u); f_11725110();
  /* 11726d75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726d78 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11726d7b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726d7d je 0x11726d8e */
  if (C.zf) goto L_11726d8e;
  /* 11726d7f mov dword ptr [0x11752ab8], 1 */
  w32((uint32_t)(0x11752ab8), (0x1u));
  /* 11726d89 call 0x11725a20 */
  push32(0x11726d8eu); f_11725a20();
L_11726d8e:;
  /* 11726d8e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726d92 je 0x11726d9b */
  if (C.zf) goto L_11726d9b;
  /* 11726d94 call 0x11726dd0 */
  push32(0x11726d99u); f_11726dd0();
  /* 11726d99 jmp 0x11726daf */
  goto L_11726daf;
L_11726d9b:;
  /* 11726d9b mov dword ptr [0x11752ab4], 1 */
  w32((uint32_t)(0x11752ab4), (0x1u));
  /* 11726da5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726da8 push ecx */
  push32((uint32_t)(ECX));
  /* 11726da9 call dword ptr [0x11755310] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755310))), 0x11726dafu);
L_11726daf:;
  /* 11726daf mov esp, ebp */
  ESP = (EBP);
  /* 11726db1 pop ebp */
  EBP = (pop32());
  /* 11726db2 ret  */
  ESPCHK(0x11726cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dc0 @ 0x11726dc0 (15 bytes, 7 insns) */
void f_11726dc0(void) {
  FTRACE(0x11726dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11726dc3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11726dc5 call 0x11723b00 */
  push32(0x11726dcau); f_11723b00();
  /* 11726dca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726dcd pop ebp */
  EBP = (pop32());
  /* 11726dce ret  */
  ESPCHK(0x11726dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006dd0 @ 0x11726dd0 (15 bytes, 7 insns) */
void f_11726dd0(void) {
  FTRACE(0x11726dd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726dd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726dd1 mov ebp, esp */
  EBP = (ESP);
  /* 11726dd3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11726dd5 call 0x11723ba0 */
  push32(0x11726ddau); f_11723ba0();
  /* 11726dda add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726ddd pop ebp */
  EBP = (pop32());
  /* 11726dde ret  */
  ESPCHK(0x11726dd0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11726de0 (37 bytes, 16 insns) */
void f_11726de0(void) {
  FTRACE(0x11726de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726de0 push ebp */
  push32((uint32_t)(EBP));
  /* 11726de1 mov ebp, esp */
  EBP = (ESP);
L_11726de3:;
  /* 11726de3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726de6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726de9 jae 0x11726e03 */
  if (!C.cf) goto L_11726e03;
  /* 11726deb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726dee cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726df1 je 0x11726df8 */
  if (C.zf) goto L_11726df8;
  /* 11726df3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726df6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11726df8u);
L_11726df8:;
  /* 11726df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11726dfb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726dfe mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11726e01 jmp 0x11726de3 */
  goto L_11726de3;
L_11726e03:;
  /* 11726e03 pop ebp */
  EBP = (pop32());
  /* 11726e04 ret  */
  ESPCHK(0x11726de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e10 @ 0x11726e10 (804 bytes, 236 insns) */
void f_11726e10(void) {
  FTRACE(0x11726e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11726e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11726e11 mov ebp, esp */
  EBP = (ESP);
  /* 11726e13 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11726e16 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11726e1b push 0x1174dbc0 */
  push32((uint32_t)(0x1174dbc0u));
  /* 11726e20 push 2 */
  push32((uint32_t)(0x2u));
  /* 11726e22 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11726e27 call 0x11723c00 */
  push32(0x11726e2cu); f_11723c00();
  /* 11726e2c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726e2f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11726e32 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726e36 jne 0x11726e42 */
  if (!C.zf) goto L_11726e42;
  /* 11726e38 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11726e3a call 0x11723230 */
  push32(0x11726e3fu); f_11723230();
  /* 11726e3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11726e42:;
  /* 11726e42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e45 mov dword ptr [0x117543c0], eax */
  w32((uint32_t)(0x117543c0), (EAX));
  /* 11726e4a mov dword ptr [0x117544fc], 0x20 */
  w32((uint32_t)(0x117544fc), (0x20u));
  /* 11726e54 jmp 0x11726e5f */
  goto L_11726e5f;
L_11726e56:;
  /* 11726e56 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e59 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726e5c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11726e5f:;
  /* 11726e5f mov edx, dword ptr [0x117543c0] */
  EDX = (r32((uint32_t)(0x117543c0)));
  /* 11726e65 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726e6b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726e6e jae 0x11726e93 */
  if (!C.cf) goto L_11726e93;
  /* 11726e70 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e73 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11726e77 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e7a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11726e80 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e83 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11726e87 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726e8a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11726e91 jmp 0x11726e56 */
  goto L_11726e56;
L_11726e93:;
  /* 11726e93 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11726e96 push ecx */
  push32((uint32_t)(ECX));
  /* 11726e97 call dword ptr [0x11755354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755354))), 0x11726e9du);
  /* 11726e9d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11726ea0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11726ea6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11726ea8 je 0x11727035 */
  if (C.zf) goto L_11727035;
  /* 11726eae cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726eb2 je 0x11727035 */
  if (C.zf) goto L_11727035;
  /* 11726eb8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11726ebb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11726ebd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11726ec0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11726ec3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726ec6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11726ec9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726ecc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726ecf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11726ed2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726ed9 jge 0x11726ee3 */
  if ((C.sf==C.of)) goto L_11726ee3;
  /* 11726edb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11726ede mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11726ee1 jmp 0x11726eea */
  goto L_11726eea;
L_11726ee3:;
  /* 11726ee3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11726eea:;
  /* 11726eea mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11726eed mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11726ef0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11726ef7 jmp 0x11726f02 */
  goto L_11726f02;
L_11726ef9:;
  /* 11726ef9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11726efc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726eff mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11726f02:;
  /* 11726f02 mov ecx, dword ptr [0x117544fc] */
  ECX = (r32((uint32_t)(0x117544fc)));
  /* 11726f08 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726f0b jge 0x11726fa2 */
  if ((C.sf==C.of)) goto L_11726fa2;
  /* 11726f11 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11726f16 push 0x1174dbc0 */
  push32((uint32_t)(0x1174dbc0u));
  /* 11726f1b push 2 */
  push32((uint32_t)(0x2u));
  /* 11726f1d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11726f22 call 0x11723c00 */
  push32(0x11726f27u); f_11723c00();
  /* 11726f27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11726f2a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11726f2d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726f31 jne 0x11726f3e */
  if (!C.zf) goto L_11726f3e;
  /* 11726f33 mov edx, dword ptr [0x117544fc] */
  EDX = (r32((uint32_t)(0x117544fc)));
  /* 11726f39 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11726f3c jmp 0x11726fa2 */
  goto L_11726fa2;
L_11726f3e:;
  /* 11726f3e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11726f41 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f44 mov dword ptr [eax*4 + 0x117543c0], ecx */
  w32((uint32_t)(EAX*4 + 0x117543c0), (ECX));
  /* 11726f4b mov edx, dword ptr [0x117544fc] */
  EDX = (r32((uint32_t)(0x117544fc)));
  /* 11726f51 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726f54 mov dword ptr [0x117544fc], edx */
  w32((uint32_t)(0x117544fc), (EDX));
  /* 11726f5a jmp 0x11726f65 */
  goto L_11726f65;
L_11726f5c:;
  /* 11726f5c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f5f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726f62 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11726f65:;
  /* 11726f65 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11726f68 mov edx, dword ptr [ecx*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 11726f6f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726f75 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726f78 jae 0x11726f9d */
  if (!C.cf) goto L_11726f9d;
  /* 11726f7a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f7d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11726f81 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f84 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11726f8a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f8d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11726f91 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11726f94 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11726f9b jmp 0x11726f5c */
  goto L_11726f5c;
L_11726f9d:;
  /* 11726f9d jmp 0x11726ef9 */
  goto L_11726ef9;
L_11726fa2:;
  /* 11726fa2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11726fa9 jmp 0x11726fc6 */
  goto L_11726fc6;
L_11726fab:;
  /* 11726fab mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11726fae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726fb1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11726fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726fb7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726fba mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11726fbd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11726fc0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11726fc3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11726fc6:;
  /* 11726fc6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11726fc9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726fcc jge 0x11727035 */
  if ((C.sf==C.of)) goto L_11727035;
  /* 11726fce mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11726fd1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11726fd4 je 0x11727030 */
  if (C.zf) goto L_11727030;
  /* 11726fd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726fd9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11726fdc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11726fdf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11726fe1 je 0x11727030 */
  if (C.zf) goto L_11727030;
  /* 11726fe3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11726fe6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11726fe9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11726fec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726fee jne 0x11727000 */
  if (!C.zf) goto L_11727000;
  /* 11726ff0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11726ff3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11726ff5 push edx */
  push32((uint32_t)(EDX));
  /* 11726ff6 call dword ptr [0x11755350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755350))), 0x11726ffcu);
  /* 11726ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11726ffe je 0x11727030 */
  if (C.zf) goto L_11727030;
L_11727000:;
  /* 11727000 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11727003 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11727006 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11727009 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1172700c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172700f mov edx, dword ptr [eax*4 + 0x117543c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 11727016 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727018 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1172701b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1172701e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11727021 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11727023 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11727025 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11727028 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172702b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172702d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11727030:;
  /* 11727030 jmp 0x11726fab */
  goto L_11726fab;
L_11727035:;
  /* 11727035 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1172703c jmp 0x11727047 */
  goto L_11727047;
L_1172703e:;
  /* 1172703e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11727041 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727044 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11727047:;
  /* 11727047 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172704b jge 0x11727124 */
  if ((C.sf==C.of)) goto L_11727124;
  /* 11727051 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11727054 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11727057 mov edx, dword ptr [0x117543c0] */
  EDX = (r32((uint32_t)(0x117543c0)));
  /* 1172705d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172705f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11727062 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11727065 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727068 jne 0x11727110 */
  if (!C.zf) goto L_11727110;
  /* 1172706e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11727071 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11727075 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727079 jne 0x11727084 */
  if (!C.zf) goto L_11727084;
  /* 1172707b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11727082 jmp 0x11727094 */
  goto L_11727094;
L_11727084:;
  /* 11727084 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11727087 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172708a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172708c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172708e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727091 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11727094:;
  /* 11727094 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11727097 push eax */
  push32((uint32_t)(EAX));
  /* 11727098 call dword ptr [0x117552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e0))), 0x1172709eu);
  /* 1172709e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 117270a1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117270a5 je 0x117270ff */
  if (C.zf) goto L_117270ff;
  /* 117270a7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117270aa push ecx */
  push32((uint32_t)(ECX));
  /* 117270ab call dword ptr [0x11755350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755350))), 0x117270b1u);
  /* 117270b1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 117270b4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117270b8 je 0x117270ff */
  if (C.zf) goto L_117270ff;
  /* 117270ba mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117270bd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 117270c0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117270c2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 117270c5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117270cb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117270ce jne 0x117270e0 */
  if (!C.zf) goto L_117270e0;
  /* 117270d0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117270d3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 117270d6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 117270d8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 117270db mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 117270de jmp 0x117270fd */
  goto L_117270fd;
L_117270e0:;
  /* 117270e0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 117270e3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117270e9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117270ec jne 0x117270fd */
  if (!C.zf) goto L_117270fd;
  /* 117270ee mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 117270f1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117270f4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 117270f7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 117270fa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_117270fd:;
  /* 117270fd jmp 0x1172710e */
  goto L_1172710e;
L_117270ff:;
  /* 117270ff mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11727102 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11727105 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11727108 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1172710b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1172710e:;
  /* 1172710e jmp 0x1172711f */
  goto L_1172711f;
L_11727110:;
  /* 11727110 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11727113 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11727116 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11727119 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1172711c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1172711f:;
  /* 1172711f jmp 0x1172703e */
  goto L_1172703e;
L_11727124:;
  /* 11727124 mov eax, dword ptr [0x117544fc] */
  EAX = (r32((uint32_t)(0x117544fc)));
  /* 11727129 push eax */
  push32((uint32_t)(EAX));
  /* 1172712a call dword ptr [0x1175534c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175534c))), 0x11727130u);
  /* 11727130 mov esp, ebp */
  ESP = (EBP);
  /* 11727132 pop ebp */
  EBP = (pop32());
  /* 11727133 ret  */
  ESPCHK(0x11726e10u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11727140 (155 bytes, 45 insns) */
void f_11727140(void) {
  FTRACE(0x11727140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727140 push ebp */
  push32((uint32_t)(EBP));
  /* 11727141 mov ebp, esp */
  EBP = (ESP);
  /* 11727143 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727146 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1172714d jmp 0x11727158 */
  goto L_11727158;
L_1172714f:;
  /* 1172714f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727152 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727155 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11727158:;
  /* 11727158 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172715c jge 0x117271d7 */
  if ((C.sf==C.of)) goto L_117271d7;
  /* 1172715e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727161 cmp dword ptr [ecx*4 + 0x117543c0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x117543c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727169 je 0x117271d2 */
  if (C.zf) goto L_117271d2;
  /* 1172716b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172716e mov eax, dword ptr [edx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 11727175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11727178 jmp 0x11727183 */
  goto L_11727183;
L_1172717a:;
  /* 1172717a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172717d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727180 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11727183:;
  /* 11727183 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727186 mov eax, dword ptr [edx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172718d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727192 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727195 jae 0x117271af */
  if (!C.cf) goto L_117271af;
  /* 11727197 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172719a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172719e je 0x117271ad */
  if (C.zf) goto L_117271ad;
  /* 117271a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117271a3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117271a6 push edx */
  push32((uint32_t)(EDX));
  /* 117271a7 call dword ptr [0x11755304] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755304))), 0x117271adu);
L_117271ad:;
  /* 117271ad jmp 0x1172717a */
  goto L_1172717a;
L_117271af:;
  /* 117271af push 2 */
  push32((uint32_t)(0x2u));
  /* 117271b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117271b4 mov ecx, dword ptr [eax*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x117543c0)));
  /* 117271bb push ecx */
  push32((uint32_t)(ECX));
  /* 117271bc call 0x11724690 */
  push32(0x117271c1u); f_11724690();
  /* 117271c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117271c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117271c7 mov dword ptr [edx*4 + 0x117543c0], 0 */
  w32((uint32_t)(EDX*4 + 0x117543c0), (0x0u));
L_117271d2:;
  /* 117271d2 jmp 0x1172714f */
  goto L_1172714f;
L_117271d7:;
  /* 117271d7 mov esp, ebp */
  ESP = (EBP);
  /* 117271d9 pop ebp */
  EBP = (pop32());
  /* 117271da ret  */
  ESPCHK(0x11727140u, _esp0);
  ESP += 4; return;
}

/* FUN_100071e0 @ 0x117271e0 (329 bytes, 102 insns) */
void f_117271e0(void) {
  FTRACE(0x117271e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117271e0 push ebp */
  push32((uint32_t)(EBP));
  /* 117271e1 mov ebp, esp */
  EBP = (ESP);
  /* 117271e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117271e6 cmp dword ptr [0x11754510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117271ed jne 0x117271f4 */
  if (!C.zf) goto L_117271f4;
  /* 117271ef call 0x1172bf60 */
  push32(0x117271f4u); f_1172bf60();
L_117271f4:;
  /* 117271f4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 117271fb mov eax, dword ptr [0x117529ec] */
  EAX = (r32((uint32_t)(0x117529ec)));
  /* 11727200 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11727203:;
  /* 11727203 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727206 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11727209 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172720b je 0x11727239 */
  if (C.zf) goto L_11727239;
  /* 1172720d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727210 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11727213 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727216 je 0x11727221 */
  if (C.zf) goto L_11727221;
  /* 11727218 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172721b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172721e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11727221:;
  /* 11727221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727224 push eax */
  push32((uint32_t)(EAX));
  /* 11727225 call 0x117280a0 */
  push32(0x1172722au); f_117280a0();
  /* 1172722a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172722d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727230 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11727234 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11727237 jmp 0x11727203 */
  goto L_11727203;
L_11727239:;
  /* 11727239 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 1172723b push 0x1174dbcc */
  push32((uint32_t)(0x1174dbccu));
  /* 11727240 push 2 */
  push32((uint32_t)(0x2u));
  /* 11727242 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727245 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 1172724c push ecx */
  push32((uint32_t)(ECX));
  /* 1172724d call 0x11723c00 */
  push32(0x11727252u); f_11723c00();
  /* 11727252 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727255 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11727258 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172725b mov dword ptr [0x11752a94], edx */
  w32((uint32_t)(0x11752a94), (EDX));
  /* 11727261 cmp dword ptr [0x11752a94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752a94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727268 jne 0x11727274 */
  if (!C.zf) goto L_11727274;
  /* 1172726a push 9 */
  push32((uint32_t)(0x9u));
  /* 1172726c call 0x11723230 */
  push32(0x11727271u); f_11723230();
  /* 11727271 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727274:;
  /* 11727274 mov eax, dword ptr [0x117529ec] */
  EAX = (r32((uint32_t)(0x117529ec)));
  /* 11727279 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172727c jmp 0x11727287 */
  goto L_11727287;
L_1172727e:;
  /* 1172727e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727281 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727284 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11727287:;
  /* 11727287 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172728a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1172728d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172728f je 0x117272f7 */
  if (C.zf) goto L_117272f7;
  /* 11727291 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727294 push ecx */
  push32((uint32_t)(ECX));
  /* 11727295 call 0x117280a0 */
  push32(0x1172729au); f_117280a0();
  /* 1172729a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172729d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117272a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117272a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117272a6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117272a9 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117272ac je 0x117272f5 */
  if (C.zf) goto L_117272f5;
  /* 117272ae push 0x79 */
  push32((uint32_t)(0x79u));
  /* 117272b0 push 0x1174dbcc */
  push32((uint32_t)(0x1174dbccu));
  /* 117272b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 117272b7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117272ba push ecx */
  push32((uint32_t)(ECX));
  /* 117272bb call 0x11723c00 */
  push32(0x117272c0u); f_11723c00();
  /* 117272c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117272c3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117272c6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 117272c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117272cb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117272ce jne 0x117272da */
  if (!C.zf) goto L_117272da;
  /* 117272d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 117272d2 call 0x11723230 */
  push32(0x117272d7u); f_11723230();
  /* 117272d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117272da:;
  /* 117272da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117272dd push ecx */
  push32((uint32_t)(ECX));
  /* 117272de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117272e1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117272e3 push eax */
  push32((uint32_t)(EAX));
  /* 117272e4 call 0x11728220 */
  push32(0x117272e9u); f_11728220();
  /* 117272e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117272ec mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117272ef add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117272f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_117272f5:;
  /* 117272f5 jmp 0x1172727e */
  goto L_1172727e;
L_117272f7:;
  /* 117272f7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117272f9 mov edx, dword ptr [0x117529ec] */
  EDX = (r32((uint32_t)(0x117529ec)));
  /* 117272ff push edx */
  push32((uint32_t)(EDX));
  /* 11727300 call 0x11724690 */
  push32(0x11727305u); f_11724690();
  /* 11727305 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727308 mov dword ptr [0x117529ec], 0 */
  w32((uint32_t)(0x117529ec), (0x0u));
  /* 11727312 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727315 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172731b mov dword ptr [0x11754500], 1 */
  w32((uint32_t)(0x11754500), (0x1u));
  /* 11727325 mov esp, ebp */
  ESP = (EBP);
  /* 11727327 pop ebp */
  EBP = (pop32());
  /* 11727328 ret  */
  ESPCHK(0x117271e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007330 @ 0x11727330 (216 bytes, 69 insns) */
void f_11727330(void) {
  FTRACE(0x11727330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727330 push ebp */
  push32((uint32_t)(EBP));
  /* 11727331 mov ebp, esp */
  EBP = (ESP);
  /* 11727333 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727336 cmp dword ptr [0x11754510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172733d jne 0x11727344 */
  if (!C.zf) goto L_11727344;
  /* 1172733f call 0x1172bf60 */
  push32(0x11727344u); f_1172bf60();
L_11727344:;
  /* 11727344 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11727349 push 0x11752abc */
  push32((uint32_t)(0x11752abcu));
  /* 1172734e push 0 */
  push32((uint32_t)(0x0u));
  /* 11727350 call dword ptr [0x117552fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552fc))), 0x11727356u);
  /* 11727356 mov dword ptr [0x11752aa4], 0x11752abc */
  w32((uint32_t)(0x11752aa4), (0x11752abcu));
  /* 11727360 mov eax, dword ptr [0x11754538] */
  EAX = (r32((uint32_t)(0x11754538)));
  /* 11727365 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11727368 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172736a jne 0x11727377 */
  if (!C.zf) goto L_11727377;
  /* 1172736c mov edx, dword ptr [0x11752aa4] */
  EDX = (r32((uint32_t)(0x11752aa4)));
  /* 11727372 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11727375 jmp 0x1172737f */
  goto L_1172737f;
L_11727377:;
  /* 11727377 mov eax, dword ptr [0x11754538] */
  EAX = (r32((uint32_t)(0x11754538)));
  /* 1172737c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_1172737f:;
  /* 1172737f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11727382 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11727385 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11727388 push edx */
  push32((uint32_t)(EDX));
  /* 11727389 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1172738c push eax */
  push32((uint32_t)(EAX));
  /* 1172738d push 0 */
  push32((uint32_t)(0x0u));
  /* 1172738f push 0 */
  push32((uint32_t)(0x0u));
  /* 11727391 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11727394 push ecx */
  push32((uint32_t)(ECX));
  /* 11727395 call 0x11727410 */
  push32(0x1172739au); f_11727410();
  /* 1172739a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172739d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 117273a2 push 0x1174dbd8 */
  push32((uint32_t)(0x1174dbd8u));
  /* 117273a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 117273a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117273ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117273af lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 117273b2 push ecx */
  push32((uint32_t)(ECX));
  /* 117273b3 call 0x11723c00 */
  push32(0x117273b8u); f_11723c00();
  /* 117273b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117273bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117273be cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117273c2 jne 0x117273ce */
  if (!C.zf) goto L_117273ce;
  /* 117273c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 117273c6 call 0x11723230 */
  push32(0x117273cbu); f_11723230();
  /* 117273cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117273ce:;
  /* 117273ce lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 117273d1 push edx */
  push32((uint32_t)(EDX));
  /* 117273d2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 117273d5 push eax */
  push32((uint32_t)(EAX));
  /* 117273d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117273d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117273dc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 117273df push eax */
  push32((uint32_t)(EAX));
  /* 117273e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117273e3 push ecx */
  push32((uint32_t)(ECX));
  /* 117273e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117273e7 push edx */
  push32((uint32_t)(EDX));
  /* 117273e8 call 0x11727410 */
  push32(0x117273edu); f_11727410();
  /* 117273ed add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117273f0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117273f3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117273f6 mov dword ptr [0x11752a88], eax */
  w32((uint32_t)(0x11752a88), (EAX));
  /* 117273fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117273fe mov dword ptr [0x11752a8c], ecx */
  w32((uint32_t)(0x11752a8c), (ECX));
  /* 11727404 mov esp, ebp */
  ESP = (EBP);
  /* 11727406 pop ebp */
  EBP = (pop32());
  /* 11727407 ret  */
  ESPCHK(0x11727330u, _esp0);
  ESP += 4; return;
}

/* FUN_10007410 @ 0x11727410 (1060 bytes, 360 insns) */
void f_11727410(void) {
  FTRACE(0x11727410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727410 push ebp */
  push32((uint32_t)(EBP));
  /* 11727411 mov ebp, esp */
  EBP = (ESP);
  /* 11727413 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727416 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727419 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172741f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727422 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11727428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172742b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172742e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727432 je 0x11727445 */
  if (C.zf) goto L_11727445;
  /* 11727434 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727437 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172743a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172743c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172743f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727442 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11727445:;
  /* 11727445 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727448 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172744b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172744e jne 0x1172751d */
  if (!C.zf) goto L_1172751d;
L_11727454:;
  /* 11727454 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727457 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172745a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172745d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727460 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11727463 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727466 je 0x117274e2 */
  if (C.zf) goto L_117274e2;
  /* 11727468 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172746b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1172746e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727470 je 0x117274e2 */
  if (C.zf) goto L_117274e2;
  /* 11727472 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727475 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11727477 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727479 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172747b mov al, byte ptr [edx + 0x11754281] */
  AL = (r8((uint32_t)(EDX + 0x11754281)));
  /* 11727481 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11727484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727486 je 0x117274b7 */
  if (C.zf) goto L_117274b7;
  /* 11727488 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172748b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172748d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727490 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727493 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11727495 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727499 je 0x117274b7 */
  if (C.zf) goto L_117274b7;
  /* 1172749b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172749e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117274a1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117274a3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 117274a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117274a8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117274ab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 117274ae mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117274b1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117274b4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_117274b7:;
  /* 117274b7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117274ba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117274bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117274bf mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117274c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117274c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117274c8 je 0x117274dd */
  if (C.zf) goto L_117274dd;
  /* 117274ca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117274cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117274d0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 117274d2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 117274d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117274d7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117274da mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_117274dd:;
  /* 117274dd jmp 0x11727454 */
  goto L_11727454;
L_117274e2:;
  /* 117274e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 117274e5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117274e7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117274ea mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117274ed mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 117274ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117274f3 je 0x11727504 */
  if (C.zf) goto L_11727504;
  /* 117274f5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117274f8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117274fb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117274fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727501 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11727504:;
  /* 11727504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727507 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172750a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172750d jne 0x11727518 */
  if (!C.zf) goto L_11727518;
  /* 1172750f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727512 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727515 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11727518:;
  /* 11727518 jmp 0x117275ec */
  goto L_117275ec;
L_1172751d:;
  /* 1172751d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727520 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11727522 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727525 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727528 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1172752a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172752e je 0x11727543 */
  if (C.zf) goto L_11727543;
  /* 11727530 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727533 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727536 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727538 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1172753a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172753d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727540 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11727543:;
  /* 11727543 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727546 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727548 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1172754b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172754e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727551 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11727554 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727557 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172755d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172755f mov dl, byte ptr [ecx + 0x11754281] */
  DL = (r8((uint32_t)(ECX + 0x11754281)));
  /* 11727565 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11727568 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172756a je 0x1172759b */
  if (C.zf) goto L_1172759b;
  /* 1172756c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172756f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11727571 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727574 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727577 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11727579 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172757d je 0x11727592 */
  if (C.zf) goto L_11727592;
  /* 1172757f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727585 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727587 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11727589 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172758c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172758f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11727592:;
  /* 11727592 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727595 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727598 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172759b:;
  /* 1172759b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172759e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117275a4 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117275a7 je 0x117275c7 */
  if (C.zf) goto L_117275c7;
  /* 117275a9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117275ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 117275b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117275b3 je 0x117275c7 */
  if (C.zf) goto L_117275c7;
  /* 117275b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117275b8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117275be cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117275c1 jne 0x1172751d */
  if (!C.zf) goto L_1172751d;
L_117275c7:;
  /* 117275c7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 117275ca and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117275d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117275d2 jne 0x117275df */
  if (!C.zf) goto L_117275df;
  /* 117275d4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117275d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117275da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117275dd jmp 0x117275ec */
  goto L_117275ec;
L_117275df:;
  /* 117275df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117275e3 je 0x117275ec */
  if (C.zf) goto L_117275ec;
  /* 117275e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117275e8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_117275ec:;
  /* 117275ec mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_117275f3:;
  /* 117275f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117275f6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 117275f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117275fb je 0x1172761e */
  if (C.zf) goto L_1172761e;
L_117275fd:;
  /* 117275fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727600 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11727603 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727606 je 0x11727613 */
  if (C.zf) goto L_11727613;
  /* 11727608 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172760b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172760e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727611 jne 0x1172761e */
  if (!C.zf) goto L_1172761e;
L_11727613:;
  /* 11727613 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727616 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727619 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172761c jmp 0x117275fd */
  goto L_117275fd;
L_1172761e:;
  /* 1172761e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727621 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11727624 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11727626 jne 0x1172762d */
  if (!C.zf) goto L_1172762d;
  /* 11727628 jmp 0x1172780b */
  goto L_1172780b;
L_1172762d:;
  /* 1172762d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727631 je 0x11727644 */
  if (C.zf) goto L_11727644;
  /* 11727633 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727636 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727639 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1172763b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172763e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727641 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11727644:;
  /* 11727644 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727647 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11727649 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172764c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172764f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11727651:;
  /* 11727651 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11727658 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1172765f:;
  /* 1172765f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727662 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11727665 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727668 jne 0x1172767e */
  if (!C.zf) goto L_1172767e;
  /* 1172766a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172766d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727670 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11727673 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11727676 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727679 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172767c jmp 0x1172765f */
  goto L_1172765f;
L_1172767e:;
  /* 1172767e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727681 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11727684 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727687 jne 0x117276da */
  if (!C.zf) goto L_117276da;
  /* 11727689 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172768c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172768e mov ecx, 2 */
  ECX = (0x2u);
  /* 11727693 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11727695 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11727697 jne 0x117276d2 */
  if (!C.zf) goto L_117276d2;
  /* 11727699 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172769d je 0x117276bf */
  if (C.zf) goto L_117276bf;
  /* 1172769f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117276a2 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 117276a6 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117276a9 jne 0x117276b6 */
  if (!C.zf) goto L_117276b6;
  /* 117276ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117276ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117276b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 117276b4 jmp 0x117276bd */
  goto L_117276bd;
L_117276b6:;
  /* 117276b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117276bd:;
  /* 117276bd jmp 0x117276c6 */
  goto L_117276c6;
L_117276bf:;
  /* 117276bf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_117276c6:;
  /* 117276c6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117276c8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117276cc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 117276cf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_117276d2:;
  /* 117276d2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117276d5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 117276d7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_117276da:;
  /* 117276da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117276dd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 117276e0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117276e3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 117276e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117276e8 je 0x1172770e */
  if (C.zf) goto L_1172770e;
  /* 117276ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117276ee je 0x117276ff */
  if (C.zf) goto L_117276ff;
  /* 117276f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117276f3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 117276f6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117276f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117276fc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_117276ff:;
  /* 117276ff mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727702 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11727704 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727707 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172770a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172770c jmp 0x117276da */
  goto L_117276da;
L_1172770e:;
  /* 1172770e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727711 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11727714 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727716 je 0x11727734 */
  if (C.zf) goto L_11727734;
  /* 11727718 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172771c jne 0x11727739 */
  if (!C.zf) goto L_11727739;
  /* 1172771e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727721 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11727724 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727727 je 0x11727734 */
  if (C.zf) goto L_11727734;
  /* 11727729 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172772c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172772f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727732 jne 0x11727739 */
  if (!C.zf) goto L_11727739;
L_11727734:;
  /* 11727734 jmp 0x117277e4 */
  goto L_117277e4;
L_11727739:;
  /* 11727739 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172773d je 0x117277d6 */
  if (C.zf) goto L_117277d6;
  /* 11727743 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727747 je 0x1172779d */
  if (C.zf) goto L_1172779d;
  /* 11727749 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172774c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172774e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11727750 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11727752 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 11727758 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1172775b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172775d je 0x11727788 */
  if (C.zf) goto L_11727788;
  /* 1172775f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727762 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727765 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11727767 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11727769 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172776c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172776f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11727772 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727775 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727778 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172777b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172777e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11727780 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727783 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727786 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11727788:;
  /* 11727788 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172778b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172778e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11727790 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11727792 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727795 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727798 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1172779b jmp 0x117277c9 */
  goto L_117277c9;
L_1172779d:;
  /* 1172779d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117277a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117277a2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 117277a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117277a6 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 117277ac and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 117277af test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117277b1 je 0x117277c9 */
  if (C.zf) goto L_117277c9;
  /* 117277b3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117277b6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117277b9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117277bc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117277bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117277c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117277c4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117277c7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117277c9:;
  /* 117277c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117277cc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117277ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117277d1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 117277d4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117277d6:;
  /* 117277d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117277d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117277dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117277df jmp 0x11727651 */
  goto L_11727651;
L_117277e4:;
  /* 117277e4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117277e8 je 0x117277f9 */
  if (C.zf) goto L_117277f9;
  /* 117277ea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 117277ed mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117277f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 117277f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117277f6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_117277f9:;
  /* 117277f9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 117277fc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117277fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727801 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11727804 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11727806 jmp 0x117275f3 */
  goto L_117275f3;
L_1172780b:;
  /* 1172780b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172780f je 0x11727823 */
  if (C.zf) goto L_11727823;
  /* 11727811 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727814 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172781a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172781d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727820 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11727823:;
  /* 11727823 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727826 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11727828 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172782b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172782e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11727830 mov esp, ebp */
  ESP = (EBP);
  /* 11727832 pop ebp */
  EBP = (pop32());
  /* 11727833 ret  */
  ESPCHK(0x11727410u, _esp0);
  ESP += 4; return;
}

/* FUN_10007840 @ 0x11727840 (537 bytes, 173 insns) */
void f_11727840(void) {
  FTRACE(0x11727840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727840 push ebp */
  push32((uint32_t)(EBP));
  /* 11727841 mov ebp, esp */
  EBP = (ESP);
  /* 11727843 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727846 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1172784d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11727854 cmp dword ptr [0x11752bc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172785b jne 0x1172789a */
  if (!C.zf) goto L_1172789a;
  /* 1172785d call dword ptr [0x11755334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755334))), 0x11727863u);
  /* 11727863 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11727866 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172786a je 0x11727878 */
  if (C.zf) goto L_11727878;
  /* 1172786c mov dword ptr [0x11752bc0], 1 */
  w32((uint32_t)(0x11752bc0), (0x1u));
  /* 11727876 jmp 0x1172789a */
  goto L_1172789a;
L_11727878:;
  /* 11727878 call dword ptr [0x11755330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755330))), 0x1172787eu);
  /* 1172787e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11727881 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727885 je 0x11727893 */
  if (C.zf) goto L_11727893;
  /* 11727887 mov dword ptr [0x11752bc0], 2 */
  w32((uint32_t)(0x11752bc0), (0x2u));
  /* 11727891 jmp 0x1172789a */
  goto L_1172789a;
L_11727893:;
  /* 11727893 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727895 jmp 0x11727a55 */
  goto L_11727a55;
L_1172789a:;
  /* 1172789a cmp dword ptr [0x11752bc0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752bc0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117278a1 jne 0x1172799e */
  if (!C.zf) goto L_1172799e;
  /* 117278a7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117278ab jne 0x117278c3 */
  if (!C.zf) goto L_117278c3;
  /* 117278ad call dword ptr [0x11755334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755334))), 0x117278b3u);
  /* 117278b3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 117278b6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117278ba jne 0x117278c3 */
  if (!C.zf) goto L_117278c3;
  /* 117278bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117278be jmp 0x11727a55 */
  goto L_11727a55;
L_117278c3:;
  /* 117278c3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 117278c6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117278c9:;
  /* 117278c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117278cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117278ce mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117278d1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117278d3 je 0x117278f5 */
  if (C.zf) goto L_117278f5;
  /* 117278d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117278d8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117278db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117278de mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117278e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117278e3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 117278e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117278e8 jne 0x117278f3 */
  if (!C.zf) goto L_117278f3;
  /* 117278ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117278ed add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117278f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_117278f3:;
  /* 117278f3 jmp 0x117278c9 */
  goto L_117278c9;
L_117278f5:;
  /* 117278f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117278f8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117278fb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 117278fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727900 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11727903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727905 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727907 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727909 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172790b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172790e push edx */
  push32((uint32_t)(EDX));
  /* 1172790f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11727912 push eax */
  push32((uint32_t)(EAX));
  /* 11727913 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727915 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727917 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x1172791du);
  /* 1172791d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11727920 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727924 je 0x11727944 */
  if (C.zf) goto L_11727944;
  /* 11727926 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11727928 push 0x1174dbe4 */
  push32((uint32_t)(0x1174dbe4u));
  /* 1172792d push 2 */
  push32((uint32_t)(0x2u));
  /* 1172792f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11727932 push ecx */
  push32((uint32_t)(ECX));
  /* 11727933 call 0x11723c00 */
  push32(0x11727938u); f_11723c00();
  /* 11727938 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172793b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1172793e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727942 jne 0x11727955 */
  if (!C.zf) goto L_11727955;
L_11727944:;
  /* 11727944 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11727947 push edx */
  push32((uint32_t)(EDX));
  /* 11727948 call dword ptr [0x1175535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175535c))), 0x1172794eu);
  /* 1172794e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727950 jmp 0x11727a55 */
  goto L_11727a55;
L_11727955:;
  /* 11727955 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727957 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727959 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172795c push eax */
  push32((uint32_t)(EAX));
  /* 1172795d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11727960 push ecx */
  push32((uint32_t)(ECX));
  /* 11727961 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727964 push edx */
  push32((uint32_t)(EDX));
  /* 11727965 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11727968 push eax */
  push32((uint32_t)(EAX));
  /* 11727969 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172796b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172796d call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x11727973u);
  /* 11727973 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727975 jne 0x1172798c */
  if (!C.zf) goto L_1172798c;
  /* 11727977 push 2 */
  push32((uint32_t)(0x2u));
  /* 11727979 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172797c push ecx */
  push32((uint32_t)(ECX));
  /* 1172797d call 0x11724690 */
  push32(0x11727982u); f_11724690();
  /* 11727982 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727985 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1172798c:;
  /* 1172798c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172798f push edx */
  push32((uint32_t)(EDX));
  /* 11727990 call dword ptr [0x1175535c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175535c))), 0x11727996u);
  /* 11727996 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11727999 jmp 0x11727a55 */
  goto L_11727a55;
L_1172799e:;
  /* 1172799e cmp dword ptr [0x11752bc0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752bc0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117279a5 jne 0x11727a53 */
  if (!C.zf) goto L_11727a53;
  /* 117279ab cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117279af jne 0x117279c7 */
  if (!C.zf) goto L_117279c7;
  /* 117279b1 call dword ptr [0x11755330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755330))), 0x117279b7u);
  /* 117279b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117279ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117279be jne 0x117279c7 */
  if (!C.zf) goto L_117279c7;
  /* 117279c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117279c2 jmp 0x11727a55 */
  goto L_11727a55;
L_117279c7:;
  /* 117279c7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117279ca mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117279cd:;
  /* 117279cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117279d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117279d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117279d5 je 0x117279f5 */
  if (C.zf) goto L_117279f5;
  /* 117279d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117279da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117279dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117279e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117279e3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 117279e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117279e8 jne 0x117279f3 */
  if (!C.zf) goto L_117279f3;
  /* 117279ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117279ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117279f0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_117279f3:;
  /* 117279f3 jmp 0x117279cd */
  goto L_117279cd;
L_117279f5:;
  /* 117279f5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 117279f8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117279fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117279fe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11727a01 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11727a06 push 0x1174dbe4 */
  push32((uint32_t)(0x1174dbe4u));
  /* 11727a0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11727a0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11727a10 push edx */
  push32((uint32_t)(EDX));
  /* 11727a11 call 0x11723c00 */
  push32(0x11727a16u); f_11723c00();
  /* 11727a16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727a19 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11727a1c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727a20 jne 0x11727a30 */
  if (!C.zf) goto L_11727a30;
  /* 11727a22 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11727a25 push eax */
  push32((uint32_t)(EAX));
  /* 11727a26 call dword ptr [0x11755358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755358))), 0x11727a2cu);
  /* 11727a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727a2e jmp 0x11727a55 */
  goto L_11727a55;
L_11727a30:;
  /* 11727a30 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11727a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11727a34 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11727a37 push edx */
  push32((uint32_t)(EDX));
  /* 11727a38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727a3b push eax */
  push32((uint32_t)(EAX));
  /* 11727a3c call 0x1172bf90 */
  push32(0x11727a41u); f_1172bf90();
  /* 11727a41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727a44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11727a47 push ecx */
  push32((uint32_t)(ECX));
  /* 11727a48 call dword ptr [0x11755358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755358))), 0x11727a4eu);
  /* 11727a4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727a51 jmp 0x11727a55 */
  goto L_11727a55;
L_11727a53:;
  /* 11727a53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11727a55:;
  /* 11727a55 mov esp, ebp */
  ESP = (EBP);
  /* 11727a57 pop ebp */
  EBP = (pop32());
  /* 11727a58 ret  */
  ESPCHK(0x11727840u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a60 @ 0x11727a60 (77 bytes, 25 insns) */
void f_11727a60(void) {
  FTRACE(0x11727a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11727a61 mov ebp, esp */
  EBP = (ESP);
  /* 11727a63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727a65 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11727a6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727a6c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727a70 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11727a73 push eax */
  push32((uint32_t)(EAX));
  /* 11727a74 call dword ptr [0x11755370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755370))), 0x11727a7au);
  /* 11727a7a mov dword ptr [0x117543ac], eax */
  w32((uint32_t)(0x117543ac), (EAX));
  /* 11727a7f cmp dword ptr [0x117543ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117543ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727a86 jne 0x11727a8c */
  if (!C.zf) goto L_11727a8c;
  /* 11727a88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727a8a jmp 0x11727aab */
  goto L_11727aab;
L_11727a8c:;
  /* 11727a8c call 0x11729130 */
  push32(0x11727a91u); f_11729130();
  /* 11727a91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727a93 jne 0x11727aa6 */
  if (!C.zf) goto L_11727aa6;
  /* 11727a95 mov ecx, dword ptr [0x117543ac] */
  ECX = (r32((uint32_t)(0x117543ac)));
  /* 11727a9b push ecx */
  push32((uint32_t)(ECX));
  /* 11727a9c call dword ptr [0x1175536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175536c))), 0x11727aa2u);
  /* 11727aa2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11727aa4 jmp 0x11727aab */
  goto L_11727aab;
L_11727aa6:;
  /* 11727aa6 mov eax, 1 */
  EAX = (0x1u);
L_11727aab:;
  /* 11727aab pop ebp */
  EBP = (pop32());
  /* 11727aac ret  */
  ESPCHK(0x11727a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ab0 @ 0x11727ab0 (156 bytes, 48 insns) */
void f_11727ab0(void) {
  FTRACE(0x11727ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11727ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11727ab3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727ab6 mov eax, dword ptr [0x117543a8] */
  EAX = (r32((uint32_t)(0x117543a8)));
  /* 11727abb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11727abe mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11727ac5 jmp 0x11727ad0 */
  goto L_11727ad0;
L_11727ac7:;
  /* 11727ac7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727aca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727acd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11727ad0:;
  /* 11727ad0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727ad3 cmp edx, dword ptr [0x117543a4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117543a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727ad9 jge 0x11727b26 */
  if ((C.sf==C.of)) goto L_11727b26;
  /* 11727adb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11727ae0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11727ae5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727ae8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11727aeb push ecx */
  push32((uint32_t)(ECX));
  /* 11727aec call dword ptr [0x11755378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755378))), 0x11727af2u);
  /* 11727af2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11727af7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727af9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727afc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11727aff push eax */
  push32((uint32_t)(EAX));
  /* 11727b00 call dword ptr [0x11755378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755378))), 0x11727b06u);
  /* 11727b06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727b09 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11727b0c push edx */
  push32((uint32_t)(EDX));
  /* 11727b0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11727b0f mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 11727b14 push eax */
  push32((uint32_t)(EAX));
  /* 11727b15 call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x11727b1bu);
  /* 11727b1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727b1e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727b21 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11727b24 jmp 0x11727ac7 */
  goto L_11727ac7;
L_11727b26:;
  /* 11727b26 mov edx, dword ptr [0x117543a8] */
  EDX = (r32((uint32_t)(0x117543a8)));
  /* 11727b2c push edx */
  push32((uint32_t)(EDX));
  /* 11727b2d push 0 */
  push32((uint32_t)(0x0u));
  /* 11727b2f mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 11727b34 push eax */
  push32((uint32_t)(EAX));
  /* 11727b35 call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x11727b3bu);
  /* 11727b3b mov ecx, dword ptr [0x117543ac] */
  ECX = (r32((uint32_t)(0x117543ac)));
  /* 11727b41 push ecx */
  push32((uint32_t)(ECX));
  /* 11727b42 call dword ptr [0x1175536c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175536c))), 0x11727b48u);
  /* 11727b48 mov esp, ebp */
  ESP = (EBP);
  /* 11727b4a pop ebp */
  EBP = (pop32());
  /* 11727b4b ret  */
  ESPCHK(0x11727ab0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11727b50 (73 bytes, 19 insns) */
void f_11727b50(void) {
  FTRACE(0x11727b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727b50 push ebp */
  push32((uint32_t)(EBP));
  /* 11727b51 mov ebp, esp */
  EBP = (ESP);
  /* 11727b53 cmp dword ptr [0x117529f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727b5a je 0x11727b6e */
  if (C.zf) goto L_11727b6e;
  /* 11727b5c cmp dword ptr [0x117529f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727b63 jne 0x11727b97 */
  if (!C.zf) goto L_11727b97;
  /* 11727b65 cmp dword ptr [0x117529f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727b6c jne 0x11727b97 */
  if (!C.zf) goto L_11727b97;
L_11727b6e:;
  /* 11727b6e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11727b73 call 0x11727ba0 */
  push32(0x11727b78u); f_11727ba0();
  /* 11727b78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727b7b cmp dword ptr [0x11752bc4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bc4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727b82 je 0x11727b8a */
  if (C.zf) goto L_11727b8a;
  /* 11727b84 call dword ptr [0x11752bc4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752bc4))), 0x11727b8au);
L_11727b8a:;
  /* 11727b8a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11727b8f call 0x11727ba0 */
  push32(0x11727b94u); f_11727ba0();
  /* 11727b94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727b97:;
  /* 11727b97 pop ebp */
  EBP = (pop32());
  /* 11727b98 ret  */
  ESPCHK(0x11727b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007ba0 @ 0x11727ba0 (447 bytes, 131 insns) */
void f_11727ba0(void) {
  FTRACE(0x11727ba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727ba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11727ba1 mov ebp, esp */
  EBP = (ESP);
  /* 11727ba3 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727ba9 push ebx */
  push32((uint32_t)(EBX));
  /* 11727baa push esi */
  push32((uint32_t)(ESI));
  /* 11727bab push edi */
  push32((uint32_t)(EDI));
  /* 11727bac mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11727bb3 jmp 0x11727bbe */
  goto L_11727bbe;
L_11727bb5:;
  /* 11727bb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727bb8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727bbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11727bbe:;
  /* 11727bbe cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727bc2 jae 0x11727bd7 */
  if (!C.cf) goto L_11727bd7;
  /* 11727bc4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727bc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727bca cmp edx, dword ptr [ecx*8 + 0x11750ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727bd1 jne 0x11727bd5 */
  if (!C.zf) goto L_11727bd5;
  /* 11727bd3 jmp 0x11727bd7 */
  goto L_11727bd7;
L_11727bd5:;
  /* 11727bd5 jmp 0x11727bb5 */
  goto L_11727bb5;
L_11727bd7:;
  /* 11727bd7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727bda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727bdd cmp ecx, dword ptr [eax*8 + 0x11750ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727be4 jne 0x11727d58 */
  if (!C.zf) goto L_11727d58;
  /* 11727bea cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727bf1 je 0x11727c14 */
  if (C.zf) goto L_11727c14;
  /* 11727bf3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727bf6 mov eax, dword ptr [edx*8 + 0x11750ea4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11750ea4)));
  /* 11727bfd push eax */
  push32((uint32_t)(EAX));
  /* 11727bfe push 0 */
  push32((uint32_t)(0x0u));
  /* 11727c00 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727c02 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727c04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11727c06 call 0x11723380 */
  push32(0x11727c0bu); f_11723380();
  /* 11727c0b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727c0e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727c11 jne 0x11727c14 */
  if (!C.zf) goto L_11727c14;
  /* 11727c13 int3  */
  x86_unimpl("int3 @ 0x11727c13");
L_11727c14:;
  /* 11727c14 cmp dword ptr [0x117529f4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727c1b je 0x11727c2f */
  if (C.zf) goto L_11727c2f;
  /* 11727c1d cmp dword ptr [0x117529f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117529f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727c24 jne 0x11727c68 */
  if (!C.zf) goto L_11727c68;
  /* 11727c26 cmp dword ptr [0x117529f8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117529f8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727c2d jne 0x11727c68 */
  if (!C.zf) goto L_11727c68;
L_11727c2f:;
  /* 11727c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 11727c31 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11727c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11727c35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727c38 mov eax, dword ptr [edx*8 + 0x11750ea4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11750ea4)));
  /* 11727c3f push eax */
  push32((uint32_t)(EAX));
  /* 11727c40 call 0x117280a0 */
  push32(0x11727c45u); f_117280a0();
  /* 11727c45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727c48 push eax */
  push32((uint32_t)(EAX));
  /* 11727c49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727c4c mov edx, dword ptr [ecx*8 + 0x11750ea4] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11750ea4)));
  /* 11727c53 push edx */
  push32((uint32_t)(EDX));
  /* 11727c54 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11727c56 call dword ptr [0x117552e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e0))), 0x11727c5cu);
  /* 11727c5c push eax */
  push32((uint32_t)(EAX));
  /* 11727c5d call dword ptr [0x117552e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552e4))), 0x11727c63u);
  /* 11727c63 jmp 0x11727d58 */
  goto L_11727d58;
L_11727c68:;
  /* 11727c68 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727c6f je 0x11727d58 */
  if (C.zf) goto L_11727d58;
  /* 11727c75 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11727c7a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11727c80 push eax */
  push32((uint32_t)(EAX));
  /* 11727c81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727c83 call dword ptr [0x117552fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552fc))), 0x11727c89u);
  /* 11727c89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11727c8b jne 0x11727ca1 */
  if (!C.zf) goto L_11727ca1;
  /* 11727c8d push 0x1174d3f8 */
  push32((uint32_t)(0x1174d3f8u));
  /* 11727c92 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11727c98 push ecx */
  push32((uint32_t)(ECX));
  /* 11727c99 call 0x11728220 */
  push32(0x11727c9eu); f_11728220();
  /* 11727c9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727ca1:;
  /* 11727ca1 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11727ca7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11727caa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727cad push eax */
  push32((uint32_t)(EAX));
  /* 11727cae call 0x117280a0 */
  push32(0x11727cb3u); f_117280a0();
  /* 11727cb3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727cb6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727cb9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727cbc jbe 0x11727cea */
  if ((C.cf||C.zf)) goto L_11727cea;
  /* 11727cbe lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11727cc4 push ecx */
  push32((uint32_t)(ECX));
  /* 11727cc5 call 0x117280a0 */
  push32(0x11727ccau); f_117280a0();
  /* 11727cca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727cd0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11727cd4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11727cd7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11727cd9 push 0x1174d3f4 */
  push32((uint32_t)(0x1174d3f4u));
  /* 11727cde mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727ce1 push ecx */
  push32((uint32_t)(ECX));
  /* 11727ce2 call 0x11728a90 */
  push32(0x11727ce7u); f_11728a90();
  /* 11727ce7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727cea:;
  /* 11727cea push 0x1174dea0 */
  push32((uint32_t)(0x1174dea0u));
  /* 11727cef lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11727cf5 push edx */
  push32((uint32_t)(EDX));
  /* 11727cf6 call 0x11728220 */
  push32(0x11727cfbu); f_11728220();
  /* 11727cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727cfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727d01 push eax */
  push32((uint32_t)(EAX));
  /* 11727d02 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11727d08 push ecx */
  push32((uint32_t)(ECX));
  /* 11727d09 call 0x11728230 */
  push32(0x11727d0eu); f_11728230();
  /* 11727d0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727d11 push 0x1174d36c */
  push32((uint32_t)(0x1174d36cu));
  /* 11727d16 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11727d1c push edx */
  push32((uint32_t)(EDX));
  /* 11727d1d call 0x11728230 */
  push32(0x11727d22u); f_11728230();
  /* 11727d22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727d25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727d28 mov ecx, dword ptr [eax*8 + 0x11750ea4] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11750ea4)));
  /* 11727d2f push ecx */
  push32((uint32_t)(ECX));
  /* 11727d30 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11727d36 push edx */
  push32((uint32_t)(EDX));
  /* 11727d37 call 0x11728230 */
  push32(0x11727d3cu); f_11728230();
  /* 11727d3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727d3f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11727d44 push 0x1174de78 */
  push32((uint32_t)(0x1174de78u));
  /* 11727d49 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11727d4f push eax */
  push32((uint32_t)(EAX));
  /* 11727d50 call 0x117289d0 */
  push32(0x11727d55u); f_117289d0();
  /* 11727d55 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727d58:;
  /* 11727d58 pop edi */
  EDI = (pop32());
  /* 11727d59 pop esi */
  ESI = (pop32());
  /* 11727d5a pop ebx */
  EBX = (pop32());
  /* 11727d5b mov esp, ebp */
  ESP = (EBP);
  /* 11727d5d pop ebp */
  EBP = (pop32());
  /* 11727d5e ret  */
  ESPCHK(0x11727ba0u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11727d60 (80 bytes, 27 insns) */
void f_11727d60(void) {
  FTRACE(0x11727d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11727d61 mov ebp, esp */
  EBP = (ESP);
  /* 11727d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11727d64 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11727d6b jmp 0x11727d76 */
  goto L_11727d76;
L_11727d6d:;
  /* 11727d6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727d70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727d73 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11727d76:;
  /* 11727d76 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727d7a jae 0x11727d8f */
  if (!C.cf) goto L_11727d8f;
  /* 11727d7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727d7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727d82 cmp edx, dword ptr [ecx*8 + 0x11750ea0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727d89 jne 0x11727d8d */
  if (!C.zf) goto L_11727d8d;
  /* 11727d8b jmp 0x11727d8f */
  goto L_11727d8f;
L_11727d8d:;
  /* 11727d8d jmp 0x11727d6d */
  goto L_11727d6d;
L_11727d8f:;
  /* 11727d8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727d92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727d95 cmp ecx, dword ptr [eax*8 + 0x11750ea0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11750ea0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727d9c jne 0x11727daa */
  if (!C.zf) goto L_11727daa;
  /* 11727d9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727da1 mov eax, dword ptr [edx*8 + 0x11750ea4] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11750ea4)));
  /* 11727da8 jmp 0x11727dac */
  goto L_11727dac;
L_11727daa:;
  /* 11727daa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11727dac:;
  /* 11727dac mov esp, ebp */
  ESP = (EBP);
  /* 11727dae pop ebp */
  EBP = (pop32());
  /* 11727daf ret  */
  ESPCHK(0x11727d60u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11727db0 (66 bytes, 28 insns) */
void f_11727db0(void) {
  FTRACE(0x11727db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727db0 push ebp */
  push32((uint32_t)(EBP));
  /* 11727db1 mov ebp, esp */
  EBP = (ESP);
  /* 11727db3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727db7 jne 0x11727dd7 */
  if (!C.zf) goto L_11727dd7;
  /* 11727db9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727dbd jge 0x11727dd7 */
  if ((C.sf==C.of)) goto L_11727dd7;
  /* 11727dbf push 1 */
  push32((uint32_t)(0x1u));
  /* 11727dc1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727dc4 push eax */
  push32((uint32_t)(EAX));
  /* 11727dc5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11727dc9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727dcc push edx */
  push32((uint32_t)(EDX));
  /* 11727dcd call 0x11727e00 */
  push32(0x11727dd2u); f_11727e00();
  /* 11727dd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727dd5 jmp 0x11727ded */
  goto L_11727ded;
L_11727dd7:;
  /* 11727dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727dd9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727ddc push eax */
  push32((uint32_t)(EAX));
  /* 11727ddd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727de0 push ecx */
  push32((uint32_t)(ECX));
  /* 11727de1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727de4 push edx */
  push32((uint32_t)(EDX));
  /* 11727de5 call 0x11727e00 */
  push32(0x11727deau); f_11727e00();
  /* 11727dea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11727ded:;
  /* 11727ded mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727df0 pop ebp */
  EBP = (pop32());
  /* 11727df1 ret  */
  ESPCHK(0x11727db0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11727e00 (194 bytes, 71 insns) */
void f_11727e00(void) {
  FTRACE(0x11727e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11727e01 mov ebp, esp */
  EBP = (ESP);
  /* 11727e03 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727e06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727e09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11727e0c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727e10 je 0x11727e29 */
  if (C.zf) goto L_11727e29;
  /* 11727e12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e15 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11727e18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e1b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727e1e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11727e21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727e24 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11727e26 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11727e29:;
  /* 11727e29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e2c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11727e2f:;
  /* 11727e2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727e32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11727e34 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11727e37 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11727e3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727e3d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11727e3f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11727e42 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11727e45 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727e49 jbe 0x11727e61 */
  if ((C.cf||C.zf)) goto L_11727e61;
  /* 11727e4b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727e4e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727e51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e54 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11727e56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727e5c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11727e5f jmp 0x11727e75 */
  goto L_11727e75;
L_11727e61:;
  /* 11727e61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727e64 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727e67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e6a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11727e6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e6f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727e72 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11727e75:;
  /* 11727e75 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727e79 ja 0x11727e2f */
  if ((!C.cf&&!C.zf)) goto L_11727e2f;
  /* 11727e7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e7e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11727e81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e84 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727e87 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11727e8a:;
  /* 11727e8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e8d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727e8f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11727e92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727e98 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11727e9a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11727e9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727e9f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11727ea2 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11727ea4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727ea7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727eaa mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11727ead mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727eb0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727eb3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11727eb6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11727eb9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727ebc jb 0x11727e8a */
  if (C.cf) goto L_11727e8a;
  /* 11727ebe mov esp, ebp */
  ESP = (EBP);
  /* 11727ec0 pop ebp */
  EBP = (pop32());
  /* 11727ec1 ret  */
  ESPCHK(0x11727e00u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11727ed0 (63 bytes, 24 insns) */
void f_11727ed0(void) {
  FTRACE(0x11727ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11727ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11727ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 11727ed4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727ed8 jne 0x11727ee9 */
  if (!C.zf) goto L_11727ee9;
  /* 11727eda cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727ede jge 0x11727ee9 */
  if ((C.sf==C.of)) goto L_11727ee9;
  /* 11727ee0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11727ee7 jmp 0x11727ef0 */
  goto L_11727ef0;
L_11727ee9:;
  /* 11727ee9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11727ef0:;
  /* 11727ef0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727ef3 push eax */
  push32((uint32_t)(EAX));
  /* 11727ef4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 11727ef8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727efb push edx */
  push32((uint32_t)(EDX));
  /* 11727efc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727eff push eax */
  push32((uint32_t)(EAX));
  /* 11727f00 call 0x11727e00 */
  push32(0x11727f05u); f_11727e00();
  /* 11727f05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727f08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727f0b mov esp, ebp */
  ESP = (EBP);
  /* 11727f0d pop ebp */
  EBP = (pop32());
  /* 11727f0e ret  */
  ESPCHK(0x11727ed0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11727f10 (30 bytes, 14 insns) */
void f_11727f10(void) {
  FTRACE(0x11727f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11727f11 mov ebp, esp */
  EBP = (ESP);
  /* 11727f13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11727f15 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727f18 push eax */
  push32((uint32_t)(EAX));
  /* 11727f19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727f1c push ecx */
  push32((uint32_t)(ECX));
  /* 11727f1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727f20 push edx */
  push32((uint32_t)(EDX));
  /* 11727f21 call 0x11727e00 */
  push32(0x11727f26u); f_11727e00();
  /* 11727f26 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11727f29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727f2c pop ebp */
  EBP = (pop32());
  /* 11727f2d ret  */
  ESPCHK(0x11727f10u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11727f30 (72 bytes, 28 insns) */
void f_11727f30(void) {
  FTRACE(0x11727f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11727f31 mov ebp, esp */
  EBP = (ESP);
  /* 11727f33 push ecx */
  push32((uint32_t)(ECX));
  /* 11727f34 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727f38 jne 0x11727f51 */
  if (!C.zf) goto L_11727f51;
  /* 11727f3a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727f3e jg 0x11727f51 */
  if ((!C.zf&&C.sf==C.of)) goto L_11727f51;
  /* 11727f40 jl 0x11727f48 */
  if ((C.sf!=C.of)) goto L_11727f48;
  /* 11727f42 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727f46 jae 0x11727f51 */
  if (!C.cf) goto L_11727f51;
L_11727f48:;
  /* 11727f48 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11727f4f jmp 0x11727f58 */
  goto L_11727f58;
L_11727f51:;
  /* 11727f51 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11727f58:;
  /* 11727f58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727f5b push eax */
  push32((uint32_t)(EAX));
  /* 11727f5c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727f5f push ecx */
  push32((uint32_t)(ECX));
  /* 11727f60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727f63 push edx */
  push32((uint32_t)(EDX));
  /* 11727f64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727f67 push eax */
  push32((uint32_t)(EAX));
  /* 11727f68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727f6b push ecx */
  push32((uint32_t)(ECX));
  /* 11727f6c call 0x11727f80 */
  push32(0x11727f71u); f_11727f80();
  /* 11727f71 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727f74 mov esp, ebp */
  ESP = (EBP);
  /* 11727f76 pop ebp */
  EBP = (pop32());
  /* 11727f77 ret  */
  ESPCHK(0x11727f30u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11727f80 (242 bytes, 91 insns) */
void f_11727f80(void) {
  FTRACE(0x11727f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11727f80 push ebp */
  push32((uint32_t)(EBP));
  /* 11727f81 mov ebp, esp */
  EBP = (ESP);
  /* 11727f83 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11727f86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11727f89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11727f8c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727f90 je 0x11727fb4 */
  if (C.zf) goto L_11727fb4;
  /* 11727f92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727f95 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11727f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727f9b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727f9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11727fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727fa4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11727fa6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727fa9 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727fac neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11727fae mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11727fb1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11727fb4:;
  /* 11727fb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727fb7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11727fba:;
  /* 11727fba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727fbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11727fbf push ecx */
  push32((uint32_t)(ECX));
  /* 11727fc0 push eax */
  push32((uint32_t)(EAX));
  /* 11727fc1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727fc4 push edx */
  push32((uint32_t)(EDX));
  /* 11727fc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727fc8 push eax */
  push32((uint32_t)(EAX));
  /* 11727fc9 call 0x1172c340 */
  push32(0x11727fceu); f_1172c340();
  /* 11727fce mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11727fd1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11727fd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11727fd6 push edx */
  push32((uint32_t)(EDX));
  /* 11727fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11727fd8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11727fdb push eax */
  push32((uint32_t)(EAX));
  /* 11727fdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11727fdf push ecx */
  push32((uint32_t)(ECX));
  /* 11727fe0 call 0x1172c2d0 */
  push32(0x11727fe5u); f_1172c2d0();
  /* 11727fe5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11727fe8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11727feb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11727fef jbe 0x11728007 */
  if ((C.cf||C.zf)) goto L_11728007;
  /* 11727ff1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11727ff4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11727ff7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727ffa mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11727ffc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11727fff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728002 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11728005 jmp 0x1172801b */
  goto L_1172801b;
L_11728007:;
  /* 11728007 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172800a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172800d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728010 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11728012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728015 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728018 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172801b:;
  /* 1172801b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172801f ja 0x11727fba */
  if ((!C.cf&&!C.zf)) goto L_11727fba;
  /* 11728021 jb 0x11728029 */
  if (C.cf) goto L_11728029;
  /* 11728023 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728027 ja 0x11727fba */
  if ((!C.cf&&!C.zf)) goto L_11727fba;
L_11728029:;
  /* 11728029 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172802c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1172802f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728032 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728035 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11728038:;
  /* 11728038 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172803b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172803d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11728040 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728043 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728046 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11728048 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1172804a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172804d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11728050 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11728052 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728055 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728058 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172805b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172805e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728061 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11728064 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728067 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172806a jb 0x11728038 */
  if (C.cf) goto L_11728038;
  /* 1172806c mov esp, ebp */
  ESP = (EBP);
  /* 1172806e pop ebp */
  EBP = (pop32());
  /* 1172806f ret 0x14 */
  ESPCHK(0x11727f80u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11728080 (31 bytes, 15 insns) */
void f_11728080(void) {
  FTRACE(0x11728080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728080 push ebp */
  push32((uint32_t)(EBP));
  /* 11728081 mov ebp, esp */
  EBP = (ESP);
  /* 11728083 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728085 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11728088 push eax */
  push32((uint32_t)(EAX));
  /* 11728089 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172808c push ecx */
  push32((uint32_t)(ECX));
  /* 1172808d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728090 push edx */
  push32((uint32_t)(EDX));
  /* 11728091 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728094 push eax */
  push32((uint32_t)(EAX));
  /* 11728095 call 0x11727f80 */
  push32(0x1172809au); f_11727f80();
  /* 1172809a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172809d pop ebp */
  EBP = (pop32());
  /* 1172809e ret  */
  ESPCHK(0x11728080u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x117280a0 (123 bytes, 44 insns) */
void f_117280a0(void) {
  FTRACE(0x117280a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117280a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117280a4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117280aa je 0x117280c0 */
  if (C.zf) goto L_117280c0;
L_117280ac:;
  /* 117280ac mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 117280ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117280af test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117280b1 je 0x117280f3 */
  if (C.zf) goto L_117280f3;
  /* 117280b3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117280b9 jne 0x117280ac */
  if (!C.zf) goto L_117280ac;
  /* 117280bb add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_117280c0:;
  /* 117280c0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117280c2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117280c7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117280c9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117280cc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117280ce add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117280d1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117280d6 je 0x117280c0 */
  if (C.zf) goto L_117280c0;
  /* 117280d8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 117280db test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 117280dd je 0x11728111 */
  if (C.zf) goto L_11728111;
  /* 117280df test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 117280e1 je 0x11728107 */
  if (C.zf) goto L_11728107;
  /* 117280e3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 117280e8 je 0x117280fd */
  if (C.zf) goto L_117280fd;
  /* 117280ea test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 117280ef je 0x117280f3 */
  if (C.zf) goto L_117280f3;
  /* 117280f1 jmp 0x117280c0 */
  goto L_117280c0;
L_117280f3:;
  /* 117280f3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 117280f6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 117280fa sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117280fc ret  */
  ESPCHK(0x117280a0u, _esp0);
  ESP += 4; return;
L_117280fd:;
  /* 117280fd lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11728100 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11728104 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728106 ret  */
  ESPCHK(0x117280a0u, _esp0);
  ESP += 4; return;
L_11728107:;
  /* 11728107 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 1172810a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1172810e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728110 ret  */
  ESPCHK(0x117280a0u, _esp0);
  ESP += 4; return;
L_11728111:;
  /* 11728111 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11728114 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11728118 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172811a ret  */
  ESPCHK(0x117280a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008120 @ 0x11728120 (249 bytes, 93 insns) */
void f_11728120(void) {
  FTRACE(0x11728120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728120 push ebp */
  push32((uint32_t)(EBP));
  /* 11728121 mov ebp, esp */
  EBP = (ESP);
  /* 11728123 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728126 push ebx */
  push32((uint32_t)(EBX));
  /* 11728127 push esi */
  push32((uint32_t)(ESI));
  /* 11728128 push edi */
  push32((uint32_t)(EDI));
  /* 11728129 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1172812c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1172812f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11728132 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11728135:;
  /* 11728135 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728139 jne 0x11728159 */
  if (!C.zf) goto L_11728159;
  /* 1172813b push 0x1174ded8 */
  push32((uint32_t)(0x1174ded8u));
  /* 11728140 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728142 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11728144 push 0x1174decc */
  push32((uint32_t)(0x1174deccu));
  /* 11728149 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172814b call 0x11723380 */
  push32(0x11728150u); f_11723380();
  /* 11728150 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728153 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728156 jne 0x11728159 */
  if (!C.zf) goto L_11728159;
  /* 11728158 int3  */
  x86_unimpl("int3 @ 0x11728158");
L_11728159:;
  /* 11728159 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172815b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172815d jne 0x11728135 */
  if (!C.zf) goto L_11728135;
L_1172815f:;
  /* 1172815f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728163 jne 0x11728183 */
  if (!C.zf) goto L_11728183;
  /* 11728165 push 0x1174debc */
  push32((uint32_t)(0x1174debcu));
  /* 1172816a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172816c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1172816e push 0x1174decc */
  push32((uint32_t)(0x1174deccu));
  /* 11728173 push 2 */
  push32((uint32_t)(0x2u));
  /* 11728175 call 0x11723380 */
  push32(0x1172817au); f_11723380();
  /* 1172817a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172817d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728180 jne 0x11728183 */
  if (!C.zf) goto L_11728183;
  /* 11728182 int3  */
  x86_unimpl("int3 @ 0x11728182");
L_11728183:;
  /* 11728183 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728185 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728187 jne 0x1172815f */
  if (!C.zf) goto L_1172815f;
  /* 11728189 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172818c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11728193 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728199 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1172819c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172819f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117281a2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 117281a4 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281a7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117281aa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 117281ad mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117281b0 push edx */
  push32((uint32_t)(EDX));
  /* 117281b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 117281b4 push eax */
  push32((uint32_t)(EAX));
  /* 117281b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281b8 push ecx */
  push32((uint32_t)(ECX));
  /* 117281b9 call 0x1172c640 */
  push32(0x117281beu); f_1172c640();
  /* 117281be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117281c1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117281c4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281c7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117281ca sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117281cd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281d0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117281d3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281d6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117281da jl 0x117281fe */
  if ((C.sf!=C.of)) goto L_117281fe;
  /* 117281dc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117281e1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 117281e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117281e6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 117281ec mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 117281ef mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281f2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117281f4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117281f7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117281fa mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 117281fc jmp 0x1172820f */
  goto L_1172820f;
L_117281fe:;
  /* 117281fe mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728201 push eax */
  push32((uint32_t)(EAX));
  /* 11728202 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728204 call 0x1172c3c0 */
  push32(0x11728209u); f_1172c3c0();
  /* 11728209 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172820c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1172820f:;
  /* 1172820f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11728212 pop edi */
  EDI = (pop32());
  /* 11728213 pop esi */
  ESI = (pop32());
  /* 11728214 pop ebx */
  EBX = (pop32());
  /* 11728215 mov esp, ebp */
  ESP = (EBP);
  /* 11728217 pop ebp */
  EBP = (pop32());
  /* 11728218 ret  */
  ESPCHK(0x11728120u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x11728220 (7 bytes, 3 insns) */
void f_11728220(void) {
  FTRACE(0x11728220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728220 push edi */
  push32((uint32_t)(EDI));
  /* 11728221 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11728225 jmp 0x11728291 */
  jmp_ind(0x11728291u); return;
}

/* FUN_10008230 @ 0x11728230 (224 bytes, 84 insns) */
void f_11728230(void) {
  FTRACE(0x11728230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728230 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11728234 push edi */
  push32((uint32_t)(EDI));
  /* 11728235 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1172823b je 0x1172824c */
  if (C.zf) goto L_1172824c;
L_1172823d:;
  /* 1172823d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 1172823f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11728240 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11728242 je 0x1172827f */
  if (C.zf) goto L_1172827f;
  /* 11728244 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1172824a jne 0x1172823d */
  if (!C.zf) goto L_1172823d;
L_1172824c:;
  /* 1172824c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1172824e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11728253 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728255 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11728258 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172825a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172825d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11728262 je 0x1172824c */
  if (C.zf) goto L_1172824c;
  /* 11728264 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11728267 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11728269 je 0x1172828e */
  if (C.zf) goto L_1172828e;
  /* 1172826b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1172826d je 0x11728289 */
  if (C.zf) goto L_11728289;
  /* 1172826f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11728274 je 0x11728284 */
  if (C.zf) goto L_11728284;
  /* 11728276 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 1172827b je 0x1172827f */
  if (C.zf) goto L_1172827f;
  /* 1172827d jmp 0x1172824c */
  goto L_1172824c;
L_1172827f:;
  /* 1172827f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11728282 jmp 0x11728291 */
  goto L_11728291;
L_11728284:;
  /* 11728284 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11728287 jmp 0x11728291 */
  goto L_11728291;
L_11728289:;
  /* 11728289 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 1172828c jmp 0x11728291 */
  goto L_11728291;
L_1172828e:;
  /* 1172828e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11728291:;
  /* 11728291 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11728295 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 1172829b je 0x117282b6 */
  if (C.zf) goto L_117282b6;
L_1172829d:;
  /* 1172829d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172829f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 117282a0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117282a2 je 0x11728308 */
  if (C.zf) goto L_11728308;
  /* 117282a4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 117282a6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 117282a7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 117282ad jne 0x1172829d */
  if (!C.zf) goto L_1172829d;
  /* 117282af jmp 0x117282b6 */
  goto L_117282b6;
L_117282b1:;
  /* 117282b1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117282b3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_117282b6:;
  /* 117282b6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 117282bb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 117282bd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117282bf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117282c2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117282c4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117282c6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117282c9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 117282ce je 0x117282b1 */
  if (C.zf) goto L_117282b1;
  /* 117282d0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 117282d2 je 0x11728308 */
  if (C.zf) goto L_11728308;
  /* 117282d4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 117282d6 je 0x117282ff */
  if (C.zf) goto L_117282ff;
  /* 117282d8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 117282de je 0x117282f2 */
  if (C.zf) goto L_117282f2;
  /* 117282e0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 117282e6 je 0x117282ea */
  if (C.zf) goto L_117282ea;
  /* 117282e8 jmp 0x117282b1 */
  goto L_117282b1;
L_117282ea:;
  /* 117282ea mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 117282ec mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117282f0 pop edi */
  EDI = (pop32());
  /* 117282f1 ret  */
  ESPCHK(0x11728230u, _esp0);
  ESP += 4; return;
L_117282f2:;
  /* 117282f2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 117282f5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 117282f9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 117282fd pop edi */
  EDI = (pop32());
  /* 117282fe ret  */
  ESPCHK(0x11728230u, _esp0);
  ESP += 4; return;
L_117282ff:;
  /* 117282ff mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11728302 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11728306 pop edi */
  EDI = (pop32());
  /* 11728307 ret  */
  ESPCHK(0x11728230u, _esp0);
  ESP += 4; return;
L_11728308:;
  /* 11728308 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1172830a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1172830e pop edi */
  EDI = (pop32());
  /* 1172830f ret  */
  ESPCHK(0x11728230u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x11728310 (243 bytes, 91 insns) */
void f_11728310(void) {
  FTRACE(0x11728310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728310 push ebp */
  push32((uint32_t)(EBP));
  /* 11728311 mov ebp, esp */
  EBP = (ESP);
  /* 11728313 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728316 push ebx */
  push32((uint32_t)(EBX));
  /* 11728317 push esi */
  push32((uint32_t)(ESI));
  /* 11728318 push edi */
  push32((uint32_t)(EDI));
  /* 11728319 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1172831c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1172831f:;
  /* 1172831f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728323 jne 0x11728343 */
  if (!C.zf) goto L_11728343;
  /* 11728325 push 0x1174ded8 */
  push32((uint32_t)(0x1174ded8u));
  /* 1172832a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172832c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 1172832e push 0x1174dee8 */
  push32((uint32_t)(0x1174dee8u));
  /* 11728333 push 2 */
  push32((uint32_t)(0x2u));
  /* 11728335 call 0x11723380 */
  push32(0x1172833au); f_11723380();
  /* 1172833a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172833d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728340 jne 0x11728343 */
  if (!C.zf) goto L_11728343;
  /* 11728342 int3  */
  x86_unimpl("int3 @ 0x11728342");
L_11728343:;
  /* 11728343 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11728345 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11728347 jne 0x1172831f */
  if (!C.zf) goto L_1172831f;
L_11728349:;
  /* 11728349 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172834d jne 0x1172836d */
  if (!C.zf) goto L_1172836d;
  /* 1172834f push 0x1174debc */
  push32((uint32_t)(0x1174debcu));
  /* 11728354 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728356 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11728358 push 0x1174dee8 */
  push32((uint32_t)(0x1174dee8u));
  /* 1172835d push 2 */
  push32((uint32_t)(0x2u));
  /* 1172835f call 0x11723380 */
  push32(0x11728364u); f_11723380();
  /* 11728364 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172836a jne 0x1172836d */
  if (!C.zf) goto L_1172836d;
  /* 1172836c int3  */
  x86_unimpl("int3 @ 0x1172836c");
L_1172836d:;
  /* 1172836d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172836f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11728371 jne 0x11728349 */
  if (!C.zf) goto L_11728349;
  /* 11728373 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728376 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 1172837d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728380 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728383 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11728386 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728389 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172838c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172838e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11728391 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728394 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11728397 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172839a push ecx */
  push32((uint32_t)(ECX));
  /* 1172839b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172839e push edx */
  push32((uint32_t)(EDX));
  /* 1172839f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283a2 push eax */
  push32((uint32_t)(EAX));
  /* 117283a3 call 0x1172c640 */
  push32(0x117283a8u); f_1172c640();
  /* 117283a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117283ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117283ae mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283b1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117283b4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117283b7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283ba mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 117283bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283c0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117283c4 jl 0x117283e8 */
  if ((C.sf!=C.of)) goto L_117283e8;
  /* 117283c6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283c9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117283cb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 117283ce xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 117283d0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 117283d6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 117283d9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117283de add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117283e1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283e4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117283e6 jmp 0x117283f9 */
  goto L_117283f9;
L_117283e8:;
  /* 117283e8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117283eb push edx */
  push32((uint32_t)(EDX));
  /* 117283ec push 0 */
  push32((uint32_t)(0x0u));
  /* 117283ee call 0x1172c3c0 */
  push32(0x117283f3u); f_1172c3c0();
  /* 117283f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117283f6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_117283f9:;
  /* 117283f9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 117283fc pop edi */
  EDI = (pop32());
  /* 117283fd pop esi */
  ESI = (pop32());
  /* 117283fe pop ebx */
  EBX = (pop32());
  /* 117283ff mov esp, ebp */
  ESP = (EBP);
  /* 11728401 pop ebp */
  EBP = (pop32());
  /* 11728402 ret  */
  ESPCHK(0x11728310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008410 @ 0x11728410 (47 bytes, 17 insns) */
void f_11728410(void) {
  FTRACE(0x11728410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728410 push ecx */
  push32((uint32_t)(ECX));
  /* 11728411 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728416 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1172841a jb 0x11728430 */
  if (C.cf) goto L_11728430;
L_1172841c:;
  /* 1172841c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728422 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728427 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11728429 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172842e jae 0x1172841c */
  if (!C.cf) goto L_1172841c;
L_11728430:;
  /* 11728430 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728432 mov eax, esp */
  EAX = (ESP);
  /* 11728434 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11728436 mov esp, ecx */
  ESP = (ECX);
  /* 11728438 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172843a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172843d push eax */
  push32((uint32_t)(EAX));
  /* 1172843e ret  */
  ESPCHK(0x11728410u, _esp0);
  ESP += 4; return;
}

/* FUN_10008440 @ 0x11728440 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11728440(void) {
  FTRACE(0x11728440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728440 push ebp */
  push32((uint32_t)(EBP));
  /* 11728441 mov ebp, esp */
  EBP = (ESP);
  /* 11728443 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728446 push esi */
  push32((uint32_t)(ESI));
  /* 11728447 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172844b je 0x11728453 */
  if (C.zf) goto L_11728453;
  /* 1172844d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728451 jne 0x11728458 */
  if (!C.zf) goto L_11728458;
L_11728453:;
  /* 11728453 jmp 0x11728628 */
  goto L_11728628;
L_11728458:;
  /* 11728458 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172845c je 0x11728474 */
  if (C.zf) goto L_11728474;
  /* 1172845e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728462 je 0x11728474 */
  if (C.zf) goto L_11728474;
  /* 11728464 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728468 je 0x11728474 */
  if (C.zf) goto L_11728474;
  /* 1172846a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172846e jne 0x11728551 */
  if (!C.zf) goto L_11728551;
L_11728474:;
  /* 11728474 push 1 */
  push32((uint32_t)(0x1u));
  /* 11728476 call 0x11723b00 */
  push32(0x1172847bu); f_11723b00();
  /* 1172847b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172847e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728482 je 0x1172848a */
  if (C.zf) goto L_1172848a;
  /* 11728484 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728488 jne 0x117284cf */
  if (!C.zf) goto L_117284cf;
L_1172848a:;
  /* 1172848a cmp dword ptr [0x11752bd8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bd8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728491 jne 0x117284cf */
  if (!C.zf) goto L_117284cf;
  /* 11728493 push 1 */
  push32((uint32_t)(0x1u));
  /* 11728495 push 0x11728670 */
  push32((uint32_t)(0x11728670u));
  /* 1172849a call dword ptr [0x11755368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755368))), 0x117284a0u);
  /* 117284a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117284a3 jne 0x117284b1 */
  if (!C.zf) goto L_117284b1;
  /* 117284a5 mov dword ptr [0x11752bd8], 1 */
  w32((uint32_t)(0x11752bd8), (0x1u));
  /* 117284af jmp 0x117284cf */
  goto L_117284cf;
L_117284b1:;
  /* 117284b1 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x117284b7u);
  /* 117284b7 mov esi, eax */
  ESI = (EAX);
  /* 117284b9 call 0x1172d590 */
  push32(0x117284beu); f_1172d590();
  /* 117284be mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 117284c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 117284c2 call 0x11723ba0 */
  push32(0x117284c7u); f_11723ba0();
  /* 117284c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117284ca jmp 0x11728628 */
  goto L_11728628;
L_117284cf:;
  /* 117284cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117284d2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 117284d5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 117284d8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117284db mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 117284de cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117284e2 ja 0x11728542 */
  if ((!C.cf&&!C.zf)) goto L_11728542;
  /* 117284e4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 117284e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 117284e9 mov dl, byte ptr [eax + 0x1172864f] */
  DL = (r8((uint32_t)(EAX + 0x1172864f)));
  /* 117284ef jmp dword ptr [edx*4 + 0x1172863b] */
  switch (EDX) {
    case 0: goto L_117284f6;
    case 1: goto L_11728530;
    case 2: goto L_1172850a;
    case 3: goto L_1172851d;
    case 4: goto L_11728542;
    default: x86_unimpl("switch@0x117284ef out of table"); return;
  }
L_117284f6:;
  /* 117284f6 mov ecx, dword ptr [0x11752bc8] */
  ECX = (r32((uint32_t)(0x11752bc8)));
  /* 117284fc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117284ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728502 mov dword ptr [0x11752bc8], edx */
  w32((uint32_t)(0x11752bc8), (EDX));
  /* 11728508 jmp 0x11728542 */
  goto L_11728542;
L_1172850a:;
  /* 1172850a mov eax, dword ptr [0x11752bcc] */
  EAX = (r32((uint32_t)(0x11752bcc)));
  /* 1172850f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11728512 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728515 mov dword ptr [0x11752bcc], ecx */
  w32((uint32_t)(0x11752bcc), (ECX));
  /* 1172851b jmp 0x11728542 */
  goto L_11728542;
L_1172851d:;
  /* 1172851d mov edx, dword ptr [0x11752bd0] */
  EDX = (r32((uint32_t)(0x11752bd0)));
  /* 11728523 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11728526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728529 mov dword ptr [0x11752bd0], eax */
  w32((uint32_t)(0x11752bd0), (EAX));
  /* 1172852e jmp 0x11728542 */
  goto L_11728542;
L_11728530:;
  /* 11728530 mov ecx, dword ptr [0x11752bd4] */
  ECX = (r32((uint32_t)(0x11752bd4)));
  /* 11728536 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11728539 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172853c mov dword ptr [0x11752bd4], edx */
  w32((uint32_t)(0x11752bd4), (EDX));
L_11728542:;
  /* 11728542 push 1 */
  push32((uint32_t)(0x1u));
  /* 11728544 call 0x11723ba0 */
  push32(0x11728549u); f_11723ba0();
  /* 11728549 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172854c jmp 0x11728623 */
  goto L_11728623;
L_11728551:;
  /* 11728551 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728555 je 0x11728568 */
  if (C.zf) goto L_11728568;
  /* 11728557 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172855b je 0x11728568 */
  if (C.zf) goto L_11728568;
  /* 1172855d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728561 je 0x11728568 */
  if (C.zf) goto L_11728568;
  /* 11728563 jmp 0x11728628 */
  goto L_11728628;
L_11728568:;
  /* 11728568 call 0x11726900 */
  push32(0x1172856du); f_11726900();
  /* 1172856d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11728570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728573 cmp dword ptr [eax + 0x50], 0x11751150 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11751150u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172857a jne 0x117285c5 */
  if (!C.zf) goto L_117285c5;
  /* 1172857c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11728581 push 0x1174def4 */
  push32((uint32_t)(0x1174def4u));
  /* 11728586 push 2 */
  push32((uint32_t)(0x2u));
  /* 11728588 mov ecx, dword ptr [0x117511d0] */
  ECX = (r32((uint32_t)(0x117511d0)));
  /* 1172858e push ecx */
  push32((uint32_t)(ECX));
  /* 1172858f call 0x11723c00 */
  push32(0x11728594u); f_11723c00();
  /* 11728594 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728597 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172859a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 1172859d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117285a0 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117285a4 je 0x117285c3 */
  if (C.zf) goto L_117285c3;
  /* 117285a6 mov ecx, dword ptr [0x117511d0] */
  ECX = (r32((uint32_t)(0x117511d0)));
  /* 117285ac push ecx */
  push32((uint32_t)(ECX));
  /* 117285ad push 0x11751150 */
  push32((uint32_t)(0x11751150u));
  /* 117285b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117285b5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 117285b8 push eax */
  push32((uint32_t)(EAX));
  /* 117285b9 call 0x1172bf90 */
  push32(0x117285beu); f_1172bf90();
  /* 117285be add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117285c1 jmp 0x117285c5 */
  goto L_117285c5;
L_117285c3:;
  /* 117285c3 jmp 0x11728628 */
  goto L_11728628;
L_117285c5:;
  /* 117285c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117285c8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117285cb push edx */
  push32((uint32_t)(EDX));
  /* 117285cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117285cf push eax */
  push32((uint32_t)(EAX));
  /* 117285d0 call 0x11728950 */
  push32(0x117285d5u); f_11728950();
  /* 117285d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117285d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117285db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117285df jne 0x117285e3 */
  if (!C.zf) goto L_117285e3;
  /* 117285e1 jmp 0x11728628 */
  goto L_11728628;
L_117285e3:;
  /* 117285e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117285e6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 117285e9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_117285ec:;
  /* 117285ec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117285ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117285f2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117285f5 jne 0x11728623 */
  if (!C.zf) goto L_11728623;
  /* 117285f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117285fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 117285fd mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11728600 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728603 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728606 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11728609 mov edx, dword ptr [0x117511d4] */
  EDX = (r32((uint32_t)(0x117511d4)));
  /* 1172860f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11728612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728615 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11728618 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172861a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172861d jb 0x11728621 */
  if (C.cf) goto L_11728621;
  /* 1172861f jmp 0x11728623 */
  goto L_11728623;
L_11728621:;
  /* 11728621 jmp 0x117285ec */
  goto L_117285ec;
L_11728623:;
  /* 11728623 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728626 jmp 0x11728636 */
  goto L_11728636;
L_11728628:;
  /* 11728628 call 0x1172d580 */
  push32(0x1172862du); f_1172d580();
  /* 1172862d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11728633 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11728636:;
  /* 11728636 pop esi */
  ESI = (pop32());
  /* 11728637 mov esp, ebp */
  ESP = (EBP);
  /* 11728639 pop ebp */
  EBP = (pop32());
  /* 1172863a ret  */
  ESPCHK(0x11728440u, _esp0);
  ESP += 4; return;
}

/* FUN_10008670 @ 0x11728670 (146 bytes, 45 insns) */
void f_11728670(void) {
  FTRACE(0x11728670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728670 push ebp */
  push32((uint32_t)(EBP));
  /* 11728671 mov ebp, esp */
  EBP = (ESP);
  /* 11728673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728676 push 1 */
  push32((uint32_t)(0x1u));
  /* 11728678 call 0x11723b00 */
  push32(0x1172867du); f_11723b00();
  /* 1172867d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728680 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728684 jne 0x1172869e */
  if (!C.zf) goto L_1172869e;
  /* 11728686 mov dword ptr [ebp - 8], 0x11752bc8 */
  w32((uint32_t)(EBP + -0x8), (0x11752bc8u));
  /* 1172868d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728690 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11728692 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11728695 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1172869c jmp 0x117286b4 */
  goto L_117286b4;
L_1172869e:;
  /* 1172869e mov dword ptr [ebp - 8], 0x11752bcc */
  w32((uint32_t)(EBP + -0x8), (0x11752bccu));
  /* 117286a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117286a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117286aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117286ad mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_117286b4:;
  /* 117286b4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117286b8 jne 0x117286c8 */
  if (!C.zf) goto L_117286c8;
  /* 117286ba push 1 */
  push32((uint32_t)(0x1u));
  /* 117286bc call 0x11723ba0 */
  push32(0x117286c1u); f_11723ba0();
  /* 117286c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117286c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 117286c6 jmp 0x117286fc */
  goto L_117286fc;
L_117286c8:;
  /* 117286c8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117286cc je 0x117286ed */
  if (C.zf) goto L_117286ed;
  /* 117286ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117286d1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 117286d7 push 1 */
  push32((uint32_t)(0x1u));
  /* 117286d9 call 0x11723ba0 */
  push32(0x117286deu); f_11723ba0();
  /* 117286de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117286e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117286e4 push edx */
  push32((uint32_t)(EDX));
  /* 117286e5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x117286e8u);
  /* 117286e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117286eb jmp 0x117286f7 */
  goto L_117286f7;
L_117286ed:;
  /* 117286ed push 1 */
  push32((uint32_t)(0x1u));
  /* 117286ef call 0x11723ba0 */
  push32(0x117286f4u); f_11723ba0();
  /* 117286f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117286f7:;
  /* 117286f7 mov eax, 1 */
  EAX = (0x1u);
L_117286fc:;
  /* 117286fc mov esp, ebp */
  ESP = (EBP);
  /* 117286fe pop ebp */
  EBP = (pop32());
  /* 117286ff ret 4 */
  ESPCHK(0x11728670u, _esp0);
  ESP += 8; return;
}

/* FUN_10008710 @ 0x11728710 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11728710(void) {
  FTRACE(0x11728710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728710 push ebp */
  push32((uint32_t)(EBP));
  /* 11728711 mov ebp, esp */
  EBP = (ESP);
  /* 11728713 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728716 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172871d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728720 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11728723 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11728726 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728729 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1172872c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728730 ja 0x117287de */
  if ((!C.cf&&!C.zf)) goto L_117287de;
  /* 11728736 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11728739 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172873b mov dl, byte ptr [eax + 0x11728932] */
  DL = (r8((uint32_t)(EAX + 0x11728932)));
  /* 11728741 jmp dword ptr [edx*4 + 0x1172891a] */
  switch (EDX) {
    case 0: goto L_11728748;
    case 1: goto L_117287b3;
    case 2: goto L_11728799;
    case 3: goto L_11728765;
    case 4: goto L_1172877f;
    case 5: goto L_117287de;
    default: x86_unimpl("switch@0x11728741 out of table"); return;
  }
L_11728748:;
  /* 11728748 mov dword ptr [ebp - 0x18], 0x11752bc8 */
  w32((uint32_t)(EBP + -0x18), (0x11752bc8u));
  /* 1172874f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11728752 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11728754 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11728757 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172875a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172875d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11728760 jmp 0x117287e6 */
  goto L_117287e6;
L_11728765:;
  /* 11728765 mov dword ptr [ebp - 0x18], 0x11752bcc */
  w32((uint32_t)(EBP + -0x18), (0x11752bccu));
  /* 1172876c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172876f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11728771 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11728774 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728777 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172877a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172877d jmp 0x117287e6 */
  goto L_117287e6;
L_1172877f:;
  /* 1172877f mov dword ptr [ebp - 0x18], 0x11752bd0 */
  w32((uint32_t)(EBP + -0x18), (0x11752bd0u));
  /* 11728786 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11728789 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172878b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 1172878e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728791 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728794 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11728797 jmp 0x117287e6 */
  goto L_117287e6;
L_11728799:;
  /* 11728799 mov dword ptr [ebp - 0x18], 0x11752bd4 */
  w32((uint32_t)(EBP + -0x18), (0x11752bd4u));
  /* 117287a0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117287a3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117287a5 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117287a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 117287ab add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117287ae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117287b1 jmp 0x117287e6 */
  goto L_117287e6;
L_117287b3:;
  /* 117287b3 call 0x11726900 */
  push32(0x117287b8u); f_11726900();
  /* 117287b8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 117287bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117287be mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117287c1 push edx */
  push32((uint32_t)(EDX));
  /* 117287c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117287c5 push eax */
  push32((uint32_t)(EAX));
  /* 117287c6 call 0x11728950 */
  push32(0x117287cbu); f_11728950();
  /* 117287cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117287ce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117287d1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117287d4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117287d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 117287d9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 117287dc jmp 0x117287e6 */
  goto L_117287e6;
L_117287de:;
  /* 117287de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 117287e1 jmp 0x11728916 */
  goto L_11728916;
L_117287e6:;
  /* 117287e6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117287ea je 0x117287f6 */
  if (C.zf) goto L_117287f6;
  /* 117287ec push 1 */
  push32((uint32_t)(0x1u));
  /* 117287ee call 0x11723b00 */
  push32(0x117287f3u); f_11723b00();
  /* 117287f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117287f6:;
  /* 117287f6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117287fa jne 0x11728813 */
  if (!C.zf) goto L_11728813;
  /* 117287fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728800 je 0x1172880c */
  if (C.zf) goto L_1172880c;
  /* 11728802 push 1 */
  push32((uint32_t)(0x1u));
  /* 11728804 call 0x11723ba0 */
  push32(0x11728809u); f_11723ba0();
  /* 11728809 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172880c:;
  /* 1172880c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172880e jmp 0x11728916 */
  goto L_11728916;
L_11728813:;
  /* 11728813 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728817 jne 0x11728830 */
  if (!C.zf) goto L_11728830;
  /* 11728819 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172881d je 0x11728829 */
  if (C.zf) goto L_11728829;
  /* 1172881f push 1 */
  push32((uint32_t)(0x1u));
  /* 11728821 call 0x11723ba0 */
  push32(0x11728826u); f_11723ba0();
  /* 11728826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11728829:;
  /* 11728829 push 3 */
  push32((uint32_t)(0x3u));
  /* 1172882b call 0x11726c70 */
  push32(0x11728830u); f_11726c70();
L_11728830:;
  /* 11728830 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728834 je 0x11728842 */
  if (C.zf) goto L_11728842;
  /* 11728836 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172883a je 0x11728842 */
  if (C.zf) goto L_11728842;
  /* 1172883c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728840 jne 0x1172886e */
  if (!C.zf) goto L_1172886e;
L_11728842:;
  /* 11728842 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728845 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11728848 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1172884b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172884e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11728855 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728859 jne 0x1172886e */
  if (!C.zf) goto L_1172886e;
  /* 1172885b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172885e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11728861 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11728864 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728867 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_1172886e:;
  /* 1172886e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728872 jne 0x117288b0 */
  if (!C.zf) goto L_117288b0;
  /* 11728874 mov eax, dword ptr [0x117511c8] */
  EAX = (r32((uint32_t)(0x117511c8)));
  /* 11728879 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172887c jmp 0x11728887 */
  goto L_11728887;
L_1172887e:;
  /* 1172887e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11728881 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728884 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11728887:;
  /* 11728887 mov edx, dword ptr [0x117511c8] */
  EDX = (r32((uint32_t)(0x117511c8)));
  /* 1172888d add edx, dword ptr [0x117511cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117511cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728893 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728896 jge 0x117288ae */
  if ((C.sf==C.of)) goto L_117288ae;
  /* 11728898 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172889b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172889e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117288a1 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 117288a4 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 117288ac jmp 0x1172887e */
  goto L_1172887e;
L_117288ae:;
  /* 117288ae jmp 0x117288b9 */
  goto L_117288b9;
L_117288b0:;
  /* 117288b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117288b3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_117288b9:;
  /* 117288b9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117288bd je 0x117288c9 */
  if (C.zf) goto L_117288c9;
  /* 117288bf push 1 */
  push32((uint32_t)(0x1u));
  /* 117288c1 call 0x11723ba0 */
  push32(0x117288c6u); f_11723ba0();
  /* 117288c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117288c9:;
  /* 117288c9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117288cd jne 0x117288e0 */
  if (!C.zf) goto L_117288e0;
  /* 117288cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117288d2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 117288d5 push edx */
  push32((uint32_t)(EDX));
  /* 117288d6 push 8 */
  push32((uint32_t)(0x8u));
  /* 117288d8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x117288dbu);
  /* 117288db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117288de jmp 0x117288ea */
  goto L_117288ea;
L_117288e0:;
  /* 117288e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117288e3 push eax */
  push32((uint32_t)(EAX));
  /* 117288e4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x117288e7u);
  /* 117288e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_117288ea:;
  /* 117288ea cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117288ee je 0x117288fc */
  if (C.zf) goto L_117288fc;
  /* 117288f0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117288f4 je 0x117288fc */
  if (C.zf) goto L_117288fc;
  /* 117288f6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117288fa jne 0x11728914 */
  if (!C.zf) goto L_11728914;
L_117288fc:;
  /* 117288fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117288ff mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11728902 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11728905 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728909 jne 0x11728914 */
  if (!C.zf) goto L_11728914;
  /* 1172890b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172890e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728911 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11728914:;
  /* 11728914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11728916:;
  /* 11728916 mov esp, ebp */
  ESP = (EBP);
  /* 11728918 pop ebp */
  EBP = (pop32());
  /* 11728919 ret  */
  ESPCHK(0x11728710u, _esp0);
  ESP += 4; return;
}

/* FUN_10008950 @ 0x11728950 (91 bytes, 35 insns) */
void f_11728950(void) {
  FTRACE(0x11728950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728950 push ebp */
  push32((uint32_t)(EBP));
  /* 11728951 mov ebp, esp */
  EBP = (ESP);
  /* 11728953 push ecx */
  push32((uint32_t)(ECX));
  /* 11728954 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728957 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172895a:;
  /* 1172895a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172895d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11728960 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728963 je 0x11728983 */
  if (C.zf) goto L_11728983;
  /* 11728965 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728968 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172896b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172896e mov ecx, dword ptr [0x117511d4] */
  ECX = (r32((uint32_t)(0x117511d4)));
  /* 11728974 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11728977 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172897a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172897c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172897f jae 0x11728983 */
  if (!C.cf) goto L_11728983;
  /* 11728981 jmp 0x1172895a */
  goto L_1172895a;
L_11728983:;
  /* 11728983 mov eax, dword ptr [0x117511d4] */
  EAX = (r32((uint32_t)(0x117511d4)));
  /* 11728988 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172898b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172898e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728990 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728993 jae 0x117289a5 */
  if (!C.cf) goto L_117289a5;
  /* 11728995 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728998 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172899b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172899e jne 0x117289a5 */
  if (!C.zf) goto L_117289a5;
  /* 117289a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117289a3 jmp 0x117289a7 */
  goto L_117289a7;
L_117289a5:;
  /* 117289a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117289a7:;
  /* 117289a7 mov esp, ebp */
  ESP = (EBP);
  /* 117289a9 pop ebp */
  EBP = (pop32());
  /* 117289aa ret  */
  ESPCHK(0x11728950u, _esp0);
  ESP += 4; return;
}

/* FUN_100089b0 @ 0x117289b0 (13 bytes, 6 insns) */
void f_117289b0(void) {
  FTRACE(0x117289b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117289b0 push ebp */
  push32((uint32_t)(EBP));
  /* 117289b1 mov ebp, esp */
  EBP = (ESP);
  /* 117289b3 call 0x11726900 */
  push32(0x117289b8u); f_11726900();
  /* 117289b8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117289bb pop ebp */
  EBP = (pop32());
  /* 117289bc ret  */
  ESPCHK(0x117289b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x117289c0 (13 bytes, 6 insns) */
void f_117289c0(void) {
  FTRACE(0x117289c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117289c0 push ebp */
  push32((uint32_t)(EBP));
  /* 117289c1 mov ebp, esp */
  EBP = (ESP);
  /* 117289c3 call 0x11726900 */
  push32(0x117289c8u); f_11726900();
  /* 117289c8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117289cb pop ebp */
  EBP = (pop32());
  /* 117289cc ret  */
  ESPCHK(0x117289c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100089d0 @ 0x117289d0 (187 bytes, 54 insns) */
void f_117289d0(void) {
  FTRACE(0x117289d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117289d0 push ebp */
  push32((uint32_t)(EBP));
  /* 117289d1 mov ebp, esp */
  EBP = (ESP);
  /* 117289d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117289d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 117289dd cmp dword ptr [0x11752bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117289e4 jne 0x11728a43 */
  if (!C.zf) goto L_11728a43;
  /* 117289e6 push 0x1174d2cc */
  push32((uint32_t)(0x1174d2ccu));
  /* 117289eb call dword ptr [0x117552f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f4))), 0x117289f1u);
  /* 117289f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117289f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117289f8 je 0x11728a17 */
  if (C.zf) goto L_11728a17;
  /* 117289fa push 0x1174df24 */
  push32((uint32_t)(0x1174df24u));
  /* 117289ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728a02 push eax */
  push32((uint32_t)(EAX));
  /* 11728a03 call dword ptr [0x117552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f0))), 0x11728a09u);
  /* 11728a09 mov dword ptr [0x11752bdc], eax */
  w32((uint32_t)(0x11752bdc), (EAX));
  /* 11728a0e cmp dword ptr [0x11752bdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728a15 jne 0x11728a1b */
  if (!C.zf) goto L_11728a1b;
L_11728a17:;
  /* 11728a17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728a19 jmp 0x11728a87 */
  goto L_11728a87;
L_11728a1b:;
  /* 11728a1b push 0x1174df14 */
  push32((uint32_t)(0x1174df14u));
  /* 11728a20 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728a23 push ecx */
  push32((uint32_t)(ECX));
  /* 11728a24 call dword ptr [0x117552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f0))), 0x11728a2au);
  /* 11728a2a mov dword ptr [0x11752be0], eax */
  w32((uint32_t)(0x11752be0), (EAX));
  /* 11728a2f push 0x1174df00 */
  push32((uint32_t)(0x1174df00u));
  /* 11728a34 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728a37 push edx */
  push32((uint32_t)(EDX));
  /* 11728a38 call dword ptr [0x117552f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552f0))), 0x11728a3eu);
  /* 11728a3e mov dword ptr [0x11752be4], eax */
  w32((uint32_t)(0x11752be4), (EAX));
L_11728a43:;
  /* 11728a43 cmp dword ptr [0x11752be0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752be0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728a4a je 0x11728a55 */
  if (C.zf) goto L_11728a55;
  /* 11728a4c call dword ptr [0x11752be0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752be0))), 0x11728a52u);
  /* 11728a52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11728a55:;
  /* 11728a55 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728a59 je 0x11728a71 */
  if (C.zf) goto L_11728a71;
  /* 11728a5b cmp dword ptr [0x11752be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728a62 je 0x11728a71 */
  if (C.zf) goto L_11728a71;
  /* 11728a64 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728a67 push eax */
  push32((uint32_t)(EAX));
  /* 11728a68 call dword ptr [0x11752be4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752be4))), 0x11728a6eu);
  /* 11728a6e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11728a71:;
  /* 11728a71 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11728a74 push ecx */
  push32((uint32_t)(ECX));
  /* 11728a75 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728a78 push edx */
  push32((uint32_t)(EDX));
  /* 11728a79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728a7c push eax */
  push32((uint32_t)(EAX));
  /* 11728a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728a80 push ecx */
  push32((uint32_t)(ECX));
  /* 11728a81 call dword ptr [0x11752bdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752bdc))), 0x11728a87u);
L_11728a87:;
  /* 11728a87 mov esp, ebp */
  ESP = (EBP);
  /* 11728a89 pop ebp */
  EBP = (pop32());
  /* 11728a8a ret  */
  ESPCHK(0x117289d0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11728a90 (254 bytes, 109 insns) */
void f_11728a90(void) {
  FTRACE(0x11728a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728a90 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11728a94 push edi */
  push32((uint32_t)(EDI));
  /* 11728a95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11728a97 je 0x11728b13 */
  if (C.zf) goto L_11728b13;
  /* 11728a99 push esi */
  push32((uint32_t)(ESI));
  /* 11728a9a push ebx */
  push32((uint32_t)(EBX));
  /* 11728a9b mov ebx, ecx */
  EBX = (ECX);
  /* 11728a9d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11728aa1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11728aa7 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11728aab jne 0x11728ab4 */
  if (!C.zf) goto L_11728ab4;
  /* 11728aad shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11728ab0 jne 0x11728b21 */
  if (!C.zf) goto L_11728b21;
  /* 11728ab2 jmp 0x11728ad5 */
  goto L_11728ad5;
L_11728ab4:;
  /* 11728ab4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11728ab6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11728ab7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728ab9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11728aba dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728abb je 0x11728ae2 */
  if (C.zf) goto L_11728ae2;
  /* 11728abd test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11728abf je 0x11728aea */
  if (C.zf) goto L_11728aea;
  /* 11728ac1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11728ac7 jne 0x11728ab4 */
  if (!C.zf) goto L_11728ab4;
  /* 11728ac9 mov ebx, ecx */
  EBX = (ECX);
  /* 11728acb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11728ace jne 0x11728b21 */
  if (!C.zf) goto L_11728b21;
L_11728ad0:;
  /* 11728ad0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11728ad3 je 0x11728ae2 */
  if (C.zf) goto L_11728ae2;
L_11728ad5:;
  /* 11728ad5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11728ad7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11728ad8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728ada inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11728adb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11728add je 0x11728b0e */
  if (C.zf) goto L_11728b0e;
  /* 11728adf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11728ae0 jne 0x11728ad5 */
  if (!C.zf) goto L_11728ad5;
L_11728ae2:;
  /* 11728ae2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11728ae6 pop ebx */
  EBX = (pop32());
  /* 11728ae7 pop esi */
  ESI = (pop32());
  /* 11728ae8 pop edi */
  EDI = (pop32());
  /* 11728ae9 ret  */
  ESPCHK(0x11728a90u, _esp0);
  ESP += 4; return;
L_11728aea:;
  /* 11728aea test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11728af0 je 0x11728b04 */
  if (C.zf) goto L_11728b04;
L_11728af2:;
  /* 11728af2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728af4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11728af5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728af6 je 0x11728b86 */
  if (C.zf) goto L_11728b86;
  /* 11728afc test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11728b02 jne 0x11728af2 */
  if (!C.zf) goto L_11728af2;
L_11728b04:;
  /* 11728b04 mov ebx, ecx */
  EBX = (ECX);
  /* 11728b06 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11728b09 jne 0x11728b77 */
  if (!C.zf) goto L_11728b77;
L_11728b0b:;
  /* 11728b0b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728b0d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11728b0e:;
  /* 11728b0e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11728b0f jne 0x11728b0b */
  if (!C.zf) goto L_11728b0b;
  /* 11728b11 pop ebx */
  EBX = (pop32());
  /* 11728b12 pop esi */
  ESI = (pop32());
L_11728b13:;
  /* 11728b13 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11728b17 pop edi */
  EDI = (pop32());
  /* 11728b18 ret  */
  ESPCHK(0x11728a90u, _esp0);
  ESP += 4; return;
L_11728b19:;
  /* 11728b19 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11728b1b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728b1f je 0x11728ad0 */
  if (C.zf) goto L_11728ad0;
L_11728b21:;
  /* 11728b21 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11728b26 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11728b28 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b2a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11728b2d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11728b2f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11728b31 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b34 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11728b39 je 0x11728b19 */
  if (C.zf) goto L_11728b19;
  /* 11728b3b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11728b3d je 0x11728b6b */
  if (C.zf) goto L_11728b6b;
  /* 11728b3f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11728b41 je 0x11728b61 */
  if (C.zf) goto L_11728b61;
  /* 11728b43 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11728b49 je 0x11728b57 */
  if (C.zf) goto L_11728b57;
  /* 11728b4b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11728b51 jne 0x11728b19 */
  if (!C.zf) goto L_11728b19;
  /* 11728b53 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11728b55 jmp 0x11728b6f */
  goto L_11728b6f;
L_11728b57:;
  /* 11728b57 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11728b5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11728b5f jmp 0x11728b6f */
  goto L_11728b6f;
L_11728b61:;
  /* 11728b61 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11728b67 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11728b69 jmp 0x11728b6f */
  goto L_11728b6f;
L_11728b6b:;
  /* 11728b6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11728b6d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11728b6f:;
  /* 11728b6f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728b74 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728b75 je 0x11728b81 */
  if (C.zf) goto L_11728b81;
L_11728b77:;
  /* 11728b77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11728b79:;
  /* 11728b79 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11728b7b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b7e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728b7f jne 0x11728b79 */
  if (!C.zf) goto L_11728b79;
L_11728b81:;
  /* 11728b81 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11728b84 jne 0x11728b0b */
  if (!C.zf) goto L_11728b0b;
L_11728b86:;
  /* 11728b86 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11728b8a pop ebx */
  EBX = (pop32());
  /* 11728b8b pop esi */
  ESI = (pop32());
  /* 11728b8c pop edi */
  EDI = (pop32());
  /* 11728b8d ret  */
  ESPCHK(0x11728a90u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11728b90 (48 bytes, 17 insns) */
void f_11728b90(void) {
  FTRACE(0x11728b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728b90 push ebp */
  push32((uint32_t)(EBP));
  /* 11728b91 mov ebp, esp */
  EBP = (ESP);
  /* 11728b93 push ecx */
  push32((uint32_t)(ECX));
  /* 11728b94 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728b96 call 0x11723b00 */
  push32(0x11728b9bu); f_11723b00();
  /* 11728b9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728b9e mov eax, dword ptr [0x11752bec] */
  EAX = (r32((uint32_t)(0x11752bec)));
  /* 11728ba3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11728ba6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ba9 mov dword ptr [0x11752bec], ecx */
  w32((uint32_t)(0x11752bec), (ECX));
  /* 11728baf push 9 */
  push32((uint32_t)(0x9u));
  /* 11728bb1 call 0x11723ba0 */
  push32(0x11728bb6u); f_11723ba0();
  /* 11728bb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728bb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728bbc mov esp, ebp */
  ESP = (EBP);
  /* 11728bbe pop ebp */
  EBP = (pop32());
  /* 11728bbf ret  */
  ESPCHK(0x11728b90u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bc0 @ 0x11728bc0 (10 bytes, 5 insns) */
void f_11728bc0(void) {
  FTRACE(0x11728bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11728bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11728bc3 mov eax, dword ptr [0x11752bec] */
  EAX = (r32((uint32_t)(0x11752bec)));
  /* 11728bc8 pop ebp */
  EBP = (pop32());
  /* 11728bc9 ret  */
  ESPCHK(0x11728bc0u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11728bd0 (45 bytes, 19 insns) */
void f_11728bd0(void) {
  FTRACE(0x11728bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11728bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11728bd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11728bd4 mov eax, dword ptr [0x11752bec] */
  EAX = (r32((uint32_t)(0x11752bec)));
  /* 11728bd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11728bdc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728be0 je 0x11728bf0 */
  if (C.zf) goto L_11728bf0;
  /* 11728be2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728be5 push ecx */
  push32((uint32_t)(ECX));
  /* 11728be6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11728be9u);
  /* 11728be9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728bec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728bee jne 0x11728bf4 */
  if (!C.zf) goto L_11728bf4;
L_11728bf0:;
  /* 11728bf0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728bf2 jmp 0x11728bf9 */
  goto L_11728bf9;
L_11728bf4:;
  /* 11728bf4 mov eax, 1 */
  EAX = (0x1u);
L_11728bf9:;
  /* 11728bf9 mov esp, ebp */
  ESP = (EBP);
  /* 11728bfb pop ebp */
  EBP = (pop32());
  /* 11728bfc ret  */
  ESPCHK(0x11728bd0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11728c00 (88 bytes, 40 insns) */
void f_11728c00(void) {
  FTRACE(0x11728c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728c00 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11728c04 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11728c08 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11728c0a je 0x11728c53 */
  if (C.zf) goto L_11728c53;
  /* 11728c0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728c0e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11728c12 push edi */
  push32((uint32_t)(EDI));
  /* 11728c13 mov edi, ecx */
  EDI = (ECX);
  /* 11728c15 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728c18 jb 0x11728c47 */
  if (C.cf) goto L_11728c47;
  /* 11728c1a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11728c1c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11728c1f je 0x11728c29 */
  if (C.zf) goto L_11728c29;
  /* 11728c21 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11728c23:;
  /* 11728c23 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728c25 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11728c26 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11728c27 jne 0x11728c23 */
  if (!C.zf) goto L_11728c23;
L_11728c29:;
  /* 11728c29 mov ecx, eax */
  ECX = (EAX);
  /* 11728c2b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11728c2e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728c30 mov ecx, eax */
  ECX = (EAX);
  /* 11728c32 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11728c35 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728c37 mov ecx, edx */
  ECX = (EDX);
  /* 11728c39 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11728c3c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11728c3f je 0x11728c47 */
  if (C.zf) goto L_11728c47;
  /* 11728c41 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11728c43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11728c45 je 0x11728c4d */
  if (C.zf) goto L_11728c4d;
L_11728c47:;
  /* 11728c47 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11728c49 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11728c4a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11728c4b jne 0x11728c47 */
  if (!C.zf) goto L_11728c47;
L_11728c4d:;
  /* 11728c4d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11728c51 pop edi */
  EDI = (pop32());
  /* 11728c52 ret  */
  ESPCHK(0x11728c00u, _esp0);
  ESP += 4; return;
L_11728c53:;
  /* 11728c53 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11728c57 ret  */
  ESPCHK(0x11728c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c60 @ 0x11728c60 (23 bytes, 10 insns) */
void f_11728c60(void) {
  FTRACE(0x11728c60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728c60 push ebp */
  push32((uint32_t)(EBP));
  /* 11728c61 mov ebp, esp */
  EBP = (ESP);
  /* 11728c63 mov eax, dword ptr [0x11752be8] */
  EAX = (r32((uint32_t)(0x11752be8)));
  /* 11728c68 push eax */
  push32((uint32_t)(EAX));
  /* 11728c69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728c6c push ecx */
  push32((uint32_t)(ECX));
  /* 11728c6d call 0x11728c80 */
  push32(0x11728c72u); f_11728c80();
  /* 11728c72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728c75 pop ebp */
  EBP = (pop32());
  /* 11728c76 ret  */
  ESPCHK(0x11728c60u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11728c80 (87 bytes, 34 insns) */
void f_11728c80(void) {
  FTRACE(0x11728c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728c80 push ebp */
  push32((uint32_t)(EBP));
  /* 11728c81 mov ebp, esp */
  EBP = (ESP);
  /* 11728c83 push ecx */
  push32((uint32_t)(ECX));
  /* 11728c84 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728c88 jbe 0x11728c8e */
  if ((C.cf||C.zf)) goto L_11728c8e;
  /* 11728c8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728c8c jmp 0x11728cd3 */
  goto L_11728cd3;
L_11728c8e:;
  /* 11728c8e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728c92 ja 0x11728ca5 */
  if ((!C.cf&&!C.zf)) goto L_11728ca5;
  /* 11728c94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728c97 push eax */
  push32((uint32_t)(EAX));
  /* 11728c98 call 0x11728ce0 */
  push32(0x11728c9du); f_11728ce0();
  /* 11728c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728ca0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11728ca3 jmp 0x11728cac */
  goto L_11728cac;
L_11728ca5:;
  /* 11728ca5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11728cac:;
  /* 11728cac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728cb0 jne 0x11728cb8 */
  if (!C.zf) goto L_11728cb8;
  /* 11728cb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728cb6 jne 0x11728cbd */
  if (!C.zf) goto L_11728cbd;
L_11728cb8:;
  /* 11728cb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728cbb jmp 0x11728cd3 */
  goto L_11728cd3;
L_11728cbd:;
  /* 11728cbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728cc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11728cc1 call 0x11728bd0 */
  push32(0x11728cc6u); f_11728bd0();
  /* 11728cc6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728cc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728ccb jne 0x11728cd1 */
  if (!C.zf) goto L_11728cd1;
  /* 11728ccd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728ccf jmp 0x11728cd3 */
  goto L_11728cd3;
L_11728cd1:;
  /* 11728cd1 jmp 0x11728c8e */
  goto L_11728c8e;
L_11728cd3:;
  /* 11728cd3 mov esp, ebp */
  ESP = (EBP);
  /* 11728cd5 pop ebp */
  EBP = (pop32());
  /* 11728cd6 ret  */
  ESPCHK(0x11728c80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ce0 @ 0x11728ce0 (109 bytes, 37 insns) */
void f_11728ce0(void) {
  FTRACE(0x11728ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11728ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11728ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11728ce4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ce7 cmp eax, dword ptr [0x11750f34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11750f34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728ced ja 0x11728d1d */
  if ((!C.cf&&!C.zf)) goto L_11728d1d;
  /* 11728cef push 9 */
  push32((uint32_t)(0x9u));
  /* 11728cf1 call 0x11723b00 */
  push32(0x11728cf6u); f_11723b00();
  /* 11728cf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728cf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728cfc push ecx */
  push32((uint32_t)(ECX));
  /* 11728cfd call 0x11729820 */
  push32(0x11728d02u); f_11729820();
  /* 11728d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728d05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11728d08 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728d0a call 0x11723ba0 */
  push32(0x11728d0fu); f_11723ba0();
  /* 11728d0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728d12 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728d16 je 0x11728d1d */
  if (C.zf) goto L_11728d1d;
  /* 11728d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728d1b jmp 0x11728d49 */
  goto L_11728d49;
L_11728d1d:;
  /* 11728d1d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728d21 jne 0x11728d2a */
  if (!C.zf) goto L_11728d2a;
  /* 11728d23 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11728d2a:;
  /* 11728d2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728d2d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728d30 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11728d33 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11728d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728d39 push eax */
  push32((uint32_t)(EAX));
  /* 11728d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11728d3c mov ecx, dword ptr [0x117543ac] */
  ECX = (r32((uint32_t)(0x117543ac)));
  /* 11728d42 push ecx */
  push32((uint32_t)(ECX));
  /* 11728d43 call dword ptr [0x11755364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755364))), 0x11728d49u);
L_11728d49:;
  /* 11728d49 mov esp, ebp */
  ESP = (EBP);
  /* 11728d4b pop ebp */
  EBP = (pop32());
  /* 11728d4c ret  */
  ESPCHK(0x11728ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d50 @ 0x11728d50 (10 bytes, 5 insns) */
void f_11728d50(void) {
  FTRACE(0x11728d50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728d50 push ebp */
  push32((uint32_t)(EBP));
  /* 11728d51 mov ebp, esp */
  EBP = (ESP);
  /* 11728d53 mov eax, 1 */
  EAX = (0x1u);
  /* 11728d58 pop ebp */
  EBP = (pop32());
  /* 11728d59 ret  */
  ESPCHK(0x11728d50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d60 @ 0x11728d60 (173 bytes, 59 insns) */
void f_11728d60(void) {
  FTRACE(0x11728d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11728d61 mov ebp, esp */
  EBP = (ESP);
  /* 11728d63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728d66 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728d6a jbe 0x11728d73 */
  if ((C.cf||C.zf)) goto L_11728d73;
  /* 11728d6c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728d6e jmp 0x11728e09 */
  goto L_11728e09;
L_11728d73:;
  /* 11728d73 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728d75 call 0x11723b00 */
  push32(0x11728d7au); f_11723b00();
  /* 11728d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728d7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728d80 push eax */
  push32((uint32_t)(EAX));
  /* 11728d81 call 0x11729190 */
  push32(0x11728d86u); f_11729190();
  /* 11728d86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728d89 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11728d8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728d90 je 0x11728dd1 */
  if (C.zf) goto L_11728dd1;
  /* 11728d92 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11728d99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728d9c cmp ecx, dword ptr [0x11750f34] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11750f34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728da2 ja 0x11728dc2 */
  if ((!C.cf&&!C.zf)) goto L_11728dc2;
  /* 11728da4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728da7 push edx */
  push32((uint32_t)(EDX));
  /* 11728da8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728dab push eax */
  push32((uint32_t)(EAX));
  /* 11728dac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728daf push ecx */
  push32((uint32_t)(ECX));
  /* 11728db0 call 0x1172a060 */
  push32(0x11728db5u); f_1172a060();
  /* 11728db5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728db8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728dba je 0x11728dc2 */
  if (C.zf) goto L_11728dc2;
  /* 11728dbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728dbf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11728dc2:;
  /* 11728dc2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728dc4 call 0x11723ba0 */
  push32(0x11728dc9u); f_11723ba0();
  /* 11728dc9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728dcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728dcf jmp 0x11728e09 */
  goto L_11728e09;
L_11728dd1:;
  /* 11728dd1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728dd3 call 0x11723ba0 */
  push32(0x11728dd8u); f_11723ba0();
  /* 11728dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728ddb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728ddf jne 0x11728de8 */
  if (!C.zf) goto L_11728de8;
  /* 11728de1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11728de8:;
  /* 11728de8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728deb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728dee and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11728df0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11728df3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728df6 push ecx */
  push32((uint32_t)(ECX));
  /* 11728df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728dfa push edx */
  push32((uint32_t)(EDX));
  /* 11728dfb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11728dfd mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 11728e02 push eax */
  push32((uint32_t)(EAX));
  /* 11728e03 call dword ptr [0x11755384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755384))), 0x11728e09u);
L_11728e09:;
  /* 11728e09 mov esp, ebp */
  ESP = (EBP);
  /* 11728e0b pop ebp */
  EBP = (pop32());
  /* 11728e0c ret  */
  ESPCHK(0x11728d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e10 @ 0x11728e10 (490 bytes, 165 insns) */
void f_11728e10(void) {
  FTRACE(0x11728e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11728e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11728e11 mov ebp, esp */
  EBP = (ESP);
  /* 11728e13 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728e16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728e1a jne 0x11728e2d */
  if (!C.zf) goto L_11728e2d;
  /* 11728e1c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728e1f push eax */
  push32((uint32_t)(EAX));
  /* 11728e20 call 0x11728c60 */
  push32(0x11728e25u); f_11728c60();
  /* 11728e25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728e28 jmp 0x11728ff6 */
  goto L_11728ff6;
L_11728e2d:;
  /* 11728e2d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728e31 jne 0x11728e46 */
  if (!C.zf) goto L_11728e46;
  /* 11728e33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728e36 push ecx */
  push32((uint32_t)(ECX));
  /* 11728e37 call 0x11729000 */
  push32(0x11728e3cu); f_11729000();
  /* 11728e3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728e3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728e41 jmp 0x11728ff6 */
  goto L_11728ff6;
L_11728e46:;
  /* 11728e46 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11728e4d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728e51 ja 0x11728fc9 */
  if ((!C.cf&&!C.zf)) goto L_11728fc9;
  /* 11728e57 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728e59 call 0x11723b00 */
  push32(0x11728e5eu); f_11723b00();
  /* 11728e5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728e61 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728e64 push edx */
  push32((uint32_t)(EDX));
  /* 11728e65 call 0x11729190 */
  push32(0x11728e6au); f_11729190();
  /* 11728e6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728e6d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11728e70 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728e74 je 0x11728f8c */
  if (C.zf) goto L_11728f8c;
  /* 11728e7a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728e7d cmp eax, dword ptr [0x11750f34] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11750f34))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728e83 ja 0x11728f00 */
  if ((!C.cf&&!C.zf)) goto L_11728f00;
  /* 11728e85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728e88 push ecx */
  push32((uint32_t)(ECX));
  /* 11728e89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728e8c push edx */
  push32((uint32_t)(EDX));
  /* 11728e8d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728e90 push eax */
  push32((uint32_t)(EAX));
  /* 11728e91 call 0x1172a060 */
  push32(0x11728e96u); f_1172a060();
  /* 11728e96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728e99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728e9b je 0x11728ea5 */
  if (C.zf) goto L_11728ea5;
  /* 11728e9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ea0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11728ea3 jmp 0x11728f00 */
  goto L_11728f00;
L_11728ea5:;
  /* 11728ea5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728ea8 push edx */
  push32((uint32_t)(EDX));
  /* 11728ea9 call 0x11729820 */
  push32(0x11728eaeu); f_11729820();
  /* 11728eae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728eb1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11728eb4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728eb8 je 0x11728f00 */
  if (C.zf) goto L_11728f00;
  /* 11728eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ebd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11728ec0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728ec3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11728ec6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728ec9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728ecc jae 0x11728ed6 */
  if (!C.cf) goto L_11728ed6;
  /* 11728ece mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728ed1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11728ed4 jmp 0x11728edc */
  goto L_11728edc;
L_11728ed6:;
  /* 11728ed6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728ed9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11728edc:;
  /* 11728edc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11728edf push edx */
  push32((uint32_t)(EDX));
  /* 11728ee0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ee3 push eax */
  push32((uint32_t)(EAX));
  /* 11728ee4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728ee7 push ecx */
  push32((uint32_t)(ECX));
  /* 11728ee8 call 0x1172bf90 */
  push32(0x11728eedu); f_1172bf90();
  /* 11728eed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728ef0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728ef3 push edx */
  push32((uint32_t)(EDX));
  /* 11728ef4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728ef7 push eax */
  push32((uint32_t)(EAX));
  /* 11728ef8 call 0x11729250 */
  push32(0x11728efdu); f_11729250();
  /* 11728efd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11728f00:;
  /* 11728f00 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728f04 jne 0x11728f80 */
  if (!C.zf) goto L_11728f80;
  /* 11728f06 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728f0a jne 0x11728f13 */
  if (!C.zf) goto L_11728f13;
  /* 11728f0c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11728f13:;
  /* 11728f13 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728f16 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728f19 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11728f1c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11728f1f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728f22 push edx */
  push32((uint32_t)(EDX));
  /* 11728f23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728f25 mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 11728f2a push eax */
  push32((uint32_t)(EAX));
  /* 11728f2b call dword ptr [0x11755364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755364))), 0x11728f31u);
  /* 11728f31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11728f34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728f38 je 0x11728f80 */
  if (C.zf) goto L_11728f80;
  /* 11728f3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728f3d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11728f40 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11728f43 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11728f46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728f49 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728f4c jae 0x11728f56 */
  if (!C.cf) goto L_11728f56;
  /* 11728f4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11728f51 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11728f54 jmp 0x11728f5c */
  goto L_11728f5c;
L_11728f56:;
  /* 11728f56 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728f59 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11728f5c:;
  /* 11728f5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11728f5f push eax */
  push32((uint32_t)(EAX));
  /* 11728f60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728f63 push ecx */
  push32((uint32_t)(ECX));
  /* 11728f64 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728f67 push edx */
  push32((uint32_t)(EDX));
  /* 11728f68 call 0x1172bf90 */
  push32(0x11728f6du); f_1172bf90();
  /* 11728f6d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728f73 push eax */
  push32((uint32_t)(EAX));
  /* 11728f74 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11728f77 push ecx */
  push32((uint32_t)(ECX));
  /* 11728f78 call 0x11729250 */
  push32(0x11728f7du); f_11729250();
  /* 11728f7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11728f80:;
  /* 11728f80 push 9 */
  push32((uint32_t)(0x9u));
  /* 11728f82 call 0x11723ba0 */
  push32(0x11728f87u); f_11723ba0();
  /* 11728f87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728f8a jmp 0x11728fc9 */
  goto L_11728fc9;
L_11728f8c:;
  /* 11728f8c push 9 */
  push32((uint32_t)(0x9u));
  /* 11728f8e call 0x11723ba0 */
  push32(0x11728f93u); f_11723ba0();
  /* 11728f93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728f96 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728f9a jne 0x11728fa3 */
  if (!C.zf) goto L_11728fa3;
  /* 11728f9c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11728fa3:;
  /* 11728fa3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728fa6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11728fa9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11728fac mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11728faf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728fb2 push eax */
  push32((uint32_t)(EAX));
  /* 11728fb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11728fb6 push ecx */
  push32((uint32_t)(ECX));
  /* 11728fb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11728fb9 mov edx, dword ptr [0x117543ac] */
  EDX = (r32((uint32_t)(0x117543ac)));
  /* 11728fbf push edx */
  push32((uint32_t)(EDX));
  /* 11728fc0 call dword ptr [0x11755384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755384))), 0x11728fc6u);
  /* 11728fc6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11728fc9:;
  /* 11728fc9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728fcd jne 0x11728fd8 */
  if (!C.zf) goto L_11728fd8;
  /* 11728fcf cmp dword ptr [0x11752be8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752be8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11728fd6 jne 0x11728fdd */
  if (!C.zf) goto L_11728fdd;
L_11728fd8:;
  /* 11728fd8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11728fdb jmp 0x11728ff6 */
  goto L_11728ff6;
L_11728fdd:;
  /* 11728fdd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11728fe0 push eax */
  push32((uint32_t)(EAX));
  /* 11728fe1 call 0x11728bd0 */
  push32(0x11728fe6u); f_11728bd0();
  /* 11728fe6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11728fe9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11728feb jne 0x11728ff1 */
  if (!C.zf) goto L_11728ff1;
  /* 11728fed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11728fef jmp 0x11728ff6 */
  goto L_11728ff6;
L_11728ff1:;
  /* 11728ff1 jmp 0x11728e46 */
  goto L_11728e46;
L_11728ff6:;
  /* 11728ff6 mov esp, ebp */
  ESP = (EBP);
  /* 11728ff8 pop ebp */
  EBP = (pop32());
  /* 11728ff9 ret  */
  ESPCHK(0x11728e10u, _esp0);
  ESP += 4; return;
}

/* FUN_10009000 @ 0x11729000 (104 bytes, 38 insns) */
void f_11729000(void) {
  FTRACE(0x11729000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729000 push ebp */
  push32((uint32_t)(EBP));
  /* 11729001 mov ebp, esp */
  EBP = (ESP);
  /* 11729003 push ecx */
  push32((uint32_t)(ECX));
  /* 11729004 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729008 jne 0x1172900c */
  if (!C.zf) goto L_1172900c;
  /* 1172900a jmp 0x11729064 */
  goto L_11729064;
L_1172900c:;
  /* 1172900c push 9 */
  push32((uint32_t)(0x9u));
  /* 1172900e call 0x11723b00 */
  push32(0x11729013u); f_11723b00();
  /* 11729013 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729019 push eax */
  push32((uint32_t)(EAX));
  /* 1172901a call 0x11729190 */
  push32(0x1172901fu); f_11729190();
  /* 1172901f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11729025 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729029 je 0x11729047 */
  if (C.zf) goto L_11729047;
  /* 1172902b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172902e push ecx */
  push32((uint32_t)(ECX));
  /* 1172902f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729032 push edx */
  push32((uint32_t)(EDX));
  /* 11729033 call 0x11729250 */
  push32(0x11729038u); f_11729250();
  /* 11729038 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172903b push 9 */
  push32((uint32_t)(0x9u));
  /* 1172903d call 0x11723ba0 */
  push32(0x11729042u); f_11723ba0();
  /* 11729042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729045 jmp 0x11729064 */
  goto L_11729064;
L_11729047:;
  /* 11729047 push 9 */
  push32((uint32_t)(0x9u));
  /* 11729049 call 0x11723ba0 */
  push32(0x1172904eu); f_11723ba0();
  /* 1172904e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729051 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729054 push eax */
  push32((uint32_t)(EAX));
  /* 11729055 push 0 */
  push32((uint32_t)(0x0u));
  /* 11729057 mov ecx, dword ptr [0x117543ac] */
  ECX = (r32((uint32_t)(0x117543ac)));
  /* 1172905d push ecx */
  push32((uint32_t)(ECX));
  /* 1172905e call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x11729064u);
L_11729064:;
  /* 11729064 mov esp, ebp */
  ESP = (EBP);
  /* 11729066 pop ebp */
  EBP = (pop32());
  /* 11729067 ret  */
  ESPCHK(0x11729000u, _esp0);
  ESP += 4; return;
}

/* FUN_10009070 @ 0x11729070 (116 bytes, 34 insns) */
void f_11729070(void) {
  FTRACE(0x11729070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729070 push ebp */
  push32((uint32_t)(EBP));
  /* 11729071 mov ebp, esp */
  EBP = (ESP);
  /* 11729073 push ecx */
  push32((uint32_t)(ECX));
  /* 11729074 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 1172907b push 9 */
  push32((uint32_t)(0x9u));
  /* 1172907d call 0x11723b00 */
  push32(0x11729082u); f_11723b00();
  /* 11729082 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729085 call 0x1172a780 */
  push32(0x1172908au); f_1172a780();
  /* 1172908a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172908c jge 0x11729095 */
  if ((C.sf==C.of)) goto L_11729095;
  /* 1172908e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11729095:;
  /* 11729095 push 9 */
  push32((uint32_t)(0x9u));
  /* 11729097 call 0x11723ba0 */
  push32(0x1172909cu); f_11723ba0();
  /* 1172909c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172909f push 0 */
  push32((uint32_t)(0x0u));
  /* 117290a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 117290a3 mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 117290a8 push eax */
  push32((uint32_t)(EAX));
  /* 117290a9 call dword ptr [0x11755320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755320))), 0x117290afu);
  /* 117290af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117290b1 jne 0x117290dd */
  if (!C.zf) goto L_117290dd;
  /* 117290b3 call dword ptr [0x1175533c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175533c))), 0x117290b9u);
  /* 117290b9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117290bc jne 0x117290d6 */
  if (!C.zf) goto L_117290d6;
  /* 117290be call 0x1172d590 */
  push32(0x117290c3u); f_1172d590();
  /* 117290c3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 117290c9 call 0x1172d580 */
  push32(0x117290ceu); f_1172d580();
  /* 117290ce mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 117290d4 jmp 0x117290dd */
  goto L_117290dd;
L_117290d6:;
  /* 117290d6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_117290dd:;
  /* 117290dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 117290e0 mov esp, ebp */
  ESP = (EBP);
  /* 117290e2 pop ebp */
  EBP = (pop32());
  /* 117290e3 ret  */
  ESPCHK(0x11729070u, _esp0);
  ESP += 4; return;
}

/* FUN_100090f0 @ 0x117290f0 (10 bytes, 5 insns) */
void f_117290f0(void) {
  FTRACE(0x117290f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117290f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117290f1 mov ebp, esp */
  EBP = (ESP);
  /* 117290f3 call 0x11729070 */
  push32(0x117290f8u); f_11729070();
  /* 117290f8 pop ebp */
  EBP = (pop32());
  /* 117290f9 ret  */
  ESPCHK(0x117290f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x11729100 (10 bytes, 5 insns) */
void f_11729100(void) {
  FTRACE(0x11729100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729100 push ebp */
  push32((uint32_t)(EBP));
  /* 11729101 mov ebp, esp */
  EBP = (ESP);
  /* 11729103 mov eax, dword ptr [0x11750f34] */
  EAX = (r32((uint32_t)(0x11750f34)));
  /* 11729108 pop ebp */
  EBP = (pop32());
  /* 11729109 ret  */
  ESPCHK(0x11729100u, _esp0);
  ESP += 4; return;
}

/* FUN_10009110 @ 0x11729110 (31 bytes, 11 insns) */
void f_11729110(void) {
  FTRACE(0x11729110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729110 push ebp */
  push32((uint32_t)(EBP));
  /* 11729111 mov ebp, esp */
  EBP = (ESP);
  /* 11729113 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172911a jbe 0x11729120 */
  if ((C.cf||C.zf)) goto L_11729120;
  /* 1172911c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172911e jmp 0x1172912d */
  goto L_1172912d;
L_11729120:;
  /* 11729120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729123 mov dword ptr [0x11750f34], eax */
  w32((uint32_t)(0x11750f34), (EAX));
  /* 11729128 mov eax, 1 */
  EAX = (0x1u);
L_1172912d:;
  /* 1172912d pop ebp */
  EBP = (pop32());
  /* 1172912e ret  */
  ESPCHK(0x11729110u, _esp0);
  ESP += 4; return;
}

/* FUN_10009130 @ 0x11729130 (89 bytes, 20 insns) */
void f_11729130(void) {
  FTRACE(0x11729130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729130 push ebp */
  push32((uint32_t)(EBP));
  /* 11729131 mov ebp, esp */
  EBP = (ESP);
  /* 11729133 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11729138 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172913a mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 1172913f push eax */
  push32((uint32_t)(EAX));
  /* 11729140 call dword ptr [0x11755364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755364))), 0x11729146u);
  /* 11729146 mov dword ptr [0x117543a8], eax */
  w32((uint32_t)(0x117543a8), (EAX));
  /* 1172914b cmp dword ptr [0x117543a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117543a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729152 jne 0x11729158 */
  if (!C.zf) goto L_11729158;
  /* 11729154 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729156 jmp 0x11729187 */
  goto L_11729187;
L_11729158:;
  /* 11729158 mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 1172915e mov dword ptr [0x1175439c], ecx */
  w32((uint32_t)(0x1175439c), (ECX));
  /* 11729164 mov dword ptr [0x117543a0], 0 */
  w32((uint32_t)(0x117543a0), (0x0u));
  /* 1172916e mov dword ptr [0x117543a4], 0 */
  w32((uint32_t)(0x117543a4), (0x0u));
  /* 11729178 mov dword ptr [0x11754388], 0x10 */
  w32((uint32_t)(0x11754388), (0x10u));
  /* 11729182 mov eax, 1 */
  EAX = (0x1u);
L_11729187:;
  /* 11729187 pop ebp */
  EBP = (pop32());
  /* 11729188 ret  */
  ESPCHK(0x11729130u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x11729190 (85 bytes, 29 insns) */
void f_11729190(void) {
  FTRACE(0x11729190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729190 push ebp */
  push32((uint32_t)(EBP));
  /* 11729191 mov ebp, esp */
  EBP = (ESP);
  /* 11729193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729196 mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 1172919b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172919e mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 117291a4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117291a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 117291a9 mov edx, dword ptr [0x117543a8] */
  EDX = (r32((uint32_t)(0x117543a8)));
  /* 117291af mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_117291b2:;
  /* 117291b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117291b5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117291b8 jae 0x117291df */
  if (!C.cf) goto L_117291df;
  /* 117291ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117291bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117291c0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117291c3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 117291c6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117291cd jae 0x117291d4 */
  if (!C.cf) goto L_117291d4;
  /* 117291cf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117291d2 jmp 0x117291e1 */
  goto L_117291e1;
L_117291d4:;
  /* 117291d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 117291d7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117291da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 117291dd jmp 0x117291b2 */
  goto L_117291b2;
L_117291df:;
  /* 117291df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_117291e1:;
  /* 117291e1 mov esp, ebp */
  ESP = (EBP);
  /* 117291e3 pop ebp */
  EBP = (pop32());
  /* 117291e4 ret  */
  ESPCHK(0x11729190u, _esp0);
  ESP += 4; return;
}

/* FUN_100091f0 @ 0x117291f0 (95 bytes, 33 insns) */
void f_117291f0(void) {
  FTRACE(0x117291f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 117291f0 push ebp */
  push32((uint32_t)(EBP));
  /* 117291f1 mov ebp, esp */
  EBP = (ESP);
  /* 117291f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 117291f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117291f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 117291fc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117291ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11729202 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729205 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11729208 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172920b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729210 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729213 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729215 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729218 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172921b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172921d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172921f jne 0x11729241 */
  if (!C.zf) goto L_11729241;
  /* 11729221 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729224 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11729227 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11729229 jne 0x11729241 */
  if (!C.zf) goto L_11729241;
  /* 1172922b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172922e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11729234 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729236 je 0x11729241 */
  if (C.zf) goto L_11729241;
  /* 11729238 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 1172923f jmp 0x11729248 */
  goto L_11729248;
L_11729241:;
  /* 11729241 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11729248:;
  /* 11729248 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172924b mov esp, ebp */
  ESP = (EBP);
  /* 1172924d pop ebp */
  EBP = (pop32());
  /* 1172924e ret  */
  ESPCHK(0x117291f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009250 @ 0x11729250 (1485 bytes, 453 insns) */
void f_11729250(void) {
  FTRACE(0x11729250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729250 push ebp */
  push32((uint32_t)(EBP));
  /* 11729251 mov ebp, esp */
  EBP = (ESP);
  /* 11729253 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729256 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729259 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172925c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 1172925f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729262 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11729265 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729268 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172926b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172926e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11729271 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11729274 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729277 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172927d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729280 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11729287 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172928a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172928d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729290 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11729293 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729296 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11729298 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172929b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1172929e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117292a1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117292a4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 117292a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117292aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117292ac mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 117292af mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117292b2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 117292b5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 117292b8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 117292bb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 117292be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117292c0 jne 0x117293e8 */
  if (!C.zf) goto L_117293e8;
  /* 117292c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 117292c9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 117292cc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117292cf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 117292d2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117292d6 jbe 0x117292df */
  if ((C.cf||C.zf)) goto L_117292df;
  /* 117292d8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_117292df:;
  /* 117292df mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117292e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117292e5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 117292e8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117292eb jne 0x117293c1 */
  if (!C.zf) goto L_117293c1;
  /* 117292f1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117292f5 jae 0x11729356 */
  if (!C.cf) goto L_11729356;
  /* 117292f7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117292fc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117292ff shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729301 not eax */
  EAX = (~(EAX));
  /* 11729303 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729306 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729309 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1172930d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172930f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729312 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729315 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11729319 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172931c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172931f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11729322 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11729325 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729328 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172932b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1172932e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729331 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729334 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11729338 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172933a jne 0x11729354 */
  if (!C.zf) goto L_11729354;
  /* 1172933c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729341 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11729344 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729346 not eax */
  EAX = (~(EAX));
  /* 11729348 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172934b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172934d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172934f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729352 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11729354:;
  /* 11729354 jmp 0x117293c1 */
  goto L_117293c1;
L_11729356:;
  /* 11729356 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11729359 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172935c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729361 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729363 not edx */
  EDX = (~(EDX));
  /* 11729365 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729368 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172936b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11729372 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11729374 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729377 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172937a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11729381 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729384 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729387 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1172938a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172938d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729390 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729393 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11729396 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729399 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172939c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117293a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117293a2 jne 0x117293c1 */
  if (!C.zf) goto L_117293c1;
  /* 117293a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 117293a7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117293aa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117293af shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117293b1 not edx */
  EDX = (~(EDX));
  /* 117293b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117293b6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 117293b9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117293bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117293be mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_117293c1:;
  /* 117293c1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117293c4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117293c7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117293ca mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 117293cd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 117293d0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117293d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117293d6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 117293d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 117293dc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 117293df mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 117293e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117293e5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_117293e8:;
  /* 117293e8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117293eb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 117293ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117293f1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 117293f4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117293f8 jbe 0x11729401 */
  if ((C.cf||C.zf)) goto L_11729401;
  /* 117293fa mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11729401:;
  /* 11729401 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729404 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11729407 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729409 jne 0x11729565 */
  if (!C.zf) goto L_11729565;
  /* 1172940f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729412 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729415 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11729418 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172941b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1172941e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729421 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11729424 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729428 jbe 0x11729431 */
  if ((C.cf||C.zf)) goto L_11729431;
  /* 1172942a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11729431:;
  /* 11729431 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729434 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729437 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1172943a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172943d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11729440 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729443 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11729446 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172944a jbe 0x11729453 */
  if ((C.cf||C.zf)) goto L_11729453;
  /* 1172944c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11729453:;
  /* 11729453 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11729456 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729459 je 0x1172955f */
  if (C.zf) goto L_1172955f;
  /* 1172945f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729462 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729465 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11729468 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172946b jne 0x11729541 */
  if (!C.zf) goto L_11729541;
  /* 11729471 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729475 jae 0x117294d6 */
  if (!C.cf) goto L_117294d6;
  /* 11729477 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172947c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172947f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729481 not edx */
  EDX = (~(EDX));
  /* 11729483 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729486 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729489 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1172948d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172948f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729492 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729495 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11729499 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172949c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172949f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117294a2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 117294a5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117294a8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117294ab mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 117294ae mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117294b1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117294b4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 117294b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117294ba jne 0x117294d4 */
  if (!C.zf) goto L_117294d4;
  /* 117294bc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117294c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117294c4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117294c6 not edx */
  EDX = (~(EDX));
  /* 117294c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117294cb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117294cd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117294cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117294d2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_117294d4:;
  /* 117294d4 jmp 0x11729541 */
  goto L_11729541;
L_117294d6:;
  /* 117294d6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 117294d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117294dc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 117294e1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 117294e3 not eax */
  EAX = (~(EAX));
  /* 117294e5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 117294e8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117294eb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 117294f2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117294f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 117294f7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117294fa mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11729501 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729504 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729507 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1172950a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172950d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729510 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729513 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11729516 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729519 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172951c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11729520 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11729522 jne 0x11729541 */
  if (!C.zf) goto L_11729541;
  /* 11729524 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11729527 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172952a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172952f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729531 not eax */
  EAX = (~(EAX));
  /* 11729533 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729536 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11729539 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172953b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172953e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11729541:;
  /* 11729541 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729544 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11729547 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 1172954a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172954d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11729550 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729553 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11729556 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729559 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172955c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_1172955f:;
  /* 1172955f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729562 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11729565:;
  /* 11729565 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729568 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172956b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172956d jne 0x1172957b */
  if (!C.zf) goto L_1172957b;
  /* 1172956f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11729572 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729575 je 0x1172968b */
  if (C.zf) goto L_1172968b;
L_1172957b:;
  /* 1172957b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172957e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729581 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11729584 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11729587 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172958a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172958d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11729590 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11729593 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729596 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729599 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1172959c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172959f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117295a2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 117295a5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117295a8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 117295ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117295ae mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 117295b1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117295b4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 117295b7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 117295ba cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117295bd jne 0x1172968b */
  if (!C.zf) goto L_1172968b;
  /* 117295c3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117295c7 jae 0x11729624 */
  if (!C.cf) goto L_11729624;
  /* 117295c9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117295cc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117295cf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 117295d3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117295d6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117295d9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 117295dc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 117295df mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 117295e2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117295e5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 117295e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 117295ea jne 0x11729602 */
  if (!C.zf) goto L_11729602;
  /* 117295ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117295f1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 117295f4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117295f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117295f9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 117295fb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 117295fd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729600 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11729602:;
  /* 11729602 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729607 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172960a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172960c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172960f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729612 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11729616 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11729618 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172961b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172961e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11729622 jmp 0x1172968b */
  goto L_1172968b;
L_11729624:;
  /* 11729624 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729627 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172962a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172962e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729631 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729634 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11729637 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172963a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1172963d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729640 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11729643 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11729645 jne 0x11729662 */
  if (!C.zf) goto L_11729662;
  /* 11729647 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172964a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172964d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729652 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729654 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729657 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172965a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172965c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172965f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11729662:;
  /* 11729662 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729665 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729668 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172966d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172966f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729672 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729675 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1172967c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172967e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729681 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11729684 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1172968b:;
  /* 1172968b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172968e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729691 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11729693 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729696 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729699 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172969c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 1172969f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117296a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117296a4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117296a7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 117296aa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 117296ac mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 117296af cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117296b2 jne 0x11729819 */
  if (!C.zf) goto L_11729819;
  /* 117296b8 cmp dword ptr [0x117543a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117543a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117296bf je 0x11729808 */
  if (C.zf) goto L_11729808;
  /* 117296c5 mov eax, dword ptr [0x11754398] */
  EAX = (r32((uint32_t)(0x11754398)));
  /* 117296ca shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 117296cd mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 117296d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 117296d6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117296d8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 117296db push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 117296e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 117296e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117296e8 push eax */
  push32((uint32_t)(EAX));
  /* 117296e9 call dword ptr [0x11755378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755378))), 0x117296efu);
  /* 117296ef mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 117296f4 mov ecx, dword ptr [0x11754398] */
  ECX = (r32((uint32_t)(0x11754398)));
  /* 117296fa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 117296fc mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 11729701 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11729704 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11729706 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172970c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1172970f mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 11729714 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11729717 mov edx, dword ptr [0x11754398] */
  EDX = (r32((uint32_t)(0x11754398)));
  /* 1172971d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11729728 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172972d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11729730 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11729733 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11729736 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172973b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172973e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11729741 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 11729747 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172974a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1172974e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729750 jne 0x11729766 */
  if (!C.zf) goto L_11729766;
  /* 11729752 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 11729758 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172975b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1172975d mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 11729763 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11729766:;
  /* 11729766 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172976c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729770 jne 0x11729808 */
  if (!C.zf) goto L_11729808;
  /* 11729776 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1172977b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172977d mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 11729782 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11729785 push ecx */
  push32((uint32_t)(ECX));
  /* 11729786 call dword ptr [0x11755378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755378))), 0x1172978cu);
  /* 1172978c mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 11729792 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11729795 push eax */
  push32((uint32_t)(EAX));
  /* 11729796 push 0 */
  push32((uint32_t)(0x0u));
  /* 11729798 mov ecx, dword ptr [0x117543ac] */
  ECX = (r32((uint32_t)(0x117543ac)));
  /* 1172979e push ecx */
  push32((uint32_t)(ECX));
  /* 1172979f call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x117297a5u);
  /* 117297a5 mov edx, dword ptr [0x117543a4] */
  EDX = (r32((uint32_t)(0x117543a4)));
  /* 117297ab imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 117297ae mov eax, dword ptr [0x117543a8] */
  EAX = (r32((uint32_t)(0x117543a8)));
  /* 117297b3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117297b5 mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 117297bb add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117297be sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117297c0 push eax */
  push32((uint32_t)(EAX));
  /* 117297c1 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 117297c7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 117297ca push edx */
  push32((uint32_t)(EDX));
  /* 117297cb mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 117297d0 push eax */
  push32((uint32_t)(EAX));
  /* 117297d1 call 0x1172b200 */
  push32(0x117297d6u); f_1172b200();
  /* 117297d6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 117297d9 mov ecx, dword ptr [0x117543a4] */
  ECX = (r32((uint32_t)(0x117543a4)));
  /* 117297df sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117297e2 mov dword ptr [0x117543a4], ecx */
  w32((uint32_t)(0x117543a4), (ECX));
  /* 117297e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 117297eb cmp edx, dword ptr [0x117543a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117543a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117297f1 jbe 0x117297fc */
  if ((C.cf||C.zf)) goto L_117297fc;
  /* 117297f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 117297f6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 117297f9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_117297fc:;
  /* 117297fc mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 11729802 mov dword ptr [0x1175439c], ecx */
  w32((uint32_t)(0x1175439c), (ECX));
L_11729808:;
  /* 11729808 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172980b mov dword ptr [0x117543a0], edx */
  w32((uint32_t)(0x117543a0), (EDX));
  /* 11729811 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729814 mov dword ptr [0x11754398], eax */
  w32((uint32_t)(0x11754398), (EAX));
L_11729819:;
  /* 11729819 mov esp, ebp */
  ESP = (EBP);
  /* 1172981b pop ebp */
  EBP = (pop32());
  /* 1172981c ret  */
  ESPCHK(0x11729250u, _esp0);
  ESP += 4; return;
}

/* FUN_10009820 @ 0x11729820 (1334 bytes, 427 insns) */
void f_11729820(void) {
  FTRACE(0x11729820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729820 push ebp */
  push32((uint32_t)(EBP));
  /* 11729821 mov ebp, esp */
  EBP = (ESP);
  /* 11729823 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729826 push esi */
  push32((uint32_t)(ESI));
  /* 11729827 mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 1172982c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172982f mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 11729835 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729837 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1172983a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172983d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729840 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11729843 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11729846 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729849 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1172984c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172984f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11729852 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729856 jge 0x1172986c */
  if ((C.sf==C.of)) goto L_1172986c;
  /* 11729858 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172985b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172985e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729860 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11729863 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1172986a jmp 0x11729881 */
  goto L_11729881;
L_1172986c:;
  /* 1172986c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11729873 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729876 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729879 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172987c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172987e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11729881:;
  /* 11729881 mov ecx, dword ptr [0x1175439c] */
  ECX = (r32((uint32_t)(0x1175439c)));
  /* 11729887 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1172988a:;
  /* 1172988a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172988d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729890 jae 0x117298b6 */
  if (!C.cf) goto L_117298b6;
  /* 11729892 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729895 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11729898 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 1172989a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172989d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 117298a0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 117298a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 117298a5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 117298a7 je 0x117298ab */
  if (C.zf) goto L_117298ab;
  /* 117298a9 jmp 0x117298b6 */
  goto L_117298b6;
L_117298ab:;
  /* 117298ab mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298ae add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 117298b1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 117298b4 jmp 0x1172988a */
  goto L_1172988a;
L_117298b6:;
  /* 117298b6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298b9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117298bc jne 0x1172999d */
  if (!C.zf) goto L_1172999d;
  /* 117298c2 mov eax, dword ptr [0x117543a8] */
  EAX = (r32((uint32_t)(0x117543a8)));
  /* 117298c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_117298ca:;
  /* 117298ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298cd cmp ecx, dword ptr [0x1175439c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175439c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117298d3 jae 0x117298f9 */
  if (!C.cf) goto L_117298f9;
  /* 117298d5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298d8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117298db and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 117298dd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298e0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 117298e3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 117298e6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 117298e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117298ea je 0x117298ee */
  if (C.zf) goto L_117298ee;
  /* 117298ec jmp 0x117298f9 */
  goto L_117298f9;
L_117298ee:;
  /* 117298ee mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298f1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 117298f4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 117298f7 jmp 0x117298ca */
  goto L_117298ca;
L_117298f9:;
  /* 117298f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 117298fc cmp ecx, dword ptr [0x1175439c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175439c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729902 jne 0x1172999d */
  if (!C.zf) goto L_1172999d;
L_11729908:;
  /* 11729908 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172990b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172990e jae 0x11729926 */
  if (!C.cf) goto L_11729926;
  /* 11729910 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729913 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729917 je 0x1172991b */
  if (C.zf) goto L_1172991b;
  /* 11729919 jmp 0x11729926 */
  goto L_11729926;
L_1172991b:;
  /* 1172991b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172991e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729921 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11729924 jmp 0x11729908 */
  goto L_11729908;
L_11729926:;
  /* 11729926 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729929 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172992c jne 0x11729977 */
  if (!C.zf) goto L_11729977;
  /* 1172992e mov eax, dword ptr [0x117543a8] */
  EAX = (r32((uint32_t)(0x117543a8)));
  /* 11729933 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11729936:;
  /* 11729936 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729939 cmp ecx, dword ptr [0x1175439c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175439c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172993f jae 0x11729957 */
  if (!C.cf) goto L_11729957;
  /* 11729941 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729944 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729948 je 0x1172994c */
  if (C.zf) goto L_1172994c;
  /* 1172994a jmp 0x11729957 */
  goto L_11729957;
L_1172994c:;
  /* 1172994c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172994f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729952 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11729955 jmp 0x11729936 */
  goto L_11729936;
L_11729957:;
  /* 11729957 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172995a cmp ecx, dword ptr [0x1175439c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1175439c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729960 jne 0x11729977 */
  if (!C.zf) goto L_11729977;
  /* 11729962 call 0x11729d60 */
  push32(0x11729967u); f_11729d60();
  /* 11729967 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1172996a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172996e jne 0x11729977 */
  if (!C.zf) goto L_11729977;
  /* 11729970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729972 jmp 0x11729d51 */
  goto L_11729d51;
L_11729977:;
  /* 11729977 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172997a push edx */
  push32((uint32_t)(EDX));
  /* 1172997b call 0x11729e70 */
  push32(0x11729980u); f_11729e70();
  /* 11729980 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11729983 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729986 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11729989 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1172998b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172998e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11729991 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729994 jne 0x1172999d */
  if (!C.zf) goto L_1172999d;
  /* 11729996 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729998 jmp 0x11729d51 */
  goto L_11729d51;
L_1172999d:;
  /* 1172999d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 117299a0 mov dword ptr [0x1175439c], edx */
  w32((uint32_t)(0x1175439c), (EDX));
  /* 117299a6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 117299a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 117299ac mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 117299af mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117299b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 117299b4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 117299b7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 117299bb je 0x117299e0 */
  if (C.zf) goto L_117299e0;
  /* 117299bd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117299c0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117299c3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 117299c6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 117299ca mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 117299cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 117299d0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 117299d3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 117299da or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 117299dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 117299de jne 0x11729a15 */
  if (!C.zf) goto L_11729a15;
L_117299e0:;
  /* 117299e0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_117299e7:;
  /* 117299e7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117299ea mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117299ed mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 117299f0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 117299f4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 117299f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 117299fa mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 117299fd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11729a04 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11729a06 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11729a08 jne 0x11729a15 */
  if (!C.zf) goto L_11729a15;
  /* 11729a0a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729a0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729a10 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11729a13 jmp 0x117299e7 */
  goto L_117299e7;
L_11729a15:;
  /* 11729a15 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729a18 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11729a1e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729a21 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11729a28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11729a2b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11729a32 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729a35 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729a38 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11729a3b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11729a3f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11729a42 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729a46 jne 0x11729a62 */
  if (!C.zf) goto L_11729a62;
  /* 11729a48 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11729a4f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729a52 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729a55 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11729a58 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11729a5f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11729a62:;
  /* 11729a62 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729a66 jl 0x11729a7b */
  if ((C.sf!=C.of)) goto L_11729a7b;
  /* 11729a68 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729a6b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11729a6d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11729a70 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729a73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729a76 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11729a79 jmp 0x11729a62 */
  goto L_11729a62;
L_11729a7b:;
  /* 11729a7b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729a7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729a81 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11729a85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11729a88 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729a8b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11729a8d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729a90 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11729a93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729a96 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11729a99 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729a9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11729a9f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729aa3 jle 0x11729aac */
  if ((C.zf||C.sf!=C.of)) goto L_11729aac;
  /* 11729aa5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11729aac:;
  /* 11729aac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729aaf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729ab2 je 0x11729cd0 */
  if (C.zf) goto L_11729cd0;
  /* 11729ab8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729abb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729abe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11729ac1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729ac4 jne 0x11729b9a */
  if (!C.zf) goto L_11729b9a;
  /* 11729aca cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729ace jge 0x11729b2f */
  if ((C.sf==C.of)) goto L_11729b2f;
  /* 11729ad0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729ad5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729ad8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729ada not eax */
  EAX = (~(EAX));
  /* 11729adc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729adf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729ae2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11729ae6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11729ae8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729aeb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729aee mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11729af2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729af5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729af8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11729afb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11729afe mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b01 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729b04 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11729b07 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b0a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729b0d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11729b11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11729b13 jne 0x11729b2d */
  if (!C.zf) goto L_11729b2d;
  /* 11729b15 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729b1a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729b1d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729b1f not eax */
  EAX = (~(EAX));
  /* 11729b21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729b24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11729b26 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11729b28 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729b2b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11729b2d:;
  /* 11729b2d jmp 0x11729b9a */
  goto L_11729b9a;
L_11729b2f:;
  /* 11729b2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729b32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729b35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729b3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729b3c not edx */
  EDX = (~(EDX));
  /* 11729b3e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729b41 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b44 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11729b4b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11729b4d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729b50 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b53 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11729b5a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b5d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729b60 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11729b63 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11729b66 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b69 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729b6c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11729b6f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729b72 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729b75 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11729b79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729b7b jne 0x11729b9a */
  if (!C.zf) goto L_11729b9a;
  /* 11729b7d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729b80 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729b83 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729b88 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729b8a not edx */
  EDX = (~(EDX));
  /* 11729b8c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729b8f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11729b92 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11729b94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729b97 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11729b9a:;
  /* 11729b9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729b9d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11729ba0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729ba3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11729ba6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11729ba9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bac mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11729baf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bb2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11729bb5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11729bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729bbc je 0x11729cd0 */
  if (C.zf) goto L_11729cd0;
  /* 11729bc2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729bc8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11729bcb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11729bce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729bd4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11729bd7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11729bda mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729be0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11729be3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729be6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729be9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11729bec mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11729bf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bf5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11729bf8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bfb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729bfe mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11729c01 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729c04 jne 0x11729cd0 */
  if (!C.zf) goto L_11729cd0;
  /* 11729c0a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729c0e jge 0x11729c6a */
  if ((C.sf==C.of)) goto L_11729c6a;
  /* 11729c10 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c13 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c16 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11729c1a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c1d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c20 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11729c23 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11729c25 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c28 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c2b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11729c2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729c30 jne 0x11729c48 */
  if (!C.zf) goto L_11729c48;
  /* 11729c32 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729c37 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729c3a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729c3c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729c3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11729c41 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11729c43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729c46 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11729c48:;
  /* 11729c48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729c4d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729c50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729c52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729c55 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c58 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11729c5c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11729c5e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729c61 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c64 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11729c68 jmp 0x11729cd0 */
  goto L_11729cd0;
L_11729c6a:;
  /* 11729c6a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c6d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c70 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11729c74 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c77 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c7a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11729c7d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11729c7f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729c82 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729c85 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11729c88 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729c8a jne 0x11729ca7 */
  if (!C.zf) goto L_11729ca7;
  /* 11729c8c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729c8f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729c92 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11729c97 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11729c99 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729c9c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11729c9f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11729ca1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729ca4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11729ca7:;
  /* 11729ca7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729caa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729cad mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11729cb2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11729cb4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729cb7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729cba mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11729cc1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11729cc3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729cc6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729cc9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11729cd0:;
  /* 11729cd0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729cd4 je 0x11729cea */
  if (C.zf) goto L_11729cea;
  /* 11729cd6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729cd9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729cdc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11729cde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729ce1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729ce4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729ce7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11729cea:;
  /* 11729cea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729ced add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729cf0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11729cf3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729cf6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729cf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729cfc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11729cfe mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729d01 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729d04 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729d07 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729d0a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11729d0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729d10 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11729d12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729d15 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11729d17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729d1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729d1d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11729d1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11729d21 jne 0x11729d43 */
  if (!C.zf) goto L_11729d43;
  /* 11729d23 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729d26 cmp eax, dword ptr [0x117543a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117543a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729d2c jne 0x11729d43 */
  if (!C.zf) goto L_11729d43;
  /* 11729d2e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729d31 cmp ecx, dword ptr [0x11754398] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11754398))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729d37 jne 0x11729d43 */
  if (!C.zf) goto L_11729d43;
  /* 11729d39 mov dword ptr [0x117543a0], 0 */
  w32((uint32_t)(0x117543a0), (0x0u));
L_11729d43:;
  /* 11729d43 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11729d46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11729d49 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11729d4b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729d4e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11729d51:;
  /* 11729d51 pop esi */
  ESI = (pop32());
  /* 11729d52 mov esp, ebp */
  ESP = (EBP);
  /* 11729d54 pop ebp */
  EBP = (pop32());
  /* 11729d55 ret  */
  ESPCHK(0x11729820u, _esp0);
  ESP += 4; return;
}

/* FUN_10009d60 @ 0x11729d60 (271 bytes, 78 insns) */
void f_11729d60(void) {
  FTRACE(0x11729d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729d60 push ebp */
  push32((uint32_t)(EBP));
  /* 11729d61 mov ebp, esp */
  EBP = (ESP);
  /* 11729d63 push ecx */
  push32((uint32_t)(ECX));
  /* 11729d64 mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 11729d69 cmp eax, dword ptr [0x11754388] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11754388))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729d6f jne 0x11729dbb */
  if (!C.zf) goto L_11729dbb;
  /* 11729d71 mov ecx, dword ptr [0x11754388] */
  ECX = (r32((uint32_t)(0x11754388)));
  /* 11729d77 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729d7a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11729d7d push ecx */
  push32((uint32_t)(ECX));
  /* 11729d7e mov edx, dword ptr [0x117543a8] */
  EDX = (r32((uint32_t)(0x117543a8)));
  /* 11729d84 push edx */
  push32((uint32_t)(EDX));
  /* 11729d85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11729d87 mov eax, dword ptr [0x117543ac] */
  EAX = (r32((uint32_t)(0x117543ac)));
  /* 11729d8c push eax */
  push32((uint32_t)(EAX));
  /* 11729d8d call dword ptr [0x11755384] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755384))), 0x11729d93u);
  /* 11729d93 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11729d96 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729d9a jne 0x11729da3 */
  if (!C.zf) goto L_11729da3;
  /* 11729d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729d9e jmp 0x11729e6b */
  goto L_11729e6b;
L_11729da3:;
  /* 11729da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729da6 mov dword ptr [0x117543a8], ecx */
  w32((uint32_t)(0x117543a8), (ECX));
  /* 11729dac mov edx, dword ptr [0x11754388] */
  EDX = (r32((uint32_t)(0x11754388)));
  /* 11729db2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729db5 mov dword ptr [0x11754388], edx */
  w32((uint32_t)(0x11754388), (EDX));
L_11729dbb:;
  /* 11729dbb mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 11729dc0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11729dc3 mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 11729dc9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729dcb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11729dce push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11729dd3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11729dd5 mov edx, dword ptr [0x117543ac] */
  EDX = (r32((uint32_t)(0x117543ac)));
  /* 11729ddb push edx */
  push32((uint32_t)(EDX));
  /* 11729ddc call dword ptr [0x11755364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755364))), 0x11729de2u);
  /* 11729de2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729de5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11729de8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729deb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729def jne 0x11729df5 */
  if (!C.zf) goto L_11729df5;
  /* 11729df1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729df3 jmp 0x11729e6b */
  goto L_11729e6b;
L_11729df5:;
  /* 11729df5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11729df7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11729dfc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11729e01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11729e03 call dword ptr [0x11755388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755388))), 0x11729e09u);
  /* 11729e09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e0c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11729e0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e12 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729e16 jne 0x11729e32 */
  if (!C.zf) goto L_11729e32;
  /* 11729e18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e1b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11729e1e push ecx */
  push32((uint32_t)(ECX));
  /* 11729e1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11729e21 mov edx, dword ptr [0x117543ac] */
  EDX = (r32((uint32_t)(0x117543ac)));
  /* 11729e27 push edx */
  push32((uint32_t)(EDX));
  /* 11729e28 call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x11729e2eu);
  /* 11729e2e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11729e30 jmp 0x11729e6b */
  goto L_11729e6b;
L_11729e32:;
  /* 11729e32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e35 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11729e3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e3e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11729e45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e48 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11729e4f mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 11729e54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729e57 mov dword ptr [0x117543a4], eax */
  w32((uint32_t)(0x117543a4), (EAX));
  /* 11729e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729e5f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11729e62 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11729e68 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11729e6b:;
  /* 11729e6b mov esp, ebp */
  ESP = (EBP);
  /* 11729e6d pop ebp */
  EBP = (pop32());
  /* 11729e6e ret  */
  ESPCHK(0x11729d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e70 @ 0x11729e70 (494 bytes, 149 insns) */
void f_11729e70(void) {
  FTRACE(0x11729e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11729e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11729e71 mov ebp, esp */
  EBP = (ESP);
  /* 11729e73 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729e76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729e79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11729e7c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11729e7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729e82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11729e85 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11729e88 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11729e8f:;
  /* 11729e8f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729e93 jl 0x11729ea8 */
  if ((C.sf!=C.of)) goto L_11729ea8;
  /* 11729e95 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11729e98 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11729e9a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11729e9d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729ea0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729ea3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11729ea6 jmp 0x11729e8f */
  goto L_11729e8f;
L_11729ea8:;
  /* 11729ea8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729eab imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11729eb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11729eb4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11729ebb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11729ebe mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11729ec5 jmp 0x11729ed0 */
  goto L_11729ed0;
L_11729ec7:;
  /* 11729ec7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729eca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729ecd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11729ed0:;
  /* 11729ed0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729ed4 jge 0x11729ef6 */
  if ((C.sf==C.of)) goto L_11729ef6;
  /* 11729ed6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11729ed9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729edc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11729edf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11729ee2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729ee5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729ee8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11729eeb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729eee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729ef1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11729ef4 jmp 0x11729ec7 */
  goto L_11729ec7;
L_11729ef6:;
  /* 11729ef6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729ef9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11729efc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11729eff mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11729f02 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f04 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11729f07 push 4 */
  push32((uint32_t)(0x4u));
  /* 11729f09 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11729f0e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11729f13 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729f16 push edx */
  push32((uint32_t)(EDX));
  /* 11729f17 call dword ptr [0x11755388] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755388))), 0x11729f1du);
  /* 11729f1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11729f1f jne 0x11729f29 */
  if (!C.zf) goto L_11729f29;
  /* 11729f21 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11729f24 jmp 0x1172a05a */
  goto L_1172a05a;
L_11729f29:;
  /* 11729f29 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729f2c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f31 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11729f34 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729f37 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11729f3a jmp 0x11729f48 */
  goto L_11729f48;
L_11729f3c:;
  /* 11729f3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729f3f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f45 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11729f48:;
  /* 11729f48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729f4b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11729f4e ja 0x11729fad */
  if ((!C.cf&&!C.zf)) goto L_11729fad;
  /* 11729f50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729f53 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11729f5a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729f5d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11729f67 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11729f6a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f6d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11729f70 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f73 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11729f79 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f7c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f82 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f85 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11729f88 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f8b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11729f91 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f94 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11729f97 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729f9a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729f9f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11729fa2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11729fa5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11729fab jmp 0x11729f3c */
  goto L_11729f3c;
L_11729fad:;
  /* 11729fad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11729fb0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729fb6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11729fb9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11729fbc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729fbf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729fc2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11729fc5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729fc8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11729fcb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11729fce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729fd1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729fd4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11729fd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11729fda add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11729fdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729fe0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11729fe3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729fe6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11729fe9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11729fec mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11729fef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11729ff2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11729ff5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11729ff8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11729ffb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 1172a003 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a006 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a009 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 1172a014 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a017 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 1172a01b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a01e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 1172a021 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172a024 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a027 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 1172a02a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a02c jne 0x1172a03d */
  if (!C.zf) goto L_1172a03d;
  /* 1172a02e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a031 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a034 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172a037 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a03a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1172a03d:;
  /* 1172a03d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a042 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a045 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a047 not edx */
  EDX = (~(EDX));
  /* 1172a049 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a04c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172a04f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a054 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1172a057 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_1172a05a:;
  /* 1172a05a mov esp, ebp */
  ESP = (EBP);
  /* 1172a05c pop ebp */
  EBP = (pop32());
  /* 1172a05d ret  */
  ESPCHK(0x11729e70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a060 @ 0x1172a060 (1515 bytes, 489 insns) */
void f_1172a060(void) {
  FTRACE(0x1172a060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172a060 push ebp */
  push32((uint32_t)(EBP));
  /* 1172a061 mov ebp, esp */
  EBP = (ESP);
  /* 1172a063 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a066 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172a069 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a06c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1172a06e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1172a071 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a074 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1172a077 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 1172a07a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a07d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172a080 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a083 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172a086 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172a089 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1172a08c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172a08f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a092 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172a098 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a09b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1172a0a2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1172a0a5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172a0a8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a0ab mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1172a0ae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a0b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172a0b3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a0b6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 1172a0b9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a0bc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a0bf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1172a0c2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a0c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172a0c7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172a0ca mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a0cd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a0d0 jle 0x1172a386 */
  if ((C.zf||C.sf!=C.of)) goto L_1172a386;
  /* 1172a0d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a0d9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172a0dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a0de jne 0x1172a0eb */
  if (!C.zf) goto L_1172a0eb;
  /* 1172a0e0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a0e3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a0e6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a0e9 jle 0x1172a0f2 */
  if ((C.zf||C.sf!=C.of)) goto L_1172a0f2;
L_1172a0eb:;
  /* 1172a0eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172a0ed jmp 0x1172a647 */
  goto L_1172a647;
L_1172a0f2:;
  /* 1172a0f2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a0f5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1172a0f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a0fb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172a0fe cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a102 jbe 0x1172a10b */
  if ((C.cf||C.zf)) goto L_1172a10b;
  /* 1172a104 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1172a10b:;
  /* 1172a10b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a10e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a111 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a114 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a117 jne 0x1172a1ed */
  if (!C.zf) goto L_1172a1ed;
  /* 1172a11d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a121 jae 0x1172a182 */
  if (!C.cf) goto L_1172a182;
  /* 1172a123 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a128 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a12b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a12d not edx */
  EDX = (~(EDX));
  /* 1172a12f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a132 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a135 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1172a139 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172a13b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a13e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a141 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1172a145 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a148 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a14b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1172a14e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172a151 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a154 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a157 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1172a15a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a15d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a160 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1172a164 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a166 jne 0x1172a180 */
  if (!C.zf) goto L_1172a180;
  /* 1172a168 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a16d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a170 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a172 not edx */
  EDX = (~(EDX));
  /* 1172a174 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a177 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172a179 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a17b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a17e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1172a180:;
  /* 1172a180 jmp 0x1172a1ed */
  goto L_1172a1ed;
L_1172a182:;
  /* 1172a182 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a185 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a188 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a18d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a18f not eax */
  EAX = (~(EAX));
  /* 1172a191 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a194 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a197 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1172a19e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a1a0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a1a3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a1a6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1172a1ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a1b0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a1b3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1172a1b6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172a1b9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a1bc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a1bf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1172a1c2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a1c5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a1c8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172a1cc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a1ce jne 0x1172a1ed */
  if (!C.zf) goto L_1172a1ed;
  /* 1172a1d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a1d3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a1d6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a1db shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a1dd not eax */
  EAX = (~(EAX));
  /* 1172a1df mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a1e2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a1e5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172a1e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a1ea mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1172a1ed:;
  /* 1172a1ed mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a1f0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172a1f3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a1f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a1f9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1172a1fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a1ff mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172a202 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a205 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172a208 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1172a20b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a20e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a211 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a214 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172a217 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a21b jle 0x1172a367 */
  if ((C.zf||C.sf!=C.of)) goto L_1172a367;
  /* 1172a221 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a224 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a227 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1172a22a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a22d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1172a230 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a233 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1172a236 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a23a jbe 0x1172a243 */
  if ((C.cf||C.zf)) goto L_1172a243;
  /* 1172a23c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1172a243:;
  /* 1172a243 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a246 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172a249 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 1172a24c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1172a24f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a252 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a255 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a258 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1172a25b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a25e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a261 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1172a264 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a267 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a26a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1172a26d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a270 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a273 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a276 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1172a279 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a27c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a27f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a282 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a285 jne 0x1172a353 */
  if (!C.zf) goto L_1172a353;
  /* 1172a28b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a28f jae 0x1172a2ec */
  if (!C.cf) goto L_1172a2ec;
  /* 1172a291 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a294 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a297 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172a29b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a29e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a2a1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1172a2a4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172a2a7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a2aa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a2ad mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1172a2b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a2b2 jne 0x1172a2ca */
  if (!C.zf) goto L_1172a2ca;
  /* 1172a2b4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a2b9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a2bc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a2c1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172a2c3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a2c8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1172a2ca:;
  /* 1172a2ca mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a2cf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a2d2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a2d4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a2d7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a2da mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 1172a2de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a2e0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a2e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a2e6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 1172a2ea jmp 0x1172a353 */
  goto L_1172a353;
L_1172a2ec:;
  /* 1172a2ec mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a2ef add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a2f2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172a2f6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a2f9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a2fc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1172a2ff add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172a302 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a305 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a308 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 1172a30b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a30d jne 0x1172a32a */
  if (!C.zf) goto L_1172a32a;
  /* 1172a30f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a312 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a315 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a31a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a31c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a31f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a322 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a327 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_1172a32a:;
  /* 1172a32a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a32d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a330 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a335 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a337 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a33a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a33d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1172a344 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a346 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a349 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a34c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_1172a353:;
  /* 1172a353 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a356 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a359 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1172a35b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a35e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a361 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a364 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_1172a367:;
  /* 1172a367 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a36a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a36d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a370 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1172a372 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a375 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a378 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a37b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a37e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1172a381 jmp 0x1172a642 */
  goto L_1172a642;
L_1172a386:;
  /* 1172a386 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a389 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a38c jge 0x1172a642 */
  if ((C.sf==C.of)) goto L_1172a642;
  /* 1172a392 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a395 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a398 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a39b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1172a39d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172a3a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a3a3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a3a6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a3a9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 1172a3ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a3af add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a3b2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1172a3b5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a3b8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a3bb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172a3be mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a3c1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1172a3c4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a3c7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1172a3ca cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a3ce jbe 0x1172a3d7 */
  if ((C.cf||C.zf)) goto L_1172a3d7;
  /* 1172a3d0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1172a3d7:;
  /* 1172a3d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a3da and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172a3dd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a3df jne 0x1172a520 */
  if (!C.zf) goto L_1172a520;
  /* 1172a3e5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172a3e8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1172a3eb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a3ee mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172a3f1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a3f5 jbe 0x1172a3fe */
  if ((C.cf||C.zf)) goto L_1172a3fe;
  /* 1172a3f7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_1172a3fe:;
  /* 1172a3fe mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a401 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a404 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a407 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a40a jne 0x1172a4e0 */
  if (!C.zf) goto L_1172a4e0;
  /* 1172a410 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a414 jae 0x1172a475 */
  if (!C.cf) goto L_1172a475;
  /* 1172a416 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a41b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a41e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a420 not edx */
  EDX = (~(EDX));
  /* 1172a422 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a425 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a428 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1172a42c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172a42e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a431 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a434 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1172a438 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a43b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a43e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1172a441 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172a444 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a447 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a44a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1172a44d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a450 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a453 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1172a457 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a459 jne 0x1172a473 */
  if (!C.zf) goto L_1172a473;
  /* 1172a45b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a460 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a463 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a465 not edx */
  EDX = (~(EDX));
  /* 1172a467 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a46a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172a46c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a46e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a471 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1172a473:;
  /* 1172a473 jmp 0x1172a4e0 */
  goto L_1172a4e0;
L_1172a475:;
  /* 1172a475 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a478 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a47b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a480 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a482 not eax */
  EAX = (~(EAX));
  /* 1172a484 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a487 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a48a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1172a491 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a493 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a496 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a499 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 1172a4a0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a4a3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a4a6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1172a4a9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172a4ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a4af add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a4b2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 1172a4b5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a4b8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a4bb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1172a4bf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a4c1 jne 0x1172a4e0 */
  if (!C.zf) goto L_1172a4e0;
  /* 1172a4c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172a4c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a4c9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a4ce shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a4d0 not eax */
  EAX = (~(EAX));
  /* 1172a4d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a4d5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a4d8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172a4da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a4dd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1172a4e0:;
  /* 1172a4e0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a4e3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172a4e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a4e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a4ec mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1172a4ef mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a4f2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172a4f5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172a4f8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172a4fb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1172a4fe mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a501 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a504 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172a507 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a50a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1172a50d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a510 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1172a513 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a517 jbe 0x1172a520 */
  if ((C.cf||C.zf)) goto L_1172a520;
  /* 1172a519 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_1172a520:;
  /* 1172a520 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172a523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172a526 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 1172a529 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1172a52c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a52f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a532 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a535 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1172a538 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a53b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a53e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1172a541 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172a544 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a547 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1172a54a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a54d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a550 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a553 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1172a556 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a559 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a55c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172a55f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a562 jne 0x1172a62e */
  if (!C.zf) goto L_1172a62e;
  /* 1172a568 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a56c jae 0x1172a5c8 */
  if (!C.cf) goto L_1172a5c8;
  /* 1172a56e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a571 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a574 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1172a578 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a57b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a57e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1172a581 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172a583 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a586 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a589 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1172a58c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a58e jne 0x1172a5a6 */
  if (!C.zf) goto L_1172a5a6;
  /* 1172a590 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a595 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172a598 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a59a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a59d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172a59f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172a5a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a5a4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1172a5a6:;
  /* 1172a5a6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a5ab mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172a5ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a5b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a5b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a5b6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1172a5ba or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172a5bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a5bf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a5c2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 1172a5c6 jmp 0x1172a62e */
  goto L_1172a62e;
L_1172a5c8:;
  /* 1172a5c8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a5cb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a5ce movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1172a5d2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a5d5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a5d8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1172a5db add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172a5dd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a5e0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a5e3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1172a5e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a5e8 jne 0x1172a605 */
  if (!C.zf) goto L_1172a605;
  /* 1172a5ea mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172a5ed sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a5f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1172a5f5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1172a5f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a5fa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172a5fd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1172a5ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172a602 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_1172a605:;
  /* 1172a605 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172a608 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a60b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a610 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a612 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a615 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a618 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1172a61f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172a621 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a624 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172a627 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1172a62e:;
  /* 1172a62e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a631 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a634 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172a636 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172a639 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a63c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172a63f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1172a642:;
  /* 1172a642 mov eax, 1 */
  EAX = (0x1u);
L_1172a647:;
  /* 1172a647 mov esp, ebp */
  ESP = (EBP);
  /* 1172a649 pop ebp */
  EBP = (pop32());
  /* 1172a64a ret  */
  ESPCHK(0x1172a060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a650 @ 0x1172a650 (304 bytes, 79 insns) */
void f_1172a650(void) {
  FTRACE(0x1172a650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172a650 push ebp */
  push32((uint32_t)(EBP));
  /* 1172a651 mov ebp, esp */
  EBP = (ESP);
  /* 1172a653 push ecx */
  push32((uint32_t)(ECX));
  /* 1172a654 cmp dword ptr [0x117543a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x117543a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a65b je 0x1172a77c */
  if (C.zf) goto L_1172a77c;
  /* 1172a661 mov eax, dword ptr [0x11754398] */
  EAX = (r32((uint32_t)(0x11754398)));
  /* 1172a666 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 1172a669 mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 1172a66f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172a672 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a674 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172a677 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1172a67c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1172a681 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172a684 push eax */
  push32((uint32_t)(EAX));
  /* 1172a685 call dword ptr [0x11755378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755378))), 0x1172a68bu);
  /* 1172a68b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172a690 mov ecx, dword ptr [0x11754398] */
  ECX = (r32((uint32_t)(0x11754398)));
  /* 1172a696 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172a698 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a69d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1172a6a0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1172a6a2 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6a8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1172a6ab mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6b0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172a6b3 mov edx, dword ptr [0x11754398] */
  EDX = (r32((uint32_t)(0x11754398)));
  /* 1172a6b9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 1172a6c4 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172a6cc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 1172a6cf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172a6d2 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6d7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172a6da mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 1172a6dd mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6e3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172a6e6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1172a6ea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172a6ec jne 0x1172a702 */
  if (!C.zf) goto L_1172a702;
  /* 1172a6ee mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6f4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172a6f7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1172a6f9 mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 1172a6ff mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_1172a702:;
  /* 1172a702 mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172a708 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a70c jne 0x1172a772 */
  if (!C.zf) goto L_1172a772;
  /* 1172a70e cmp dword ptr [0x117543a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x117543a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a715 jle 0x1172a772 */
  if ((C.zf||C.sf!=C.of)) goto L_1172a772;
  /* 1172a717 mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a71c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1172a71f push ecx */
  push32((uint32_t)(ECX));
  /* 1172a720 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172a722 mov edx, dword ptr [0x117543ac] */
  EDX = (r32((uint32_t)(0x117543ac)));
  /* 1172a728 push edx */
  push32((uint32_t)(EDX));
  /* 1172a729 call dword ptr [0x11755374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755374))), 0x1172a72fu);
  /* 1172a72f mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 1172a734 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172a737 mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 1172a73d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a73f mov edx, dword ptr [0x117543a0] */
  EDX = (r32((uint32_t)(0x117543a0)));
  /* 1172a745 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a748 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a74a push ecx */
  push32((uint32_t)(ECX));
  /* 1172a74b mov eax, dword ptr [0x117543a0] */
  EAX = (r32((uint32_t)(0x117543a0)));
  /* 1172a750 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a753 push eax */
  push32((uint32_t)(EAX));
  /* 1172a754 mov ecx, dword ptr [0x117543a0] */
  ECX = (r32((uint32_t)(0x117543a0)));
  /* 1172a75a push ecx */
  push32((uint32_t)(ECX));
  /* 1172a75b call 0x1172b200 */
  push32(0x1172a760u); f_1172b200();
  /* 1172a760 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a763 mov edx, dword ptr [0x117543a4] */
  EDX = (r32((uint32_t)(0x117543a4)));
  /* 1172a769 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a76c mov dword ptr [0x117543a4], edx */
  w32((uint32_t)(0x117543a4), (EDX));
L_1172a772:;
  /* 1172a772 mov dword ptr [0x117543a0], 0 */
  w32((uint32_t)(0x117543a0), (0x0u));
L_1172a77c:;
  /* 1172a77c mov esp, ebp */
  ESP = (EBP);
  /* 1172a77e pop ebp */
  EBP = (pop32());
  /* 1172a77f ret  */
  ESPCHK(0x1172a650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x1172a780 (1565 bytes, 343 insns) */
void f_1172a780(void) {
  FTRACE(0x1172a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172a780 push ebp */
  push32((uint32_t)(EBP));
  /* 1172a781 mov ebp, esp */
  EBP = (ESP);
  /* 1172a783 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a789 mov eax, dword ptr [0x117543a4] */
  EAX = (r32((uint32_t)(0x117543a4)));
  /* 1172a78e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172a791 push eax */
  push32((uint32_t)(EAX));
  /* 1172a792 mov ecx, dword ptr [0x117543a8] */
  ECX = (r32((uint32_t)(0x117543a8)));
  /* 1172a798 push ecx */
  push32((uint32_t)(ECX));
  /* 1172a799 call dword ptr [0x11755318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755318))), 0x1172a79fu);
  /* 1172a79f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172a7a1 je 0x1172a7ab */
  if (C.zf) goto L_1172a7ab;
  /* 1172a7a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172a7a6 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172a7ab:;
  /* 1172a7ab mov edx, dword ptr [0x117543a8] */
  EDX = (r32((uint32_t)(0x117543a8)));
  /* 1172a7b1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 1172a7b7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 1172a7c1 jmp 0x1172a7d2 */
  goto L_1172a7d2;
L_1172a7c3:;
  /* 1172a7c3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 1172a7c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a7cc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_1172a7d2:;
  /* 1172a7d2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 1172a7d8 cmp ecx, dword ptr [0x117543a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117543a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a7de jge 0x1172ad97 */
  if ((C.sf==C.of)) goto L_1172ad97;
  /* 1172a7e4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172a7ea mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172a7ed mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 1172a7f3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1172a7f8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1172a7fe push ecx */
  push32((uint32_t)(ECX));
  /* 1172a7ff call dword ptr [0x11755318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755318))), 0x1172a805u);
  /* 1172a805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172a807 je 0x1172a813 */
  if (C.zf) goto L_1172a813;
  /* 1172a809 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1172a80e jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172a813:;
  /* 1172a813 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172a819 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172a81c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 1172a822 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1172a828 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a82e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1172a831 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172a837 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172a83a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172a83d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 1172a847 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 1172a851 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172a858 jmp 0x1172a863 */
  goto L_1172a863;
L_1172a85a:;
  /* 1172a85a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172a85d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a860 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1172a863:;
  /* 1172a863 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a867 jge 0x1172ad5b */
  if ((C.sf==C.of)) goto L_1172ad5b;
  /* 1172a86d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 1172a877 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 1172a881 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 1172a88b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 1172a895 jmp 0x1172a8a6 */
  goto L_1172a8a6;
L_1172a897:;
  /* 1172a897 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1172a89d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a8a0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_1172a8a6:;
  /* 1172a8a6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a8ad jge 0x1172a8c2 */
  if ((C.sf==C.of)) goto L_1172a8c2;
  /* 1172a8af mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1172a8b5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 1172a8c0 jmp 0x1172a897 */
  goto L_1172a897;
L_1172a8c2:;
  /* 1172a8c2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a8c6 jl 0x1172acfd */
  if ((C.sf!=C.of)) goto L_1172acfd;
  /* 1172a8cc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1172a8d1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 1172a8d7 push ecx */
  push32((uint32_t)(ECX));
  /* 1172a8d8 call dword ptr [0x11755318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755318))), 0x1172a8deu);
  /* 1172a8de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172a8e0 je 0x1172a8ec */
  if (C.zf) goto L_1172a8ec;
  /* 1172a8e2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 1172a8e7 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172a8ec:;
  /* 1172a8ec mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1172a8f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1172a8f5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1172a8ff jmp 0x1172a910 */
  goto L_1172a910;
L_1172a901:;
  /* 1172a901 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 1172a907 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a90a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_1172a910:;
  /* 1172a910 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a917 jge 0x1172aa94 */
  if ((C.sf==C.of)) goto L_1172aa94;
  /* 1172a91d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172a920 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a923 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 1172a929 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172a92f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a935 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1172a93b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172a941 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a945 jne 0x1172a952 */
  if (!C.zf) goto L_1172a952;
  /* 1172a947 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1172a94d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a950 je 0x1172a95c */
  if (C.zf) goto L_1172a95c;
L_1172a952:;
  /* 1172a952 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 1172a957 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172a95c:;
  /* 1172a95c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172a962 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172a964 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1172a96a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 1172a970 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 1172a976 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1172a97c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172a97f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172a981 je 0x1172a9b9 */
  if (C.zf) goto L_1172a9b9;
  /* 1172a983 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1172a989 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a98c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1172a992 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a99c jle 0x1172a9a8 */
  if ((C.zf||C.sf!=C.of)) goto L_1172a9a8;
  /* 1172a99e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 1172a9a3 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172a9a8:;
  /* 1172a9a8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 1172a9ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a9b1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 1172a9b7 jmp 0x1172a9fb */
  goto L_1172a9fb;
L_1172a9b9:;
  /* 1172a9b9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 1172a9bf sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1172a9c2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172a9c5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1172a9cb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172a9d2 jle 0x1172a9de */
  if ((C.zf||C.sf!=C.of)) goto L_1172a9de;
  /* 1172a9d4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1172a9de:;
  /* 1172a9de mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1172a9e4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1172a9eb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172a9ee mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1172a9f4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1172a9fb:;
  /* 1172a9fb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa02 jl 0x1172aa1d */
  if ((C.sf!=C.of)) goto L_1172aa1d;
  /* 1172aa04 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1172aa0a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1172aa0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172aa0f jne 0x1172aa1d */
  if (!C.zf) goto L_1172aa1d;
  /* 1172aa11 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa1b jle 0x1172aa27 */
  if ((C.zf||C.sf!=C.of)) goto L_1172aa27;
L_1172aa1d:;
  /* 1172aa1d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 1172aa22 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172aa27:;
  /* 1172aa27 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aa2d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172aa33 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1172aa36 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa3c je 0x1172aa48 */
  if (C.zf) goto L_1172aa48;
  /* 1172aa3e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1172aa43 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172aa48:;
  /* 1172aa48 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aa4e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172aa54 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1172aa5a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aa60 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa66 jb 0x1172a95c */
  if (C.cf) goto L_1172a95c;
  /* 1172aa6c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aa72 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa78 je 0x1172aa84 */
  if (C.zf) goto L_1172aa84;
  /* 1172aa7a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1172aa7f jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172aa84:;
  /* 1172aa84 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172aa87 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172aa8c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172aa8f jmp 0x1172a901 */
  goto L_1172a901;
L_1172aa94:;
  /* 1172aa94 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172aa97 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172aa99 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aa9f je 0x1172aaab */
  if (C.zf) goto L_1172aaab;
  /* 1172aaa1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 1172aaa6 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172aaab:;
  /* 1172aaab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172aaae mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 1172aab4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1172aabb jmp 0x1172aac6 */
  goto L_1172aac6;
L_1172aabd:;
  /* 1172aabd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172aac0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172aac3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1172aac6:;
  /* 1172aac6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aaca jge 0x1172acfd */
  if ((C.sf==C.of)) goto L_1172acfd;
  /* 1172aad0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 1172aada mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1172aae0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_1172aae6:;
  /* 1172aae6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aaec mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172aaef mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 1172aaf5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172aafb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab01 je 0x1172ac2a */
  if (C.zf) goto L_1172ac2a;
  /* 1172ab07 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172ab0a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1172ab10 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab17 je 0x1172ac2a */
  if (C.zf) goto L_1172ac2a;
  /* 1172ab1d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172ab23 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab29 jb 0x1172ab3e */
  if (C.cf) goto L_1172ab3e;
  /* 1172ab2b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 1172ab31 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ab36 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab3c jb 0x1172ab48 */
  if (C.cf) goto L_1172ab48;
L_1172ab3e:;
  /* 1172ab3e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 1172ab43 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172ab48:;
  /* 1172ab48 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172ab4e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 1172ab54 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1172ab5a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 1172ab60 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ab63 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172ab66 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ab69 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ab6e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_1172ab74:;
  /* 1172ab74 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ab77 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab7d je 0x1172ab9e */
  if (C.zf) goto L_1172ab9e;
  /* 1172ab7f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ab82 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ab88 jne 0x1172ab8c */
  if (!C.zf) goto L_1172ab8c;
  /* 1172ab8a jmp 0x1172ab9e */
  goto L_1172ab9e;
L_1172ab8c:;
  /* 1172ab8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ab8f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172ab91 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 1172ab94 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172ab97 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ab99 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1172ab9c jmp 0x1172ab74 */
  goto L_1172ab74;
L_1172ab9e:;
  /* 1172ab9e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172aba1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aba7 jne 0x1172abb3 */
  if (!C.zf) goto L_1172abb3;
  /* 1172aba9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 1172abae jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172abb3:;
  /* 1172abb3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172abb9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172abbb sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1172abbe sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172abc1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 1172abc7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172abce jle 0x1172abda */
  if ((C.zf||C.sf!=C.of)) goto L_1172abda;
  /* 1172abd0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_1172abda:;
  /* 1172abda mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 1172abe0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172abe3 je 0x1172abef */
  if (C.zf) goto L_1172abef;
  /* 1172abe5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1172abea jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172abef:;
  /* 1172abef mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172abf5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172abf8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172abfe je 0x1172ac0a */
  if (C.zf) goto L_1172ac0a;
  /* 1172ac00 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 1172ac05 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172ac0a:;
  /* 1172ac0a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1172ac10 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1172ac16 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1172ac1c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ac1f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 1172ac25 jmp 0x1172aae6 */
  goto L_1172aae6;
L_1172ac2a:;
  /* 1172ac2a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ac31 je 0x1172aca1 */
  if (C.zf) goto L_1172aca1;
  /* 1172ac33 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ac37 jge 0x1172ac6b */
  if ((C.sf==C.of)) goto L_1172ac6b;
  /* 1172ac39 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172ac3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172ac41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172ac43 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1172ac49 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ac4b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 1172ac51 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172ac56 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172ac59 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172ac5b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1172ac61 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ac63 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 1172ac69 jmp 0x1172aca1 */
  goto L_1172aca1;
L_1172ac6b:;
  /* 1172ac6b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172ac6e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ac71 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172ac76 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172ac78 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1172ac7e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ac80 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 1172ac86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172ac89 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ac8c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1172ac91 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1172ac93 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 1172ac99 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ac9b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_1172aca1:;
  /* 1172aca1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1172aca7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172acaa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172acb0 jne 0x1172acc4 */
  if (!C.zf) goto L_1172acc4;
  /* 1172acb2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172acb5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1172acbb cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172acc2 je 0x1172acce */
  if (C.zf) goto L_1172acce;
L_1172acc4:;
  /* 1172acc4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 1172acc9 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172acce:;
  /* 1172acce mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 1172acd4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172acd7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172acdd je 0x1172ace9 */
  if (C.zf) goto L_1172ace9;
  /* 1172acdf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 1172ace4 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172ace9:;
  /* 1172ace9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1172acef add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172acf2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 1172acf8 jmp 0x1172aabd */
  goto L_1172aabd;
L_1172acfd:;
  /* 1172acfd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ad00 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1172ad06 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1172ad0c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ad10 jne 0x1172ad2a */
  if (!C.zf) goto L_1172ad2a;
  /* 1172ad12 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ad15 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1172ad1b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 1172ad21 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ad28 je 0x1172ad31 */
  if (C.zf) goto L_1172ad31;
L_1172ad2a:;
  /* 1172ad2a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1172ad2f jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172ad31:;
  /* 1172ad31 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 1172ad37 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ad3d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 1172ad43 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172ad46 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ad4b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1172ad4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ad51 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1172ad53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172ad56 jmp 0x1172a85a */
  goto L_1172a85a;
L_1172ad5b:;
  /* 1172ad5b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172ad61 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 1172ad67 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ad69 jne 0x1172ad7c */
  if (!C.zf) goto L_1172ad7c;
  /* 1172ad6b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172ad71 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 1172ad77 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ad7a je 0x1172ad83 */
  if (C.zf) goto L_1172ad83;
L_1172ad7c:;
  /* 1172ad7c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 1172ad81 jmp 0x1172ad99 */
  goto L_1172ad99;
L_1172ad83:;
  /* 1172ad83 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1172ad89 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ad8c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 1172ad92 jmp 0x1172a7c3 */
  goto L_1172a7c3;
L_1172ad97:;
  /* 1172ad97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172ad99:;
  /* 1172ad99 mov esp, ebp */
  ESP = (EBP);
  /* 1172ad9b pop ebp */
  EBP = (pop32());
  /* 1172ad9c ret  */
  ESPCHK(0x1172a780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ada0 @ 0x1172ada0 (250 bytes, 92 insns) */
void f_1172ada0(void) {
  FTRACE(0x1172ada0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172ada0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172ada1 mov ebp, esp */
  EBP = (ESP);
  /* 1172ada3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ada6 push ebx */
  push32((uint32_t)(EBX));
  /* 1172ada7 push esi */
  push32((uint32_t)(ESI));
  /* 1172ada8 push edi */
  push32((uint32_t)(EDI));
  /* 1172ada9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1172adac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1172adaf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1172adb2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_1172adb5:;
  /* 1172adb5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172adb9 jne 0x1172add9 */
  if (!C.zf) goto L_1172add9;
  /* 1172adbb push 0x1174ded8 */
  push32((uint32_t)(0x1174ded8u));
  /* 1172adc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172adc2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 1172adc4 push 0x1174decc */
  push32((uint32_t)(0x1174deccu));
  /* 1172adc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172adcb call 0x11723380 */
  push32(0x1172add0u); f_11723380();
  /* 1172add0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172add3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172add6 jne 0x1172add9 */
  if (!C.zf) goto L_1172add9;
  /* 1172add8 int3  */
  x86_unimpl("int3 @ 0x1172add8");
L_1172add9:;
  /* 1172add9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172addb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172addd jne 0x1172adb5 */
  if (!C.zf) goto L_1172adb5;
L_1172addf:;
  /* 1172addf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ade3 jne 0x1172ae03 */
  if (!C.zf) goto L_1172ae03;
  /* 1172ade5 push 0x1174debc */
  push32((uint32_t)(0x1174debcu));
  /* 1172adea push 0 */
  push32((uint32_t)(0x0u));
  /* 1172adec push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1172adee push 0x1174decc */
  push32((uint32_t)(0x1174deccu));
  /* 1172adf3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172adf5 call 0x11723380 */
  push32(0x1172adfau); f_11723380();
  /* 1172adfa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172adfd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ae00 jne 0x1172ae03 */
  if (!C.zf) goto L_1172ae03;
  /* 1172ae02 int3  */
  x86_unimpl("int3 @ 0x1172ae02");
L_1172ae03:;
  /* 1172ae03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ae05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ae07 jne 0x1172addf */
  if (!C.zf) goto L_1172addf;
  /* 1172ae09 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae0c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 1172ae13 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ae19 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1172ae1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172ae22 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1172ae24 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae27 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1172ae2e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172ae31 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ae32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172ae35 push edx */
  push32((uint32_t)(EDX));
  /* 1172ae36 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae39 push eax */
  push32((uint32_t)(EAX));
  /* 1172ae3a call 0x1172c640 */
  push32(0x1172ae3fu); f_1172c640();
  /* 1172ae3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ae42 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172ae45 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae48 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172ae4b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ae4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae51 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1172ae54 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae57 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ae5b jl 0x1172ae7f */
  if ((C.sf!=C.of)) goto L_1172ae7f;
  /* 1172ae5d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172ae62 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1172ae65 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ae67 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172ae6d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 1172ae70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172ae75 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ae78 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172ae7d jmp 0x1172ae90 */
  goto L_1172ae90;
L_1172ae7f:;
  /* 1172ae7f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ae82 push edx */
  push32((uint32_t)(EDX));
  /* 1172ae83 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172ae85 call 0x1172c3c0 */
  push32(0x1172ae8au); f_1172c3c0();
  /* 1172ae8a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ae8d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_1172ae90:;
  /* 1172ae90 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172ae93 pop edi */
  EDI = (pop32());
  /* 1172ae94 pop esi */
  ESI = (pop32());
  /* 1172ae95 pop ebx */
  EBX = (pop32());
  /* 1172ae96 mov esp, ebp */
  ESP = (EBP);
  /* 1172ae98 pop ebp */
  EBP = (pop32());
  /* 1172ae99 ret  */
  ESPCHK(0x1172ada0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aea0 @ 0x1172aea0 (183 bytes, 58 insns) */
void f_1172aea0(void) {
  FTRACE(0x1172aea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172aea0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172aea1 mov ebp, esp */
  EBP = (ESP);
  /* 1172aea3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172aea6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172aea9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172aeac cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172aeb1 ja 0x1172aeca */
  if ((!C.cf&&!C.zf)) goto L_1172aeca;
  /* 1172aeb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172aeb6 mov edx, dword ptr [0x11750f38] */
  EDX = (r32((uint32_t)(0x11750f38)));
  /* 1172aebc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172aebe mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1172aec2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1172aec5 jmp 0x1172af53 */
  goto L_1172af53;
L_1172aeca:;
  /* 1172aeca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172aecd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1172aed0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172aed6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172aedc mov edx, dword ptr [0x11750f38] */
  EDX = (r32((uint32_t)(0x11750f38)));
  /* 1172aee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172aee4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 1172aee8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1172aeed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172aeef je 0x1172af13 */
  if (C.zf) goto L_1172af13;
  /* 1172aef1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172aef4 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 1172aef7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172aefd mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1172af00 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 1172af03 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 1172af06 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1172af0a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 1172af11 jmp 0x1172af24 */
  goto L_1172af24;
L_1172af13:;
  /* 1172af13 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1172af16 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 1172af19 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1172af1d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_1172af24:;
  /* 1172af24 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172af26 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172af28 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172af2a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1172af2d push ecx */
  push32((uint32_t)(ECX));
  /* 1172af2e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172af31 push edx */
  push32((uint32_t)(EDX));
  /* 1172af32 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1172af35 push eax */
  push32((uint32_t)(EAX));
  /* 1172af36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172af38 call 0x1172d5a0 */
  push32(0x1172af3du); f_1172d5a0();
  /* 1172af3d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172af40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172af42 jne 0x1172af48 */
  if (!C.zf) goto L_1172af48;
  /* 1172af44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172af46 jmp 0x1172af53 */
  goto L_1172af53;
L_1172af48:;
  /* 1172af48 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172af4b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172af50 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_1172af53:;
  /* 1172af53 mov esp, ebp */
  ESP = (EBP);
  /* 1172af55 pop ebp */
  EBP = (pop32());
  /* 1172af56 ret  */
  ESPCHK(0x1172aea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x1172af60 (91 bytes, 30 insns) */
void f_1172af60(void) {
  FTRACE(0x1172af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172af60 push ebp */
  push32((uint32_t)(EBP));
  /* 1172af61 mov ebp, esp */
  EBP = (ESP);
  /* 1172af63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172af66 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172af68 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172af6e jne 0x1172af8e */
  if (!C.zf) goto L_1172af8e;
  /* 1172af70 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172af73 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172af75 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172af79 jne 0x1172af8e */
  if (!C.zf) goto L_1172af8e;
  /* 1172af7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172af7e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172af80 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172af87 jne 0x1172af8e */
  if (!C.zf) goto L_1172af8e;
  /* 1172af89 call 0x11726ad0 */
  push32(0x1172af8eu); f_11726ad0();
L_1172af8e:;
  /* 1172af8e cmp dword ptr [0x11752bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172af95 je 0x1172afb5 */
  if (C.zf) goto L_1172afb5;
  /* 1172af97 mov eax, dword ptr [0x11752bf0] */
  EAX = (r32((uint32_t)(0x11752bf0)));
  /* 1172af9c push eax */
  push32((uint32_t)(EAX));
  /* 1172af9d call 0x1172b060 */
  push32(0x1172afa2u); f_1172b060();
  /* 1172afa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172afa5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172afa7 je 0x1172afb5 */
  if (C.zf) goto L_1172afb5;
  /* 1172afa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172afac push ecx */
  push32((uint32_t)(ECX));
  /* 1172afad call dword ptr [0x11752bf0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11752bf0))), 0x1172afb3u);
  /* 1172afb3 jmp 0x1172afb7 */
  goto L_1172afb7;
L_1172afb5:;
  /* 1172afb5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172afb7:;
  /* 1172afb7 pop ebp */
  EBP = (pop32());
  /* 1172afb8 ret 4 */
  ESPCHK(0x1172af60u, _esp0);
  ESP += 8; return;
}

/* FUN_1000afc0 @ 0x1172afc0 (21 bytes, 7 insns) */
void f_1172afc0(void) {
  FTRACE(0x1172afc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172afc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172afc1 mov ebp, esp */
  EBP = (ESP);
  /* 1172afc3 push 0x1172af60 */
  push32((uint32_t)(0x1172af60u));
  /* 1172afc8 call dword ptr [0x1175538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175538c))), 0x1172afceu);
  /* 1172afce mov dword ptr [0x11752bf0], eax */
  w32((uint32_t)(0x11752bf0), (EAX));
  /* 1172afd3 pop ebp */
  EBP = (pop32());
  /* 1172afd4 ret  */
  ESPCHK(0x1172afc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afe0 @ 0x1172afe0 (17 bytes, 7 insns) */
void f_1172afe0(void) {
  FTRACE(0x1172afe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172afe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172afe1 mov ebp, esp */
  EBP = (ESP);
  /* 1172afe3 mov eax, dword ptr [0x11752bf0] */
  EAX = (r32((uint32_t)(0x11752bf0)));
  /* 1172afe8 push eax */
  push32((uint32_t)(EAX));
  /* 1172afe9 call dword ptr [0x1175538c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175538c))), 0x1172afefu);
  /* 1172afef pop ebp */
  EBP = (pop32());
  /* 1172aff0 ret  */
  ESPCHK(0x1172afe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b000 @ 0x1172b000 (43 bytes, 16 insns) */
void f_1172b000(void) {
  FTRACE(0x1172b000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b000 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b001 mov ebp, esp */
  EBP = (ESP);
  /* 1172b003 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b004 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172b00b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b00e push eax */
  push32((uint32_t)(EAX));
  /* 1172b00f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b012 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b013 call dword ptr [0x1175531c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175531c))), 0x1172b019u);
  /* 1172b019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172b01b je 0x1172b024 */
  if (C.zf) goto L_1172b024;
  /* 1172b01d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172b024:;
  /* 1172b024 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b027 mov esp, ebp */
  ESP = (EBP);
  /* 1172b029 pop ebp */
  EBP = (pop32());
  /* 1172b02a ret  */
  ESPCHK(0x1172b000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b030 @ 0x1172b030 (43 bytes, 16 insns) */
void f_1172b030(void) {
  FTRACE(0x1172b030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b030 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b031 mov ebp, esp */
  EBP = (ESP);
  /* 1172b033 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b034 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172b03b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b03e push eax */
  push32((uint32_t)(EAX));
  /* 1172b03f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b042 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b043 call dword ptr [0x11755318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755318))), 0x1172b049u);
  /* 1172b049 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172b04b je 0x1172b054 */
  if (C.zf) goto L_1172b054;
  /* 1172b04d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172b054:;
  /* 1172b054 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b057 mov esp, ebp */
  ESP = (EBP);
  /* 1172b059 pop ebp */
  EBP = (pop32());
  /* 1172b05a ret  */
  ESPCHK(0x1172b030u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x1172b060 (39 bytes, 14 insns) */
void f_1172b060(void) {
  FTRACE(0x1172b060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b060 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b061 mov ebp, esp */
  EBP = (ESP);
  /* 1172b063 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b064 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172b06b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b06e push eax */
  push32((uint32_t)(EAX));
  /* 1172b06f call dword ptr [0x11755390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755390))), 0x1172b075u);
  /* 1172b075 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172b077 je 0x1172b080 */
  if (C.zf) goto L_1172b080;
  /* 1172b079 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1172b080:;
  /* 1172b080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b083 mov esp, ebp */
  ESP = (EBP);
  /* 1172b085 pop ebp */
  EBP = (pop32());
  /* 1172b086 ret  */
  ESPCHK(0x1172b060u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1172b090 (129 bytes, 56 insns) */
void f_1172b090(void) {
  FTRACE(0x1172b090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b090 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1172b094 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1172b098 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1172b09e jne 0x1172b0dc */
  if (!C.zf) goto L_1172b0dc;
L_1172b0a0:;
  /* 1172b0a0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172b0a2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b0a4 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b0a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1172b0a8 je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b0aa cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b0ad jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b0af or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1172b0b1 je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b0b3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1172b0b6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b0b9 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b0bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1172b0bd je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b0bf cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b0c2 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b0c4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b0c7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b0ca or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1172b0cc jne 0x1172b0a0 */
  if (!C.zf) goto L_1172b0a0;
  /* 1172b0ce mov edi, edi */
  EDI = (EDI);
L_1172b0d0:;
  /* 1172b0d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b0d2 ret  */
  ESPCHK(0x1172b090u, _esp0);
  ESP += 4; return;
  /* 1172b0d3 nop  */
  /* nop */
L_1172b0d4:;
  /* 1172b0d4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b0d6 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1172b0d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1172b0d9 ret  */
  ESPCHK(0x1172b090u, _esp0);
  ESP += 4; return;
  /* 1172b0da mov edi, edi */
  EDI = (EDI);
L_1172b0dc:;
  /* 1172b0dc test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1172b0e2 je 0x1172b0f8 */
  if (C.zf) goto L_1172b0f8;
  /* 1172b0e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1172b0e6 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1172b0e7 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b0e9 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b0eb inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1172b0ec or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1172b0ee je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b0f0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1172b0f6 je 0x1172b0a0 */
  if (C.zf) goto L_1172b0a0;
L_1172b0f8:;
  /* 1172b0f8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1172b0fb add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b0fe cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b100 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b102 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1172b104 je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b106 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172b109 jne 0x1172b0d4 */
  if (!C.zf) goto L_1172b0d4;
  /* 1172b10b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1172b10d je 0x1172b0d0 */
  if (C.zf) goto L_1172b0d0;
  /* 1172b10f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b112 jmp 0x1172b0a0 */
  goto L_1172b0a0;
}

/* FUN_1000b1d9 @ 0x1172b1d9 (27 bytes, 11 insns) */
void f_1172b1d9(void) {
  FTRACE(0x1172b1d9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b1d9 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b1da mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1172b1de mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1172b1e0 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1172b1e3 push eax */
  push32((uint32_t)(EAX));
  /* 1172b1e4 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1172b1e7 push eax */
  push32((uint32_t)(EAX));
  /* 1172b1e8 call 0x11722e12 */
  push32(0x1172b1edu); f_11722e12();
  /* 1172b1ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b1f0 pop ebp */
  EBP = (pop32());
  /* 1172b1f1 ret 4 */
  ESPCHK(0x1172b1d9u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b200 @ 0x1172b200 (664 bytes, 260 insns) [15 switch table(s)] */
void f_1172b200(void) {
  FTRACE(0x1172b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b200 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b201 mov ebp, esp */
  EBP = (ESP);
  /* 1172b203 push edi */
  push32((uint32_t)(EDI));
  /* 1172b204 push esi */
  push32((uint32_t)(ESI));
  /* 1172b205 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b208 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172b20b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b20e mov eax, ecx */
  EAX = (ECX);
  /* 1172b210 mov edx, ecx */
  EDX = (ECX);
  /* 1172b212 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b214 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b216 jbe 0x1172b220 */
  if ((C.cf||C.zf)) goto L_1172b220;
  /* 1172b218 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b21a jb 0x1172b398 */
  if (C.cf) goto L_1172b398;
L_1172b220:;
  /* 1172b220 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1172b226 jne 0x1172b23c */
  if (!C.zf) goto L_1172b23c;
  /* 1172b228 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b22b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1172b22e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b231 jb 0x1172b25c */
  if (C.cf) goto L_1172b25c;
  /* 1172b233 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b235 jmp dword ptr [edx*4 + 0x1172b348] */
  switch (EDX) {
    case 0: goto L_1172b358;
    case 1: goto L_1172b360;
    case 2: goto L_1172b36c;
    case 3: goto L_1172b380;
    default: x86_unimpl("switch@0x1172b235 out of table"); return;
  }
L_1172b23c:;
  /* 1172b23c mov eax, edi */
  EAX = (EDI);
  /* 1172b23e mov edx, 3 */
  EDX = (0x3u);
  /* 1172b243 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b246 jb 0x1172b254 */
  if (C.cf) goto L_1172b254;
  /* 1172b248 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1172b24b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b24d jmp dword ptr [eax*4 + 0x1172b260] */
  switch (EAX) {
    case 1: goto L_1172b270;
    case 2: goto L_1172b29c;
    case 3: goto L_1172b2c0;
    default: x86_unimpl("switch@0x1172b24d out of table"); return;
  }
L_1172b254:;
  /* 1172b254 jmp dword ptr [ecx*4 + 0x1172b358] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1172b358)))); return;
  /* 1172b25b nop  */
  /* nop */
L_1172b25c:;
  /* 1172b25c jmp dword ptr [ecx*4 + 0x1172b2dc] */
  switch (ECX) {
    case 0: goto L_1172b33f;
    case 1: goto L_1172b32c;
    case 2: goto L_1172b324;
    case 3: goto L_1172b31c;
    case 4: goto L_1172b314;
    case 5: goto L_1172b30c;
    case 6: goto L_1172b304;
    case 7: goto L_1172b2fc;
    default: x86_unimpl("switch@0x1172b25c out of table"); return;
  }
  /* 1172b263 nop  */
  /* nop */
L_1172b270:;
  /* 1172b270 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b272 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b274 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b276 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b279 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b27c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b27f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b282 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b285 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b288 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b28b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b28e jb 0x1172b25c */
  if (C.cf) goto L_1172b25c;
  /* 1172b290 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b292 jmp dword ptr [edx*4 + 0x1172b348] */
  switch (EDX) {
    case 0: goto L_1172b358;
    case 1: goto L_1172b360;
    case 2: goto L_1172b36c;
    case 3: goto L_1172b380;
    default: x86_unimpl("switch@0x1172b292 out of table"); return;
  }
  /* 1172b299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b29c:;
  /* 1172b29c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b29e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b2a0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b2a2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b2a5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b2a8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b2ab add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b2ae add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b2b1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b2b4 jb 0x1172b25c */
  if (C.cf) goto L_1172b25c;
  /* 1172b2b6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b2b8 jmp dword ptr [edx*4 + 0x1172b348] */
  switch (EDX) {
    case 0: goto L_1172b358;
    case 1: goto L_1172b360;
    case 2: goto L_1172b36c;
    case 3: goto L_1172b380;
    default: x86_unimpl("switch@0x1172b2b8 out of table"); return;
  }
  /* 1172b2bf nop  */
  /* nop */
L_1172b2c0:;
  /* 1172b2c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b2c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b2c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b2c6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1172b2c7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b2ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1172b2cb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b2ce jb 0x1172b25c */
  if (C.cf) goto L_1172b25c;
  /* 1172b2d0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b2d2 jmp dword ptr [edx*4 + 0x1172b348] */
  switch (EDX) {
    case 0: goto L_1172b358;
    case 1: goto L_1172b360;
    case 2: goto L_1172b36c;
    case 3: goto L_1172b380;
    default: x86_unimpl("switch@0x1172b2d2 out of table"); return;
  }
  /* 1172b2d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b2fc:;
  /* 1172b2fc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1172b300 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1172b304:;
  /* 1172b304 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1172b308 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1172b30c:;
  /* 1172b30c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1172b310 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1172b314:;
  /* 1172b314 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1172b318 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1172b31c:;
  /* 1172b31c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1172b320 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1172b324:;
  /* 1172b324 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1172b328 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1172b32c:;
  /* 1172b32c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1172b330 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1172b334 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1172b33b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b33d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1172b33f:;
  /* 1172b33f jmp dword ptr [edx*4 + 0x1172b348] */
  switch (EDX) {
    case 0: goto L_1172b358;
    case 1: goto L_1172b360;
    case 2: goto L_1172b36c;
    case 3: goto L_1172b380;
    default: x86_unimpl("switch@0x1172b33f out of table"); return;
  }
  /* 1172b346 mov edi, edi */
  EDI = (EDI);
L_1172b358:;
  /* 1172b358 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b35b pop esi */
  ESI = (pop32());
  /* 1172b35c pop edi */
  EDI = (pop32());
  /* 1172b35d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b35e ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b35f nop  */
  /* nop */
L_1172b360:;
  /* 1172b360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b362 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b367 pop esi */
  ESI = (pop32());
  /* 1172b368 pop edi */
  EDI = (pop32());
  /* 1172b369 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b36a ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b36b nop  */
  /* nop */
L_1172b36c:;
  /* 1172b36c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b36e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b370 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b373 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b376 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b379 pop esi */
  ESI = (pop32());
  /* 1172b37a pop edi */
  EDI = (pop32());
  /* 1172b37b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b37c ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b37d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b380:;
  /* 1172b380 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172b382 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172b384 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b387 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b38a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b38d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b390 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b393 pop esi */
  ESI = (pop32());
  /* 1172b394 pop edi */
  EDI = (pop32());
  /* 1172b395 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b396 ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b397 nop  */
  /* nop */
L_1172b398:;
  /* 1172b398 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1172b39c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1172b3a0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1172b3a6 jne 0x1172b3cc */
  if (!C.zf) goto L_1172b3cc;
  /* 1172b3a8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b3ab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1172b3ae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b3b1 jb 0x1172b3c0 */
  if (C.cf) goto L_1172b3c0;
  /* 1172b3b3 std  */
  C.df=1;
  /* 1172b3b4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b3b6 cld  */
  C.df=0;
  /* 1172b3b7 jmp dword ptr [edx*4 + 0x1172b4e0] */
  switch (EDX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b3b7 out of table"); return;
  }
  /* 1172b3be mov edi, edi */
  EDI = (EDI);
L_1172b3c0:;
  /* 1172b3c0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172b3c2 jmp dword ptr [ecx*4 + 0x1172b490] */
  switch (ECX) {
    case 0: goto L_1172b4d7;
    default: x86_unimpl("switch@0x1172b3c2 out of table"); return;
  }
  /* 1172b3c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b3cc:;
  /* 1172b3cc mov eax, edi */
  EAX = (EDI);
  /* 1172b3ce mov edx, 3 */
  EDX = (0x3u);
  /* 1172b3d3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b3d6 jb 0x1172b3e4 */
  if (C.cf) goto L_1172b3e4;
  /* 1172b3d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1172b3db sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b3dd jmp dword ptr [eax*4 + 0x1172b3e8] */
  switch (EAX) {
    case 1: goto L_1172b3f8;
    case 2: goto L_1172b418;
    case 3: goto L_1172b440;
    default: x86_unimpl("switch@0x1172b3dd out of table"); return;
  }
L_1172b3e4:;
  /* 1172b3e4 jmp dword ptr [ecx*4 + 0x1172b4e0] */
  switch (ECX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b3e4 out of table"); return;
  }
  /* 1172b3eb nop  */
  /* nop */
L_1172b3f8:;
  /* 1172b3f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b3fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b3fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b400 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1172b401 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b404 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1172b405 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b408 jb 0x1172b3c0 */
  if (C.cf) goto L_1172b3c0;
  /* 1172b40a std  */
  C.df=1;
  /* 1172b40b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b40d cld  */
  C.df=0;
  /* 1172b40e jmp dword ptr [edx*4 + 0x1172b4e0] */
  switch (EDX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b40e out of table"); return;
  }
  /* 1172b415 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b418:;
  /* 1172b418 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b41b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b41d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b420 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b423 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b426 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b429 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b42c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b42f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b432 jb 0x1172b3c0 */
  if (C.cf) goto L_1172b3c0;
  /* 1172b434 std  */
  C.df=1;
  /* 1172b435 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b437 cld  */
  C.df=0;
  /* 1172b438 jmp dword ptr [edx*4 + 0x1172b4e0] */
  switch (EDX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b438 out of table"); return;
  }
  /* 1172b43f nop  */
  /* nop */
L_1172b440:;
  /* 1172b440 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b443 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b445 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b448 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b44b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b44e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b451 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172b454 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b457 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b45a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b45d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b460 jb 0x1172b3c0 */
  if (C.cf) goto L_1172b3c0;
  /* 1172b466 std  */
  C.df=1;
  /* 1172b467 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172b469 cld  */
  C.df=0;
  /* 1172b46a jmp dword ptr [edx*4 + 0x1172b4e0] */
  switch (EDX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b46a out of table"); return;
  }
  /* 1172b471 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1172b474 xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 1172b475 mov ah, 0x72 */
  AH = (0x72u);
  /* 1172b477 adc dword ptr [esp + esi*4 - 0x4b5bee8e], ebx */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*4 + -0x4b5bee8e))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*4 + -0x4b5bee8e), (_r)); fl_add(_a,_b,_r,32); }
  /* 1172b47e jb 0x1172b491 */
  if (C.cf) goto L_1172b491;
  /* 1172b480 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 1172b481 mov ah, 0x72 */
  AH = (0x72u);
  /* 1172b483 adc dword ptr [esp + esi*4 - 0x4b43ee8e], esi */
  { uint32_t _a=(r32((uint32_t)(ESP + ESI*4 + -0x4b43ee8e))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(ESP + ESI*4 + -0x4b43ee8e), (_r)); fl_add(_a,_b,_r,32); }
  /* 1172b48a jb 0x1172b49d */
  if (C.cf) goto L_1172b49d;
  /* 1172b48d mov ah, 0x72 */
  AH = (0x72u);
  /* 1172b494 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1172b498 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1172b49c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1172b4a0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1172b4a4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1172b4a8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1172b4ac mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1172b4b0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1172b4b4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1172b4b8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1172b4bc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1172b4c0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1172b4c4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1172b4c8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1172b4cc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1172b4d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b4d5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1172b4d7:;
  /* 1172b4d7 jmp dword ptr [edx*4 + 0x1172b4e0] */
  switch (EDX) {
    case 0: goto L_1172b4f0;
    case 1: goto L_1172b4f8;
    case 2: goto L_1172b508;
    case 3: goto L_1172b51c;
    default: x86_unimpl("switch@0x1172b4d7 out of table"); return;
  }
  /* 1172b4de mov edi, edi */
  EDI = (EDI);
L_1172b4f0:;
  /* 1172b4f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b4f3 pop esi */
  ESI = (pop32());
  /* 1172b4f4 pop edi */
  EDI = (pop32());
  /* 1172b4f5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b4f6 ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b4f7 nop  */
  /* nop */
L_1172b4f8:;
  /* 1172b4f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b4fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b4fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b501 pop esi */
  ESI = (pop32());
  /* 1172b502 pop edi */
  EDI = (pop32());
  /* 1172b503 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b504 ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b505 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172b508:;
  /* 1172b508 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b50b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b50e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b511 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b517 pop esi */
  ESI = (pop32());
  /* 1172b518 pop edi */
  EDI = (pop32());
  /* 1172b519 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b51a ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
  /* 1172b51b nop  */
  /* nop */
L_1172b51c:;
  /* 1172b51c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172b51f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172b522 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172b525 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172b528 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172b52b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172b52e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b531 pop esi */
  ESI = (pop32());
  /* 1172b532 pop edi */
  EDI = (pop32());
  /* 1172b533 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172b534 ret  */
  ESPCHK(0x1172b200u, _esp0);
  ESP += 4; return;
L_1172b491: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1172b491 (unresolved jump table)"); return;
L_1172b49d: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1172b49d (unresolved jump table)"); return;
}

/* __XcptFilter @ 0x1172b540 (446 bytes, 130 insns) */
void f_1172b540(void) {
  FTRACE(0x1172b540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b540 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b541 mov ebp, esp */
  EBP = (ESP);
  /* 1172b543 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b546 call 0x11726900 */
  push32(0x1172b54bu); f_11726900();
  /* 1172b54b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172b54e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b551 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 1172b554 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b558 push edx */
  push32((uint32_t)(EDX));
  /* 1172b559 call 0x1172b700 */
  push32(0x1172b55eu); f_1172b700();
  /* 1172b55e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b561 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172b564 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b568 je 0x1172b573 */
  if (C.zf) goto L_1172b573;
  /* 1172b56a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b56d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b571 jne 0x1172b582 */
  if (!C.zf) goto L_1172b582;
L_1172b573:;
  /* 1172b573 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b576 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b577 call dword ptr [0x1175537c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1175537c))), 0x1172b57du);
  /* 1172b57d jmp 0x1172b6fa */
  goto L_1172b6fa;
L_1172b582:;
  /* 1172b582 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b585 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b589 jne 0x1172b59f */
  if (!C.zf) goto L_1172b59f;
  /* 1172b58b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b58e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1172b595 mov eax, 1 */
  EAX = (0x1u);
  /* 1172b59a jmp 0x1172b6fa */
  goto L_1172b6fa;
L_1172b59f:;
  /* 1172b59f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b5a2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b5a6 jne 0x1172b5b0 */
  if (!C.zf) goto L_1172b5b0;
  /* 1172b5a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172b5ab jmp 0x1172b6fa */
  goto L_1172b6fa;
L_1172b5b0:;
  /* 1172b5b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b5b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172b5b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172b5b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b5bc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 1172b5bf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1172b5c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b5c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b5c8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 1172b5cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b5ce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b5d2 jne 0x1172b6d7 */
  if (!C.zf) goto L_1172b6d7;
  /* 1172b5d8 mov eax, dword ptr [0x117511c8] */
  EAX = (r32((uint32_t)(0x117511c8)));
  /* 1172b5dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1172b5e0 jmp 0x1172b5eb */
  goto L_1172b5eb;
L_1172b5e2:;
  /* 1172b5e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172b5e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b5e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1172b5eb:;
  /* 1172b5eb mov edx, dword ptr [0x117511c8] */
  EDX = (r32((uint32_t)(0x117511c8)));
  /* 1172b5f1 add edx, dword ptr [0x117511cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x117511cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b5f7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b5fa jge 0x1172b612 */
  if ((C.sf==C.of)) goto L_1172b612;
  /* 1172b5fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172b5ff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b602 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b605 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1172b608 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 1172b610 jmp 0x1172b5e2 */
  goto L_1172b5e2;
L_1172b612:;
  /* 1172b612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b615 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 1172b618 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1172b61b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b61e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b624 jne 0x1172b635 */
  if (!C.zf) goto L_1172b635;
  /* 1172b626 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b629 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 1172b630 jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b635:;
  /* 1172b635 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b638 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b63e jne 0x1172b64c */
  if (!C.zf) goto L_1172b64c;
  /* 1172b640 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b643 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 1172b64a jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b64c:;
  /* 1172b64c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b64f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b655 jne 0x1172b663 */
  if (!C.zf) goto L_1172b663;
  /* 1172b657 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b65a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 1172b661 jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b663:;
  /* 1172b663 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b666 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b66c jne 0x1172b67a */
  if (!C.zf) goto L_1172b67a;
  /* 1172b66e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b671 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 1172b678 jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b67a:;
  /* 1172b67a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b67d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b683 jne 0x1172b691 */
  if (!C.zf) goto L_1172b691;
  /* 1172b685 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b688 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 1172b68f jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b691:;
  /* 1172b691 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b694 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b69a jne 0x1172b6a8 */
  if (!C.zf) goto L_1172b6a8;
  /* 1172b69c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b69f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 1172b6a6 jmp 0x1172b6bd */
  goto L_1172b6bd;
L_1172b6a8:;
  /* 1172b6a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b6ab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b6b1 jne 0x1172b6bd */
  if (!C.zf) goto L_1172b6bd;
  /* 1172b6b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b6b6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_1172b6bd:;
  /* 1172b6bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b6c0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 1172b6c3 push edx */
  push32((uint32_t)(EDX));
  /* 1172b6c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 1172b6c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1172b6c9u);
  /* 1172b6c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b6cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b6cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b6d2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 1172b6d5 jmp 0x1172b6ee */
  goto L_1172b6ee;
L_1172b6d7:;
  /* 1172b6d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b6da mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1172b6e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172b6e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172b6e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b6e8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x1172b6ebu);
  /* 1172b6eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172b6ee:;
  /* 1172b6ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b6f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172b6f4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 1172b6f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1172b6fa:;
  /* 1172b6fa mov esp, ebp */
  ESP = (EBP);
  /* 1172b6fc pop ebp */
  EBP = (pop32());
  /* 1172b6fd ret  */
  ESPCHK(0x1172b540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x1172b700 (89 bytes, 35 insns) */
void f_1172b700(void) {
  FTRACE(0x1172b700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b700 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b701 mov ebp, esp */
  EBP = (ESP);
  /* 1172b703 push ecx */
  push32((uint32_t)(ECX));
  /* 1172b704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b707 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172b70a:;
  /* 1172b70a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b70d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172b70f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b712 je 0x1172b732 */
  if (C.zf) goto L_1172b732;
  /* 1172b714 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b717 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b71a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172b71d mov ecx, dword ptr [0x117511d4] */
  ECX = (r32((uint32_t)(0x117511d4)));
  /* 1172b723 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b726 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b729 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b72b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b72e jae 0x1172b732 */
  if (!C.cf) goto L_1172b732;
  /* 1172b730 jmp 0x1172b70a */
  goto L_1172b70a;
L_1172b732:;
  /* 1172b732 mov eax, dword ptr [0x117511d4] */
  EAX = (r32((uint32_t)(0x117511d4)));
  /* 1172b737 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b73a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172b73d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b73f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b742 jae 0x1172b74e */
  if (!C.cf) goto L_1172b74e;
  /* 1172b744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b747 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172b749 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b74c je 0x1172b752 */
  if (C.zf) goto L_1172b752;
L_1172b74e:;
  /* 1172b74e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b750 jmp 0x1172b755 */
  goto L_1172b755;
L_1172b752:;
  /* 1172b752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172b755:;
  /* 1172b755 mov esp, ebp */
  ESP = (EBP);
  /* 1172b757 pop ebp */
  EBP = (pop32());
  /* 1172b758 ret  */
  ESPCHK(0x1172b700u, _esp0);
  ESP += 4; return;
}

/* _abort @ 0x1172b760 (30 bytes, 12 insns) */
void f_1172b760(void) {
  FTRACE(0x1172b760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b760 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b761 mov ebp, esp */
  EBP = (ESP);
  /* 1172b763 push 0xa */
  push32((uint32_t)(0xau));
  /* 1172b765 call 0x11727ba0 */
  push32(0x1172b76au); f_11727ba0();
  /* 1172b76a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b76d push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1172b76f call 0x11728710 */
  push32(0x1172b774u); f_11728710();
  /* 1172b774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b777 push 3 */
  push32((uint32_t)(0x3u));
  /* 1172b779 call 0x11726c70 */
  push32(0x1172b77eu); f_11726c70();
  /* 1172b77e pop ebp */
  EBP = (pop32());
  /* 1172b77f ret  */
  ESPCHK(0x1172b760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b780 @ 0x1172b780 (836 bytes, 238 insns) */
void f_1172b780(void) {
  FTRACE(0x1172b780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172b780 push ebp */
  push32((uint32_t)(EBP));
  /* 1172b781 mov ebp, esp */
  EBP = (ESP);
  /* 1172b783 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172b786 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172b788 call 0x11723b00 */
  push32(0x1172b78du); f_11723b00();
  /* 1172b78d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b793 push eax */
  push32((uint32_t)(EAX));
  /* 1172b794 call 0x1172bad0 */
  push32(0x1172b799u); f_1172bad0();
  /* 1172b799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b79c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1172b79f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b7a2 cmp ecx, dword ptr [0x117540e4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x117540e4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b7a8 jne 0x1172b7bb */
  if (!C.zf) goto L_1172b7bb;
  /* 1172b7aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172b7ac call 0x11723ba0 */
  push32(0x1172b7b1u); f_11723ba0();
  /* 1172b7b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b7b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b7b6 jmp 0x1172bac0 */
  goto L_1172bac0;
L_1172b7bb:;
  /* 1172b7bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b7bf jne 0x1172b7dc */
  if (!C.zf) goto L_1172b7dc;
  /* 1172b7c1 call 0x1172bbb0 */
  push32(0x1172b7c6u); f_1172bbb0();
  /* 1172b7c6 call 0x1172bc30 */
  push32(0x1172b7cbu); f_1172bc30();
  /* 1172b7cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172b7cd call 0x11723ba0 */
  push32(0x1172b7d2u); f_11723ba0();
  /* 1172b7d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b7d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b7d7 jmp 0x1172bac0 */
  goto L_1172bac0;
L_1172b7dc:;
  /* 1172b7dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172b7e3 jmp 0x1172b7ee */
  goto L_1172b7ee;
L_1172b7e5:;
  /* 1172b7e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b7e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b7eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172b7ee:;
  /* 1172b7ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b7f2 jae 0x1172b93f */
  if (!C.cf) goto L_1172b93f;
  /* 1172b7f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b7fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b7fe mov ecx, dword ptr [eax + 0x117511e0] */
  ECX = (r32((uint32_t)(EAX + 0x117511e0)));
  /* 1172b804 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b807 jne 0x1172b93a */
  if (!C.zf) goto L_1172b93a;
  /* 1172b80d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1172b814 jmp 0x1172b81f */
  goto L_1172b81f;
L_1172b816:;
  /* 1172b816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b819 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b81c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1172b81f:;
  /* 1172b81f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b826 jae 0x1172b834 */
  if (!C.cf) goto L_1172b834;
  /* 1172b828 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b82b mov byte ptr [eax + 0x11754280], 0 */
  w8((uint32_t)(EAX + 0x11754280), (0x0u));
  /* 1172b832 jmp 0x1172b816 */
  goto L_1172b816;
L_1172b834:;
  /* 1172b834 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172b83b jmp 0x1172b846 */
  goto L_1172b846;
L_1172b83d:;
  /* 1172b83d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b840 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b843 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_1172b846:;
  /* 1172b846 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b84a jae 0x1172b8c7 */
  if (!C.cf) goto L_1172b8c7;
  /* 1172b84c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b84f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b852 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b855 lea ecx, [edx + eax*8 + 0x117511f0] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x117511f0));
  /* 1172b85c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172b85f jmp 0x1172b86a */
  goto L_1172b86a;
L_1172b861:;
  /* 1172b861 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b864 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b867 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1172b86a:;
  /* 1172b86a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b86d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172b86f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1172b871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172b873 je 0x1172b8c2 */
  if (C.zf) goto L_1172b8c2;
  /* 1172b875 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b87a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1172b87d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172b87f je 0x1172b8c2 */
  if (C.zf) goto L_1172b8c2;
  /* 1172b881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b886 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172b888 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1172b88b jmp 0x1172b896 */
  goto L_1172b896;
L_1172b88d:;
  /* 1172b88d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b893 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1172b896:;
  /* 1172b896 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172b899 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b89b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1172b89e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b8a1 ja 0x1172b8c0 */
  if ((!C.cf&&!C.zf)) goto L_1172b8c0;
  /* 1172b8a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b8a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b8a9 mov dl, byte ptr [eax + 0x11754281] */
  DL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 1172b8af or dl, byte ptr [ecx + 0x117511d8] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x117511d8))); DL = (_r); fl_logic(_r,8); }
  /* 1172b8b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b8b8 mov byte ptr [eax + 0x11754281], dl */
  w8((uint32_t)(EAX + 0x11754281), (DL));
  /* 1172b8be jmp 0x1172b88d */
  goto L_1172b88d;
L_1172b8c0:;
  /* 1172b8c0 jmp 0x1172b861 */
  goto L_1172b861;
L_1172b8c2:;
  /* 1172b8c2 jmp 0x1172b83d */
  goto L_1172b83d;
L_1172b8c7:;
  /* 1172b8c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b8ca mov dword ptr [0x117540e4], ecx */
  w32((uint32_t)(0x117540e4), (ECX));
  /* 1172b8d0 mov dword ptr [0x1175416c], 1 */
  w32((uint32_t)(0x1175416c), (0x1u));
  /* 1172b8da mov edx, dword ptr [0x117540e4] */
  EDX = (r32((uint32_t)(0x117540e4)));
  /* 1172b8e0 push edx */
  push32((uint32_t)(EDX));
  /* 1172b8e1 call 0x1172bb30 */
  push32(0x1172b8e6u); f_1172bb30();
  /* 1172b8e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b8e9 mov dword ptr [0x11754384], eax */
  w32((uint32_t)(0x11754384), (EAX));
  /* 1172b8ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172b8f5 jmp 0x1172b900 */
  goto L_1172b900;
L_1172b8f7:;
  /* 1172b8f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b8fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b8fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172b900:;
  /* 1172b900 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b904 jae 0x1172b924 */
  if (!C.cf) goto L_1172b924;
  /* 1172b906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172b909 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172b90c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b90f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172b912 mov cx, word ptr [ecx + eax*2 + 0x117511e4] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x117511e4)));
  /* 1172b91a mov word ptr [edx*2 + 0x11754160], cx */
  w16((uint32_t)(EDX*2 + 0x11754160), (CX));
  /* 1172b922 jmp 0x1172b8f7 */
  goto L_1172b8f7;
L_1172b924:;
  /* 1172b924 call 0x1172bc30 */
  push32(0x1172b929u); f_1172bc30();
  /* 1172b929 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172b92b call 0x11723ba0 */
  push32(0x1172b930u); f_11723ba0();
  /* 1172b930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b935 jmp 0x1172bac0 */
  goto L_1172bac0;
L_1172b93a:;
  /* 1172b93a jmp 0x1172b7e5 */
  goto L_1172b7e5;
L_1172b93f:;
  /* 1172b93f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 1172b942 push edx */
  push32((uint32_t)(EDX));
  /* 1172b943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b946 push eax */
  push32((uint32_t)(EAX));
  /* 1172b947 call dword ptr [0x11755380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755380))), 0x1172b94du);
  /* 1172b94d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b950 jne 0x1172ba92 */
  if (!C.zf) goto L_1172ba92;
  /* 1172b956 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1172b95d jmp 0x1172b968 */
  goto L_1172b968;
L_1172b95f:;
  /* 1172b95f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b965 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1172b968:;
  /* 1172b968 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b96f jae 0x1172b97d */
  if (!C.cf) goto L_1172b97d;
  /* 1172b971 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b974 mov byte ptr [edx + 0x11754280], 0 */
  w8((uint32_t)(EDX + 0x11754280), (0x0u));
  /* 1172b97b jmp 0x1172b95f */
  goto L_1172b95f;
L_1172b97d:;
  /* 1172b97d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172b980 mov dword ptr [0x117540e4], eax */
  w32((uint32_t)(0x117540e4), (EAX));
  /* 1172b985 mov dword ptr [0x11754384], 0 */
  w32((uint32_t)(0x11754384), (0x0u));
  /* 1172b98f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b993 jbe 0x1172ba4e */
  if ((C.cf||C.zf)) goto L_1172ba4e;
  /* 1172b999 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 1172b99c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 1172b99f jmp 0x1172b9aa */
  goto L_1172b9aa;
L_1172b9a1:;
  /* 1172b9a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172b9a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b9a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_1172b9aa:;
  /* 1172b9aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172b9ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172b9af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1172b9b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172b9b3 je 0x1172b9fc */
  if (C.zf) goto L_1172b9fc;
  /* 1172b9b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172b9b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172b9ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1172b9bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172b9bf je 0x1172b9fc */
  if (C.zf) goto L_1172b9fc;
  /* 1172b9c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172b9c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b9c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172b9c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1172b9cb jmp 0x1172b9d6 */
  goto L_1172b9d6;
L_1172b9cd:;
  /* 1172b9cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b9d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172b9d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1172b9d6:;
  /* 1172b9d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172b9d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172b9db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1172b9de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172b9e1 ja 0x1172b9fa */
  if ((!C.cf&&!C.zf)) goto L_1172b9fa;
  /* 1172b9e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b9e6 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 1172b9ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 1172b9ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172b9f2 mov byte ptr [edx + 0x11754281], cl */
  w8((uint32_t)(EDX + 0x11754281), (CL));
  /* 1172b9f8 jmp 0x1172b9cd */
  goto L_1172b9cd;
L_1172b9fa:;
  /* 1172b9fa jmp 0x1172b9a1 */
  goto L_1172b9a1;
L_1172b9fc:;
  /* 1172b9fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 1172ba03 jmp 0x1172ba0e */
  goto L_1172ba0e;
L_1172ba05:;
  /* 1172ba05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ba08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ba0b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1172ba0e:;
  /* 1172ba0e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ba15 jae 0x1172ba2e */
  if (!C.cf) goto L_1172ba2e;
  /* 1172ba17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ba1a mov dl, byte ptr [ecx + 0x11754281] */
  DL = (r8((uint32_t)(ECX + 0x11754281)));
  /* 1172ba20 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1172ba23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172ba26 mov byte ptr [eax + 0x11754281], dl */
  w8((uint32_t)(EAX + 0x11754281), (DL));
  /* 1172ba2c jmp 0x1172ba05 */
  goto L_1172ba05;
L_1172ba2e:;
  /* 1172ba2e mov ecx, dword ptr [0x117540e4] */
  ECX = (r32((uint32_t)(0x117540e4)));
  /* 1172ba34 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ba35 call 0x1172bb30 */
  push32(0x1172ba3au); f_1172bb30();
  /* 1172ba3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ba3d mov dword ptr [0x11754384], eax */
  w32((uint32_t)(0x11754384), (EAX));
  /* 1172ba42 mov dword ptr [0x1175416c], 1 */
  w32((uint32_t)(0x1175416c), (0x1u));
  /* 1172ba4c jmp 0x1172ba58 */
  goto L_1172ba58;
L_1172ba4e:;
  /* 1172ba4e mov dword ptr [0x1175416c], 0 */
  w32((uint32_t)(0x1175416c), (0x0u));
L_1172ba58:;
  /* 1172ba58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1172ba5f jmp 0x1172ba6a */
  goto L_1172ba6a;
L_1172ba61:;
  /* 1172ba61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ba64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ba67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1172ba6a:;
  /* 1172ba6a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ba6e jae 0x1172ba7f */
  if (!C.cf) goto L_1172ba7f;
  /* 1172ba70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172ba73 mov word ptr [eax*2 + 0x11754160], 0 */
  w16((uint32_t)(EAX*2 + 0x11754160), (0x0u));
  /* 1172ba7d jmp 0x1172ba61 */
  goto L_1172ba61;
L_1172ba7f:;
  /* 1172ba7f call 0x1172bc30 */
  push32(0x1172ba84u); f_1172bc30();
  /* 1172ba84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172ba86 call 0x11723ba0 */
  push32(0x1172ba8bu); f_11723ba0();
  /* 1172ba8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ba8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172ba90 jmp 0x1172bac0 */
  goto L_1172bac0;
L_1172ba92:;
  /* 1172ba92 cmp dword ptr [0x11752bf4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bf4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ba99 je 0x1172bab3 */
  if (C.zf) goto L_1172bab3;
  /* 1172ba9b call 0x1172bbb0 */
  push32(0x1172baa0u); f_1172bbb0();
  /* 1172baa0 call 0x1172bc30 */
  push32(0x1172baa5u); f_1172bc30();
  /* 1172baa5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172baa7 call 0x11723ba0 */
  push32(0x1172baacu); f_11723ba0();
  /* 1172baac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172baaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172bab1 jmp 0x1172bac0 */
  goto L_1172bac0;
L_1172bab3:;
  /* 1172bab3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1172bab5 call 0x11723ba0 */
  push32(0x1172babau); f_11723ba0();
  /* 1172baba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172babd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1172bac0:;
  /* 1172bac0 mov esp, ebp */
  ESP = (EBP);
  /* 1172bac2 pop ebp */
  EBP = (pop32());
  /* 1172bac3 ret  */
  ESPCHK(0x1172b780u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x1172bad0 (89 bytes, 21 insns) */
void f_1172bad0(void) {
  FTRACE(0x1172bad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bad0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bad1 mov ebp, esp */
  EBP = (ESP);
  /* 1172bad3 mov dword ptr [0x11752bf4], 0 */
  w32((uint32_t)(0x11752bf4), (0x0u));
  /* 1172badd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bae1 jne 0x1172baf5 */
  if (!C.zf) goto L_1172baf5;
  /* 1172bae3 mov dword ptr [0x11752bf4], 1 */
  w32((uint32_t)(0x11752bf4), (0x1u));
  /* 1172baed call dword ptr [0x117552c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552c4))), 0x1172baf3u);
  /* 1172baf3 jmp 0x1172bb27 */
  goto L_1172bb27;
L_1172baf5:;
  /* 1172baf5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172baf9 jne 0x1172bb0d */
  if (!C.zf) goto L_1172bb0d;
  /* 1172bafb mov dword ptr [0x11752bf4], 1 */
  w32((uint32_t)(0x11752bf4), (0x1u));
  /* 1172bb05 call dword ptr [0x117552c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552c8))), 0x1172bb0bu);
  /* 1172bb0b jmp 0x1172bb27 */
  goto L_1172bb27;
L_1172bb0d:;
  /* 1172bb0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bb11 jne 0x1172bb24 */
  if (!C.zf) goto L_1172bb24;
  /* 1172bb13 mov dword ptr [0x11752bf4], 1 */
  w32((uint32_t)(0x11752bf4), (0x1u));
  /* 1172bb1d mov eax, dword ptr [0x11752c14] */
  EAX = (r32((uint32_t)(0x11752c14)));
  /* 1172bb22 jmp 0x1172bb27 */
  goto L_1172bb27;
L_1172bb24:;
  /* 1172bb24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1172bb27:;
  /* 1172bb27 pop ebp */
  EBP = (pop32());
  /* 1172bb28 ret  */
  ESPCHK(0x1172bad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb30 @ 0x1172bb30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_1172bb30(void) {
  FTRACE(0x1172bb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bb30 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bb31 mov ebp, esp */
  EBP = (ESP);
  /* 1172bb33 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bb34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172bb37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172bb3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bb3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172bb43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172bb46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bb4a ja 0x1172bb7a */
  if ((!C.cf&&!C.zf)) goto L_1172bb7a;
  /* 1172bb4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bb4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172bb51 mov dl, byte ptr [eax + 0x1172bb94] */
  DL = (r8((uint32_t)(EAX + 0x1172bb94)));
  /* 1172bb57 jmp dword ptr [edx*4 + 0x1172bb80] */
  switch (EDX) {
    case 0: goto L_1172bb5e;
    case 1: goto L_1172bb65;
    case 2: goto L_1172bb6c;
    case 3: goto L_1172bb73;
    case 4: goto L_1172bb7a;
    default: x86_unimpl("switch@0x1172bb57 out of table"); return;
  }
L_1172bb5e:;
  /* 1172bb5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 1172bb63 jmp 0x1172bb7c */
  goto L_1172bb7c;
L_1172bb65:;
  /* 1172bb65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1172bb6a jmp 0x1172bb7c */
  goto L_1172bb7c;
L_1172bb6c:;
  /* 1172bb6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 1172bb71 jmp 0x1172bb7c */
  goto L_1172bb7c;
L_1172bb73:;
  /* 1172bb73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 1172bb78 jmp 0x1172bb7c */
  goto L_1172bb7c;
L_1172bb7a:;
  /* 1172bb7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172bb7c:;
  /* 1172bb7c mov esp, ebp */
  ESP = (EBP);
  /* 1172bb7e pop ebp */
  EBP = (pop32());
  /* 1172bb7f ret  */
  ESPCHK(0x1172bb30u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x1172bbb0 (116 bytes, 29 insns) */
void f_1172bbb0(void) {
  FTRACE(0x1172bbb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bbb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bbb1 mov ebp, esp */
  EBP = (ESP);
  /* 1172bbb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bbb4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172bbbb jmp 0x1172bbc6 */
  goto L_1172bbc6;
L_1172bbbd:;
  /* 1172bbbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bbc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bbc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172bbc6:;
  /* 1172bbc6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bbcd jge 0x1172bbdb */
  if ((C.sf==C.of)) goto L_1172bbdb;
  /* 1172bbcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bbd2 mov byte ptr [ecx + 0x11754280], 0 */
  w8((uint32_t)(ECX + 0x11754280), (0x0u));
  /* 1172bbd9 jmp 0x1172bbbd */
  goto L_1172bbbd;
L_1172bbdb:;
  /* 1172bbdb mov dword ptr [0x117540e4], 0 */
  w32((uint32_t)(0x117540e4), (0x0u));
  /* 1172bbe5 mov dword ptr [0x1175416c], 0 */
  w32((uint32_t)(0x1175416c), (0x0u));
  /* 1172bbef mov dword ptr [0x11754384], 0 */
  w32((uint32_t)(0x11754384), (0x0u));
  /* 1172bbf9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172bc00 jmp 0x1172bc0b */
  goto L_1172bc0b;
L_1172bc02:;
  /* 1172bc02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bc05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bc08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172bc0b:;
  /* 1172bc0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bc0f jge 0x1172bc20 */
  if ((C.sf==C.of)) goto L_1172bc20;
  /* 1172bc11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bc14 mov word ptr [eax*2 + 0x11754160], 0 */
  w16((uint32_t)(EAX*2 + 0x11754160), (0x0u));
  /* 1172bc1e jmp 0x1172bc02 */
  goto L_1172bc02;
L_1172bc20:;
  /* 1172bc20 mov esp, ebp */
  ESP = (EBP);
  /* 1172bc22 pop ebp */
  EBP = (pop32());
  /* 1172bc23 ret  */
  ESPCHK(0x1172bbb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x1172bc30 (770 bytes, 175 insns) */
void f_1172bc30(void) {
  FTRACE(0x1172bc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bc31 mov ebp, esp */
  EBP = (ESP);
  /* 1172bc33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172bc39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 1172bc3f push eax */
  push32((uint32_t)(EAX));
  /* 1172bc40 mov ecx, dword ptr [0x117540e4] */
  ECX = (r32((uint32_t)(0x117540e4)));
  /* 1172bc46 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bc47 call dword ptr [0x11755380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755380))), 0x1172bc4du);
  /* 1172bc4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bc50 jne 0x1172be69 */
  if (!C.zf) goto L_1172be69;
  /* 1172bc56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1172bc60 jmp 0x1172bc71 */
  goto L_1172bc71;
L_1172bc62:;
  /* 1172bc62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bc68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bc6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1172bc71:;
  /* 1172bc71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bc7b jae 0x1172bc92 */
  if (!C.cf) goto L_1172bc92;
  /* 1172bc7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bc83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 1172bc89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 1172bc90 jmp 0x1172bc62 */
  goto L_1172bc62;
L_1172bc92:;
  /* 1172bc92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 1172bc99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 1172bc9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172bca2 jmp 0x1172bcad */
  goto L_1172bcad;
L_1172bca4:;
  /* 1172bca4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bca7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bcaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172bcad:;
  /* 1172bcad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bcb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172bcb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1172bcb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172bcb6 je 0x1172bcf8 */
  if (C.zf) goto L_1172bcf8;
  /* 1172bcb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bcbb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172bcbd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1172bcbf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 1172bcc5 jmp 0x1172bcd6 */
  goto L_1172bcd6;
L_1172bcc7:;
  /* 1172bcc7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bccd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bcd0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_1172bcd6:;
  /* 1172bcd6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172bcd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172bcdb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1172bcde cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bce4 ja 0x1172bcf6 */
  if ((!C.cf&&!C.zf)) goto L_1172bcf6;
  /* 1172bce6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bcec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 1172bcf4 jmp 0x1172bcc7 */
  goto L_1172bcc7;
L_1172bcf6:;
  /* 1172bcf6 jmp 0x1172bca4 */
  goto L_1172bca4;
L_1172bcf8:;
  /* 1172bcf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172bcfa mov eax, dword ptr [0x11754384] */
  EAX = (r32((uint32_t)(0x11754384)));
  /* 1172bcff push eax */
  push32((uint32_t)(EAX));
  /* 1172bd00 mov ecx, dword ptr [0x117540e4] */
  ECX = (r32((uint32_t)(0x117540e4)));
  /* 1172bd06 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bd07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 1172bd0d push edx */
  push32((uint32_t)(EDX));
  /* 1172bd0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1172bd19 push eax */
  push32((uint32_t)(EAX));
  /* 1172bd1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1172bd1c call 0x1172d5a0 */
  push32(0x1172bd21u); f_1172d5a0();
  /* 1172bd21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bd24 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172bd26 mov ecx, dword ptr [0x117540e4] */
  ECX = (r32((uint32_t)(0x117540e4)));
  /* 1172bd2c push ecx */
  push32((uint32_t)(ECX));
  /* 1172bd2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1172bd38 push edx */
  push32((uint32_t)(EDX));
  /* 1172bd39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 1172bd44 push eax */
  push32((uint32_t)(EAX));
  /* 1172bd45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd4a mov ecx, dword ptr [0x11754384] */
  ECX = (r32((uint32_t)(0x11754384)));
  /* 1172bd50 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bd51 call 0x1172d760 */
  push32(0x1172bd56u); f_1172d760();
  /* 1172bd56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bd59 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172bd5b mov edx, dword ptr [0x117540e4] */
  EDX = (r32((uint32_t)(0x117540e4)));
  /* 1172bd61 push edx */
  push32((uint32_t)(EDX));
  /* 1172bd62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 1172bd6d push eax */
  push32((uint32_t)(EAX));
  /* 1172bd6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172bd73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 1172bd79 push ecx */
  push32((uint32_t)(ECX));
  /* 1172bd7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1172bd7f mov edx, dword ptr [0x11754384] */
  EDX = (r32((uint32_t)(0x11754384)));
  /* 1172bd85 push edx */
  push32((uint32_t)(EDX));
  /* 1172bd86 call 0x1172d760 */
  push32(0x1172bd8bu); f_1172d760();
  /* 1172bd8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bd8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1172bd98 jmp 0x1172bda9 */
  goto L_1172bda9;
L_1172bd9a:;
  /* 1172bd9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bda0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bda3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1172bda9:;
  /* 1172bda9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bdb3 jae 0x1172be64 */
  if (!C.cf) goto L_1172be64;
  /* 1172bdb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bdbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172bdc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 1172bdc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172bdcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172bdce je 0x1172be06 */
  if (C.zf) goto L_1172be06;
  /* 1172bdd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bdd6 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 1172bddc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 1172bddf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bde5 mov byte ptr [edx + 0x11754281], cl */
  w8((uint32_t)(EDX + 0x11754281), (CL));
  /* 1172bdeb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bdf1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bdf7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 1172bdfe mov byte ptr [eax + 0x11754180], dl */
  w8((uint32_t)(EAX + 0x11754180), (DL));
  /* 1172be04 jmp 0x1172be5f */
  goto L_1172be5f;
L_1172be06:;
  /* 1172be06 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172be0e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 1172be16 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1172be19 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172be1b je 0x1172be52 */
  if (C.zf) goto L_1172be52;
  /* 1172be1d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be23 mov al, byte ptr [edx + 0x11754281] */
  AL = (r8((uint32_t)(EDX + 0x11754281)));
  /* 1172be29 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1172be2b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be31 mov byte ptr [ecx + 0x11754281], al */
  w8((uint32_t)(ECX + 0x11754281), (AL));
  /* 1172be37 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be3d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be43 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1172be4a mov byte ptr [edx + 0x11754180], cl */
  w8((uint32_t)(EDX + 0x11754180), (CL));
  /* 1172be50 jmp 0x1172be5f */
  goto L_1172be5f;
L_1172be52:;
  /* 1172be52 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be58 mov byte ptr [edx + 0x11754180], 0 */
  w8((uint32_t)(EDX + 0x11754180), (0x0u));
L_1172be5f:;
  /* 1172be5f jmp 0x1172bd9a */
  goto L_1172bd9a;
L_1172be64:;
  /* 1172be64 jmp 0x1172bf2e */
  goto L_1172bf2e;
L_1172be69:;
  /* 1172be69 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 1172be73 jmp 0x1172be84 */
  goto L_1172be84;
L_1172be75:;
  /* 1172be75 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172be7b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172be7e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_1172be84:;
  /* 1172be84 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172be8e jae 0x1172bf2e */
  if (!C.cf) goto L_1172bf2e;
  /* 1172be94 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172be9b jb 0x1172bed8 */
  if (C.cf) goto L_1172bed8;
  /* 1172be9d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bea4 ja 0x1172bed8 */
  if ((!C.cf&&!C.zf)) goto L_1172bed8;
  /* 1172bea6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172beac mov dl, byte ptr [ecx + 0x11754281] */
  DL = (r8((uint32_t)(ECX + 0x11754281)));
  /* 1172beb2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1172beb5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bebb mov byte ptr [eax + 0x11754281], dl */
  w8((uint32_t)(EAX + 0x11754281), (DL));
  /* 1172bec1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bec7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172beca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bed0 mov byte ptr [edx + 0x11754180], cl */
  w8((uint32_t)(EDX + 0x11754180), (CL));
  /* 1172bed6 jmp 0x1172bf29 */
  goto L_1172bf29;
L_1172bed8:;
  /* 1172bed8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bedf jb 0x1172bf1c */
  if (C.cf) goto L_1172bf1c;
  /* 1172bee1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bee8 ja 0x1172bf1c */
  if ((!C.cf&&!C.zf)) goto L_1172bf1c;
  /* 1172beea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bef0 mov cl, byte ptr [eax + 0x11754281] */
  CL = (r8((uint32_t)(EAX + 0x11754281)));
  /* 1172bef6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1172bef9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172beff mov byte ptr [edx + 0x11754281], cl */
  w8((uint32_t)(EDX + 0x11754281), (CL));
  /* 1172bf05 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bf0b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172bf0e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bf14 mov byte ptr [ecx + 0x11754180], al */
  w8((uint32_t)(ECX + 0x11754180), (AL));
  /* 1172bf1a jmp 0x1172bf29 */
  goto L_1172bf29;
L_1172bf1c:;
  /* 1172bf1c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1172bf22 mov byte ptr [edx + 0x11754180], 0 */
  w8((uint32_t)(EDX + 0x11754180), (0x0u));
L_1172bf29:;
  /* 1172bf29 jmp 0x1172be75 */
  goto L_1172be75;
L_1172bf2e:;
  /* 1172bf2e mov esp, ebp */
  ESP = (EBP);
  /* 1172bf30 pop ebp */
  EBP = (pop32());
  /* 1172bf31 ret  */
  ESPCHK(0x1172bc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf40 @ 0x1172bf40 (23 bytes, 9 insns) */
void f_1172bf40(void) {
  FTRACE(0x1172bf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bf41 mov ebp, esp */
  EBP = (ESP);
  /* 1172bf43 cmp dword ptr [0x1175416c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1175416c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bf4a je 0x1172bf53 */
  if (C.zf) goto L_1172bf53;
  /* 1172bf4c mov eax, dword ptr [0x117540e4] */
  EAX = (r32((uint32_t)(0x117540e4)));
  /* 1172bf51 jmp 0x1172bf55 */
  goto L_1172bf55;
L_1172bf53:;
  /* 1172bf53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172bf55:;
  /* 1172bf55 pop ebp */
  EBP = (pop32());
  /* 1172bf56 ret  */
  ESPCHK(0x1172bf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf60 @ 0x1172bf60 (34 bytes, 10 insns) */
void f_1172bf60(void) {
  FTRACE(0x1172bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bf61 mov ebp, esp */
  EBP = (ESP);
  /* 1172bf63 cmp dword ptr [0x11754510], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11754510))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bf6a jne 0x1172bf80 */
  if (!C.zf) goto L_1172bf80;
  /* 1172bf6c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1172bf6e call 0x1172b780 */
  push32(0x1172bf73u); f_1172b780();
  /* 1172bf73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bf76 mov dword ptr [0x11754510], 1 */
  w32((uint32_t)(0x11754510), (0x1u));
L_1172bf80:;
  /* 1172bf80 pop ebp */
  EBP = (pop32());
  /* 1172bf81 ret  */
  ESPCHK(0x1172bf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x1172bf90 (664 bytes, 265 insns) [15 switch table(s)] */
void f_1172bf90(void) {
  FTRACE(0x1172bf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172bf90 push ebp */
  push32((uint32_t)(EBP));
  /* 1172bf91 mov ebp, esp */
  EBP = (ESP);
  /* 1172bf93 push edi */
  push32((uint32_t)(EDI));
  /* 1172bf94 push esi */
  push32((uint32_t)(ESI));
  /* 1172bf95 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1172bf98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172bf9b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1172bf9e mov eax, ecx */
  EAX = (ECX);
  /* 1172bfa0 mov edx, ecx */
  EDX = (ECX);
  /* 1172bfa2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bfa4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bfa6 jbe 0x1172bfb0 */
  if ((C.cf||C.zf)) goto L_1172bfb0;
  /* 1172bfa8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bfaa jb 0x1172c128 */
  if (C.cf) goto L_1172c128;
L_1172bfb0:;
  /* 1172bfb0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1172bfb6 jne 0x1172bfcc */
  if (!C.zf) goto L_1172bfcc;
  /* 1172bfb8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172bfbb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1172bfbe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172bfc1 jb 0x1172bfec */
  if (C.cf) goto L_1172bfec;
  /* 1172bfc3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172bfc5 jmp dword ptr [edx*4 + 0x1172c0d8] */
  switch (EDX) {
    case 0: goto L_1172c0e8;
    case 1: goto L_1172c0f0;
    case 2: goto L_1172c0fc;
    case 3: goto L_1172c110;
    default: x86_unimpl("switch@0x1172bfc5 out of table"); return;
  }
L_1172bfcc:;
  /* 1172bfcc mov eax, edi */
  EAX = (EDI);
  /* 1172bfce mov edx, 3 */
  EDX = (0x3u);
  /* 1172bfd3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172bfd6 jb 0x1172bfe4 */
  if (C.cf) goto L_1172bfe4;
  /* 1172bfd8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1172bfdb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172bfdd jmp dword ptr [eax*4 + 0x1172bff0] */
  switch (EAX) {
    case 1: goto L_1172c000;
    case 2: goto L_1172c02c;
    case 3: goto L_1172c050;
    default: x86_unimpl("switch@0x1172bfdd out of table"); return;
  }
L_1172bfe4:;
  /* 1172bfe4 jmp dword ptr [ecx*4 + 0x1172c0e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1172c0e8)))); return;
  /* 1172bfeb nop  */
  /* nop */
L_1172bfec:;
  /* 1172bfec jmp dword ptr [ecx*4 + 0x1172c06c] */
  switch (ECX) {
    case 0: goto L_1172c0cf;
    case 1: goto L_1172c0bc;
    case 2: goto L_1172c0b4;
    case 3: goto L_1172c0ac;
    case 4: goto L_1172c0a4;
    case 5: goto L_1172c09c;
    case 6: goto L_1172c094;
    case 7: goto L_1172c08c;
    default: x86_unimpl("switch@0x1172bfec out of table"); return;
  }
  /* 1172bff3 nop  */
  /* nop */
L_1172c000:;
  /* 1172c000 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c002 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c004 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c006 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c009 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c00c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c00f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c012 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c015 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c018 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c01b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c01e jb 0x1172bfec */
  if (C.cf) goto L_1172bfec;
  /* 1172c020 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c022 jmp dword ptr [edx*4 + 0x1172c0d8] */
  switch (EDX) {
    case 0: goto L_1172c0e8;
    case 1: goto L_1172c0f0;
    case 2: goto L_1172c0fc;
    case 3: goto L_1172c110;
    default: x86_unimpl("switch@0x1172c022 out of table"); return;
  }
  /* 1172c029 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c02c:;
  /* 1172c02c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c02e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c030 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c032 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c035 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c038 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c03b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c03e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c041 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c044 jb 0x1172bfec */
  if (C.cf) goto L_1172bfec;
  /* 1172c046 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c048 jmp dword ptr [edx*4 + 0x1172c0d8] */
  switch (EDX) {
    case 0: goto L_1172c0e8;
    case 1: goto L_1172c0f0;
    case 2: goto L_1172c0fc;
    case 3: goto L_1172c110;
    default: x86_unimpl("switch@0x1172c048 out of table"); return;
  }
  /* 1172c04f nop  */
  /* nop */
L_1172c050:;
  /* 1172c050 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c052 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c054 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c056 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1172c057 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c05a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1172c05b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c05e jb 0x1172bfec */
  if (C.cf) goto L_1172bfec;
  /* 1172c060 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c062 jmp dword ptr [edx*4 + 0x1172c0d8] */
  switch (EDX) {
    case 0: goto L_1172c0e8;
    case 1: goto L_1172c0f0;
    case 2: goto L_1172c0fc;
    case 3: goto L_1172c110;
    default: x86_unimpl("switch@0x1172c062 out of table"); return;
  }
  /* 1172c069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c08c:;
  /* 1172c08c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1172c090 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1172c094:;
  /* 1172c094 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1172c098 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1172c09c:;
  /* 1172c09c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1172c0a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1172c0a4:;
  /* 1172c0a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1172c0a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1172c0ac:;
  /* 1172c0ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1172c0b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1172c0b4:;
  /* 1172c0b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1172c0b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1172c0bc:;
  /* 1172c0bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1172c0c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1172c0c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1172c0cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c0cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1172c0cf:;
  /* 1172c0cf jmp dword ptr [edx*4 + 0x1172c0d8] */
  switch (EDX) {
    case 0: goto L_1172c0e8;
    case 1: goto L_1172c0f0;
    case 2: goto L_1172c0fc;
    case 3: goto L_1172c110;
    default: x86_unimpl("switch@0x1172c0cf out of table"); return;
  }
  /* 1172c0d6 mov edi, edi */
  EDI = (EDI);
L_1172c0e8:;
  /* 1172c0e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c0eb pop esi */
  ESI = (pop32());
  /* 1172c0ec pop edi */
  EDI = (pop32());
  /* 1172c0ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c0ee ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c0ef nop  */
  /* nop */
L_1172c0f0:;
  /* 1172c0f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c0f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c0f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c0f7 pop esi */
  ESI = (pop32());
  /* 1172c0f8 pop edi */
  EDI = (pop32());
  /* 1172c0f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c0fa ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c0fb nop  */
  /* nop */
L_1172c0fc:;
  /* 1172c0fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c0fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c100 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c103 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c106 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c109 pop esi */
  ESI = (pop32());
  /* 1172c10a pop edi */
  EDI = (pop32());
  /* 1172c10b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c10c ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c10d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c110:;
  /* 1172c110 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1172c112 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1172c114 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c117 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c11a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c11d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c120 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c123 pop esi */
  ESI = (pop32());
  /* 1172c124 pop edi */
  EDI = (pop32());
  /* 1172c125 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c126 ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c127 nop  */
  /* nop */
L_1172c128:;
  /* 1172c128 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1172c12c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1172c130 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1172c136 jne 0x1172c15c */
  if (!C.zf) goto L_1172c15c;
  /* 1172c138 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c13b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c13e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c141 jb 0x1172c150 */
  if (C.cf) goto L_1172c150;
  /* 1172c143 std  */
  C.df=1;
  /* 1172c144 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c146 cld  */
  C.df=0;
  /* 1172c147 jmp dword ptr [edx*4 + 0x1172c270] */
  switch (EDX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c147 out of table"); return;
  }
  /* 1172c14e mov edi, edi */
  EDI = (EDI);
L_1172c150:;
  /* 1172c150 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172c152 jmp dword ptr [ecx*4 + 0x1172c220] */
  switch (ECX) {
    case 0: goto L_1172c267;
    default: x86_unimpl("switch@0x1172c152 out of table"); return;
  }
  /* 1172c159 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c15c:;
  /* 1172c15c mov eax, edi */
  EAX = (EDI);
  /* 1172c15e mov edx, 3 */
  EDX = (0x3u);
  /* 1172c163 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c166 jb 0x1172c174 */
  if (C.cf) goto L_1172c174;
  /* 1172c168 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1172c16b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c16d jmp dword ptr [eax*4 + 0x1172c178] */
  switch (EAX) {
    case 1: goto L_1172c188;
    case 2: goto L_1172c1a8;
    case 3: goto L_1172c1d0;
    default: x86_unimpl("switch@0x1172c16d out of table"); return;
  }
L_1172c174:;
  /* 1172c174 jmp dword ptr [ecx*4 + 0x1172c270] */
  switch (ECX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c174 out of table"); return;
  }
  /* 1172c17b nop  */
  /* nop */
L_1172c188:;
  /* 1172c188 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c18b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c18d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c190 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1172c191 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c194 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1172c195 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c198 jb 0x1172c150 */
  if (C.cf) goto L_1172c150;
  /* 1172c19a std  */
  C.df=1;
  /* 1172c19b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c19d cld  */
  C.df=0;
  /* 1172c19e jmp dword ptr [edx*4 + 0x1172c270] */
  switch (EDX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c19e out of table"); return;
  }
  /* 1172c1a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c1a8:;
  /* 1172c1a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c1ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c1ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c1b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c1b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c1b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c1b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c1bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c1bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c1c2 jb 0x1172c150 */
  if (C.cf) goto L_1172c150;
  /* 1172c1c4 std  */
  C.df=1;
  /* 1172c1c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c1c7 cld  */
  C.df=0;
  /* 1172c1c8 jmp dword ptr [edx*4 + 0x1172c270] */
  switch (EDX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c1c8 out of table"); return;
  }
  /* 1172c1cf nop  */
  /* nop */
L_1172c1d0:;
  /* 1172c1d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c1d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c1d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c1d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c1db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c1de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c1e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1172c1e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c1e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c1ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c1ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c1f0 jb 0x1172c150 */
  if (C.cf) goto L_1172c150;
  /* 1172c1f6 std  */
  C.df=1;
  /* 1172c1f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1172c1f9 cld  */
  C.df=0;
  /* 1172c1fa jmp dword ptr [edx*4 + 0x1172c270] */
  switch (EDX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c1fa out of table"); return;
  }
  /* 1172c201 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1172c204 and al, 0xc2 */
  { uint32_t _r=(AL)&(0xc2u); AL = (_r); fl_logic(_r,8); }
  /* 1172c206 jb 0x1172c219 */
  if (C.cf) goto L_1172c219;
  /* 1172c208 sub al, 0xc2 */
  { uint32_t _a=(AL),_b=(0xc2u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1172c20a jb 0x1172c21d */
  if (C.cf) goto L_1172c21d;
  /* 1172c20c xor al, 0xc2 */
  { uint32_t _r=(AL)^(0xc2u); AL = (_r); fl_logic(_r,8); }
  /* 1172c20e jb 0x1172c221 */
  if (C.cf) goto L_1172c221;
  /* 1172c210 cmp al, 0xc2 */
  { uint32_t _a=(AL),_b=(0xc2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1172c212 jb 0x1172c225 */
  if (C.cf) goto L_1172c225;
  /* 1172c214 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1172c215 ret 0x1172 */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4470; return;
  /* 1172c218 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
L_1172c219:;
  /* 1172c219 ret 0x1172 */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4470; return;
  /* 1172c21c push esp */
  push32((uint32_t)(ESP));
L_1172c21d:;
  /* 1172c21d ret 0x1172 */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4470; return;
  /* 1172c224 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1172c228 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1172c22c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1172c230 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1172c234 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1172c238 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1172c23c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1172c240 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1172c244 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1172c248 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1172c24c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1172c250 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1172c254 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1172c258 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1172c25c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1172c263 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c265 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1172c267:;
  /* 1172c267 jmp dword ptr [edx*4 + 0x1172c270] */
  switch (EDX) {
    case 0: goto L_1172c280;
    case 1: goto L_1172c288;
    case 2: goto L_1172c298;
    case 3: goto L_1172c2ac;
    default: x86_unimpl("switch@0x1172c267 out of table"); return;
  }
  /* 1172c26e mov edi, edi */
  EDI = (EDI);
L_1172c280:;
  /* 1172c280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c283 pop esi */
  ESI = (pop32());
  /* 1172c284 pop edi */
  EDI = (pop32());
  /* 1172c285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c286 ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c287 nop  */
  /* nop */
L_1172c288:;
  /* 1172c288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c28b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c28e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c291 pop esi */
  ESI = (pop32());
  /* 1172c292 pop edi */
  EDI = (pop32());
  /* 1172c293 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c294 ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c295 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1172c298:;
  /* 1172c298 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c29b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c29e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c2a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c2a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c2a7 pop esi */
  ESI = (pop32());
  /* 1172c2a8 pop edi */
  EDI = (pop32());
  /* 1172c2a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c2aa ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
  /* 1172c2ab nop  */
  /* nop */
L_1172c2ac:;
  /* 1172c2ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1172c2af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1172c2b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1172c2b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1172c2b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1172c2bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1172c2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c2c1 pop esi */
  ESI = (pop32());
  /* 1172c2c2 pop edi */
  EDI = (pop32());
  /* 1172c2c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1172c2c4 ret  */
  ESPCHK(0x1172bf90u, _esp0);
  ESP += 4; return;
L_1172c221: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1172c221 (unresolved jump table)"); return;
L_1172c225: /* branch target inside unresolved embedded table */
  x86_unimpl("desync@0x1172c225 (unresolved jump table)"); return;
}

/* __aulldiv @ 0x1172c2d0 (104 bytes, 43 insns) */
void f_1172c2d0(void) {
  FTRACE(0x1172c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172c2d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1172c2d1 push esi */
  push32((uint32_t)(ESI));
  /* 1172c2d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 1172c2d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c2d8 jne 0x1172c2f2 */
  if (!C.zf) goto L_1172c2f2;
  /* 1172c2da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1172c2de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1172c2e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c2e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c2e6 mov ebx, eax */
  EBX = (EAX);
  /* 1172c2e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1172c2ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c2ee mov edx, ebx */
  EDX = (EBX);
  /* 1172c2f0 jmp 0x1172c333 */
  goto L_1172c333;
L_1172c2f2:;
  /* 1172c2f2 mov ecx, eax */
  ECX = (EAX);
  /* 1172c2f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 1172c2f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1172c2fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_1172c300:;
  /* 1172c300 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1172c302 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1172c304 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1172c306 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1172c308 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172c30a jne 0x1172c300 */
  if (!C.zf) goto L_1172c300;
  /* 1172c30c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c30e mov esi, eax */
  ESI = (EAX);
  /* 1172c310 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1172c314 mov ecx, eax */
  ECX = (EAX);
  /* 1172c316 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1172c31a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1172c31c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c31e jb 0x1172c32e */
  if (C.cf) goto L_1172c32e;
  /* 1172c320 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c324 ja 0x1172c32e */
  if ((!C.cf&&!C.zf)) goto L_1172c32e;
  /* 1172c326 jb 0x1172c32f */
  if (C.cf) goto L_1172c32f;
  /* 1172c328 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c32c jbe 0x1172c32f */
  if ((C.cf||C.zf)) goto L_1172c32f;
L_1172c32e:;
  /* 1172c32e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1172c32f:;
  /* 1172c32f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c331 mov eax, esi */
  EAX = (ESI);
L_1172c333:;
  /* 1172c333 pop esi */
  ESI = (pop32());
  /* 1172c334 pop ebx */
  EBX = (pop32());
  /* 1172c335 ret 0x10 */
  ESPCHK(0x1172c2d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x1172c340 (117 bytes, 44 insns) */
void f_1172c340(void) {
  FTRACE(0x1172c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172c340 push ebx */
  push32((uint32_t)(EBX));
  /* 1172c341 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1172c345 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c347 jne 0x1172c361 */
  if (!C.zf) goto L_1172c361;
  /* 1172c349 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1172c34d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 1172c351 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c353 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c355 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1172c359 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c35b mov eax, edx */
  EAX = (EDX);
  /* 1172c35d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1172c35f jmp 0x1172c3b1 */
  goto L_1172c3b1;
L_1172c361:;
  /* 1172c361 mov ecx, eax */
  ECX = (EAX);
  /* 1172c363 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 1172c367 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1172c36b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1172c36f:;
  /* 1172c36f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1172c371 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 1172c373 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1172c375 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 1172c377 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172c379 jne 0x1172c36f */
  if (!C.zf) goto L_1172c36f;
  /* 1172c37b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1172c37d mov ecx, eax */
  ECX = (EAX);
  /* 1172c37f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1172c383 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 1172c384 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1172c388 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c38a jb 0x1172c39a */
  if (C.cf) goto L_1172c39a;
  /* 1172c38c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c390 ja 0x1172c39a */
  if ((!C.cf&&!C.zf)) goto L_1172c39a;
  /* 1172c392 jb 0x1172c3a2 */
  if (C.cf) goto L_1172c3a2;
  /* 1172c394 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c398 jbe 0x1172c3a2 */
  if ((C.cf||C.zf)) goto L_1172c3a2;
L_1172c39a:;
  /* 1172c39a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c39e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1172c3a2:;
  /* 1172c3a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c3a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c3aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172c3ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172c3ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_1172c3b1:;
  /* 1172c3b1 pop ebx */
  EBX = (pop32());
  /* 1172c3b2 ret 0x10 */
  ESPCHK(0x1172c340u, _esp0);
  ESP += 20; return;
}

/* FUN_1000c3c0 @ 0x1172c3c0 (628 bytes, 214 insns) */
void f_1172c3c0(void) {
  FTRACE(0x1172c3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172c3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172c3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1172c3c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c3c6 push ebx */
  push32((uint32_t)(EBX));
  /* 1172c3c7 push esi */
  push32((uint32_t)(ESI));
  /* 1172c3c8 push edi */
  push32((uint32_t)(EDI));
L_1172c3c9:;
  /* 1172c3c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c3cd jne 0x1172c3ed */
  if (!C.zf) goto L_1172c3ed;
  /* 1172c3cf push 0x1174df7c */
  push32((uint32_t)(0x1174df7cu));
  /* 1172c3d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172c3d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 1172c3d8 push 0x1174df70 */
  push32((uint32_t)(0x1174df70u));
  /* 1172c3dd push 2 */
  push32((uint32_t)(0x2u));
  /* 1172c3df call 0x11723380 */
  push32(0x1172c3e4u); f_11723380();
  /* 1172c3e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c3e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c3ea jne 0x1172c3ed */
  if (!C.zf) goto L_1172c3ed;
  /* 1172c3ec int3  */
  x86_unimpl("int3 @ 0x1172c3ec");
L_1172c3ed:;
  /* 1172c3ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c3ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c3f1 jne 0x1172c3c9 */
  if (!C.zf) goto L_1172c3c9;
  /* 1172c3f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c3f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1172c3f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c3fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1172c3ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172c402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c405 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c408 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c40e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c410 je 0x1172c41f */
  if (C.zf) goto L_1172c41f;
  /* 1172c412 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c415 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172c418 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1172c41b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172c41d je 0x1172c435 */
  if (C.zf) goto L_1172c435;
L_1172c41f:;
  /* 1172c41f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c422 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172c425 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1172c427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c42a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1172c42d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172c430 jmp 0x1172c62d */
  goto L_1172c62d;
L_1172c435:;
  /* 1172c435 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c438 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172c43b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1172c43e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c440 je 0x1172c48c */
  if (C.zf) goto L_1172c48c;
  /* 1172c442 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c445 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1172c44c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c44f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1172c452 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 1172c455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c457 je 0x1172c475 */
  if (C.zf) goto L_1172c475;
  /* 1172c459 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c45c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c45f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172c462 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172c464 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c467 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c46a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1172c46d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c470 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1172c473 jmp 0x1172c48c */
  goto L_1172c48c;
L_1172c475:;
  /* 1172c475 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c478 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c47b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c47e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c481 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1172c484 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172c487 jmp 0x1172c62d */
  goto L_1172c62d;
L_1172c48c:;
  /* 1172c48c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c48f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c492 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c498 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1172c49b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c49e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c4a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 1172c4a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c4a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1172c4aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c4ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1172c4b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172c4bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c4be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1172c4c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c4c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172c4c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 1172c4cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172c4cf jne 0x1172c4ff */
  if (!C.zf) goto L_1172c4ff;
  /* 1172c4d1 cmp dword ptr [ebp - 8], 0x11751460 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11751460u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c4d8 je 0x1172c4e3 */
  if (C.zf) goto L_1172c4e3;
  /* 1172c4da cmp dword ptr [ebp - 8], 0x11751480 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11751480u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c4e1 jne 0x1172c4f3 */
  if (!C.zf) goto L_1172c4f3;
L_1172c4e3:;
  /* 1172c4e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c4e6 push edx */
  push32((uint32_t)(EDX));
  /* 1172c4e7 call 0x1172dff0 */
  push32(0x1172c4ecu); f_1172dff0();
  /* 1172c4ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c4ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c4f1 jne 0x1172c4ff */
  if (!C.zf) goto L_1172c4ff;
L_1172c4f3:;
  /* 1172c4f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c4f6 push eax */
  push32((uint32_t)(EAX));
  /* 1172c4f7 call 0x1172df20 */
  push32(0x1172c4fcu); f_1172df20();
  /* 1172c4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172c4ff:;
  /* 1172c4ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c502 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1172c505 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c50b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c50d je 0x1172c5eb */
  if (C.zf) goto L_1172c5eb;
L_1172c513:;
  /* 1172c513 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c516 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c519 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1172c51b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c51e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c520 jge 0x1172c543 */
  if ((C.sf==C.of)) goto L_1172c543;
  /* 1172c522 push 0x1174df30 */
  push32((uint32_t)(0x1174df30u));
  /* 1172c527 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172c529 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1172c52e push 0x1174df70 */
  push32((uint32_t)(0x1174df70u));
  /* 1172c533 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172c535 call 0x11723380 */
  push32(0x1172c53au); f_11723380();
  /* 1172c53a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c53d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c540 jne 0x1172c543 */
  if (!C.zf) goto L_1172c543;
  /* 1172c542 int3  */
  x86_unimpl("int3 @ 0x1172c542");
L_1172c543:;
  /* 1172c543 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c545 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c547 jne 0x1172c513 */
  if (!C.zf) goto L_1172c513;
  /* 1172c549 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c54c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c54f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1172c551 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c554 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172c557 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c55a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1172c55d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c560 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c563 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1172c565 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c568 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1172c56b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c56e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c571 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1172c574 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c578 jle 0x1172c596 */
  if ((C.zf||C.sf!=C.of)) goto L_1172c596;
  /* 1172c57a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c57d push ecx */
  push32((uint32_t)(ECX));
  /* 1172c57e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c581 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172c584 push eax */
  push32((uint32_t)(EAX));
  /* 1172c585 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c588 push ecx */
  push32((uint32_t)(ECX));
  /* 1172c589 call 0x1172dc10 */
  push32(0x1172c58eu); f_1172dc10();
  /* 1172c58e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c591 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1172c594 jmp 0x1172c5de */
  goto L_1172c5de;
L_1172c596:;
  /* 1172c596 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c59a je 0x1172c5b9 */
  if (C.zf) goto L_1172c5b9;
  /* 1172c59c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c59f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1172c5a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c5a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1172c5a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172c5ab mov ecx, dword ptr [edx*4 + 0x117543c0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x117543c0)));
  /* 1172c5b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c5b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1172c5b7 jmp 0x1172c5c0 */
  goto L_1172c5c0;
L_1172c5b9:;
  /* 1172c5b9 mov dword ptr [ebp - 0x14], 0x11750e78 */
  w32((uint32_t)(EBP + -0x14), (0x11750e78u));
L_1172c5c0:;
  /* 1172c5c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1172c5c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 1172c5c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1172c5ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c5cc je 0x1172c5de */
  if (C.zf) goto L_1172c5de;
  /* 1172c5ce push 2 */
  push32((uint32_t)(0x2u));
  /* 1172c5d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172c5d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1172c5d6 call 0x1172dac0 */
  push32(0x1172c5dbu); f_1172dac0();
  /* 1172c5db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172c5de:;
  /* 1172c5de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c5e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1172c5e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1172c5e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1172c5e9 jmp 0x1172c609 */
  goto L_1172c609;
L_1172c5eb:;
  /* 1172c5eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172c5f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c5f5 push edx */
  push32((uint32_t)(EDX));
  /* 1172c5f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1172c5f9 push eax */
  push32((uint32_t)(EAX));
  /* 1172c5fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172c5fd push ecx */
  push32((uint32_t)(ECX));
  /* 1172c5fe call 0x1172dc10 */
  push32(0x1172c603u); f_1172dc10();
  /* 1172c603 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c606 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1172c609:;
  /* 1172c609 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172c60c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c60f je 0x1172c625 */
  if (C.zf) goto L_1172c625;
  /* 1172c611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c614 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1172c617 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1172c61a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c61d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1172c620 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172c623 jmp 0x1172c62d */
  goto L_1172c62d;
L_1172c625:;
  /* 1172c625 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c628 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1172c62d:;
  /* 1172c62d pop edi */
  EDI = (pop32());
  /* 1172c62e pop esi */
  ESI = (pop32());
  /* 1172c62f pop ebx */
  EBX = (pop32());
  /* 1172c630 mov esp, ebp */
  ESP = (EBP);
  /* 1172c632 pop ebp */
  EBP = (pop32());
  /* 1172c633 ret  */
  ESPCHK(0x1172c3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c640 @ 0x1172c640 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_1172c640(void) {
  FTRACE(0x1172c640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172c640 push ebp */
  push32((uint32_t)(EBP));
  /* 1172c641 mov ebp, esp */
  EBP = (ESP);
  /* 1172c643 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c649 push ebx */
  push32((uint32_t)(EBX));
  /* 1172c64a push esi */
  push32((uint32_t)(ESI));
  /* 1172c64b push edi */
  push32((uint32_t)(EDI));
  /* 1172c64c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1172c653 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1172c65d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_1172c664:;
  /* 1172c664 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c667 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1172c669 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1172c66c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c670 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c673 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c676 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1172c679 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c67b je 0x1172d257 */
  if (C.zf) goto L_1172d257;
  /* 1172c681 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c688 jl 0x1172d257 */
  if ((C.sf!=C.of)) goto L_1172d257;
  /* 1172c68e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c692 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c695 jl 0x1172c6b6 */
  if ((C.sf!=C.of)) goto L_1172c6b6;
  /* 1172c697 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c69b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c69e jg 0x1172c6b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_1172c6b6;
  /* 1172c6a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c6a4 movsx ecx, byte ptr [eax + 0x1174df68] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x1174df68))));
  /* 1172c6ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 1172c6ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 1172c6b4 jmp 0x1172c6c0 */
  goto L_1172c6c0;
L_1172c6b6:;
  /* 1172c6b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_1172c6c0:;
  /* 1172c6c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 1172c6c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1172c6c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1172c6cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172c6cf movsx edx, byte ptr [ecx + eax*8 + 0x1174df88] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x1174df88))));
  /* 1172c6d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1172c6da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1172c6dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1172c6e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 1172c6e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c6ed ja 0x1172d252 */
  if ((!C.cf&&!C.zf)) goto L_1172d252;
  /* 1172c6f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 1172c6f9 jmp dword ptr [ecx*4 + 0x1172d264] */
  switch (ECX) {
    case 0: goto L_1172c700;
    case 1: goto L_1172c79a;
    case 2: goto L_1172c7dc;
    case 3: goto L_1172c84b;
    case 4: goto L_1172c8a3;
    case 5: goto L_1172c8b2;
    case 6: goto L_1172c8fe;
    case 7: goto L_1172c991;
    case 8: goto L_1172c828;
    case 9: goto L_1172c833;
    case 10: goto L_1172c81e;
    case 11: goto L_1172c813;
    case 12: goto L_1172c83e;
    case 13: goto L_1172c846;
    default: x86_unimpl("switch@0x1172c6f9 out of table"); return;
  }
L_1172c700:;
  /* 1172c700 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1172c707 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172c70a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1172c710 mov eax, dword ptr [0x11750f38] */
  EAX = (r32((uint32_t)(0x11750f38)));
  /* 1172c715 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172c717 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1172c71b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1172c721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172c723 je 0x1172c77d */
  if (C.zf) goto L_1172c77d;
  /* 1172c725 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1172c72b push edx */
  push32((uint32_t)(EDX));
  /* 1172c72c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c72f push eax */
  push32((uint32_t)(EAX));
  /* 1172c730 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c734 push ecx */
  push32((uint32_t)(ECX));
  /* 1172c735 call 0x1172d370 */
  push32(0x1172c73au); f_1172d370();
  /* 1172c73a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c73d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c740 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1172c742 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 1172c745 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c748 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c74b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1172c74e:;
  /* 1172c74e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c752 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c754 jne 0x1172c777 */
  if (!C.zf) goto L_1172c777;
  /* 1172c756 push 0x1174e008 */
  push32((uint32_t)(0x1174e008u));
  /* 1172c75b push 0 */
  push32((uint32_t)(0x0u));
  /* 1172c75d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 1172c762 push 0x1174dffc */
  push32((uint32_t)(0x1174dffcu));
  /* 1172c767 push 2 */
  push32((uint32_t)(0x2u));
  /* 1172c769 call 0x11723380 */
  push32(0x1172c76eu); f_11723380();
  /* 1172c76e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c771 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c774 jne 0x1172c777 */
  if (!C.zf) goto L_1172c777;
  /* 1172c776 int3  */
  x86_unimpl("int3 @ 0x1172c776");
L_1172c777:;
  /* 1172c777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c779 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c77b jne 0x1172c74e */
  if (!C.zf) goto L_1172c74e;
L_1172c77d:;
  /* 1172c77d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1172c783 push ecx */
  push32((uint32_t)(ECX));
  /* 1172c784 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172c787 push edx */
  push32((uint32_t)(EDX));
  /* 1172c788 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c78c push eax */
  push32((uint32_t)(EAX));
  /* 1172c78d call 0x1172d370 */
  push32(0x1172c792u); f_1172d370();
  /* 1172c792 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c795 jmp 0x1172d252 */
  goto L_1172d252;
L_1172c79a:;
  /* 1172c79a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1172c7a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172c7a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 1172c7aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 1172c7b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 1172c7b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 1172c7bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1172c7bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172c7c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 1172c7d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1172c7d7 jmp 0x1172d252 */
  goto L_1172d252;
L_1172c7dc:;
  /* 1172c7dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c7e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 1172c7e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 1172c7ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c7ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 1172c7f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c7fc ja 0x1172c846 */
  if ((!C.cf&&!C.zf)) goto L_1172c846;
  /* 1172c7fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 1172c804 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c806 mov al, byte ptr [ecx + 0x1172d29c] */
  AL = (r8((uint32_t)(ECX + 0x1172d29c)));
  /* 1172c80c jmp dword ptr [eax*4 + 0x1172d284] */
  switch (EAX) {
    case 0: goto L_1172c828;
    case 1: goto L_1172c833;
    case 2: goto L_1172c81e;
    case 3: goto L_1172c813;
    case 4: goto L_1172c83e;
    case 5: goto L_1172c846;
    default: x86_unimpl("switch@0x1172c80c out of table"); return;
  }
L_1172c813:;
  /* 1172c813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c816 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c819 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172c81c jmp 0x1172c846 */
  goto L_1172c846;
L_1172c81e:;
  /* 1172c81e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c821 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1172c823 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172c826 jmp 0x1172c846 */
  goto L_1172c846;
L_1172c828:;
  /* 1172c828 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c82b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1172c82e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172c831 jmp 0x1172c846 */
  goto L_1172c846;
L_1172c833:;
  /* 1172c833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c836 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 1172c839 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172c83c jmp 0x1172c846 */
  goto L_1172c846;
L_1172c83e:;
  /* 1172c83e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c841 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 1172c843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172c846:;
  /* 1172c846 jmp 0x1172d252 */
  goto L_1172d252;
L_1172c84b:;
  /* 1172c84b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c84f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c852 jne 0x1172c887 */
  if (!C.zf) goto L_1172c887;
  /* 1172c854 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1172c857 push edx */
  push32((uint32_t)(EDX));
  /* 1172c858 call 0x1172d480 */
  push32(0x1172c85du); f_1172d480();
  /* 1172c85d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c860 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 1172c866 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c86d jge 0x1172c885 */
  if ((C.sf==C.of)) goto L_1172c885;
  /* 1172c86f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c872 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1172c874 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172c877 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1172c87d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172c87f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1172c885:;
  /* 1172c885 jmp 0x1172c89e */
  goto L_1172c89e;
L_1172c887:;
  /* 1172c887 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 1172c88d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172c890 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c894 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 1172c898 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_1172c89e:;
  /* 1172c89e jmp 0x1172d252 */
  goto L_1172d252;
L_1172c8a3:;
  /* 1172c8a3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 1172c8ad jmp 0x1172d252 */
  goto L_1172d252;
L_1172c8b2:;
  /* 1172c8b2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c8b6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c8b9 jne 0x1172c8e2 */
  if (!C.zf) goto L_1172c8e2;
  /* 1172c8bb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1172c8be push eax */
  push32((uint32_t)(EAX));
  /* 1172c8bf call 0x1172d480 */
  push32(0x1172c8c4u); f_1172d480();
  /* 1172c8c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c8c7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1172c8cd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c8d4 jge 0x1172c8e0 */
  if ((C.sf==C.of)) goto L_1172c8e0;
  /* 1172c8d6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_1172c8e0:;
  /* 1172c8e0 jmp 0x1172c8f9 */
  goto L_1172c8f9;
L_1172c8e2:;
  /* 1172c8e2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 1172c8e8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172c8eb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c8ef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1172c8f3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_1172c8f9:;
  /* 1172c8f9 jmp 0x1172d252 */
  goto L_1172d252;
L_1172c8fe:;
  /* 1172c8fe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c902 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 1172c908 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1172c90e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c911 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 1172c917 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c91e ja 0x1172c98c */
  if ((!C.cf&&!C.zf)) goto L_1172c98c;
  /* 1172c920 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 1172c926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172c928 mov al, byte ptr [ecx + 0x1172d2c1] */
  AL = (r8((uint32_t)(ECX + 0x1172d2c1)));
  /* 1172c92e jmp dword ptr [eax*4 + 0x1172d2ad] */
  switch (EAX) {
    case 0: goto L_1172c940;
    case 1: goto L_1172c979;
    case 2: goto L_1172c935;
    case 3: goto L_1172c983;
    case 4: goto L_1172c98c;
    default: x86_unimpl("switch@0x1172c92e out of table"); return;
  }
L_1172c935:;
  /* 1172c935 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c938 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c93b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172c93e jmp 0x1172c98c */
  goto L_1172c98c;
L_1172c940:;
  /* 1172c940 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c943 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1172c946 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c949 jne 0x1172c96b */
  if (!C.zf) goto L_1172c96b;
  /* 1172c94b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c94e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1172c952 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c955 jne 0x1172c96b */
  if (!C.zf) goto L_1172c96b;
  /* 1172c957 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172c95a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c95d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1172c960 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c963 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1172c966 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172c969 jmp 0x1172c977 */
  goto L_1172c977;
L_1172c96b:;
  /* 1172c96b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 1172c972 jmp 0x1172c700 */
  goto L_1172c700;
L_1172c977:;
  /* 1172c977 jmp 0x1172c98c */
  goto L_1172c98c;
L_1172c979:;
  /* 1172c979 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c97c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1172c97e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172c981 jmp 0x1172c98c */
  goto L_1172c98c;
L_1172c983:;
  /* 1172c983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c986 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1172c989 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172c98c:;
  /* 1172c98c jmp 0x1172d252 */
  goto L_1172d252;
L_1172c991:;
  /* 1172c991 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172c995 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 1172c99b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1172c9a1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172c9a4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 1172c9aa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172c9b1 ja 0x1172d077 */
  if ((!C.cf&&!C.zf)) goto L_1172d077;
  /* 1172c9b7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 1172c9bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172c9bf mov cl, byte ptr [edx + 0x1172d32c] */
  CL = (r8((uint32_t)(EDX + 0x1172d32c)));
  /* 1172c9c5 jmp dword ptr [ecx*4 + 0x1172d2f0] */
  switch (ECX) {
    case 0: goto L_1172c9cc;
    case 1: goto L_1172cc60;
    case 2: goto L_1172caf0;
    case 3: goto L_1172cd99;
    case 4: goto L_1172ca5b;
    case 5: goto L_1172c9e1;
    case 6: goto L_1172cd6b;
    case 7: goto L_1172cc70;
    case 8: goto L_1172cc15;
    case 9: goto L_1172cde5;
    case 10: goto L_1172cd8f;
    case 11: goto L_1172cb06;
    case 12: goto L_1172cd83;
    case 13: goto L_1172cda5;
    case 14: goto L_1172d077;
    default: x86_unimpl("switch@0x1172c9c5 out of table"); return;
  }
L_1172c9cc:;
  /* 1172c9cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c9cf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 1172c9d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172c9d6 jne 0x1172c9e1 */
  if (!C.zf) goto L_1172c9e1;
  /* 1172c9d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c9db or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1172c9de mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172c9e1:;
  /* 1172c9e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172c9e4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 1172c9ea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172c9ec je 0x1172ca27 */
  if (C.zf) goto L_1172ca27;
  /* 1172c9ee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1172c9f1 push eax */
  push32((uint32_t)(EAX));
  /* 1172c9f2 call 0x1172d4c0 */
  push32(0x1172c9f7u); f_1172d4c0();
  /* 1172c9f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172c9fa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 1172c9fe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 1172ca02 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ca03 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1172ca09 push edx */
  push32((uint32_t)(EDX));
  /* 1172ca0a call 0x1172e260 */
  push32(0x1172ca0fu); f_1172e260();
  /* 1172ca0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ca12 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1172ca15 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ca19 jge 0x1172ca25 */
  if ((C.sf==C.of)) goto L_1172ca25;
  /* 1172ca1b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_1172ca25:;
  /* 1172ca25 jmp 0x1172ca4d */
  goto L_1172ca4d;
L_1172ca27:;
  /* 1172ca27 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1172ca2a push eax */
  push32((uint32_t)(EAX));
  /* 1172ca2b call 0x1172d480 */
  push32(0x1172ca30u); f_1172d480();
  /* 1172ca30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ca33 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 1172ca3a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 1172ca40 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 1172ca46 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_1172ca4d:;
  /* 1172ca4d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 1172ca53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1172ca56 jmp 0x1172d077 */
  goto L_1172d077;
L_1172ca5b:;
  /* 1172ca5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1172ca5e push eax */
  push32((uint32_t)(EAX));
  /* 1172ca5f call 0x1172d480 */
  push32(0x1172ca64u); f_1172d480();
  /* 1172ca64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ca67 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 1172ca6d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ca74 je 0x1172ca82 */
  if (C.zf) goto L_1172ca82;
  /* 1172ca76 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1172ca7c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ca80 jne 0x1172ca9c */
  if (!C.zf) goto L_1172ca9c;
L_1172ca82:;
  /* 1172ca82 mov edx, dword ptr [0x117512d0] */
  EDX = (r32((uint32_t)(0x117512d0)));
  /* 1172ca88 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1172ca8b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172ca8e push eax */
  push32((uint32_t)(EAX));
  /* 1172ca8f call 0x117280a0 */
  push32(0x1172ca94u); f_117280a0();
  /* 1172ca94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ca97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1172ca9a jmp 0x1172caeb */
  goto L_1172caeb;
L_1172ca9c:;
  /* 1172ca9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ca9f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 1172caa5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172caa7 je 0x1172cacc */
  if (C.zf) goto L_1172cacc;
  /* 1172caa9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1172caaf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1172cab2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172cab5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1172cabb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 1172cabe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1172cac0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1172cac3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1172caca jmp 0x1172caeb */
  goto L_1172caeb;
L_1172cacc:;
  /* 1172cacc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 1172cad3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1172cad9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172cadc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1172cadf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 1172cae5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 1172cae8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1172caeb:;
  /* 1172caeb jmp 0x1172d077 */
  goto L_1172d077;
L_1172caf0:;
  /* 1172caf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172caf3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 1172caf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172cafb jne 0x1172cb06 */
  if (!C.zf) goto L_1172cb06;
  /* 1172cafd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cb00 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1172cb03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172cb06:;
  /* 1172cb06 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cb0d jne 0x1172cb1b */
  if (!C.zf) goto L_1172cb1b;
  /* 1172cb0f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 1172cb19 jmp 0x1172cb27 */
  goto L_1172cb27;
L_1172cb1b:;
  /* 1172cb1b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1172cb21 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_1172cb27:;
  /* 1172cb27 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 1172cb2d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1172cb33 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1172cb36 push edx */
  push32((uint32_t)(EDX));
  /* 1172cb37 call 0x1172d480 */
  push32(0x1172cb3cu); f_1172d480();
  /* 1172cb3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cb3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172cb42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cb45 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 1172cb4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cb4c je 0x1172cbb6 */
  if (C.zf) goto L_1172cbb6;
  /* 1172cb4e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cb52 jne 0x1172cb5d */
  if (!C.zf) goto L_1172cb5d;
  /* 1172cb54 mov ecx, dword ptr [0x117512d4] */
  ECX = (r32((uint32_t)(0x117512d4)));
  /* 1172cb5a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1172cb5d:;
  /* 1172cb5d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 1172cb64 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cb67 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_1172cb6d:;
  /* 1172cb6d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1172cb73 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 1172cb79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172cb7c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 1172cb82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cb84 je 0x1172cba6 */
  if (C.zf) goto L_1172cba6;
  /* 1172cb86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1172cb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172cb8e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1172cb91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cb93 je 0x1172cba6 */
  if (C.zf) goto L_1172cba6;
  /* 1172cb95 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 1172cb9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cb9e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 1172cba4 jmp 0x1172cb6d */
  goto L_1172cb6d;
L_1172cba6:;
  /* 1172cba6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 1172cbac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172cbaf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1172cbb1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1172cbb4 jmp 0x1172cc10 */
  goto L_1172cc10;
L_1172cbb6:;
  /* 1172cbb6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cbba jne 0x1172cbc4 */
  if (!C.zf) goto L_1172cbc4;
  /* 1172cbbc mov eax, dword ptr [0x117512d0] */
  EAX = (r32((uint32_t)(0x117512d0)));
  /* 1172cbc1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1172cbc4:;
  /* 1172cbc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cbc7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_1172cbcd:;
  /* 1172cbcd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 1172cbd3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 1172cbd9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172cbdc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 1172cbe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cbe4 je 0x1172cc04 */
  if (C.zf) goto L_1172cc04;
  /* 1172cbe6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1172cbec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172cbef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cbf1 je 0x1172cc04 */
  if (C.zf) goto L_1172cc04;
  /* 1172cbf3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 1172cbf9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cbfc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 1172cc02 jmp 0x1172cbcd */
  goto L_1172cbcd;
L_1172cc04:;
  /* 1172cc04 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 1172cc0a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172cc0d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_1172cc10:;
  /* 1172cc10 jmp 0x1172d077 */
  goto L_1172d077;
L_1172cc15:;
  /* 1172cc15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1172cc18 push edx */
  push32((uint32_t)(EDX));
  /* 1172cc19 call 0x1172d480 */
  push32(0x1172cc1eu); f_1172d480();
  /* 1172cc1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cc21 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 1172cc27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cc2a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1172cc2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cc2f je 0x1172cc43 */
  if (C.zf) goto L_1172cc43;
  /* 1172cc31 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1172cc37 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 1172cc3e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1172cc41 jmp 0x1172cc51 */
  goto L_1172cc51;
L_1172cc43:;
  /* 1172cc43 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 1172cc49 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1172cc4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_1172cc51:;
  /* 1172cc51 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 1172cc5b jmp 0x1172d077 */
  goto L_1172d077;
L_1172cc60:;
  /* 1172cc60 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1172cc67 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 1172cc6a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1172cc6d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_1172cc70:;
  /* 1172cc70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cc73 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1172cc75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172cc78 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 1172cc7e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1172cc81 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cc88 jge 0x1172cc96 */
  if ((C.sf==C.of)) goto L_1172cc96;
  /* 1172cc8a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 1172cc94 jmp 0x1172ccb2 */
  goto L_1172ccb2;
L_1172cc96:;
  /* 1172cc96 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cc9d jne 0x1172ccb2 */
  if (!C.zf) goto L_1172ccb2;
  /* 1172cc9f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172cca3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cca6 jne 0x1172ccb2 */
  if (!C.zf) goto L_1172ccb2;
  /* 1172cca8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_1172ccb2:;
  /* 1172ccb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172ccb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ccb8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 1172ccbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172ccbe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172ccc1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172ccc3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172ccc6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 1172cccc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 1172ccd2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172ccd5 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ccd6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1172ccdc push edx */
  push32((uint32_t)(EDX));
  /* 1172ccdd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172cce1 push eax */
  push32((uint32_t)(EAX));
  /* 1172cce2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cce5 push ecx */
  push32((uint32_t)(ECX));
  /* 1172cce6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 1172ccec push edx */
  push32((uint32_t)(EDX));
  /* 1172cced call dword ptr [0x117516c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117516c0))), 0x1172ccf3u);
  /* 1172ccf3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ccf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ccf9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ccfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cd00 je 0x1172cd18 */
  if (C.zf) goto L_1172cd18;
  /* 1172cd02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cd09 jne 0x1172cd18 */
  if (!C.zf) goto L_1172cd18;
  /* 1172cd0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cd0e push ecx */
  push32((uint32_t)(ECX));
  /* 1172cd0f call dword ptr [0x117516cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117516cc))), 0x1172cd15u);
  /* 1172cd15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172cd18:;
  /* 1172cd18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1172cd1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cd1f jne 0x1172cd3a */
  if (!C.zf) goto L_1172cd3a;
  /* 1172cd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cd24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1172cd29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cd2b jne 0x1172cd3a */
  if (!C.zf) goto L_1172cd3a;
  /* 1172cd2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cd30 push ecx */
  push32((uint32_t)(ECX));
  /* 1172cd31 call dword ptr [0x117516c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x117516c4))), 0x1172cd37u);
  /* 1172cd37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172cd3a:;
  /* 1172cd3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cd3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1172cd40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cd43 jne 0x1172cd57 */
  if (!C.zf) goto L_1172cd57;
  /* 1172cd45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cd48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1172cd4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172cd4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cd51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cd54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1172cd57:;
  /* 1172cd57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172cd5a push eax */
  push32((uint32_t)(EAX));
  /* 1172cd5b call 0x117280a0 */
  push32(0x1172cd60u); f_117280a0();
  /* 1172cd60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cd63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1172cd66 jmp 0x1172d077 */
  goto L_1172d077;
L_1172cd6b:;
  /* 1172cd6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cd6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1172cd71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172cd74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1172cd7e jmp 0x1172ce05 */
  goto L_1172ce05;
L_1172cd83:;
  /* 1172cd83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 1172cd8d jmp 0x1172ce05 */
  goto L_1172ce05;
L_1172cd8f:;
  /* 1172cd8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_1172cd99:;
  /* 1172cd99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 1172cda3 jmp 0x1172cdaf */
  goto L_1172cdaf;
L_1172cda5:;
  /* 1172cda5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_1172cdaf:;
  /* 1172cdaf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 1172cdb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cdbc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1172cdc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cdc4 je 0x1172cde3 */
  if (C.zf) goto L_1172cde3;
  /* 1172cdc6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 1172cdcd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 1172cdd3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cdd6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 1172cddc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_1172cde3:;
  /* 1172cde3 jmp 0x1172ce05 */
  goto L_1172ce05;
L_1172cde5:;
  /* 1172cde5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 1172cdef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cdf2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1172cdf8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172cdfa je 0x1172ce05 */
  if (C.zf) goto L_1172ce05;
  /* 1172cdfc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cdff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1172ce02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172ce05:;
  /* 1172ce05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ce08 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ce0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ce0f je 0x1172ce2e */
  if (C.zf) goto L_1172ce2e;
  /* 1172ce11 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1172ce14 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ce15 call 0x1172d4a0 */
  push32(0x1172ce1au); f_1172d4a0();
  /* 1172ce1a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ce1d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1172ce23 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1172ce29 jmp 0x1172cebf */
  goto L_1172cebf;
L_1172ce2e:;
  /* 1172ce2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ce31 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1172ce34 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172ce36 je 0x1172ce80 */
  if (C.zf) goto L_1172ce80;
  /* 1172ce38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ce3b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ce3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ce40 je 0x1172ce60 */
  if (C.zf) goto L_1172ce60;
  /* 1172ce42 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1172ce45 push ecx */
  push32((uint32_t)(ECX));
  /* 1172ce46 call 0x1172d480 */
  push32(0x1172ce4bu); f_1172d480();
  /* 1172ce4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ce4e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1172ce51 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172ce52 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1172ce58 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1172ce5e jmp 0x1172ce7e */
  goto L_1172ce7e;
L_1172ce60:;
  /* 1172ce60 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1172ce63 push edx */
  push32((uint32_t)(EDX));
  /* 1172ce64 call 0x1172d480 */
  push32(0x1172ce69u); f_1172d480();
  /* 1172ce69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ce6c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172ce71 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172ce72 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1172ce78 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1172ce7e:;
  /* 1172ce7e jmp 0x1172cebf */
  goto L_1172cebf;
L_1172ce80:;
  /* 1172ce80 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ce83 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1172ce86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172ce88 je 0x1172cea5 */
  if (C.zf) goto L_1172cea5;
  /* 1172ce8a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1172ce8d push ecx */
  push32((uint32_t)(ECX));
  /* 1172ce8e call 0x1172d480 */
  push32(0x1172ce93u); f_1172d480();
  /* 1172ce93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ce96 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172ce97 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1172ce9d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1172cea3 jmp 0x1172cebf */
  goto L_1172cebf;
L_1172cea5:;
  /* 1172cea5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1172cea8 push edx */
  push32((uint32_t)(EDX));
  /* 1172cea9 call 0x1172d480 */
  push32(0x1172ceaeu); f_1172d480();
  /* 1172ceae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ceb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1172ceb3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1172ceb9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1172cebf:;
  /* 1172cebf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cec2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1172cec5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cec7 je 0x1172cf07 */
  if (C.zf) goto L_1172cf07;
  /* 1172cec9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172ced0 jg 0x1172cf07 */
  if ((!C.zf&&C.sf==C.of)) goto L_1172cf07;
  /* 1172ced2 jl 0x1172cedd */
  if ((C.sf!=C.of)) goto L_1172cedd;
  /* 1172ced4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cedb jae 0x1172cf07 */
  if (!C.cf) goto L_1172cf07;
L_1172cedd:;
  /* 1172cedd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1172cee3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172cee5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1172ceeb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172ceee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172cef0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1172cef6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1172cefc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172ceff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1172cf02 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172cf05 jmp 0x1172cf1f */
  goto L_1172cf1f;
L_1172cf07:;
  /* 1172cf07 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1172cf0d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1172cf13 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1172cf19 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1172cf1f:;
  /* 1172cf1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cf22 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1172cf28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cf2a jne 0x1172cf47 */
  if (!C.zf) goto L_1172cf47;
  /* 1172cf2c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1172cf32 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1172cf38 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1172cf3b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1172cf41 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1172cf47:;
  /* 1172cf47 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172cf4e jge 0x1172cf5c */
  if ((C.sf==C.of)) goto L_1172cf5c;
  /* 1172cf50 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1172cf5a jmp 0x1172cf65 */
  goto L_1172cf65;
L_1172cf5c:;
  /* 1172cf5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172cf5f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1172cf62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172cf65:;
  /* 1172cf65 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1172cf6b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1172cf71 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172cf73 jne 0x1172cf7c */
  if (!C.zf) goto L_1172cf7c;
  /* 1172cf75 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1172cf7c:;
  /* 1172cf7c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1172cf7f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1172cf82:;
  /* 1172cf82 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1172cf88 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1172cf8e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172cf91 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1172cf97 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172cf99 jg 0x1172cfaf */
  if ((!C.zf&&C.sf==C.of)) goto L_1172cfaf;
  /* 1172cf9b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1172cfa1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1172cfa7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172cfa9 je 0x1172d030 */
  if (C.zf) goto L_1172d030;
L_1172cfaf:;
  /* 1172cfaf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1172cfb5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172cfb6 push edx */
  push32((uint32_t)(EDX));
  /* 1172cfb7 push eax */
  push32((uint32_t)(EAX));
  /* 1172cfb8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1172cfbe push edx */
  push32((uint32_t)(EDX));
  /* 1172cfbf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1172cfc5 push eax */
  push32((uint32_t)(EAX));
  /* 1172cfc6 call 0x1172c340 */
  push32(0x1172cfcbu); f_1172c340();
  /* 1172cfcb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172cfce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1172cfd4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1172cfda cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1172cfdb push edx */
  push32((uint32_t)(EDX));
  /* 1172cfdc push eax */
  push32((uint32_t)(EAX));
  /* 1172cfdd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1172cfe3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172cfe4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1172cfea push edx */
  push32((uint32_t)(EDX));
  /* 1172cfeb call 0x1172c2d0 */
  push32(0x1172cff0u); f_1172c2d0();
  /* 1172cff0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1172cff6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1172cffc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d003 jle 0x1172d017 */
  if ((C.zf||C.sf!=C.of)) goto L_1172d017;
  /* 1172d005 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1172d00b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d011 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1172d017:;
  /* 1172d017 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d01a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1172d020 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1172d022 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d025 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d028 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172d02b jmp 0x1172cf82 */
  goto L_1172cf82;
L_1172d030:;
  /* 1172d030 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1172d033 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d036 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1172d039 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d03c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d03f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1172d042 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d045 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1172d04a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d04c je 0x1172d077 */
  if (C.zf) goto L_1172d077;
  /* 1172d04e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d051 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172d054 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d057 jne 0x1172d05f */
  if (!C.zf) goto L_1172d05f;
  /* 1172d059 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d05d jne 0x1172d077 */
  if (!C.zf) goto L_1172d077;
L_1172d05f:;
  /* 1172d05f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d062 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d065 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172d068 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d06b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1172d06e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d071 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d074 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1172d077:;
  /* 1172d077 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d07e jne 0x1172d252 */
  if (!C.zf) goto L_1172d252;
  /* 1172d084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d087 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1172d08a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d08c je 0x1172d0dd */
  if (C.zf) goto L_1172d0dd;
  /* 1172d08e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d091 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1172d097 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172d099 je 0x1172d0ab */
  if (C.zf) goto L_1172d0ab;
  /* 1172d09b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1172d0a2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1172d0a9 jmp 0x1172d0dd */
  goto L_1172d0dd;
L_1172d0ab:;
  /* 1172d0ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d0ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d0b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d0b3 je 0x1172d0c5 */
  if (C.zf) goto L_1172d0c5;
  /* 1172d0b5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1172d0bc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1172d0c3 jmp 0x1172d0dd */
  goto L_1172d0dd;
L_1172d0c5:;
  /* 1172d0c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d0c8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1172d0cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d0cd je 0x1172d0dd */
  if (C.zf) goto L_1172d0dd;
  /* 1172d0cf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1172d0d6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1172d0dd:;
  /* 1172d0dd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1172d0e3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d0e6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d0e9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1172d0ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d0f2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1172d0f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d0f7 jne 0x1172d115 */
  if (!C.zf) goto L_1172d115;
  /* 1172d0f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1172d0ff push eax */
  push32((uint32_t)(EAX));
  /* 1172d100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d103 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d104 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1172d10a push edx */
  push32((uint32_t)(EDX));
  /* 1172d10b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1172d10d call 0x1172d3f0 */
  push32(0x1172d112u); f_1172d3f0();
  /* 1172d112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172d115:;
  /* 1172d115 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1172d11b push eax */
  push32((uint32_t)(EAX));
  /* 1172d11c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d11f push ecx */
  push32((uint32_t)(ECX));
  /* 1172d120 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172d123 push edx */
  push32((uint32_t)(EDX));
  /* 1172d124 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1172d12a push eax */
  push32((uint32_t)(EAX));
  /* 1172d12b call 0x1172d430 */
  push32(0x1172d130u); f_1172d430();
  /* 1172d130 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d136 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1172d139 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172d13b je 0x1172d163 */
  if (C.zf) goto L_1172d163;
  /* 1172d13d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d140 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d143 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d145 jne 0x1172d163 */
  if (!C.zf) goto L_1172d163;
  /* 1172d147 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1172d14d push eax */
  push32((uint32_t)(EAX));
  /* 1172d14e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d151 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d152 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1172d158 push edx */
  push32((uint32_t)(EDX));
  /* 1172d159 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1172d15b call 0x1172d3f0 */
  push32(0x1172d160u); f_1172d3f0();
  /* 1172d160 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172d163:;
  /* 1172d163 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d167 je 0x1172d211 */
  if (C.zf) goto L_1172d211;
  /* 1172d16d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d171 jle 0x1172d211 */
  if ((C.zf||C.sf!=C.of)) goto L_1172d211;
  /* 1172d177 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d17a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1172d180 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d183 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1172d189:;
  /* 1172d189 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1172d18f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1172d195 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d198 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1172d19e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d1a0 je 0x1172d20f */
  if (C.zf) goto L_1172d20f;
  /* 1172d1a2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1172d1a8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1172d1ab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1172d1b2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1172d1b9 push eax */
  push32((uint32_t)(EAX));
  /* 1172d1ba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1172d1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d1c1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1172d1c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d1ca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1172d1d0 call 0x1172e260 */
  push32(0x1172d1d5u); f_1172e260();
  /* 1172d1d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d1d8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1172d1de cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d1e5 jg 0x1172d1e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1172d1e9;
  /* 1172d1e7 jmp 0x1172d20f */
  goto L_1172d20f;
L_1172d1e9:;
  /* 1172d1e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1172d1ef push eax */
  push32((uint32_t)(EAX));
  /* 1172d1f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d1f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d1f4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1172d1fa push edx */
  push32((uint32_t)(EDX));
  /* 1172d1fb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1172d201 push eax */
  push32((uint32_t)(EAX));
  /* 1172d202 call 0x1172d430 */
  push32(0x1172d207u); f_1172d430();
  /* 1172d207 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d20a jmp 0x1172d189 */
  goto L_1172d189;
L_1172d20f:;
  /* 1172d20f jmp 0x1172d22c */
  goto L_1172d22c;
L_1172d211:;
  /* 1172d211 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1172d217 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d21b push edx */
  push32((uint32_t)(EDX));
  /* 1172d21c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d21f push eax */
  push32((uint32_t)(EAX));
  /* 1172d220 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d223 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d224 call 0x1172d430 */
  push32(0x1172d229u); f_1172d430();
  /* 1172d229 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172d22c:;
  /* 1172d22c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d22f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d234 je 0x1172d252 */
  if (C.zf) goto L_1172d252;
  /* 1172d236 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1172d23c push eax */
  push32((uint32_t)(EAX));
  /* 1172d23d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d240 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d241 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1172d247 push edx */
  push32((uint32_t)(EDX));
  /* 1172d248 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1172d24a call 0x1172d3f0 */
  push32(0x1172d24fu); f_1172d3f0();
  /* 1172d24f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1172d252:;
  /* 1172d252 jmp 0x1172c664 */
  goto L_1172c664;
L_1172d257:;
  /* 1172d257 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1172d25d pop edi */
  EDI = (pop32());
  /* 1172d25e pop esi */
  ESI = (pop32());
  /* 1172d25f pop ebx */
  EBX = (pop32());
  /* 1172d260 mov esp, ebp */
  ESP = (EBP);
  /* 1172d262 pop ebp */
  EBP = (pop32());
  /* 1172d263 ret  */
  ESPCHK(0x1172c640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d370 @ 0x1172d370 (119 bytes, 44 insns) */
void f_1172d370(void) {
  FTRACE(0x1172d370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d370 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d371 mov ebp, esp */
  EBP = (ESP);
  /* 1172d373 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d374 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d377 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1172d37a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d37d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d380 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1172d383 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d386 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d38a jl 0x1172d3b2 */
  if ((C.sf!=C.of)) goto L_1172d3b2;
  /* 1172d38c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d38f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1172d391 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1172d394 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1172d396 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1172d39a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1172d3a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1172d3a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d3a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172d3a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d3ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d3ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1172d3b0 jmp 0x1172d3c5 */
  goto L_1172d3c5;
L_1172d3b2:;
  /* 1172d3b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d3b5 push edx */
  push32((uint32_t)(EDX));
  /* 1172d3b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d3b9 push eax */
  push32((uint32_t)(EAX));
  /* 1172d3ba call 0x1172c3c0 */
  push32(0x1172d3bfu); f_1172c3c0();
  /* 1172d3bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d3c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1172d3c5:;
  /* 1172d3c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d3c9 jne 0x1172d3d6 */
  if (!C.zf) goto L_1172d3d6;
  /* 1172d3cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d3ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1172d3d4 jmp 0x1172d3e3 */
  goto L_1172d3e3;
L_1172d3d6:;
  /* 1172d3d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d3d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1172d3db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d3de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d3e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1172d3e3:;
  /* 1172d3e3 mov esp, ebp */
  ESP = (EBP);
  /* 1172d3e5 pop ebp */
  EBP = (pop32());
  /* 1172d3e6 ret  */
  ESPCHK(0x1172d370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x1172d3f0 (53 bytes, 23 insns) */
void f_1172d3f0(void) {
  FTRACE(0x1172d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d3f1 mov ebp, esp */
  EBP = (ESP);
L_1172d3f3:;
  /* 1172d3f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d3f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d3f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d3fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1172d3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d401 jle 0x1172d423 */
  if ((C.zf||C.sf!=C.of)) goto L_1172d423;
  /* 1172d403 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d406 push edx */
  push32((uint32_t)(EDX));
  /* 1172d407 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d40a push eax */
  push32((uint32_t)(EAX));
  /* 1172d40b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d40e push ecx */
  push32((uint32_t)(ECX));
  /* 1172d40f call 0x1172d370 */
  push32(0x1172d414u); f_1172d370();
  /* 1172d414 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d417 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d41a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d41d jne 0x1172d421 */
  if (!C.zf) goto L_1172d421;
  /* 1172d41f jmp 0x1172d423 */
  goto L_1172d423;
L_1172d421:;
  /* 1172d421 jmp 0x1172d3f3 */
  goto L_1172d3f3;
L_1172d423:;
  /* 1172d423 pop ebp */
  EBP = (pop32());
  /* 1172d424 ret  */
  ESPCHK(0x1172d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1172d430 (74 bytes, 31 insns) */
void f_1172d430(void) {
  FTRACE(0x1172d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d431 mov ebp, esp */
  EBP = (ESP);
  /* 1172d433 push ecx */
  push32((uint32_t)(ECX));
L_1172d434:;
  /* 1172d434 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d437 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d43a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d43d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1172d440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d442 jle 0x1172d476 */
  if ((C.zf||C.sf!=C.of)) goto L_1172d476;
  /* 1172d444 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d447 push edx */
  push32((uint32_t)(EDX));
  /* 1172d448 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d44b push eax */
  push32((uint32_t)(EAX));
  /* 1172d44c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d44f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172d452 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1172d455 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d458 push eax */
  push32((uint32_t)(EAX));
  /* 1172d459 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d45c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d45f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1172d462 call 0x1172d370 */
  push32(0x1172d467u); f_1172d370();
  /* 1172d467 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d46a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d46d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d470 jne 0x1172d474 */
  if (!C.zf) goto L_1172d474;
  /* 1172d472 jmp 0x1172d476 */
  goto L_1172d476;
L_1172d474:;
  /* 1172d474 jmp 0x1172d434 */
  goto L_1172d434;
L_1172d476:;
  /* 1172d476 mov esp, ebp */
  ESP = (EBP);
  /* 1172d478 pop ebp */
  EBP = (pop32());
  /* 1172d479 ret  */
  ESPCHK(0x1172d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x1172d480 (26 bytes, 12 insns) */
void f_1172d480(void) {
  FTRACE(0x1172d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d480 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d481 mov ebp, esp */
  EBP = (ESP);
  /* 1172d483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d486 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d488 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d48b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d48e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1172d490 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d493 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d495 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1172d498 pop ebp */
  EBP = (pop32());
  /* 1172d499 ret  */
  ESPCHK(0x1172d480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4a0 @ 0x1172d4a0 (31 bytes, 14 insns) */
void f_1172d4a0(void) {
  FTRACE(0x1172d4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d4a1 mov ebp, esp */
  EBP = (ESP);
  /* 1172d4a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d4a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d4ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1172d4b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d4b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d4b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1172d4ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1172d4bd pop ebp */
  EBP = (pop32());
  /* 1172d4be ret  */
  ESPCHK(0x1172d4a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4c0 @ 0x1172d4c0 (27 bytes, 12 insns) */
void f_1172d4c0(void) {
  FTRACE(0x1172d4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1172d4c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d4c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d4cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1172d4d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1172d4d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1172d4d9 pop ebp */
  EBP = (pop32());
  /* 1172d4da ret  */
  ESPCHK(0x1172d4c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1172d4e0 (145 bytes, 42 insns) */
void f_1172d4e0(void) {
  FTRACE(0x1172d4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d4e1 mov ebp, esp */
  EBP = (ESP);
  /* 1172d4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d4e4 call 0x1172d590 */
  push32(0x1172d4e9u); f_1172d590();
  /* 1172d4e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d4ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172d4ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172d4f5 jmp 0x1172d500 */
  goto L_1172d500;
L_1172d4f7:;
  /* 1172d4f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d4fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d4fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1172d500:;
  /* 1172d500 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d504 jae 0x1172d52a */
  if (!C.cf) goto L_1172d52a;
  /* 1172d506 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d509 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d50c cmp ecx, dword ptr [eax*8 + 0x117512d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x117512d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d513 jne 0x1172d528 */
  if (!C.zf) goto L_1172d528;
  /* 1172d515 call 0x1172d580 */
  push32(0x1172d51au); f_1172d580();
  /* 1172d51a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172d51d mov ecx, dword ptr [edx*8 + 0x117512dc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x117512dc)));
  /* 1172d524 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1172d526 jmp 0x1172d56d */
  goto L_1172d56d;
L_1172d528:;
  /* 1172d528 jmp 0x1172d4f7 */
  goto L_1172d4f7;
L_1172d52a:;
  /* 1172d52a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d52e jb 0x1172d543 */
  if (C.cf) goto L_1172d543;
  /* 1172d530 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d534 ja 0x1172d543 */
  if ((!C.cf&&!C.zf)) goto L_1172d543;
  /* 1172d536 call 0x1172d580 */
  push32(0x1172d53bu); f_1172d580();
  /* 1172d53b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1172d541 jmp 0x1172d56d */
  goto L_1172d56d;
L_1172d543:;
  /* 1172d543 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d54a jb 0x1172d562 */
  if (C.cf) goto L_1172d562;
  /* 1172d54c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d553 ja 0x1172d562 */
  if ((!C.cf&&!C.zf)) goto L_1172d562;
  /* 1172d555 call 0x1172d580 */
  push32(0x1172d55au); f_1172d580();
  /* 1172d55a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1172d560 jmp 0x1172d56d */
  goto L_1172d56d;
L_1172d562:;
  /* 1172d562 call 0x1172d580 */
  push32(0x1172d567u); f_1172d580();
  /* 1172d567 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1172d56d:;
  /* 1172d56d mov esp, ebp */
  ESP = (EBP);
  /* 1172d56f pop ebp */
  EBP = (pop32());
  /* 1172d570 ret  */
  ESPCHK(0x1172d4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d580 @ 0x1172d580 (13 bytes, 6 insns) */
void f_1172d580(void) {
  FTRACE(0x1172d580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d580 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d581 mov ebp, esp */
  EBP = (ESP);
  /* 1172d583 call 0x11726900 */
  push32(0x1172d588u); f_11726900();
  /* 1172d588 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d58b pop ebp */
  EBP = (pop32());
  /* 1172d58c ret  */
  ESPCHK(0x1172d580u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x1172d590 (13 bytes, 6 insns) */
void f_1172d590(void) {
  FTRACE(0x1172d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d590 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d591 mov ebp, esp */
  EBP = (ESP);
  /* 1172d593 call 0x11726900 */
  push32(0x1172d598u); f_11726900();
  /* 1172d598 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d59b pop ebp */
  EBP = (pop32());
  /* 1172d59c ret  */
  ESPCHK(0x1172d590u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d5a0 @ 0x1172d5a0 (421 bytes, 148 insns) */
void f_1172d5a0(void) {
  FTRACE(0x1172d5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1172d5a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1172d5a5 push 0x1174e020 */
  push32((uint32_t)(0x1174e020u));
  /* 1172d5aa push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 1172d5af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1172d5b5 push eax */
  push32((uint32_t)(EAX));
  /* 1172d5b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1172d5bd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d5c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1172d5c1 push esi */
  push32((uint32_t)(ESI));
  /* 1172d5c2 push edi */
  push32((uint32_t)(EDI));
  /* 1172d5c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1172d5c6 cmp dword ptr [0x11752bf8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752bf8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d5cd jne 0x1172d61e */
  if (!C.zf) goto L_1172d61e;
  /* 1172d5cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1172d5d2 push eax */
  push32((uint32_t)(EAX));
  /* 1172d5d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d5d5 push 0x1174e01c */
  push32((uint32_t)(0x1174e01cu));
  /* 1172d5da push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d5dc call dword ptr [0x117552b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b8))), 0x1172d5e2u);
  /* 1172d5e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d5e4 je 0x1172d5f2 */
  if (C.zf) goto L_1172d5f2;
  /* 1172d5e6 mov dword ptr [0x11752bf8], 1 */
  w32((uint32_t)(0x11752bf8), (0x1u));
  /* 1172d5f0 jmp 0x1172d61e */
  goto L_1172d61e;
L_1172d5f2:;
  /* 1172d5f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1172d5f5 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d5f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d5f8 push 0x1174e018 */
  push32((uint32_t)(0x1174e018u));
  /* 1172d5fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d5ff push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d601 call dword ptr [0x117552bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552bc))), 0x1172d607u);
  /* 1172d607 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d609 je 0x1172d617 */
  if (C.zf) goto L_1172d617;
  /* 1172d60b mov dword ptr [0x11752bf8], 2 */
  w32((uint32_t)(0x11752bf8), (0x2u));
  /* 1172d615 jmp 0x1172d61e */
  goto L_1172d61e;
L_1172d617:;
  /* 1172d617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d619 jmp 0x1172d748 */
  goto L_1172d748;
L_1172d61e:;
  /* 1172d61e cmp dword ptr [0x11752bf8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752bf8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d625 jne 0x1172d655 */
  if (!C.zf) goto L_1172d655;
  /* 1172d627 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d62b jne 0x1172d636 */
  if (!C.zf) goto L_1172d636;
  /* 1172d62d mov edx, dword ptr [0x11752c04] */
  EDX = (r32((uint32_t)(0x11752c04)));
  /* 1172d633 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1172d636:;
  /* 1172d636 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d639 push eax */
  push32((uint32_t)(EAX));
  /* 1172d63a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d63d push ecx */
  push32((uint32_t)(ECX));
  /* 1172d63e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d641 push edx */
  push32((uint32_t)(EDX));
  /* 1172d642 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d645 push eax */
  push32((uint32_t)(EAX));
  /* 1172d646 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1172d649 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d64a call dword ptr [0x117552bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552bc))), 0x1172d650u);
  /* 1172d650 jmp 0x1172d748 */
  goto L_1172d748;
L_1172d655:;
  /* 1172d655 cmp dword ptr [0x11752bf8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752bf8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d65c jne 0x1172d746 */
  if (!C.zf) goto L_1172d746;
  /* 1172d662 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d666 jne 0x1172d671 */
  if (!C.zf) goto L_1172d671;
  /* 1172d668 mov edx, dword ptr [0x11752c14] */
  EDX = (r32((uint32_t)(0x11752c14)));
  /* 1172d66e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1172d671:;
  /* 1172d671 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d673 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d675 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d678 push eax */
  push32((uint32_t)(EAX));
  /* 1172d679 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d67c push ecx */
  push32((uint32_t)(ECX));
  /* 1172d67d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1172d680 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172d682 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d684 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d687 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d68a push edx */
  push32((uint32_t)(EDX));
  /* 1172d68b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172d68e push eax */
  push32((uint32_t)(EAX));
  /* 1172d68f call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x1172d695u);
  /* 1172d695 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1172d698 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d69c jne 0x1172d6a5 */
  if (!C.zf) goto L_1172d6a5;
  /* 1172d69e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d6a0 jmp 0x1172d748 */
  goto L_1172d748;
L_1172d6a5:;
  /* 1172d6a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172d6ac mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d6af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1172d6b1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d6b4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1172d6b6 call 0x11728410 */
  push32(0x1172d6bbu); f_11728410();
  /* 1172d6bb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1172d6be mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1172d6c1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172d6c4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1172d6c7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d6ca shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1172d6cc push edx */
  push32((uint32_t)(EDX));
  /* 1172d6cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d6cf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d6d2 push eax */
  push32((uint32_t)(EAX));
  /* 1172d6d3 call 0x11728c00 */
  push32(0x1172d6d8u); f_11728c00();
  /* 1172d6d8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d6db mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172d6e2 jmp 0x1172d6fb */
  goto L_1172d6fb;
  /* 1172d6e4 mov eax, 1 */
  EAX = (0x1u);
  /* 1172d6e9 ret  */
  ESPCHK(0x1172d5a0u, _esp0);
  ESP += 4; return;
  /* 1172d6ea mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1172d6ed mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1172d6f4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172d6fb:;
  /* 1172d6fb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d6ff jne 0x1172d705 */
  if (!C.zf) goto L_1172d705;
  /* 1172d701 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d703 jmp 0x1172d748 */
  goto L_1172d748;
L_1172d705:;
  /* 1172d705 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d708 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d709 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d70c push edx */
  push32((uint32_t)(EDX));
  /* 1172d70d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d710 push eax */
  push32((uint32_t)(EAX));
  /* 1172d711 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d714 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d715 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d717 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172d71a push edx */
  push32((uint32_t)(EDX));
  /* 1172d71b call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x1172d721u);
  /* 1172d721 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172d724 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d728 jne 0x1172d72e */
  if (!C.zf) goto L_1172d72e;
  /* 1172d72a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d72c jmp 0x1172d748 */
  goto L_1172d748;
L_1172d72e:;
  /* 1172d72e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d731 push eax */
  push32((uint32_t)(EAX));
  /* 1172d732 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172d735 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d736 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d739 push edx */
  push32((uint32_t)(EDX));
  /* 1172d73a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d73d push eax */
  push32((uint32_t)(EAX));
  /* 1172d73e call dword ptr [0x117552b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b8))), 0x1172d744u);
  /* 1172d744 jmp 0x1172d748 */
  goto L_1172d748;
L_1172d746:;
  /* 1172d746 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172d748:;
  /* 1172d748 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1172d74b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172d74e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1172d755 pop edi */
  EDI = (pop32());
  /* 1172d756 pop esi */
  ESI = (pop32());
  /* 1172d757 pop ebx */
  EBX = (pop32());
  /* 1172d758 mov esp, ebp */
  ESP = (EBP);
  /* 1172d75a pop ebp */
  EBP = (pop32());
  /* 1172d75b ret  */
  ESPCHK(0x1172d5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d760 @ 0x1172d760 (727 bytes, 263 insns) */
void f_1172d760(void) {
  FTRACE(0x1172d760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172d760 push ebp */
  push32((uint32_t)(EBP));
  /* 1172d761 mov ebp, esp */
  EBP = (ESP);
  /* 1172d763 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1172d765 push 0x1174e030 */
  push32((uint32_t)(0x1174e030u));
  /* 1172d76a push 0x1172b11c */
  push32((uint32_t)(0x1172b11cu));
  /* 1172d76f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1172d775 push eax */
  push32((uint32_t)(EAX));
  /* 1172d776 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1172d77d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d780 push ebx */
  push32((uint32_t)(EBX));
  /* 1172d781 push esi */
  push32((uint32_t)(ESI));
  /* 1172d782 push edi */
  push32((uint32_t)(EDI));
  /* 1172d783 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1172d786 cmp dword ptr [0x11752c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11752c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d78d jne 0x1172d7e6 */
  if (!C.zf) goto L_1172d7e6;
  /* 1172d78f push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d791 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d793 push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d795 push 0x1174e01c */
  push32((uint32_t)(0x1174e01cu));
  /* 1172d79a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172d79f push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d7a1 call dword ptr [0x117552b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b0))), 0x1172d7a7u);
  /* 1172d7a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d7a9 je 0x1172d7b7 */
  if (C.zf) goto L_1172d7b7;
  /* 1172d7ab mov dword ptr [0x11752c1c], 1 */
  w32((uint32_t)(0x11752c1c), (0x1u));
  /* 1172d7b5 jmp 0x1172d7e6 */
  goto L_1172d7e6;
L_1172d7b7:;
  /* 1172d7b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d7b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d7bb push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d7bd push 0x1174e018 */
  push32((uint32_t)(0x1174e018u));
  /* 1172d7c2 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1172d7c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d7c9 call dword ptr [0x117552c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552c0))), 0x1172d7cfu);
  /* 1172d7cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d7d1 je 0x1172d7df */
  if (C.zf) goto L_1172d7df;
  /* 1172d7d3 mov dword ptr [0x11752c1c], 2 */
  w32((uint32_t)(0x11752c1c), (0x2u));
  /* 1172d7dd jmp 0x1172d7e6 */
  goto L_1172d7e6;
L_1172d7df:;
  /* 1172d7df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d7e1 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d7e6:;
  /* 1172d7e6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d7ea jle 0x1172d7ff */
  if ((C.zf||C.sf!=C.of)) goto L_1172d7ff;
  /* 1172d7ec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d7ef push eax */
  push32((uint32_t)(EAX));
  /* 1172d7f0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d7f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d7f4 call 0x1172da70 */
  push32(0x1172d7f9u); f_1172da70();
  /* 1172d7f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d7fc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1172d7ff:;
  /* 1172d7ff cmp dword ptr [0x11752c1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11752c1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d806 jne 0x1172d82b */
  if (!C.zf) goto L_1172d82b;
  /* 1172d808 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1172d80b push edx */
  push32((uint32_t)(EDX));
  /* 1172d80c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172d80f push eax */
  push32((uint32_t)(EAX));
  /* 1172d810 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d813 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d814 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d817 push edx */
  push32((uint32_t)(EDX));
  /* 1172d818 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d81b push eax */
  push32((uint32_t)(EAX));
  /* 1172d81c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d81f push ecx */
  push32((uint32_t)(ECX));
  /* 1172d820 call dword ptr [0x117552c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552c0))), 0x1172d826u);
  /* 1172d826 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d82b:;
  /* 1172d82b cmp dword ptr [0x11752c1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11752c1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d832 jne 0x1172da4f */
  if (!C.zf) goto L_1172da4f;
  /* 1172d838 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d83c jne 0x1172d847 */
  if (!C.zf) goto L_1172d847;
  /* 1172d83e mov edx, dword ptr [0x11752c14] */
  EDX = (r32((uint32_t)(0x11752c14)));
  /* 1172d844 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1172d847:;
  /* 1172d847 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d849 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d84b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d84e push eax */
  push32((uint32_t)(EAX));
  /* 1172d84f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d852 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d853 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1172d856 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1172d858 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172d85a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d85d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d860 push edx */
  push32((uint32_t)(EDX));
  /* 1172d861 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1172d864 push eax */
  push32((uint32_t)(EAX));
  /* 1172d865 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x1172d86bu);
  /* 1172d86b mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1172d86e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d872 jne 0x1172d87b */
  if (!C.zf) goto L_1172d87b;
  /* 1172d874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d876 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d87b:;
  /* 1172d87b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1172d882 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172d885 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1172d887 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d88a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1172d88c call 0x11728410 */
  push32(0x1172d891u); f_11728410();
  /* 1172d891 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1172d894 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1172d897 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1172d89a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1172d89d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172d8a4 jmp 0x1172d8bd */
  goto L_1172d8bd;
  /* 1172d8a6 mov eax, 1 */
  EAX = (0x1u);
  /* 1172d8ab ret  */
  ESPCHK(0x1172d760u, _esp0);
  ESP += 4; return;
  /* 1172d8ac mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1172d8af mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1172d8b6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172d8bd:;
  /* 1172d8bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d8c1 jne 0x1172d8ca */
  if (!C.zf) goto L_1172d8ca;
  /* 1172d8c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d8c5 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d8ca:;
  /* 1172d8ca mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172d8cd push edx */
  push32((uint32_t)(EDX));
  /* 1172d8ce mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d8d1 push eax */
  push32((uint32_t)(EAX));
  /* 1172d8d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1172d8d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d8d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172d8d9 push edx */
  push32((uint32_t)(EDX));
  /* 1172d8da push 1 */
  push32((uint32_t)(0x1u));
  /* 1172d8dc mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1172d8df push eax */
  push32((uint32_t)(EAX));
  /* 1172d8e0 call dword ptr [0x117552cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552cc))), 0x1172d8e6u);
  /* 1172d8e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d8e8 jne 0x1172d8f1 */
  if (!C.zf) goto L_1172d8f1;
  /* 1172d8ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d8ec jmp 0x1172da51 */
  goto L_1172da51;
L_1172d8f1:;
  /* 1172d8f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d8f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d8f5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172d8f8 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d8f9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d8fc push edx */
  push32((uint32_t)(EDX));
  /* 1172d8fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d900 push eax */
  push32((uint32_t)(EAX));
  /* 1172d901 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d904 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d905 call dword ptr [0x117552b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b0))), 0x1172d90bu);
  /* 1172d90b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172d90e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d912 jne 0x1172d91b */
  if (!C.zf) goto L_1172d91b;
  /* 1172d914 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d916 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d91b:;
  /* 1172d91b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d91e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1172d924 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172d926 je 0x1172d96b */
  if (C.zf) goto L_1172d96b;
  /* 1172d928 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d92c je 0x1172d966 */
  if (C.zf) goto L_1172d966;
  /* 1172d92e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172d931 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d934 jle 0x1172d93d */
  if ((C.zf||C.sf!=C.of)) goto L_1172d93d;
  /* 1172d936 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d938 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d93d:;
  /* 1172d93d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1172d940 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172d944 push edx */
  push32((uint32_t)(EDX));
  /* 1172d945 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172d948 push eax */
  push32((uint32_t)(EAX));
  /* 1172d949 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d94c push ecx */
  push32((uint32_t)(ECX));
  /* 1172d94d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d950 push edx */
  push32((uint32_t)(EDX));
  /* 1172d951 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d954 push eax */
  push32((uint32_t)(EAX));
  /* 1172d955 call dword ptr [0x117552b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b0))), 0x1172d95bu);
  /* 1172d95b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d95d jne 0x1172d966 */
  if (!C.zf) goto L_1172d966;
  /* 1172d95f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d961 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d966:;
  /* 1172d966 jmp 0x1172da4a */
  goto L_1172da4a;
L_1172d96b:;
  /* 1172d96b mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172d96e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1172d971 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1172d978 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172d97b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1172d97d add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172d980 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1172d982 call 0x11728410 */
  push32(0x1172d987u); f_11728410();
  /* 1172d987 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1172d98a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1172d98d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1172d990 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1172d993 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1172d99a jmp 0x1172d9b3 */
  goto L_1172d9b3;
  /* 1172d99c mov eax, 1 */
  EAX = (0x1u);
  /* 1172d9a1 ret  */
  ESPCHK(0x1172d760u, _esp0);
  ESP += 4; return;
  /* 1172d9a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1172d9a5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1172d9ac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1172d9b3:;
  /* 1172d9b3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d9b7 jne 0x1172d9c0 */
  if (!C.zf) goto L_1172d9c0;
  /* 1172d9b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d9bb jmp 0x1172da51 */
  goto L_1172da51;
L_1172d9c0:;
  /* 1172d9c0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172d9c3 push eax */
  push32((uint32_t)(EAX));
  /* 1172d9c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d9c7 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d9c8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1172d9cb push edx */
  push32((uint32_t)(EDX));
  /* 1172d9cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1172d9cf push eax */
  push32((uint32_t)(EAX));
  /* 1172d9d0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172d9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172d9d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172d9d7 push edx */
  push32((uint32_t)(EDX));
  /* 1172d9d8 call dword ptr [0x117552b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x117552b0))), 0x1172d9deu);
  /* 1172d9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1172d9e0 jne 0x1172d9e6 */
  if (!C.zf) goto L_1172d9e6;
  /* 1172d9e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172d9e4 jmp 0x1172da51 */
  goto L_1172da51;
L_1172d9e6:;
  /* 1172d9e6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172d9ea jne 0x1172da1a */
  if (!C.zf) goto L_1172da1a;
  /* 1172d9ec push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d9ee push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d9f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d9f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1172d9f4 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172d9f7 push eax */
  push32((uint32_t)(EAX));
  /* 1172d9f8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172d9fb push ecx */
  push32((uint32_t)(ECX));
  /* 1172d9fc push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1172da01 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1172da04 push edx */
  push32((uint32_t)(EDX));
  /* 1172da05 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x1172da0bu);
  /* 1172da0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172da0e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172da12 jne 0x1172da18 */
  if (!C.zf) goto L_1172da18;
  /* 1172da14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172da16 jmp 0x1172da51 */
  goto L_1172da51;
L_1172da18:;
  /* 1172da18 jmp 0x1172da4a */
  goto L_1172da4a;
L_1172da1a:;
  /* 1172da1a push 0 */
  push32((uint32_t)(0x0u));
  /* 1172da1c push 0 */
  push32((uint32_t)(0x0u));
  /* 1172da1e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1172da21 push eax */
  push32((uint32_t)(EAX));
  /* 1172da22 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1172da25 push ecx */
  push32((uint32_t)(ECX));
  /* 1172da26 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1172da29 push edx */
  push32((uint32_t)(EDX));
  /* 1172da2a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1172da2d push eax */
  push32((uint32_t)(EAX));
  /* 1172da2e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1172da33 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1172da36 push ecx */
  push32((uint32_t)(ECX));
  /* 1172da37 call dword ptr [0x11755360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11755360))), 0x1172da3du);
  /* 1172da3d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1172da40 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172da44 jne 0x1172da4a */
  if (!C.zf) goto L_1172da4a;
  /* 1172da46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1172da48 jmp 0x1172da51 */
  goto L_1172da51;
L_1172da4a:;
  /* 1172da4a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1172da4d jmp 0x1172da51 */
  goto L_1172da51;
L_1172da4f:;
  /* 1172da4f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1172da51:;
  /* 1172da51 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1172da54 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1172da57 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1172da5e pop edi */
  EDI = (pop32());
  /* 1172da5f pop esi */
  ESI = (pop32());
  /* 1172da60 pop ebx */
  EBX = (pop32());
  /* 1172da61 mov esp, ebp */
  ESP = (EBP);
  /* 1172da63 pop ebp */
  EBP = (pop32());
  /* 1172da64 ret  */
  ESPCHK(0x1172d760u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da70 @ 0x1172da70 (80 bytes, 32 insns) */
void f_1172da70(void) {
  FTRACE(0x1172da70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172da70 push ebp */
  push32((uint32_t)(EBP));
  /* 1172da71 mov ebp, esp */
  EBP = (ESP);
  /* 1172da73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172da76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172da79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172da7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172da7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1172da82:;
  /* 1172da82 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172da85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1172da88 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172da8b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1172da8e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172da90 je 0x1172daa7 */
  if (C.zf) goto L_1172daa7;
  /* 1172da92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172da95 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172da98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172da9a je 0x1172daa7 */
  if (C.zf) goto L_1172daa7;
  /* 1172da9c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172da9f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1172daa2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172daa5 jmp 0x1172da82 */
  goto L_1172da82;
L_1172daa7:;
  /* 1172daa7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172daaa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1172daad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1172daaf jne 0x1172dab9 */
  if (!C.zf) goto L_1172dab9;
  /* 1172dab1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1172dab4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1172dab7 jmp 0x1172dabc */
  goto L_1172dabc;
L_1172dab9:;
  /* 1172dab9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1172dabc:;
  /* 1172dabc mov esp, ebp */
  ESP = (EBP);
  /* 1172dabe pop ebp */
  EBP = (pop32());
  /* 1172dabf ret  */
  ESPCHK(0x1172da70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dac0 @ 0x1172dac0 (130 bytes, 43 insns) */
void f_1172dac0(void) {
  FTRACE(0x1172dac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1172dac0 push ebp */
  push32((uint32_t)(EBP));
  /* 1172dac1 mov ebp, esp */
  EBP = (ESP);
  /* 1172dac3 push ecx */
  push32((uint32_t)(ECX));
  /* 1172dac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dac7 cmp eax, dword ptr [0x117544fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x117544fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1172dacd jae 0x1172daf1 */
  if (!C.cf) goto L_1172daf1;
  /* 1172dacf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dad2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1172dad5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172dad8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1172dadb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1172dade mov eax, dword ptr [ecx*4 + 0x117543c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x117543c0)));
  /* 1172dae5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1172daea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1172daed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1172daef jne 0x1172db0c */
  if (!C.zf) goto L_1172db0c;
L_1172daf1:;
  /* 1172daf1 call 0x1172d580 */
  push32(0x1172daf6u); f_1172d580();
  /* 1172daf6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1172dafc call 0x1172d590 */
  push32(0x1172db01u); f_1172d590();
  /* 1172db01 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1172db07 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1172db0a jmp 0x1172db3e */
  goto L_1172db3e;
L_1172db0c:;
  /* 1172db0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172db0f push edx */
  push32((uint32_t)(EDX));
  /* 1172db10 call 0x1172e890 */
  push32(0x1172db15u); f_1172e890();
  /* 1172db15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172db18 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1172db1b push eax */
  push32((uint32_t)(EAX));
  /* 1172db1c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1172db1f push ecx */
  push32((uint32_t)(ECX));
  /* 1172db20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172db23 push edx */
  push32((uint32_t)(EDX));
  /* 1172db24 call 0x1172db50 */
  push32(0x1172db29u); f_1172db50();
  /* 1172db29 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172db2c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1172db2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1172db32 push eax */
  push32((uint32_t)(EAX));
  /* 1172db33 call 0x1172e920 */
  push32(0x1172db38u); f_1172e920();
  /* 1172db38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1172db3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1172db3e:;
  /* 1172db3e mov esp, ebp */
  ESP = (EBP);
  /* 1172db40 pop ebp */
  EBP = (pop32());
  /* 1172db41 ret  */
  ESPCHK(0x1172dac0u, _esp0);
  ESP += 4; return;
}

