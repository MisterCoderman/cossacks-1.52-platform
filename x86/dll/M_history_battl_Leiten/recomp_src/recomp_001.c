#include "recomp.h"

/* FUN_10006770 @ 0x12986770 (10 bytes, 5 insns) */
void f_12986770(void) {
  FTRACE(0x12986770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986770 push ebp */
  push32((uint32_t)(EBP));
  /* 12986771 mov ebp, esp */
  EBP = (ESP);
  /* 12986773 mov eax, 1 */
  EAX = (0x1u);
  /* 12986778 pop ebp */
  EBP = (pop32());
  /* 12986779 ret  */
  ESPCHK(0x12986770u, _esp0);
  ESP += 4; return;
}

/* FUN_10006780 @ 0x12986780 (173 bytes, 59 insns) */
void f_12986780(void) {
  FTRACE(0x12986780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986780 push ebp */
  push32((uint32_t)(EBP));
  /* 12986781 mov ebp, esp */
  EBP = (ESP);
  /* 12986783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986786 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298678a jbe 0x12986793 */
  if ((C.cf||C.zf)) goto L_12986793;
  /* 1298678c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298678e jmp 0x12986829 */
  goto L_12986829;
L_12986793:;
  /* 12986793 push 9 */
  push32((uint32_t)(0x9u));
  /* 12986795 call 0x129862b0 */
  push32(0x1298679au); f_129862b0();
  /* 1298679a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298679d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129867a0 push eax */
  push32((uint32_t)(EAX));
  /* 129867a1 call 0x12986bb0 */
  push32(0x129867a6u); f_12986bb0();
  /* 129867a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129867a9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129867ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129867b0 je 0x129867f1 */
  if (C.zf) goto L_129867f1;
  /* 129867b2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129867b9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129867bc cmp ecx, dword ptr [0x129acc94] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129acc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129867c2 ja 0x129867e2 */
  if ((!C.cf&&!C.zf)) goto L_129867e2;
  /* 129867c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129867c7 push edx */
  push32((uint32_t)(EDX));
  /* 129867c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129867cb push eax */
  push32((uint32_t)(EAX));
  /* 129867cc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129867cf push ecx */
  push32((uint32_t)(ECX));
  /* 129867d0 call 0x12987a80 */
  push32(0x129867d5u); f_12987a80();
  /* 129867d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129867d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129867da je 0x129867e2 */
  if (C.zf) goto L_129867e2;
  /* 129867dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129867df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129867e2:;
  /* 129867e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 129867e4 call 0x12986350 */
  push32(0x129867e9u); f_12986350();
  /* 129867e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129867ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129867ef jmp 0x12986829 */
  goto L_12986829;
L_129867f1:;
  /* 129867f1 push 9 */
  push32((uint32_t)(0x9u));
  /* 129867f3 call 0x12986350 */
  push32(0x129867f8u); f_12986350();
  /* 129867f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129867fb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129867ff jne 0x12986808 */
  if (!C.zf) goto L_12986808;
  /* 12986801 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12986808:;
  /* 12986808 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298680b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298680e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12986810 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12986813 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986816 push ecx */
  push32((uint32_t)(ECX));
  /* 12986817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298681a push edx */
  push32((uint32_t)(EDX));
  /* 1298681b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1298681d mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12986822 push eax */
  push32((uint32_t)(EAX));
  /* 12986823 call dword ptr [0x129b02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f8))), 0x12986829u);
L_12986829:;
  /* 12986829 mov esp, ebp */
  ESP = (EBP);
  /* 1298682b pop ebp */
  EBP = (pop32());
  /* 1298682c ret  */
  ESPCHK(0x12986780u, _esp0);
  ESP += 4; return;
}

/* FUN_10006830 @ 0x12986830 (490 bytes, 165 insns) */
void f_12986830(void) {
  FTRACE(0x12986830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986830 push ebp */
  push32((uint32_t)(EBP));
  /* 12986831 mov ebp, esp */
  EBP = (ESP);
  /* 12986833 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986836 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298683a jne 0x1298684d */
  if (!C.zf) goto L_1298684d;
  /* 1298683c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298683f push eax */
  push32((uint32_t)(EAX));
  /* 12986840 call 0x12986680 */
  push32(0x12986845u); f_12986680();
  /* 12986845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986848 jmp 0x12986a16 */
  goto L_12986a16;
L_1298684d:;
  /* 1298684d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986851 jne 0x12986866 */
  if (!C.zf) goto L_12986866;
  /* 12986853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986856 push ecx */
  push32((uint32_t)(ECX));
  /* 12986857 call 0x12986a20 */
  push32(0x1298685cu); f_12986a20();
  /* 1298685c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298685f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986861 jmp 0x12986a16 */
  goto L_12986a16;
L_12986866:;
  /* 12986866 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298686d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986871 ja 0x129869e9 */
  if ((!C.cf&&!C.zf)) goto L_129869e9;
  /* 12986877 push 9 */
  push32((uint32_t)(0x9u));
  /* 12986879 call 0x129862b0 */
  push32(0x1298687eu); f_129862b0();
  /* 1298687e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986881 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986884 push edx */
  push32((uint32_t)(EDX));
  /* 12986885 call 0x12986bb0 */
  push32(0x1298688au); f_12986bb0();
  /* 1298688a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298688d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12986890 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986894 je 0x129869ac */
  if (C.zf) goto L_129869ac;
  /* 1298689a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298689d cmp eax, dword ptr [0x129acc94] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129acc94))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129868a3 ja 0x12986920 */
  if ((!C.cf&&!C.zf)) goto L_12986920;
  /* 129868a5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129868a8 push ecx */
  push32((uint32_t)(ECX));
  /* 129868a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129868ac push edx */
  push32((uint32_t)(EDX));
  /* 129868ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129868b0 push eax */
  push32((uint32_t)(EAX));
  /* 129868b1 call 0x12987a80 */
  push32(0x129868b6u); f_12987a80();
  /* 129868b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129868b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129868bb je 0x129868c5 */
  if (C.zf) goto L_129868c5;
  /* 129868bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129868c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129868c3 jmp 0x12986920 */
  goto L_12986920;
L_129868c5:;
  /* 129868c5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129868c8 push edx */
  push32((uint32_t)(EDX));
  /* 129868c9 call 0x12987240 */
  push32(0x129868ceu); f_12987240();
  /* 129868ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129868d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129868d4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129868d8 je 0x12986920 */
  if (C.zf) goto L_12986920;
  /* 129868da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129868dd mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 129868e0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129868e3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129868e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129868e9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129868ec jae 0x129868f6 */
  if (!C.cf) goto L_129868f6;
  /* 129868ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129868f1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129868f4 jmp 0x129868fc */
  goto L_129868fc;
L_129868f6:;
  /* 129868f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129868f9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_129868fc:;
  /* 129868fc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129868ff push edx */
  push32((uint32_t)(EDX));
  /* 12986900 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986903 push eax */
  push32((uint32_t)(EAX));
  /* 12986904 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986907 push ecx */
  push32((uint32_t)(ECX));
  /* 12986908 call 0x12989190 */
  push32(0x1298690du); f_12989190();
  /* 1298690d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986910 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986913 push edx */
  push32((uint32_t)(EDX));
  /* 12986914 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986917 push eax */
  push32((uint32_t)(EAX));
  /* 12986918 call 0x12986c70 */
  push32(0x1298691du); f_12986c70();
  /* 1298691d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12986920:;
  /* 12986920 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986924 jne 0x129869a0 */
  if (!C.zf) goto L_129869a0;
  /* 12986926 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298692a jne 0x12986933 */
  if (!C.zf) goto L_12986933;
  /* 1298692c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_12986933:;
  /* 12986933 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986936 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986939 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1298693c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1298693f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986942 push edx */
  push32((uint32_t)(EDX));
  /* 12986943 push 0 */
  push32((uint32_t)(0x0u));
  /* 12986945 mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 1298694a push eax */
  push32((uint32_t)(EAX));
  /* 1298694b call dword ptr [0x129b02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f4))), 0x12986951u);
  /* 12986951 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12986954 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986958 je 0x129869a0 */
  if (C.zf) goto L_129869a0;
  /* 1298695a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298695d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12986960 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986963 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12986966 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986969 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298696c jae 0x12986976 */
  if (!C.cf) goto L_12986976;
  /* 1298696e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986971 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12986974 jmp 0x1298697c */
  goto L_1298697c;
L_12986976:;
  /* 12986976 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986979 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_1298697c:;
  /* 1298697c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298697f push eax */
  push32((uint32_t)(EAX));
  /* 12986980 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986983 push ecx */
  push32((uint32_t)(ECX));
  /* 12986984 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986987 push edx */
  push32((uint32_t)(EDX));
  /* 12986988 call 0x12989190 */
  push32(0x1298698du); f_12989190();
  /* 1298698d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986993 push eax */
  push32((uint32_t)(EAX));
  /* 12986994 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986997 push ecx */
  push32((uint32_t)(ECX));
  /* 12986998 call 0x12986c70 */
  push32(0x1298699du); f_12986c70();
  /* 1298699d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129869a0:;
  /* 129869a0 push 9 */
  push32((uint32_t)(0x9u));
  /* 129869a2 call 0x12986350 */
  push32(0x129869a7u); f_12986350();
  /* 129869a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129869aa jmp 0x129869e9 */
  goto L_129869e9;
L_129869ac:;
  /* 129869ac push 9 */
  push32((uint32_t)(0x9u));
  /* 129869ae call 0x12986350 */
  push32(0x129869b3u); f_12986350();
  /* 129869b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129869b6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129869ba jne 0x129869c3 */
  if (!C.zf) goto L_129869c3;
  /* 129869bc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_129869c3:;
  /* 129869c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 129869c6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129869c9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 129869cc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 129869cf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 129869d2 push eax */
  push32((uint32_t)(EAX));
  /* 129869d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129869d6 push ecx */
  push32((uint32_t)(ECX));
  /* 129869d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 129869d9 mov edx, dword ptr [0x129afe2c] */
  EDX = (r32((uint32_t)(0x129afe2c)));
  /* 129869df push edx */
  push32((uint32_t)(EDX));
  /* 129869e0 call dword ptr [0x129b02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f8))), 0x129869e6u);
  /* 129869e6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_129869e9:;
  /* 129869e9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129869ed jne 0x129869f8 */
  if (!C.zf) goto L_129869f8;
  /* 129869ef cmp dword ptr [0x129ae670], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae670))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129869f6 jne 0x129869fd */
  if (!C.zf) goto L_129869fd;
L_129869f8:;
  /* 129869f8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129869fb jmp 0x12986a16 */
  goto L_12986a16;
L_129869fd:;
  /* 129869fd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986a00 push eax */
  push32((uint32_t)(EAX));
  /* 12986a01 call 0x129865f0 */
  push32(0x12986a06u); f_129865f0();
  /* 12986a06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12986a0b jne 0x12986a11 */
  if (!C.zf) goto L_12986a11;
  /* 12986a0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986a0f jmp 0x12986a16 */
  goto L_12986a16;
L_12986a11:;
  /* 12986a11 jmp 0x12986866 */
  goto L_12986866;
L_12986a16:;
  /* 12986a16 mov esp, ebp */
  ESP = (EBP);
  /* 12986a18 pop ebp */
  EBP = (pop32());
  /* 12986a19 ret  */
  ESPCHK(0x12986830u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x12986a20 (104 bytes, 38 insns) */
void f_12986a20(void) {
  FTRACE(0x12986a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986a20 push ebp */
  push32((uint32_t)(EBP));
  /* 12986a21 mov ebp, esp */
  EBP = (ESP);
  /* 12986a23 push ecx */
  push32((uint32_t)(ECX));
  /* 12986a24 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986a28 jne 0x12986a2c */
  if (!C.zf) goto L_12986a2c;
  /* 12986a2a jmp 0x12986a84 */
  goto L_12986a84;
L_12986a2c:;
  /* 12986a2c push 9 */
  push32((uint32_t)(0x9u));
  /* 12986a2e call 0x129862b0 */
  push32(0x12986a33u); f_129862b0();
  /* 12986a33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986a39 push eax */
  push32((uint32_t)(EAX));
  /* 12986a3a call 0x12986bb0 */
  push32(0x12986a3fu); f_12986bb0();
  /* 12986a3f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12986a45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986a49 je 0x12986a67 */
  if (C.zf) goto L_12986a67;
  /* 12986a4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986a4e push ecx */
  push32((uint32_t)(ECX));
  /* 12986a4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986a52 push edx */
  push32((uint32_t)(EDX));
  /* 12986a53 call 0x12986c70 */
  push32(0x12986a58u); f_12986c70();
  /* 12986a58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a5b push 9 */
  push32((uint32_t)(0x9u));
  /* 12986a5d call 0x12986350 */
  push32(0x12986a62u); f_12986350();
  /* 12986a62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a65 jmp 0x12986a84 */
  goto L_12986a84;
L_12986a67:;
  /* 12986a67 push 9 */
  push32((uint32_t)(0x9u));
  /* 12986a69 call 0x12986350 */
  push32(0x12986a6eu); f_12986350();
  /* 12986a6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986a71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986a74 push eax */
  push32((uint32_t)(EAX));
  /* 12986a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 12986a77 mov ecx, dword ptr [0x129afe2c] */
  ECX = (r32((uint32_t)(0x129afe2c)));
  /* 12986a7d push ecx */
  push32((uint32_t)(ECX));
  /* 12986a7e call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x12986a84u);
L_12986a84:;
  /* 12986a84 mov esp, ebp */
  ESP = (EBP);
  /* 12986a86 pop ebp */
  EBP = (pop32());
  /* 12986a87 ret  */
  ESPCHK(0x12986a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a90 @ 0x12986a90 (116 bytes, 34 insns) */
void f_12986a90(void) {
  FTRACE(0x12986a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986a90 push ebp */
  push32((uint32_t)(EBP));
  /* 12986a91 mov ebp, esp */
  EBP = (ESP);
  /* 12986a93 push ecx */
  push32((uint32_t)(ECX));
  /* 12986a94 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 12986a9b push 9 */
  push32((uint32_t)(0x9u));
  /* 12986a9d call 0x129862b0 */
  push32(0x12986aa2u); f_129862b0();
  /* 12986aa2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986aa5 call 0x129881a0 */
  push32(0x12986aaau); f_129881a0();
  /* 12986aaa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12986aac jge 0x12986ab5 */
  if ((C.sf==C.of)) goto L_12986ab5;
  /* 12986aae mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12986ab5:;
  /* 12986ab5 push 9 */
  push32((uint32_t)(0x9u));
  /* 12986ab7 call 0x12986350 */
  push32(0x12986abcu); f_12986350();
  /* 12986abc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12986abf push 0 */
  push32((uint32_t)(0x0u));
  /* 12986ac1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12986ac3 mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12986ac8 push eax */
  push32((uint32_t)(EAX));
  /* 12986ac9 call dword ptr [0x129b02b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02b4))), 0x12986acfu);
  /* 12986acf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12986ad1 jne 0x12986afd */
  if (!C.zf) goto L_12986afd;
  /* 12986ad3 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x12986ad9u);
  /* 12986ad9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986adc jne 0x12986af6 */
  if (!C.zf) goto L_12986af6;
  /* 12986ade call 0x1298a790 */
  push32(0x12986ae3u); f_1298a790();
  /* 12986ae3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 12986ae9 call 0x1298a780 */
  push32(0x12986aeeu); f_1298a780();
  /* 12986aee mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 12986af4 jmp 0x12986afd */
  goto L_12986afd;
L_12986af6:;
  /* 12986af6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_12986afd:;
  /* 12986afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986b00 mov esp, ebp */
  ESP = (EBP);
  /* 12986b02 pop ebp */
  EBP = (pop32());
  /* 12986b03 ret  */
  ESPCHK(0x12986a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b10 @ 0x12986b10 (10 bytes, 5 insns) */
void f_12986b10(void) {
  FTRACE(0x12986b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986b10 push ebp */
  push32((uint32_t)(EBP));
  /* 12986b11 mov ebp, esp */
  EBP = (ESP);
  /* 12986b13 call 0x12986a90 */
  push32(0x12986b18u); f_12986a90();
  /* 12986b18 pop ebp */
  EBP = (pop32());
  /* 12986b19 ret  */
  ESPCHK(0x12986b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b20 @ 0x12986b20 (10 bytes, 5 insns) */
void f_12986b20(void) {
  FTRACE(0x12986b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986b20 push ebp */
  push32((uint32_t)(EBP));
  /* 12986b21 mov ebp, esp */
  EBP = (ESP);
  /* 12986b23 mov eax, dword ptr [0x129acc94] */
  EAX = (r32((uint32_t)(0x129acc94)));
  /* 12986b28 pop ebp */
  EBP = (pop32());
  /* 12986b29 ret  */
  ESPCHK(0x12986b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b30 @ 0x12986b30 (31 bytes, 11 insns) */
void f_12986b30(void) {
  FTRACE(0x12986b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986b30 push ebp */
  push32((uint32_t)(EBP));
  /* 12986b31 mov ebp, esp */
  EBP = (ESP);
  /* 12986b33 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986b3a jbe 0x12986b40 */
  if ((C.cf||C.zf)) goto L_12986b40;
  /* 12986b3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986b3e jmp 0x12986b4d */
  goto L_12986b4d;
L_12986b40:;
  /* 12986b40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986b43 mov dword ptr [0x129acc94], eax */
  w32((uint32_t)(0x129acc94), (EAX));
  /* 12986b48 mov eax, 1 */
  EAX = (0x1u);
L_12986b4d:;
  /* 12986b4d pop ebp */
  EBP = (pop32());
  /* 12986b4e ret  */
  ESPCHK(0x12986b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b50 @ 0x12986b50 (89 bytes, 20 insns) */
void f_12986b50(void) {
  FTRACE(0x12986b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986b50 push ebp */
  push32((uint32_t)(EBP));
  /* 12986b51 mov ebp, esp */
  EBP = (ESP);
  /* 12986b53 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 12986b58 push 0 */
  push32((uint32_t)(0x0u));
  /* 12986b5a mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 12986b5f push eax */
  push32((uint32_t)(EAX));
  /* 12986b60 call dword ptr [0x129b02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f4))), 0x12986b66u);
  /* 12986b66 mov dword ptr [0x129afe28], eax */
  w32((uint32_t)(0x129afe28), (EAX));
  /* 12986b6b cmp dword ptr [0x129afe28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afe28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986b72 jne 0x12986b78 */
  if (!C.zf) goto L_12986b78;
  /* 12986b74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12986b76 jmp 0x12986ba7 */
  goto L_12986ba7;
L_12986b78:;
  /* 12986b78 mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 12986b7e mov dword ptr [0x129afe1c], ecx */
  w32((uint32_t)(0x129afe1c), (ECX));
  /* 12986b84 mov dword ptr [0x129afe20], 0 */
  w32((uint32_t)(0x129afe20), (0x0u));
  /* 12986b8e mov dword ptr [0x129afe24], 0 */
  w32((uint32_t)(0x129afe24), (0x0u));
  /* 12986b98 mov dword ptr [0x129afe08], 0x10 */
  w32((uint32_t)(0x129afe08), (0x10u));
  /* 12986ba2 mov eax, 1 */
  EAX = (0x1u);
L_12986ba7:;
  /* 12986ba7 pop ebp */
  EBP = (pop32());
  /* 12986ba8 ret  */
  ESPCHK(0x12986b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb0 @ 0x12986bb0 (85 bytes, 29 insns) */
void f_12986bb0(void) {
  FTRACE(0x12986bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12986bb1 mov ebp, esp */
  EBP = (ESP);
  /* 12986bb3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986bb6 mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 12986bbb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12986bbe mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 12986bc4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986bc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12986bc9 mov edx, dword ptr [0x129afe28] */
  EDX = (r32((uint32_t)(0x129afe28)));
  /* 12986bcf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12986bd2:;
  /* 12986bd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986bd5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986bd8 jae 0x12986bff */
  if (!C.cf) goto L_12986bff;
  /* 12986bda mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986be0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986be3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12986be6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986bed jae 0x12986bf4 */
  if (!C.cf) goto L_12986bf4;
  /* 12986bef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986bf2 jmp 0x12986c01 */
  goto L_12986c01;
L_12986bf4:;
  /* 12986bf4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986bf7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986bfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12986bfd jmp 0x12986bd2 */
  goto L_12986bd2;
L_12986bff:;
  /* 12986bff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12986c01:;
  /* 12986c01 mov esp, ebp */
  ESP = (EBP);
  /* 12986c03 pop ebp */
  EBP = (pop32());
  /* 12986c04 ret  */
  ESPCHK(0x12986bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x12986c10 (95 bytes, 33 insns) */
void f_12986c10(void) {
  FTRACE(0x12986c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986c10 push ebp */
  push32((uint32_t)(EBP));
  /* 12986c11 mov ebp, esp */
  EBP = (ESP);
  /* 12986c13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986c19 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986c1c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986c1f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12986c22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986c25 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12986c28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12986c2b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12986c30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986c33 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12986c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986c38 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12986c3b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12986c3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12986c3f jne 0x12986c61 */
  if (!C.zf) goto L_12986c61;
  /* 12986c41 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986c44 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 12986c47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12986c49 jne 0x12986c61 */
  if (!C.zf) goto L_12986c61;
  /* 12986c4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986c4e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 12986c54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986c56 je 0x12986c61 */
  if (C.zf) goto L_12986c61;
  /* 12986c58 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 12986c5f jmp 0x12986c68 */
  goto L_12986c68;
L_12986c61:;
  /* 12986c61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12986c68:;
  /* 12986c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986c6b mov esp, ebp */
  ESP = (EBP);
  /* 12986c6d pop ebp */
  EBP = (pop32());
  /* 12986c6e ret  */
  ESPCHK(0x12986c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c70 @ 0x12986c70 (1485 bytes, 453 insns) */
void f_12986c70(void) {
  FTRACE(0x12986c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12986c70 push ebp */
  push32((uint32_t)(EBP));
  /* 12986c71 mov ebp, esp */
  EBP = (ESP);
  /* 12986c73 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986c79 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12986c7c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 12986c7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986c82 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986c85 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986c88 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12986c8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12986c8e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 12986c91 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12986c94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986c97 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12986c9d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ca0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 12986ca7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12986caa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12986cad sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986cb0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12986cb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986cb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12986cb8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986cbb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12986cbe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986cc1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986cc4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 12986cc7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986cca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12986ccc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12986ccf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986cd2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12986cd5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12986cd8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12986cdb and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12986cde test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986ce0 jne 0x12986e08 */
  if (!C.zf) goto L_12986e08;
  /* 12986ce6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12986ce9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12986cec sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986cef mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12986cf2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986cf6 jbe 0x12986cff */
  if ((C.cf||C.zf)) goto L_12986cff;
  /* 12986cf8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12986cff:;
  /* 12986cff mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986d02 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986d05 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12986d08 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986d0b jne 0x12986de1 */
  if (!C.zf) goto L_12986de1;
  /* 12986d11 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986d15 jae 0x12986d76 */
  if (!C.cf) goto L_12986d76;
  /* 12986d17 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12986d1c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12986d1f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12986d21 not eax */
  EAX = (~(EAX));
  /* 12986d23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986d26 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d29 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12986d2d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12986d2f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986d32 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d35 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12986d39 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d3c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986d3f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12986d42 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12986d45 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d48 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986d4b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12986d4e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d51 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986d54 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12986d58 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12986d5a jne 0x12986d74 */
  if (!C.zf) goto L_12986d74;
  /* 12986d5c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12986d61 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12986d64 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12986d66 not eax */
  EAX = (~(EAX));
  /* 12986d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986d6b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12986d6d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12986d6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986d72 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12986d74:;
  /* 12986d74 jmp 0x12986de1 */
  goto L_12986de1;
L_12986d76:;
  /* 12986d76 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12986d79 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986d7c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12986d81 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12986d83 not edx */
  EDX = (~(EDX));
  /* 12986d85 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986d88 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d8b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 12986d92 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12986d94 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986d97 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986d9a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 12986da1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986da4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986da7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12986daa sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12986dad mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986db0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986db3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12986db6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986db9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986dbc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12986dc0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986dc2 jne 0x12986de1 */
  if (!C.zf) goto L_12986de1;
  /* 12986dc4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12986dc7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986dca mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12986dcf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12986dd1 not edx */
  EDX = (~(EDX));
  /* 12986dd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986dd6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12986dd9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12986ddb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986dde mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12986de1:;
  /* 12986de1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986de4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12986de7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986dea mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12986ded mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 12986df0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986df3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986df6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12986df9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12986dfc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12986dff mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12986e02 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986e05 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_12986e08:;
  /* 12986e08 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12986e0b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12986e0e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986e11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12986e14 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e18 jbe 0x12986e21 */
  if ((C.cf||C.zf)) goto L_12986e21;
  /* 12986e1a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12986e21:;
  /* 12986e21 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986e24 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12986e27 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986e29 jne 0x12986f85 */
  if (!C.zf) goto L_12986f85;
  /* 12986e2f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986e32 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986e35 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 12986e38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986e3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12986e3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986e41 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12986e44 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e48 jbe 0x12986e51 */
  if ((C.cf||C.zf)) goto L_12986e51;
  /* 12986e4a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_12986e51:;
  /* 12986e51 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12986e54 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986e57 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12986e5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12986e5d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12986e60 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986e63 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12986e66 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e6a jbe 0x12986e73 */
  if ((C.cf||C.zf)) goto L_12986e73;
  /* 12986e6c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_12986e73:;
  /* 12986e73 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986e76 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e79 je 0x12986f7f */
  if (C.zf) goto L_12986f7f;
  /* 12986e7f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986e82 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986e85 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986e88 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e8b jne 0x12986f61 */
  if (!C.zf) goto L_12986f61;
  /* 12986e91 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986e95 jae 0x12986ef6 */
  if (!C.cf) goto L_12986ef6;
  /* 12986e97 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12986e9c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986e9f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12986ea1 not edx */
  EDX = (~(EDX));
  /* 12986ea3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986ea6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ea9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12986ead and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12986eaf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986eb2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986eb5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12986eb9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ebc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986ebf mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12986ec2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12986ec5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ec8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986ecb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12986ece mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ed1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986ed4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12986ed8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986eda jne 0x12986ef4 */
  if (!C.zf) goto L_12986ef4;
  /* 12986edc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12986ee1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986ee4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12986ee6 not edx */
  EDX = (~(EDX));
  /* 12986ee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986eeb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12986eed and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12986eef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986ef2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12986ef4:;
  /* 12986ef4 jmp 0x12986f61 */
  goto L_12986f61;
L_12986ef6:;
  /* 12986ef6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986ef9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986efc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12986f01 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12986f03 not eax */
  EAX = (~(EAX));
  /* 12986f05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986f08 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986f0b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12986f12 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12986f14 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12986f17 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986f1a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12986f21 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986f24 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986f27 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12986f2a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12986f2d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986f30 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986f33 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12986f36 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986f39 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986f3c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12986f40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12986f42 jne 0x12986f61 */
  if (!C.zf) goto L_12986f61;
  /* 12986f44 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986f47 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12986f4a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12986f4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12986f51 not eax */
  EAX = (~(EAX));
  /* 12986f53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986f56 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986f59 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12986f5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12986f5e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12986f61:;
  /* 12986f61 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986f64 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12986f67 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986f6a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12986f6d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12986f70 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986f73 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12986f76 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986f79 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12986f7c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_12986f7f:;
  /* 12986f7f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 12986f82 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_12986f85:;
  /* 12986f85 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12986f88 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12986f8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12986f8d jne 0x12986f9b */
  if (!C.zf) goto L_12986f9b;
  /* 12986f8f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12986f92 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986f95 je 0x129870ab */
  if (C.zf) goto L_129870ab;
L_12986f9b:;
  /* 12986f9b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12986f9e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12986fa1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12986fa4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12986fa7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986faa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12986fad mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986fb0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12986fb3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fb6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12986fb9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12986fbc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12986fbf mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fc2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12986fc5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fc8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986fcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fce mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12986fd1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fd4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12986fd7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12986fda cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986fdd jne 0x129870ab */
  if (!C.zf) goto L_129870ab;
  /* 12986fe3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12986fe7 jae 0x12987044 */
  if (!C.cf) goto L_12987044;
  /* 12986fe9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986fec add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986fef movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12986ff3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12986ff6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12986ff9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12986ffc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12986fff mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12987002 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987005 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12987008 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298700a jne 0x12987022 */
  if (!C.zf) goto L_12987022;
  /* 1298700c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987011 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987014 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987019 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298701b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1298701d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987020 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12987022:;
  /* 12987022 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987027 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298702a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1298702c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298702f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12987032 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12987036 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987038 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298703b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1298703e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12987042 jmp 0x129870ab */
  goto L_129870ab;
L_12987044:;
  /* 12987044 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12987047 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298704a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1298704e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12987051 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987054 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987057 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298705a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 1298705d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987060 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12987063 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987065 jne 0x12987082 */
  if (!C.zf) goto L_12987082;
  /* 12987067 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298706a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298706d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987072 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987077 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298707a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1298707c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298707f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12987082:;
  /* 12987082 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987085 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987088 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1298708d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1298708f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987092 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 12987095 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 1298709c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298709e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129870a1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 129870a4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_129870ab:;
  /* 129870ab mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129870ae mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 129870b1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 129870b3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129870b6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129870b9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129870bc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 129870bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129870c2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129870c4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129870c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129870ca mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 129870cc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129870cf cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129870d2 jne 0x12987239 */
  if (!C.zf) goto L_12987239;
  /* 129870d8 cmp dword ptr [0x129afe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129870df je 0x12987228 */
  if (C.zf) goto L_12987228;
  /* 129870e5 mov eax, dword ptr [0x129afe18] */
  EAX = (r32((uint32_t)(0x129afe18)));
  /* 129870ea shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 129870ed mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 129870f3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129870f6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129870f8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129870fb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 12987100 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12987105 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987108 push eax */
  push32((uint32_t)(EAX));
  /* 12987109 call dword ptr [0x129b02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d8))), 0x1298710fu);
  /* 1298710f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987114 mov ecx, dword ptr [0x129afe18] */
  ECX = (r32((uint32_t)(0x129afe18)));
  /* 1298711a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1298711c mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 12987121 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12987124 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987126 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 1298712c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1298712f mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 12987134 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12987137 mov edx, dword ptr [0x129afe18] */
  EDX = (r32((uint32_t)(0x129afe18)));
  /* 1298713d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 12987148 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 1298714d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12987150 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 12987153 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987156 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 1298715b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298715e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 12987161 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12987167 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1298716a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1298716e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987170 jne 0x12987186 */
  if (!C.zf) goto L_12987186;
  /* 12987172 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12987178 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1298717b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 1298717d mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 12987183 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12987186:;
  /* 12987186 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 1298718c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987190 jne 0x12987228 */
  if (!C.zf) goto L_12987228;
  /* 12987196 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1298719b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298719d mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129871a2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129871a5 push ecx */
  push32((uint32_t)(ECX));
  /* 129871a6 call dword ptr [0x129b02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d8))), 0x129871acu);
  /* 129871ac mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 129871b2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129871b5 push eax */
  push32((uint32_t)(EAX));
  /* 129871b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 129871b8 mov ecx, dword ptr [0x129afe2c] */
  ECX = (r32((uint32_t)(0x129afe2c)));
  /* 129871be push ecx */
  push32((uint32_t)(ECX));
  /* 129871bf call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x129871c5u);
  /* 129871c5 mov edx, dword ptr [0x129afe24] */
  EDX = (r32((uint32_t)(0x129afe24)));
  /* 129871cb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129871ce mov eax, dword ptr [0x129afe28] */
  EAX = (r32((uint32_t)(0x129afe28)));
  /* 129871d3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129871d5 mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 129871db add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129871de sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129871e0 push eax */
  push32((uint32_t)(EAX));
  /* 129871e1 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 129871e7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129871ea push edx */
  push32((uint32_t)(EDX));
  /* 129871eb mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129871f0 push eax */
  push32((uint32_t)(EAX));
  /* 129871f1 call 0x1298a7a0 */
  push32(0x129871f6u); f_1298a7a0();
  /* 129871f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129871f9 mov ecx, dword ptr [0x129afe24] */
  ECX = (r32((uint32_t)(0x129afe24)));
  /* 129871ff sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987202 mov dword ptr [0x129afe24], ecx */
  w32((uint32_t)(0x129afe24), (ECX));
  /* 12987208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298720b cmp edx, dword ptr [0x129afe20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x129afe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987211 jbe 0x1298721c */
  if ((C.cf||C.zf)) goto L_1298721c;
  /* 12987213 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987216 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987219 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1298721c:;
  /* 1298721c mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 12987222 mov dword ptr [0x129afe1c], ecx */
  w32((uint32_t)(0x129afe1c), (ECX));
L_12987228:;
  /* 12987228 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298722b mov dword ptr [0x129afe20], edx */
  w32((uint32_t)(0x129afe20), (EDX));
  /* 12987231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987234 mov dword ptr [0x129afe18], eax */
  w32((uint32_t)(0x129afe18), (EAX));
L_12987239:;
  /* 12987239 mov esp, ebp */
  ESP = (EBP);
  /* 1298723b pop ebp */
  EBP = (pop32());
  /* 1298723c ret  */
  ESPCHK(0x12986c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007240 @ 0x12987240 (1334 bytes, 427 insns) */
void f_12987240(void) {
  FTRACE(0x12987240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12987240 push ebp */
  push32((uint32_t)(EBP));
  /* 12987241 mov ebp, esp */
  EBP = (ESP);
  /* 12987243 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987246 push esi */
  push32((uint32_t)(ESI));
  /* 12987247 mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 1298724c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298724f mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 12987255 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987257 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1298725a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298725d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987260 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 12987263 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12987266 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987269 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1298726c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298726f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12987272 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987276 jge 0x1298728c */
  if ((C.sf==C.of)) goto L_1298728c;
  /* 12987278 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298727b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298727e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987280 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12987283 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 1298728a jmp 0x129872a1 */
  goto L_129872a1;
L_1298728c:;
  /* 1298728c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12987293 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987296 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987299 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298729c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1298729e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_129872a1:;
  /* 129872a1 mov ecx, dword ptr [0x129afe1c] */
  ECX = (r32((uint32_t)(0x129afe1c)));
  /* 129872a7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_129872aa:;
  /* 129872aa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872ad cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129872b0 jae 0x129872d6 */
  if (!C.cf) goto L_129872d6;
  /* 129872b2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872b5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129872b8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 129872ba mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872bd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 129872c0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 129872c3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 129872c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129872c7 je 0x129872cb */
  if (C.zf) goto L_129872cb;
  /* 129872c9 jmp 0x129872d6 */
  goto L_129872d6;
L_129872cb:;
  /* 129872cb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872ce add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129872d1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 129872d4 jmp 0x129872aa */
  goto L_129872aa;
L_129872d6:;
  /* 129872d6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872d9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129872dc jne 0x129873bd */
  if (!C.zf) goto L_129873bd;
  /* 129872e2 mov eax, dword ptr [0x129afe28] */
  EAX = (r32((uint32_t)(0x129afe28)));
  /* 129872e7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_129872ea:;
  /* 129872ea mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872ed cmp ecx, dword ptr [0x129afe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129872f3 jae 0x12987319 */
  if (!C.cf) goto L_12987319;
  /* 129872f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129872f8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129872fb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 129872fd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987300 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12987303 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12987306 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12987308 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298730a je 0x1298730e */
  if (C.zf) goto L_1298730e;
  /* 1298730c jmp 0x12987319 */
  goto L_12987319;
L_1298730e:;
  /* 1298730e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987311 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987314 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12987317 jmp 0x129872ea */
  goto L_129872ea;
L_12987319:;
  /* 12987319 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298731c cmp ecx, dword ptr [0x129afe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987322 jne 0x129873bd */
  if (!C.zf) goto L_129873bd;
L_12987328:;
  /* 12987328 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298732b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298732e jae 0x12987346 */
  if (!C.cf) goto L_12987346;
  /* 12987330 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987333 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987337 je 0x1298733b */
  if (C.zf) goto L_1298733b;
  /* 12987339 jmp 0x12987346 */
  goto L_12987346;
L_1298733b:;
  /* 1298733b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298733e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987341 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12987344 jmp 0x12987328 */
  goto L_12987328;
L_12987346:;
  /* 12987346 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987349 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298734c jne 0x12987397 */
  if (!C.zf) goto L_12987397;
  /* 1298734e mov eax, dword ptr [0x129afe28] */
  EAX = (r32((uint32_t)(0x129afe28)));
  /* 12987353 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_12987356:;
  /* 12987356 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987359 cmp ecx, dword ptr [0x129afe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298735f jae 0x12987377 */
  if (!C.cf) goto L_12987377;
  /* 12987361 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987364 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987368 je 0x1298736c */
  if (C.zf) goto L_1298736c;
  /* 1298736a jmp 0x12987377 */
  goto L_12987377;
L_1298736c:;
  /* 1298736c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298736f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987372 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12987375 jmp 0x12987356 */
  goto L_12987356;
L_12987377:;
  /* 12987377 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298737a cmp ecx, dword ptr [0x129afe1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987380 jne 0x12987397 */
  if (!C.zf) goto L_12987397;
  /* 12987382 call 0x12987780 */
  push32(0x12987387u); f_12987780();
  /* 12987387 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1298738a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298738e jne 0x12987397 */
  if (!C.zf) goto L_12987397;
  /* 12987390 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12987392 jmp 0x12987771 */
  goto L_12987771;
L_12987397:;
  /* 12987397 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298739a push edx */
  push32((uint32_t)(EDX));
  /* 1298739b call 0x12987890 */
  push32(0x129873a0u); f_12987890();
  /* 129873a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129873a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129873a6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 129873a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 129873ab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129873ae mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129873b1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129873b4 jne 0x129873bd */
  if (!C.zf) goto L_129873bd;
  /* 129873b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129873b8 jmp 0x12987771 */
  goto L_12987771;
L_129873bd:;
  /* 129873bd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129873c0 mov dword ptr [0x129afe1c], edx */
  w32((uint32_t)(0x129afe1c), (EDX));
  /* 129873c6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129873c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129873cc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 129873cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129873d2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129873d4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 129873d7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129873db je 0x12987400 */
  if (C.zf) goto L_12987400;
  /* 129873dd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129873e0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129873e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 129873e6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 129873ea mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129873ed mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129873f0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 129873f3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 129873fa or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 129873fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129873fe jne 0x12987435 */
  if (!C.zf) goto L_12987435;
L_12987400:;
  /* 12987400 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_12987407:;
  /* 12987407 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298740a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298740d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12987410 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 12987414 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987417 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298741a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 1298741d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 12987424 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 12987426 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987428 jne 0x12987435 */
  if (!C.zf) goto L_12987435;
  /* 1298742a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298742d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987430 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12987433 jmp 0x12987407 */
  goto L_12987407;
L_12987435:;
  /* 12987435 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987438 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298743e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987441 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12987448 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298744b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12987452 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987455 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987458 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298745b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 1298745f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12987462 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987466 jne 0x12987482 */
  if (!C.zf) goto L_12987482;
  /* 12987468 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 1298746f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987472 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987475 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 12987478 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 1298747f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_12987482:;
  /* 12987482 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987486 jl 0x1298749b */
  if ((C.sf!=C.of)) goto L_1298749b;
  /* 12987488 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298748b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298748d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12987490 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987493 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987496 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12987499 jmp 0x12987482 */
  goto L_12987482;
L_1298749b:;
  /* 1298749b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298749e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129874a1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 129874a5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 129874a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129874ab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 129874ad sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129874b0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129874b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129874b6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 129874b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129874bc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129874bf cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129874c3 jle 0x129874cc */
  if ((C.zf||C.sf!=C.of)) goto L_129874cc;
  /* 129874c5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_129874cc:;
  /* 129874cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129874cf cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129874d2 je 0x129876f0 */
  if (C.zf) goto L_129876f0;
  /* 129874d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129874db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129874de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 129874e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129874e4 jne 0x129875ba */
  if (!C.zf) goto L_129875ba;
  /* 129874ea cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129874ee jge 0x1298754f */
  if ((C.sf==C.of)) goto L_1298754f;
  /* 129874f0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129874f5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129874f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129874fa not eax */
  EAX = (~(EAX));
  /* 129874fc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129874ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987502 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12987506 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987508 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298750b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298750e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12987512 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987515 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987518 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 1298751b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1298751e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987521 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987524 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12987527 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298752a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298752d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12987531 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987533 jne 0x1298754d */
  if (!C.zf) goto L_1298754d;
  /* 12987535 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1298753a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298753d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1298753f not eax */
  EAX = (~(EAX));
  /* 12987541 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987544 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12987546 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12987548 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298754b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1298754d:;
  /* 1298754d jmp 0x129875ba */
  goto L_129875ba;
L_1298754f:;
  /* 1298754f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987552 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987555 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1298755a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1298755c not edx */
  EDX = (~(EDX));
  /* 1298755e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987561 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987564 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1298756b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298756d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987570 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987573 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 1298757a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298757d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987580 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987583 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987586 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987589 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298758c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 1298758f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987592 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987595 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298759b jne 0x129875ba */
  if (!C.zf) goto L_129875ba;
  /* 1298759d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129875a0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129875a3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129875a8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129875aa not edx */
  EDX = (~(EDX));
  /* 129875ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129875af mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129875b2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129875b4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129875b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_129875ba:;
  /* 129875ba mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129875c0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875c3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129875c6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129875c9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875cc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129875cf mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875d2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129875d5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129875d8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129875dc je 0x129876f0 */
  if (C.zf) goto L_129876f0;
  /* 129875e2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129875e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129875e8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 129875eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 129875ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129875f4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 129875f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 129875fa mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129875fd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12987600 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12987603 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12987606 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987609 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1298760c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298760f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987612 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987615 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12987618 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298761b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298761e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987621 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987624 jne 0x129876f0 */
  if (!C.zf) goto L_129876f0;
  /* 1298762a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298762e jge 0x1298768a */
  if ((C.sf==C.of)) goto L_1298768a;
  /* 12987630 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987633 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987636 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 1298763a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298763d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987640 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12987643 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987645 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987648 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298764b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 1298764e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987650 jne 0x12987668 */
  if (!C.zf) goto L_12987668;
  /* 12987652 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987657 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298765a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1298765c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298765f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12987661 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12987663 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987666 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12987668:;
  /* 12987668 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1298766d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987670 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987672 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987675 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987678 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 1298767c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298767e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987681 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987684 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12987688 jmp 0x129876f0 */
  goto L_129876f0;
L_1298768a:;
  /* 1298768a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 1298768d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987690 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987694 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987697 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298769a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1298769d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298769f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129876a2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129876a5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 129876a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129876aa jne 0x129876c7 */
  if (!C.zf) goto L_129876c7;
  /* 129876ac mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129876af sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129876b2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 129876b7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 129876b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129876bc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129876bf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 129876c1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129876c4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_129876c7:;
  /* 129876c7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129876ca sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129876cd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129876d2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129876d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 129876d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 129876da mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 129876e1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129876e3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 129876e6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 129876e9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_129876f0:;
  /* 129876f0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129876f4 je 0x1298770a */
  if (C.zf) goto L_1298770a;
  /* 129876f6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129876f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129876fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 129876fe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987701 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987704 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12987707 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_1298770a:;
  /* 1298770a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298770d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987710 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12987713 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987716 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987719 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298771c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298771e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987721 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987724 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987727 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298772a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 1298772d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987730 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12987732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987735 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12987737 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298773a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298773d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1298773f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987741 jne 0x12987763 */
  if (!C.zf) goto L_12987763;
  /* 12987743 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987746 cmp eax, dword ptr [0x129afe20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129afe20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298774c jne 0x12987763 */
  if (!C.zf) goto L_12987763;
  /* 1298774e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987751 cmp ecx, dword ptr [0x129afe18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987757 jne 0x12987763 */
  if (!C.zf) goto L_12987763;
  /* 12987759 mov dword ptr [0x129afe20], 0 */
  w32((uint32_t)(0x129afe20), (0x0u));
L_12987763:;
  /* 12987763 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 12987766 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987769 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1298776b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298776e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_12987771:;
  /* 12987771 pop esi */
  ESI = (pop32());
  /* 12987772 mov esp, ebp */
  ESP = (EBP);
  /* 12987774 pop ebp */
  EBP = (pop32());
  /* 12987775 ret  */
  ESPCHK(0x12987240u, _esp0);
  ESP += 4; return;
}

/* FUN_10007780 @ 0x12987780 (271 bytes, 78 insns) */
void f_12987780(void) {
  FTRACE(0x12987780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12987780 push ebp */
  push32((uint32_t)(EBP));
  /* 12987781 mov ebp, esp */
  EBP = (ESP);
  /* 12987783 push ecx */
  push32((uint32_t)(ECX));
  /* 12987784 mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 12987789 cmp eax, dword ptr [0x129afe08] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129afe08))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298778f jne 0x129877db */
  if (!C.zf) goto L_129877db;
  /* 12987791 mov ecx, dword ptr [0x129afe08] */
  ECX = (r32((uint32_t)(0x129afe08)));
  /* 12987797 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298779a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298779d push ecx */
  push32((uint32_t)(ECX));
  /* 1298779e mov edx, dword ptr [0x129afe28] */
  EDX = (r32((uint32_t)(0x129afe28)));
  /* 129877a4 push edx */
  push32((uint32_t)(EDX));
  /* 129877a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 129877a7 mov eax, dword ptr [0x129afe2c] */
  EAX = (r32((uint32_t)(0x129afe2c)));
  /* 129877ac push eax */
  push32((uint32_t)(EAX));
  /* 129877ad call dword ptr [0x129b02f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f8))), 0x129877b3u);
  /* 129877b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 129877b6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129877ba jne 0x129877c3 */
  if (!C.zf) goto L_129877c3;
  /* 129877bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129877be jmp 0x1298788b */
  goto L_1298788b;
L_129877c3:;
  /* 129877c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 129877c6 mov dword ptr [0x129afe28], ecx */
  w32((uint32_t)(0x129afe28), (ECX));
  /* 129877cc mov edx, dword ptr [0x129afe08] */
  EDX = (r32((uint32_t)(0x129afe08)));
  /* 129877d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129877d5 mov dword ptr [0x129afe08], edx */
  w32((uint32_t)(0x129afe08), (EDX));
L_129877db:;
  /* 129877db mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 129877e0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129877e3 mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 129877e9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129877eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 129877ee push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 129877f3 push 8 */
  push32((uint32_t)(0x8u));
  /* 129877f5 mov edx, dword ptr [0x129afe2c] */
  EDX = (r32((uint32_t)(0x129afe2c)));
  /* 129877fb push edx */
  push32((uint32_t)(EDX));
  /* 129877fc call dword ptr [0x129b02f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02f4))), 0x12987802u);
  /* 12987802 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987805 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 12987808 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298780b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298780f jne 0x12987815 */
  if (!C.zf) goto L_12987815;
  /* 12987811 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12987813 jmp 0x1298788b */
  goto L_1298788b;
L_12987815:;
  /* 12987815 push 4 */
  push32((uint32_t)(0x4u));
  /* 12987817 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1298781c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 12987821 push 0 */
  push32((uint32_t)(0x0u));
  /* 12987823 call dword ptr [0x129b02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02fc))), 0x12987829u);
  /* 12987829 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298782c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1298782f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987832 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987836 jne 0x12987852 */
  if (!C.zf) goto L_12987852;
  /* 12987838 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298783b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298783e push ecx */
  push32((uint32_t)(ECX));
  /* 1298783f push 0 */
  push32((uint32_t)(0x0u));
  /* 12987841 mov edx, dword ptr [0x129afe2c] */
  EDX = (r32((uint32_t)(0x129afe2c)));
  /* 12987847 push edx */
  push32((uint32_t)(EDX));
  /* 12987848 call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x1298784eu);
  /* 1298784e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12987850 jmp 0x1298788b */
  goto L_1298788b;
L_12987852:;
  /* 12987852 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987855 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298785b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298785e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 12987865 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987868 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 1298786f mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 12987874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987877 mov dword ptr [0x129afe24], eax */
  w32((uint32_t)(0x129afe24), (EAX));
  /* 1298787c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298787f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12987882 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 12987888 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298788b:;
  /* 1298788b mov esp, ebp */
  ESP = (EBP);
  /* 1298788d pop ebp */
  EBP = (pop32());
  /* 1298788e ret  */
  ESPCHK(0x12987780u, _esp0);
  ESP += 4; return;
}

/* FUN_10007890 @ 0x12987890 (494 bytes, 149 insns) */
void f_12987890(void) {
  FTRACE(0x12987890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12987890 push ebp */
  push32((uint32_t)(EBP));
  /* 12987891 mov ebp, esp */
  EBP = (ESP);
  /* 12987893 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987899 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298789c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1298789f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 129878a2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129878a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129878a8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_129878af:;
  /* 129878af cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129878b3 jl 0x129878c8 */
  if ((C.sf!=C.of)) goto L_129878c8;
  /* 129878b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129878b8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 129878ba mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129878bd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 129878c0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129878c3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 129878c6 jmp 0x129878af */
  goto L_129878af;
L_129878c8:;
  /* 129878c8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129878cb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129878d1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 129878d4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 129878db mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129878de mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 129878e5 jmp 0x129878f0 */
  goto L_129878f0;
L_129878e7:;
  /* 129878e7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 129878ea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129878ed mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_129878f0:;
  /* 129878f0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129878f4 jge 0x12987916 */
  if ((C.sf==C.of)) goto L_12987916;
  /* 129878f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 129878f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129878fc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 129878ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12987902 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987905 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987908 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1298790b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298790e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987911 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 12987914 jmp 0x129878e7 */
  goto L_129878e7;
L_12987916:;
  /* 12987916 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987919 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 1298791c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298791f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12987922 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987924 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12987927 push 4 */
  push32((uint32_t)(0x4u));
  /* 12987929 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1298792e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 12987933 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987936 push edx */
  push32((uint32_t)(EDX));
  /* 12987937 call dword ptr [0x129b02fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02fc))), 0x1298793du);
  /* 1298793d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298793f jne 0x12987949 */
  if (!C.zf) goto L_12987949;
  /* 12987941 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12987944 jmp 0x12987a7a */
  goto L_12987a7a;
L_12987949:;
  /* 12987949 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298794c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987951 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12987954 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987957 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298795a jmp 0x12987968 */
  goto L_12987968;
L_1298795c:;
  /* 1298795c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298795f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987965 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12987968:;
  /* 12987968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298796b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298796e ja 0x129879cd */
  if ((!C.cf&&!C.zf)) goto L_129879cd;
  /* 12987970 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987973 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 1298797a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298797d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 12987987 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298798a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298798d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12987990 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987993 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 12987999 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298799c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129879a2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129879a5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 129879a8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129879ab sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129879b1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 129879b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129879b7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129879ba add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129879bf mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129879c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 129879c5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 129879cb jmp 0x1298795c */
  goto L_1298795c;
L_129879cd:;
  /* 129879cd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 129879d0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129879d6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 129879d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129879dc add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129879df mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129879e2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 129879e5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129879e8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 129879eb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 129879ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129879f1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129879f4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 129879f7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 129879fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129879fd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987a00 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 12987a03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987a06 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12987a09 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12987a0c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987a0f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987a12 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12987a15 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987a18 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987a1b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 12987a23 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987a26 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987a29 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 12987a34 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987a37 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 12987a3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987a3e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 12987a41 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987a44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987a47 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 12987a4a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987a4c jne 0x12987a5d */
  if (!C.zf) goto L_12987a5d;
  /* 12987a4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a51 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987a54 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12987a57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a5a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12987a5d:;
  /* 12987a5d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987a62 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987a65 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987a67 not edx */
  EDX = (~(EDX));
  /* 12987a69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a6c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12987a6f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a74 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 12987a77 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_12987a7a:;
  /* 12987a7a mov esp, ebp */
  ESP = (EBP);
  /* 12987a7c pop ebp */
  EBP = (pop32());
  /* 12987a7d ret  */
  ESPCHK(0x12987890u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a80 @ 0x12987a80 (1515 bytes, 489 insns) */
void f_12987a80(void) {
  FTRACE(0x12987a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12987a80 push ebp */
  push32((uint32_t)(EBP));
  /* 12987a81 mov ebp, esp */
  EBP = (ESP);
  /* 12987a83 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987a86 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12987a89 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987a8c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 12987a8e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12987a91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a94 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12987a97 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 12987a9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987a9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12987aa0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987aa3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12987aa6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12987aa9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 12987aac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12987aaf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987ab2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12987ab8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987abb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 12987ac2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12987ac5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12987ac8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987acb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12987ace mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987ad1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12987ad3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987ad6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 12987ad9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987adc add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987adf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 12987ae2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987ae5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12987ae7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12987aea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987aed cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987af0 jle 0x12987da6 */
  if ((C.zf||C.sf!=C.of)) goto L_12987da6;
  /* 12987af6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987af9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12987afc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987afe jne 0x12987b0b */
  if (!C.zf) goto L_12987b0b;
  /* 12987b00 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987b03 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987b06 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987b09 jle 0x12987b12 */
  if ((C.zf||C.sf!=C.of)) goto L_12987b12;
L_12987b0b:;
  /* 12987b0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12987b0d jmp 0x12988067 */
  goto L_12988067;
L_12987b12:;
  /* 12987b12 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987b15 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12987b18 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987b1b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12987b1e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987b22 jbe 0x12987b2b */
  if ((C.cf||C.zf)) goto L_12987b2b;
  /* 12987b24 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12987b2b:;
  /* 12987b2b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987b2e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987b31 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987b34 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987b37 jne 0x12987c0d */
  if (!C.zf) goto L_12987c0d;
  /* 12987b3d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987b41 jae 0x12987ba2 */
  if (!C.cf) goto L_12987ba2;
  /* 12987b43 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987b48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987b4b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987b4d not edx */
  EDX = (~(EDX));
  /* 12987b4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987b52 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987b55 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12987b59 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12987b5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987b5e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987b61 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12987b65 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987b68 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987b6b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987b6e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987b71 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987b74 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987b77 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12987b7a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987b7d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987b80 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987b84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987b86 jne 0x12987ba0 */
  if (!C.zf) goto L_12987ba0;
  /* 12987b88 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987b8d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987b90 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987b92 not edx */
  EDX = (~(EDX));
  /* 12987b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987b97 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12987b99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987b9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987b9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12987ba0:;
  /* 12987ba0 jmp 0x12987c0d */
  goto L_12987c0d;
L_12987ba2:;
  /* 12987ba2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987ba5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987ba8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987bad shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987baf not eax */
  EAX = (~(EAX));
  /* 12987bb1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987bb4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987bb7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12987bbe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987bc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987bc3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987bc6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12987bcd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987bd0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987bd3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12987bd6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987bd9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987bdc add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987bdf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12987be2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987be5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987be8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12987bec test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987bee jne 0x12987c0d */
  if (!C.zf) goto L_12987c0d;
  /* 12987bf0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987bf3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987bf6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987bfb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987bfd not eax */
  EAX = (~(EAX));
  /* 12987bff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987c02 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987c05 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12987c07 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987c0a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12987c0d:;
  /* 12987c0d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c10 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12987c13 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987c19 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12987c1c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c1f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12987c22 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c25 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12987c28 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12987c2b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987c2e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987c31 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987c34 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12987c37 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987c3b jle 0x12987d87 */
  if ((C.zf||C.sf!=C.of)) goto L_12987d87;
  /* 12987c41 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987c44 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987c47 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12987c4a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987c4d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 12987c50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987c53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12987c56 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987c5a jbe 0x12987c63 */
  if ((C.cf||C.zf)) goto L_12987c63;
  /* 12987c5c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12987c63:;
  /* 12987c63 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987c66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12987c69 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 12987c6c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12987c6f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c72 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987c75 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987c78 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12987c7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c7e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987c81 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 12987c84 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987c87 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c8a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 12987c8d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c90 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987c93 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c96 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12987c99 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c9c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987c9f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987ca2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987ca5 jne 0x12987d73 */
  if (!C.zf) goto L_12987d73;
  /* 12987cab cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987caf jae 0x12987d0c */
  if (!C.cf) goto L_12987d0c;
  /* 12987cb1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987cb4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987cb7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12987cbb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987cbe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987cc1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987cc4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987cc7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987cca add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987ccd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12987cd0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987cd2 jne 0x12987cea */
  if (!C.zf) goto L_12987cea;
  /* 12987cd4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987cd9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987cdc shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987cde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987ce1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12987ce3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987ce5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987ce8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12987cea:;
  /* 12987cea mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987cef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987cf2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987cf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987cf7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987cfa mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 12987cfe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987d00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987d03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d06 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 12987d0a jmp 0x12987d73 */
  goto L_12987d73;
L_12987d0c:;
  /* 12987d0c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d0f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d12 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12987d16 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d19 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d1c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987d1f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987d22 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d25 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d28 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 12987d2b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987d2d jne 0x12987d4a */
  if (!C.zf) goto L_12987d4a;
  /* 12987d2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987d32 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987d35 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987d3a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987d3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987d3f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987d42 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987d44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987d47 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_12987d4a:;
  /* 12987d4a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987d4d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987d50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987d55 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987d57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987d5a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d5d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12987d64 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987d66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987d69 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987d6c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_12987d73:;
  /* 12987d73 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987d76 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987d79 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12987d7b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987d7e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d81 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987d84 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_12987d87:;
  /* 12987d87 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987d8a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987d90 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12987d92 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987d95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987d9b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987d9e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 12987da1 jmp 0x12988062 */
  goto L_12988062;
L_12987da6:;
  /* 12987da6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987da9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987dac jge 0x12988062 */
  if ((C.sf==C.of)) goto L_12988062;
  /* 12987db2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987db5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987db8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987dbb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12987dbd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12987dc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987dc3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987dc6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987dc9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 12987dcc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987dcf add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987dd2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12987dd5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987dd8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987ddb mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12987dde mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987de1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12987de4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987de7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12987dea cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987dee jbe 0x12987df7 */
  if ((C.cf||C.zf)) goto L_12987df7;
  /* 12987df0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12987df7:;
  /* 12987df7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987dfa and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12987dfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987dff jne 0x12987f40 */
  if (!C.zf) goto L_12987f40;
  /* 12987e05 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12987e08 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 12987e0b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987e0e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12987e11 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987e15 jbe 0x12987e1e */
  if ((C.cf||C.zf)) goto L_12987e1e;
  /* 12987e17 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_12987e1e:;
  /* 12987e1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987e21 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987e24 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987e27 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987e2a jne 0x12987f00 */
  if (!C.zf) goto L_12987f00;
  /* 12987e30 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987e34 jae 0x12987e95 */
  if (!C.cf) goto L_12987e95;
  /* 12987e36 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987e3b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987e3e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987e40 not edx */
  EDX = (~(EDX));
  /* 12987e42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987e45 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987e48 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12987e4c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12987e4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987e51 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987e54 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12987e58 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987e5b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987e5e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 12987e61 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987e64 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987e67 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987e6a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 12987e6d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987e70 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987e73 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987e77 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987e79 jne 0x12987e93 */
  if (!C.zf) goto L_12987e93;
  /* 12987e7b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987e80 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987e83 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987e85 not edx */
  EDX = (~(EDX));
  /* 12987e87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987e8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12987e8c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 12987e8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987e91 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12987e93:;
  /* 12987e93 jmp 0x12987f00 */
  goto L_12987f00;
L_12987e95:;
  /* 12987e95 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987e98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987e9b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987ea0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987ea2 not eax */
  EAX = (~(EAX));
  /* 12987ea4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987ea7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987eaa mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 12987eb1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12987eb3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987eb6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987eb9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 12987ec0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987ec3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987ec6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 12987ec9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12987ecc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987ecf add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987ed2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 12987ed5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987ed8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987edb movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 12987edf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12987ee1 jne 0x12987f00 */
  if (!C.zf) goto L_12987f00;
  /* 12987ee3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12987ee6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987ee9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987eee shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987ef0 not eax */
  EAX = (~(EAX));
  /* 12987ef2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987ef5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12987ef8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12987efa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987efd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12987f00:;
  /* 12987f00 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987f03 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12987f06 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987f09 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987f0c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12987f0f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987f12 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12987f15 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12987f18 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12987f1b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 12987f1e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987f21 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987f24 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12987f27 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12987f2a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12987f2d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12987f30 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12987f33 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987f37 jbe 0x12987f40 */
  if ((C.cf||C.zf)) goto L_12987f40;
  /* 12987f39 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_12987f40:;
  /* 12987f40 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12987f43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12987f46 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 12987f49 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12987f4c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f4f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987f52 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987f55 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 12987f58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987f5e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 12987f61 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12987f64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f67 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 12987f6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f6d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987f70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f73 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 12987f76 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12987f7c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 12987f7f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987f82 jne 0x1298804e */
  if (!C.zf) goto L_1298804e;
  /* 12987f88 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12987f8c jae 0x12987fe8 */
  if (!C.cf) goto L_12987fe8;
  /* 12987f8e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987f91 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987f94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987f98 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987f9b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987f9e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12987fa1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987fa3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987fa6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987fa9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12987fac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12987fae jne 0x12987fc6 */
  if (!C.zf) goto L_12987fc6;
  /* 12987fb0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12987fb5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12987fb8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12987fba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987fbd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12987fbf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 12987fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12987fc4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12987fc6:;
  /* 12987fc6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12987fcb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12987fce shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12987fd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987fd3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987fd6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 12987fda or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12987fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12987fdf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987fe2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 12987fe6 jmp 0x1298804e */
  goto L_1298804e;
L_12987fe8:;
  /* 12987fe8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987feb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987fee movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 12987ff2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12987ff5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12987ff8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 12987ffb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12987ffd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12988000 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988003 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 12988006 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12988008 jne 0x12988025 */
  if (!C.zf) goto L_12988025;
  /* 1298800a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298800d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12988010 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 12988015 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 12988017 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298801a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1298801d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1298801f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988022 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_12988025:;
  /* 12988025 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988028 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298802b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12988030 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12988032 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988035 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12988038 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 1298803f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12988041 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988044 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 12988047 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_1298804e:;
  /* 1298804e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12988051 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988054 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 12988056 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12988059 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298805c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298805f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_12988062:;
  /* 12988062 mov eax, 1 */
  EAX = (0x1u);
L_12988067:;
  /* 12988067 mov esp, ebp */
  ESP = (EBP);
  /* 12988069 pop ebp */
  EBP = (pop32());
  /* 1298806a ret  */
  ESPCHK(0x12987a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008070 @ 0x12988070 (304 bytes, 79 insns) */
void f_12988070(void) {
  FTRACE(0x12988070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988070 push ebp */
  push32((uint32_t)(EBP));
  /* 12988071 mov ebp, esp */
  EBP = (ESP);
  /* 12988073 push ecx */
  push32((uint32_t)(ECX));
  /* 12988074 cmp dword ptr [0x129afe20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afe20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298807b je 0x1298819c */
  if (C.zf) goto L_1298819c;
  /* 12988081 mov eax, dword ptr [0x129afe18] */
  EAX = (r32((uint32_t)(0x129afe18)));
  /* 12988086 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 12988089 mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 1298808f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12988092 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988094 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12988097 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1298809c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129880a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129880a4 push eax */
  push32((uint32_t)(EAX));
  /* 129880a5 call dword ptr [0x129b02d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d8))), 0x129880abu);
  /* 129880ab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129880b0 mov ecx, dword ptr [0x129afe18] */
  ECX = (r32((uint32_t)(0x129afe18)));
  /* 129880b6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129880b8 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129880bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 129880c0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 129880c2 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 129880c8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 129880cb mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129880d0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129880d3 mov edx, dword ptr [0x129afe18] */
  EDX = (r32((uint32_t)(0x129afe18)));
  /* 129880d9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 129880e4 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129880e9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129880ec mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 129880ef sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 129880f2 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 129880f7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 129880fa mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 129880fd mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12988103 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 12988106 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 1298810a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298810c jne 0x12988122 */
  if (!C.zf) goto L_12988122;
  /* 1298810e mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12988114 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12988117 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 12988119 mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 1298811f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_12988122:;
  /* 12988122 mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12988128 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298812c jne 0x12988192 */
  if (!C.zf) goto L_12988192;
  /* 1298812e cmp dword ptr [0x129afe24], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129afe24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988135 jle 0x12988192 */
  if ((C.zf||C.sf!=C.of)) goto L_12988192;
  /* 12988137 mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 1298813c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298813f push ecx */
  push32((uint32_t)(ECX));
  /* 12988140 push 0 */
  push32((uint32_t)(0x0u));
  /* 12988142 mov edx, dword ptr [0x129afe2c] */
  EDX = (r32((uint32_t)(0x129afe2c)));
  /* 12988148 push edx */
  push32((uint32_t)(EDX));
  /* 12988149 call dword ptr [0x129b02d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02d4))), 0x1298814fu);
  /* 1298814f mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 12988154 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12988157 mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 1298815d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298815f mov edx, dword ptr [0x129afe20] */
  EDX = (r32((uint32_t)(0x129afe20)));
  /* 12988165 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988168 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298816a push ecx */
  push32((uint32_t)(ECX));
  /* 1298816b mov eax, dword ptr [0x129afe20] */
  EAX = (r32((uint32_t)(0x129afe20)));
  /* 12988170 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988173 push eax */
  push32((uint32_t)(EAX));
  /* 12988174 mov ecx, dword ptr [0x129afe20] */
  ECX = (r32((uint32_t)(0x129afe20)));
  /* 1298817a push ecx */
  push32((uint32_t)(ECX));
  /* 1298817b call 0x1298a7a0 */
  push32(0x12988180u); f_1298a7a0();
  /* 12988180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988183 mov edx, dword ptr [0x129afe24] */
  EDX = (r32((uint32_t)(0x129afe24)));
  /* 12988189 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298818c mov dword ptr [0x129afe24], edx */
  w32((uint32_t)(0x129afe24), (EDX));
L_12988192:;
  /* 12988192 mov dword ptr [0x129afe20], 0 */
  w32((uint32_t)(0x129afe20), (0x0u));
L_1298819c:;
  /* 1298819c mov esp, ebp */
  ESP = (EBP);
  /* 1298819e pop ebp */
  EBP = (pop32());
  /* 1298819f ret  */
  ESPCHK(0x12988070u, _esp0);
  ESP += 4; return;
}

/* FUN_100081a0 @ 0x129881a0 (1565 bytes, 343 insns) */
void f_129881a0(void) {
  FTRACE(0x129881a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129881a0 push ebp */
  push32((uint32_t)(EBP));
  /* 129881a1 mov ebp, esp */
  EBP = (ESP);
  /* 129881a3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129881a9 mov eax, dword ptr [0x129afe24] */
  EAX = (r32((uint32_t)(0x129afe24)));
  /* 129881ae imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129881b1 push eax */
  push32((uint32_t)(EAX));
  /* 129881b2 mov ecx, dword ptr [0x129afe28] */
  ECX = (r32((uint32_t)(0x129afe28)));
  /* 129881b8 push ecx */
  push32((uint32_t)(ECX));
  /* 129881b9 call dword ptr [0x129b02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02ac))), 0x129881bfu);
  /* 129881bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129881c1 je 0x129881cb */
  if (C.zf) goto L_129881cb;
  /* 129881c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 129881c6 jmp 0x129887b9 */
  goto L_129887b9;
L_129881cb:;
  /* 129881cb mov edx, dword ptr [0x129afe28] */
  EDX = (r32((uint32_t)(0x129afe28)));
  /* 129881d1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 129881d7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 129881e1 jmp 0x129881f2 */
  goto L_129881f2;
L_129881e3:;
  /* 129881e3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 129881e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129881ec mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_129881f2:;
  /* 129881f2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 129881f8 cmp ecx, dword ptr [0x129afe24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afe24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129881fe jge 0x129887b7 */
  if ((C.sf==C.of)) goto L_129887b7;
  /* 12988204 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 1298820a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1298820d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 12988213 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 12988218 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 1298821e push ecx */
  push32((uint32_t)(ECX));
  /* 1298821f call dword ptr [0x129b02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02ac))), 0x12988225u);
  /* 12988225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988227 je 0x12988233 */
  if (C.zf) goto L_12988233;
  /* 12988229 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 1298822e jmp 0x129887b9 */
  goto L_129887b9;
L_12988233:;
  /* 12988233 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12988239 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1298823c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 12988242 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 12988248 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298824e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12988251 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12988257 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298825a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298825d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 12988267 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 12988271 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12988278 jmp 0x12988283 */
  goto L_12988283;
L_1298827a:;
  /* 1298827a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298827d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988280 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12988283:;
  /* 12988283 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988287 jge 0x1298877b */
  if ((C.sf==C.of)) goto L_1298877b;
  /* 1298828d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 12988297 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 129882a1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 129882ab mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 129882b5 jmp 0x129882c6 */
  goto L_129882c6;
L_129882b7:;
  /* 129882b7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129882bd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129882c0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_129882c6:;
  /* 129882c6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129882cd jge 0x129882e2 */
  if ((C.sf==C.of)) goto L_129882e2;
  /* 129882cf mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 129882d5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 129882e0 jmp 0x129882b7 */
  goto L_129882b7;
L_129882e2:;
  /* 129882e2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129882e6 jl 0x1298871d */
  if ((C.sf!=C.of)) goto L_1298871d;
  /* 129882ec push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 129882f1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 129882f7 push ecx */
  push32((uint32_t)(ECX));
  /* 129882f8 call dword ptr [0x129b02ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02ac))), 0x129882feu);
  /* 129882fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988300 je 0x1298830c */
  if (C.zf) goto L_1298830c;
  /* 12988302 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 12988307 jmp 0x129887b9 */
  goto L_129887b9;
L_1298830c:;
  /* 1298830c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12988312 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12988315 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 1298831f jmp 0x12988330 */
  goto L_12988330;
L_12988321:;
  /* 12988321 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 12988327 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298832a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_12988330:;
  /* 12988330 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988337 jge 0x129884b4 */
  if ((C.sf==C.of)) goto L_129884b4;
  /* 1298833d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988340 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988343 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 12988349 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 1298834f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988355 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 1298835b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 12988361 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988365 jne 0x12988372 */
  if (!C.zf) goto L_12988372;
  /* 12988367 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 1298836d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988370 je 0x1298837c */
  if (C.zf) goto L_1298837c;
L_12988372:;
  /* 12988372 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 12988377 jmp 0x129887b9 */
  goto L_129887b9;
L_1298837c:;
  /* 1298837c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12988382 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12988384 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 1298838a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 12988390 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 12988396 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 1298839c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1298839f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129883a1 je 0x129883d9 */
  if (C.zf) goto L_129883d9;
  /* 129883a3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 129883a9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129883ac mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 129883b2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129883bc jle 0x129883c8 */
  if ((C.zf||C.sf!=C.of)) goto L_129883c8;
  /* 129883be mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 129883c3 jmp 0x129887b9 */
  goto L_129887b9;
L_129883c8:;
  /* 129883c8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 129883ce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129883d1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 129883d7 jmp 0x1298841b */
  goto L_1298841b;
L_129883d9:;
  /* 129883d9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 129883df sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129883e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129883e5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 129883eb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129883f2 jle 0x129883fe */
  if ((C.zf||C.sf!=C.of)) goto L_129883fe;
  /* 129883f4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_129883fe:;
  /* 129883fe mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12988404 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 1298840b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298840e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12988414 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_1298841b:;
  /* 1298841b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988422 jl 0x1298843d */
  if ((C.sf!=C.of)) goto L_1298843d;
  /* 12988424 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 1298842a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 1298842d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298842f jne 0x1298843d */
  if (!C.zf) goto L_1298843d;
  /* 12988431 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298843b jle 0x12988447 */
  if ((C.zf||C.sf!=C.of)) goto L_12988447;
L_1298843d:;
  /* 1298843d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 12988442 jmp 0x129887b9 */
  goto L_129887b9;
L_12988447:;
  /* 12988447 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 1298844d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988453 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 12988456 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298845c je 0x12988468 */
  if (C.zf) goto L_12988468;
  /* 1298845e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 12988463 jmp 0x129887b9 */
  goto L_129887b9;
L_12988468:;
  /* 12988468 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1298846e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988474 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 1298847a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 12988480 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988486 jb 0x1298837c */
  if (C.cf) goto L_1298837c;
  /* 1298848c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 12988492 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988498 je 0x129884a4 */
  if (C.zf) goto L_129884a4;
  /* 1298849a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 1298849f jmp 0x129887b9 */
  goto L_129887b9;
L_129884a4:;
  /* 129884a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129884a7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129884ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 129884af jmp 0x12988321 */
  goto L_12988321;
L_129884b4:;
  /* 129884b4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129884b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129884b9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129884bf je 0x129884cb */
  if (C.zf) goto L_129884cb;
  /* 129884c1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 129884c6 jmp 0x129887b9 */
  goto L_129887b9;
L_129884cb:;
  /* 129884cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129884ce mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 129884d4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 129884db jmp 0x129884e6 */
  goto L_129884e6;
L_129884dd:;
  /* 129884dd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129884e0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129884e3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_129884e6:;
  /* 129884e6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129884ea jge 0x1298871d */
  if ((C.sf==C.of)) goto L_1298871d;
  /* 129884f0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 129884fa mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 12988500 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_12988506:;
  /* 12988506 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 1298850c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298850f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 12988515 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1298851b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988521 je 0x1298864a */
  if (C.zf) goto L_1298864a;
  /* 12988527 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298852a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 12988530 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988537 je 0x1298864a */
  if (C.zf) goto L_1298864a;
  /* 1298853d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12988543 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988549 jb 0x1298855e */
  if (C.cf) goto L_1298855e;
  /* 1298854b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 12988551 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988556 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298855c jb 0x12988568 */
  if (C.cf) goto L_12988568;
L_1298855e:;
  /* 1298855e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 12988563 jmp 0x129887b9 */
  goto L_129887b9;
L_12988568:;
  /* 12988568 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 1298856e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 12988574 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 1298857a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 12988580 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988583 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12988586 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12988589 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298858e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_12988594:;
  /* 12988594 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12988597 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298859d je 0x129885be */
  if (C.zf) goto L_129885be;
  /* 1298859f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129885a2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129885a8 jne 0x129885ac */
  if (!C.zf) goto L_129885ac;
  /* 129885aa jmp 0x129885be */
  goto L_129885be;
L_129885ac:;
  /* 129885ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129885af mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 129885b1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 129885b4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129885b7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129885b9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 129885bc jmp 0x12988594 */
  goto L_12988594;
L_129885be:;
  /* 129885be mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129885c1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129885c7 jne 0x129885d3 */
  if (!C.zf) goto L_129885d3;
  /* 129885c9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 129885ce jmp 0x129887b9 */
  goto L_129887b9;
L_129885d3:;
  /* 129885d3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 129885d9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 129885db sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129885de sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129885e1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 129885e7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129885ee jle 0x129885fa */
  if ((C.zf||C.sf!=C.of)) goto L_129885fa;
  /* 129885f0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_129885fa:;
  /* 129885fa mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 12988600 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988603 je 0x1298860f */
  if (C.zf) goto L_1298860f;
  /* 12988605 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 1298860a jmp 0x129887b9 */
  goto L_129887b9;
L_1298860f:;
  /* 1298860f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12988615 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 12988618 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298861e je 0x1298862a */
  if (C.zf) goto L_1298862a;
  /* 12988620 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 12988625 jmp 0x129887b9 */
  goto L_129887b9;
L_1298862a:;
  /* 1298862a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 12988630 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 12988636 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 1298863c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298863f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 12988645 jmp 0x12988506 */
  goto L_12988506;
L_1298864a:;
  /* 1298864a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988651 je 0x129886c1 */
  if (C.zf) goto L_129886c1;
  /* 12988653 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988657 jge 0x1298868b */
  if ((C.sf==C.of)) goto L_1298868b;
  /* 12988659 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1298865e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12988661 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12988663 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 12988669 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1298866b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 12988671 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12988676 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12988679 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1298867b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12988681 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 12988683 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 12988689 jmp 0x129886c1 */
  goto L_129886c1;
L_1298868b:;
  /* 1298868b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298868e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12988691 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 12988696 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 12988698 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 1298869e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129886a0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 129886a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 129886a9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129886ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 129886b1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 129886b3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 129886b9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 129886bb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_129886c1:;
  /* 129886c1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 129886c7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 129886ca cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129886d0 jne 0x129886e4 */
  if (!C.zf) goto L_129886e4;
  /* 129886d2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 129886d5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 129886db cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129886e2 je 0x129886ee */
  if (C.zf) goto L_129886ee;
L_129886e4:;
  /* 129886e4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 129886e9 jmp 0x129887b9 */
  goto L_129887b9;
L_129886ee:;
  /* 129886ee mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 129886f4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129886f7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129886fd je 0x12988709 */
  if (C.zf) goto L_12988709;
  /* 129886ff mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 12988704 jmp 0x129887b9 */
  goto L_129887b9;
L_12988709:;
  /* 12988709 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 1298870f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988712 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 12988718 jmp 0x129884dd */
  goto L_129884dd;
L_1298871d:;
  /* 1298871d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988720 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 12988726 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 1298872c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988730 jne 0x1298874a */
  if (!C.zf) goto L_1298874a;
  /* 12988732 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988735 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 1298873b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 12988741 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988748 je 0x12988751 */
  if (C.zf) goto L_12988751;
L_1298874a:;
  /* 1298874a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 1298874f jmp 0x129887b9 */
  goto L_129887b9;
L_12988751:;
  /* 12988751 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 12988757 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298875d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 12988763 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12988766 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298876b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1298876e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988771 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12988773 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12988776 jmp 0x1298827a */
  goto L_1298827a;
L_1298877b:;
  /* 1298877b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12988781 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 12988787 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988789 jne 0x1298879c */
  if (!C.zf) goto L_1298879c;
  /* 1298878b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 12988791 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 12988797 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298879a je 0x129887a3 */
  if (C.zf) goto L_129887a3;
L_1298879c:;
  /* 1298879c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 129887a1 jmp 0x129887b9 */
  goto L_129887b9;
L_129887a3:;
  /* 129887a3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 129887a9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129887ac mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 129887b2 jmp 0x129881e3 */
  goto L_129881e3;
L_129887b7:;
  /* 129887b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_129887b9:;
  /* 129887b9 mov esp, ebp */
  ESP = (EBP);
  /* 129887bb pop ebp */
  EBP = (pop32());
  /* 129887bc ret  */
  ESPCHK(0x129881a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100087c0 @ 0x129887c0 (250 bytes, 92 insns) */
void f_129887c0(void) {
  FTRACE(0x129887c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129887c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129887c1 mov ebp, esp */
  EBP = (ESP);
  /* 129887c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129887c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129887c7 push esi */
  push32((uint32_t)(ESI));
  /* 129887c8 push edi */
  push32((uint32_t)(EDI));
  /* 129887c9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 129887cc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 129887cf lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 129887d2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_129887d5:;
  /* 129887d5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129887d9 jne 0x129887f9 */
  if (!C.zf) goto L_129887f9;
  /* 129887db push 0x129a9db0 */
  push32((uint32_t)(0x129a9db0u));
  /* 129887e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129887e2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 129887e4 push 0x129a9da4 */
  push32((uint32_t)(0x129a9da4u));
  /* 129887e9 push 2 */
  push32((uint32_t)(0x2u));
  /* 129887eb call 0x12981970 */
  push32(0x129887f0u); f_12981970();
  /* 129887f0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129887f3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129887f6 jne 0x129887f9 */
  if (!C.zf) goto L_129887f9;
  /* 129887f8 int3  */
  x86_unimpl("int3 @ 0x129887f8");
L_129887f9:;
  /* 129887f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129887fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 129887fd jne 0x129887d5 */
  if (!C.zf) goto L_129887d5;
L_129887ff:;
  /* 129887ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988803 jne 0x12988823 */
  if (!C.zf) goto L_12988823;
  /* 12988805 push 0x129a9d94 */
  push32((uint32_t)(0x129a9d94u));
  /* 1298880a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298880c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1298880e push 0x129a9da4 */
  push32((uint32_t)(0x129a9da4u));
  /* 12988813 push 2 */
  push32((uint32_t)(0x2u));
  /* 12988815 call 0x12981970 */
  push32(0x1298881au); f_12981970();
  /* 1298881a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298881d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988820 jne 0x12988823 */
  if (!C.zf) goto L_12988823;
  /* 12988822 int3  */
  x86_unimpl("int3 @ 0x12988822");
L_12988823:;
  /* 12988823 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988825 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988827 jne 0x129887ff */
  if (!C.zf) goto L_129887ff;
  /* 12988829 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298882c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 12988833 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988836 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988839 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1298883c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298883f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988842 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 12988844 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988847 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 1298884e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12988851 push ecx */
  push32((uint32_t)(ECX));
  /* 12988852 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12988855 push edx */
  push32((uint32_t)(EDX));
  /* 12988856 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988859 push eax */
  push32((uint32_t)(EAX));
  /* 1298885a call 0x12989840 */
  push32(0x1298885fu); f_12989840();
  /* 1298885f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988862 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12988865 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988868 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1298886b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298886e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988871 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12988874 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988877 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298887b jl 0x1298889f */
  if ((C.sf!=C.of)) goto L_1298889f;
  /* 1298887d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988880 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12988882 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12988885 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12988887 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298888d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 12988890 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988893 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12988895 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988898 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298889b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1298889d jmp 0x129888b0 */
  goto L_129888b0;
L_1298889f:;
  /* 1298889f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 129888a2 push edx */
  push32((uint32_t)(EDX));
  /* 129888a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 129888a5 call 0x129895c0 */
  push32(0x129888aau); f_129895c0();
  /* 129888aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129888ad mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_129888b0:;
  /* 129888b0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 129888b3 pop edi */
  EDI = (pop32());
  /* 129888b4 pop esi */
  ESI = (pop32());
  /* 129888b5 pop ebx */
  EBX = (pop32());
  /* 129888b6 mov esp, ebp */
  ESP = (EBP);
  /* 129888b8 pop ebp */
  EBP = (pop32());
  /* 129888b9 ret  */
  ESPCHK(0x129887c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088c0 @ 0x129888c0 (183 bytes, 58 insns) */
void f_129888c0(void) {
  FTRACE(0x129888c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129888c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129888c1 mov ebp, esp */
  EBP = (ESP);
  /* 129888c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129888c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129888c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129888cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129888d1 ja 0x129888ea */
  if ((!C.cf&&!C.zf)) goto L_129888ea;
  /* 129888d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129888d6 mov edx, dword ptr [0x129acc98] */
  EDX = (r32((uint32_t)(0x129acc98)));
  /* 129888dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129888de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 129888e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 129888e5 jmp 0x12988973 */
  goto L_12988973;
L_129888ea:;
  /* 129888ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129888ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 129888f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129888f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 129888fc mov edx, dword ptr [0x129acc98] */
  EDX = (r32((uint32_t)(0x129acc98)));
  /* 12988902 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988904 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12988908 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1298890d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298890f je 0x12988933 */
  if (C.zf) goto L_12988933;
  /* 12988911 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988914 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12988917 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298891d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 12988920 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 12988923 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 12988926 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 1298892a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 12988931 jmp 0x12988944 */
  goto L_12988944;
L_12988933:;
  /* 12988933 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12988936 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12988939 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 1298893d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_12988944:;
  /* 12988944 push 1 */
  push32((uint32_t)(0x1u));
  /* 12988946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12988948 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298894a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1298894d push ecx */
  push32((uint32_t)(ECX));
  /* 1298894e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988951 push edx */
  push32((uint32_t)(EDX));
  /* 12988952 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 12988955 push eax */
  push32((uint32_t)(EAX));
  /* 12988956 push 1 */
  push32((uint32_t)(0x1u));
  /* 12988958 call 0x1298aae0 */
  push32(0x1298895du); f_1298aae0();
  /* 1298895d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988960 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988962 jne 0x12988968 */
  if (!C.zf) goto L_12988968;
  /* 12988964 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988966 jmp 0x12988973 */
  goto L_12988973;
L_12988968:;
  /* 12988968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298896b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12988970 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_12988973:;
  /* 12988973 mov esp, ebp */
  ESP = (EBP);
  /* 12988975 pop ebp */
  EBP = (pop32());
  /* 12988976 ret  */
  ESPCHK(0x129888c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x12988980 (836 bytes, 238 insns) */
void f_12988980(void) {
  FTRACE(0x12988980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988980 push ebp */
  push32((uint32_t)(EBP));
  /* 12988981 mov ebp, esp */
  EBP = (ESP);
  /* 12988983 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12988986 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12988988 call 0x129862b0 */
  push32(0x1298898du); f_129862b0();
  /* 1298898d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988990 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988993 push eax */
  push32((uint32_t)(EAX));
  /* 12988994 call 0x12988cd0 */
  push32(0x12988999u); f_12988cd0();
  /* 12988999 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298899c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298899f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 129889a2 cmp ecx, dword ptr [0x129afb64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afb64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129889a8 jne 0x129889bb */
  if (!C.zf) goto L_129889bb;
  /* 129889aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129889ac call 0x12986350 */
  push32(0x129889b1u); f_12986350();
  /* 129889b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129889b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129889b6 jmp 0x12988cc0 */
  goto L_12988cc0;
L_129889bb:;
  /* 129889bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129889bf jne 0x129889dc */
  if (!C.zf) goto L_129889dc;
  /* 129889c1 call 0x12988db0 */
  push32(0x129889c6u); f_12988db0();
  /* 129889c6 call 0x12988e30 */
  push32(0x129889cbu); f_12988e30();
  /* 129889cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 129889cd call 0x12986350 */
  push32(0x129889d2u); f_12986350();
  /* 129889d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129889d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129889d7 jmp 0x12988cc0 */
  goto L_12988cc0;
L_129889dc:;
  /* 129889dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129889e3 jmp 0x129889ee */
  goto L_129889ee;
L_129889e5:;
  /* 129889e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129889e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 129889eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_129889ee:;
  /* 129889ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129889f2 jae 0x12988b3f */
  if (!C.cf) goto L_12988b3f;
  /* 129889f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 129889fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129889fe mov ecx, dword ptr [eax + 0x129aceb8] */
  ECX = (r32((uint32_t)(EAX + 0x129aceb8)));
  /* 12988a04 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988a07 jne 0x12988b3a */
  if (!C.zf) goto L_12988b3a;
  /* 12988a0d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12988a14 jmp 0x12988a1f */
  goto L_12988a1f;
L_12988a16:;
  /* 12988a16 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988a19 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988a1c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_12988a1f:;
  /* 12988a1f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988a26 jae 0x12988a34 */
  if (!C.cf) goto L_12988a34;
  /* 12988a28 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988a2b mov byte ptr [eax + 0x129afd00], 0 */
  w8((uint32_t)(EAX + 0x129afd00), (0x0u));
  /* 12988a32 jmp 0x12988a16 */
  goto L_12988a16;
L_12988a34:;
  /* 12988a34 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12988a3b jmp 0x12988a46 */
  goto L_12988a46;
L_12988a3d:;
  /* 12988a3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988a40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988a43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12988a46:;
  /* 12988a46 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988a4a jae 0x12988ac7 */
  if (!C.cf) goto L_12988ac7;
  /* 12988a4c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988a4f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12988a52 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988a55 lea ecx, [edx + eax*8 + 0x129acec8] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x129acec8));
  /* 12988a5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12988a5f jmp 0x12988a6a */
  goto L_12988a6a;
L_12988a61:;
  /* 12988a61 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988a64 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988a67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12988a6a:;
  /* 12988a6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988a6d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12988a6f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12988a71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12988a73 je 0x12988ac2 */
  if (C.zf) goto L_12988ac2;
  /* 12988a75 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988a78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988a7a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12988a7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988a7f je 0x12988ac2 */
  if (C.zf) goto L_12988ac2;
  /* 12988a81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988a84 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988a86 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12988a88 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12988a8b jmp 0x12988a96 */
  goto L_12988a96;
L_12988a8d:;
  /* 12988a8d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988a90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988a93 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12988a96:;
  /* 12988a96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12988a99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988a9b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12988a9e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988aa1 ja 0x12988ac0 */
  if ((!C.cf&&!C.zf)) goto L_12988ac0;
  /* 12988aa3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988aa9 mov dl, byte ptr [eax + 0x129afd01] */
  DL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12988aaf or dl, byte ptr [ecx + 0x129aceb0] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x129aceb0))); DL = (_r); fl_logic(_r,8); }
  /* 12988ab5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988ab8 mov byte ptr [eax + 0x129afd01], dl */
  w8((uint32_t)(EAX + 0x129afd01), (DL));
  /* 12988abe jmp 0x12988a8d */
  goto L_12988a8d;
L_12988ac0:;
  /* 12988ac0 jmp 0x12988a61 */
  goto L_12988a61;
L_12988ac2:;
  /* 12988ac2 jmp 0x12988a3d */
  goto L_12988a3d;
L_12988ac7:;
  /* 12988ac7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988aca mov dword ptr [0x129afb64], ecx */
  w32((uint32_t)(0x129afb64), (ECX));
  /* 12988ad0 mov dword ptr [0x129afbec], 1 */
  w32((uint32_t)(0x129afbec), (0x1u));
  /* 12988ada mov edx, dword ptr [0x129afb64] */
  EDX = (r32((uint32_t)(0x129afb64)));
  /* 12988ae0 push edx */
  push32((uint32_t)(EDX));
  /* 12988ae1 call 0x12988d30 */
  push32(0x12988ae6u); f_12988d30();
  /* 12988ae6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988ae9 mov dword ptr [0x129afe04], eax */
  w32((uint32_t)(0x129afe04), (EAX));
  /* 12988aee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12988af5 jmp 0x12988b00 */
  goto L_12988b00;
L_12988af7:;
  /* 12988af7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988afa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988afd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12988b00:;
  /* 12988b00 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988b04 jae 0x12988b24 */
  if (!C.cf) goto L_12988b24;
  /* 12988b06 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988b09 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12988b0c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988b0f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988b12 mov cx, word ptr [ecx + eax*2 + 0x129acebc] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x129acebc)));
  /* 12988b1a mov word ptr [edx*2 + 0x129afbe0], cx */
  w16((uint32_t)(EDX*2 + 0x129afbe0), (CX));
  /* 12988b22 jmp 0x12988af7 */
  goto L_12988af7;
L_12988b24:;
  /* 12988b24 call 0x12988e30 */
  push32(0x12988b29u); f_12988e30();
  /* 12988b29 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12988b2b call 0x12986350 */
  push32(0x12988b30u); f_12986350();
  /* 12988b30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988b33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988b35 jmp 0x12988cc0 */
  goto L_12988cc0;
L_12988b3a:;
  /* 12988b3a jmp 0x129889e5 */
  goto L_129889e5;
L_12988b3f:;
  /* 12988b3f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 12988b42 push edx */
  push32((uint32_t)(EDX));
  /* 12988b43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988b46 push eax */
  push32((uint32_t)(EAX));
  /* 12988b47 call dword ptr [0x129b02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c0))), 0x12988b4du);
  /* 12988b4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988b50 jne 0x12988c92 */
  if (!C.zf) goto L_12988c92;
  /* 12988b56 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12988b5d jmp 0x12988b68 */
  goto L_12988b68;
L_12988b5f:;
  /* 12988b5f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988b62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988b65 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12988b68:;
  /* 12988b68 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988b6f jae 0x12988b7d */
  if (!C.cf) goto L_12988b7d;
  /* 12988b71 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988b74 mov byte ptr [edx + 0x129afd00], 0 */
  w8((uint32_t)(EDX + 0x129afd00), (0x0u));
  /* 12988b7b jmp 0x12988b5f */
  goto L_12988b5f;
L_12988b7d:;
  /* 12988b7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988b80 mov dword ptr [0x129afb64], eax */
  w32((uint32_t)(0x129afb64), (EAX));
  /* 12988b85 mov dword ptr [0x129afe04], 0 */
  w32((uint32_t)(0x129afe04), (0x0u));
  /* 12988b8f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988b93 jbe 0x12988c4e */
  if ((C.cf||C.zf)) goto L_12988c4e;
  /* 12988b99 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 12988b9c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12988b9f jmp 0x12988baa */
  goto L_12988baa;
L_12988ba1:;
  /* 12988ba1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988ba4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988ba7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_12988baa:;
  /* 12988baa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988bad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12988baf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12988bb1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12988bb3 je 0x12988bfc */
  if (C.zf) goto L_12988bfc;
  /* 12988bb5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988bb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988bba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12988bbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12988bbf je 0x12988bfc */
  if (C.zf) goto L_12988bfc;
  /* 12988bc1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988bc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988bc6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12988bc8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12988bcb jmp 0x12988bd6 */
  goto L_12988bd6;
L_12988bcd:;
  /* 12988bcd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988bd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988bd3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12988bd6:;
  /* 12988bd6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12988bd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988bdb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12988bde cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988be1 ja 0x12988bfa */
  if ((!C.cf&&!C.zf)) goto L_12988bfa;
  /* 12988be3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988be6 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12988bec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 12988bef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988bf2 mov byte ptr [edx + 0x129afd01], cl */
  w8((uint32_t)(EDX + 0x129afd01), (CL));
  /* 12988bf8 jmp 0x12988bcd */
  goto L_12988bcd;
L_12988bfa:;
  /* 12988bfa jmp 0x12988ba1 */
  goto L_12988ba1;
L_12988bfc:;
  /* 12988bfc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 12988c03 jmp 0x12988c0e */
  goto L_12988c0e;
L_12988c05:;
  /* 12988c05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988c08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988c0b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12988c0e:;
  /* 12988c0e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988c15 jae 0x12988c2e */
  if (!C.cf) goto L_12988c2e;
  /* 12988c17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988c1a mov dl, byte ptr [ecx + 0x129afd01] */
  DL = (r8((uint32_t)(ECX + 0x129afd01)));
  /* 12988c20 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 12988c23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12988c26 mov byte ptr [eax + 0x129afd01], dl */
  w8((uint32_t)(EAX + 0x129afd01), (DL));
  /* 12988c2c jmp 0x12988c05 */
  goto L_12988c05;
L_12988c2e:;
  /* 12988c2e mov ecx, dword ptr [0x129afb64] */
  ECX = (r32((uint32_t)(0x129afb64)));
  /* 12988c34 push ecx */
  push32((uint32_t)(ECX));
  /* 12988c35 call 0x12988d30 */
  push32(0x12988c3au); f_12988d30();
  /* 12988c3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988c3d mov dword ptr [0x129afe04], eax */
  w32((uint32_t)(0x129afe04), (EAX));
  /* 12988c42 mov dword ptr [0x129afbec], 1 */
  w32((uint32_t)(0x129afbec), (0x1u));
  /* 12988c4c jmp 0x12988c58 */
  goto L_12988c58;
L_12988c4e:;
  /* 12988c4e mov dword ptr [0x129afbec], 0 */
  w32((uint32_t)(0x129afbec), (0x0u));
L_12988c58:;
  /* 12988c58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12988c5f jmp 0x12988c6a */
  goto L_12988c6a;
L_12988c61:;
  /* 12988c61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988c64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988c67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12988c6a:;
  /* 12988c6a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988c6e jae 0x12988c7f */
  if (!C.cf) goto L_12988c7f;
  /* 12988c70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12988c73 mov word ptr [eax*2 + 0x129afbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x129afbe0), (0x0u));
  /* 12988c7d jmp 0x12988c61 */
  goto L_12988c61;
L_12988c7f:;
  /* 12988c7f call 0x12988e30 */
  push32(0x12988c84u); f_12988e30();
  /* 12988c84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12988c86 call 0x12986350 */
  push32(0x12988c8bu); f_12986350();
  /* 12988c8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988c8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988c90 jmp 0x12988cc0 */
  goto L_12988cc0;
L_12988c92:;
  /* 12988c92 cmp dword ptr [0x129ae678], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae678))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988c99 je 0x12988cb3 */
  if (C.zf) goto L_12988cb3;
  /* 12988c9b call 0x12988db0 */
  push32(0x12988ca0u); f_12988db0();
  /* 12988ca0 call 0x12988e30 */
  push32(0x12988ca5u); f_12988e30();
  /* 12988ca5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12988ca7 call 0x12986350 */
  push32(0x12988cacu); f_12986350();
  /* 12988cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12988cb1 jmp 0x12988cc0 */
  goto L_12988cc0;
L_12988cb3:;
  /* 12988cb3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12988cb5 call 0x12986350 */
  push32(0x12988cbau); f_12986350();
  /* 12988cba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988cbd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12988cc0:;
  /* 12988cc0 mov esp, ebp */
  ESP = (EBP);
  /* 12988cc2 pop ebp */
  EBP = (pop32());
  /* 12988cc3 ret  */
  ESPCHK(0x12988980u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x12988cd0 (89 bytes, 21 insns) */
void f_12988cd0(void) {
  FTRACE(0x12988cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12988cd1 mov ebp, esp */
  EBP = (ESP);
  /* 12988cd3 mov dword ptr [0x129ae678], 0 */
  w32((uint32_t)(0x129ae678), (0x0u));
  /* 12988cdd cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988ce1 jne 0x12988cf5 */
  if (!C.zf) goto L_12988cf5;
  /* 12988ce3 mov dword ptr [0x129ae678], 1 */
  w32((uint32_t)(0x129ae678), (0x1u));
  /* 12988ced call dword ptr [0x129b0308] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0308))), 0x12988cf3u);
  /* 12988cf3 jmp 0x12988d27 */
  goto L_12988d27;
L_12988cf5:;
  /* 12988cf5 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988cf9 jne 0x12988d0d */
  if (!C.zf) goto L_12988d0d;
  /* 12988cfb mov dword ptr [0x129ae678], 1 */
  w32((uint32_t)(0x129ae678), (0x1u));
  /* 12988d05 call dword ptr [0x129b0304] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0304))), 0x12988d0bu);
  /* 12988d0b jmp 0x12988d27 */
  goto L_12988d27;
L_12988d0d:;
  /* 12988d0d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988d11 jne 0x12988d24 */
  if (!C.zf) goto L_12988d24;
  /* 12988d13 mov dword ptr [0x129ae678], 1 */
  w32((uint32_t)(0x129ae678), (0x1u));
  /* 12988d1d mov eax, dword ptr [0x129ae698] */
  EAX = (r32((uint32_t)(0x129ae698)));
  /* 12988d22 jmp 0x12988d27 */
  goto L_12988d27;
L_12988d24:;
  /* 12988d24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12988d27:;
  /* 12988d27 pop ebp */
  EBP = (pop32());
  /* 12988d28 ret  */
  ESPCHK(0x12988cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d30 @ 0x12988d30 (80 bytes, 26 insns) [1 switch table(s)] */
void f_12988d30(void) {
  FTRACE(0x12988d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988d30 push ebp */
  push32((uint32_t)(EBP));
  /* 12988d31 mov ebp, esp */
  EBP = (ESP);
  /* 12988d33 push ecx */
  push32((uint32_t)(ECX));
  /* 12988d34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12988d37 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12988d3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988d3d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12988d43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12988d46 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988d4a ja 0x12988d7a */
  if ((!C.cf&&!C.zf)) goto L_12988d7a;
  /* 12988d4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988d4f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988d51 mov dl, byte ptr [eax + 0x12988d94] */
  DL = (r8((uint32_t)(EAX + 0x12988d94)));
  /* 12988d57 jmp dword ptr [edx*4 + 0x12988d80] */
  switch (EDX) {
    case 0: goto L_12988d5e;
    case 1: goto L_12988d65;
    case 2: goto L_12988d6c;
    case 3: goto L_12988d73;
    case 4: goto L_12988d7a;
    default: x86_unimpl("switch@0x12988d57 out of table"); return;
  }
L_12988d5e:;
  /* 12988d5e mov eax, 0x411 */
  EAX = (0x411u);
  /* 12988d63 jmp 0x12988d7c */
  goto L_12988d7c;
L_12988d65:;
  /* 12988d65 mov eax, 0x804 */
  EAX = (0x804u);
  /* 12988d6a jmp 0x12988d7c */
  goto L_12988d7c;
L_12988d6c:;
  /* 12988d6c mov eax, 0x412 */
  EAX = (0x412u);
  /* 12988d71 jmp 0x12988d7c */
  goto L_12988d7c;
L_12988d73:;
  /* 12988d73 mov eax, 0x404 */
  EAX = (0x404u);
  /* 12988d78 jmp 0x12988d7c */
  goto L_12988d7c;
L_12988d7a:;
  /* 12988d7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12988d7c:;
  /* 12988d7c mov esp, ebp */
  ESP = (EBP);
  /* 12988d7e pop ebp */
  EBP = (pop32());
  /* 12988d7f ret  */
  ESPCHK(0x12988d30u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x12988db0 (116 bytes, 29 insns) */
void f_12988db0(void) {
  FTRACE(0x12988db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988db0 push ebp */
  push32((uint32_t)(EBP));
  /* 12988db1 mov ebp, esp */
  EBP = (ESP);
  /* 12988db3 push ecx */
  push32((uint32_t)(ECX));
  /* 12988db4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12988dbb jmp 0x12988dc6 */
  goto L_12988dc6;
L_12988dbd:;
  /* 12988dbd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988dc0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988dc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12988dc6:;
  /* 12988dc6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988dcd jge 0x12988ddb */
  if ((C.sf==C.of)) goto L_12988ddb;
  /* 12988dcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988dd2 mov byte ptr [ecx + 0x129afd00], 0 */
  w8((uint32_t)(ECX + 0x129afd00), (0x0u));
  /* 12988dd9 jmp 0x12988dbd */
  goto L_12988dbd;
L_12988ddb:;
  /* 12988ddb mov dword ptr [0x129afb64], 0 */
  w32((uint32_t)(0x129afb64), (0x0u));
  /* 12988de5 mov dword ptr [0x129afbec], 0 */
  w32((uint32_t)(0x129afbec), (0x0u));
  /* 12988def mov dword ptr [0x129afe04], 0 */
  w32((uint32_t)(0x129afe04), (0x0u));
  /* 12988df9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12988e00 jmp 0x12988e0b */
  goto L_12988e0b;
L_12988e02:;
  /* 12988e02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988e05 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988e08 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12988e0b:;
  /* 12988e0b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988e0f jge 0x12988e20 */
  if ((C.sf==C.of)) goto L_12988e20;
  /* 12988e11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988e14 mov word ptr [eax*2 + 0x129afbe0], 0 */
  w16((uint32_t)(EAX*2 + 0x129afbe0), (0x0u));
  /* 12988e1e jmp 0x12988e02 */
  goto L_12988e02;
L_12988e20:;
  /* 12988e20 mov esp, ebp */
  ESP = (EBP);
  /* 12988e22 pop ebp */
  EBP = (pop32());
  /* 12988e23 ret  */
  ESPCHK(0x12988db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e30 @ 0x12988e30 (770 bytes, 175 insns) */
void f_12988e30(void) {
  FTRACE(0x12988e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12988e30 push ebp */
  push32((uint32_t)(EBP));
  /* 12988e31 mov ebp, esp */
  EBP = (ESP);
  /* 12988e33 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12988e39 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 12988e3f push eax */
  push32((uint32_t)(EAX));
  /* 12988e40 mov ecx, dword ptr [0x129afb64] */
  ECX = (r32((uint32_t)(0x129afb64)));
  /* 12988e46 push ecx */
  push32((uint32_t)(ECX));
  /* 12988e47 call dword ptr [0x129b02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c0))), 0x12988e4du);
  /* 12988e4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988e50 jne 0x12989069 */
  if (!C.zf) goto L_12989069;
  /* 12988e56 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12988e60 jmp 0x12988e71 */
  goto L_12988e71;
L_12988e62:;
  /* 12988e62 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988e6b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12988e71:;
  /* 12988e71 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988e7b jae 0x12988e92 */
  if (!C.cf) goto L_12988e92;
  /* 12988e7d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988e83 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 12988e89 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 12988e90 jmp 0x12988e62 */
  goto L_12988e62;
L_12988e92:;
  /* 12988e92 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 12988e99 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 12988e9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12988ea2 jmp 0x12988ead */
  goto L_12988ead;
L_12988ea4:;
  /* 12988ea4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988ea7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988eaa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12988ead:;
  /* 12988ead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988eb0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988eb2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12988eb4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12988eb6 je 0x12988ef8 */
  if (C.zf) goto L_12988ef8;
  /* 12988eb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988ebb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12988ebd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12988ebf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 12988ec5 jmp 0x12988ed6 */
  goto L_12988ed6;
L_12988ec7:;
  /* 12988ec7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988ecd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988ed0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_12988ed6:;
  /* 12988ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12988ed9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12988edb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12988ede cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988ee4 ja 0x12988ef6 */
  if ((!C.cf&&!C.zf)) goto L_12988ef6;
  /* 12988ee6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988eec mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 12988ef4 jmp 0x12988ec7 */
  goto L_12988ec7;
L_12988ef6:;
  /* 12988ef6 jmp 0x12988ea4 */
  goto L_12988ea4;
L_12988ef8:;
  /* 12988ef8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12988efa mov eax, dword ptr [0x129afe04] */
  EAX = (r32((uint32_t)(0x129afe04)));
  /* 12988eff push eax */
  push32((uint32_t)(EAX));
  /* 12988f00 mov ecx, dword ptr [0x129afb64] */
  ECX = (r32((uint32_t)(0x129afb64)));
  /* 12988f06 push ecx */
  push32((uint32_t)(ECX));
  /* 12988f07 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 12988f0d push edx */
  push32((uint32_t)(EDX));
  /* 12988f0e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f13 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12988f19 push eax */
  push32((uint32_t)(EAX));
  /* 12988f1a push 1 */
  push32((uint32_t)(0x1u));
  /* 12988f1c call 0x1298aae0 */
  push32(0x12988f21u); f_1298aae0();
  /* 12988f21 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12988f26 mov ecx, dword ptr [0x129afb64] */
  ECX = (r32((uint32_t)(0x129afb64)));
  /* 12988f2c push ecx */
  push32((uint32_t)(ECX));
  /* 12988f2d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f32 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 12988f38 push edx */
  push32((uint32_t)(EDX));
  /* 12988f39 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f3e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 12988f44 push eax */
  push32((uint32_t)(EAX));
  /* 12988f45 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f4a mov ecx, dword ptr [0x129afe04] */
  ECX = (r32((uint32_t)(0x129afe04)));
  /* 12988f50 push ecx */
  push32((uint32_t)(ECX));
  /* 12988f51 call 0x1298aca0 */
  push32(0x12988f56u); f_1298aca0();
  /* 12988f56 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988f59 push 0 */
  push32((uint32_t)(0x0u));
  /* 12988f5b mov edx, dword ptr [0x129afb64] */
  EDX = (r32((uint32_t)(0x129afb64)));
  /* 12988f61 push edx */
  push32((uint32_t)(EDX));
  /* 12988f62 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f67 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 12988f6d push eax */
  push32((uint32_t)(EAX));
  /* 12988f6e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12988f73 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 12988f79 push ecx */
  push32((uint32_t)(ECX));
  /* 12988f7a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 12988f7f mov edx, dword ptr [0x129afe04] */
  EDX = (r32((uint32_t)(0x129afe04)));
  /* 12988f85 push edx */
  push32((uint32_t)(EDX));
  /* 12988f86 call 0x1298aca0 */
  push32(0x12988f8bu); f_1298aca0();
  /* 12988f8b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12988f8e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12988f98 jmp 0x12988fa9 */
  goto L_12988fa9;
L_12988f9a:;
  /* 12988f9a mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988fa0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12988fa3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12988fa9:;
  /* 12988fa9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12988fb3 jae 0x12989064 */
  if (!C.cf) goto L_12989064;
  /* 12988fb9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988fbf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12988fc1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 12988fc9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 12988fcc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12988fce je 0x12989006 */
  if (C.zf) goto L_12989006;
  /* 12988fd0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988fd6 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 12988fdc or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 12988fdf mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988fe5 mov byte ptr [edx + 0x129afd01], cl */
  w8((uint32_t)(EDX + 0x129afd01), (CL));
  /* 12988feb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988ff1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12988ff7 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 12988ffe mov byte ptr [eax + 0x129afc00], dl */
  w8((uint32_t)(EAX + 0x129afc00), (DL));
  /* 12989004 jmp 0x1298905f */
  goto L_1298905f;
L_12989006:;
  /* 12989006 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1298900c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298900e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 12989016 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12989019 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298901b je 0x12989052 */
  if (C.zf) goto L_12989052;
  /* 1298901d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989023 mov al, byte ptr [edx + 0x129afd01] */
  AL = (r8((uint32_t)(EDX + 0x129afd01)));
  /* 12989029 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 1298902b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989031 mov byte ptr [ecx + 0x129afd01], al */
  w8((uint32_t)(ECX + 0x129afd01), (AL));
  /* 12989037 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1298903d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989043 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 1298904a mov byte ptr [edx + 0x129afc00], cl */
  w8((uint32_t)(EDX + 0x129afc00), (CL));
  /* 12989050 jmp 0x1298905f */
  goto L_1298905f;
L_12989052:;
  /* 12989052 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989058 mov byte ptr [edx + 0x129afc00], 0 */
  w8((uint32_t)(EDX + 0x129afc00), (0x0u));
L_1298905f:;
  /* 1298905f jmp 0x12988f9a */
  goto L_12988f9a;
L_12989064:;
  /* 12989064 jmp 0x1298912e */
  goto L_1298912e;
L_12989069:;
  /* 12989069 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 12989073 jmp 0x12989084 */
  goto L_12989084;
L_12989075:;
  /* 12989075 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1298907b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298907e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_12989084:;
  /* 12989084 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298908e jae 0x1298912e */
  if (!C.cf) goto L_1298912e;
  /* 12989094 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298909b jb 0x129890d8 */
  if (C.cf) goto L_129890d8;
  /* 1298909d cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129890a4 ja 0x129890d8 */
  if ((!C.cf&&!C.zf)) goto L_129890d8;
  /* 129890a6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890ac mov dl, byte ptr [ecx + 0x129afd01] */
  DL = (r8((uint32_t)(ECX + 0x129afd01)));
  /* 129890b2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 129890b5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890bb mov byte ptr [eax + 0x129afd01], dl */
  w8((uint32_t)(EAX + 0x129afd01), (DL));
  /* 129890c1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890c7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129890ca mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890d0 mov byte ptr [edx + 0x129afc00], cl */
  w8((uint32_t)(EDX + 0x129afc00), (CL));
  /* 129890d6 jmp 0x12989129 */
  goto L_12989129;
L_129890d8:;
  /* 129890d8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129890df jb 0x1298911c */
  if (C.cf) goto L_1298911c;
  /* 129890e1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129890e8 ja 0x1298911c */
  if ((!C.cf&&!C.zf)) goto L_1298911c;
  /* 129890ea mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890f0 mov cl, byte ptr [eax + 0x129afd01] */
  CL = (r8((uint32_t)(EAX + 0x129afd01)));
  /* 129890f6 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 129890f9 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 129890ff mov byte ptr [edx + 0x129afd01], cl */
  w8((uint32_t)(EDX + 0x129afd01), (CL));
  /* 12989105 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 1298910b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298910e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989114 mov byte ptr [ecx + 0x129afc00], al */
  w8((uint32_t)(ECX + 0x129afc00), (AL));
  /* 1298911a jmp 0x12989129 */
  goto L_12989129;
L_1298911c:;
  /* 1298911c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 12989122 mov byte ptr [edx + 0x129afc00], 0 */
  w8((uint32_t)(EDX + 0x129afc00), (0x0u));
L_12989129:;
  /* 12989129 jmp 0x12989075 */
  goto L_12989075;
L_1298912e:;
  /* 1298912e mov esp, ebp */
  ESP = (EBP);
  /* 12989130 pop ebp */
  EBP = (pop32());
  /* 12989131 ret  */
  ESPCHK(0x12988e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10009140 @ 0x12989140 (23 bytes, 9 insns) */
void f_12989140(void) {
  FTRACE(0x12989140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12989140 push ebp */
  push32((uint32_t)(EBP));
  /* 12989141 mov ebp, esp */
  EBP = (ESP);
  /* 12989143 cmp dword ptr [0x129afbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298914a je 0x12989153 */
  if (C.zf) goto L_12989153;
  /* 1298914c mov eax, dword ptr [0x129afb64] */
  EAX = (r32((uint32_t)(0x129afb64)));
  /* 12989151 jmp 0x12989155 */
  goto L_12989155;
L_12989153:;
  /* 12989153 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12989155:;
  /* 12989155 pop ebp */
  EBP = (pop32());
  /* 12989156 ret  */
  ESPCHK(0x12989140u, _esp0);
  ESP += 4; return;
}

/* FUN_10009160 @ 0x12989160 (34 bytes, 10 insns) */
void f_12989160(void) {
  FTRACE(0x12989160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12989160 push ebp */
  push32((uint32_t)(EBP));
  /* 12989161 mov ebp, esp */
  EBP = (ESP);
  /* 12989163 cmp dword ptr [0x129affb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129affb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298916a jne 0x12989180 */
  if (!C.zf) goto L_12989180;
  /* 1298916c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1298916e call 0x12988980 */
  push32(0x12989173u); f_12988980();
  /* 12989173 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989176 mov dword ptr [0x129affb0], 1 */
  w32((uint32_t)(0x129affb0), (0x1u));
L_12989180:;
  /* 12989180 pop ebp */
  EBP = (pop32());
  /* 12989181 ret  */
  ESPCHK(0x12989160u, _esp0);
  ESP += 4; return;
}

/* FUN_10009190 @ 0x12989190 (664 bytes, 262 insns) [15 switch table(s)] */
void f_12989190(void) {
  FTRACE(0x12989190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12989190 push ebp */
  push32((uint32_t)(EBP));
  /* 12989191 mov ebp, esp */
  EBP = (ESP);
  /* 12989193 push edi */
  push32((uint32_t)(EDI));
  /* 12989194 push esi */
  push32((uint32_t)(ESI));
  /* 12989195 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12989198 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298919b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1298919e mov eax, ecx */
  EAX = (ECX);
  /* 129891a0 mov edx, ecx */
  EDX = (ECX);
  /* 129891a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 129891a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129891a6 jbe 0x129891b0 */
  if ((C.cf||C.zf)) goto L_129891b0;
  /* 129891a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129891aa jb 0x12989328 */
  if (C.cf) goto L_12989328;
L_129891b0:;
  /* 129891b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 129891b6 jne 0x129891cc */
  if (!C.zf) goto L_129891cc;
  /* 129891b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129891bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 129891be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129891c1 jb 0x129891ec */
  if (C.cf) goto L_129891ec;
  /* 129891c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129891c5 jmp dword ptr [edx*4 + 0x129892d8] */
  switch (EDX) {
    case 0: goto L_129892e8;
    case 1: goto L_129892f0;
    case 2: goto L_129892fc;
    case 3: goto L_12989310;
    default: x86_unimpl("switch@0x129891c5 out of table"); return;
  }
L_129891cc:;
  /* 129891cc mov eax, edi */
  EAX = (EDI);
  /* 129891ce mov edx, 3 */
  EDX = (0x3u);
  /* 129891d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129891d6 jb 0x129891e4 */
  if (C.cf) goto L_129891e4;
  /* 129891d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 129891db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129891dd jmp dword ptr [eax*4 + 0x129891f0] */
  switch (EAX) {
    case 1: goto L_12989200;
    case 2: goto L_1298922c;
    case 3: goto L_12989250;
    default: x86_unimpl("switch@0x129891dd out of table"); return;
  }
L_129891e4:;
  /* 129891e4 jmp dword ptr [ecx*4 + 0x129892e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x129892e8)))); return;
  /* 129891eb nop  */
  /* nop */
L_129891ec:;
  /* 129891ec jmp dword ptr [ecx*4 + 0x1298926c] */
  switch (ECX) {
    case 0: goto L_129892cf;
    case 1: goto L_129892bc;
    case 2: goto L_129892b4;
    case 3: goto L_129892ac;
    case 4: goto L_129892a4;
    case 5: goto L_1298929c;
    case 6: goto L_12989294;
    case 7: goto L_1298928c;
    default: x86_unimpl("switch@0x129891ec out of table"); return;
  }
  /* 129891f3 nop  */
  /* nop */
L_12989200:;
  /* 12989200 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12989202 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12989204 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12989206 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12989209 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298920c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298920f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12989212 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12989215 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12989218 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298921b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298921e jb 0x129891ec */
  if (C.cf) goto L_129891ec;
  /* 12989220 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12989222 jmp dword ptr [edx*4 + 0x129892d8] */
  switch (EDX) {
    case 0: goto L_129892e8;
    case 1: goto L_129892f0;
    case 2: goto L_129892fc;
    case 3: goto L_12989310;
    default: x86_unimpl("switch@0x12989222 out of table"); return;
  }
  /* 12989229 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298922c:;
  /* 1298922c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298922e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12989230 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12989232 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12989235 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12989238 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298923b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298923e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12989241 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989244 jb 0x129891ec */
  if (C.cf) goto L_129891ec;
  /* 12989246 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12989248 jmp dword ptr [edx*4 + 0x129892d8] */
  switch (EDX) {
    case 0: goto L_129892e8;
    case 1: goto L_129892f0;
    case 2: goto L_129892fc;
    case 3: goto L_12989310;
    default: x86_unimpl("switch@0x12989248 out of table"); return;
  }
  /* 1298924f nop  */
  /* nop */
L_12989250:;
  /* 12989250 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12989252 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12989254 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12989256 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12989257 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298925a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1298925b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298925e jb 0x129891ec */
  if (C.cf) goto L_129891ec;
  /* 12989260 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12989262 jmp dword ptr [edx*4 + 0x129892d8] */
  switch (EDX) {
    case 0: goto L_129892e8;
    case 1: goto L_129892f0;
    case 2: goto L_129892fc;
    case 3: goto L_12989310;
    default: x86_unimpl("switch@0x12989262 out of table"); return;
  }
  /* 12989269 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298928c:;
  /* 1298928c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 12989290 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_12989294:;
  /* 12989294 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 12989298 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1298929c:;
  /* 1298929c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 129892a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_129892a4:;
  /* 129892a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 129892a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_129892ac:;
  /* 129892ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 129892b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_129892b4:;
  /* 129892b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 129892b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_129892bc:;
  /* 129892bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 129892c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 129892c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 129892cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 129892cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_129892cf:;
  /* 129892cf jmp dword ptr [edx*4 + 0x129892d8] */
  switch (EDX) {
    case 0: goto L_129892e8;
    case 1: goto L_129892f0;
    case 2: goto L_129892fc;
    case 3: goto L_12989310;
    default: x86_unimpl("switch@0x129892cf out of table"); return;
  }
  /* 129892d6 mov edi, edi */
  EDI = (EDI);
L_129892e8:;
  /* 129892e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129892eb pop esi */
  ESI = (pop32());
  /* 129892ec pop edi */
  EDI = (pop32());
  /* 129892ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129892ee ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 129892ef nop  */
  /* nop */
L_129892f0:;
  /* 129892f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129892f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 129892f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129892f7 pop esi */
  ESI = (pop32());
  /* 129892f8 pop edi */
  EDI = (pop32());
  /* 129892f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129892fa ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 129892fb nop  */
  /* nop */
L_129892fc:;
  /* 129892fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 129892fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12989300 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12989303 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 12989306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989309 pop esi */
  ESI = (pop32());
  /* 1298930a pop edi */
  EDI = (pop32());
  /* 1298930b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298930c ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 1298930d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12989310:;
  /* 12989310 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12989312 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 12989314 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 12989317 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298931a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298931d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 12989320 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989323 pop esi */
  ESI = (pop32());
  /* 12989324 pop edi */
  EDI = (pop32());
  /* 12989325 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12989326 ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 12989327 nop  */
  /* nop */
L_12989328:;
  /* 12989328 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1298932c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 12989330 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 12989336 jne 0x1298935c */
  if (!C.zf) goto L_1298935c;
  /* 12989338 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298933b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1298933e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989341 jb 0x12989350 */
  if (C.cf) goto L_12989350;
  /* 12989343 std  */
  C.df=1;
  /* 12989344 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 12989346 cld  */
  C.df=0;
  /* 12989347 jmp dword ptr [edx*4 + 0x12989470] */
  switch (EDX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x12989347 out of table"); return;
  }
  /* 1298934e mov edi, edi */
  EDI = (EDI);
L_12989350:;
  /* 12989350 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12989352 jmp dword ptr [ecx*4 + 0x12989420] */
  switch (ECX) {
    case 0: goto L_12989467;
    default: x86_unimpl("switch@0x12989352 out of table"); return;
  }
  /* 12989359 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298935c:;
  /* 1298935c mov eax, edi */
  EAX = (EDI);
  /* 1298935e mov edx, 3 */
  EDX = (0x3u);
  /* 12989363 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989366 jb 0x12989374 */
  if (C.cf) goto L_12989374;
  /* 12989368 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1298936b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298936d jmp dword ptr [eax*4 + 0x12989378] */
  switch (EAX) {
    case 1: goto L_12989388;
    case 2: goto L_129893a8;
    case 3: goto L_129893d0;
    default: x86_unimpl("switch@0x1298936d out of table"); return;
  }
L_12989374:;
  /* 12989374 jmp dword ptr [ecx*4 + 0x12989470] */
  switch (ECX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x12989374 out of table"); return;
  }
  /* 1298937b nop  */
  /* nop */
L_12989388:;
  /* 12989388 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298938b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298938d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 12989390 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 12989391 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 12989394 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 12989395 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989398 jb 0x12989350 */
  if (C.cf) goto L_12989350;
  /* 1298939a std  */
  C.df=1;
  /* 1298939b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298939d cld  */
  C.df=0;
  /* 1298939e jmp dword ptr [edx*4 + 0x12989470] */
  switch (EDX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x1298939e out of table"); return;
  }
  /* 129893a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_129893a8:;
  /* 129893a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129893ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129893ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129893b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129893b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129893b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129893b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129893bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129893bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129893c2 jb 0x12989350 */
  if (C.cf) goto L_12989350;
  /* 129893c4 std  */
  C.df=1;
  /* 129893c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129893c7 cld  */
  C.df=0;
  /* 129893c8 jmp dword ptr [edx*4 + 0x12989470] */
  switch (EDX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x129893c8 out of table"); return;
  }
  /* 129893cf nop  */
  /* nop */
L_129893d0:;
  /* 129893d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129893d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 129893d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129893d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129893db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129893de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129893e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 129893e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129893e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129893ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 129893ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129893f0 jb 0x12989350 */
  if (C.cf) goto L_12989350;
  /* 129893f6 std  */
  C.df=1;
  /* 129893f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 129893f9 cld  */
  C.df=0;
  /* 129893fa jmp dword ptr [edx*4 + 0x12989470] */
  switch (EDX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x129893fa out of table"); return;
  }
  /* 12989401 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 12989404 and al, 0x94 */
  { uint32_t _r=(AL)&(0x94u); AL = (_r); fl_logic(_r,8); }
  /* 12989406 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 12989407 adc ch, byte ptr [esp + edx*4] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(ESP + EDX*4))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1298940a cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1298940b adc dh, byte ptr [esp + edx*4] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(ESP + EDX*4))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1298940e cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1298940f adc bh, byte ptr [esp + edx*4] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(ESP + EDX*4))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 12989412 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 12989413 adc al, byte ptr [esp + edx*4 - 0x68] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ESP + EDX*4 + -0x68))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12989417 adc cl, byte ptr [esp + edx*4 - 0x68] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(ESP + EDX*4 + -0x68))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298941b adc dl, byte ptr [esp + edx*4 - 0x68] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(ESP + EDX*4 + -0x68))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12989424 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 12989428 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1298942c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 12989430 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 12989434 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 12989438 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1298943c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 12989440 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 12989444 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 12989448 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1298944c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 12989450 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 12989454 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 12989458 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1298945c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 12989463 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12989465 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_12989467:;
  /* 12989467 jmp dword ptr [edx*4 + 0x12989470] */
  switch (EDX) {
    case 0: goto L_12989480;
    case 1: goto L_12989488;
    case 2: goto L_12989498;
    case 3: goto L_129894ac;
    default: x86_unimpl("switch@0x12989467 out of table"); return;
  }
  /* 1298946e mov edi, edi */
  EDI = (EDI);
L_12989480:;
  /* 12989480 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989483 pop esi */
  ESI = (pop32());
  /* 12989484 pop edi */
  EDI = (pop32());
  /* 12989485 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12989486 ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 12989487 nop  */
  /* nop */
L_12989488:;
  /* 12989488 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298948b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298948e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989491 pop esi */
  ESI = (pop32());
  /* 12989492 pop edi */
  EDI = (pop32());
  /* 12989493 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12989494 ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 12989495 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12989498:;
  /* 12989498 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298949b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298949e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129894a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129894a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129894a7 pop esi */
  ESI = (pop32());
  /* 129894a8 pop edi */
  EDI = (pop32());
  /* 129894a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129894aa ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
  /* 129894ab nop  */
  /* nop */
L_129894ac:;
  /* 129894ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 129894af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 129894b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 129894b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 129894b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 129894bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 129894be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 129894c1 pop esi */
  ESI = (pop32());
  /* 129894c2 pop edi */
  EDI = (pop32());
  /* 129894c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 129894c4 ret  */
  ESPCHK(0x12989190u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x129894d0 (104 bytes, 43 insns) */
void f_129894d0(void) {
  FTRACE(0x129894d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129894d0 push ebx */
  push32((uint32_t)(EBX));
  /* 129894d1 push esi */
  push32((uint32_t)(ESI));
  /* 129894d2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 129894d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129894d8 jne 0x129894f2 */
  if (!C.zf) goto L_129894f2;
  /* 129894da mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 129894de mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 129894e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 129894e4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129894e6 mov ebx, eax */
  EBX = (EAX);
  /* 129894e8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 129894ec div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 129894ee mov edx, ebx */
  EDX = (EBX);
  /* 129894f0 jmp 0x12989533 */
  goto L_12989533;
L_129894f2:;
  /* 129894f2 mov ecx, eax */
  ECX = (EAX);
  /* 129894f4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 129894f8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 129894fc mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_12989500:;
  /* 12989500 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12989502 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12989504 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12989506 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12989508 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298950a jne 0x12989500 */
  if (!C.zf) goto L_12989500;
  /* 1298950c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1298950e mov esi, eax */
  ESI = (EAX);
  /* 12989510 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12989514 mov ecx, eax */
  ECX = (EAX);
  /* 12989516 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1298951a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1298951c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298951e jb 0x1298952e */
  if (C.cf) goto L_1298952e;
  /* 12989520 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989524 ja 0x1298952e */
  if ((!C.cf&&!C.zf)) goto L_1298952e;
  /* 12989526 jb 0x1298952f */
  if (C.cf) goto L_1298952f;
  /* 12989528 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298952c jbe 0x1298952f */
  if ((C.cf||C.zf)) goto L_1298952f;
L_1298952e:;
  /* 1298952e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_1298952f:;
  /* 1298952f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12989531 mov eax, esi */
  EAX = (ESI);
L_12989533:;
  /* 12989533 pop esi */
  ESI = (pop32());
  /* 12989534 pop ebx */
  EBX = (pop32());
  /* 12989535 ret 0x10 */
  ESPCHK(0x129894d0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x12989540 (117 bytes, 44 insns) */
void f_12989540(void) {
  FTRACE(0x12989540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12989540 push ebx */
  push32((uint32_t)(EBX));
  /* 12989541 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 12989545 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989547 jne 0x12989561 */
  if (!C.zf) goto L_12989561;
  /* 12989549 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 1298954d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 12989551 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12989553 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12989555 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12989559 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1298955b mov eax, edx */
  EAX = (EDX);
  /* 1298955d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298955f jmp 0x129895b1 */
  goto L_129895b1;
L_12989561:;
  /* 12989561 mov ecx, eax */
  ECX = (EAX);
  /* 12989563 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 12989567 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 1298956b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_1298956f:;
  /* 1298956f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 12989571 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 12989573 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12989575 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 12989577 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12989579 jne 0x1298956f */
  if (!C.zf) goto L_1298956f;
  /* 1298957b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1298957d mov ecx, eax */
  ECX = (EAX);
  /* 1298957f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12989583 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 12989584 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12989588 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298958a jb 0x1298959a */
  if (C.cf) goto L_1298959a;
  /* 1298958c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989590 ja 0x1298959a */
  if ((!C.cf&&!C.zf)) goto L_1298959a;
  /* 12989592 jb 0x129895a2 */
  if (C.cf) goto L_129895a2;
  /* 12989594 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989598 jbe 0x129895a2 */
  if ((C.cf||C.zf)) goto L_129895a2;
L_1298959a:;
  /* 1298959a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298959e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129895a2:;
  /* 129895a2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129895a6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129895aa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 129895ac neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 129895ae sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_129895b1:;
  /* 129895b1 pop ebx */
  EBX = (pop32());
  /* 129895b2 ret 0x10 */
  ESPCHK(0x12989540u, _esp0);
  ESP += 20; return;
}

/* FUN_100095c0 @ 0x129895c0 (628 bytes, 214 insns) */
void f_129895c0(void) {
  FTRACE(0x129895c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 129895c0 push ebp */
  push32((uint32_t)(EBP));
  /* 129895c1 mov ebp, esp */
  EBP = (ESP);
  /* 129895c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 129895c6 push ebx */
  push32((uint32_t)(EBX));
  /* 129895c7 push esi */
  push32((uint32_t)(ESI));
  /* 129895c8 push edi */
  push32((uint32_t)(EDI));
L_129895c9:;
  /* 129895c9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129895cd jne 0x129895ed */
  if (!C.zf) goto L_129895ed;
  /* 129895cf push 0x129a9e5c */
  push32((uint32_t)(0x129a9e5cu));
  /* 129895d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 129895d6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 129895d8 push 0x129a9e50 */
  push32((uint32_t)(0x129a9e50u));
  /* 129895dd push 2 */
  push32((uint32_t)(0x2u));
  /* 129895df call 0x12981970 */
  push32(0x129895e4u); f_12981970();
  /* 129895e4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129895e7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129895ea jne 0x129895ed */
  if (!C.zf) goto L_129895ed;
  /* 129895ec int3  */
  x86_unimpl("int3 @ 0x129895ec");
L_129895ed:;
  /* 129895ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 129895ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129895f1 jne 0x129895c9 */
  if (!C.zf) goto L_129895c9;
  /* 129895f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 129895f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 129895f9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129895fc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 129895ff mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12989602 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989605 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12989608 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 1298960e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989610 je 0x1298961f */
  if (C.zf) goto L_1298961f;
  /* 12989612 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989615 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12989618 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 1298961b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298961d je 0x12989635 */
  if (C.zf) goto L_12989635;
L_1298961f:;
  /* 1298961f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989622 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12989625 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12989627 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298962a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 1298962d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12989630 jmp 0x1298982d */
  goto L_1298982d;
L_12989635:;
  /* 12989635 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989638 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1298963b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1298963e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989640 je 0x1298968c */
  if (C.zf) goto L_1298968c;
  /* 12989642 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989645 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1298964c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298964f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 12989652 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 12989655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989657 je 0x12989675 */
  if (C.zf) goto L_12989675;
  /* 12989659 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298965c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298965f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12989662 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12989664 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989667 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298966a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 1298966d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989670 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12989673 jmp 0x1298968c */
  goto L_1298968c;
L_12989675:;
  /* 12989675 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989678 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298967b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1298967e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989681 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12989684 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12989687 jmp 0x1298982d */
  goto L_1298982d;
L_1298968c:;
  /* 1298968c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298968f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12989692 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12989695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989698 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1298969b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298969e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 129896a1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 129896a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129896a7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 129896aa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129896ad mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 129896b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129896bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129896be mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129896c1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129896c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 129896c7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 129896cd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 129896cf jne 0x129896ff */
  if (!C.zf) goto L_129896ff;
  /* 129896d1 cmp dword ptr [ebp - 8], 0x129ad140 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x129ad140u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129896d8 je 0x129896e3 */
  if (C.zf) goto L_129896e3;
  /* 129896da cmp dword ptr [ebp - 8], 0x129ad160 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x129ad160u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129896e1 jne 0x129896f3 */
  if (!C.zf) goto L_129896f3;
L_129896e3:;
  /* 129896e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 129896e6 push edx */
  push32((uint32_t)(EDX));
  /* 129896e7 call 0x1298b530 */
  push32(0x129896ecu); f_1298b530();
  /* 129896ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 129896ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129896f1 jne 0x129896ff */
  if (!C.zf) goto L_129896ff;
L_129896f3:;
  /* 129896f3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 129896f6 push eax */
  push32((uint32_t)(EAX));
  /* 129896f7 call 0x1298b460 */
  push32(0x129896fcu); f_1298b460();
  /* 129896fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129896ff:;
  /* 129896ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989702 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12989705 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 1298970b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298970d je 0x129897eb */
  if (C.zf) goto L_129897eb;
L_12989713:;
  /* 12989713 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989716 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989719 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1298971b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298971e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989720 jge 0x12989743 */
  if ((C.sf==C.of)) goto L_12989743;
  /* 12989722 push 0x129a9e10 */
  push32((uint32_t)(0x129a9e10u));
  /* 12989727 push 0 */
  push32((uint32_t)(0x0u));
  /* 12989729 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 1298972e push 0x129a9e50 */
  push32((uint32_t)(0x129a9e50u));
  /* 12989733 push 2 */
  push32((uint32_t)(0x2u));
  /* 12989735 call 0x12981970 */
  push32(0x1298973au); f_12981970();
  /* 1298973a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298973d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989740 jne 0x12989743 */
  if (!C.zf) goto L_12989743;
  /* 12989742 int3  */
  x86_unimpl("int3 @ 0x12989742");
L_12989743:;
  /* 12989743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989745 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989747 jne 0x12989713 */
  if (!C.zf) goto L_12989713;
  /* 12989749 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298974c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298974f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 12989751 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989754 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12989757 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298975a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1298975d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989760 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989763 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12989765 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989768 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1298976b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298976e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989771 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 12989774 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989778 jle 0x12989796 */
  if ((C.zf||C.sf!=C.of)) goto L_12989796;
  /* 1298977a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298977d push ecx */
  push32((uint32_t)(ECX));
  /* 1298977e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989781 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12989784 push eax */
  push32((uint32_t)(EAX));
  /* 12989785 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12989788 push ecx */
  push32((uint32_t)(ECX));
  /* 12989789 call 0x1298b150 */
  push32(0x1298978eu); f_1298b150();
  /* 1298978e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989791 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12989794 jmp 0x129897de */
  goto L_129897de;
L_12989796:;
  /* 12989796 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298979a je 0x129897b9 */
  if (C.zf) goto L_129897b9;
  /* 1298979c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298979f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 129897a2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 129897a5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 129897a8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 129897ab mov ecx, dword ptr [edx*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 129897b2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 129897b4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 129897b7 jmp 0x129897c0 */
  goto L_129897c0;
L_129897b9:;
  /* 129897b9 mov dword ptr [ebp - 0x14], 0x129aca60 */
  w32((uint32_t)(EBP + -0x14), (0x129aca60u));
L_129897c0:;
  /* 129897c0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 129897c3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 129897c7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 129897ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 129897cc je 0x129897de */
  if (C.zf) goto L_129897de;
  /* 129897ce push 2 */
  push32((uint32_t)(0x2u));
  /* 129897d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 129897d2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129897d5 push ecx */
  push32((uint32_t)(ECX));
  /* 129897d6 call 0x1298b000 */
  push32(0x129897dbu); f_1298b000();
  /* 129897db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_129897de:;
  /* 129897de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 129897e1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 129897e4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 129897e7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 129897e9 jmp 0x12989809 */
  goto L_12989809;
L_129897eb:;
  /* 129897eb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 129897f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 129897f5 push edx */
  push32((uint32_t)(EDX));
  /* 129897f6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 129897f9 push eax */
  push32((uint32_t)(EAX));
  /* 129897fa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 129897fd push ecx */
  push32((uint32_t)(ECX));
  /* 129897fe call 0x1298b150 */
  push32(0x12989803u); f_1298b150();
  /* 12989803 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989806 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_12989809:;
  /* 12989809 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298980c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298980f je 0x12989825 */
  if (C.zf) goto L_12989825;
  /* 12989811 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989814 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12989817 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1298981a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298981d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 12989820 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12989823 jmp 0x1298982d */
  goto L_1298982d;
L_12989825:;
  /* 12989825 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989828 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_1298982d:;
  /* 1298982d pop edi */
  EDI = (pop32());
  /* 1298982e pop esi */
  ESI = (pop32());
  /* 1298982f pop ebx */
  EBX = (pop32());
  /* 12989830 mov esp, ebp */
  ESP = (EBP);
  /* 12989832 pop ebp */
  EBP = (pop32());
  /* 12989833 ret  */
  ESPCHK(0x129895c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009840 @ 0x12989840 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_12989840(void) {
  FTRACE(0x12989840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12989840 push ebp */
  push32((uint32_t)(EBP));
  /* 12989841 mov ebp, esp */
  EBP = (ESP);
  /* 12989843 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989849 push ebx */
  push32((uint32_t)(EBX));
  /* 1298984a push esi */
  push32((uint32_t)(ESI));
  /* 1298984b push edi */
  push32((uint32_t)(EDI));
  /* 1298984c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12989853 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 1298985d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_12989864:;
  /* 12989864 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989867 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12989869 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 1298986c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989870 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989873 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989876 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 12989879 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298987b je 0x1298a457 */
  if (C.zf) goto L_1298a457;
  /* 12989881 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989888 jl 0x1298a457 */
  if ((C.sf!=C.of)) goto L_1298a457;
  /* 1298988e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989892 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989895 jl 0x129898b6 */
  if ((C.sf!=C.of)) goto L_129898b6;
  /* 12989897 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1298989b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298989e jg 0x129898b6 */
  if ((!C.zf&&C.sf==C.of)) goto L_129898b6;
  /* 129898a0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129898a4 movsx ecx, byte ptr [eax + 0x129a9e48] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x129a9e48))));
  /* 129898ab and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 129898ae mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 129898b4 jmp 0x129898c0 */
  goto L_129898c0;
L_129898b6:;
  /* 129898b6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_129898c0:;
  /* 129898c0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 129898c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 129898c9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 129898cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 129898cf movsx edx, byte ptr [ecx + eax*8 + 0x129a9e68] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x129a9e68))));
  /* 129898d7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 129898da mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 129898dd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 129898e0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 129898e6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129898ed ja 0x1298a452 */
  if ((!C.cf&&!C.zf)) goto L_1298a452;
  /* 129898f3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 129898f9 jmp dword ptr [ecx*4 + 0x1298a464] */
  switch (ECX) {
    case 0: goto L_12989900;
    case 1: goto L_1298999a;
    case 2: goto L_129899dc;
    case 3: goto L_12989a4b;
    case 4: goto L_12989aa3;
    case 5: goto L_12989ab2;
    case 6: goto L_12989afe;
    case 7: goto L_12989b91;
    case 8: goto L_12989a28;
    case 9: goto L_12989a33;
    case 10: goto L_12989a1e;
    case 11: goto L_12989a13;
    case 12: goto L_12989a3e;
    case 13: goto L_12989a46;
    default: x86_unimpl("switch@0x129898f9 out of table"); return;
  }
L_12989900:;
  /* 12989900 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12989907 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298990a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12989910 mov eax, dword ptr [0x129acc98] */
  EAX = (r32((uint32_t)(0x129acc98)));
  /* 12989915 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12989917 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 1298991b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12989921 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12989923 je 0x1298997d */
  if (C.zf) goto L_1298997d;
  /* 12989925 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 1298992b push edx */
  push32((uint32_t)(EDX));
  /* 1298992c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298992f push eax */
  push32((uint32_t)(EAX));
  /* 12989930 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989934 push ecx */
  push32((uint32_t)(ECX));
  /* 12989935 call 0x1298a570 */
  push32(0x1298993au); f_1298a570();
  /* 1298993a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298993d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989940 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12989942 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 12989945 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989948 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298994b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_1298994e:;
  /* 1298994e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989952 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989954 jne 0x12989977 */
  if (!C.zf) goto L_12989977;
  /* 12989956 push 0x129a9ee8 */
  push32((uint32_t)(0x129a9ee8u));
  /* 1298995b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298995d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 12989962 push 0x129a9edc */
  push32((uint32_t)(0x129a9edcu));
  /* 12989967 push 2 */
  push32((uint32_t)(0x2u));
  /* 12989969 call 0x12981970 */
  push32(0x1298996eu); f_12981970();
  /* 1298996e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989974 jne 0x12989977 */
  if (!C.zf) goto L_12989977;
  /* 12989976 int3  */
  x86_unimpl("int3 @ 0x12989976");
L_12989977:;
  /* 12989977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298997b jne 0x1298994e */
  if (!C.zf) goto L_1298994e;
L_1298997d:;
  /* 1298997d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 12989983 push ecx */
  push32((uint32_t)(ECX));
  /* 12989984 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12989987 push edx */
  push32((uint32_t)(EDX));
  /* 12989988 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 1298998c push eax */
  push32((uint32_t)(EAX));
  /* 1298998d call 0x1298a570 */
  push32(0x12989992u); f_1298a570();
  /* 12989992 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989995 jmp 0x1298a452 */
  goto L_1298a452;
L_1298999a:;
  /* 1298999a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 129899a1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 129899a4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 129899aa mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 129899b0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 129899b6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 129899bc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 129899bf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 129899c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 129899d0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 129899d7 jmp 0x1298a452 */
  goto L_1298a452;
L_129899dc:;
  /* 129899dc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 129899e0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 129899e6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 129899ec sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 129899ef mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 129899f5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 129899fc ja 0x12989a46 */
  if ((!C.cf&&!C.zf)) goto L_12989a46;
  /* 129899fe mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 12989a04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989a06 mov al, byte ptr [ecx + 0x1298a49c] */
  AL = (r8((uint32_t)(ECX + 0x1298a49c)));
  /* 12989a0c jmp dword ptr [eax*4 + 0x1298a484] */
  switch (EAX) {
    case 0: goto L_12989a28;
    case 1: goto L_12989a33;
    case 2: goto L_12989a1e;
    case 3: goto L_12989a13;
    case 4: goto L_12989a3e;
    case 5: goto L_12989a46;
    default: x86_unimpl("switch@0x12989a0c out of table"); return;
  }
L_12989a13:;
  /* 12989a13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a16 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12989a19 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12989a1c jmp 0x12989a46 */
  goto L_12989a46;
L_12989a1e:;
  /* 12989a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a21 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12989a23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12989a26 jmp 0x12989a46 */
  goto L_12989a46;
L_12989a28:;
  /* 12989a28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a2b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 12989a2e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12989a31 jmp 0x12989a46 */
  goto L_12989a46;
L_12989a33:;
  /* 12989a33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a36 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 12989a39 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12989a3c jmp 0x12989a46 */
  goto L_12989a46;
L_12989a3e:;
  /* 12989a3e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a41 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 12989a43 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12989a46:;
  /* 12989a46 jmp 0x1298a452 */
  goto L_1298a452;
L_12989a4b:;
  /* 12989a4b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989a4f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989a52 jne 0x12989a87 */
  if (!C.zf) goto L_12989a87;
  /* 12989a54 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12989a57 push edx */
  push32((uint32_t)(EDX));
  /* 12989a58 call 0x1298a680 */
  push32(0x12989a5du); f_1298a680();
  /* 12989a5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989a60 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 12989a66 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989a6d jge 0x12989a85 */
  if ((C.sf==C.of)) goto L_12989a85;
  /* 12989a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989a72 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12989a74 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12989a77 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 12989a7d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12989a7f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12989a85:;
  /* 12989a85 jmp 0x12989a9e */
  goto L_12989a9e;
L_12989a87:;
  /* 12989a87 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 12989a8d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12989a90 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989a94 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 12989a98 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_12989a9e:;
  /* 12989a9e jmp 0x1298a452 */
  goto L_1298a452;
L_12989aa3:;
  /* 12989aa3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 12989aad jmp 0x1298a452 */
  goto L_1298a452;
L_12989ab2:;
  /* 12989ab2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989ab6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989ab9 jne 0x12989ae2 */
  if (!C.zf) goto L_12989ae2;
  /* 12989abb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12989abe push eax */
  push32((uint32_t)(EAX));
  /* 12989abf call 0x1298a680 */
  push32(0x12989ac4u); f_1298a680();
  /* 12989ac4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989ac7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 12989acd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989ad4 jge 0x12989ae0 */
  if ((C.sf==C.of)) goto L_12989ae0;
  /* 12989ad6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_12989ae0:;
  /* 12989ae0 jmp 0x12989af9 */
  goto L_12989af9;
L_12989ae2:;
  /* 12989ae2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 12989ae8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12989aeb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989aef lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12989af3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_12989af9:;
  /* 12989af9 jmp 0x1298a452 */
  goto L_1298a452;
L_12989afe:;
  /* 12989afe movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989b02 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 12989b08 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12989b0e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989b11 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 12989b17 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989b1e ja 0x12989b8c */
  if ((!C.cf&&!C.zf)) goto L_12989b8c;
  /* 12989b20 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 12989b26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989b28 mov al, byte ptr [ecx + 0x1298a4c1] */
  AL = (r8((uint32_t)(ECX + 0x1298a4c1)));
  /* 12989b2e jmp dword ptr [eax*4 + 0x1298a4ad] */
  switch (EAX) {
    case 0: goto L_12989b40;
    case 1: goto L_12989b79;
    case 2: goto L_12989b35;
    case 3: goto L_12989b83;
    case 4: goto L_12989b8c;
    default: x86_unimpl("switch@0x12989b2e out of table"); return;
  }
L_12989b35:;
  /* 12989b35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989b38 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 12989b3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12989b3e jmp 0x12989b8c */
  goto L_12989b8c;
L_12989b40:;
  /* 12989b40 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989b43 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12989b46 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989b49 jne 0x12989b6b */
  if (!C.zf) goto L_12989b6b;
  /* 12989b4b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989b4e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12989b52 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989b55 jne 0x12989b6b */
  if (!C.zf) goto L_12989b6b;
  /* 12989b57 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12989b5a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989b5d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12989b60 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989b63 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12989b66 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12989b69 jmp 0x12989b77 */
  goto L_12989b77;
L_12989b6b:;
  /* 12989b6b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 12989b72 jmp 0x12989900 */
  goto L_12989900;
L_12989b77:;
  /* 12989b77 jmp 0x12989b8c */
  goto L_12989b8c;
L_12989b79:;
  /* 12989b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989b7c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 12989b7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12989b81 jmp 0x12989b8c */
  goto L_12989b8c;
L_12989b83:;
  /* 12989b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989b86 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12989b89 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12989b8c:;
  /* 12989b8c jmp 0x1298a452 */
  goto L_1298a452;
L_12989b91:;
  /* 12989b91 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989b95 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 12989b9b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12989ba1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989ba4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 12989baa cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989bb1 ja 0x1298a277 */
  if ((!C.cf&&!C.zf)) goto L_1298a277;
  /* 12989bb7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 12989bbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12989bbf mov cl, byte ptr [edx + 0x1298a52c] */
  CL = (r8((uint32_t)(EDX + 0x1298a52c)));
  /* 12989bc5 jmp dword ptr [ecx*4 + 0x1298a4f0] */
  switch (ECX) {
    case 0: goto L_12989bcc;
    case 1: goto L_12989e60;
    case 2: goto L_12989cf0;
    case 3: goto L_12989f99;
    case 4: goto L_12989c5b;
    case 5: goto L_12989be1;
    case 6: goto L_12989f6b;
    case 7: goto L_12989e70;
    case 8: goto L_12989e15;
    case 9: goto L_12989fe5;
    case 10: goto L_12989f8f;
    case 11: goto L_12989d06;
    case 12: goto L_12989f83;
    case 13: goto L_12989fa5;
    case 14: goto L_1298a277;
    default: x86_unimpl("switch@0x12989bc5 out of table"); return;
  }
L_12989bcc:;
  /* 12989bcc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989bcf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 12989bd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989bd6 jne 0x12989be1 */
  if (!C.zf) goto L_12989be1;
  /* 12989bd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989bdb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12989bde mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12989be1:;
  /* 12989be1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989be4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 12989bea test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989bec je 0x12989c27 */
  if (C.zf) goto L_12989c27;
  /* 12989bee lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12989bf1 push eax */
  push32((uint32_t)(EAX));
  /* 12989bf2 call 0x1298a6c0 */
  push32(0x12989bf7u); f_1298a6c0();
  /* 12989bf7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989bfa mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 12989bfe mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 12989c02 push ecx */
  push32((uint32_t)(ECX));
  /* 12989c03 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12989c09 push edx */
  push32((uint32_t)(EDX));
  /* 12989c0a call 0x1298b7a0 */
  push32(0x12989c0fu); f_1298b7a0();
  /* 12989c0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989c12 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12989c15 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989c19 jge 0x12989c25 */
  if ((C.sf==C.of)) goto L_12989c25;
  /* 12989c1b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_12989c25:;
  /* 12989c25 jmp 0x12989c4d */
  goto L_12989c4d;
L_12989c27:;
  /* 12989c27 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12989c2a push eax */
  push32((uint32_t)(EAX));
  /* 12989c2b call 0x1298a680 */
  push32(0x12989c30u); f_1298a680();
  /* 12989c30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989c33 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 12989c3a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 12989c40 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 12989c46 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_12989c4d:;
  /* 12989c4d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 12989c53 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12989c56 jmp 0x1298a277 */
  goto L_1298a277;
L_12989c5b:;
  /* 12989c5b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 12989c5e push eax */
  push32((uint32_t)(EAX));
  /* 12989c5f call 0x1298a680 */
  push32(0x12989c64u); f_1298a680();
  /* 12989c64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989c67 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 12989c6d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989c74 je 0x12989c82 */
  if (C.zf) goto L_12989c82;
  /* 12989c76 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12989c7c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989c80 jne 0x12989c9c */
  if (!C.zf) goto L_12989c9c;
L_12989c82:;
  /* 12989c82 mov edx, dword ptr [0x129acfb0] */
  EDX = (r32((uint32_t)(0x129acfb0)));
  /* 12989c88 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12989c8b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989c8e push eax */
  push32((uint32_t)(EAX));
  /* 12989c8f call 0x129856e0 */
  push32(0x12989c94u); f_129856e0();
  /* 12989c94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989c97 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12989c9a jmp 0x12989ceb */
  goto L_12989ceb;
L_12989c9c:;
  /* 12989c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989c9f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 12989ca5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12989ca7 je 0x12989ccc */
  if (C.zf) goto L_12989ccc;
  /* 12989ca9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12989caf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 12989cb2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12989cb5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12989cbb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 12989cbe shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12989cc0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12989cc3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12989cca jmp 0x12989ceb */
  goto L_12989ceb;
L_12989ccc:;
  /* 12989ccc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 12989cd3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12989cd9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12989cdc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12989cdf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 12989ce5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 12989ce8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12989ceb:;
  /* 12989ceb jmp 0x1298a277 */
  goto L_1298a277;
L_12989cf0:;
  /* 12989cf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989cf3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 12989cf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12989cfb jne 0x12989d06 */
  if (!C.zf) goto L_12989d06;
  /* 12989cfd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989d00 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12989d03 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12989d06:;
  /* 12989d06 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989d0d jne 0x12989d1b */
  if (!C.zf) goto L_12989d1b;
  /* 12989d0f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 12989d19 jmp 0x12989d27 */
  goto L_12989d27;
L_12989d1b:;
  /* 12989d1b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 12989d21 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_12989d27:;
  /* 12989d27 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 12989d2d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12989d33 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12989d36 push edx */
  push32((uint32_t)(EDX));
  /* 12989d37 call 0x1298a680 */
  push32(0x12989d3cu); f_1298a680();
  /* 12989d3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989d3f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12989d42 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989d45 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 12989d4a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989d4c je 0x12989db6 */
  if (C.zf) goto L_12989db6;
  /* 12989d4e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989d52 jne 0x12989d5d */
  if (!C.zf) goto L_12989d5d;
  /* 12989d54 mov ecx, dword ptr [0x129acfb4] */
  ECX = (r32((uint32_t)(0x129acfb4)));
  /* 12989d5a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_12989d5d:;
  /* 12989d5d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 12989d64 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989d67 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_12989d6d:;
  /* 12989d6d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12989d73 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 12989d79 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989d7c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 12989d82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989d84 je 0x12989da6 */
  if (C.zf) goto L_12989da6;
  /* 12989d86 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12989d8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12989d8e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 12989d91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989d93 je 0x12989da6 */
  if (C.zf) goto L_12989da6;
  /* 12989d95 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 12989d9b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989d9e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 12989da4 jmp 0x12989d6d */
  goto L_12989d6d;
L_12989da6:;
  /* 12989da6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 12989dac sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989daf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 12989db1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 12989db4 jmp 0x12989e10 */
  goto L_12989e10;
L_12989db6:;
  /* 12989db6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989dba jne 0x12989dc4 */
  if (!C.zf) goto L_12989dc4;
  /* 12989dbc mov eax, dword ptr [0x129acfb0] */
  EAX = (r32((uint32_t)(0x129acfb0)));
  /* 12989dc1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_12989dc4:;
  /* 12989dc4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989dc7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_12989dcd:;
  /* 12989dcd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 12989dd3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 12989dd9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989ddc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 12989de2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989de4 je 0x12989e04 */
  if (C.zf) goto L_12989e04;
  /* 12989de6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12989dec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12989def test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989df1 je 0x12989e04 */
  if (C.zf) goto L_12989e04;
  /* 12989df3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 12989df9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989dfc mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 12989e02 jmp 0x12989dcd */
  goto L_12989dcd;
L_12989e04:;
  /* 12989e04 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 12989e0a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989e0d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_12989e10:;
  /* 12989e10 jmp 0x1298a277 */
  goto L_1298a277;
L_12989e15:;
  /* 12989e15 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 12989e18 push edx */
  push32((uint32_t)(EDX));
  /* 12989e19 call 0x1298a680 */
  push32(0x12989e1eu); f_1298a680();
  /* 12989e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989e21 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 12989e27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989e2a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 12989e2d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989e2f je 0x12989e43 */
  if (C.zf) goto L_12989e43;
  /* 12989e31 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12989e37 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 12989e3e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 12989e41 jmp 0x12989e51 */
  goto L_12989e51;
L_12989e43:;
  /* 12989e43 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 12989e49 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 12989e4f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_12989e51:;
  /* 12989e51 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 12989e5b jmp 0x1298a277 */
  goto L_1298a277;
L_12989e60:;
  /* 12989e60 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12989e67 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 12989e6a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 12989e6d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_12989e70:;
  /* 12989e70 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989e73 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 12989e75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12989e78 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 12989e7e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12989e81 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989e88 jge 0x12989e96 */
  if ((C.sf==C.of)) goto L_12989e96;
  /* 12989e8a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 12989e94 jmp 0x12989eb2 */
  goto L_12989eb2;
L_12989e96:;
  /* 12989e96 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989e9d jne 0x12989eb2 */
  if (!C.zf) goto L_12989eb2;
  /* 12989e9f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989ea3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989ea6 jne 0x12989eb2 */
  if (!C.zf) goto L_12989eb2;
  /* 12989ea8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_12989eb2:;
  /* 12989eb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12989eb5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989eb8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12989ebb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12989ebe sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12989ec1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12989ec3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 12989ec6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 12989ecc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 12989ed2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12989ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 12989ed6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 12989edc push edx */
  push32((uint32_t)(EDX));
  /* 12989edd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989ee1 push eax */
  push32((uint32_t)(EAX));
  /* 12989ee2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989ee5 push ecx */
  push32((uint32_t)(ECX));
  /* 12989ee6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 12989eec push edx */
  push32((uint32_t)(EDX));
  /* 12989eed call dword ptr [0x129ad3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ad3a0))), 0x12989ef3u);
  /* 12989ef3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989ef6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989ef9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12989efe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989f00 je 0x12989f18 */
  if (C.zf) goto L_12989f18;
  /* 12989f02 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989f09 jne 0x12989f18 */
  if (!C.zf) goto L_12989f18;
  /* 12989f0b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989f0e push ecx */
  push32((uint32_t)(ECX));
  /* 12989f0f call dword ptr [0x129ad3ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ad3ac))), 0x12989f15u);
  /* 12989f15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12989f18:;
  /* 12989f18 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 12989f1c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989f1f jne 0x12989f3a */
  if (!C.zf) goto L_12989f3a;
  /* 12989f21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989f24 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 12989f29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12989f2b jne 0x12989f3a */
  if (!C.zf) goto L_12989f3a;
  /* 12989f2d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989f30 push ecx */
  push32((uint32_t)(ECX));
  /* 12989f31 call dword ptr [0x129ad3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ad3a4))), 0x12989f37u);
  /* 12989f37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12989f3a:;
  /* 12989f3a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989f3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12989f40 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12989f43 jne 0x12989f57 */
  if (!C.zf) goto L_12989f57;
  /* 12989f45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989f48 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12989f4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12989f4e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989f51 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989f54 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_12989f57:;
  /* 12989f57 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12989f5a push eax */
  push32((uint32_t)(EAX));
  /* 12989f5b call 0x129856e0 */
  push32(0x12989f60u); f_129856e0();
  /* 12989f60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12989f63 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12989f66 jmp 0x1298a277 */
  goto L_1298a277;
L_12989f6b:;
  /* 12989f6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989f6e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 12989f71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12989f74 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12989f7e jmp 0x1298a005 */
  goto L_1298a005;
L_12989f83:;
  /* 12989f83 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 12989f8d jmp 0x1298a005 */
  goto L_1298a005;
L_12989f8f:;
  /* 12989f8f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_12989f99:;
  /* 12989f99 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 12989fa3 jmp 0x12989faf */
  goto L_12989faf;
L_12989fa5:;
  /* 12989fa5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_12989faf:;
  /* 12989faf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 12989fb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989fbc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 12989fc2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12989fc4 je 0x12989fe3 */
  if (C.zf) goto L_12989fe3;
  /* 12989fc6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 12989fcd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 12989fd3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12989fd6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 12989fdc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_12989fe3:;
  /* 12989fe3 jmp 0x1298a005 */
  goto L_1298a005;
L_12989fe5:;
  /* 12989fe5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 12989fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989ff2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 12989ff8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12989ffa je 0x1298a005 */
  if (C.zf) goto L_1298a005;
  /* 12989ffc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12989fff or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1298a002 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298a005:;
  /* 1298a005 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a008 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a00d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a00f je 0x1298a02e */
  if (C.zf) goto L_1298a02e;
  /* 1298a011 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1298a014 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a015 call 0x1298a6a0 */
  push32(0x1298a01au); f_1298a6a0();
  /* 1298a01a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a01d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1298a023 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1298a029 jmp 0x1298a0bf */
  goto L_1298a0bf;
L_1298a02e:;
  /* 1298a02e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a031 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a034 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a036 je 0x1298a080 */
  if (C.zf) goto L_1298a080;
  /* 1298a038 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a03b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a03e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a040 je 0x1298a060 */
  if (C.zf) goto L_1298a060;
  /* 1298a042 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1298a045 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a046 call 0x1298a680 */
  push32(0x1298a04bu); f_1298a680();
  /* 1298a04b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a04e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 1298a051 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298a052 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1298a058 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1298a05e jmp 0x1298a07e */
  goto L_1298a07e;
L_1298a060:;
  /* 1298a060 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1298a063 push edx */
  push32((uint32_t)(EDX));
  /* 1298a064 call 0x1298a680 */
  push32(0x1298a069u); f_1298a680();
  /* 1298a069 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a06c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298a071 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298a072 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1298a078 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_1298a07e:;
  /* 1298a07e jmp 0x1298a0bf */
  goto L_1298a0bf;
L_1298a080:;
  /* 1298a080 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a083 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a086 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a088 je 0x1298a0a5 */
  if (C.zf) goto L_1298a0a5;
  /* 1298a08a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 1298a08d push ecx */
  push32((uint32_t)(ECX));
  /* 1298a08e call 0x1298a680 */
  push32(0x1298a093u); f_1298a680();
  /* 1298a093 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a096 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298a097 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1298a09d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 1298a0a3 jmp 0x1298a0bf */
  goto L_1298a0bf;
L_1298a0a5:;
  /* 1298a0a5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 1298a0a8 push edx */
  push32((uint32_t)(EDX));
  /* 1298a0a9 call 0x1298a680 */
  push32(0x1298a0aeu); f_1298a680();
  /* 1298a0ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a0b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298a0b3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 1298a0b9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_1298a0bf:;
  /* 1298a0bf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a0c2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a0c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a0c7 je 0x1298a107 */
  if (C.zf) goto L_1298a107;
  /* 1298a0c9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a0d0 jg 0x1298a107 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298a107;
  /* 1298a0d2 jl 0x1298a0dd */
  if ((C.sf!=C.of)) goto L_1298a0dd;
  /* 1298a0d4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a0db jae 0x1298a107 */
  if (!C.cf) goto L_1298a107;
L_1298a0dd:;
  /* 1298a0dd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1298a0e3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298a0e5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1298a0eb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a0ee neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298a0f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1298a0f6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 1298a0fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a0ff or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1298a102 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298a105 jmp 0x1298a11f */
  goto L_1298a11f;
L_1298a107:;
  /* 1298a107 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 1298a10d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1298a113 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 1298a119 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1298a11f:;
  /* 1298a11f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a122 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a128 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a12a jne 0x1298a147 */
  if (!C.zf) goto L_1298a147;
  /* 1298a12c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1298a132 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1298a138 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 1298a13b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1298a141 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_1298a147:;
  /* 1298a147 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a14e jge 0x1298a15c */
  if ((C.sf==C.of)) goto L_1298a15c;
  /* 1298a150 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 1298a15a jmp 0x1298a165 */
  goto L_1298a165;
L_1298a15c:;
  /* 1298a15c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a15f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a162 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298a165:;
  /* 1298a165 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1298a16b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 1298a171 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a173 jne 0x1298a17c */
  if (!C.zf) goto L_1298a17c;
  /* 1298a175 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1298a17c:;
  /* 1298a17c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1298a17f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1298a182:;
  /* 1298a182 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 1298a188 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 1298a18e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a191 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 1298a197 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a199 jg 0x1298a1af */
  if ((!C.zf&&C.sf==C.of)) goto L_1298a1af;
  /* 1298a19b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1298a1a1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 1298a1a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298a1a9 je 0x1298a230 */
  if (C.zf) goto L_1298a230;
L_1298a1af:;
  /* 1298a1af mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1298a1b5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298a1b6 push edx */
  push32((uint32_t)(EDX));
  /* 1298a1b7 push eax */
  push32((uint32_t)(EAX));
  /* 1298a1b8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 1298a1be push edx */
  push32((uint32_t)(EDX));
  /* 1298a1bf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1298a1c5 push eax */
  push32((uint32_t)(EAX));
  /* 1298a1c6 call 0x12989540 */
  push32(0x1298a1cbu); f_12989540();
  /* 1298a1cb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a1ce mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 1298a1d4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 1298a1da cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298a1db push edx */
  push32((uint32_t)(EDX));
  /* 1298a1dc push eax */
  push32((uint32_t)(EAX));
  /* 1298a1dd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 1298a1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a1e4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 1298a1ea push edx */
  push32((uint32_t)(EDX));
  /* 1298a1eb call 0x129894d0 */
  push32(0x1298a1f0u); f_129894d0();
  /* 1298a1f0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 1298a1f6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 1298a1fc cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a203 jle 0x1298a217 */
  if ((C.zf||C.sf!=C.of)) goto L_1298a217;
  /* 1298a205 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 1298a20b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a211 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_1298a217:;
  /* 1298a217 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a21a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 1298a220 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1298a222 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a225 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a228 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1298a22b jmp 0x1298a182 */
  goto L_1298a182;
L_1298a230:;
  /* 1298a230 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 1298a233 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a236 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1298a239 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a23c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a23f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1298a242 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a245 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a24a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a24c je 0x1298a277 */
  if (C.zf) goto L_1298a277;
  /* 1298a24e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a251 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298a254 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a257 jne 0x1298a25f */
  if (!C.zf) goto L_1298a25f;
  /* 1298a259 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a25d jne 0x1298a277 */
  if (!C.zf) goto L_1298a277;
L_1298a25f:;
  /* 1298a25f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a262 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a265 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1298a268 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a26b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 1298a26e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298a271 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a274 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_1298a277:;
  /* 1298a277 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a27e jne 0x1298a452 */
  if (!C.zf) goto L_1298a452;
  /* 1298a284 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a287 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a28a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a28c je 0x1298a2dd */
  if (C.zf) goto L_1298a2dd;
  /* 1298a28e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a291 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1298a297 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298a299 je 0x1298a2ab */
  if (C.zf) goto L_1298a2ab;
  /* 1298a29b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 1298a2a2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1298a2a9 jmp 0x1298a2dd */
  goto L_1298a2dd;
L_1298a2ab:;
  /* 1298a2ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a2ae and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a2b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a2b3 je 0x1298a2c5 */
  if (C.zf) goto L_1298a2c5;
  /* 1298a2b5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 1298a2bc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1298a2c3 jmp 0x1298a2dd */
  goto L_1298a2dd;
L_1298a2c5:;
  /* 1298a2c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a2c8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a2cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a2cd je 0x1298a2dd */
  if (C.zf) goto L_1298a2dd;
  /* 1298a2cf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 1298a2d6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_1298a2dd:;
  /* 1298a2dd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 1298a2e3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a2e6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a2e9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 1298a2ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a2f2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 1298a2f5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a2f7 jne 0x1298a315 */
  if (!C.zf) goto L_1298a315;
  /* 1298a2f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1298a2ff push eax */
  push32((uint32_t)(EAX));
  /* 1298a300 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a303 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a304 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1298a30a push edx */
  push32((uint32_t)(EDX));
  /* 1298a30b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1298a30d call 0x1298a5f0 */
  push32(0x1298a312u); f_1298a5f0();
  /* 1298a312 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298a315:;
  /* 1298a315 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1298a31b push eax */
  push32((uint32_t)(EAX));
  /* 1298a31c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a31f push ecx */
  push32((uint32_t)(ECX));
  /* 1298a320 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298a323 push edx */
  push32((uint32_t)(EDX));
  /* 1298a324 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 1298a32a push eax */
  push32((uint32_t)(EAX));
  /* 1298a32b call 0x1298a630 */
  push32(0x1298a330u); f_1298a630();
  /* 1298a330 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a333 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a336 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1298a339 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298a33b je 0x1298a363 */
  if (C.zf) goto L_1298a363;
  /* 1298a33d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a340 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a343 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a345 jne 0x1298a363 */
  if (!C.zf) goto L_1298a363;
  /* 1298a347 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1298a34d push eax */
  push32((uint32_t)(EAX));
  /* 1298a34e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a351 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a352 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1298a358 push edx */
  push32((uint32_t)(EDX));
  /* 1298a359 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1298a35b call 0x1298a5f0 */
  push32(0x1298a360u); f_1298a5f0();
  /* 1298a360 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298a363:;
  /* 1298a363 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a367 je 0x1298a411 */
  if (C.zf) goto L_1298a411;
  /* 1298a36d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a371 jle 0x1298a411 */
  if ((C.zf||C.sf!=C.of)) goto L_1298a411;
  /* 1298a377 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a37a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 1298a380 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298a383 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_1298a389:;
  /* 1298a389 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 1298a38f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 1298a395 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a398 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 1298a39e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a3a0 je 0x1298a40f */
  if (C.zf) goto L_1298a40f;
  /* 1298a3a2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 1298a3a8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1298a3ab mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 1298a3b2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 1298a3b9 push eax */
  push32((uint32_t)(EAX));
  /* 1298a3ba lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 1298a3c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a3c1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 1298a3c7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a3ca mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 1298a3d0 call 0x1298b7a0 */
  push32(0x1298a3d5u); f_1298b7a0();
  /* 1298a3d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a3d8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 1298a3de cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a3e5 jg 0x1298a3e9 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298a3e9;
  /* 1298a3e7 jmp 0x1298a40f */
  goto L_1298a40f;
L_1298a3e9:;
  /* 1298a3e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1298a3ef push eax */
  push32((uint32_t)(EAX));
  /* 1298a3f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a3f4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 1298a3fa push edx */
  push32((uint32_t)(EDX));
  /* 1298a3fb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 1298a401 push eax */
  push32((uint32_t)(EAX));
  /* 1298a402 call 0x1298a630 */
  push32(0x1298a407u); f_1298a630();
  /* 1298a407 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a40a jmp 0x1298a389 */
  goto L_1298a389;
L_1298a40f:;
  /* 1298a40f jmp 0x1298a42c */
  goto L_1298a42c;
L_1298a411:;
  /* 1298a411 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 1298a417 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a418 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a41b push edx */
  push32((uint32_t)(EDX));
  /* 1298a41c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298a41f push eax */
  push32((uint32_t)(EAX));
  /* 1298a420 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298a423 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a424 call 0x1298a630 */
  push32(0x1298a429u); f_1298a630();
  /* 1298a429 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298a42c:;
  /* 1298a42c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a42f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a432 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298a434 je 0x1298a452 */
  if (C.zf) goto L_1298a452;
  /* 1298a436 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 1298a43c push eax */
  push32((uint32_t)(EAX));
  /* 1298a43d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a440 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a441 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 1298a447 push edx */
  push32((uint32_t)(EDX));
  /* 1298a448 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1298a44a call 0x1298a5f0 */
  push32(0x1298a44fu); f_1298a5f0();
  /* 1298a44f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298a452:;
  /* 1298a452 jmp 0x12989864 */
  goto L_12989864;
L_1298a457:;
  /* 1298a457 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 1298a45d pop edi */
  EDI = (pop32());
  /* 1298a45e pop esi */
  ESI = (pop32());
  /* 1298a45f pop ebx */
  EBX = (pop32());
  /* 1298a460 mov esp, ebp */
  ESP = (EBP);
  /* 1298a462 pop ebp */
  EBP = (pop32());
  /* 1298a463 ret  */
  ESPCHK(0x12989840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a570 @ 0x1298a570 (119 bytes, 44 insns) */
void f_1298a570(void) {
  FTRACE(0x1298a570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a570 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a571 mov ebp, esp */
  EBP = (ESP);
  /* 1298a573 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a577 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298a57a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a57d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a580 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 1298a583 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a586 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a58a jl 0x1298a5b2 */
  if ((C.sf!=C.of)) goto L_1298a5b2;
  /* 1298a58c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a58f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298a591 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 1298a594 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1298a596 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 1298a59a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298a5a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298a5a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a5a6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298a5a8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a5ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a5ae mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1298a5b0 jmp 0x1298a5c5 */
  goto L_1298a5c5;
L_1298a5b2:;
  /* 1298a5b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a5b5 push edx */
  push32((uint32_t)(EDX));
  /* 1298a5b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1298a5ba call 0x129895c0 */
  push32(0x1298a5bfu); f_129895c0();
  /* 1298a5bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a5c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298a5c5:;
  /* 1298a5c5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a5c9 jne 0x1298a5d6 */
  if (!C.zf) goto L_1298a5d6;
  /* 1298a5cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a5ce mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1298a5d4 jmp 0x1298a5e3 */
  goto L_1298a5e3;
L_1298a5d6:;
  /* 1298a5d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a5d9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298a5db add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a5de mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a5e1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1298a5e3:;
  /* 1298a5e3 mov esp, ebp */
  ESP = (EBP);
  /* 1298a5e5 pop ebp */
  EBP = (pop32());
  /* 1298a5e6 ret  */
  ESPCHK(0x1298a570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x1298a5f0 (53 bytes, 23 insns) */
void f_1298a5f0(void) {
  FTRACE(0x1298a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a5f1 mov ebp, esp */
  EBP = (ESP);
L_1298a5f3:;
  /* 1298a5f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a5f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a5f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a5fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1298a5ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a601 jle 0x1298a623 */
  if ((C.zf||C.sf!=C.of)) goto L_1298a623;
  /* 1298a603 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298a606 push edx */
  push32((uint32_t)(EDX));
  /* 1298a607 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a60a push eax */
  push32((uint32_t)(EAX));
  /* 1298a60b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a60e push ecx */
  push32((uint32_t)(ECX));
  /* 1298a60f call 0x1298a570 */
  push32(0x1298a614u); f_1298a570();
  /* 1298a614 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a617 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298a61a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a61d jne 0x1298a621 */
  if (!C.zf) goto L_1298a621;
  /* 1298a61f jmp 0x1298a623 */
  goto L_1298a623;
L_1298a621:;
  /* 1298a621 jmp 0x1298a5f3 */
  goto L_1298a5f3;
L_1298a623:;
  /* 1298a623 pop ebp */
  EBP = (pop32());
  /* 1298a624 ret  */
  ESPCHK(0x1298a5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a630 @ 0x1298a630 (74 bytes, 31 insns) */
void f_1298a630(void) {
  FTRACE(0x1298a630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a630 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a631 mov ebp, esp */
  EBP = (ESP);
  /* 1298a633 push ecx */
  push32((uint32_t)(ECX));
L_1298a634:;
  /* 1298a634 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a637 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a63a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a63d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1298a640 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298a642 jle 0x1298a676 */
  if ((C.zf||C.sf!=C.of)) goto L_1298a676;
  /* 1298a644 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298a647 push edx */
  push32((uint32_t)(EDX));
  /* 1298a648 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a64b push eax */
  push32((uint32_t)(EAX));
  /* 1298a64c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a64f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298a652 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298a655 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a658 push eax */
  push32((uint32_t)(EAX));
  /* 1298a659 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a65c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a65f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1298a662 call 0x1298a570 */
  push32(0x1298a667u); f_1298a570();
  /* 1298a667 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a66a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298a66d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a670 jne 0x1298a674 */
  if (!C.zf) goto L_1298a674;
  /* 1298a672 jmp 0x1298a676 */
  goto L_1298a676;
L_1298a674:;
  /* 1298a674 jmp 0x1298a634 */
  goto L_1298a634;
L_1298a676:;
  /* 1298a676 mov esp, ebp */
  ESP = (EBP);
  /* 1298a678 pop ebp */
  EBP = (pop32());
  /* 1298a679 ret  */
  ESPCHK(0x1298a630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a680 @ 0x1298a680 (26 bytes, 12 insns) */
void f_1298a680(void) {
  FTRACE(0x1298a680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a680 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a681 mov ebp, esp */
  EBP = (ESP);
  /* 1298a683 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a686 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a688 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a68b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a68e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1298a690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a693 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a695 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 1298a698 pop ebp */
  EBP = (pop32());
  /* 1298a699 ret  */
  ESPCHK(0x1298a680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6a0 @ 0x1298a6a0 (31 bytes, 14 insns) */
void f_1298a6a0(void) {
  FTRACE(0x1298a6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1298a6a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6a6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a6a8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a6ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6ae mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1298a6b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6b3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a6b5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a6b8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 1298a6ba mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1298a6bd pop ebp */
  EBP = (pop32());
  /* 1298a6be ret  */
  ESPCHK(0x1298a6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6c0 @ 0x1298a6c0 (27 bytes, 12 insns) */
void f_1298a6c0(void) {
  FTRACE(0x1298a6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1298a6c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6c6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a6c8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a6cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1298a6d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6d3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298a6d5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 1298a6d9 pop ebp */
  EBP = (pop32());
  /* 1298a6da ret  */
  ESPCHK(0x1298a6c0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x1298a6e0 (145 bytes, 42 insns) */
void f_1298a6e0(void) {
  FTRACE(0x1298a6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1298a6e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298a6e4 call 0x1298a790 */
  push32(0x1298a6e9u); f_1298a790();
  /* 1298a6e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a6ec mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1298a6ee mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298a6f5 jmp 0x1298a700 */
  goto L_1298a700;
L_1298a6f7:;
  /* 1298a6f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a6fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a6fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298a700:;
  /* 1298a700 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a704 jae 0x1298a72a */
  if (!C.cf) goto L_1298a72a;
  /* 1298a706 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a709 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a70c cmp ecx, dword ptr [eax*8 + 0x129acfb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x129acfb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a713 jne 0x1298a728 */
  if (!C.zf) goto L_1298a728;
  /* 1298a715 call 0x1298a780 */
  push32(0x1298a71au); f_1298a780();
  /* 1298a71a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298a71d mov ecx, dword ptr [edx*8 + 0x129acfbc] */
  ECX = (r32((uint32_t)(EDX*8 + 0x129acfbc)));
  /* 1298a724 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1298a726 jmp 0x1298a76d */
  goto L_1298a76d;
L_1298a728:;
  /* 1298a728 jmp 0x1298a6f7 */
  goto L_1298a6f7;
L_1298a72a:;
  /* 1298a72a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a72e jb 0x1298a743 */
  if (C.cf) goto L_1298a743;
  /* 1298a730 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a734 ja 0x1298a743 */
  if ((!C.cf&&!C.zf)) goto L_1298a743;
  /* 1298a736 call 0x1298a780 */
  push32(0x1298a73bu); f_1298a780();
  /* 1298a73b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1298a741 jmp 0x1298a76d */
  goto L_1298a76d;
L_1298a743:;
  /* 1298a743 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a74a jb 0x1298a762 */
  if (C.cf) goto L_1298a762;
  /* 1298a74c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a753 ja 0x1298a762 */
  if ((!C.cf&&!C.zf)) goto L_1298a762;
  /* 1298a755 call 0x1298a780 */
  push32(0x1298a75au); f_1298a780();
  /* 1298a75a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1298a760 jmp 0x1298a76d */
  goto L_1298a76d;
L_1298a762:;
  /* 1298a762 call 0x1298a780 */
  push32(0x1298a767u); f_1298a780();
  /* 1298a767 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_1298a76d:;
  /* 1298a76d mov esp, ebp */
  ESP = (EBP);
  /* 1298a76f pop ebp */
  EBP = (pop32());
  /* 1298a770 ret  */
  ESPCHK(0x1298a6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a780 @ 0x1298a780 (13 bytes, 6 insns) */
void f_1298a780(void) {
  FTRACE(0x1298a780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a780 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a781 mov ebp, esp */
  EBP = (ESP);
  /* 1298a783 call 0x129822f0 */
  push32(0x1298a788u); f_129822f0();
  /* 1298a788 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a78b pop ebp */
  EBP = (pop32());
  /* 1298a78c ret  */
  ESPCHK(0x1298a780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x1298a790 (13 bytes, 6 insns) */
void f_1298a790(void) {
  FTRACE(0x1298a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a790 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a791 mov ebp, esp */
  EBP = (ESP);
  /* 1298a793 call 0x129822f0 */
  push32(0x1298a798u); f_129822f0();
  /* 1298a798 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a79b pop ebp */
  EBP = (pop32());
  /* 1298a79c ret  */
  ESPCHK(0x1298a790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7a0 @ 0x1298a7a0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_1298a7a0(void) {
  FTRACE(0x1298a7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298a7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298a7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1298a7a3 push edi */
  push32((uint32_t)(EDI));
  /* 1298a7a4 push esi */
  push32((uint32_t)(ESI));
  /* 1298a7a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1298a7a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298a7ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a7ae mov eax, ecx */
  EAX = (ECX);
  /* 1298a7b0 mov edx, ecx */
  EDX = (ECX);
  /* 1298a7b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a7b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a7b6 jbe 0x1298a7c0 */
  if ((C.cf||C.zf)) goto L_1298a7c0;
  /* 1298a7b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a7ba jb 0x1298a938 */
  if (C.cf) goto L_1298a938;
L_1298a7c0:;
  /* 1298a7c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1298a7c6 jne 0x1298a7dc */
  if (!C.zf) goto L_1298a7dc;
  /* 1298a7c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a7cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a7ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a7d1 jb 0x1298a7fc */
  if (C.cf) goto L_1298a7fc;
  /* 1298a7d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a7d5 jmp dword ptr [edx*4 + 0x1298a8e8] */
  switch (EDX) {
    case 0: goto L_1298a8f8;
    case 1: goto L_1298a900;
    case 2: goto L_1298a90c;
    case 3: goto L_1298a920;
    default: x86_unimpl("switch@0x1298a7d5 out of table"); return;
  }
L_1298a7dc:;
  /* 1298a7dc mov eax, edi */
  EAX = (EDI);
  /* 1298a7de mov edx, 3 */
  EDX = (0x3u);
  /* 1298a7e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a7e6 jb 0x1298a7f4 */
  if (C.cf) goto L_1298a7f4;
  /* 1298a7e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a7eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a7ed jmp dword ptr [eax*4 + 0x1298a800] */
  switch (EAX) {
    case 1: goto L_1298a810;
    case 2: goto L_1298a83c;
    case 3: goto L_1298a860;
    default: x86_unimpl("switch@0x1298a7ed out of table"); return;
  }
L_1298a7f4:;
  /* 1298a7f4 jmp dword ptr [ecx*4 + 0x1298a8f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1298a8f8)))); return;
  /* 1298a7fb nop  */
  /* nop */
L_1298a7fc:;
  /* 1298a7fc jmp dword ptr [ecx*4 + 0x1298a87c] */
  switch (ECX) {
    case 0: goto L_1298a8df;
    case 1: goto L_1298a8cc;
    case 2: goto L_1298a8c4;
    case 3: goto L_1298a8bc;
    case 4: goto L_1298a8b4;
    case 5: goto L_1298a8ac;
    case 6: goto L_1298a8a4;
    case 7: goto L_1298a89c;
    default: x86_unimpl("switch@0x1298a7fc out of table"); return;
  }
  /* 1298a803 nop  */
  /* nop */
L_1298a810:;
  /* 1298a810 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a812 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a814 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a816 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298a819 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298a81c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298a81f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a822 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298a825 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a828 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a82b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a82e jb 0x1298a7fc */
  if (C.cf) goto L_1298a7fc;
  /* 1298a830 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a832 jmp dword ptr [edx*4 + 0x1298a8e8] */
  switch (EDX) {
    case 0: goto L_1298a8f8;
    case 1: goto L_1298a900;
    case 2: goto L_1298a90c;
    case 3: goto L_1298a920;
    default: x86_unimpl("switch@0x1298a832 out of table"); return;
  }
  /* 1298a839 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298a83c:;
  /* 1298a83c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a83e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a840 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a842 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298a845 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a848 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298a84b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a84e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a851 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a854 jb 0x1298a7fc */
  if (C.cf) goto L_1298a7fc;
  /* 1298a856 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a858 jmp dword ptr [edx*4 + 0x1298a8e8] */
  switch (EDX) {
    case 0: goto L_1298a8f8;
    case 1: goto L_1298a900;
    case 2: goto L_1298a90c;
    case 3: goto L_1298a920;
    default: x86_unimpl("switch@0x1298a858 out of table"); return;
  }
  /* 1298a85f nop  */
  /* nop */
L_1298a860:;
  /* 1298a860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a862 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a864 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a866 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1298a867 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a86a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1298a86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a86e jb 0x1298a7fc */
  if (C.cf) goto L_1298a7fc;
  /* 1298a870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a872 jmp dword ptr [edx*4 + 0x1298a8e8] */
  switch (EDX) {
    case 0: goto L_1298a8f8;
    case 1: goto L_1298a900;
    case 2: goto L_1298a90c;
    case 3: goto L_1298a920;
    default: x86_unimpl("switch@0x1298a872 out of table"); return;
  }
  /* 1298a879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298a89c:;
  /* 1298a89c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1298a8a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1298a8a4:;
  /* 1298a8a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1298a8a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1298a8ac:;
  /* 1298a8ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1298a8b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1298a8b4:;
  /* 1298a8b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1298a8b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1298a8bc:;
  /* 1298a8bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1298a8c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1298a8c4:;
  /* 1298a8c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1298a8c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1298a8cc:;
  /* 1298a8cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1298a8d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1298a8d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1298a8db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298a8dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1298a8df:;
  /* 1298a8df jmp dword ptr [edx*4 + 0x1298a8e8] */
  switch (EDX) {
    case 0: goto L_1298a8f8;
    case 1: goto L_1298a900;
    case 2: goto L_1298a90c;
    case 3: goto L_1298a920;
    default: x86_unimpl("switch@0x1298a8df out of table"); return;
  }
  /* 1298a8e6 mov edi, edi */
  EDI = (EDI);
L_1298a8f8:;
  /* 1298a8f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a8fb pop esi */
  ESI = (pop32());
  /* 1298a8fc pop edi */
  EDI = (pop32());
  /* 1298a8fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298a8fe ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298a8ff nop  */
  /* nop */
L_1298a900:;
  /* 1298a900 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a902 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a904 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a907 pop esi */
  ESI = (pop32());
  /* 1298a908 pop edi */
  EDI = (pop32());
  /* 1298a909 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298a90a ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298a90b nop  */
  /* nop */
L_1298a90c:;
  /* 1298a90c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a90e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a910 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298a913 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298a916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a919 pop esi */
  ESI = (pop32());
  /* 1298a91a pop edi */
  EDI = (pop32());
  /* 1298a91b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298a91c ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298a91d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298a920:;
  /* 1298a920 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298a922 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1298a924 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298a927 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298a92a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298a92d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298a930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298a933 pop esi */
  ESI = (pop32());
  /* 1298a934 pop edi */
  EDI = (pop32());
  /* 1298a935 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298a936 ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298a937 nop  */
  /* nop */
L_1298a938:;
  /* 1298a938 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1298a93c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1298a940 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1298a946 jne 0x1298a96c */
  if (!C.zf) goto L_1298a96c;
  /* 1298a948 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a94b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1298a94e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a951 jb 0x1298a960 */
  if (C.cf) goto L_1298a960;
  /* 1298a953 std  */
  C.df=1;
  /* 1298a954 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a956 cld  */
  C.df=0;
  /* 1298a957 jmp dword ptr [edx*4 + 0x1298aa80] */
  switch (EDX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298a957 out of table"); return;
  }
  /* 1298a95e mov edi, edi */
  EDI = (EDI);
L_1298a960:;
  /* 1298a960 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298a962 jmp dword ptr [ecx*4 + 0x1298aa30] */
  switch (ECX) {
    case 0: goto L_1298aa77;
    default: x86_unimpl("switch@0x1298a962 out of table"); return;
  }
  /* 1298a969 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298a96c:;
  /* 1298a96c mov eax, edi */
  EAX = (EDI);
  /* 1298a96e mov edx, 3 */
  EDX = (0x3u);
  /* 1298a973 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a976 jb 0x1298a984 */
  if (C.cf) goto L_1298a984;
  /* 1298a978 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1298a97b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a97d jmp dword ptr [eax*4 + 0x1298a988] */
  switch (EAX) {
    case 1: goto L_1298a998;
    case 2: goto L_1298a9b8;
    case 3: goto L_1298a9e0;
    default: x86_unimpl("switch@0x1298a97d out of table"); return;
  }
L_1298a984:;
  /* 1298a984 jmp dword ptr [ecx*4 + 0x1298aa80] */
  switch (ECX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298a984 out of table"); return;
  }
  /* 1298a98b nop  */
  /* nop */
L_1298a998:;
  /* 1298a998 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298a99b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a99d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298a9a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1298a9a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a9a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1298a9a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a9a8 jb 0x1298a960 */
  if (C.cf) goto L_1298a960;
  /* 1298a9aa std  */
  C.df=1;
  /* 1298a9ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a9ad cld  */
  C.df=0;
  /* 1298a9ae jmp dword ptr [edx*4 + 0x1298aa80] */
  switch (EDX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298a9ae out of table"); return;
  }
  /* 1298a9b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298a9b8:;
  /* 1298a9b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298a9bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a9bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298a9c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298a9c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a9c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298a9c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a9cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a9cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298a9d2 jb 0x1298a960 */
  if (C.cf) goto L_1298a960;
  /* 1298a9d4 std  */
  C.df=1;
  /* 1298a9d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298a9d7 cld  */
  C.df=0;
  /* 1298a9d8 jmp dword ptr [edx*4 + 0x1298aa80] */
  switch (EDX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298a9d8 out of table"); return;
  }
  /* 1298a9df nop  */
  /* nop */
L_1298a9e0:;
  /* 1298a9e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298a9e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1298a9e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298a9e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298a9eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298a9ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298a9f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1298a9f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298a9f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a9fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298a9fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298aa00 jb 0x1298a960 */
  if (C.cf) goto L_1298a960;
  /* 1298aa06 std  */
  C.df=1;
  /* 1298aa07 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1298aa09 cld  */
  C.df=0;
  /* 1298aa0a jmp dword ptr [edx*4 + 0x1298aa80] */
  switch (EDX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298aa0a out of table"); return;
  }
  /* 1298aa11 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1298aa14 xor al, 0xaa */
  { uint32_t _r=(AL)^(0xaau); AL = (_r); fl_logic(_r,8); }
  /* 1298aa16 cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1298aa17 adc bh, byte ptr [edx + ebp*4] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EDX + EBP*4))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa1a cwde  */
  EAX = (uint32_t)(int32_t)(int16_t)AX;
  /* 1298aa1b adc al, byte ptr [edx + ebp*4 - 0x68] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDX + EBP*4 + -0x68))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa1f adc cl, byte ptr [edx + ebp*4 - 0x68] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EDX + EBP*4 + -0x68))),_r=_a+_b+C.cf; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa23 adc dl, byte ptr [edx + ebp*4 - 0x68] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX + EBP*4 + -0x68))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa27 adc bl, byte ptr [edx + ebp*4 - 0x68] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDX + EBP*4 + -0x68))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa2b adc ah, byte ptr [edx + ebp*4 - 0x68] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDX + EBP*4 + -0x68))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1298aa34 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1298aa38 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1298aa3c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1298aa40 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1298aa44 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1298aa48 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1298aa4c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1298aa50 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1298aa54 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1298aa58 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1298aa5c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1298aa60 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1298aa64 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1298aa68 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1298aa6c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1298aa73 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1298aa75 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1298aa77:;
  /* 1298aa77 jmp dword ptr [edx*4 + 0x1298aa80] */
  switch (EDX) {
    case 0: goto L_1298aa90;
    case 1: goto L_1298aa98;
    case 2: goto L_1298aaa8;
    case 3: goto L_1298aabc;
    default: x86_unimpl("switch@0x1298aa77 out of table"); return;
  }
  /* 1298aa7e mov edi, edi */
  EDI = (EDI);
L_1298aa90:;
  /* 1298aa90 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298aa93 pop esi */
  ESI = (pop32());
  /* 1298aa94 pop edi */
  EDI = (pop32());
  /* 1298aa95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298aa96 ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298aa97 nop  */
  /* nop */
L_1298aa98:;
  /* 1298aa98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298aa9b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298aa9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298aaa1 pop esi */
  ESI = (pop32());
  /* 1298aaa2 pop edi */
  EDI = (pop32());
  /* 1298aaa3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298aaa4 ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298aaa5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298aaa8:;
  /* 1298aaa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298aaab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298aaae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298aab1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298aab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298aab7 pop esi */
  ESI = (pop32());
  /* 1298aab8 pop edi */
  EDI = (pop32());
  /* 1298aab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298aaba ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
  /* 1298aabb nop  */
  /* nop */
L_1298aabc:;
  /* 1298aabc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1298aabf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1298aac2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1298aac5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1298aac8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1298aacb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1298aace mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298aad1 pop esi */
  ESI = (pop32());
  /* 1298aad2 pop edi */
  EDI = (pop32());
  /* 1298aad3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298aad4 ret  */
  ESPCHK(0x1298a7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aae0 @ 0x1298aae0 (421 bytes, 148 insns) */
void f_1298aae0(void) {
  FTRACE(0x1298aae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298aae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298aae1 mov ebp, esp */
  EBP = (ESP);
  /* 1298aae3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1298aae5 push 0x129a9f00 */
  push32((uint32_t)(0x129a9f00u));
  /* 1298aaea push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 1298aaef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1298aaf5 push eax */
  push32((uint32_t)(EAX));
  /* 1298aaf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1298aafd add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ab00 push ebx */
  push32((uint32_t)(EBX));
  /* 1298ab01 push esi */
  push32((uint32_t)(ESI));
  /* 1298ab02 push edi */
  push32((uint32_t)(EDI));
  /* 1298ab03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1298ab06 cmp dword ptr [0x129ae67c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae67c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ab0d jne 0x1298ab5e */
  if (!C.zf) goto L_1298ab5e;
  /* 1298ab0f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1298ab12 push eax */
  push32((uint32_t)(EAX));
  /* 1298ab13 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ab15 push 0x129a9efc */
  push32((uint32_t)(0x129a9efcu));
  /* 1298ab1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ab1c call dword ptr [0x129b0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0314))), 0x1298ab22u);
  /* 1298ab22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ab24 je 0x1298ab32 */
  if (C.zf) goto L_1298ab32;
  /* 1298ab26 mov dword ptr [0x129ae67c], 1 */
  w32((uint32_t)(0x129ae67c), (0x1u));
  /* 1298ab30 jmp 0x1298ab5e */
  goto L_1298ab5e;
L_1298ab32:;
  /* 1298ab32 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1298ab35 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ab36 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ab38 push 0x129a9ef8 */
  push32((uint32_t)(0x129a9ef8u));
  /* 1298ab3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ab3f push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ab41 call dword ptr [0x129b0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0310))), 0x1298ab47u);
  /* 1298ab47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ab49 je 0x1298ab57 */
  if (C.zf) goto L_1298ab57;
  /* 1298ab4b mov dword ptr [0x129ae67c], 2 */
  w32((uint32_t)(0x129ae67c), (0x2u));
  /* 1298ab55 jmp 0x1298ab5e */
  goto L_1298ab5e;
L_1298ab57:;
  /* 1298ab57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ab59 jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298ab5e:;
  /* 1298ab5e cmp dword ptr [0x129ae67c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae67c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ab65 jne 0x1298ab95 */
  if (!C.zf) goto L_1298ab95;
  /* 1298ab67 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ab6b jne 0x1298ab76 */
  if (!C.zf) goto L_1298ab76;
  /* 1298ab6d mov edx, dword ptr [0x129ae688] */
  EDX = (r32((uint32_t)(0x129ae688)));
  /* 1298ab73 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1298ab76:;
  /* 1298ab76 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ab79 push eax */
  push32((uint32_t)(EAX));
  /* 1298ab7a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ab7d push ecx */
  push32((uint32_t)(ECX));
  /* 1298ab7e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ab81 push edx */
  push32((uint32_t)(EDX));
  /* 1298ab82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ab85 push eax */
  push32((uint32_t)(EAX));
  /* 1298ab86 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1298ab89 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ab8a call dword ptr [0x129b0310] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0310))), 0x1298ab90u);
  /* 1298ab90 jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298ab95:;
  /* 1298ab95 cmp dword ptr [0x129ae67c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae67c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ab9c jne 0x1298ac86 */
  if (!C.zf) goto L_1298ac86;
  /* 1298aba2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298aba6 jne 0x1298abb1 */
  if (!C.zf) goto L_1298abb1;
  /* 1298aba8 mov edx, dword ptr [0x129ae698] */
  EDX = (r32((uint32_t)(0x129ae698)));
  /* 1298abae mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1298abb1:;
  /* 1298abb1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298abb3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298abb5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298abb8 push eax */
  push32((uint32_t)(EAX));
  /* 1298abb9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298abbc push ecx */
  push32((uint32_t)(ECX));
  /* 1298abbd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1298abc0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298abc2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298abc4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1298abc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298abca push edx */
  push32((uint32_t)(EDX));
  /* 1298abcb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298abce push eax */
  push32((uint32_t)(EAX));
  /* 1298abcf call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1298abd5u);
  /* 1298abd5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1298abd8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298abdc jne 0x1298abe5 */
  if (!C.zf) goto L_1298abe5;
  /* 1298abde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298abe0 jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298abe5:;
  /* 1298abe5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298abec mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298abef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298abf1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298abf4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1298abf6 call 0x12985a50 */
  push32(0x1298abfbu); f_12985a50();
  /* 1298abfb mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1298abfe mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1298ac01 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298ac04 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1298ac07 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298ac0a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1298ac0c push edx */
  push32((uint32_t)(EDX));
  /* 1298ac0d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ac0f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ac12 push eax */
  push32((uint32_t)(EAX));
  /* 1298ac13 call 0x12986620 */
  push32(0x1298ac18u); f_12986620();
  /* 1298ac18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ac1b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1298ac22 jmp 0x1298ac3b */
  goto L_1298ac3b;
  /* 1298ac24 mov eax, 1 */
  EAX = (0x1u);
  /* 1298ac29 ret  */
  ESPCHK(0x1298aae0u, _esp0);
  ESP += 4; return;
  /* 1298ac2a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1298ac2d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1298ac34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298ac3b:;
  /* 1298ac3b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ac3f jne 0x1298ac45 */
  if (!C.zf) goto L_1298ac45;
  /* 1298ac41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ac43 jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298ac45:;
  /* 1298ac45 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298ac48 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ac49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ac4c push edx */
  push32((uint32_t)(EDX));
  /* 1298ac4d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ac50 push eax */
  push32((uint32_t)(EAX));
  /* 1298ac51 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ac54 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ac55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ac57 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298ac5a push edx */
  push32((uint32_t)(EDX));
  /* 1298ac5b call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1298ac61u);
  /* 1298ac61 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1298ac64 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ac68 jne 0x1298ac6e */
  if (!C.zf) goto L_1298ac6e;
  /* 1298ac6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ac6c jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298ac6e:;
  /* 1298ac6e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ac71 push eax */
  push32((uint32_t)(EAX));
  /* 1298ac72 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298ac75 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ac76 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ac79 push edx */
  push32((uint32_t)(EDX));
  /* 1298ac7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ac7d push eax */
  push32((uint32_t)(EAX));
  /* 1298ac7e call dword ptr [0x129b0314] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0314))), 0x1298ac84u);
  /* 1298ac84 jmp 0x1298ac88 */
  goto L_1298ac88;
L_1298ac86:;
  /* 1298ac86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298ac88:;
  /* 1298ac88 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1298ac8b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298ac8e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1298ac95 pop edi */
  EDI = (pop32());
  /* 1298ac96 pop esi */
  ESI = (pop32());
  /* 1298ac97 pop ebx */
  EBX = (pop32());
  /* 1298ac98 mov esp, ebp */
  ESP = (EBP);
  /* 1298ac9a pop ebp */
  EBP = (pop32());
  /* 1298ac9b ret  */
  ESPCHK(0x1298aae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x1298aca0 (727 bytes, 263 insns) */
void f_1298aca0(void) {
  FTRACE(0x1298aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298aca1 mov ebp, esp */
  EBP = (ESP);
  /* 1298aca3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1298aca5 push 0x129a9f10 */
  push32((uint32_t)(0x129a9f10u));
  /* 1298acaa push 0x1298b9b8 */
  push32((uint32_t)(0x1298b9b8u));
  /* 1298acaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1298acb5 push eax */
  push32((uint32_t)(EAX));
  /* 1298acb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1298acbd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298acc0 push ebx */
  push32((uint32_t)(EBX));
  /* 1298acc1 push esi */
  push32((uint32_t)(ESI));
  /* 1298acc2 push edi */
  push32((uint32_t)(EDI));
  /* 1298acc3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1298acc6 cmp dword ptr [0x129ae6a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298accd jne 0x1298ad26 */
  if (!C.zf) goto L_1298ad26;
  /* 1298accf push 0 */
  push32((uint32_t)(0x0u));
  /* 1298acd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298acd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298acd5 push 0x129a9efc */
  push32((uint32_t)(0x129a9efcu));
  /* 1298acda push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1298acdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ace1 call dword ptr [0x129b031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b031c))), 0x1298ace7u);
  /* 1298ace7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ace9 je 0x1298acf7 */
  if (C.zf) goto L_1298acf7;
  /* 1298aceb mov dword ptr [0x129ae6a0], 1 */
  w32((uint32_t)(0x129ae6a0), (0x1u));
  /* 1298acf5 jmp 0x1298ad26 */
  goto L_1298ad26;
L_1298acf7:;
  /* 1298acf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298acf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298acfb push 1 */
  push32((uint32_t)(0x1u));
  /* 1298acfd push 0x129a9ef8 */
  push32((uint32_t)(0x129a9ef8u));
  /* 1298ad02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1298ad07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ad09 call dword ptr [0x129b0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0318))), 0x1298ad0fu);
  /* 1298ad0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ad11 je 0x1298ad1f */
  if (C.zf) goto L_1298ad1f;
  /* 1298ad13 mov dword ptr [0x129ae6a0], 2 */
  w32((uint32_t)(0x129ae6a0), (0x2u));
  /* 1298ad1d jmp 0x1298ad26 */
  goto L_1298ad26;
L_1298ad1f:;
  /* 1298ad1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ad21 jmp 0x1298af91 */
  goto L_1298af91;
L_1298ad26:;
  /* 1298ad26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ad2a jle 0x1298ad3f */
  if ((C.zf||C.sf!=C.of)) goto L_1298ad3f;
  /* 1298ad2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ad2f push eax */
  push32((uint32_t)(EAX));
  /* 1298ad30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ad33 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ad34 call 0x1298afb0 */
  push32(0x1298ad39u); f_1298afb0();
  /* 1298ad39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ad3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1298ad3f:;
  /* 1298ad3f cmp dword ptr [0x129ae6a0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6a0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ad46 jne 0x1298ad6b */
  if (!C.zf) goto L_1298ad6b;
  /* 1298ad48 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1298ad4b push edx */
  push32((uint32_t)(EDX));
  /* 1298ad4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298ad4f push eax */
  push32((uint32_t)(EAX));
  /* 1298ad50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ad53 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ad54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ad57 push edx */
  push32((uint32_t)(EDX));
  /* 1298ad58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ad5b push eax */
  push32((uint32_t)(EAX));
  /* 1298ad5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ad5f push ecx */
  push32((uint32_t)(ECX));
  /* 1298ad60 call dword ptr [0x129b0318] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0318))), 0x1298ad66u);
  /* 1298ad66 jmp 0x1298af91 */
  goto L_1298af91;
L_1298ad6b:;
  /* 1298ad6b cmp dword ptr [0x129ae6a0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6a0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ad72 jne 0x1298af8f */
  if (!C.zf) goto L_1298af8f;
  /* 1298ad78 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ad7c jne 0x1298ad87 */
  if (!C.zf) goto L_1298ad87;
  /* 1298ad7e mov edx, dword ptr [0x129ae698] */
  EDX = (r32((uint32_t)(0x129ae698)));
  /* 1298ad84 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1298ad87:;
  /* 1298ad87 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ad89 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ad8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ad8e push eax */
  push32((uint32_t)(EAX));
  /* 1298ad8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ad92 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ad93 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1298ad96 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298ad98 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ad9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ad9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ada0 push edx */
  push32((uint32_t)(EDX));
  /* 1298ada1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1298ada4 push eax */
  push32((uint32_t)(EAX));
  /* 1298ada5 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1298adabu);
  /* 1298adab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1298adae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298adb2 jne 0x1298adbb */
  if (!C.zf) goto L_1298adbb;
  /* 1298adb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298adb6 jmp 0x1298af91 */
  goto L_1298af91;
L_1298adbb:;
  /* 1298adbb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298adc2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298adc5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298adc7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298adca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1298adcc call 0x12985a50 */
  push32(0x1298add1u); f_12985a50();
  /* 1298add1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1298add4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1298add7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298adda mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1298addd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1298ade4 jmp 0x1298adfd */
  goto L_1298adfd;
  /* 1298ade6 mov eax, 1 */
  EAX = (0x1u);
  /* 1298adeb ret  */
  ESPCHK(0x1298aca0u, _esp0);
  ESP += 4; return;
  /* 1298adec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1298adef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1298adf6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298adfd:;
  /* 1298adfd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ae01 jne 0x1298ae0a */
  if (!C.zf) goto L_1298ae0a;
  /* 1298ae03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ae05 jmp 0x1298af91 */
  goto L_1298af91;
L_1298ae0a:;
  /* 1298ae0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298ae0d push edx */
  push32((uint32_t)(EDX));
  /* 1298ae0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ae11 push eax */
  push32((uint32_t)(EAX));
  /* 1298ae12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298ae15 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ae16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298ae19 push edx */
  push32((uint32_t)(EDX));
  /* 1298ae1a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ae1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1298ae1f push eax */
  push32((uint32_t)(EAX));
  /* 1298ae20 call dword ptr [0x129b030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b030c))), 0x1298ae26u);
  /* 1298ae26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ae28 jne 0x1298ae31 */
  if (!C.zf) goto L_1298ae31;
  /* 1298ae2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ae2c jmp 0x1298af91 */
  goto L_1298af91;
L_1298ae31:;
  /* 1298ae31 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ae33 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ae35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298ae38 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ae39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ae3c push edx */
  push32((uint32_t)(EDX));
  /* 1298ae3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ae40 push eax */
  push32((uint32_t)(EAX));
  /* 1298ae41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ae44 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ae45 call dword ptr [0x129b031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b031c))), 0x1298ae4bu);
  /* 1298ae4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1298ae4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ae52 jne 0x1298ae5b */
  if (!C.zf) goto L_1298ae5b;
  /* 1298ae54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ae56 jmp 0x1298af91 */
  goto L_1298af91;
L_1298ae5b:;
  /* 1298ae5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ae5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ae64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298ae66 je 0x1298aeab */
  if (C.zf) goto L_1298aeab;
  /* 1298ae68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ae6c je 0x1298aea6 */
  if (C.zf) goto L_1298aea6;
  /* 1298ae6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298ae71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ae74 jle 0x1298ae7d */
  if ((C.zf||C.sf!=C.of)) goto L_1298ae7d;
  /* 1298ae76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ae78 jmp 0x1298af91 */
  goto L_1298af91;
L_1298ae7d:;
  /* 1298ae7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1298ae80 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ae81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298ae84 push edx */
  push32((uint32_t)(EDX));
  /* 1298ae85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298ae88 push eax */
  push32((uint32_t)(EAX));
  /* 1298ae89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298ae8c push ecx */
  push32((uint32_t)(ECX));
  /* 1298ae8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ae90 push edx */
  push32((uint32_t)(EDX));
  /* 1298ae91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ae94 push eax */
  push32((uint32_t)(EAX));
  /* 1298ae95 call dword ptr [0x129b031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b031c))), 0x1298ae9bu);
  /* 1298ae9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ae9d jne 0x1298aea6 */
  if (!C.zf) goto L_1298aea6;
  /* 1298ae9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298aea1 jmp 0x1298af91 */
  goto L_1298af91;
L_1298aea6:;
  /* 1298aea6 jmp 0x1298af8a */
  goto L_1298af8a;
L_1298aeab:;
  /* 1298aeab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298aeae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1298aeb1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298aeb8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298aebb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298aebd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298aec0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1298aec2 call 0x12985a50 */
  push32(0x1298aec7u); f_12985a50();
  /* 1298aec7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1298aeca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1298aecd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1298aed0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1298aed3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1298aeda jmp 0x1298aef3 */
  goto L_1298aef3;
  /* 1298aedc mov eax, 1 */
  EAX = (0x1u);
  /* 1298aee1 ret  */
  ESPCHK(0x1298aca0u, _esp0);
  ESP += 4; return;
  /* 1298aee2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1298aee5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1298aeec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298aef3:;
  /* 1298aef3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298aef7 jne 0x1298af00 */
  if (!C.zf) goto L_1298af00;
  /* 1298aef9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298aefb jmp 0x1298af91 */
  goto L_1298af91;
L_1298af00:;
  /* 1298af00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298af03 push eax */
  push32((uint32_t)(EAX));
  /* 1298af04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298af07 push ecx */
  push32((uint32_t)(ECX));
  /* 1298af08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298af0b push edx */
  push32((uint32_t)(EDX));
  /* 1298af0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298af0f push eax */
  push32((uint32_t)(EAX));
  /* 1298af10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298af13 push ecx */
  push32((uint32_t)(ECX));
  /* 1298af14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298af17 push edx */
  push32((uint32_t)(EDX));
  /* 1298af18 call dword ptr [0x129b031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b031c))), 0x1298af1eu);
  /* 1298af1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298af20 jne 0x1298af26 */
  if (!C.zf) goto L_1298af26;
  /* 1298af22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298af24 jmp 0x1298af91 */
  goto L_1298af91;
L_1298af26:;
  /* 1298af26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298af2a jne 0x1298af5a */
  if (!C.zf) goto L_1298af5a;
  /* 1298af2c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af2e push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af30 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298af37 push eax */
  push32((uint32_t)(EAX));
  /* 1298af38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298af3b push ecx */
  push32((uint32_t)(ECX));
  /* 1298af3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1298af41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1298af44 push edx */
  push32((uint32_t)(EDX));
  /* 1298af45 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x1298af4bu);
  /* 1298af4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1298af4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298af52 jne 0x1298af58 */
  if (!C.zf) goto L_1298af58;
  /* 1298af54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298af56 jmp 0x1298af91 */
  goto L_1298af91;
L_1298af58:;
  /* 1298af58 jmp 0x1298af8a */
  goto L_1298af8a;
L_1298af5a:;
  /* 1298af5a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af5c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298af5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1298af61 push eax */
  push32((uint32_t)(EAX));
  /* 1298af62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1298af65 push ecx */
  push32((uint32_t)(ECX));
  /* 1298af66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298af69 push edx */
  push32((uint32_t)(EDX));
  /* 1298af6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298af6d push eax */
  push32((uint32_t)(EAX));
  /* 1298af6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1298af73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1298af76 push ecx */
  push32((uint32_t)(ECX));
  /* 1298af77 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x1298af7du);
  /* 1298af7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1298af80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298af84 jne 0x1298af8a */
  if (!C.zf) goto L_1298af8a;
  /* 1298af86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298af88 jmp 0x1298af91 */
  goto L_1298af91;
L_1298af8a:;
  /* 1298af8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298af8d jmp 0x1298af91 */
  goto L_1298af91;
L_1298af8f:;
  /* 1298af8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298af91:;
  /* 1298af91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1298af94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298af97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1298af9e pop edi */
  EDI = (pop32());
  /* 1298af9f pop esi */
  ESI = (pop32());
  /* 1298afa0 pop ebx */
  EBX = (pop32());
  /* 1298afa1 mov esp, ebp */
  ESP = (EBP);
  /* 1298afa3 pop ebp */
  EBP = (pop32());
  /* 1298afa4 ret  */
  ESPCHK(0x1298aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb0 @ 0x1298afb0 (80 bytes, 32 insns) */
void f_1298afb0(void) {
  FTRACE(0x1298afb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298afb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298afb1 mov ebp, esp */
  EBP = (ESP);
  /* 1298afb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298afb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298afb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298afbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298afbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298afc2:;
  /* 1298afc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298afc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298afc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298afcb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298afce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298afd0 je 0x1298afe7 */
  if (C.zf) goto L_1298afe7;
  /* 1298afd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298afd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298afd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298afda je 0x1298afe7 */
  if (C.zf) goto L_1298afe7;
  /* 1298afdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298afdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298afe2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298afe5 jmp 0x1298afc2 */
  goto L_1298afc2;
L_1298afe7:;
  /* 1298afe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298afea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298afed test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298afef jne 0x1298aff9 */
  if (!C.zf) goto L_1298aff9;
  /* 1298aff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298aff4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298aff7 jmp 0x1298affc */
  goto L_1298affc;
L_1298aff9:;
  /* 1298aff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1298affc:;
  /* 1298affc mov esp, ebp */
  ESP = (EBP);
  /* 1298affe pop ebp */
  EBP = (pop32());
  /* 1298afff ret  */
  ESPCHK(0x1298afb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b000 @ 0x1298b000 (130 bytes, 43 insns) */
void f_1298b000(void) {
  FTRACE(0x1298b000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b000 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b001 mov ebp, esp */
  EBP = (ESP);
  /* 1298b003 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b007 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b00d jae 0x1298b031 */
  if (!C.cf) goto L_1298b031;
  /* 1298b00f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b012 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b018 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b01b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b01e mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b025 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298b02a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298b02d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298b02f jne 0x1298b04c */
  if (!C.zf) goto L_1298b04c;
L_1298b031:;
  /* 1298b031 call 0x1298a780 */
  push32(0x1298b036u); f_1298a780();
  /* 1298b036 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298b03c call 0x1298a790 */
  push32(0x1298b041u); f_1298a790();
  /* 1298b041 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298b047 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b04a jmp 0x1298b07e */
  goto L_1298b07e;
L_1298b04c:;
  /* 1298b04c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b04f push edx */
  push32((uint32_t)(EDX));
  /* 1298b050 call 0x1298bfa0 */
  push32(0x1298b055u); f_1298bfa0();
  /* 1298b055 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b058 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298b05b push eax */
  push32((uint32_t)(EAX));
  /* 1298b05c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b05f push ecx */
  push32((uint32_t)(ECX));
  /* 1298b060 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b063 push edx */
  push32((uint32_t)(EDX));
  /* 1298b064 call 0x1298b090 */
  push32(0x1298b069u); f_1298b090();
  /* 1298b069 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b06c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298b06f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b072 push eax */
  push32((uint32_t)(EAX));
  /* 1298b073 call 0x1298c030 */
  push32(0x1298b078u); f_1298c030();
  /* 1298b078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b07b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298b07e:;
  /* 1298b07e mov esp, ebp */
  ESP = (EBP);
  /* 1298b080 pop ebp */
  EBP = (pop32());
  /* 1298b081 ret  */
  ESPCHK(0x1298b000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b090 @ 0x1298b090 (178 bytes, 56 insns) */
void f_1298b090(void) {
  FTRACE(0x1298b090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b090 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b091 mov ebp, esp */
  EBP = (ESP);
  /* 1298b093 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b096 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b099 push eax */
  push32((uint32_t)(EAX));
  /* 1298b09a call 0x1298be20 */
  push32(0x1298b09fu); f_1298be20();
  /* 1298b09f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b0a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298b0a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b0a9 jne 0x1298b0be */
  if (!C.zf) goto L_1298b0be;
  /* 1298b0ab call 0x1298a780 */
  push32(0x1298b0b0u); f_1298a780();
  /* 1298b0b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298b0b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b0b9 jmp 0x1298b13e */
  goto L_1298b13e;
L_1298b0be:;
  /* 1298b0be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298b0c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b0c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b0c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b0c7 push edx */
  push32((uint32_t)(EDX));
  /* 1298b0c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298b0cb push eax */
  push32((uint32_t)(EAX));
  /* 1298b0cc call dword ptr [0x129b0300] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0300))), 0x1298b0d2u);
  /* 1298b0d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298b0d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b0d9 jne 0x1298b0e6 */
  if (!C.zf) goto L_1298b0e6;
  /* 1298b0db call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298b0e1u);
  /* 1298b0e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298b0e4 jmp 0x1298b0ed */
  goto L_1298b0ed;
L_1298b0e6:;
  /* 1298b0e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1298b0ed:;
  /* 1298b0ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b0f1 je 0x1298b104 */
  if (C.zf) goto L_1298b104;
  /* 1298b0f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b0f7 call 0x1298a6e0 */
  push32(0x1298b0fcu); f_1298a6e0();
  /* 1298b0fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b0ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b102 jmp 0x1298b13e */
  goto L_1298b13e;
L_1298b104:;
  /* 1298b104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b107 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1298b10a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b10d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b110 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b113 mov ecx, dword ptr [edx*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298b11a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 1298b11e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 1298b121 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b124 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b127 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b12a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298b12d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b130 mov eax, dword ptr [eax*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298b137 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 1298b13b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1298b13e:;
  /* 1298b13e mov esp, ebp */
  ESP = (EBP);
  /* 1298b140 pop ebp */
  EBP = (pop32());
  /* 1298b141 ret  */
  ESPCHK(0x1298b090u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b150 @ 0x1298b150 (130 bytes, 43 insns) */
void f_1298b150(void) {
  FTRACE(0x1298b150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b150 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b151 mov ebp, esp */
  EBP = (ESP);
  /* 1298b153 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b157 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b15d jae 0x1298b181 */
  if (!C.cf) goto L_1298b181;
  /* 1298b15f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b162 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b165 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b168 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b16b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b16e mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b175 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298b17a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298b17d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298b17f jne 0x1298b19c */
  if (!C.zf) goto L_1298b19c;
L_1298b181:;
  /* 1298b181 call 0x1298a780 */
  push32(0x1298b186u); f_1298a780();
  /* 1298b186 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298b18c call 0x1298a790 */
  push32(0x1298b191u); f_1298a790();
  /* 1298b191 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298b197 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b19a jmp 0x1298b1ce */
  goto L_1298b1ce;
L_1298b19c:;
  /* 1298b19c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b19f push edx */
  push32((uint32_t)(EDX));
  /* 1298b1a0 call 0x1298bfa0 */
  push32(0x1298b1a5u); f_1298bfa0();
  /* 1298b1a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b1a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298b1ab push eax */
  push32((uint32_t)(EAX));
  /* 1298b1ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b1af push ecx */
  push32((uint32_t)(ECX));
  /* 1298b1b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b1b3 push edx */
  push32((uint32_t)(EDX));
  /* 1298b1b4 call 0x1298b1e0 */
  push32(0x1298b1b9u); f_1298b1e0();
  /* 1298b1b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b1bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298b1bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b1c2 push eax */
  push32((uint32_t)(EAX));
  /* 1298b1c3 call 0x1298c030 */
  push32(0x1298b1c8u); f_1298c030();
  /* 1298b1c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b1cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298b1ce:;
  /* 1298b1ce mov esp, ebp */
  ESP = (EBP);
  /* 1298b1d0 pop ebp */
  EBP = (pop32());
  /* 1298b1d1 ret  */
  ESPCHK(0x1298b150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1e0 @ 0x1298b1e0 (627 bytes, 182 insns) */
void f_1298b1e0(void) {
  FTRACE(0x1298b1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1298b1e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b1e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298b1f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298b1f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 1298b1f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b1fd jne 0x1298b206 */
  if (!C.zf) goto L_1298b206;
  /* 1298b1ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298b201 jmp 0x1298b44f */
  goto L_1298b44f;
L_1298b206:;
  /* 1298b206 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b209 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b20c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b20f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b212 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b215 mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b21c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298b221 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1298b224 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298b226 je 0x1298b238 */
  if (C.zf) goto L_1298b238;
  /* 1298b228 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298b22a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b22c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b22f push edx */
  push32((uint32_t)(EDX));
  /* 1298b230 call 0x1298b090 */
  push32(0x1298b235u); f_1298b090();
  /* 1298b235 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298b238:;
  /* 1298b238 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b23b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b23e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b241 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298b244 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b247 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298b24e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1298b253 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 1298b258 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b25a je 0x1298b36c */
  if (C.zf) goto L_1298b36c;
  /* 1298b260 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b263 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298b266 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1298b26d:;
  /* 1298b26d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b270 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b273 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b276 jae 0x1298b36a */
  if (!C.cf) goto L_1298b36a;
  /* 1298b27c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1298b282 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1298b285:;
  /* 1298b285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b288 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1298b28e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b290 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b296 jge 0x1298b2f7 */
  if ((C.sf==C.of)) goto L_1298b2f7;
  /* 1298b298 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b29b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b29e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b2a1 jae 0x1298b2f7 */
  if (!C.cf) goto L_1298b2f7;
  /* 1298b2a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b2a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298b2a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 1298b2ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b2b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b2b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298b2b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 1298b2be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b2c1 jne 0x1298b2e1 */
  if (!C.zf) goto L_1298b2e1;
  /* 1298b2c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 1298b2c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b2cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 1298b2d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b2d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 1298b2d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b2db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b2de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1298b2e1:;
  /* 1298b2e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b2e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 1298b2ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 1298b2ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b2ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b2f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298b2f5 jmp 0x1298b285 */
  goto L_1298b285;
L_1298b2f7:;
  /* 1298b2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b2f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 1298b2ff push edx */
  push32((uint32_t)(EDX));
  /* 1298b300 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b303 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 1298b309 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b30b push eax */
  push32((uint32_t)(EAX));
  /* 1298b30c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 1298b312 push edx */
  push32((uint32_t)(EDX));
  /* 1298b313 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b316 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b319 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b31c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298b31f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b322 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298b329 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 1298b32c push eax */
  push32((uint32_t)(EAX));
  /* 1298b32d call dword ptr [0x129b0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0254))), 0x1298b333u);
  /* 1298b333 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b335 je 0x1298b35a */
  if (C.zf) goto L_1298b35a;
  /* 1298b337 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298b33a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b340 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1298b343 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b346 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 1298b34c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b34e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b354 jge 0x1298b358 */
  if ((C.sf==C.of)) goto L_1298b358;
  /* 1298b356 jmp 0x1298b36a */
  goto L_1298b36a;
L_1298b358:;
  /* 1298b358 jmp 0x1298b365 */
  goto L_1298b365;
L_1298b35a:;
  /* 1298b35a call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298b360u);
  /* 1298b360 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298b363 jmp 0x1298b36a */
  goto L_1298b36a;
L_1298b365:;
  /* 1298b365 jmp 0x1298b26d */
  goto L_1298b26d;
L_1298b36a:;
  /* 1298b36a jmp 0x1298b3bc */
  goto L_1298b3bc;
L_1298b36c:;
  /* 1298b36c push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b36e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 1298b374 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b375 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298b378 push edx */
  push32((uint32_t)(EDX));
  /* 1298b379 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b37c push eax */
  push32((uint32_t)(EAX));
  /* 1298b37d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b380 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b386 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b389 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b38c mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b393 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1298b396 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b397 call dword ptr [0x129b0254] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0254))), 0x1298b39du);
  /* 1298b39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b39f je 0x1298b3b3 */
  if (C.zf) goto L_1298b3b3;
  /* 1298b3a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298b3a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 1298b3ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1298b3b1 jmp 0x1298b3bc */
  goto L_1298b3bc;
L_1298b3b3:;
  /* 1298b3b3 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298b3b9u);
  /* 1298b3b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298b3bc:;
  /* 1298b3bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b3c0 jne 0x1298b446 */
  if (!C.zf) goto L_1298b446;
  /* 1298b3c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b3ca je 0x1298b3fa */
  if (C.zf) goto L_1298b3fa;
  /* 1298b3cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b3d0 jne 0x1298b3e9 */
  if (!C.zf) goto L_1298b3e9;
  /* 1298b3d2 call 0x1298a780 */
  push32(0x1298b3d7u); f_1298a780();
  /* 1298b3d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298b3dd call 0x1298a790 */
  push32(0x1298b3e2u); f_1298a790();
  /* 1298b3e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298b3e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1298b3e7 jmp 0x1298b3f5 */
  goto L_1298b3f5;
L_1298b3e9:;
  /* 1298b3e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298b3ec push edx */
  push32((uint32_t)(EDX));
  /* 1298b3ed call 0x1298a6e0 */
  push32(0x1298b3f2u); f_1298a6e0();
  /* 1298b3f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298b3f5:;
  /* 1298b3f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b3f8 jmp 0x1298b44f */
  goto L_1298b44f;
L_1298b3fa:;
  /* 1298b3fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b3fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b400 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b403 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298b406 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b409 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298b410 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1298b415 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 1298b418 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b41a je 0x1298b42b */
  if (C.zf) goto L_1298b42b;
  /* 1298b41c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b41f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298b422 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b425 jne 0x1298b42b */
  if (!C.zf) goto L_1298b42b;
  /* 1298b427 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298b429 jmp 0x1298b44f */
  goto L_1298b44f;
L_1298b42b:;
  /* 1298b42b call 0x1298a780 */
  push32(0x1298b430u); f_1298a780();
  /* 1298b430 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 1298b436 call 0x1298a790 */
  push32(0x1298b43bu); f_1298a790();
  /* 1298b43b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298b441 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b444 jmp 0x1298b44f */
  goto L_1298b44f;
L_1298b446:;
  /* 1298b446 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298b449 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1298b44f:;
  /* 1298b44f mov esp, ebp */
  ESP = (EBP);
  /* 1298b451 pop ebp */
  EBP = (pop32());
  /* 1298b452 ret  */
  ESPCHK(0x1298b1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b460 @ 0x1298b460 (199 bytes, 68 insns) */
void f_1298b460(void) {
  FTRACE(0x1298b460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b460 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b461 mov ebp, esp */
  EBP = (ESP);
  /* 1298b463 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b464 push ebx */
  push32((uint32_t)(EBX));
  /* 1298b465 push esi */
  push32((uint32_t)(ESI));
  /* 1298b466 push edi */
  push32((uint32_t)(EDI));
L_1298b467:;
  /* 1298b467 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b46b jne 0x1298b48b */
  if (!C.zf) goto L_1298b48b;
  /* 1298b46d push 0x129a9e5c */
  push32((uint32_t)(0x129a9e5cu));
  /* 1298b472 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b474 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1298b476 push 0x129a9f28 */
  push32((uint32_t)(0x129a9f28u));
  /* 1298b47b push 2 */
  push32((uint32_t)(0x2u));
  /* 1298b47d call 0x12981970 */
  push32(0x1298b482u); f_12981970();
  /* 1298b482 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b488 jne 0x1298b48b */
  if (!C.zf) goto L_1298b48b;
  /* 1298b48a int3  */
  x86_unimpl("int3 @ 0x1298b48a");
L_1298b48b:;
  /* 1298b48b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298b48d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b48f jne 0x1298b467 */
  if (!C.zf) goto L_1298b467;
  /* 1298b491 mov ecx, dword ptr [0x129ae6a4] */
  ECX = (r32((uint32_t)(0x129ae6a4)));
  /* 1298b497 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b49a mov dword ptr [0x129ae6a4], ecx */
  w32((uint32_t)(0x129ae6a4), (ECX));
  /* 1298b4a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b4a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298b4a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1298b4a8 push 0x129a9f28 */
  push32((uint32_t)(0x129a9f28u));
  /* 1298b4ad push 2 */
  push32((uint32_t)(0x2u));
  /* 1298b4af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1298b4b4 call 0x129828b0 */
  push32(0x1298b4b9u); f_129828b0();
  /* 1298b4b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b4bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1298b4c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b4c9 je 0x1298b4e6 */
  if (C.zf) goto L_1298b4e6;
  /* 1298b4cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298b4d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1298b4d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1298b4da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 1298b4e4 jmp 0x1298b50b */
  goto L_1298b50b;
L_1298b4e6:;
  /* 1298b4e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298b4ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1298b4ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1298b4f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b4fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b4fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1298b501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b504 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_1298b50b:;
  /* 1298b50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b50e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b511 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298b514 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1298b516 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b519 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1298b520 pop edi */
  EDI = (pop32());
  /* 1298b521 pop esi */
  ESI = (pop32());
  /* 1298b522 pop ebx */
  EBX = (pop32());
  /* 1298b523 mov esp, ebp */
  ESP = (EBP);
  /* 1298b525 pop ebp */
  EBP = (pop32());
  /* 1298b526 ret  */
  ESPCHK(0x1298b460u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x1298b530 (50 bytes, 17 insns) */
void f_1298b530(void) {
  FTRACE(0x1298b530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b530 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b531 mov ebp, esp */
  EBP = (ESP);
  /* 1298b533 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b536 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b53c jb 0x1298b542 */
  if (C.cf) goto L_1298b542;
  /* 1298b53e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298b540 jmp 0x1298b560 */
  goto L_1298b560;
L_1298b542:;
  /* 1298b542 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b545 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b548 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b54b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b54e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b551 mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b558 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298b55d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_1298b560:;
  /* 1298b560 pop ebp */
  EBP = (pop32());
  /* 1298b561 ret  */
  ESPCHK(0x1298b530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b570 @ 0x1298b570 (300 bytes, 80 insns) */
void f_1298b570(void) {
  FTRACE(0x1298b570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b570 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b571 mov ebp, esp */
  EBP = (ESP);
  /* 1298b573 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b574 cmp dword ptr [0x129afb60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129afb60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b57b jne 0x1298b589 */
  if (!C.zf) goto L_1298b589;
  /* 1298b57d mov dword ptr [0x129afb60], 0x200 */
  w32((uint32_t)(0x129afb60), (0x200u));
  /* 1298b587 jmp 0x1298b59c */
  goto L_1298b59c;
L_1298b589:;
  /* 1298b589 cmp dword ptr [0x129afb60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x129afb60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b590 jge 0x1298b59c */
  if ((C.sf==C.of)) goto L_1298b59c;
  /* 1298b592 mov dword ptr [0x129afb60], 0x14 */
  w32((uint32_t)(0x129afb60), (0x14u));
L_1298b59c:;
  /* 1298b59c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 1298b5a1 push 0x129a9f34 */
  push32((uint32_t)(0x129a9f34u));
  /* 1298b5a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298b5a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 1298b5aa mov eax, dword ptr [0x129afb60] */
  EAX = (r32((uint32_t)(0x129afb60)));
  /* 1298b5af push eax */
  push32((uint32_t)(EAX));
  /* 1298b5b0 call 0x12982cc0 */
  push32(0x1298b5b5u); f_12982cc0();
  /* 1298b5b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b5b8 mov dword ptr [0x129ae818], eax */
  w32((uint32_t)(0x129ae818), (EAX));
  /* 1298b5bd cmp dword ptr [0x129ae818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b5c4 jne 0x1298b605 */
  if (!C.zf) goto L_1298b605;
  /* 1298b5c6 mov dword ptr [0x129afb60], 0x14 */
  w32((uint32_t)(0x129afb60), (0x14u));
  /* 1298b5d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 1298b5d5 push 0x129a9f34 */
  push32((uint32_t)(0x129a9f34u));
  /* 1298b5da push 2 */
  push32((uint32_t)(0x2u));
  /* 1298b5dc push 4 */
  push32((uint32_t)(0x4u));
  /* 1298b5de mov ecx, dword ptr [0x129afb60] */
  ECX = (r32((uint32_t)(0x129afb60)));
  /* 1298b5e4 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b5e5 call 0x12982cc0 */
  push32(0x1298b5eau); f_12982cc0();
  /* 1298b5ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b5ed mov dword ptr [0x129ae818], eax */
  w32((uint32_t)(0x129ae818), (EAX));
  /* 1298b5f2 cmp dword ptr [0x129ae818], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae818))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b5f9 jne 0x1298b605 */
  if (!C.zf) goto L_1298b605;
  /* 1298b5fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1298b5fd call 0x12981820 */
  push32(0x1298b602u); f_12981820();
  /* 1298b602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298b605:;
  /* 1298b605 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298b60c jmp 0x1298b617 */
  goto L_1298b617;
L_1298b60e:;
  /* 1298b60e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b611 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b614 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298b617:;
  /* 1298b617 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b61b jge 0x1298b636 */
  if ((C.sf==C.of)) goto L_1298b636;
  /* 1298b61d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b620 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b623 add eax, 0x129ad120 */
  { uint32_t _a=(EAX),_b=(0x129ad120u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b628 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b62b mov edx, dword ptr [0x129ae818] */
  EDX = (r32((uint32_t)(0x129ae818)));
  /* 1298b631 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 1298b634 jmp 0x1298b60e */
  goto L_1298b60e;
L_1298b636:;
  /* 1298b636 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298b63d jmp 0x1298b648 */
  goto L_1298b648;
L_1298b63f:;
  /* 1298b63f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b642 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b645 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298b648:;
  /* 1298b648 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b64c jge 0x1298b698 */
  if ((C.sf==C.of)) goto L_1298b698;
  /* 1298b64e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b651 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b654 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b657 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b65a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b65d mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b664 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b668 je 0x1298b686 */
  if (C.zf) goto L_1298b686;
  /* 1298b66a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b66d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b670 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b673 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298b676 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298b679 mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298b680 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b684 jne 0x1298b696 */
  if (!C.zf) goto L_1298b696;
L_1298b686:;
  /* 1298b686 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298b689 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298b68c mov dword ptr [ecx + 0x129ad130], 0xffffffff */
  w32((uint32_t)(ECX + 0x129ad130), (0xffffffffu));
L_1298b696:;
  /* 1298b696 jmp 0x1298b63f */
  goto L_1298b63f;
L_1298b698:;
  /* 1298b698 mov esp, ebp */
  ESP = (EBP);
  /* 1298b69a pop ebp */
  EBP = (pop32());
  /* 1298b69b ret  */
  ESPCHK(0x1298b570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6a0 @ 0x1298b6a0 (26 bytes, 9 insns) */
void f_1298b6a0(void) {
  FTRACE(0x1298b6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b6a1 mov ebp, esp */
  EBP = (ESP);
  /* 1298b6a3 call 0x1298c2a0 */
  push32(0x1298b6a8u); f_1298c2a0();
  /* 1298b6a8 movsx eax, byte ptr [0x129ae4bc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x129ae4bc))));
  /* 1298b6af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298b6b1 je 0x1298b6b8 */
  if (C.zf) goto L_1298b6b8;
  /* 1298b6b3 call 0x1298c060 */
  push32(0x1298b6b8u); f_1298c060();
L_1298b6b8:;
  /* 1298b6b8 pop ebp */
  EBP = (pop32());
  /* 1298b6b9 ret  */
  ESPCHK(0x1298b6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6c0 @ 0x1298b6c0 (61 bytes, 20 insns) */
void f_1298b6c0(void) {
  FTRACE(0x1298b6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b6c1 mov ebp, esp */
  EBP = (ESP);
  /* 1298b6c3 cmp dword ptr [ebp + 8], 0x129ad120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ad120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b6ca jb 0x1298b6ee */
  if (C.cf) goto L_1298b6ee;
  /* 1298b6cc cmp dword ptr [ebp + 8], 0x129ad380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ad380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b6d3 ja 0x1298b6ee */
  if ((!C.cf&&!C.zf)) goto L_1298b6ee;
  /* 1298b6d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b6d8 sub eax, 0x129ad120 */
  { uint32_t _a=(EAX),_b=(0x129ad120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b6dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b6e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b6e3 push eax */
  push32((uint32_t)(EAX));
  /* 1298b6e4 call 0x129862b0 */
  push32(0x1298b6e9u); f_129862b0();
  /* 1298b6e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b6ec jmp 0x1298b6fb */
  goto L_1298b6fb;
L_1298b6ee:;
  /* 1298b6ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b6f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b6f4 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b6f5 call dword ptr [0x129b02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e4))), 0x1298b6fbu);
L_1298b6fb:;
  /* 1298b6fb pop ebp */
  EBP = (pop32());
  /* 1298b6fc ret  */
  ESPCHK(0x1298b6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b700 @ 0x1298b700 (41 bytes, 16 insns) */
void f_1298b700(void) {
  FTRACE(0x1298b700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b700 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b701 mov ebp, esp */
  EBP = (ESP);
  /* 1298b703 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b707 jge 0x1298b71a */
  if ((C.sf==C.of)) goto L_1298b71a;
  /* 1298b709 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b70c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b70f push eax */
  push32((uint32_t)(EAX));
  /* 1298b710 call 0x129862b0 */
  push32(0x1298b715u); f_129862b0();
  /* 1298b715 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b718 jmp 0x1298b727 */
  goto L_1298b727;
L_1298b71a:;
  /* 1298b71a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b71d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b720 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b721 call dword ptr [0x129b02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e4))), 0x1298b727u);
L_1298b727:;
  /* 1298b727 pop ebp */
  EBP = (pop32());
  /* 1298b728 ret  */
  ESPCHK(0x1298b700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b730 @ 0x1298b730 (61 bytes, 20 insns) */
void f_1298b730(void) {
  FTRACE(0x1298b730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b730 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b731 mov ebp, esp */
  EBP = (ESP);
  /* 1298b733 cmp dword ptr [ebp + 8], 0x129ad120 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ad120u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b73a jb 0x1298b75e */
  if (C.cf) goto L_1298b75e;
  /* 1298b73c cmp dword ptr [ebp + 8], 0x129ad380 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x129ad380u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b743 ja 0x1298b75e */
  if ((!C.cf&&!C.zf)) goto L_1298b75e;
  /* 1298b745 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b748 sub eax, 0x129ad120 */
  { uint32_t _a=(EAX),_b=(0x129ad120u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b74d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298b750 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b753 push eax */
  push32((uint32_t)(EAX));
  /* 1298b754 call 0x12986350 */
  push32(0x1298b759u); f_12986350();
  /* 1298b759 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b75c jmp 0x1298b76b */
  goto L_1298b76b;
L_1298b75e:;
  /* 1298b75e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b761 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b764 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b765 call dword ptr [0x129b02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e8))), 0x1298b76bu);
L_1298b76b:;
  /* 1298b76b pop ebp */
  EBP = (pop32());
  /* 1298b76c ret  */
  ESPCHK(0x1298b730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b770 @ 0x1298b770 (41 bytes, 16 insns) */
void f_1298b770(void) {
  FTRACE(0x1298b770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b770 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b771 mov ebp, esp */
  EBP = (ESP);
  /* 1298b773 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b777 jge 0x1298b78a */
  if ((C.sf==C.of)) goto L_1298b78a;
  /* 1298b779 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b77c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b77f push eax */
  push32((uint32_t)(EAX));
  /* 1298b780 call 0x12986350 */
  push32(0x1298b785u); f_12986350();
  /* 1298b785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b788 jmp 0x1298b797 */
  goto L_1298b797;
L_1298b78a:;
  /* 1298b78a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b78d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b790 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b791 call dword ptr [0x129b02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e8))), 0x1298b797u);
L_1298b797:;
  /* 1298b797 pop ebp */
  EBP = (pop32());
  /* 1298b798 ret  */
  ESPCHK(0x1298b770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7a0 @ 0x1298b7a0 (119 bytes, 34 insns) */
void f_1298b7a0(void) {
  FTRACE(0x1298b7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b7a1 mov ebp, esp */
  EBP = (ESP);
  /* 1298b7a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b7a6 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298b7ab call dword ptr [0x129b0268] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0268))), 0x1298b7b1u);
  /* 1298b7b1 cmp dword ptr [0x129ae804], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae804))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b7b8 je 0x1298b7d8 */
  if (C.zf) goto L_1298b7d8;
  /* 1298b7ba push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298b7bf call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x1298b7c5u);
  /* 1298b7c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298b7c7 call 0x129862b0 */
  push32(0x1298b7ccu); f_129862b0();
  /* 1298b7cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b7cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298b7d6 jmp 0x1298b7df */
  goto L_1298b7df;
L_1298b7d8:;
  /* 1298b7d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1298b7df:;
  /* 1298b7df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 1298b7e3 push eax */
  push32((uint32_t)(EAX));
  /* 1298b7e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b7e7 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b7e8 call 0x1298b820 */
  push32(0x1298b7edu); f_1298b820();
  /* 1298b7ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b7f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298b7f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b7f7 je 0x1298b805 */
  if (C.zf) goto L_1298b805;
  /* 1298b7f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298b7fb call 0x12986350 */
  push32(0x1298b800u); f_12986350();
  /* 1298b800 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b803 jmp 0x1298b810 */
  goto L_1298b810;
L_1298b805:;
  /* 1298b805 push 0x129ae814 */
  push32((uint32_t)(0x129ae814u));
  /* 1298b80a call dword ptr [0x129b0258] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0258))), 0x1298b810u);
L_1298b810:;
  /* 1298b810 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298b813 mov esp, ebp */
  ESP = (EBP);
  /* 1298b815 pop ebp */
  EBP = (pop32());
  /* 1298b816 ret  */
  ESPCHK(0x1298b7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x1298b820 (160 bytes, 50 insns) */
void f_1298b820(void) {
  FTRACE(0x1298b820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b820 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b821 mov ebp, esp */
  EBP = (ESP);
  /* 1298b823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298b826 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b82a jne 0x1298b833 */
  if (!C.zf) goto L_1298b833;
  /* 1298b82c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298b82e jmp 0x1298b8bc */
  goto L_1298b8bc;
L_1298b833:;
  /* 1298b833 cmp dword ptr [0x129ae688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b83a jne 0x1298b86a */
  if (!C.zf) goto L_1298b86a;
  /* 1298b83c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298b83f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b844 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b849 jle 0x1298b85b */
  if ((C.zf||C.sf!=C.of)) goto L_1298b85b;
  /* 1298b84b call 0x1298a780 */
  push32(0x1298b850u); f_1298a780();
  /* 1298b850 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1298b856 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b859 jmp 0x1298b8bc */
  goto L_1298b8bc;
L_1298b85b:;
  /* 1298b85b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b85e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 1298b861 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 1298b863 mov eax, 1 */
  EAX = (0x1u);
  /* 1298b868 jmp 0x1298b8bc */
  goto L_1298b8bc;
L_1298b86a:;
  /* 1298b86a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298b871 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1298b874 push eax */
  push32((uint32_t)(EAX));
  /* 1298b875 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b877 mov ecx, dword ptr [0x129acea4] */
  ECX = (r32((uint32_t)(0x129acea4)));
  /* 1298b87d push ecx */
  push32((uint32_t)(ECX));
  /* 1298b87e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b881 push edx */
  push32((uint32_t)(EDX));
  /* 1298b882 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298b884 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1298b887 push eax */
  push32((uint32_t)(EAX));
  /* 1298b888 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1298b88d mov ecx, dword ptr [0x129ae698] */
  ECX = (r32((uint32_t)(0x129ae698)));
  /* 1298b893 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b894 call dword ptr [0x129b021c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b021c))), 0x1298b89au);
  /* 1298b89a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298b89d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b8a1 je 0x1298b8a9 */
  if (C.zf) goto L_1298b8a9;
  /* 1298b8a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b8a7 je 0x1298b8b9 */
  if (C.zf) goto L_1298b8b9;
L_1298b8a9:;
  /* 1298b8a9 call 0x1298a780 */
  push32(0x1298b8aeu); f_1298a780();
  /* 1298b8ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 1298b8b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298b8b7 jmp 0x1298b8bc */
  goto L_1298b8bc;
L_1298b8b9:;
  /* 1298b8b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298b8bc:;
  /* 1298b8bc mov esp, ebp */
  ESP = (EBP);
  /* 1298b8be pop ebp */
  EBP = (pop32());
  /* 1298b8bf ret  */
  ESPCHK(0x1298b820u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1298b8c0 (32 bytes, 18 insns) */
void f_1298b8c0(void) {
  FTRACE(0x1298b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 1298b8c3 push ebx */
  push32((uint32_t)(EBX));
  /* 1298b8c4 push esi */
  push32((uint32_t)(ESI));
  /* 1298b8c5 push edi */
  push32((uint32_t)(EDI));
  /* 1298b8c6 push ebp */
  push32((uint32_t)(EBP));
  /* 1298b8c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b8c9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298b8cb push 0x1298b8d8 */
  push32((uint32_t)(0x1298b8d8u));
  /* 1298b8d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1298b8d3 call 0x1299300c */
  push32(0x1298b8d8u); f_1299300c();
  /* 1298b8d8 pop ebp */
  EBP = (pop32());
  /* 1298b8d9 pop edi */
  EDI = (pop32());
  /* 1298b8da pop esi */
  ESI = (pop32());
  /* 1298b8db pop ebx */
  EBX = (pop32());
  /* 1298b8dc mov esp, ebp */
  ESP = (EBP);
  /* 1298b8de pop ebp */
  EBP = (pop32());
  /* 1298b8df ret  */
  ESPCHK(0x1298b8c0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1298b902 (104 bytes, 33 insns) */
void f_1298b902(void) {
  FTRACE(0x1298b902u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b902 push ebx */
  push32((uint32_t)(EBX));
  /* 1298b903 push esi */
  push32((uint32_t)(ESI));
  /* 1298b904 push edi */
  push32((uint32_t)(EDI));
  /* 1298b905 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1298b909 push eax */
  push32((uint32_t)(EAX));
  /* 1298b90a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1298b90c push 0x1298b8e0 */
  push32((uint32_t)(0x1298b8e0u));
  /* 1298b911 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1298b918 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1298b91f:;
  /* 1298b91f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1298b923 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298b926 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1298b929 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b92c je 0x1298b95c */
  if (C.zf) goto L_1298b95c;
  /* 1298b92e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b932 je 0x1298b95c */
  if (C.zf) goto L_1298b95c;
  /* 1298b934 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1298b937 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1298b93a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1298b93e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1298b941 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298b946 jne 0x1298b95a */
  if (!C.zf) goto L_1298b95a;
  /* 1298b948 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1298b94d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1298b951 call 0x1298b996 */
  push32(0x1298b956u); f_1298b996();
  /* 1298b956 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1298b95au);
L_1298b95a:;
  /* 1298b95a jmp 0x1298b91f */
  goto L_1298b91f;
L_1298b95c:;
  /* 1298b95c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1298b963 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298b966 pop edi */
  EDI = (pop32());
  /* 1298b967 pop esi */
  ESI = (pop32());
  /* 1298b968 pop ebx */
  EBX = (pop32());
  /* 1298b969 ret  */
  ESPCHK(0x1298b902u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b996 @ 0x1298b996 (24 bytes, 10 insns) */
void f_1298b996(void) {
  FTRACE(0x1298b996u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298b996 push ebx */
  push32((uint32_t)(EBX));
  /* 1298b997 push ecx */
  push32((uint32_t)(ECX));
  /* 1298b998 mov ebx, 0x129ad3b8 */
  EBX = (0x129ad3b8u);
  /* 1298b99d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298b9a0 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1298b9a3 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1298b9a6 mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1298b9a9 pop ecx */
  ECX = (pop32());
  /* 1298b9aa pop ebx */
  EBX = (pop32());
  /* 1298b9ab ret 4 */
  ESPCHK(0x1298b996u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba75 @ 0x1298ba75 (27 bytes, 11 insns) */
void f_1298ba75(void) {
  FTRACE(0x1298ba75u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ba75 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ba76 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1298ba7a mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1298ba7c mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1298ba7f push eax */
  push32((uint32_t)(EAX));
  /* 1298ba80 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1298ba83 push eax */
  push32((uint32_t)(EAX));
  /* 1298ba84 call 0x1298b902 */
  push32(0x1298ba89u); f_1298b902();
  /* 1298ba89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ba8c pop ebp */
  EBP = (pop32());
  /* 1298ba8d ret 4 */
  ESPCHK(0x1298ba75u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba90 @ 0x1298ba90 (482 bytes, 138 insns) */
void f_1298ba90(void) {
  FTRACE(0x1298ba90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ba90 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ba91 mov ebp, esp */
  EBP = (ESP);
  /* 1298ba93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ba96 push esi */
  push32((uint32_t)(ESI));
  /* 1298ba97 mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
  /* 1298ba9e push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1298baa0 call 0x129862b0 */
  push32(0x1298baa5u); f_129862b0();
  /* 1298baa5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298baa8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298baaf jmp 0x1298baba */
  goto L_1298baba;
L_1298bab1:;
  /* 1298bab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bab7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298baba:;
  /* 1298baba cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298babe jge 0x1298bc60 */
  if ((C.sf==C.of)) goto L_1298bc60;
  /* 1298bac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bac7 cmp dword ptr [ecx*4 + 0x129afe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x129afe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bacf je 0x1298bbc6 */
  if (C.zf) goto L_1298bbc6;
  /* 1298bad5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bad8 mov eax, dword ptr [edx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298badf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298bae2 jmp 0x1298baed */
  goto L_1298baed;
L_1298bae4:;
  /* 1298bae4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bae7 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298baea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298baed:;
  /* 1298baed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298baf0 mov eax, dword ptr [edx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298baf7 add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bafc cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298baff jae 0x1298bbb6 */
  if (!C.cf) goto L_1298bbb6;
  /* 1298bb05 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb08 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1298bb0c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1298bb0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298bb11 jne 0x1298bbb1 */
  if (!C.zf) goto L_1298bbb1;
  /* 1298bb17 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb1a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bb1e jne 0x1298bb59 */
  if (!C.zf) goto L_1298bb59;
  /* 1298bb20 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1298bb22 call 0x129862b0 */
  push32(0x1298bb27u); f_129862b0();
  /* 1298bb27 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bb2a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb2d cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bb31 jne 0x1298bb4f */
  if (!C.zf) goto L_1298bb4f;
  /* 1298bb33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb36 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bb39 push edx */
  push32((uint32_t)(EDX));
  /* 1298bb3a call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x1298bb40u);
  /* 1298bb40 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb43 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298bb46 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bb49 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb4c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1298bb4f:;
  /* 1298bb4f push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1298bb51 call 0x12986350 */
  push32(0x1298bb56u); f_12986350();
  /* 1298bb56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298bb59:;
  /* 1298bb59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb5c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bb5f push eax */
  push32((uint32_t)(EAX));
  /* 1298bb60 call dword ptr [0x129b02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e4))), 0x1298bb66u);
  /* 1298bb66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb69 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 1298bb6d and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1298bb70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298bb72 je 0x1298bb86 */
  if (C.zf) goto L_1298bb86;
  /* 1298bb74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb77 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bb7a push eax */
  push32((uint32_t)(EAX));
  /* 1298bb7b call dword ptr [0x129b02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e8))), 0x1298bb81u);
  /* 1298bb81 jmp 0x1298bae4 */
  goto L_1298bae4;
L_1298bb86:;
  /* 1298bb86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb89 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1298bb8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bb92 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298bb95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bb98 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bb9b sub eax, dword ptr [edx*4 + 0x129afe60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX*4 + 0x129afe60))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298bba2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298bba3 mov esi, 0x24 */
  ESI = (0x24u);
  /* 1298bba8 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1298bbaa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bbac mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298bbaf jmp 0x1298bbb6 */
  goto L_1298bbb6;
L_1298bbb1:;
  /* 1298bbb1 jmp 0x1298bae4 */
  goto L_1298bae4;
L_1298bbb6:;
  /* 1298bbb6 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bbba je 0x1298bbc1 */
  if (C.zf) goto L_1298bbc1;
  /* 1298bbbc jmp 0x1298bc60 */
  goto L_1298bc60;
L_1298bbc1:;
  /* 1298bbc1 jmp 0x1298bc5b */
  goto L_1298bc5b;
L_1298bbc6:;
  /* 1298bbc6 push 0x79 */
  push32((uint32_t)(0x79u));
  /* 1298bbc8 push 0x129a9f3c */
  push32((uint32_t)(0x129a9f3cu));
  /* 1298bbcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1298bbcf push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1298bbd4 call 0x129828b0 */
  push32(0x1298bbd9u); f_129828b0();
  /* 1298bbd9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bbdc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298bbdf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bbe3 je 0x1298bc59 */
  if (C.zf) goto L_1298bc59;
  /* 1298bbe5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bbe8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bbeb mov dword ptr [eax*4 + 0x129afe60], ecx */
  w32((uint32_t)(EAX*4 + 0x129afe60), (ECX));
  /* 1298bbf2 mov edx, dword ptr [0x129aff9c] */
  EDX = (r32((uint32_t)(0x129aff9c)));
  /* 1298bbf8 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bbfb mov dword ptr [0x129aff9c], edx */
  w32((uint32_t)(0x129aff9c), (EDX));
  /* 1298bc01 jmp 0x1298bc0c */
  goto L_1298bc0c;
L_1298bc03:;
  /* 1298bc03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bc06 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bc09 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298bc0c:;
  /* 1298bc0c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bc0f mov edx, dword ptr [ecx*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298bc16 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bc1c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bc1f jae 0x1298bc44 */
  if (!C.cf) goto L_1298bc44;
  /* 1298bc21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bc24 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1298bc28 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bc2b mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1298bc31 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bc34 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1298bc38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bc3b mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1298bc42 jmp 0x1298bc03 */
  goto L_1298bc03;
L_1298bc44:;
  /* 1298bc44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298bc47 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298bc4a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298bc4d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bc50 push edx */
  push32((uint32_t)(EDX));
  /* 1298bc51 call 0x1298bfa0 */
  push32(0x1298bc56u); f_1298bfa0();
  /* 1298bc56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298bc59:;
  /* 1298bc59 jmp 0x1298bc60 */
  goto L_1298bc60;
L_1298bc5b:;
  /* 1298bc5b jmp 0x1298bab1 */
  goto L_1298bab1;
L_1298bc60:;
  /* 1298bc60 push 0x12 */
  push32((uint32_t)(0x12u));
  /* 1298bc62 call 0x12986350 */
  push32(0x1298bc67u); f_12986350();
  /* 1298bc67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bc6a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bc6d pop esi */
  ESI = (pop32());
  /* 1298bc6e mov esp, ebp */
  ESP = (EBP);
  /* 1298bc70 pop ebp */
  EBP = (pop32());
  /* 1298bc71 ret  */
  ESPCHK(0x1298ba90u, _esp0);
  ESP += 4; return;
}

/* __set_osfhnd @ 0x1298bc80 (183 bytes, 57 insns) */
void f_1298bc80(void) {
  FTRACE(0x1298bc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298bc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1298bc81 mov ebp, esp */
  EBP = (ESP);
  /* 1298bc83 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bc84 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bc87 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bc8d jae 0x1298bd1a */
  if (!C.cf) goto L_1298bd1a;
  /* 1298bc93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bc96 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298bc99 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bc9c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298bc9f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bca2 mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298bca9 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bcad jne 0x1298bd1a */
  if (!C.zf) goto L_1298bd1a;
  /* 1298bcaf cmp dword ptr [0x129ae47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bcb6 jne 0x1298bcfa */
  if (!C.zf) goto L_1298bcfa;
  /* 1298bcb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bcbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298bcbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bcc2 je 0x1298bcd2 */
  if (C.zf) goto L_1298bcd2;
  /* 1298bcc4 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bcc8 je 0x1298bce0 */
  if (C.zf) goto L_1298bce0;
  /* 1298bcca cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bcce je 0x1298bcee */
  if (C.zf) goto L_1298bcee;
  /* 1298bcd0 jmp 0x1298bcfa */
  goto L_1298bcfa;
L_1298bcd2:;
  /* 1298bcd2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298bcd5 push edx */
  push32((uint32_t)(EDX));
  /* 1298bcd6 push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1298bcd8 call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bcdeu);
  /* 1298bcde jmp 0x1298bcfa */
  goto L_1298bcfa;
L_1298bce0:;
  /* 1298bce0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298bce3 push eax */
  push32((uint32_t)(EAX));
  /* 1298bce4 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1298bce6 call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bcecu);
  /* 1298bcec jmp 0x1298bcfa */
  goto L_1298bcfa;
L_1298bcee:;
  /* 1298bcee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298bcf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bcf2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1298bcf4 call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bcfau);
L_1298bcfa:;
  /* 1298bcfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bcfd sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1298bd00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd03 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1298bd06 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bd09 mov ecx, dword ptr [edx*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298bd10 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298bd13 mov dword ptr [ecx + eax], edx */
  w32((uint32_t)(ECX + EAX*1), (EDX));
  /* 1298bd16 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298bd18 jmp 0x1298bd33 */
  goto L_1298bd33;
L_1298bd1a:;
  /* 1298bd1a call 0x1298a780 */
  push32(0x1298bd1fu); f_1298a780();
  /* 1298bd1f mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298bd25 call 0x1298a790 */
  push32(0x1298bd2au); f_1298a790();
  /* 1298bd2a mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298bd30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1298bd33:;
  /* 1298bd33 mov esp, ebp */
  ESP = (EBP);
  /* 1298bd35 pop ebp */
  EBP = (pop32());
  /* 1298bd36 ret  */
  ESPCHK(0x1298bc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd40 @ 0x1298bd40 (216 bytes, 63 insns) */
void f_1298bd40(void) {
  FTRACE(0x1298bd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298bd40 push ebp */
  push32((uint32_t)(EBP));
  /* 1298bd41 mov ebp, esp */
  EBP = (ESP);
  /* 1298bd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bd44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd47 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bd4d jae 0x1298bdfb */
  if (!C.cf) goto L_1298bdfb;
  /* 1298bd53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd56 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298bd59 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd5c and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298bd5f imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bd62 mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298bd69 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298bd6e and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298bd71 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298bd73 je 0x1298bdfb */
  if (C.zf) goto L_1298bdfb;
  /* 1298bd79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd7c sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1298bd7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bd82 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1298bd85 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bd88 mov ecx, dword ptr [edx*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298bd8f cmp dword ptr [ecx + eax], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + EAX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bd93 je 0x1298bdfb */
  if (C.zf) goto L_1298bdfb;
  /* 1298bd95 cmp dword ptr [0x129ae47c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129ae47c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bd9c jne 0x1298bdda */
  if (!C.zf) goto L_1298bdda;
  /* 1298bd9e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bda1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298bda4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bda8 je 0x1298bdb8 */
  if (C.zf) goto L_1298bdb8;
  /* 1298bdaa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bdae je 0x1298bdc4 */
  if (C.zf) goto L_1298bdc4;
  /* 1298bdb0 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bdb4 je 0x1298bdd0 */
  if (C.zf) goto L_1298bdd0;
  /* 1298bdb6 jmp 0x1298bdda */
  goto L_1298bdda;
L_1298bdb8:;
  /* 1298bdb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298bdba push -0xa */
  push32((uint32_t)(0xfffffff6u));
  /* 1298bdbc call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bdc2u);
  /* 1298bdc2 jmp 0x1298bdda */
  goto L_1298bdda;
L_1298bdc4:;
  /* 1298bdc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298bdc6 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1298bdc8 call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bdceu);
  /* 1298bdce jmp 0x1298bdda */
  goto L_1298bdda;
L_1298bdd0:;
  /* 1298bdd0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298bdd2 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1298bdd4 call dword ptr [0x129b0324] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0324))), 0x1298bddau);
L_1298bdda:;
  /* 1298bdda mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bddd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298bde0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bde3 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298bde6 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bde9 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298bdf0 mov dword ptr [edx + ecx], 0xffffffff */
  w32((uint32_t)(EDX + ECX*1), (0xffffffffu));
  /* 1298bdf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298bdf9 jmp 0x1298be14 */
  goto L_1298be14;
L_1298bdfb:;
  /* 1298bdfb call 0x1298a780 */
  push32(0x1298be00u); f_1298a780();
  /* 1298be00 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298be06 call 0x1298a790 */
  push32(0x1298be0bu); f_1298a790();
  /* 1298be0b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298be11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1298be14:;
  /* 1298be14 mov esp, ebp */
  ESP = (EBP);
  /* 1298be16 pop ebp */
  EBP = (pop32());
  /* 1298be17 ret  */
  ESPCHK(0x1298bd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be20 @ 0x1298be20 (102 bytes, 30 insns) */
void f_1298be20(void) {
  FTRACE(0x1298be20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298be20 push ebp */
  push32((uint32_t)(EBP));
  /* 1298be21 mov ebp, esp */
  EBP = (ESP);
  /* 1298be23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298be26 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298be2c jae 0x1298be6b */
  if (!C.cf) goto L_1298be6b;
  /* 1298be2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298be31 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298be34 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298be37 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298be3a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298be3d mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298be44 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298be49 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298be4c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298be4e je 0x1298be6b */
  if (C.zf) goto L_1298be6b;
  /* 1298be50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298be53 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 1298be56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298be59 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1298be5c imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298be5f mov ecx, dword ptr [edx*4 + 0x129afe60] */
  ECX = (r32((uint32_t)(EDX*4 + 0x129afe60)));
  /* 1298be66 mov eax, dword ptr [ecx + eax] */
  EAX = (r32((uint32_t)(ECX + EAX*1)));
  /* 1298be69 jmp 0x1298be84 */
  goto L_1298be84;
L_1298be6b:;
  /* 1298be6b call 0x1298a780 */
  push32(0x1298be70u); f_1298a780();
  /* 1298be70 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298be76 call 0x1298a790 */
  push32(0x1298be7bu); f_1298a790();
  /* 1298be7b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298be81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1298be84:;
  /* 1298be84 pop ebp */
  EBP = (pop32());
  /* 1298be85 ret  */
  ESPCHK(0x1298be20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be90 @ 0x1298be90 (260 bytes, 83 insns) */
void f_1298be90(void) {
  FTRACE(0x1298be90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298be90 push ebp */
  push32((uint32_t)(EBP));
  /* 1298be91 mov ebp, esp */
  EBP = (ESP);
  /* 1298be93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298be96 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298be9a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298be9d and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1298bea0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298bea2 je 0x1298bead */
  if (C.zf) goto L_1298bead;
  /* 1298bea4 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bea7 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1298beaa mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
L_1298bead:;
  /* 1298bead mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298beb0 and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1298beb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298beb8 je 0x1298bec2 */
  if (C.zf) goto L_1298bec2;
  /* 1298beba mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bebd or al, 0x80 */
  { uint32_t _r=(AL)|(0x80u); AL = (_r); fl_logic(_r,8); }
  /* 1298bebf mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_1298bec2:;
  /* 1298bec2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298bec5 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 1298becb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298becd je 0x1298bed8 */
  if (C.zf) goto L_1298bed8;
  /* 1298becf mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bed2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 1298bed5 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1298bed8:;
  /* 1298bed8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bedb push eax */
  push32((uint32_t)(EAX));
  /* 1298bedc call dword ptr [0x129b02a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a0))), 0x1298bee2u);
  /* 1298bee2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298bee5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bee9 jne 0x1298bf02 */
  if (!C.zf) goto L_1298bf02;
  /* 1298beeb call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298bef1u);
  /* 1298bef1 push eax */
  push32((uint32_t)(EAX));
  /* 1298bef2 call 0x1298a6e0 */
  push32(0x1298bef7u); f_1298a6e0();
  /* 1298bef7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298befa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298befd jmp 0x1298bf90 */
  goto L_1298bf90;
L_1298bf02:;
  /* 1298bf02 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bf06 jne 0x1298bf13 */
  if (!C.zf) goto L_1298bf13;
  /* 1298bf08 mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bf0b or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1298bf0e mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 1298bf11 jmp 0x1298bf22 */
  goto L_1298bf22;
L_1298bf13:;
  /* 1298bf13 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bf17 jne 0x1298bf22 */
  if (!C.zf) goto L_1298bf22;
  /* 1298bf19 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bf1c or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 1298bf1f mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
L_1298bf22:;
  /* 1298bf22 call 0x1298ba90 */
  push32(0x1298bf27u); f_1298ba90();
  /* 1298bf27 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298bf2a cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bf2e jne 0x1298bf4b */
  if (!C.zf) goto L_1298bf4b;
  /* 1298bf30 call 0x1298a780 */
  push32(0x1298bf35u); f_1298a780();
  /* 1298bf35 mov dword ptr [eax], 0x18 */
  w32((uint32_t)(EAX), (0x18u));
  /* 1298bf3b call 0x1298a790 */
  push32(0x1298bf40u); f_1298a790();
  /* 1298bf40 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298bf46 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298bf49 jmp 0x1298bf90 */
  goto L_1298bf90;
L_1298bf4b:;
  /* 1298bf4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bf4e push eax */
  push32((uint32_t)(EAX));
  /* 1298bf4f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bf52 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bf53 call 0x1298bc80 */
  push32(0x1298bf58u); f_1298bc80();
  /* 1298bf58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bf5b mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bf5e or dl, 1 */
  { uint32_t _r=(DL)|(0x1u); DL = (_r); fl_logic(_r,8); }
  /* 1298bf61 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 1298bf64 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bf67 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298bf6a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bf6d and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298bf70 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bf73 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298bf7a mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 1298bf7d mov byte ptr [edx + ecx + 4], al */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (AL));
  /* 1298bf81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298bf84 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bf85 call 0x1298c030 */
  push32(0x1298bf8au); f_1298c030();
  /* 1298bf8a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bf8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1298bf90:;
  /* 1298bf90 mov esp, ebp */
  ESP = (EBP);
  /* 1298bf92 pop ebp */
  EBP = (pop32());
  /* 1298bf93 ret  */
  ESPCHK(0x1298be90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfa0 @ 0x1298bfa0 (134 bytes, 44 insns) */
void f_1298bfa0(void) {
  FTRACE(0x1298bfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298bfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298bfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1298bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298bfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bfa7 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298bfaa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298bfad and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298bfb0 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298bfb3 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298bfba add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bfbc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1298bfbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bfc2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bfc6 jne 0x1298c001 */
  if (!C.zf) goto L_1298c001;
  /* 1298bfc8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1298bfca call 0x129862b0 */
  push32(0x1298bfcfu); f_129862b0();
  /* 1298bfcf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bfd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bfd5 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298bfd9 jne 0x1298bff7 */
  if (!C.zf) goto L_1298bff7;
  /* 1298bfdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bfde add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bfe1 push edx */
  push32((uint32_t)(EDX));
  /* 1298bfe2 call dword ptr [0x129b02e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e0))), 0x1298bfe8u);
  /* 1298bfe8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bfeb mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298bfee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298bff1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298bff4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
L_1298bff7:;
  /* 1298bff7 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1298bff9 call 0x12986350 */
  push32(0x1298bffeu); f_12986350();
  /* 1298bffe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298c001:;
  /* 1298c001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c004 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298c007 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c00a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298c00d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c010 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298c017 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1298c01b push eax */
  push32((uint32_t)(EAX));
  /* 1298c01c call dword ptr [0x129b02e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e4))), 0x1298c022u);
  /* 1298c022 mov esp, ebp */
  ESP = (EBP);
  /* 1298c024 pop ebp */
  EBP = (pop32());
  /* 1298c025 ret  */
  ESPCHK(0x1298bfa0u, _esp0);
  ESP += 4; return;
}

/* __unlock_fhandle @ 0x1298c030 (38 bytes, 13 insns) */
void f_1298c030(void) {
  FTRACE(0x1298c030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c030 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c031 mov ebp, esp */
  EBP = (ESP);
  /* 1298c033 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c036 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298c039 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c03c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298c03f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c042 mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298c049 lea eax, [edx + ecx + 0xc] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0xc));
  /* 1298c04d push eax */
  push32((uint32_t)(EAX));
  /* 1298c04e call dword ptr [0x129b02e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02e8))), 0x1298c054u);
  /* 1298c054 pop ebp */
  EBP = (pop32());
  /* 1298c055 ret  */
  ESPCHK(0x1298c030u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c060 @ 0x1298c060 (218 bytes, 63 insns) */
void f_1298c060(void) {
  FTRACE(0x1298c060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c060 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c061 mov ebp, esp */
  EBP = (ESP);
  /* 1298c063 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c066 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298c06d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c06f call 0x129862b0 */
  push32(0x1298c074u); f_129862b0();
  /* 1298c074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c077 mov dword ptr [ebp - 8], 3 */
  w32((uint32_t)(EBP + -0x8), (0x3u));
  /* 1298c07e jmp 0x1298c089 */
  goto L_1298c089;
L_1298c080:;
  /* 1298c080 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c083 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c086 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1298c089:;
  /* 1298c089 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c08c cmp ecx, dword ptr [0x129afb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c092 jge 0x1298c129 */
  if ((C.sf==C.of)) goto L_1298c129;
  /* 1298c098 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c09b mov eax, dword ptr [0x129ae818] */
  EAX = (r32((uint32_t)(0x129ae818)));
  /* 1298c0a0 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c0a4 je 0x1298c124 */
  if (C.zf) goto L_1298c124;
  /* 1298c0a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c0a9 mov edx, dword ptr [0x129ae818] */
  EDX = (r32((uint32_t)(0x129ae818)));
  /* 1298c0af mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1298c0b2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298c0b5 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1298c0bb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298c0bd je 0x1298c0e1 */
  if (C.zf) goto L_1298c0e1;
  /* 1298c0bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c0c2 mov eax, dword ptr [0x129ae818] */
  EAX = (r32((uint32_t)(0x129ae818)));
  /* 1298c0c7 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298c0ca push ecx */
  push32((uint32_t)(ECX));
  /* 1298c0cb call 0x1298ce50 */
  push32(0x1298c0d0u); f_1298ce50();
  /* 1298c0d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c0d3 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c0d6 je 0x1298c0e1 */
  if (C.zf) goto L_1298c0e1;
  /* 1298c0d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c0db add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c0de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1298c0e1:;
  /* 1298c0e1 cmp dword ptr [ebp - 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c0e5 jl 0x1298c124 */
  if ((C.sf!=C.of)) goto L_1298c124;
  /* 1298c0e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c0ea mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c0f0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298c0f3 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c0f6 push edx */
  push32((uint32_t)(EDX));
  /* 1298c0f7 call dword ptr [0x129b02a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02a8))), 0x1298c0fdu);
  /* 1298c0fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c0ff mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c102 mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c108 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298c10b push edx */
  push32((uint32_t)(EDX));
  /* 1298c10c call 0x12983340 */
  push32(0x1298c111u); f_12983340();
  /* 1298c111 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c114 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c117 mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c11d mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_1298c124:;
  /* 1298c124 jmp 0x1298c080 */
  goto L_1298c080;
L_1298c129:;
  /* 1298c129 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c12b call 0x12986350 */
  push32(0x1298c130u); f_12986350();
  /* 1298c130 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c136 mov esp, ebp */
  ESP = (EBP);
  /* 1298c138 pop ebp */
  EBP = (pop32());
  /* 1298c139 ret  */
  ESPCHK(0x1298c060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c140 @ 0x1298c140 (68 bytes, 26 insns) */
void f_1298c140(void) {
  FTRACE(0x1298c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c140 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c141 mov ebp, esp */
  EBP = (ESP);
  /* 1298c143 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c144 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c148 jne 0x1298c156 */
  if (!C.zf) goto L_1298c156;
  /* 1298c14a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298c14c call 0x1298c2b0 */
  push32(0x1298c151u); f_1298c2b0();
  /* 1298c151 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c154 jmp 0x1298c180 */
  goto L_1298c180;
L_1298c156:;
  /* 1298c156 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c159 push eax */
  push32((uint32_t)(EAX));
  /* 1298c15a call 0x1298b6c0 */
  push32(0x1298c15fu); f_1298b6c0();
  /* 1298c15f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c162 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c165 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c166 call 0x1298c190 */
  push32(0x1298c16bu); f_1298c190();
  /* 1298c16b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c16e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298c171 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c174 push edx */
  push32((uint32_t)(EDX));
  /* 1298c175 call 0x1298b730 */
  push32(0x1298c17au); f_1298b730();
  /* 1298c17a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c17d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298c180:;
  /* 1298c180 mov esp, ebp */
  ESP = (EBP);
  /* 1298c182 pop ebp */
  EBP = (pop32());
  /* 1298c183 ret  */
  ESPCHK(0x1298c140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c190 @ 0x1298c190 (65 bytes, 26 insns) */
void f_1298c190(void) {
  FTRACE(0x1298c190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c190 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c191 mov ebp, esp */
  EBP = (ESP);
  /* 1298c193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c196 push eax */
  push32((uint32_t)(EAX));
  /* 1298c197 call 0x1298c1e0 */
  push32(0x1298c19cu); f_1298c1e0();
  /* 1298c19c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c19f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c1a1 je 0x1298c1a8 */
  if (C.zf) goto L_1298c1a8;
  /* 1298c1a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298c1a6 jmp 0x1298c1cf */
  goto L_1298c1cf;
L_1298c1a8:;
  /* 1298c1a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c1ab mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298c1ae and edx, 0x4000 */
  { uint32_t _r=(EDX)&(0x4000u); EDX = (_r); fl_logic(_r,32); }
  /* 1298c1b4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298c1b6 je 0x1298c1cd */
  if (C.zf) goto L_1298c1cd;
  /* 1298c1b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c1bb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298c1be push ecx */
  push32((uint32_t)(ECX));
  /* 1298c1bf call 0x1298cfa0 */
  push32(0x1298c1c4u); f_1298cfa0();
  /* 1298c1c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c1c7 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298c1c9 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c1cb jmp 0x1298c1cf */
  goto L_1298c1cf;
L_1298c1cd:;
  /* 1298c1cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298c1cf:;
  /* 1298c1cf pop ebp */
  EBP = (pop32());
  /* 1298c1d0 ret  */
  ESPCHK(0x1298c190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1e0 @ 0x1298c1e0 (183 bytes, 62 insns) */
void f_1298c1e0(void) {
  FTRACE(0x1298c1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c1e1 mov ebp, esp */
  EBP = (ESP);
  /* 1298c1e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c1e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298c1ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c1f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298c1f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c1f6 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298c1f9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1298c1fc cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c1ff jne 0x1298c27b */
  if (!C.zf) goto L_1298c27b;
  /* 1298c201 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c204 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298c207 and ecx, 0x108 */
  { uint32_t _r=(ECX)&(0x108u); ECX = (_r); fl_logic(_r,32); }
  /* 1298c20d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298c20f je 0x1298c27b */
  if (C.zf) goto L_1298c27b;
  /* 1298c211 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c214 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c217 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1298c219 sub ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c21c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298c21f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c223 jle 0x1298c27b */
  if ((C.zf||C.sf!=C.of)) goto L_1298c27b;
  /* 1298c225 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c228 push edx */
  push32((uint32_t)(EDX));
  /* 1298c229 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c22c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298c22f push ecx */
  push32((uint32_t)(ECX));
  /* 1298c230 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c233 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1298c236 push eax */
  push32((uint32_t)(EAX));
  /* 1298c237 call 0x1298b150 */
  push32(0x1298c23cu); f_1298b150();
  /* 1298c23c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c23f cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c242 jne 0x1298c265 */
  if (!C.zf) goto L_1298c265;
  /* 1298c244 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c247 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298c24a and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 1298c250 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298c252 je 0x1298c263 */
  if (C.zf) goto L_1298c263;
  /* 1298c254 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c257 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298c25a and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 1298c25d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c260 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
L_1298c263:;
  /* 1298c263 jmp 0x1298c27b */
  goto L_1298c27b;
L_1298c265:;
  /* 1298c265 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c268 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298c26b or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 1298c26e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c271 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 1298c274 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298c27b:;
  /* 1298c27b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c27e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c281 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1298c284 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298c286 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c289 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1298c290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c293 mov esp, ebp */
  ESP = (EBP);
  /* 1298c295 pop ebp */
  EBP = (pop32());
  /* 1298c296 ret  */
  ESPCHK(0x1298c1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2a0 @ 0x1298c2a0 (15 bytes, 7 insns) */
void f_1298c2a0(void) {
  FTRACE(0x1298c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 1298c2a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298c2a5 call 0x1298c2b0 */
  push32(0x1298c2aau); f_1298c2b0();
  /* 1298c2aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c2ad pop ebp */
  EBP = (pop32());
  /* 1298c2ae ret  */
  ESPCHK(0x1298c2a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2b0 @ 0x1298c2b0 (319 bytes, 94 insns) */
void f_1298c2b0(void) {
  FTRACE(0x1298c2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1298c2b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c2b6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298c2bd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298c2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c2c6 call 0x129862b0 */
  push32(0x1298c2cbu); f_129862b0();
  /* 1298c2cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c2ce mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298c2d5 jmp 0x1298c2e0 */
  goto L_1298c2e0;
L_1298c2d7:;
  /* 1298c2d7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c2da add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c2dd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298c2e0:;
  /* 1298c2e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c2e3 cmp ecx, dword ptr [0x129afb60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x129afb60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c2e9 jge 0x1298c3d3 */
  if ((C.sf==C.of)) goto L_1298c3d3;
  /* 1298c2ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c2f2 mov eax, dword ptr [0x129ae818] */
  EAX = (r32((uint32_t)(0x129ae818)));
  /* 1298c2f7 cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c2fb je 0x1298c3ce */
  if (C.zf) goto L_1298c3ce;
  /* 1298c301 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c304 mov edx, dword ptr [0x129ae818] */
  EDX = (r32((uint32_t)(0x129ae818)));
  /* 1298c30a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1298c30d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1298c310 and ecx, 0x83 */
  { uint32_t _r=(ECX)&(0x83u); ECX = (_r); fl_logic(_r,32); }
  /* 1298c316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298c318 je 0x1298c3ce */
  if (C.zf) goto L_1298c3ce;
  /* 1298c31e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c321 mov eax, dword ptr [0x129ae818] */
  EAX = (r32((uint32_t)(0x129ae818)));
  /* 1298c326 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298c329 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c32a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c32d push edx */
  push32((uint32_t)(EDX));
  /* 1298c32e call 0x1298b700 */
  push32(0x1298c333u); f_1298b700();
  /* 1298c333 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c336 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c339 mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c33f mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298c342 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1298c345 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1298c34a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c34c je 0x1298c3b5 */
  if (C.zf) goto L_1298c3b5;
  /* 1298c34e cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c352 jne 0x1298c379 */
  if (!C.zf) goto L_1298c379;
  /* 1298c354 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c357 mov edx, dword ptr [0x129ae818] */
  EDX = (r32((uint32_t)(0x129ae818)));
  /* 1298c35d mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 1298c360 push eax */
  push32((uint32_t)(EAX));
  /* 1298c361 call 0x1298c190 */
  push32(0x1298c366u); f_1298c190();
  /* 1298c366 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c369 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c36c je 0x1298c377 */
  if (C.zf) goto L_1298c377;
  /* 1298c36e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c371 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c374 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298c377:;
  /* 1298c377 jmp 0x1298c3b5 */
  goto L_1298c3b5;
L_1298c379:;
  /* 1298c379 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c37d jne 0x1298c3b5 */
  if (!C.zf) goto L_1298c3b5;
  /* 1298c37f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c382 mov eax, dword ptr [0x129ae818] */
  EAX = (r32((uint32_t)(0x129ae818)));
  /* 1298c387 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1298c38a mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298c38d and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1298c390 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298c392 je 0x1298c3b5 */
  if (C.zf) goto L_1298c3b5;
  /* 1298c394 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c397 mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c39d mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298c3a0 push edx */
  push32((uint32_t)(EDX));
  /* 1298c3a1 call 0x1298c190 */
  push32(0x1298c3a6u); f_1298c190();
  /* 1298c3a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c3a9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c3ac jne 0x1298c3b5 */
  if (!C.zf) goto L_1298c3b5;
  /* 1298c3ae mov dword ptr [ebp - 8], 0xffffffff */
  w32((uint32_t)(EBP + -0x8), (0xffffffffu));
L_1298c3b5:;
  /* 1298c3b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c3b8 mov ecx, dword ptr [0x129ae818] */
  ECX = (r32((uint32_t)(0x129ae818)));
  /* 1298c3be mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1298c3c1 push edx */
  push32((uint32_t)(EDX));
  /* 1298c3c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c3c5 push eax */
  push32((uint32_t)(EAX));
  /* 1298c3c6 call 0x1298b770 */
  push32(0x1298c3cbu); f_1298b770();
  /* 1298c3cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298c3ce:;
  /* 1298c3ce jmp 0x1298c2d7 */
  goto L_1298c2d7;
L_1298c3d3:;
  /* 1298c3d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c3d5 call 0x12986350 */
  push32(0x1298c3dau); f_12986350();
  /* 1298c3da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c3dd cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c3e1 jne 0x1298c3e8 */
  if (!C.zf) goto L_1298c3e8;
  /* 1298c3e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c3e6 jmp 0x1298c3eb */
  goto L_1298c3eb;
L_1298c3e8:;
  /* 1298c3e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1298c3eb:;
  /* 1298c3eb mov esp, ebp */
  ESP = (EBP);
  /* 1298c3ed pop ebp */
  EBP = (pop32());
  /* 1298c3ee ret  */
  ESPCHK(0x1298c2b0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x1298c3f0 (15 bytes, 7 insns) */
void f_1298c3f0(void) {
  FTRACE(0x1298c3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c3f1 mov ebp, esp */
  EBP = (ESP);
  /* 1298c3f3 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c3f5 call 0x12981820 */
  push32(0x1298c3fau); f_12981820();
  /* 1298c3fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c3fd pop ebp */
  EBP = (pop32());
  /* 1298c3fe ret  */
  ESPCHK(0x1298c3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c400 @ 0x1298c400 (1007 bytes, 269 insns) */
void f_1298c400(void) {
  FTRACE(0x1298c400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c400 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c401 mov ebp, esp */
  EBP = (ESP);
  /* 1298c403 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c409 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c40d jl 0x1298c415 */
  if ((C.sf!=C.of)) goto L_1298c415;
  /* 1298c40f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c413 jle 0x1298c41c */
  if ((C.zf||C.sf!=C.of)) goto L_1298c41c;
L_1298c415:;
  /* 1298c415 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c417 jmp 0x1298c7eb */
  goto L_1298c7eb;
L_1298c41c:;
  /* 1298c41c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298c41e call 0x129862b0 */
  push32(0x1298c423u); f_129862b0();
  /* 1298c423 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c426 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298c42d mov eax, dword ptr [0x129ae804] */
  EAX = (r32((uint32_t)(0x129ae804)));
  /* 1298c432 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c435 mov dword ptr [0x129ae804], eax */
  w32((uint32_t)(0x129ae804), (EAX));
L_1298c43a:;
  /* 1298c43a cmp dword ptr [0x129ae814], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae814))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c441 je 0x1298c44d */
  if (C.zf) goto L_1298c44d;
  /* 1298c443 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298c445 call dword ptr [0x129b0328] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0328))), 0x1298c44bu);
  /* 1298c44b jmp 0x1298c43a */
  goto L_1298c43a;
L_1298c44d:;
  /* 1298c44d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c451 je 0x1298c491 */
  if (C.zf) goto L_1298c491;
  /* 1298c453 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c457 je 0x1298c471 */
  if (C.zf) goto L_1298c471;
  /* 1298c459 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c45c push ecx */
  push32((uint32_t)(ECX));
  /* 1298c45d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c460 push edx */
  push32((uint32_t)(EDX));
  /* 1298c461 call 0x1298c7f0 */
  push32(0x1298c466u); f_1298c7f0();
  /* 1298c466 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c469 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 1298c46f jmp 0x1298c483 */
  goto L_1298c483;
L_1298c471:;
  /* 1298c471 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c474 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c477 mov ecx, dword ptr [eax + 0x129ad4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ad4dc)));
  /* 1298c47d mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_1298c483:;
  /* 1298c483 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1298c489 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298c48c jmp 0x1298c7cb */
  goto L_1298c7cb;
L_1298c491:;
  /* 1298c491 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 1298c498 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298c49f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c4a3 je 0x1298c7c3 */
  if (C.zf) goto L_1298c7c3;
  /* 1298c4a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c4ac movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298c4af cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c4b2 jne 0x1298c6d4 */
  if (!C.zf) goto L_1298c6d4;
  /* 1298c4b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c4bb movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1298c4bf cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c4c2 jne 0x1298c6d4 */
  if (!C.zf) goto L_1298c6d4;
  /* 1298c4c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c4cb movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 1298c4cf cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c4d2 jne 0x1298c6d4 */
  if (!C.zf) goto L_1298c6d4;
  /* 1298c4d8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c4db mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_1298c4e1:;
  /* 1298c4e1 push 0x129a9f8c */
  push32((uint32_t)(0x129a9f8cu));
  /* 1298c4e6 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1298c4ec push ecx */
  push32((uint32_t)(ECX));
  /* 1298c4ed call 0x1298e650 */
  push32(0x1298c4f2u); f_1298e650();
  /* 1298c4f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c4f5 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 1298c4fb cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c502 je 0x1298c52d */
  if (C.zf) goto L_1298c52d;
  /* 1298c504 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c50a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c510 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 1298c516 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c51d je 0x1298c52d */
  if (C.zf) goto L_1298c52d;
  /* 1298c51f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c525 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298c528 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c52b jne 0x1298c553 */
  if (!C.zf) goto L_1298c553;
L_1298c52d:;
  /* 1298c52d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c531 je 0x1298c54c */
  if (C.zf) goto L_1298c54c;
  /* 1298c533 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298c535 call 0x12986350 */
  push32(0x1298c53au); f_12986350();
  /* 1298c53a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c53d mov edx, dword ptr [0x129ae804] */
  EDX = (r32((uint32_t)(0x129ae804)));
  /* 1298c543 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c546 mov dword ptr [0x129ae804], edx */
  w32((uint32_t)(0x129ae804), (EDX));
L_1298c54c:;
  /* 1298c54c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c54e jmp 0x1298c7eb */
  goto L_1298c7eb;
L_1298c553:;
  /* 1298c553 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1298c55a jmp 0x1298c565 */
  goto L_1298c565;
L_1298c55c:;
  /* 1298c55c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c55f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c562 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1298c565:;
  /* 1298c565 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c569 jg 0x1298c5b3 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298c5b3;
  /* 1298c56b mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1298c571 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c572 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1298c578 push edx */
  push32((uint32_t)(EDX));
  /* 1298c579 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c57c imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c57f mov ecx, dword ptr [eax + 0x129ad4d8] */
  ECX = (r32((uint32_t)(EAX + 0x129ad4d8)));
  /* 1298c585 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c586 call 0x1298e610 */
  push32(0x1298c58bu); f_1298e610();
  /* 1298c58b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c58e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c590 jne 0x1298c5b1 */
  if (!C.zf) goto L_1298c5b1;
  /* 1298c592 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c595 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c598 mov eax, dword ptr [edx + 0x129ad4d8] */
  EAX = (r32((uint32_t)(EDX + 0x129ad4d8)));
  /* 1298c59e push eax */
  push32((uint32_t)(EAX));
  /* 1298c59f call 0x129856e0 */
  push32(0x1298c5a4u); f_129856e0();
  /* 1298c5a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c5a7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c5ad jne 0x1298c5b1 */
  if (!C.zf) goto L_1298c5b1;
  /* 1298c5af jmp 0x1298c5b3 */
  goto L_1298c5b3;
L_1298c5b1:;
  /* 1298c5b1 jmp 0x1298c55c */
  goto L_1298c55c;
L_1298c5b3:;
  /* 1298c5b3 push 0x129a9f88 */
  push32((uint32_t)(0x129a9f88u));
  /* 1298c5b8 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c5be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c5c1 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 1298c5c7 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c5cd push edx */
  push32((uint32_t)(EDX));
  /* 1298c5ce call 0x1298e5d0 */
  push32(0x1298c5d3u); f_1298e5d0();
  /* 1298c5d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c5d6 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 1298c5dc cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c5e3 jne 0x1298c619 */
  if (!C.zf) goto L_1298c619;
  /* 1298c5e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c5eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298c5ee cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c5f1 je 0x1298c619 */
  if (C.zf) goto L_1298c619;
  /* 1298c5f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c5f7 je 0x1298c612 */
  if (C.zf) goto L_1298c612;
  /* 1298c5f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298c5fb call 0x12986350 */
  push32(0x1298c600u); f_12986350();
  /* 1298c600 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c603 mov edx, dword ptr [0x129ae804] */
  EDX = (r32((uint32_t)(0x129ae804)));
  /* 1298c609 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c60c mov dword ptr [0x129ae804], edx */
  w32((uint32_t)(0x129ae804), (EDX));
L_1298c612:;
  /* 1298c612 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c614 jmp 0x1298c7eb */
  goto L_1298c7eb;
L_1298c619:;
  /* 1298c619 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c61d jg 0x1298c66a */
  if ((!C.zf&&C.sf==C.of)) goto L_1298c66a;
  /* 1298c61f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1298c625 push eax */
  push32((uint32_t)(EAX));
  /* 1298c626 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c62c push ecx */
  push32((uint32_t)(ECX));
  /* 1298c62d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1298c633 push edx */
  push32((uint32_t)(EDX));
  /* 1298c634 call 0x129860d0 */
  push32(0x1298c639u); f_129860d0();
  /* 1298c639 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c63c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1298c642 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 1298c64a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 1298c650 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c651 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c654 push edx */
  push32((uint32_t)(EDX));
  /* 1298c655 call 0x1298c7f0 */
  push32(0x1298c65au); f_1298c7f0();
  /* 1298c65a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c65d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c65f je 0x1298c66a */
  if (C.zf) goto L_1298c66a;
  /* 1298c661 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c664 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c667 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298c66a:;
  /* 1298c66a mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c670 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c676 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 1298c67c mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1298c682 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298c685 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c687 je 0x1298c698 */
  if (C.zf) goto L_1298c698;
  /* 1298c689 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1298c68f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c692 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_1298c698:;
  /* 1298c698 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1298c69e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298c6a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c6a3 jne 0x1298c4e1 */
  if (!C.zf) goto L_1298c4e1;
  /* 1298c6a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c6ad je 0x1298c6bc */
  if (C.zf) goto L_1298c6bc;
  /* 1298c6af call 0x1298c990 */
  push32(0x1298c6b4u); f_1298c990();
  /* 1298c6b4 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 1298c6ba jmp 0x1298c6c6 */
  goto L_1298c6c6;
L_1298c6bc:;
  /* 1298c6bc mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_1298c6c6:;
  /* 1298c6c6 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 1298c6cc mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298c6cf jmp 0x1298c7c1 */
  goto L_1298c7c1;
L_1298c6d4:;
  /* 1298c6d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c6d7 push edx */
  push32((uint32_t)(EDX));
  /* 1298c6d8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298c6da push 0 */
  push32((uint32_t)(0x0u));
  /* 1298c6dc lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1298c6e2 push eax */
  push32((uint32_t)(EAX));
  /* 1298c6e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c6e6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c6e7 call 0x1298ca90 */
  push32(0x1298c6ecu); f_1298ca90();
  /* 1298c6ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c6ef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298c6f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c6f6 je 0x1298c7c1 */
  if (C.zf) goto L_1298c7c1;
  /* 1298c6fc mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298c703 jmp 0x1298c70e */
  goto L_1298c70e;
L_1298c705:;
  /* 1298c705 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c708 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c70b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1298c70e:;
  /* 1298c70e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c712 jg 0x1298c770 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298c770;
  /* 1298c714 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c718 je 0x1298c76e */
  if (C.zf) goto L_1298c76e;
  /* 1298c71a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c71d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c720 mov ecx, dword ptr [eax + 0x129ad4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ad4dc)));
  /* 1298c726 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c727 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 1298c72d push edx */
  push32((uint32_t)(EDX));
  /* 1298c72e call 0x1298e540 */
  push32(0x1298c733u); f_1298e540();
  /* 1298c733 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c736 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c738 je 0x1298c765 */
  if (C.zf) goto L_1298c765;
  /* 1298c73a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 1298c740 push eax */
  push32((uint32_t)(EAX));
  /* 1298c741 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298c744 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c745 call 0x1298c7f0 */
  push32(0x1298c74au); f_1298c7f0();
  /* 1298c74a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c74d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c74f je 0x1298c75c */
  if (C.zf) goto L_1298c75c;
  /* 1298c751 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c754 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c757 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1298c75a jmp 0x1298c763 */
  goto L_1298c763;
L_1298c75c:;
  /* 1298c75c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_1298c763:;
  /* 1298c763 jmp 0x1298c76e */
  goto L_1298c76e;
L_1298c765:;
  /* 1298c765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c76b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1298c76e:;
  /* 1298c76e jmp 0x1298c705 */
  goto L_1298c705;
L_1298c770:;
  /* 1298c770 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c774 je 0x1298c79b */
  if (C.zf) goto L_1298c79b;
  /* 1298c776 call 0x1298c990 */
  push32(0x1298c77bu); f_1298c990();
  /* 1298c77b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298c77e push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c780 mov ecx, dword ptr [0x129ad4dc] */
  ECX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298c786 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c787 call 0x12983340 */
  push32(0x1298c78cu); f_12983340();
  /* 1298c78c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c78f mov dword ptr [0x129ad4dc], 0 */
  w32((uint32_t)(0x129ad4dc), (0x0u));
  /* 1298c799 jmp 0x1298c7c1 */
  goto L_1298c7c1;
L_1298c79b:;
  /* 1298c79b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c79f je 0x1298c7ae */
  if (C.zf) goto L_1298c7ae;
  /* 1298c7a1 call 0x1298c990 */
  push32(0x1298c7a6u); f_1298c990();
  /* 1298c7a6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 1298c7ac jmp 0x1298c7b8 */
  goto L_1298c7b8;
L_1298c7ae:;
  /* 1298c7ae mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_1298c7b8:;
  /* 1298c7b8 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 1298c7be mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1298c7c1:;
  /* 1298c7c1 jmp 0x1298c7cb */
  goto L_1298c7cb;
L_1298c7c3:;
  /* 1298c7c3 call 0x1298c990 */
  push32(0x1298c7c8u); f_1298c990();
  /* 1298c7c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1298c7cb:;
  /* 1298c7cb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c7cf je 0x1298c7e8 */
  if (C.zf) goto L_1298c7e8;
  /* 1298c7d1 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1298c7d3 call 0x12986350 */
  push32(0x1298c7d8u); f_12986350();
  /* 1298c7d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c7db mov eax, dword ptr [0x129ae804] */
  EAX = (r32((uint32_t)(0x129ae804)));
  /* 1298c7e0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c7e3 mov dword ptr [0x129ae804], eax */
  w32((uint32_t)(0x129ae804), (EAX));
L_1298c7e8:;
  /* 1298c7e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1298c7eb:;
  /* 1298c7eb mov esp, ebp */
  ESP = (EBP);
  /* 1298c7ed pop ebp */
  EBP = (pop32());
  /* 1298c7ee ret  */
  ESPCHK(0x1298c400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f0 @ 0x1298c7f0 (403 bytes, 117 insns) */
void f_1298c7f0(void) {
  FTRACE(0x1298c7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c7f1 mov ebp, esp */
  EBP = (ESP);
  /* 1298c7f3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c7f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c7fc push eax */
  push32((uint32_t)(EAX));
  /* 1298c7fd lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 1298c803 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c804 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 1298c80a push edx */
  push32((uint32_t)(EDX));
  /* 1298c80b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 1298c811 push eax */
  push32((uint32_t)(EAX));
  /* 1298c812 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298c815 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c816 call 0x1298ca90 */
  push32(0x1298c81bu); f_1298ca90();
  /* 1298c81b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c81e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c820 jne 0x1298c829 */
  if (!C.zf) goto L_1298c829;
  /* 1298c822 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c824 jmp 0x1298c97f */
  goto L_1298c97f;
L_1298c829:;
  /* 1298c829 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 1298c82e push 0x129a9f90 */
  push32((uint32_t)(0x129a9f90u));
  /* 1298c833 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c835 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 1298c83b push edx */
  push32((uint32_t)(EDX));
  /* 1298c83c call 0x129856e0 */
  push32(0x1298c841u); f_129856e0();
  /* 1298c841 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c844 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c847 push eax */
  push32((uint32_t)(EAX));
  /* 1298c848 call 0x129828b0 */
  push32(0x1298c84du); f_129828b0();
  /* 1298c84d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c850 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298c853 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c857 jne 0x1298c860 */
  if (!C.zf) goto L_1298c860;
  /* 1298c859 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c85b jmp 0x1298c97f */
  goto L_1298c97f;
L_1298c860:;
  /* 1298c860 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c863 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c866 mov ecx, dword ptr [eax + 0x129ad4dc] */
  ECX = (r32((uint32_t)(EAX + 0x129ad4dc)));
  /* 1298c86c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298c86f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c872 mov eax, dword ptr [edx*4 + 0x129ae680] */
  EAX = (r32((uint32_t)(EDX*4 + 0x129ae680)));
  /* 1298c879 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298c87c push 6 */
  push32((uint32_t)(0x6u));
  /* 1298c87e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c881 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c884 add ecx, 0x129ae6d0 */
  { uint32_t _a=(ECX),_b=(0x129ae6d0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c88a push ecx */
  push32((uint32_t)(ECX));
  /* 1298c88b lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 1298c88e push edx */
  push32((uint32_t)(EDX));
  /* 1298c88f call 0x12989190 */
  push32(0x1298c894u); f_12989190();
  /* 1298c894 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c897 mov eax, dword ptr [0x129ae698] */
  EAX = (r32((uint32_t)(0x129ae698)));
  /* 1298c89c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1298c89f lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 1298c8a5 push ecx */
  push32((uint32_t)(ECX));
  /* 1298c8a6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c8a9 push edx */
  push32((uint32_t)(EDX));
  /* 1298c8aa call 0x12985860 */
  push32(0x1298c8afu); f_12985860();
  /* 1298c8af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c8b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c8b5 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c8b8 mov dword ptr [ecx + 0x129ad4dc], eax */
  w32((uint32_t)(ECX + 0x129ad4dc), (EAX));
  /* 1298c8be mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 1298c8c4 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298c8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c8cd mov dword ptr [eax*4 + 0x129ae680], edx */
  w32((uint32_t)(EAX*4 + 0x129ae680), (EDX));
  /* 1298c8d4 push 6 */
  push32((uint32_t)(0x6u));
  /* 1298c8d6 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 1298c8dc push ecx */
  push32((uint32_t)(ECX));
  /* 1298c8dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c8e0 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c8e3 add edx, 0x129ae6d0 */
  { uint32_t _a=(EDX),_b=(0x129ae6d0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c8e9 push edx */
  push32((uint32_t)(EDX));
  /* 1298c8ea call 0x12989190 */
  push32(0x1298c8efu); f_12989190();
  /* 1298c8ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c8f2 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c8f6 jne 0x1298c903 */
  if (!C.zf) goto L_1298c903;
  /* 1298c8f8 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c8fe mov dword ptr [0x129ae698], eax */
  w32((uint32_t)(0x129ae698), (EAX));
L_1298c903:;
  /* 1298c903 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c907 jne 0x1298c915 */
  if (!C.zf) goto L_1298c915;
  /* 1298c909 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1298c90f mov dword ptr [0x129ae69c], ecx */
  w32((uint32_t)(0x129ae69c), (ECX));
L_1298c915:;
  /* 1298c915 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c918 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c91b call dword ptr [edx + 0x129ad4e0] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x129ad4e0))), 0x1298c921u);
  /* 1298c921 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298c923 je 0x1298c95c */
  if (C.zf) goto L_1298c95c;
  /* 1298c925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c928 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c92b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c92e mov dword ptr [eax + 0x129ad4dc], ecx */
  w32((uint32_t)(EAX + 0x129ad4dc), (ECX));
  /* 1298c934 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c936 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298c939 push edx */
  push32((uint32_t)(EDX));
  /* 1298c93a call 0x12983340 */
  push32(0x1298c93fu); f_12983340();
  /* 1298c93f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c948 mov dword ptr [eax*4 + 0x129ae680], ecx */
  w32((uint32_t)(EAX*4 + 0x129ae680), (ECX));
  /* 1298c94f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298c952 mov dword ptr [0x129ae698], edx */
  w32((uint32_t)(0x129ae698), (EDX));
  /* 1298c958 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298c95a jmp 0x1298c97f */
  goto L_1298c97f;
L_1298c95c:;
  /* 1298c95c cmp dword ptr [ebp - 0xc], 0x129ad3c8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x129ad3c8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c963 je 0x1298c973 */
  if (C.zf) goto L_1298c973;
  /* 1298c965 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298c96a push eax */
  push32((uint32_t)(EAX));
  /* 1298c96b call 0x12983340 */
  push32(0x1298c970u); f_12983340();
  /* 1298c970 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298c973:;
  /* 1298c973 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298c976 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c979 mov eax, dword ptr [ecx + 0x129ad4dc] */
  EAX = (r32((uint32_t)(ECX + 0x129ad4dc)));
L_1298c97f:;
  /* 1298c97f mov esp, ebp */
  ESP = (EBP);
  /* 1298c981 pop ebp */
  EBP = (pop32());
  /* 1298c982 ret  */
  ESPCHK(0x1298c7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c990 @ 0x1298c990 (256 bytes, 72 insns) */
void f_1298c990(void) {
  FTRACE(0x1298c990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298c990 push ebp */
  push32((uint32_t)(EBP));
  /* 1298c991 mov ebp, esp */
  EBP = (ESP);
  /* 1298c993 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298c996 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1298c99d cmp dword ptr [0x129ad4dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ad4dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298c9a4 jne 0x1298c9c4 */
  if (!C.zf) goto L_1298c9c4;
  /* 1298c9a6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 1298c9ab push 0x129a9f90 */
  push32((uint32_t)(0x129a9f90u));
  /* 1298c9b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298c9b2 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 1298c9b7 call 0x129828b0 */
  push32(0x1298c9bcu); f_129828b0();
  /* 1298c9bc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c9bf mov dword ptr [0x129ad4dc], eax */
  w32((uint32_t)(0x129ad4dc), (EAX));
L_1298c9c4:;
  /* 1298c9c4 mov eax, dword ptr [0x129ad4dc] */
  EAX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298c9c9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1298c9cc mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1298c9d3 jmp 0x1298c9de */
  goto L_1298c9de;
L_1298c9d5:;
  /* 1298c9d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c9d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298c9db mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1298c9de:;
  /* 1298c9de mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c9e1 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c9e4 mov eax, dword ptr [edx + 0x129ad4dc] */
  EAX = (r32((uint32_t)(EDX + 0x129ad4dc)));
  /* 1298c9ea push eax */
  push32((uint32_t)(EAX));
  /* 1298c9eb push 0x129a9f9c */
  push32((uint32_t)(0x129a9f9cu));
  /* 1298c9f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298c9f3 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298c9f6 mov edx, dword ptr [ecx + 0x129ad4d8] */
  EDX = (r32((uint32_t)(ECX + 0x129ad4d8)));
  /* 1298c9fc push edx */
  push32((uint32_t)(EDX));
  /* 1298c9fd push 3 */
  push32((uint32_t)(0x3u));
  /* 1298c9ff mov eax, dword ptr [0x129ad4dc] */
  EAX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298ca04 push eax */
  push32((uint32_t)(EAX));
  /* 1298ca05 call 0x1298cc30 */
  push32(0x1298ca0au); f_1298cc30();
  /* 1298ca0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ca0d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ca11 jge 0x1298ca59 */
  if ((C.sf==C.of)) goto L_1298ca59;
  /* 1298ca13 push 0x129a9f88 */
  push32((uint32_t)(0x129a9f88u));
  /* 1298ca18 mov ecx, dword ptr [0x129ad4dc] */
  ECX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298ca1e push ecx */
  push32((uint32_t)(ECX));
  /* 1298ca1f call 0x12985870 */
  push32(0x1298ca24u); f_12985870();
  /* 1298ca24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ca27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ca2a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ca2d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298ca30 mov eax, dword ptr [edx + 0x129ad4dc] */
  EAX = (r32((uint32_t)(EDX + 0x129ad4dc)));
  /* 1298ca36 push eax */
  push32((uint32_t)(EAX));
  /* 1298ca37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ca3a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298ca3d mov edx, dword ptr [ecx + 0x129ad4dc] */
  EDX = (r32((uint32_t)(ECX + 0x129ad4dc)));
  /* 1298ca43 push edx */
  push32((uint32_t)(EDX));
  /* 1298ca44 call 0x1298e540 */
  push32(0x1298ca49u); f_1298e540();
  /* 1298ca49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ca4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ca4e je 0x1298ca57 */
  if (C.zf) goto L_1298ca57;
  /* 1298ca50 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1298ca57:;
  /* 1298ca57 jmp 0x1298ca87 */
  goto L_1298ca87;
L_1298ca59:;
  /* 1298ca59 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ca5d jne 0x1298ca66 */
  if (!C.zf) goto L_1298ca66;
  /* 1298ca5f mov eax, dword ptr [0x129ad4dc] */
  EAX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298ca64 jmp 0x1298ca8c */
  goto L_1298ca8c;
L_1298ca66:;
  /* 1298ca66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ca68 mov eax, dword ptr [0x129ad4dc] */
  EAX = (r32((uint32_t)(0x129ad4dc)));
  /* 1298ca6d push eax */
  push32((uint32_t)(EAX));
  /* 1298ca6e call 0x12983340 */
  push32(0x1298ca73u); f_12983340();
  /* 1298ca73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ca76 mov dword ptr [0x129ad4dc], 0 */
  w32((uint32_t)(0x129ad4dc), (0x0u));
  /* 1298ca80 mov eax, dword ptr [0x129ad4f4] */
  EAX = (r32((uint32_t)(0x129ad4f4)));
  /* 1298ca85 jmp 0x1298ca8c */
  goto L_1298ca8c;
L_1298ca87:;
  /* 1298ca87 jmp 0x1298c9d5 */
  goto L_1298c9d5;
L_1298ca8c:;
  /* 1298ca8c mov esp, ebp */
  ESP = (EBP);
  /* 1298ca8e pop ebp */
  EBP = (pop32());
  /* 1298ca8f ret  */
  ESPCHK(0x1298c990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca90 @ 0x1298ca90 (388 bytes, 115 insns) */
void f_1298ca90(void) {
  FTRACE(0x1298ca90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ca90 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ca91 mov ebp, esp */
  EBP = (ESP);
  /* 1298ca93 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ca99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ca9d jne 0x1298caa6 */
  if (!C.zf) goto L_1298caa6;
  /* 1298ca9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298caa1 jmp 0x1298cc10 */
  goto L_1298cc10;
L_1298caa6:;
  /* 1298caa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298caa9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298caac cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298caaf jne 0x1298cb00 */
  if (!C.zf) goto L_1298cb00;
  /* 1298cab1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cab4 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1298cab8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298caba jne 0x1298cb00 */
  if (!C.zf) goto L_1298cb00;
  /* 1298cabc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cabf mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 1298cac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cac5 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 1298cac9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cacd je 0x1298cae9 */
  if (C.zf) goto L_1298cae9;
  /* 1298cacf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298cad2 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 1298cad7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298cada mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 1298cae0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298cae3 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_1298cae9:;
  /* 1298cae9 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298caed je 0x1298caf8 */
  if (C.zf) goto L_1298caf8;
  /* 1298caef mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298caf2 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_1298caf8:;
  /* 1298caf8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cafb jmp 0x1298cc10 */
  goto L_1298cc10;
L_1298cb00:;
  /* 1298cb00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cb03 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cb04 push 0x129ad450 */
  push32((uint32_t)(0x129ad450u));
  /* 1298cb09 call 0x1298e540 */
  push32(0x1298cb0eu); f_1298e540();
  /* 1298cb0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cb11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cb13 je 0x1298cbc8 */
  if (C.zf) goto L_1298cbc8;
  /* 1298cb19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cb1c push edx */
  push32((uint32_t)(EDX));
  /* 1298cb1d push 0x129ad3cc */
  push32((uint32_t)(0x129ad3ccu));
  /* 1298cb22 call 0x1298e540 */
  push32(0x1298cb27u); f_1298e540();
  /* 1298cb27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cb2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cb2c je 0x1298cbc8 */
  if (C.zf) goto L_1298cbc8;
  /* 1298cb32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cb35 push eax */
  push32((uint32_t)(EAX));
  /* 1298cb36 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 1298cb3c push ecx */
  push32((uint32_t)(ECX));
  /* 1298cb3d call 0x1298cc80 */
  push32(0x1298cb42u); f_1298cc80();
  /* 1298cb42 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cb45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cb47 je 0x1298cb50 */
  if (C.zf) goto L_1298cb50;
  /* 1298cb49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298cb4b jmp 0x1298cc10 */
  goto L_1298cc10;
L_1298cb50:;
  /* 1298cb50 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1298cb56 push edx */
  push32((uint32_t)(EDX));
  /* 1298cb57 push 0x129ae6a8 */
  push32((uint32_t)(0x129ae6a8u));
  /* 1298cb5c lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 1298cb62 push eax */
  push32((uint32_t)(EAX));
  /* 1298cb63 call 0x1298e690 */
  push32(0x1298cb68u); f_1298e690();
  /* 1298cb68 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cb6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cb6d jne 0x1298cb76 */
  if (!C.zf) goto L_1298cb76;
  /* 1298cb6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298cb71 jmp 0x1298cc10 */
  goto L_1298cc10;
L_1298cb76:;
  /* 1298cb76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298cb78 mov cx, word ptr [0x129ae6ac] */
  CX = (r16((uint32_t)(0x129ae6ac)));
  /* 1298cb7f mov dword ptr [0x129ae6b0], ecx */
  w32((uint32_t)(0x129ae6b0), (ECX));
  /* 1298cb85 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 1298cb8b push edx */
  push32((uint32_t)(EDX));
  /* 1298cb8c push 0x129ad450 */
  push32((uint32_t)(0x129ad450u));
  /* 1298cb91 call 0x1298cde0 */
  push32(0x1298cb96u); f_1298cde0();
  /* 1298cb96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cb99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cb9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298cb9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298cba1 je 0x1298cbb6 */
  if (C.zf) goto L_1298cbb6;
  /* 1298cba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cba6 push edx */
  push32((uint32_t)(EDX));
  /* 1298cba7 push 0x129ad3cc */
  push32((uint32_t)(0x129ad3ccu));
  /* 1298cbac call 0x12985860 */
  push32(0x1298cbb1u); f_12985860();
  /* 1298cbb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cbb4 jmp 0x1298cbc8 */
  goto L_1298cbc8;
L_1298cbb6:;
  /* 1298cbb6 push 0x129ad450 */
  push32((uint32_t)(0x129ad450u));
  /* 1298cbbb push 0x129ad3cc */
  push32((uint32_t)(0x129ad3ccu));
  /* 1298cbc0 call 0x12985860 */
  push32(0x1298cbc5u); f_12985860();
  /* 1298cbc5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298cbc8:;
  /* 1298cbc8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cbcc je 0x1298cbe1 */
  if (C.zf) goto L_1298cbe1;
  /* 1298cbce push 6 */
  push32((uint32_t)(0x6u));
  /* 1298cbd0 push 0x129ae6a8 */
  push32((uint32_t)(0x129ae6a8u));
  /* 1298cbd5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298cbd8 push eax */
  push32((uint32_t)(EAX));
  /* 1298cbd9 call 0x12989190 */
  push32(0x1298cbdeu); f_12989190();
  /* 1298cbde add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298cbe1:;
  /* 1298cbe1 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cbe5 je 0x1298cbfa */
  if (C.zf) goto L_1298cbfa;
  /* 1298cbe7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1298cbe9 push 0x129ae6b0 */
  push32((uint32_t)(0x129ae6b0u));
  /* 1298cbee mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298cbf1 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cbf2 call 0x12989190 */
  push32(0x1298cbf7u); f_12989190();
  /* 1298cbf7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298cbfa:;
  /* 1298cbfa push 0x129ad450 */
  push32((uint32_t)(0x129ad450u));
  /* 1298cbff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cc02 push edx */
  push32((uint32_t)(EDX));
  /* 1298cc03 call 0x12985860 */
  push32(0x1298cc08u); f_12985860();
  /* 1298cc08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cc0b mov eax, 0x129ad450 */
  EAX = (0x129ad450u);
L_1298cc10:;
  /* 1298cc10 mov esp, ebp */
  ESP = (EBP);
  /* 1298cc12 pop ebp */
  EBP = (pop32());
  /* 1298cc13 ret  */
  ESPCHK(0x1298ca90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc20 @ 0x1298cc20 (7 bytes, 5 insns) */
void f_1298cc20(void) {
  FTRACE(0x1298cc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cc20 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cc21 mov ebp, esp */
  EBP = (ESP);
  /* 1298cc23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298cc25 pop ebp */
  EBP = (pop32());
  /* 1298cc26 ret  */
  ESPCHK(0x1298cc20u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x1298cc30 (79 bytes, 28 insns) */
void f_1298cc30(void) {
  FTRACE(0x1298cc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cc30 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cc31 mov ebp, esp */
  EBP = (ESP);
  /* 1298cc33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298cc36 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 1298cc39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298cc3c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298cc43 jmp 0x1298cc4e */
  goto L_1298cc4e;
L_1298cc45:;
  /* 1298cc45 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cc48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cc4b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1298cc4e:;
  /* 1298cc4e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cc51 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cc54 jge 0x1298cc74 */
  if ((C.sf==C.of)) goto L_1298cc74;
  /* 1298cc56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298cc59 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cc5c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298cc5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298cc62 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 1298cc65 push edx */
  push32((uint32_t)(EDX));
  /* 1298cc66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cc69 push eax */
  push32((uint32_t)(EAX));
  /* 1298cc6a call 0x12985870 */
  push32(0x1298cc6fu); f_12985870();
  /* 1298cc6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cc72 jmp 0x1298cc45 */
  goto L_1298cc45;
L_1298cc74:;
  /* 1298cc74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298cc7b mov esp, ebp */
  ESP = (EBP);
  /* 1298cc7d pop ebp */
  EBP = (pop32());
  /* 1298cc7e ret  */
  ESPCHK(0x1298cc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cc80 @ 0x1298cc80 (349 bytes, 122 insns) */
void f_1298cc80(void) {
  FTRACE(0x1298cc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cc80 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cc81 mov ebp, esp */
  EBP = (ESP);
  /* 1298cc83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298cc86 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1298cc8b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298cc8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cc90 push eax */
  push32((uint32_t)(EAX));
  /* 1298cc91 call 0x12986620 */
  push32(0x1298cc96u); f_12986620();
  /* 1298cc96 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cc99 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cc9c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298cc9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298cca1 jne 0x1298ccaa */
  if (!C.zf) goto L_1298ccaa;
  /* 1298cca3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298cca5 jmp 0x1298cdd9 */
  goto L_1298cdd9;
L_1298ccaa:;
  /* 1298ccaa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ccad movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298ccb0 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ccb3 jne 0x1298cce0 */
  if (!C.zf) goto L_1298cce0;
  /* 1298ccb5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ccb8 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1298ccbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ccbe je 0x1298cce0 */
  if (C.zf) goto L_1298cce0;
  /* 1298ccc0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ccc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ccc6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ccc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ccca add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ccd0 push edx */
  push32((uint32_t)(EDX));
  /* 1298ccd1 call 0x12985860 */
  push32(0x1298ccd6u); f_12985860();
  /* 1298ccd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ccd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ccdb jmp 0x1298cdd9 */
  goto L_1298cdd9;
L_1298cce0:;
  /* 1298cce0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1298cce7 jmp 0x1298ccf2 */
  goto L_1298ccf2;
L_1298cce9:;
  /* 1298cce9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ccec add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ccef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298ccf2:;
  /* 1298ccf2 push 0x129a9fa0 */
  push32((uint32_t)(0x129a9fa0u));
  /* 1298ccf7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ccfa push ecx */
  push32((uint32_t)(ECX));
  /* 1298ccfb call 0x1298e5d0 */
  push32(0x1298cd00u); f_1298e5d0();
  /* 1298cd00 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cd03 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298cd06 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd0a jne 0x1298cd14 */
  if (!C.zf) goto L_1298cd14;
  /* 1298cd0c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298cd0f jmp 0x1298cdd9 */
  goto L_1298cdd9;
L_1298cd14:;
  /* 1298cd14 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cd17 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cd1a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298cd1c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1298cd1f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd23 jne 0x1298cd4a */
  if (!C.zf) goto L_1298cd4a;
  /* 1298cd25 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd29 jge 0x1298cd4a */
  if ((C.sf==C.of)) goto L_1298cd4a;
  /* 1298cd2b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cd2f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd32 je 0x1298cd4a */
  if (C.zf) goto L_1298cd4a;
  /* 1298cd34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298cd37 push edx */
  push32((uint32_t)(EDX));
  /* 1298cd38 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cd3b push eax */
  push32((uint32_t)(EAX));
  /* 1298cd3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cd3f push ecx */
  push32((uint32_t)(ECX));
  /* 1298cd40 call 0x129860d0 */
  push32(0x1298cd45u); f_129860d0();
  /* 1298cd45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cd48 jmp 0x1298cdb0 */
  goto L_1298cdb0;
L_1298cd4a:;
  /* 1298cd4a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd4e jne 0x1298cd78 */
  if (!C.zf) goto L_1298cd78;
  /* 1298cd50 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd54 jge 0x1298cd78 */
  if ((C.sf==C.of)) goto L_1298cd78;
  /* 1298cd56 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cd5a cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd5d je 0x1298cd78 */
  if (C.zf) goto L_1298cd78;
  /* 1298cd5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298cd62 push eax */
  push32((uint32_t)(EAX));
  /* 1298cd63 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cd66 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cd67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cd6a add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cd6d push edx */
  push32((uint32_t)(EDX));
  /* 1298cd6e call 0x129860d0 */
  push32(0x1298cd73u); f_129860d0();
  /* 1298cd73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cd76 jmp 0x1298cdb0 */
  goto L_1298cdb0;
L_1298cd78:;
  /* 1298cd78 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd7c jne 0x1298cdab */
  if (!C.zf) goto L_1298cdab;
  /* 1298cd7e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cd82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cd84 je 0x1298cd8f */
  if (C.zf) goto L_1298cd8f;
  /* 1298cd86 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cd8a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cd8d jne 0x1298cdab */
  if (!C.zf) goto L_1298cdab;
L_1298cd8f:;
  /* 1298cd8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298cd92 push edx */
  push32((uint32_t)(EDX));
  /* 1298cd93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cd96 push eax */
  push32((uint32_t)(EAX));
  /* 1298cd97 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cd9a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cda0 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cda1 call 0x129860d0 */
  push32(0x1298cda6u); f_129860d0();
  /* 1298cda6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cda9 jmp 0x1298cdb0 */
  goto L_1298cdb0;
L_1298cdab:;
  /* 1298cdab or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298cdae jmp 0x1298cdd9 */
  goto L_1298cdd9;
L_1298cdb0:;
  /* 1298cdb0 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cdb4 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cdb7 jne 0x1298cdbb */
  if (!C.zf) goto L_1298cdbb;
  /* 1298cdb9 jmp 0x1298cdd7 */
  goto L_1298cdd7;
L_1298cdbb:;
  /* 1298cdbb movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298cdbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cdc1 jne 0x1298cdc5 */
  if (!C.zf) goto L_1298cdc5;
  /* 1298cdc3 jmp 0x1298cdd7 */
  goto L_1298cdd7;
L_1298cdc5:;
  /* 1298cdc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298cdc8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cdcb lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1298cdcf mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1298cdd2 jmp 0x1298cce9 */
  goto L_1298cce9;
L_1298cdd7:;
  /* 1298cdd7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298cdd9:;
  /* 1298cdd9 mov esp, ebp */
  ESP = (EBP);
  /* 1298cddb pop ebp */
  EBP = (pop32());
  /* 1298cddc ret  */
  ESPCHK(0x1298cc80u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1298cde0 (101 bytes, 36 insns) */
void f_1298cde0(void) {
  FTRACE(0x1298cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cde1 mov ebp, esp */
  EBP = (ESP);
  /* 1298cde3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cde6 push eax */
  push32((uint32_t)(EAX));
  /* 1298cde7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cdea push ecx */
  push32((uint32_t)(ECX));
  /* 1298cdeb call 0x12985860 */
  push32(0x1298cdf0u); f_12985860();
  /* 1298cdf0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cdf3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298cdf6 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1298cdfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cdfc je 0x1298ce18 */
  if (C.zf) goto L_1298ce18;
  /* 1298cdfe mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ce01 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ce04 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ce05 push 0x129a9fa8 */
  push32((uint32_t)(0x129a9fa8u));
  /* 1298ce0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ce0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ce0f push edx */
  push32((uint32_t)(EDX));
  /* 1298ce10 call 0x1298cc30 */
  push32(0x1298ce15u); f_1298cc30();
  /* 1298ce15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298ce18:;
  /* 1298ce18 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ce1b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1298ce22 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298ce24 je 0x1298ce43 */
  if (C.zf) goto L_1298ce43;
  /* 1298ce26 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298ce29 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ce2f push edx */
  push32((uint32_t)(EDX));
  /* 1298ce30 push 0x129a9fa4 */
  push32((uint32_t)(0x129a9fa4u));
  /* 1298ce35 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ce37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ce3a push eax */
  push32((uint32_t)(EAX));
  /* 1298ce3b call 0x1298cc30 */
  push32(0x1298ce40u); f_1298cc30();
  /* 1298ce40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298ce43:;
  /* 1298ce43 pop ebp */
  EBP = (pop32());
  /* 1298ce44 ret  */
  ESPCHK(0x1298cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce50 @ 0x1298ce50 (130 bytes, 50 insns) */
void f_1298ce50(void) {
  FTRACE(0x1298ce50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ce50 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ce51 mov ebp, esp */
  EBP = (ESP);
  /* 1298ce53 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ce54 push ebx */
  push32((uint32_t)(EBX));
  /* 1298ce55 push esi */
  push32((uint32_t)(ESI));
  /* 1298ce56 push edi */
  push32((uint32_t)(EDI));
  /* 1298ce57 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298ce5e:;
  /* 1298ce5e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ce62 jne 0x1298ce82 */
  if (!C.zf) goto L_1298ce82;
  /* 1298ce64 push 0x129a9fb8 */
  push32((uint32_t)(0x129a9fb8u));
  /* 1298ce69 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ce6b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1298ce6d push 0x129a9fac */
  push32((uint32_t)(0x129a9facu));
  /* 1298ce72 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298ce74 call 0x12981970 */
  push32(0x1298ce79u); f_12981970();
  /* 1298ce79 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ce7c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ce7f jne 0x1298ce82 */
  if (!C.zf) goto L_1298ce82;
  /* 1298ce81 int3  */
  x86_unimpl("int3 @ 0x1298ce81");
L_1298ce82:;
  /* 1298ce82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ce84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ce86 jne 0x1298ce5e */
  if (!C.zf) goto L_1298ce5e;
  /* 1298ce88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ce8b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298ce8e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ce91 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298ce93 je 0x1298cea1 */
  if (C.zf) goto L_1298cea1;
  /* 1298ce95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ce98 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1298ce9f jmp 0x1298cec8 */
  goto L_1298cec8;
L_1298cea1:;
  /* 1298cea1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cea4 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cea5 call 0x1298b6c0 */
  push32(0x1298ceaau); f_1298b6c0();
  /* 1298ceaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ceb0 push edx */
  push32((uint32_t)(EDX));
  /* 1298ceb1 call 0x1298cee0 */
  push32(0x1298ceb6u); f_1298cee0();
  /* 1298ceb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ceb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298cebc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cebf push eax */
  push32((uint32_t)(EAX));
  /* 1298cec0 call 0x1298b730 */
  push32(0x1298cec5u); f_1298b730();
  /* 1298cec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298cec8:;
  /* 1298cec8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298cecb pop edi */
  EDI = (pop32());
  /* 1298cecc pop esi */
  ESI = (pop32());
  /* 1298cecd pop ebx */
  EBX = (pop32());
  /* 1298cece mov esp, ebp */
  ESP = (EBP);
  /* 1298ced0 pop ebp */
  EBP = (pop32());
  /* 1298ced1 ret  */
  ESPCHK(0x1298ce50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cee0 @ 0x1298cee0 (190 bytes, 67 insns) */
void f_1298cee0(void) {
  FTRACE(0x1298cee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cee0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cee1 mov ebp, esp */
  EBP = (ESP);
  /* 1298cee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298cee6 push ebx */
  push32((uint32_t)(EBX));
  /* 1298cee7 push esi */
  push32((uint32_t)(ESI));
  /* 1298cee8 push edi */
  push32((uint32_t)(EDI));
  /* 1298cee9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1298cef0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cef3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1298cef6:;
  /* 1298cef6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cefa jne 0x1298cf1a */
  if (!C.zf) goto L_1298cf1a;
  /* 1298cefc push 0x129a9e5c */
  push32((uint32_t)(0x129a9e5cu));
  /* 1298cf01 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298cf03 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1298cf05 push 0x129a9fac */
  push32((uint32_t)(0x129a9facu));
  /* 1298cf0a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298cf0c call 0x12981970 */
  push32(0x1298cf11u); f_12981970();
  /* 1298cf11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cf14 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cf17 jne 0x1298cf1a */
  if (!C.zf) goto L_1298cf1a;
  /* 1298cf19 int3  */
  x86_unimpl("int3 @ 0x1298cf19");
L_1298cf1a:;
  /* 1298cf1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298cf1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298cf1e jne 0x1298cef6 */
  if (!C.zf) goto L_1298cef6;
  /* 1298cf20 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf23 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1298cf26 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1298cf2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cf2d je 0x1298cf8a */
  if (C.zf) goto L_1298cf8a;
  /* 1298cf2f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf32 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cf33 call 0x1298c1e0 */
  push32(0x1298cf38u); f_1298c1e0();
  /* 1298cf38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cf3b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298cf3e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf41 push edx */
  push32((uint32_t)(EDX));
  /* 1298cf42 call 0x1298f560 */
  push32(0x1298cf47u); f_1298f560();
  /* 1298cf47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cf4a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf4d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298cf50 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cf51 call 0x1298f430 */
  push32(0x1298cf56u); f_1298f430();
  /* 1298cf56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cf59 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298cf5b jge 0x1298cf66 */
  if ((C.sf==C.of)) goto L_1298cf66;
  /* 1298cf5d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1298cf64 jmp 0x1298cf8a */
  goto L_1298cf8a;
L_1298cf66:;
  /* 1298cf66 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf69 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cf6d je 0x1298cf8a */
  if (C.zf) goto L_1298cf8a;
  /* 1298cf6f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298cf71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf74 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1298cf77 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cf78 call 0x12983340 */
  push32(0x1298cf7du); f_12983340();
  /* 1298cf7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cf80 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf83 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1298cf8a:;
  /* 1298cf8a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298cf8d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1298cf94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298cf97 pop edi */
  EDI = (pop32());
  /* 1298cf98 pop esi */
  ESI = (pop32());
  /* 1298cf99 pop ebx */
  EBX = (pop32());
  /* 1298cf9a mov esp, ebp */
  ESP = (EBP);
  /* 1298cf9c pop ebp */
  EBP = (pop32());
  /* 1298cf9d ret  */
  ESPCHK(0x1298cee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfa0 @ 0x1298cfa0 (210 bytes, 63 insns) */
void f_1298cfa0(void) {
  FTRACE(0x1298cfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298cfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298cfa1 mov ebp, esp */
  EBP = (ESP);
  /* 1298cfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298cfa4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cfa7 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298cfad jae 0x1298cfd1 */
  if (!C.cf) goto L_1298cfd1;
  /* 1298cfaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cfb2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298cfb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cfb8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298cfbb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298cfbe mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298cfc5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298cfca and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298cfcd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298cfcf jne 0x1298cfe4 */
  if (!C.zf) goto L_1298cfe4;
L_1298cfd1:;
  /* 1298cfd1 call 0x1298a780 */
  push32(0x1298cfd6u); f_1298a780();
  /* 1298cfd6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298cfdc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298cfdf jmp 0x1298d06e */
  goto L_1298d06e;
L_1298cfe4:;
  /* 1298cfe4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cfe7 push edx */
  push32((uint32_t)(EDX));
  /* 1298cfe8 call 0x1298bfa0 */
  push32(0x1298cfedu); f_1298bfa0();
  /* 1298cfed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298cff0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cff3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1298cff6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298cff9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1298cffc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298cfff mov edx, dword ptr [eax*4 + 0x129afe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x129afe60)));
  /* 1298d006 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1298d00b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1298d00e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298d010 je 0x1298d04d */
  if (C.zf) goto L_1298d04d;
  /* 1298d012 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d015 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d016 call 0x1298be20 */
  push32(0x1298d01bu); f_1298be20();
  /* 1298d01b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d01e push eax */
  push32((uint32_t)(EAX));
  /* 1298d01f call dword ptr [0x129b032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b032c))), 0x1298d025u);
  /* 1298d025 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298d027 jne 0x1298d034 */
  if (!C.zf) goto L_1298d034;
  /* 1298d029 call dword ptr [0x129b0294] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0294))), 0x1298d02fu);
  /* 1298d02f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298d032 jmp 0x1298d03b */
  goto L_1298d03b;
L_1298d034:;
  /* 1298d034 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1298d03b:;
  /* 1298d03b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298d03f jne 0x1298d043 */
  if (!C.zf) goto L_1298d043;
  /* 1298d041 jmp 0x1298d05f */
  goto L_1298d05f;
L_1298d043:;
  /* 1298d043 call 0x1298a790 */
  push32(0x1298d048u); f_1298a790();
  /* 1298d048 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d04b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1298d04d:;
  /* 1298d04d call 0x1298a780 */
  push32(0x1298d052u); f_1298a780();
  /* 1298d052 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298d058 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1298d05f:;
  /* 1298d05f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d062 push eax */
  push32((uint32_t)(EAX));
  /* 1298d063 call 0x1298c030 */
  push32(0x1298d068u); f_1298c030();
  /* 1298d068 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d06b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298d06e:;
  /* 1298d06e mov esp, ebp */
  ESP = (EBP);
  /* 1298d070 pop ebp */
  EBP = (pop32());
  /* 1298d071 ret  */
  ESPCHK(0x1298cfa0u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1298d080 (219 bytes, 64 insns) */
void f_1298d080(void) {
  FTRACE(0x1298d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298d080 push ebp */
  push32((uint32_t)(EBP));
  /* 1298d081 mov ebp, esp */
  EBP = (ESP);
  /* 1298d083 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d084 cmp dword ptr [0x129ae694], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae694))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298d08b je 0x1298d121 */
  if (C.zf) goto L_1298d121;
  /* 1298d091 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1298d093 push 0x129a9fc8 */
  push32((uint32_t)(0x129a9fc8u));
  /* 1298d098 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d09a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1298d09f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d0a1 call 0x12982cc0 */
  push32(0x1298d0a6u); f_12982cc0();
  /* 1298d0a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d0a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298d0ac cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298d0b0 jne 0x1298d0bc */
  if (!C.zf) goto L_1298d0bc;
  /* 1298d0b2 mov eax, 1 */
  EAX = (0x1u);
  /* 1298d0b7 jmp 0x1298d157 */
  goto L_1298d157;
L_1298d0bc:;
  /* 1298d0bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d0bf push eax */
  push32((uint32_t)(EAX));
  /* 1298d0c0 call 0x1298d160 */
  push32(0x1298d0c5u); f_1298d160();
  /* 1298d0c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d0c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298d0ca je 0x1298d0ed */
  if (C.zf) goto L_1298d0ed;
  /* 1298d0cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d0cf push ecx */
  push32((uint32_t)(ECX));
  /* 1298d0d0 call 0x1298d6f0 */
  push32(0x1298d0d5u); f_1298d6f0();
  /* 1298d0d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d0d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d0da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d0dd push edx */
  push32((uint32_t)(EDX));
  /* 1298d0de call 0x12983340 */
  push32(0x1298d0e3u); f_12983340();
  /* 1298d0e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d0e6 mov eax, 1 */
  EAX = (0x1u);
  /* 1298d0eb jmp 0x1298d157 */
  goto L_1298d157;
L_1298d0ed:;
  /* 1298d0ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d0f0 mov dword ptr [0x129adc98], eax */
  w32((uint32_t)(0x129adc98), (EAX));
  /* 1298d0f5 mov ecx, dword ptr [0x129ae6b4] */
  ECX = (r32((uint32_t)(0x129ae6b4)));
  /* 1298d0fb push ecx */
  push32((uint32_t)(ECX));
  /* 1298d0fc call 0x1298d6f0 */
  push32(0x1298d101u); f_1298d6f0();
  /* 1298d101 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d104 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d106 mov edx, dword ptr [0x129ae6b4] */
  EDX = (r32((uint32_t)(0x129ae6b4)));
  /* 1298d10c push edx */
  push32((uint32_t)(EDX));
  /* 1298d10d call 0x12983340 */
  push32(0x1298d112u); f_12983340();
  /* 1298d112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d115 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d118 mov dword ptr [0x129ae6b4], eax */
  w32((uint32_t)(0x129ae6b4), (EAX));
  /* 1298d11d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298d11f jmp 0x1298d157 */
  goto L_1298d157;
L_1298d121:;
  /* 1298d121 mov dword ptr [0x129adc98], 0x129adca0 */
  w32((uint32_t)(0x129adc98), (0x129adca0u));
  /* 1298d12b mov ecx, dword ptr [0x129ae6b4] */
  ECX = (r32((uint32_t)(0x129ae6b4)));
  /* 1298d131 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d132 call 0x1298d6f0 */
  push32(0x1298d137u); f_1298d6f0();
  /* 1298d137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d13a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d13c mov edx, dword ptr [0x129ae6b4] */
  EDX = (r32((uint32_t)(0x129ae6b4)));
  /* 1298d142 push edx */
  push32((uint32_t)(EDX));
  /* 1298d143 call 0x12983340 */
  push32(0x1298d148u); f_12983340();
  /* 1298d148 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d14b mov dword ptr [0x129ae6b4], 0 */
  w32((uint32_t)(0x129ae6b4), (0x0u));
  /* 1298d155 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298d157:;
  /* 1298d157 mov esp, ebp */
  ESP = (EBP);
  /* 1298d159 pop ebp */
  EBP = (pop32());
  /* 1298d15a ret  */
  ESPCHK(0x1298d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d160 @ 0x1298d160 (1423 bytes, 533 insns) */
void f_1298d160(void) {
  FTRACE(0x1298d160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298d160 push ebp */
  push32((uint32_t)(EBP));
  /* 1298d161 mov ebp, esp */
  EBP = (ESP);
  /* 1298d163 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298d166 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1298d16d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298d16f mov ax, word ptr [0x129ae6ee] */
  AX = (r16((uint32_t)(0x129ae6ee)));
  /* 1298d175 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298d178 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d17a mov cx, word ptr [0x129ae6f0] */
  CX = (r16((uint32_t)(0x129ae6f0)));
  /* 1298d181 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298d184 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298d188 jne 0x1298d192 */
  if (!C.zf) goto L_1298d192;
  /* 1298d18a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298d18d jmp 0x1298d6eb */
  goto L_1298d6eb;
L_1298d192:;
  /* 1298d192 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d195 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d198 push edx */
  push32((uint32_t)(EDX));
  /* 1298d199 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1298d19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d19e push eax */
  push32((uint32_t)(EAX));
  /* 1298d19f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d1a1 call 0x12990a70 */
  push32(0x1298d1a6u); f_12990a70();
  /* 1298d1a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1a9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d1ac or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d1ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d1b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d1b4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1b7 push edx */
  push32((uint32_t)(EDX));
  /* 1298d1b8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1298d1ba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d1bd push eax */
  push32((uint32_t)(EAX));
  /* 1298d1be push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d1c0 call 0x12990a70 */
  push32(0x1298d1c5u); f_12990a70();
  /* 1298d1c5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d1cb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d1cd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d1d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d1d3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1d6 push edx */
  push32((uint32_t)(EDX));
  /* 1298d1d7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1298d1d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d1dc push eax */
  push32((uint32_t)(EAX));
  /* 1298d1dd push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d1df call 0x12990a70 */
  push32(0x1298d1e4u); f_12990a70();
  /* 1298d1e4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d1ea or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d1ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d1ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d1f2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d1f5 push edx */
  push32((uint32_t)(EDX));
  /* 1298d1f6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1298d1f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d1fb push eax */
  push32((uint32_t)(EAX));
  /* 1298d1fc push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d1fe call 0x12990a70 */
  push32(0x1298d203u); f_12990a70();
  /* 1298d203 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d206 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d209 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d20b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d20e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d211 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d214 push edx */
  push32((uint32_t)(EDX));
  /* 1298d215 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1298d217 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d21a push eax */
  push32((uint32_t)(EAX));
  /* 1298d21b push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d21d call 0x12990a70 */
  push32(0x1298d222u); f_12990a70();
  /* 1298d222 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d225 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d228 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d22a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d22d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d230 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d233 push edx */
  push32((uint32_t)(EDX));
  /* 1298d234 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1298d236 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d239 push eax */
  push32((uint32_t)(EAX));
  /* 1298d23a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d23c call 0x12990a70 */
  push32(0x1298d241u); f_12990a70();
  /* 1298d241 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d247 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d249 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d24c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d24f push edx */
  push32((uint32_t)(EDX));
  /* 1298d250 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1298d252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d255 push eax */
  push32((uint32_t)(EAX));
  /* 1298d256 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d258 call 0x12990a70 */
  push32(0x1298d25du); f_12990a70();
  /* 1298d25d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d260 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d263 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d265 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d268 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d26b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d26e push edx */
  push32((uint32_t)(EDX));
  /* 1298d26f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1298d271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d274 push eax */
  push32((uint32_t)(EAX));
  /* 1298d275 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d277 call 0x12990a70 */
  push32(0x1298d27cu); f_12990a70();
  /* 1298d27c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d27f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d282 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d284 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d287 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d28a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d28d push edx */
  push32((uint32_t)(EDX));
  /* 1298d28e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1298d290 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d293 push eax */
  push32((uint32_t)(EAX));
  /* 1298d294 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d296 call 0x12990a70 */
  push32(0x1298d29bu); f_12990a70();
  /* 1298d29b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d29e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d2a1 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d2a3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d2a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d2a9 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2ac push edx */
  push32((uint32_t)(EDX));
  /* 1298d2ad push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1298d2af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d2b2 push eax */
  push32((uint32_t)(EAX));
  /* 1298d2b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d2b5 call 0x12990a70 */
  push32(0x1298d2bau); f_12990a70();
  /* 1298d2ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d2c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d2c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d2c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d2c8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2cb push edx */
  push32((uint32_t)(EDX));
  /* 1298d2cc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1298d2ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d2d1 push eax */
  push32((uint32_t)(EAX));
  /* 1298d2d2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d2d4 call 0x12990a70 */
  push32(0x1298d2d9u); f_12990a70();
  /* 1298d2d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d2df or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d2e1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d2e4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d2e7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2ea push edx */
  push32((uint32_t)(EDX));
  /* 1298d2eb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1298d2ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d2f0 push eax */
  push32((uint32_t)(EAX));
  /* 1298d2f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d2f3 call 0x12990a70 */
  push32(0x1298d2f8u); f_12990a70();
  /* 1298d2f8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d2fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d2fe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d300 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d303 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d306 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d309 push edx */
  push32((uint32_t)(EDX));
  /* 1298d30a push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1298d30c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d30f push eax */
  push32((uint32_t)(EAX));
  /* 1298d310 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d312 call 0x12990a70 */
  push32(0x1298d317u); f_12990a70();
  /* 1298d317 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d31a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d31d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d31f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d322 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d325 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d328 push edx */
  push32((uint32_t)(EDX));
  /* 1298d329 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1298d32b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d32e push eax */
  push32((uint32_t)(EAX));
  /* 1298d32f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d331 call 0x12990a70 */
  push32(0x1298d336u); f_12990a70();
  /* 1298d336 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d339 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d33c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d33e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d341 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d344 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d347 push edx */
  push32((uint32_t)(EDX));
  /* 1298d348 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1298d34a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d34d push eax */
  push32((uint32_t)(EAX));
  /* 1298d34e push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d350 call 0x12990a70 */
  push32(0x1298d355u); f_12990a70();
  /* 1298d355 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d358 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d35b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d35d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d360 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d363 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d366 push edx */
  push32((uint32_t)(EDX));
  /* 1298d367 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1298d369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d36c push eax */
  push32((uint32_t)(EAX));
  /* 1298d36d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d36f call 0x12990a70 */
  push32(0x1298d374u); f_12990a70();
  /* 1298d374 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d377 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d37a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d37c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d37f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d382 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d385 push edx */
  push32((uint32_t)(EDX));
  /* 1298d386 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1298d388 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d38b push eax */
  push32((uint32_t)(EAX));
  /* 1298d38c push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d38e call 0x12990a70 */
  push32(0x1298d393u); f_12990a70();
  /* 1298d393 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d396 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d399 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d39b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d39e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d3a1 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3a4 push edx */
  push32((uint32_t)(EDX));
  /* 1298d3a5 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1298d3a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d3aa push eax */
  push32((uint32_t)(EAX));
  /* 1298d3ab push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d3ad call 0x12990a70 */
  push32(0x1298d3b2u); f_12990a70();
  /* 1298d3b2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3b5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d3b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d3ba mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d3bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d3c0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3c3 push edx */
  push32((uint32_t)(EDX));
  /* 1298d3c4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1298d3c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1298d3ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d3cc call 0x12990a70 */
  push32(0x1298d3d1u); f_12990a70();
  /* 1298d3d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d3d7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d3d9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d3dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d3df add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3e2 push edx */
  push32((uint32_t)(EDX));
  /* 1298d3e3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1298d3e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d3e8 push eax */
  push32((uint32_t)(EAX));
  /* 1298d3e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d3eb call 0x12990a70 */
  push32(0x1298d3f0u); f_12990a70();
  /* 1298d3f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d3f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d3f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d3f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d3fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d3fe add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d401 push edx */
  push32((uint32_t)(EDX));
  /* 1298d402 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1298d404 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d407 push eax */
  push32((uint32_t)(EAX));
  /* 1298d408 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d40a call 0x12990a70 */
  push32(0x1298d40fu); f_12990a70();
  /* 1298d40f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d412 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d415 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d417 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d41a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d41d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d420 push edx */
  push32((uint32_t)(EDX));
  /* 1298d421 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1298d423 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d426 push eax */
  push32((uint32_t)(EAX));
  /* 1298d427 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d429 call 0x12990a70 */
  push32(0x1298d42eu); f_12990a70();
  /* 1298d42e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d431 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d434 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d436 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d439 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d43c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d43f push edx */
  push32((uint32_t)(EDX));
  /* 1298d440 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1298d442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d445 push eax */
  push32((uint32_t)(EAX));
  /* 1298d446 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d448 call 0x12990a70 */
  push32(0x1298d44du); f_12990a70();
  /* 1298d44d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d453 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d455 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d45b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d45e push edx */
  push32((uint32_t)(EDX));
  /* 1298d45f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1298d461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d464 push eax */
  push32((uint32_t)(EAX));
  /* 1298d465 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d467 call 0x12990a70 */
  push32(0x1298d46cu); f_12990a70();
  /* 1298d46c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d46f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d472 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d474 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d477 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d47a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d47d push edx */
  push32((uint32_t)(EDX));
  /* 1298d47e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1298d480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d483 push eax */
  push32((uint32_t)(EAX));
  /* 1298d484 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d486 call 0x12990a70 */
  push32(0x1298d48bu); f_12990a70();
  /* 1298d48b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d48e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d491 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d493 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d496 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d499 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d49c push edx */
  push32((uint32_t)(EDX));
  /* 1298d49d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1298d49f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d4a2 push eax */
  push32((uint32_t)(EAX));
  /* 1298d4a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d4a5 call 0x12990a70 */
  push32(0x1298d4aau); f_12990a70();
  /* 1298d4aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d4b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d4b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d4b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d4b8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4bb push edx */
  push32((uint32_t)(EDX));
  /* 1298d4bc push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1298d4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d4c1 push eax */
  push32((uint32_t)(EAX));
  /* 1298d4c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d4c4 call 0x12990a70 */
  push32(0x1298d4c9u); f_12990a70();
  /* 1298d4c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d4cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d4d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d4d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d4d7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4da push edx */
  push32((uint32_t)(EDX));
  /* 1298d4db push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1298d4dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d4e0 push eax */
  push32((uint32_t)(EAX));
  /* 1298d4e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d4e3 call 0x12990a70 */
  push32(0x1298d4e8u); f_12990a70();
  /* 1298d4e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d4ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d4f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d4f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d4f6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d4f9 push edx */
  push32((uint32_t)(EDX));
  /* 1298d4fa push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1298d4fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d4ff push eax */
  push32((uint32_t)(EAX));
  /* 1298d500 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d502 call 0x12990a70 */
  push32(0x1298d507u); f_12990a70();
  /* 1298d507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d50a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d50d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d50f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d515 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d518 push edx */
  push32((uint32_t)(EDX));
  /* 1298d519 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1298d51b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d51e push eax */
  push32((uint32_t)(EAX));
  /* 1298d51f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d521 call 0x12990a70 */
  push32(0x1298d526u); f_12990a70();
  /* 1298d526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d52c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d52e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d534 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d537 push edx */
  push32((uint32_t)(EDX));
  /* 1298d538 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1298d53a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d53d push eax */
  push32((uint32_t)(EAX));
  /* 1298d53e push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d540 call 0x12990a70 */
  push32(0x1298d545u); f_12990a70();
  /* 1298d545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d548 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d54b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d54d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d550 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d553 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d556 push edx */
  push32((uint32_t)(EDX));
  /* 1298d557 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1298d559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d55c push eax */
  push32((uint32_t)(EAX));
  /* 1298d55d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d55f call 0x12990a70 */
  push32(0x1298d564u); f_12990a70();
  /* 1298d564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d567 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d56a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d56c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d56f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d572 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d578 push edx */
  push32((uint32_t)(EDX));
  /* 1298d579 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1298d57b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d57e push eax */
  push32((uint32_t)(EAX));
  /* 1298d57f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d581 call 0x12990a70 */
  push32(0x1298d586u); f_12990a70();
  /* 1298d586 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d58c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d58e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d591 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d594 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d59a push edx */
  push32((uint32_t)(EDX));
  /* 1298d59b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1298d59d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d5a0 push eax */
  push32((uint32_t)(EAX));
  /* 1298d5a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d5a3 call 0x12990a70 */
  push32(0x1298d5a8u); f_12990a70();
  /* 1298d5a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d5ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d5ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d5b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d5b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d5b6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d5bc push edx */
  push32((uint32_t)(EDX));
  /* 1298d5bd push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1298d5bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d5c2 push eax */
  push32((uint32_t)(EAX));
  /* 1298d5c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d5c5 call 0x12990a70 */
  push32(0x1298d5cau); f_12990a70();
  /* 1298d5ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d5cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d5d0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d5d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d5d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d5d8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d5de push edx */
  push32((uint32_t)(EDX));
  /* 1298d5df push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1298d5e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d5e4 push eax */
  push32((uint32_t)(EAX));
  /* 1298d5e5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d5e7 call 0x12990a70 */
  push32(0x1298d5ecu); f_12990a70();
  /* 1298d5ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d5ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d5f2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d5f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d5f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d5fa add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d600 push edx */
  push32((uint32_t)(EDX));
  /* 1298d601 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1298d603 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d606 push eax */
  push32((uint32_t)(EAX));
  /* 1298d607 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d609 call 0x12990a70 */
  push32(0x1298d60eu); f_12990a70();
  /* 1298d60e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d611 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d614 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d616 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d61c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d622 push edx */
  push32((uint32_t)(EDX));
  /* 1298d623 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1298d625 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d628 push eax */
  push32((uint32_t)(EAX));
  /* 1298d629 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d62b call 0x12990a70 */
  push32(0x1298d630u); f_12990a70();
  /* 1298d630 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d633 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d636 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d638 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d63b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d63e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d644 push edx */
  push32((uint32_t)(EDX));
  /* 1298d645 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1298d647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d64a push eax */
  push32((uint32_t)(EAX));
  /* 1298d64b push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d64d call 0x12990a70 */
  push32(0x1298d652u); f_12990a70();
  /* 1298d652 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d655 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d658 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d65a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d65d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d660 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d666 push edx */
  push32((uint32_t)(EDX));
  /* 1298d667 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1298d669 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298d66c push eax */
  push32((uint32_t)(EAX));
  /* 1298d66d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d66f call 0x12990a70 */
  push32(0x1298d674u); f_12990a70();
  /* 1298d674 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d677 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d67a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d67c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d67f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d682 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d688 push edx */
  push32((uint32_t)(EDX));
  /* 1298d689 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1298d68b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298d68e push eax */
  push32((uint32_t)(EAX));
  /* 1298d68f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d691 call 0x12990a70 */
  push32(0x1298d696u); f_12990a70();
  /* 1298d696 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d699 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d69c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d69e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d6a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d6a4 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d6aa push edx */
  push32((uint32_t)(EDX));
  /* 1298d6ab push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1298d6ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298d6b0 push eax */
  push32((uint32_t)(EAX));
  /* 1298d6b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d6b3 call 0x12990a70 */
  push32(0x1298d6b8u); f_12990a70();
  /* 1298d6b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d6bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d6be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d6c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d6c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d6c6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d6cc push edx */
  push32((uint32_t)(EDX));
  /* 1298d6cd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1298d6d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298d6d5 push eax */
  push32((uint32_t)(EAX));
  /* 1298d6d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298d6d8 call 0x12990a70 */
  push32(0x1298d6ddu); f_12990a70();
  /* 1298d6dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d6e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298d6e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298d6e5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1298d6e8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1298d6eb:;
  /* 1298d6eb mov esp, ebp */
  ESP = (EBP);
  /* 1298d6ed pop ebp */
  EBP = (pop32());
  /* 1298d6ee ret  */
  ESPCHK(0x1298d160u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1298d6f0 (779 bytes, 265 insns) */
void f_1298d6f0(void) {
  FTRACE(0x1298d6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298d6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298d6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1298d6f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298d6f7 jne 0x1298d6fe */
  if (!C.zf) goto L_1298d6fe;
  /* 1298d6f9 jmp 0x1298d9f9 */
  goto L_1298d9f9;
L_1298d6fe:;
  /* 1298d6fe push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d700 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d703 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298d706 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d707 call 0x12983340 */
  push32(0x1298d70cu); f_12983340();
  /* 1298d70c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d70f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d711 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d714 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298d717 push eax */
  push32((uint32_t)(EAX));
  /* 1298d718 call 0x12983340 */
  push32(0x1298d71du); f_12983340();
  /* 1298d71d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d720 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d722 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d725 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298d728 push edx */
  push32((uint32_t)(EDX));
  /* 1298d729 call 0x12983340 */
  push32(0x1298d72eu); f_12983340();
  /* 1298d72e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d731 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d733 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d736 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298d739 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d73a call 0x12983340 */
  push32(0x1298d73fu); f_12983340();
  /* 1298d73f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d742 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d744 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d747 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298d74a push eax */
  push32((uint32_t)(EAX));
  /* 1298d74b call 0x12983340 */
  push32(0x1298d750u); f_12983340();
  /* 1298d750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d753 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d755 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d758 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1298d75b push edx */
  push32((uint32_t)(EDX));
  /* 1298d75c call 0x12983340 */
  push32(0x1298d761u); f_12983340();
  /* 1298d761 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d764 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d766 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d769 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298d76b push ecx */
  push32((uint32_t)(ECX));
  /* 1298d76c call 0x12983340 */
  push32(0x1298d771u); f_12983340();
  /* 1298d771 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d774 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d776 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d779 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1298d77c push eax */
  push32((uint32_t)(EAX));
  /* 1298d77d call 0x12983340 */
  push32(0x1298d782u); f_12983340();
  /* 1298d782 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d785 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d78a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1298d78d push edx */
  push32((uint32_t)(EDX));
  /* 1298d78e call 0x12983340 */
  push32(0x1298d793u); f_12983340();
  /* 1298d793 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d796 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d798 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d79b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1298d79e push ecx */
  push32((uint32_t)(ECX));
  /* 1298d79f call 0x12983340 */
  push32(0x1298d7a4u); f_12983340();
  /* 1298d7a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7a9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d7ac mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1298d7af push eax */
  push32((uint32_t)(EAX));
  /* 1298d7b0 call 0x12983340 */
  push32(0x1298d7b5u); f_12983340();
  /* 1298d7b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d7bd mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1298d7c0 push edx */
  push32((uint32_t)(EDX));
  /* 1298d7c1 call 0x12983340 */
  push32(0x1298d7c6u); f_12983340();
  /* 1298d7c6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7c9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d7ce mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1298d7d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d7d2 call 0x12983340 */
  push32(0x1298d7d7u); f_12983340();
  /* 1298d7d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7da push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d7df mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1298d7e2 push eax */
  push32((uint32_t)(EAX));
  /* 1298d7e3 call 0x12983340 */
  push32(0x1298d7e8u); f_12983340();
  /* 1298d7e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7eb push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d7f0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1298d7f3 push edx */
  push32((uint32_t)(EDX));
  /* 1298d7f4 call 0x12983340 */
  push32(0x1298d7f9u); f_12983340();
  /* 1298d7f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d7fc push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d7fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d801 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1298d804 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d805 call 0x12983340 */
  push32(0x1298d80au); f_12983340();
  /* 1298d80a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d80d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d80f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d812 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1298d815 push eax */
  push32((uint32_t)(EAX));
  /* 1298d816 call 0x12983340 */
  push32(0x1298d81bu); f_12983340();
  /* 1298d81b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d81e push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d820 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d823 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1298d826 push edx */
  push32((uint32_t)(EDX));
  /* 1298d827 call 0x12983340 */
  push32(0x1298d82cu); f_12983340();
  /* 1298d82c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d82f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d834 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1298d837 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d838 call 0x12983340 */
  push32(0x1298d83du); f_12983340();
  /* 1298d83d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d840 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d842 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d845 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1298d848 push eax */
  push32((uint32_t)(EAX));
  /* 1298d849 call 0x12983340 */
  push32(0x1298d84eu); f_12983340();
  /* 1298d84e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d851 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d856 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1298d859 push edx */
  push32((uint32_t)(EDX));
  /* 1298d85a call 0x12983340 */
  push32(0x1298d85fu); f_12983340();
  /* 1298d85f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d862 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d864 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d867 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1298d86a push ecx */
  push32((uint32_t)(ECX));
  /* 1298d86b call 0x12983340 */
  push32(0x1298d870u); f_12983340();
  /* 1298d870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d873 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d875 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d878 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1298d87b push eax */
  push32((uint32_t)(EAX));
  /* 1298d87c call 0x12983340 */
  push32(0x1298d881u); f_12983340();
  /* 1298d881 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d884 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d886 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d889 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1298d88c push edx */
  push32((uint32_t)(EDX));
  /* 1298d88d call 0x12983340 */
  push32(0x1298d892u); f_12983340();
  /* 1298d892 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d895 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d89a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1298d89d push ecx */
  push32((uint32_t)(ECX));
  /* 1298d89e call 0x12983340 */
  push32(0x1298d8a3u); f_12983340();
  /* 1298d8a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d8ab mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1298d8ae push eax */
  push32((uint32_t)(EAX));
  /* 1298d8af call 0x12983340 */
  push32(0x1298d8b4u); f_12983340();
  /* 1298d8b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d8bc mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1298d8bf push edx */
  push32((uint32_t)(EDX));
  /* 1298d8c0 call 0x12983340 */
  push32(0x1298d8c5u); f_12983340();
  /* 1298d8c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d8cd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1298d8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d8d1 call 0x12983340 */
  push32(0x1298d8d6u); f_12983340();
  /* 1298d8d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d8de mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1298d8e1 push eax */
  push32((uint32_t)(EAX));
  /* 1298d8e2 call 0x12983340 */
  push32(0x1298d8e7u); f_12983340();
  /* 1298d8e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8ea push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d8ef mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1298d8f2 push edx */
  push32((uint32_t)(EDX));
  /* 1298d8f3 call 0x12983340 */
  push32(0x1298d8f8u); f_12983340();
  /* 1298d8f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d8fb push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d8fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d900 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1298d903 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d904 call 0x12983340 */
  push32(0x1298d909u); f_12983340();
  /* 1298d909 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d90c push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d911 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1298d914 push eax */
  push32((uint32_t)(EAX));
  /* 1298d915 call 0x12983340 */
  push32(0x1298d91au); f_12983340();
  /* 1298d91a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d91d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d91f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d922 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1298d928 push edx */
  push32((uint32_t)(EDX));
  /* 1298d929 call 0x12983340 */
  push32(0x1298d92eu); f_12983340();
  /* 1298d92e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d931 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d936 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1298d93c push ecx */
  push32((uint32_t)(ECX));
  /* 1298d93d call 0x12983340 */
  push32(0x1298d942u); f_12983340();
  /* 1298d942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d945 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d94a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1298d950 push eax */
  push32((uint32_t)(EAX));
  /* 1298d951 call 0x12983340 */
  push32(0x1298d956u); f_12983340();
  /* 1298d956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d959 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d95b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d95e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1298d964 push edx */
  push32((uint32_t)(EDX));
  /* 1298d965 call 0x12983340 */
  push32(0x1298d96au); f_12983340();
  /* 1298d96a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d96d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d96f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d972 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1298d978 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d979 call 0x12983340 */
  push32(0x1298d97eu); f_12983340();
  /* 1298d97e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d981 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d983 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d986 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1298d98c push eax */
  push32((uint32_t)(EAX));
  /* 1298d98d call 0x12983340 */
  push32(0x1298d992u); f_12983340();
  /* 1298d992 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d995 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d997 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d99a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1298d9a0 push edx */
  push32((uint32_t)(EDX));
  /* 1298d9a1 call 0x12983340 */
  push32(0x1298d9a6u); f_12983340();
  /* 1298d9a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d9a9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d9ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d9ae mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1298d9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d9b5 call 0x12983340 */
  push32(0x1298d9bau); f_12983340();
  /* 1298d9ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d9bd push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d9bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d9c2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1298d9c8 push eax */
  push32((uint32_t)(EAX));
  /* 1298d9c9 call 0x12983340 */
  push32(0x1298d9ceu); f_12983340();
  /* 1298d9ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d9d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d9d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d9d6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1298d9dc push edx */
  push32((uint32_t)(EDX));
  /* 1298d9dd call 0x12983340 */
  push32(0x1298d9e2u); f_12983340();
  /* 1298d9e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298d9e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298d9e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298d9ea mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1298d9f0 push ecx */
  push32((uint32_t)(ECX));
  /* 1298d9f1 call 0x12983340 */
  push32(0x1298d9f6u); f_12983340();
  /* 1298d9f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298d9f9:;
  /* 1298d9f9 pop ebp */
  EBP = (pop32());
  /* 1298d9fa ret  */
  ESPCHK(0x1298d6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x1298da00 (678 bytes, 180 insns) */
void f_1298da00(void) {
  FTRACE(0x1298da00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298da00 push ebp */
  push32((uint32_t)(EBP));
  /* 1298da01 mov ebp, esp */
  EBP = (ESP);
  /* 1298da03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298da06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298da0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298da0f mov ax, word ptr [0x129ae6ea] */
  AX = (r16((uint32_t)(0x129ae6ea)));
  /* 1298da15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298da18 cmp dword ptr [0x129ae690], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae690))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298da1f je 0x1298db7a */
  if (C.zf) goto L_1298db7a;
  /* 1298da25 push 0x129ae6b8 */
  push32((uint32_t)(0x129ae6b8u));
  /* 1298da2a push 0xe */
  push32((uint32_t)(0xeu));
  /* 1298da2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298da2f push ecx */
  push32((uint32_t)(ECX));
  /* 1298da30 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298da32 call 0x12990a70 */
  push32(0x1298da37u); f_12990a70();
  /* 1298da37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298da3a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298da3d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1298da3f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298da42 push 0x129ae6bc */
  push32((uint32_t)(0x129ae6bcu));
  /* 1298da47 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1298da49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298da4c push eax */
  push32((uint32_t)(EAX));
  /* 1298da4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298da4f call 0x12990a70 */
  push32(0x1298da54u); f_12990a70();
  /* 1298da54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298da57 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298da5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298da5c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298da5f push 0x129ae6c0 */
  push32((uint32_t)(0x129ae6c0u));
  /* 1298da64 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1298da66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298da69 push edx */
  push32((uint32_t)(EDX));
  /* 1298da6a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298da6c call 0x12990a70 */
  push32(0x1298da71u); f_12990a70();
  /* 1298da71 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298da74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298da77 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298da79 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298da7c mov edx, dword ptr [0x129ae6c0] */
  EDX = (r32((uint32_t)(0x129ae6c0)));
  /* 1298da82 push edx */
  push32((uint32_t)(EDX));
  /* 1298da83 call 0x1298dcb0 */
  push32(0x1298da88u); f_1298dcb0();
  /* 1298da88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298da8b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298da8f je 0x1298dae9 */
  if (C.zf) goto L_1298dae9;
  /* 1298da91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298da93 mov eax, dword ptr [0x129ae6b8] */
  EAX = (r32((uint32_t)(0x129ae6b8)));
  /* 1298da98 push eax */
  push32((uint32_t)(EAX));
  /* 1298da99 call 0x12983340 */
  push32(0x1298da9eu); f_12983340();
  /* 1298da9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298daa1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298daa3 mov ecx, dword ptr [0x129ae6bc] */
  ECX = (r32((uint32_t)(0x129ae6bc)));
  /* 1298daa9 push ecx */
  push32((uint32_t)(ECX));
  /* 1298daaa call 0x12983340 */
  push32(0x1298daafu); f_12983340();
  /* 1298daaf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dab2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dab4 mov edx, dword ptr [0x129ae6c0] */
  EDX = (r32((uint32_t)(0x129ae6c0)));
  /* 1298daba push edx */
  push32((uint32_t)(EDX));
  /* 1298dabb call 0x12983340 */
  push32(0x1298dac0u); f_12983340();
  /* 1298dac0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dac3 mov dword ptr [0x129ae6b8], 0 */
  w32((uint32_t)(0x129ae6b8), (0x0u));
  /* 1298dacd mov dword ptr [0x129ae6bc], 0 */
  w32((uint32_t)(0x129ae6bc), (0x0u));
  /* 1298dad7 mov dword ptr [0x129ae6c0], 0 */
  w32((uint32_t)(0x129ae6c0), (0x0u));
  /* 1298dae1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298dae4 jmp 0x1298dca2 */
  goto L_1298dca2;
L_1298dae9:;
  /* 1298dae9 mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298daee cmp dword ptr [eax], 0x129add50 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x129add50u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298daf4 je 0x1298db30 */
  if (C.zf) goto L_1298db30;
  /* 1298daf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298daf8 mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298dafe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298db00 push edx */
  push32((uint32_t)(EDX));
  /* 1298db01 call 0x12983340 */
  push32(0x1298db06u); f_12983340();
  /* 1298db06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298db09 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298db0b mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298db10 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298db13 push ecx */
  push32((uint32_t)(ECX));
  /* 1298db14 call 0x12983340 */
  push32(0x1298db19u); f_12983340();
  /* 1298db19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298db1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1298db1e mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298db24 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298db27 push eax */
  push32((uint32_t)(EAX));
  /* 1298db28 call 0x12983340 */
  push32(0x1298db2du); f_12983340();
  /* 1298db2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298db30:;
  /* 1298db30 mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298db36 mov edx, dword ptr [0x129ae6b8] */
  EDX = (r32((uint32_t)(0x129ae6b8)));
  /* 1298db3c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1298db3e mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298db43 mov ecx, dword ptr [0x129ae6bc] */
  ECX = (r32((uint32_t)(0x129ae6bc)));
  /* 1298db49 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1298db4c mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298db52 mov eax, dword ptr [0x129ae6c0] */
  EAX = (r32((uint32_t)(0x129ae6c0)));
  /* 1298db57 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1298db5a mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298db60 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298db62 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298db64 mov byte ptr [0x129acea8], al */
  w8((uint32_t)(0x129acea8), (AL));
  /* 1298db69 mov dword ptr [0x129aceac], 1 */
  w32((uint32_t)(0x129aceac), (0x1u));
  /* 1298db73 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298db75 jmp 0x1298dca2 */
  goto L_1298dca2;
L_1298db7a:;
  /* 1298db7a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298db7c mov ecx, dword ptr [0x129ae6b8] */
  ECX = (r32((uint32_t)(0x129ae6b8)));
  /* 1298db82 push ecx */
  push32((uint32_t)(ECX));
  /* 1298db83 call 0x12983340 */
  push32(0x1298db88u); f_12983340();
  /* 1298db88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298db8b push 2 */
  push32((uint32_t)(0x2u));
  /* 1298db8d mov edx, dword ptr [0x129ae6bc] */
  EDX = (r32((uint32_t)(0x129ae6bc)));
  /* 1298db93 push edx */
  push32((uint32_t)(EDX));
  /* 1298db94 call 0x12983340 */
  push32(0x1298db99u); f_12983340();
  /* 1298db99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298db9c push 2 */
  push32((uint32_t)(0x2u));
  /* 1298db9e mov eax, dword ptr [0x129ae6c0] */
  EAX = (r32((uint32_t)(0x129ae6c0)));
  /* 1298dba3 push eax */
  push32((uint32_t)(EAX));
  /* 1298dba4 call 0x12983340 */
  push32(0x1298dba9u); f_12983340();
  /* 1298dba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dbac mov dword ptr [0x129ae6b8], 0 */
  w32((uint32_t)(0x129ae6b8), (0x0u));
  /* 1298dbb6 mov dword ptr [0x129ae6bc], 0 */
  w32((uint32_t)(0x129ae6bc), (0x0u));
  /* 1298dbc0 mov dword ptr [0x129ae6c0], 0 */
  w32((uint32_t)(0x129ae6c0), (0x0u));
  /* 1298dbca push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1298dbcf push 0x129a9fd4 */
  push32((uint32_t)(0x129a9fd4u));
  /* 1298dbd4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dbd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dbd8 call 0x129828b0 */
  push32(0x1298dbddu); f_129828b0();
  /* 1298dbdd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dbe0 mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298dbe6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1298dbe8 mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298dbee cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dbf1 jne 0x1298dbfb */
  if (!C.zf) goto L_1298dbfb;
  /* 1298dbf3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298dbf6 jmp 0x1298dca2 */
  goto L_1298dca2;
L_1298dbfb:;
  /* 1298dbfb push 0x129a9fa4 */
  push32((uint32_t)(0x129a9fa4u));
  /* 1298dc00 mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298dc05 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1298dc07 push ecx */
  push32((uint32_t)(ECX));
  /* 1298dc08 call 0x12985860 */
  push32(0x1298dc0du); f_12985860();
  /* 1298dc0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dc10 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1298dc15 push 0x129a9fd4 */
  push32((uint32_t)(0x129a9fd4u));
  /* 1298dc1a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dc1c push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dc1e call 0x129828b0 */
  push32(0x1298dc23u); f_129828b0();
  /* 1298dc23 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dc26 mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298dc2c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1298dc2f mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298dc34 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dc38 jne 0x1298dc3f */
  if (!C.zf) goto L_1298dc3f;
  /* 1298dc3a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298dc3d jmp 0x1298dca2 */
  goto L_1298dca2;
L_1298dc3f:;
  /* 1298dc3f mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298dc45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1298dc48 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1298dc4b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1298dc50 push 0x129a9fd4 */
  push32((uint32_t)(0x129a9fd4u));
  /* 1298dc55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dc57 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dc59 call 0x129828b0 */
  push32(0x1298dc5eu); f_129828b0();
  /* 1298dc5e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dc61 mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298dc67 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1298dc6a mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298dc70 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dc74 jne 0x1298dc7b */
  if (!C.zf) goto L_1298dc7b;
  /* 1298dc76 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298dc79 jmp 0x1298dca2 */
  goto L_1298dca2;
L_1298dc7b:;
  /* 1298dc7b mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298dc80 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1298dc83 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1298dc86 mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298dc8c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298dc8e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1298dc90 mov byte ptr [0x129acea8], cl */
  w8((uint32_t)(0x129acea8), (CL));
  /* 1298dc96 mov dword ptr [0x129aceac], 1 */
  w32((uint32_t)(0x129aceac), (0x1u));
  /* 1298dca0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298dca2:;
  /* 1298dca2 mov esp, ebp */
  ESP = (EBP);
  /* 1298dca4 pop ebp */
  EBP = (pop32());
  /* 1298dca5 ret  */
  ESPCHK(0x1298da00u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1298dcb0 (125 bytes, 49 insns) */
void f_1298dcb0(void) {
  FTRACE(0x1298dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1298dcb3 push ecx */
  push32((uint32_t)(ECX));
L_1298dcb4:;
  /* 1298dcb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dcb7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298dcba test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298dcbc je 0x1298dd29 */
  if (C.zf) goto L_1298dd29;
  /* 1298dcbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dcc1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298dcc4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dcc7 jl 0x1298dced */
  if ((C.sf!=C.of)) goto L_1298dced;
  /* 1298dcc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dccc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298dccf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dcd2 jg 0x1298dced */
  if ((!C.zf&&C.sf==C.of)) goto L_1298dced;
  /* 1298dcd4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dcd7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298dcda sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298dcdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dce0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1298dce2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dce5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dce8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298dceb jmp 0x1298dd27 */
  goto L_1298dd27;
L_1298dced:;
  /* 1298dced mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dcf0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298dcf3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dcf6 jne 0x1298dd1e */
  if (!C.zf) goto L_1298dd1e;
  /* 1298dcf8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dcfb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298dcfe:;
  /* 1298dcfe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd01 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd04 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1298dd07 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1298dd09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd0c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd0f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298dd12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd15 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298dd18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298dd1a jne 0x1298dcfe */
  if (!C.zf) goto L_1298dcfe;
  /* 1298dd1c jmp 0x1298dd27 */
  goto L_1298dd27;
L_1298dd1e:;
  /* 1298dd1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dd21 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd24 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1298dd27:;
  /* 1298dd27 jmp 0x1298dcb4 */
  goto L_1298dcb4;
L_1298dd29:;
  /* 1298dd29 mov esp, ebp */
  ESP = (EBP);
  /* 1298dd2b pop ebp */
  EBP = (pop32());
  /* 1298dd2c ret  */
  ESPCHK(0x1298dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x1298dd30 (304 bytes, 85 insns) */
void f_1298dd30(void) {
  FTRACE(0x1298dd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298dd30 push ebp */
  push32((uint32_t)(EBP));
  /* 1298dd31 mov ebp, esp */
  EBP = (ESP);
  /* 1298dd33 push ecx */
  push32((uint32_t)(ECX));
  /* 1298dd34 cmp dword ptr [0x129ae68c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae68c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dd3b je 0x1298ddfc */
  if (C.zf) goto L_1298ddfc;
  /* 1298dd41 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1298dd43 push 0x129a9fe0 */
  push32((uint32_t)(0x129a9fe0u));
  /* 1298dd48 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dd4a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1298dd4c push 1 */
  push32((uint32_t)(0x1u));
  /* 1298dd4e call 0x12982cc0 */
  push32(0x1298dd53u); f_12982cc0();
  /* 1298dd53 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298dd59 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298dd5d jne 0x1298dd69 */
  if (!C.zf) goto L_1298dd69;
  /* 1298dd5f mov eax, 1 */
  EAX = (0x1u);
  /* 1298dd64 jmp 0x1298de5c */
  goto L_1298de5c;
L_1298dd69:;
  /* 1298dd69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd6c push eax */
  push32((uint32_t)(EAX));
  /* 1298dd6d call 0x1298de60 */
  push32(0x1298dd72u); f_1298de60();
  /* 1298dd72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298dd77 je 0x1298dd9d */
  if (C.zf) goto L_1298dd9d;
  /* 1298dd79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd7c push ecx */
  push32((uint32_t)(ECX));
  /* 1298dd7d call 0x1298e0f0 */
  push32(0x1298dd82u); f_1298e0f0();
  /* 1298dd82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd85 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dd87 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dd8a push edx */
  push32((uint32_t)(EDX));
  /* 1298dd8b call 0x12983340 */
  push32(0x1298dd90u); f_12983340();
  /* 1298dd90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dd93 mov eax, 1 */
  EAX = (0x1u);
  /* 1298dd98 jmp 0x1298de5c */
  goto L_1298de5c;
L_1298dd9d:;
  /* 1298dd9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dda0 mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298dda6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298dda8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298ddaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ddad mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298ddb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1298ddb6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1298ddb9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ddbc mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298ddc2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1298ddc5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1298ddc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ddcb mov dword ptr [0x129add88], eax */
  w32((uint32_t)(0x129add88), (EAX));
  /* 1298ddd0 mov ecx, dword ptr [0x129ae6c4] */
  ECX = (r32((uint32_t)(0x129ae6c4)));
  /* 1298ddd6 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ddd7 call 0x1298e0f0 */
  push32(0x1298dddcu); f_1298e0f0();
  /* 1298dddc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dddf push 2 */
  push32((uint32_t)(0x2u));
  /* 1298dde1 mov edx, dword ptr [0x129ae6c4] */
  EDX = (r32((uint32_t)(0x129ae6c4)));
  /* 1298dde7 push edx */
  push32((uint32_t)(EDX));
  /* 1298dde8 call 0x12983340 */
  push32(0x1298ddedu); f_12983340();
  /* 1298dded add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ddf0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ddf3 mov dword ptr [0x129ae6c4], eax */
  w32((uint32_t)(0x129ae6c4), (EAX));
  /* 1298ddf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298ddfa jmp 0x1298de5c */
  goto L_1298de5c;
L_1298ddfc:;
  /* 1298ddfc mov ecx, dword ptr [0x129add88] */
  ECX = (r32((uint32_t)(0x129add88)));
  /* 1298de02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298de04 mov dword ptr [0x129add58], edx */
  w32((uint32_t)(0x129add58), (EDX));
  /* 1298de0a mov eax, dword ptr [0x129add88] */
  EAX = (r32((uint32_t)(0x129add88)));
  /* 1298de0f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1298de12 mov dword ptr [0x129add5c], ecx */
  w32((uint32_t)(0x129add5c), (ECX));
  /* 1298de18 mov edx, dword ptr [0x129add88] */
  EDX = (r32((uint32_t)(0x129add88)));
  /* 1298de1e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1298de21 mov dword ptr [0x129add60], eax */
  w32((uint32_t)(0x129add60), (EAX));
  /* 1298de26 mov dword ptr [0x129add88], 0x129add58 */
  w32((uint32_t)(0x129add88), (0x129add58u));
  /* 1298de30 mov ecx, dword ptr [0x129ae6c4] */
  ECX = (r32((uint32_t)(0x129ae6c4)));
  /* 1298de36 push ecx */
  push32((uint32_t)(ECX));
  /* 1298de37 call 0x1298e0f0 */
  push32(0x1298de3cu); f_1298e0f0();
  /* 1298de3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298de3f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298de41 mov edx, dword ptr [0x129ae6c4] */
  EDX = (r32((uint32_t)(0x129ae6c4)));
  /* 1298de47 push edx */
  push32((uint32_t)(EDX));
  /* 1298de48 call 0x12983340 */
  push32(0x1298de4du); f_12983340();
  /* 1298de4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298de50 mov dword ptr [0x129ae6c4], 0 */
  w32((uint32_t)(0x129ae6c4), (0x0u));
  /* 1298de5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298de5c:;
  /* 1298de5c mov esp, ebp */
  ESP = (EBP);
  /* 1298de5e pop ebp */
  EBP = (pop32());
  /* 1298de5f ret  */
  ESPCHK(0x1298dd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de60 @ 0x1298de60 (525 bytes, 200 insns) */
void f_1298de60(void) {
  FTRACE(0x1298de60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298de60 push ebp */
  push32((uint32_t)(EBP));
  /* 1298de61 mov ebp, esp */
  EBP = (ESP);
  /* 1298de63 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298de66 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298de6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298de6f mov ax, word ptr [0x129ae6e4] */
  AX = (r16((uint32_t)(0x129ae6e4)));
  /* 1298de75 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298de78 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298de7c jne 0x1298de86 */
  if (!C.zf) goto L_1298de86;
  /* 1298de7e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298de81 jmp 0x1298e069 */
  goto L_1298e069;
L_1298de86:;
  /* 1298de86 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298de89 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298de8c push ecx */
  push32((uint32_t)(ECX));
  /* 1298de8d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1298de8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298de92 push edx */
  push32((uint32_t)(EDX));
  /* 1298de93 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298de95 call 0x12990a70 */
  push32(0x1298de9au); f_12990a70();
  /* 1298de9a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298de9d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298dea0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dea2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dea5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dea8 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298deab push edx */
  push32((uint32_t)(EDX));
  /* 1298deac push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1298deae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298deb1 push eax */
  push32((uint32_t)(EAX));
  /* 1298deb2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298deb4 call 0x12990a70 */
  push32(0x1298deb9u); f_12990a70();
  /* 1298deb9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298debc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298debf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dec1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dec4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dec7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298deca push edx */
  push32((uint32_t)(EDX));
  /* 1298decb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1298decd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ded0 push eax */
  push32((uint32_t)(EAX));
  /* 1298ded1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ded3 call 0x12990a70 */
  push32(0x1298ded8u); f_12990a70();
  /* 1298ded8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dedb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298dede or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dee0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dee3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dee6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dee9 push edx */
  push32((uint32_t)(EDX));
  /* 1298deea push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1298deec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298deef push eax */
  push32((uint32_t)(EAX));
  /* 1298def0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298def2 call 0x12990a70 */
  push32(0x1298def7u); f_12990a70();
  /* 1298def7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298defa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298defd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298deff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298df02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df05 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df08 push edx */
  push32((uint32_t)(EDX));
  /* 1298df09 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1298df0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298df0e push eax */
  push32((uint32_t)(EAX));
  /* 1298df0f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298df11 call 0x12990a70 */
  push32(0x1298df16u); f_12990a70();
  /* 1298df16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298df1c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298df1e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298df21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df24 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1298df27 push eax */
  push32((uint32_t)(EAX));
  /* 1298df28 call 0x1298e070 */
  push32(0x1298df2du); f_1298e070();
  /* 1298df2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df33 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df36 push ecx */
  push32((uint32_t)(ECX));
  /* 1298df37 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1298df39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298df3c push edx */
  push32((uint32_t)(EDX));
  /* 1298df3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1298df3f call 0x12990a70 */
  push32(0x1298df44u); f_12990a70();
  /* 1298df44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298df4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298df4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298df4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df52 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df55 push edx */
  push32((uint32_t)(EDX));
  /* 1298df56 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1298df58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298df5b push eax */
  push32((uint32_t)(EAX));
  /* 1298df5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1298df5e call 0x12990a70 */
  push32(0x1298df63u); f_12990a70();
  /* 1298df63 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df66 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298df69 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298df6b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298df6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df71 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df74 push edx */
  push32((uint32_t)(EDX));
  /* 1298df75 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1298df77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298df7a push eax */
  push32((uint32_t)(EAX));
  /* 1298df7b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298df7d call 0x12990a70 */
  push32(0x1298df82u); f_12990a70();
  /* 1298df82 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298df88 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298df8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298df8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298df90 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298df93 push edx */
  push32((uint32_t)(EDX));
  /* 1298df94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1298df96 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298df99 push eax */
  push32((uint32_t)(EAX));
  /* 1298df9a push 0 */
  push32((uint32_t)(0x0u));
  /* 1298df9c call 0x12990a70 */
  push32(0x1298dfa1u); f_12990a70();
  /* 1298dfa1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dfa4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298dfa7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dfa9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dfac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dfaf add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dfb2 push edx */
  push32((uint32_t)(EDX));
  /* 1298dfb3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1298dfb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dfb8 push eax */
  push32((uint32_t)(EAX));
  /* 1298dfb9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298dfbb call 0x12990a70 */
  push32(0x1298dfc0u); f_12990a70();
  /* 1298dfc0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dfc3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298dfc6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dfc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dfcb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dfce add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dfd1 push edx */
  push32((uint32_t)(EDX));
  /* 1298dfd2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1298dfd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dfd7 push eax */
  push32((uint32_t)(EAX));
  /* 1298dfd8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298dfda call 0x12990a70 */
  push32(0x1298dfdfu); f_12990a70();
  /* 1298dfdf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dfe2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298dfe5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298dfe7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298dfea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298dfed add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298dff0 push edx */
  push32((uint32_t)(EDX));
  /* 1298dff1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1298dff3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298dff6 push eax */
  push32((uint32_t)(EAX));
  /* 1298dff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298dff9 call 0x12990a70 */
  push32(0x1298dffeu); f_12990a70();
  /* 1298dffe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e001 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298e004 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e006 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298e009 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e00c add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e00f push edx */
  push32((uint32_t)(EDX));
  /* 1298e010 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1298e012 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e015 push eax */
  push32((uint32_t)(EAX));
  /* 1298e016 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e018 call 0x12990a70 */
  push32(0x1298e01du); f_12990a70();
  /* 1298e01d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e020 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298e023 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e025 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298e028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e02b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e02e push edx */
  push32((uint32_t)(EDX));
  /* 1298e02f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1298e031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e034 push eax */
  push32((uint32_t)(EAX));
  /* 1298e035 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e037 call 0x12990a70 */
  push32(0x1298e03cu); f_12990a70();
  /* 1298e03c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e03f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298e042 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e044 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298e047 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e04a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e04d push edx */
  push32((uint32_t)(EDX));
  /* 1298e04e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1298e050 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e053 push eax */
  push32((uint32_t)(EAX));
  /* 1298e054 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e056 call 0x12990a70 */
  push32(0x1298e05bu); f_12990a70();
  /* 1298e05b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e05e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298e061 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e063 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298e066 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1298e069:;
  /* 1298e069 mov esp, ebp */
  ESP = (EBP);
  /* 1298e06b pop ebp */
  EBP = (pop32());
  /* 1298e06c ret  */
  ESPCHK(0x1298de60u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1298e070 (125 bytes, 49 insns) */
void f_1298e070(void) {
  FTRACE(0x1298e070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e070 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e071 mov ebp, esp */
  EBP = (ESP);
  /* 1298e073 push ecx */
  push32((uint32_t)(ECX));
L_1298e074:;
  /* 1298e074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e077 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298e07a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e07c je 0x1298e0e9 */
  if (C.zf) goto L_1298e0e9;
  /* 1298e07e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e081 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298e084 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e087 jl 0x1298e0ad */
  if ((C.sf!=C.of)) goto L_1298e0ad;
  /* 1298e089 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e08c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298e08f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e092 jg 0x1298e0ad */
  if ((!C.zf&&C.sf==C.of)) goto L_1298e0ad;
  /* 1298e094 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e097 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298e09a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e09d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e0a0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1298e0a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e0a5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e0a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298e0ab jmp 0x1298e0e7 */
  goto L_1298e0e7;
L_1298e0ad:;
  /* 1298e0ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e0b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298e0b3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e0b6 jne 0x1298e0de */
  if (!C.zf) goto L_1298e0de;
  /* 1298e0b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e0bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298e0be:;
  /* 1298e0be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e0c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e0c4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1298e0c7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1298e0c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e0cc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e0cf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298e0d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e0d5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298e0d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e0da jne 0x1298e0be */
  if (!C.zf) goto L_1298e0be;
  /* 1298e0dc jmp 0x1298e0e7 */
  goto L_1298e0e7;
L_1298e0de:;
  /* 1298e0de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e0e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e0e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1298e0e7:;
  /* 1298e0e7 jmp 0x1298e074 */
  goto L_1298e074;
L_1298e0e9:;
  /* 1298e0e9 mov esp, ebp */
  ESP = (EBP);
  /* 1298e0eb pop ebp */
  EBP = (pop32());
  /* 1298e0ec ret  */
  ESPCHK(0x1298e070u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0f0 @ 0x1298e0f0 (147 bytes, 52 insns) */
void f_1298e0f0(void) {
  FTRACE(0x1298e0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e0f1 mov ebp, esp */
  EBP = (ESP);
  /* 1298e0f3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e0f7 jne 0x1298e0fe */
  if (!C.zf) goto L_1298e0fe;
  /* 1298e0f9 jmp 0x1298e181 */
  goto L_1298e181;
L_1298e0fe:;
  /* 1298e0fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e101 cmp dword ptr [eax + 0xc], 0x129ae720 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x129ae720u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e108 je 0x1298e181 */
  if (C.zf) goto L_1298e181;
  /* 1298e10a push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e10c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e10f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1298e112 push edx */
  push32((uint32_t)(EDX));
  /* 1298e113 call 0x12983340 */
  push32(0x1298e118u); f_12983340();
  /* 1298e118 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e11b push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e11d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e120 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1298e123 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e124 call 0x12983340 */
  push32(0x1298e129u); f_12983340();
  /* 1298e129 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e12c push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e131 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1298e134 push eax */
  push32((uint32_t)(EAX));
  /* 1298e135 call 0x12983340 */
  push32(0x1298e13au); f_12983340();
  /* 1298e13a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e13d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e13f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e142 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1298e145 push edx */
  push32((uint32_t)(EDX));
  /* 1298e146 call 0x12983340 */
  push32(0x1298e14bu); f_12983340();
  /* 1298e14b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e14e push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e150 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e153 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1298e156 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e157 call 0x12983340 */
  push32(0x1298e15cu); f_12983340();
  /* 1298e15c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e15f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e161 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e164 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1298e167 push eax */
  push32((uint32_t)(EAX));
  /* 1298e168 call 0x12983340 */
  push32(0x1298e16du); f_12983340();
  /* 1298e16d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e170 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e172 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e175 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1298e178 push edx */
  push32((uint32_t)(EDX));
  /* 1298e179 call 0x12983340 */
  push32(0x1298e17eu); f_12983340();
  /* 1298e17e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e181:;
  /* 1298e181 pop ebp */
  EBP = (pop32());
  /* 1298e182 ret  */
  ESPCHK(0x1298e0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x1298e190 (928 bytes, 284 insns) */
void f_1298e190(void) {
  FTRACE(0x1298e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e190 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e191 mov ebp, esp */
  EBP = (ESP);
  /* 1298e193 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e196 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1298e19d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1298e1a4 cmp dword ptr [0x129ae688], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae688))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e1ab je 0x1298e4e1 */
  if (C.zf) goto L_1298e4e1;
  /* 1298e1b1 cmp dword ptr [0x129ae698], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae698))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e1b8 jne 0x1298e1e0 */
  if (!C.zf) goto L_1298e1e0;
  /* 1298e1ba push 0x129ae698 */
  push32((uint32_t)(0x129ae698u));
  /* 1298e1bf push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1298e1c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e1c6 mov ax, word ptr [0x129ae6dc] */
  AX = (r16((uint32_t)(0x129ae6dc)));
  /* 1298e1cc push eax */
  push32((uint32_t)(EAX));
  /* 1298e1cd push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e1cf call 0x12990a70 */
  push32(0x1298e1d4u); f_12990a70();
  /* 1298e1d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e1d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e1d9 je 0x1298e1e0 */
  if (C.zf) goto L_1298e1e0;
  /* 1298e1db jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e1e0:;
  /* 1298e1e0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1298e1e2 push 0x129a9fec */
  push32((uint32_t)(0x129a9fecu));
  /* 1298e1e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e1e9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1298e1ee call 0x129828b0 */
  push32(0x1298e1f3u); f_129828b0();
  /* 1298e1f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e1f6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1298e1f9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1298e1fb push 0x129a9fec */
  push32((uint32_t)(0x129a9fecu));
  /* 1298e200 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e202 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1298e207 call 0x129828b0 */
  push32(0x1298e20cu); f_129828b0();
  /* 1298e20c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e20f mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1298e212 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1298e214 push 0x129a9fec */
  push32((uint32_t)(0x129a9fecu));
  /* 1298e219 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e21b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1298e220 call 0x129828b0 */
  push32(0x1298e225u); f_129828b0();
  /* 1298e225 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e228 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1298e22b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1298e22d push 0x129a9fec */
  push32((uint32_t)(0x129a9fecu));
  /* 1298e232 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e234 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1298e239 call 0x129828b0 */
  push32(0x1298e23eu); f_129828b0();
  /* 1298e23e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e241 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1298e244 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e248 je 0x1298e25c */
  if (C.zf) goto L_1298e25c;
  /* 1298e24a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e24e je 0x1298e25c */
  if (C.zf) goto L_1298e25c;
  /* 1298e250 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e254 je 0x1298e25c */
  if (C.zf) goto L_1298e25c;
  /* 1298e256 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e25a jne 0x1298e261 */
  if (!C.zf) goto L_1298e261;
L_1298e25c:;
  /* 1298e25c jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e261:;
  /* 1298e261 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298e264 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1298e267 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1298e26e jmp 0x1298e279 */
  goto L_1298e279;
L_1298e270:;
  /* 1298e270 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298e273 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e276 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1298e279:;
  /* 1298e279 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e280 jge 0x1298e295 */
  if ((C.sf==C.of)) goto L_1298e295;
  /* 1298e282 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e285 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1298e288 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1298e28a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e28d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e290 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1298e293 jmp 0x1298e270 */
  goto L_1298e270;
L_1298e295:;
  /* 1298e295 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1298e298 push eax */
  push32((uint32_t)(EAX));
  /* 1298e299 mov ecx, dword ptr [0x129ae698] */
  ECX = (r32((uint32_t)(0x129ae698)));
  /* 1298e29f push ecx */
  push32((uint32_t)(ECX));
  /* 1298e2a0 call dword ptr [0x129b02c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02c0))), 0x1298e2a6u);
  /* 1298e2a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e2a8 jne 0x1298e2af */
  if (!C.zf) goto L_1298e2af;
  /* 1298e2aa jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e2af:;
  /* 1298e2af cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e2b3 jbe 0x1298e2ba */
  if ((C.cf||C.zf)) goto L_1298e2ba;
  /* 1298e2b5 jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e2ba:;
  /* 1298e2ba mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1298e2bd and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298e2c3 mov dword ptr [0x129acea4], edx */
  w32((uint32_t)(0x129acea4), (EDX));
  /* 1298e2c9 cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e2d0 jle 0x1298e329 */
  if ((C.zf||C.sf!=C.of)) goto L_1298e329;
  /* 1298e2d2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1298e2d5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1298e2d8 jmp 0x1298e2e3 */
  goto L_1298e2e3;
L_1298e2da:;
  /* 1298e2da mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e2dd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e2e0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1298e2e3:;
  /* 1298e2e3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e2e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e2e8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298e2ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e2ec je 0x1298e329 */
  if (C.zf) goto L_1298e329;
  /* 1298e2ee mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e2f1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298e2f3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1298e2f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298e2f8 je 0x1298e329 */
  if (C.zf) goto L_1298e329;
  /* 1298e2fa mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e2fd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e2ff mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1298e301 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1298e304 jmp 0x1298e30f */
  goto L_1298e30f;
L_1298e306:;
  /* 1298e306 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298e309 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e30c mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1298e30f:;
  /* 1298e30f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e312 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e314 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1298e317 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e31a jg 0x1298e327 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298e327;
  /* 1298e31c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298e31f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e322 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1298e325 jmp 0x1298e306 */
  goto L_1298e306;
L_1298e327:;
  /* 1298e327 jmp 0x1298e2da */
  goto L_1298e2da;
L_1298e329:;
  /* 1298e329 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e32b push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e32d push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e32f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e332 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e335 push eax */
  push32((uint32_t)(EAX));
  /* 1298e336 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1298e33b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298e33e push ecx */
  push32((uint32_t)(ECX));
  /* 1298e33f push 1 */
  push32((uint32_t)(0x1u));
  /* 1298e341 call 0x1298aae0 */
  push32(0x1298e346u); f_1298aae0();
  /* 1298e346 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e349 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e34b jne 0x1298e352 */
  if (!C.zf) goto L_1298e352;
  /* 1298e34d jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e352:;
  /* 1298e352 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e355 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1298e35a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298e35d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1298e360 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1298e367 jmp 0x1298e372 */
  goto L_1298e372;
L_1298e369:;
  /* 1298e369 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298e36c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e36f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1298e372:;
  /* 1298e372 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e379 jge 0x1298e390 */
  if ((C.sf==C.of)) goto L_1298e390;
  /* 1298e37b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298e37e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1298e382 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1298e385 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1298e388 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e38b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1298e38e jmp 0x1298e369 */
  goto L_1298e369;
L_1298e390:;
  /* 1298e390 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e392 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298e394 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298e397 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e39a push edx */
  push32((uint32_t)(EDX));
  /* 1298e39b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1298e3a0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298e3a3 push eax */
  push32((uint32_t)(EAX));
  /* 1298e3a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298e3a6 call 0x12990d10 */
  push32(0x1298e3abu); f_12990d10();
  /* 1298e3ab add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e3ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e3b0 jne 0x1298e3b7 */
  if (!C.zf) goto L_1298e3b7;
  /* 1298e3b2 jmp 0x1298e4a2 */
  goto L_1298e4a2;
L_1298e3b7:;
  /* 1298e3b7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298e3ba mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1298e3bf cmp dword ptr [0x129acea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x129acea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e3c6 jle 0x1298e423 */
  if ((C.zf||C.sf!=C.of)) goto L_1298e423;
  /* 1298e3c8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1298e3cb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1298e3ce jmp 0x1298e3d9 */
  goto L_1298e3d9;
L_1298e3d0:;
  /* 1298e3d0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e3d3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e3d6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1298e3d9:;
  /* 1298e3d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e3dc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1298e3de mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1298e3e0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298e3e2 je 0x1298e423 */
  if (C.zf) goto L_1298e423;
  /* 1298e3e4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e3e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e3e9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1298e3ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e3ee je 0x1298e423 */
  if (C.zf) goto L_1298e423;
  /* 1298e3f0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e3f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e3f5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298e3f7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1298e3fa jmp 0x1298e405 */
  goto L_1298e405;
L_1298e3fc:;
  /* 1298e3fc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298e3ff add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e402 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1298e405:;
  /* 1298e405 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1298e408 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e40a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1298e40d cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e410 jg 0x1298e421 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298e421;
  /* 1298e412 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1298e415 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e418 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1298e41f jmp 0x1298e3fc */
  goto L_1298e3fc;
L_1298e421:;
  /* 1298e421 jmp 0x1298e3d0 */
  goto L_1298e3d0;
L_1298e423:;
  /* 1298e423 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e426 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e429 mov dword ptr [0x129acc98], eax */
  w32((uint32_t)(0x129acc98), (EAX));
  /* 1298e42e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298e431 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e434 mov dword ptr [0x129acc9c], ecx */
  w32((uint32_t)(0x129acc9c), (ECX));
  /* 1298e43a cmp dword ptr [0x129ae6c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e441 je 0x1298e454 */
  if (C.zf) goto L_1298e454;
  /* 1298e443 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e445 mov edx, dword ptr [0x129ae6c8] */
  EDX = (r32((uint32_t)(0x129ae6c8)));
  /* 1298e44b push edx */
  push32((uint32_t)(EDX));
  /* 1298e44c call 0x12983340 */
  push32(0x1298e451u); f_12983340();
  /* 1298e451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e454:;
  /* 1298e454 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e457 mov dword ptr [0x129ae6c8], eax */
  w32((uint32_t)(0x129ae6c8), (EAX));
  /* 1298e45c cmp dword ptr [0x129ae6cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e463 je 0x1298e476 */
  if (C.zf) goto L_1298e476;
  /* 1298e465 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e467 mov ecx, dword ptr [0x129ae6cc] */
  ECX = (r32((uint32_t)(0x129ae6cc)));
  /* 1298e46d push ecx */
  push32((uint32_t)(ECX));
  /* 1298e46e call 0x12983340 */
  push32(0x1298e473u); f_12983340();
  /* 1298e473 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e476:;
  /* 1298e476 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298e479 mov dword ptr [0x129ae6cc], edx */
  w32((uint32_t)(0x129ae6cc), (EDX));
  /* 1298e47f push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e481 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298e484 push eax */
  push32((uint32_t)(EAX));
  /* 1298e485 call 0x12983340 */
  push32(0x1298e48au); f_12983340();
  /* 1298e48a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e48d push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e48f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298e492 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e493 call 0x12983340 */
  push32(0x1298e498u); f_12983340();
  /* 1298e498 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e49b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e49d jmp 0x1298e52c */
  goto L_1298e52c;
L_1298e4a2:;
  /* 1298e4a2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e4a4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1298e4a7 push edx */
  push32((uint32_t)(EDX));
  /* 1298e4a8 call 0x12983340 */
  push32(0x1298e4adu); f_12983340();
  /* 1298e4ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e4b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e4b2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1298e4b5 push eax */
  push32((uint32_t)(EAX));
  /* 1298e4b6 call 0x12983340 */
  push32(0x1298e4bbu); f_12983340();
  /* 1298e4bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e4be push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e4c0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1298e4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e4c4 call 0x12983340 */
  push32(0x1298e4c9u); f_12983340();
  /* 1298e4c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e4cc push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e4ce mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1298e4d1 push edx */
  push32((uint32_t)(EDX));
  /* 1298e4d2 call 0x12983340 */
  push32(0x1298e4d7u); f_12983340();
  /* 1298e4d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e4da mov eax, 1 */
  EAX = (0x1u);
  /* 1298e4df jmp 0x1298e52c */
  goto L_1298e52c;
L_1298e4e1:;
  /* 1298e4e1 mov dword ptr [0x129acc98], 0x129acca2 */
  w32((uint32_t)(0x129acc98), (0x129acca2u));
  /* 1298e4eb mov dword ptr [0x129acc9c], 0x129acca2 */
  w32((uint32_t)(0x129acc9c), (0x129acca2u));
  /* 1298e4f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e4f7 mov eax, dword ptr [0x129ae6c8] */
  EAX = (r32((uint32_t)(0x129ae6c8)));
  /* 1298e4fc push eax */
  push32((uint32_t)(EAX));
  /* 1298e4fd call 0x12983340 */
  push32(0x1298e502u); f_12983340();
  /* 1298e502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e505 push 2 */
  push32((uint32_t)(0x2u));
  /* 1298e507 mov ecx, dword ptr [0x129ae6cc] */
  ECX = (r32((uint32_t)(0x129ae6cc)));
  /* 1298e50d push ecx */
  push32((uint32_t)(ECX));
  /* 1298e50e call 0x12983340 */
  push32(0x1298e513u); f_12983340();
  /* 1298e513 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e516 mov dword ptr [0x129ae6c8], 0 */
  w32((uint32_t)(0x129ae6c8), (0x0u));
  /* 1298e520 mov dword ptr [0x129ae6cc], 0 */
  w32((uint32_t)(0x129ae6cc), (0x0u));
  /* 1298e52a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1298e52c:;
  /* 1298e52c mov esp, ebp */
  ESP = (EBP);
  /* 1298e52e pop ebp */
  EBP = (pop32());
  /* 1298e52f ret  */
  ESPCHK(0x1298e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e530 @ 0x1298e530 (7 bytes, 5 insns) */
void f_1298e530(void) {
  FTRACE(0x1298e530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e530 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e531 mov ebp, esp */
  EBP = (ESP);
  /* 1298e533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e535 pop ebp */
  EBP = (pop32());
  /* 1298e536 ret  */
  ESPCHK(0x1298e530u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1298e540 (129 bytes, 56 insns) */
void f_1298e540(void) {
  FTRACE(0x1298e540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e540 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1298e544 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1298e548 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1298e54e jne 0x1298e58c */
  if (!C.zf) goto L_1298e58c;
L_1298e550:;
  /* 1298e550 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1298e552 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e554 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e556 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e558 je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e55a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e55d jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e55f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1298e561 je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e563 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1298e566 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e569 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e56b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e56d je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e56f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e572 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e574 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e577 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e57a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1298e57c jne 0x1298e550 */
  if (!C.zf) goto L_1298e550;
  /* 1298e57e mov edi, edi */
  EDI = (EDI);
L_1298e580:;
  /* 1298e580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e582 ret  */
  ESPCHK(0x1298e540u, _esp0);
  ESP += 4; return;
  /* 1298e583 nop  */
  /* nop */
L_1298e584:;
  /* 1298e584 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e586 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298e588 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1298e589 ret  */
  ESPCHK(0x1298e540u, _esp0);
  ESP += 4; return;
  /* 1298e58a mov edi, edi */
  EDI = (EDI);
L_1298e58c:;
  /* 1298e58c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1298e592 je 0x1298e5a8 */
  if (C.zf) goto L_1298e5a8;
  /* 1298e594 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298e596 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1298e597 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e599 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e59b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1298e59c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e59e je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e5a0 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1298e5a6 je 0x1298e550 */
  if (C.zf) goto L_1298e550;
L_1298e5a8:;
  /* 1298e5a8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1298e5ab add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e5ae cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e5b0 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e5b2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e5b4 je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e5b6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e5b9 jne 0x1298e584 */
  if (!C.zf) goto L_1298e584;
  /* 1298e5bb or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1298e5bd je 0x1298e580 */
  if (C.zf) goto L_1298e580;
  /* 1298e5bf add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e5c2 jmp 0x1298e550 */
  goto L_1298e550;
}

/* FUN_1000e5d0 @ 0x1298e5d0 (62 bytes, 35 insns) */
void f_1298e5d0(void) {
  FTRACE(0x1298e5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e5d1 mov ebp, esp */
  EBP = (ESP);
  /* 1298e5d3 push esi */
  push32((uint32_t)(ESI));
  /* 1298e5d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e5d6 push eax */
  push32((uint32_t)(EAX));
  /* 1298e5d7 push eax */
  push32((uint32_t)(EAX));
  /* 1298e5d8 push eax */
  push32((uint32_t)(EAX));
  /* 1298e5d9 push eax */
  push32((uint32_t)(EAX));
  /* 1298e5da push eax */
  push32((uint32_t)(EAX));
  /* 1298e5db push eax */
  push32((uint32_t)(EAX));
  /* 1298e5dc push eax */
  push32((uint32_t)(EAX));
  /* 1298e5dd push eax */
  push32((uint32_t)(EAX));
  /* 1298e5de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e5e1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298e5e4:;
  /* 1298e5e4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298e5e6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e5e8 je 0x1298e5f1 */
  if (C.zf) goto L_1298e5f1;
  /* 1298e5ea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1298e5eb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1298e5eb");
  /* 1298e5ef jmp 0x1298e5e4 */
  goto L_1298e5e4;
L_1298e5f1:;
  /* 1298e5f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e5f4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1298e5f7 nop  */
  /* nop */
L_1298e5f8:;
  /* 1298e5f8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1298e5f9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298e5fb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e5fd je 0x1298e606 */
  if (C.zf) goto L_1298e606;
  /* 1298e5ff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1298e600 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1298e600");
  /* 1298e604 jae 0x1298e5f8 */
  if (!C.cf) goto L_1298e5f8;
L_1298e606:;
  /* 1298e606 mov eax, ecx */
  EAX = (ECX);
  /* 1298e608 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e60b pop esi */
  ESI = (pop32());
  /* 1298e60c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298e60d ret  */
  ESPCHK(0x1298e5d0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1298e610 (56 bytes, 31 insns) */
void f_1298e610(void) {
  FTRACE(0x1298e610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e610 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e611 mov ebp, esp */
  EBP = (ESP);
  /* 1298e613 push edi */
  push32((uint32_t)(EDI));
  /* 1298e614 push esi */
  push32((uint32_t)(ESI));
  /* 1298e615 push ebx */
  push32((uint32_t)(EBX));
  /* 1298e616 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e619 jecxz 0x1298e641 */
  x86_unimpl("jecxz @ 0x1298e619");
  /* 1298e61b mov ebx, ecx */
  EBX = (ECX);
  /* 1298e61d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e620 mov esi, edi */
  ESI = (EDI);
  /* 1298e622 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e624 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1298e626 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298e628 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e62a mov edi, esi */
  EDI = (ESI);
  /* 1298e62c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e62f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1298e631 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1298e634 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e636 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1298e639 ja 0x1298e63f */
  if ((!C.cf&&!C.zf)) goto L_1298e63f;
  /* 1298e63b je 0x1298e641 */
  if (C.zf) goto L_1298e641;
  /* 1298e63d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1298e63e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1298e63f:;
  /* 1298e63f not ecx */
  ECX = (~(ECX));
L_1298e641:;
  /* 1298e641 mov eax, ecx */
  EAX = (ECX);
  /* 1298e643 pop ebx */
  EBX = (pop32());
  /* 1298e644 pop esi */
  ESI = (pop32());
  /* 1298e645 pop edi */
  EDI = (pop32());
  /* 1298e646 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298e647 ret  */
  ESPCHK(0x1298e610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e650 @ 0x1298e650 (58 bytes, 32 insns) */
void f_1298e650(void) {
  FTRACE(0x1298e650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e650 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e651 mov ebp, esp */
  EBP = (ESP);
  /* 1298e653 push esi */
  push32((uint32_t)(ESI));
  /* 1298e654 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e656 push eax */
  push32((uint32_t)(EAX));
  /* 1298e657 push eax */
  push32((uint32_t)(EAX));
  /* 1298e658 push eax */
  push32((uint32_t)(EAX));
  /* 1298e659 push eax */
  push32((uint32_t)(EAX));
  /* 1298e65a push eax */
  push32((uint32_t)(EAX));
  /* 1298e65b push eax */
  push32((uint32_t)(EAX));
  /* 1298e65c push eax */
  push32((uint32_t)(EAX));
  /* 1298e65d push eax */
  push32((uint32_t)(EAX));
  /* 1298e65e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e661 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1298e664:;
  /* 1298e664 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298e666 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e668 je 0x1298e671 */
  if (C.zf) goto L_1298e671;
  /* 1298e66a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1298e66b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1298e66b");
  /* 1298e66f jmp 0x1298e664 */
  goto L_1298e664;
L_1298e671:;
  /* 1298e671 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1298e674:;
  /* 1298e674 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1298e676 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1298e678 je 0x1298e684 */
  if (C.zf) goto L_1298e684;
  /* 1298e67a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1298e67b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1298e67b");
  /* 1298e67f jae 0x1298e674 */
  if (!C.cf) goto L_1298e674;
  /* 1298e681 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1298e684:;
  /* 1298e684 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e687 pop esi */
  ESI = (pop32());
  /* 1298e688 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1298e689 ret  */
  ESPCHK(0x1298e650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e690 @ 0x1298e690 (512 bytes, 147 insns) */
void f_1298e690(void) {
  FTRACE(0x1298e690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e690 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e691 mov ebp, esp */
  EBP = (ESP);
  /* 1298e693 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e696 cmp dword ptr [0x129ae714], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae714))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e69d jne 0x1298e6c2 */
  if (!C.zf) goto L_1298e6c2;
  /* 1298e69f call 0x1298f160 */
  push32(0x1298e6a4u); f_1298f160();
  /* 1298e6a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e6a6 je 0x1298e6b2 */
  if (C.zf) goto L_1298e6b2;
  /* 1298e6a8 mov eax, dword ptr [0x129b0338] */
  EAX = (r32((uint32_t)(0x129b0338)));
  /* 1298e6ad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298e6b0 jmp 0x1298e6b9 */
  goto L_1298e6b9;
L_1298e6b2:;
  /* 1298e6b2 mov dword ptr [ebp - 8], 0x1298f1b0 */
  w32((uint32_t)(EBP + -0x8), (0x1298f1b0u));
L_1298e6b9:;
  /* 1298e6b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298e6bc mov dword ptr [0x129ae714], ecx */
  w32((uint32_t)(0x129ae714), (ECX));
L_1298e6c2:;
  /* 1298e6c2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e6c6 jne 0x1298e6d2 */
  if (!C.zf) goto L_1298e6d2;
  /* 1298e6c8 call 0x1298efb0 */
  push32(0x1298e6cdu); f_1298efb0();
  /* 1298e6cd jmp 0x1298e79e */
  goto L_1298e79e;
L_1298e6d2:;
  /* 1298e6d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e6d5 mov dword ptr [0x129ae704], edx */
  w32((uint32_t)(0x129ae704), (EDX));
  /* 1298e6db cmp dword ptr [0x129ae704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e6e2 je 0x1298e704 */
  if (C.zf) goto L_1298e704;
  /* 1298e6e4 mov eax, dword ptr [0x129ae704] */
  EAX = (r32((uint32_t)(0x129ae704)));
  /* 1298e6e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298e6ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e6ee je 0x1298e704 */
  if (C.zf) goto L_1298e704;
  /* 1298e6f0 push 0x129ae704 */
  push32((uint32_t)(0x129ae704u));
  /* 1298e6f5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1298e6f7 push 0x129ada90 */
  push32((uint32_t)(0x129ada90u));
  /* 1298e6fc call 0x1298e890 */
  push32(0x1298e701u); f_1298e890();
  /* 1298e701 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e704:;
  /* 1298e704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e707 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e70a mov dword ptr [0x129ae708], edx */
  w32((uint32_t)(0x129ae708), (EDX));
  /* 1298e710 cmp dword ptr [0x129ae708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e717 je 0x1298e739 */
  if (C.zf) goto L_1298e739;
  /* 1298e719 mov eax, dword ptr [0x129ae708] */
  EAX = (r32((uint32_t)(0x129ae708)));
  /* 1298e71e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298e721 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e723 je 0x1298e739 */
  if (C.zf) goto L_1298e739;
  /* 1298e725 push 0x129ae708 */
  push32((uint32_t)(0x129ae708u));
  /* 1298e72a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1298e72c push 0x129ad9d8 */
  push32((uint32_t)(0x129ad9d8u));
  /* 1298e731 call 0x1298e890 */
  push32(0x1298e736u); f_1298e890();
  /* 1298e736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e739:;
  /* 1298e739 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298e743 cmp dword ptr [0x129ae704], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae704))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e74a je 0x1298e77d */
  if (C.zf) goto L_1298e77d;
  /* 1298e74c mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298e752 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1298e755 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e757 je 0x1298e77d */
  if (C.zf) goto L_1298e77d;
  /* 1298e759 cmp dword ptr [0x129ae708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e760 je 0x1298e776 */
  if (C.zf) goto L_1298e776;
  /* 1298e762 mov ecx, dword ptr [0x129ae708] */
  ECX = (r32((uint32_t)(0x129ae708)));
  /* 1298e768 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1298e76b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298e76d je 0x1298e776 */
  if (C.zf) goto L_1298e776;
  /* 1298e76f call 0x1298e920 */
  push32(0x1298e774u); f_1298e920();
  /* 1298e774 jmp 0x1298e77b */
  goto L_1298e77b;
L_1298e776:;
  /* 1298e776 call 0x1298ed10 */
  push32(0x1298e77bu); f_1298ed10();
L_1298e77b:;
  /* 1298e77b jmp 0x1298e79e */
  goto L_1298e79e;
L_1298e77d:;
  /* 1298e77d cmp dword ptr [0x129ae708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e784 je 0x1298e799 */
  if (C.zf) goto L_1298e799;
  /* 1298e786 mov eax, dword ptr [0x129ae708] */
  EAX = (r32((uint32_t)(0x129ae708)));
  /* 1298e78b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298e78e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e790 je 0x1298e799 */
  if (C.zf) goto L_1298e799;
  /* 1298e792 call 0x1298eeb0 */
  push32(0x1298e797u); f_1298eeb0();
  /* 1298e797 jmp 0x1298e79e */
  goto L_1298e79e;
L_1298e799:;
  /* 1298e799 call 0x1298efb0 */
  push32(0x1298e79eu); f_1298efb0();
L_1298e79e:;
  /* 1298e79e cmp dword ptr [0x129ae70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e7a5 jne 0x1298e7ae */
  if (!C.zf) goto L_1298e7ae;
  /* 1298e7a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e7a9 jmp 0x1298e88c */
  goto L_1298e88c;
L_1298e7ae:;
  /* 1298e7ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e7b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e7b7 push edx */
  push32((uint32_t)(EDX));
  /* 1298e7b8 call 0x1298efe0 */
  push32(0x1298e7bdu); f_1298efe0();
  /* 1298e7bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e7c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298e7c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e7c7 je 0x1298e7dc */
  if (C.zf) goto L_1298e7dc;
  /* 1298e7c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e7cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298e7d1 push eax */
  push32((uint32_t)(EAX));
  /* 1298e7d2 call dword ptr [0x129b0334] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0334))), 0x1298e7d8u);
  /* 1298e7d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e7da jne 0x1298e7e3 */
  if (!C.zf) goto L_1298e7e3;
L_1298e7dc:;
  /* 1298e7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e7de jmp 0x1298e88c */
  goto L_1298e88c;
L_1298e7e3:;
  /* 1298e7e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298e7e5 mov ecx, dword ptr [0x129ae6f4] */
  ECX = (r32((uint32_t)(0x129ae6f4)));
  /* 1298e7eb push ecx */
  push32((uint32_t)(ECX));
  /* 1298e7ec call dword ptr [0x129b0330] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0330))), 0x1298e7f2u);
  /* 1298e7f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e7f4 jne 0x1298e7fd */
  if (!C.zf) goto L_1298e7fd;
  /* 1298e7f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e7f8 jmp 0x1298e88c */
  goto L_1298e88c;
L_1298e7fd:;
  /* 1298e7fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e801 je 0x1298e828 */
  if (C.zf) goto L_1298e828;
  /* 1298e803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e806 mov ax, word ptr [0x129ae6f4] */
  AX = (r16((uint32_t)(0x129ae6f4)));
  /* 1298e80c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1298e80f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e812 mov dx, word ptr [0x129ae710] */
  DX = (r16((uint32_t)(0x129ae710)));
  /* 1298e819 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1298e81d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298e820 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1298e824 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1298e828:;
  /* 1298e828 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e82c je 0x1298e887 */
  if (C.zf) goto L_1298e887;
  /* 1298e82e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1298e830 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e833 push edx */
  push32((uint32_t)(EDX));
  /* 1298e834 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1298e839 mov eax, dword ptr [0x129ae6f4] */
  EAX = (r32((uint32_t)(0x129ae6f4)));
  /* 1298e83e push eax */
  push32((uint32_t)(EAX));
  /* 1298e83f call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298e845u);
  /* 1298e845 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e847 jne 0x1298e84d */
  if (!C.zf) goto L_1298e84d;
  /* 1298e849 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e84b jmp 0x1298e88c */
  goto L_1298e88c;
L_1298e84d:;
  /* 1298e84d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1298e84f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e852 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e855 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e856 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1298e85b mov edx, dword ptr [0x129ae710] */
  EDX = (r32((uint32_t)(0x129ae710)));
  /* 1298e861 push edx */
  push32((uint32_t)(EDX));
  /* 1298e862 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298e868u);
  /* 1298e868 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e86a jne 0x1298e870 */
  if (!C.zf) goto L_1298e870;
  /* 1298e86c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298e86e jmp 0x1298e88c */
  goto L_1298e88c;
L_1298e870:;
  /* 1298e870 push 0xa */
  push32((uint32_t)(0xau));
  /* 1298e872 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e875 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e87a push eax */
  push32((uint32_t)(EAX));
  /* 1298e87b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e87e push ecx */
  push32((uint32_t)(ECX));
  /* 1298e87f call 0x129853f0 */
  push32(0x1298e884u); f_129853f0();
  /* 1298e884 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298e887:;
  /* 1298e887 mov eax, 1 */
  EAX = (0x1u);
L_1298e88c:;
  /* 1298e88c mov esp, ebp */
  ESP = (EBP);
  /* 1298e88e pop ebp */
  EBP = (pop32());
  /* 1298e88f ret  */
  ESPCHK(0x1298e690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e890 @ 0x1298e890 (130 bytes, 47 insns) */
void f_1298e890(void) {
  FTRACE(0x1298e890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e890 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e891 mov ebp, esp */
  EBP = (ESP);
  /* 1298e893 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e896 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1298e89d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1298e8a4:;
  /* 1298e8a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298e8a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e8aa jg 0x1298e90e */
  if ((!C.zf&&C.sf==C.of)) goto L_1298e90e;
  /* 1298e8ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e8b0 je 0x1298e90e */
  if (C.zf) goto L_1298e90e;
  /* 1298e8b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298e8b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e8b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298e8b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e8bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298e8bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298e8c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e8c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e8c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1298e8c9 push eax */
  push32((uint32_t)(EAX));
  /* 1298e8ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e8cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1298e8cf push edx */
  push32((uint32_t)(EDX));
  /* 1298e8d0 call 0x12990f80 */
  push32(0x1298e8d5u); f_12990f80();
  /* 1298e8d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e8d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298e8db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e8df jne 0x1298e8f2 */
  if (!C.zf) goto L_1298e8f2;
  /* 1298e8e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e8e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e8e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1298e8eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298e8ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1298e8f0 jmp 0x1298e90c */
  goto L_1298e90c;
L_1298e8f2:;
  /* 1298e8f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e8f6 jge 0x1298e903 */
  if ((C.sf==C.of)) goto L_1298e903;
  /* 1298e8f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e8fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e8fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1298e901 jmp 0x1298e90c */
  goto L_1298e90c;
L_1298e903:;
  /* 1298e903 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e906 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e909 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1298e90c:;
  /* 1298e90c jmp 0x1298e8a4 */
  goto L_1298e8a4;
L_1298e90e:;
  /* 1298e90e mov esp, ebp */
  ESP = (EBP);
  /* 1298e910 pop ebp */
  EBP = (pop32());
  /* 1298e911 ret  */
  ESPCHK(0x1298e890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e920 @ 0x1298e920 (186 bytes, 50 insns) */
void f_1298e920(void) {
  FTRACE(0x1298e920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e920 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e921 mov ebp, esp */
  EBP = (ESP);
  /* 1298e923 push ecx */
  push32((uint32_t)(ECX));
  /* 1298e924 mov eax, dword ptr [0x129ae704] */
  EAX = (r32((uint32_t)(0x129ae704)));
  /* 1298e929 push eax */
  push32((uint32_t)(EAX));
  /* 1298e92a call 0x129856e0 */
  push32(0x1298e92fu); f_129856e0();
  /* 1298e92f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e932 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e934 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e937 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1298e93a mov dword ptr [0x129ae700], ecx */
  w32((uint32_t)(0x129ae700), (ECX));
  /* 1298e940 mov edx, dword ptr [0x129ae708] */
  EDX = (r32((uint32_t)(0x129ae708)));
  /* 1298e946 push edx */
  push32((uint32_t)(EDX));
  /* 1298e947 call 0x129856e0 */
  push32(0x1298e94cu); f_129856e0();
  /* 1298e94c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e94f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298e951 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e954 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1298e957 mov dword ptr [0x129ae6f8], ecx */
  w32((uint32_t)(0x129ae6f8), (ECX));
  /* 1298e95d mov dword ptr [0x129ae6f4], 0 */
  w32((uint32_t)(0x129ae6f4), (0x0u));
  /* 1298e967 cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298e96e je 0x1298e979 */
  if (C.zf) goto L_1298e979;
  /* 1298e970 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1298e977 jmp 0x1298e98b */
  goto L_1298e98b;
L_1298e979:;
  /* 1298e979 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298e97f push edx */
  push32((uint32_t)(EDX));
  /* 1298e980 call 0x1298f3c0 */
  push32(0x1298e985u); f_1298f3c0();
  /* 1298e985 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e988 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298e98b:;
  /* 1298e98b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298e98e mov dword ptr [0x129ae6fc], eax */
  w32((uint32_t)(0x129ae6fc), (EAX));
  /* 1298e993 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298e995 push 0x1298e9e0 */
  push32((uint32_t)(0x1298e9e0u));
  /* 1298e99a call dword ptr [0x129b02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02bc))), 0x1298e9a0u);
  /* 1298e9a0 mov ecx, dword ptr [0x129ae70c] */
  ECX = (r32((uint32_t)(0x129ae70c)));
  /* 1298e9a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1298e9ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298e9ae je 0x1298e9cc */
  if (C.zf) goto L_1298e9cc;
  /* 1298e9b0 mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298e9b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1298e9bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298e9be je 0x1298e9cc */
  if (C.zf) goto L_1298e9cc;
  /* 1298e9c0 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298e9c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1298e9c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298e9ca jne 0x1298e9d6 */
  if (!C.zf) goto L_1298e9d6;
L_1298e9cc:;
  /* 1298e9cc mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
L_1298e9d6:;
  /* 1298e9d6 mov esp, ebp */
  ESP = (EBP);
  /* 1298e9d8 pop ebp */
  EBP = (pop32());
  /* 1298e9d9 ret  */
  ESPCHK(0x1298e920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9e0 @ 0x1298e9e0 (804 bytes, 220 insns) */
void f_1298e9e0(void) {
  FTRACE(0x1298e9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298e9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298e9e1 mov ebp, esp */
  EBP = (ESP);
  /* 1298e9e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298e9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298e9e9 push eax */
  push32((uint32_t)(EAX));
  /* 1298e9ea call 0x1298f340 */
  push32(0x1298e9efu); f_1298f340();
  /* 1298e9ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298e9f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1298e9f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298e9f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298e9fa push ecx */
  push32((uint32_t)(ECX));
  /* 1298e9fb mov edx, dword ptr [0x129ae6f8] */
  EDX = (r32((uint32_t)(0x129ae6f8)));
  /* 1298ea01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298ea03 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ea05 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ea0b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ea11 push edx */
  push32((uint32_t)(EDX));
  /* 1298ea12 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ea15 push eax */
  push32((uint32_t)(EAX));
  /* 1298ea16 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298ea1cu);
  /* 1298ea1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ea1e jne 0x1298ea34 */
  if (!C.zf) goto L_1298ea34;
  /* 1298ea20 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298ea2a mov eax, 1 */
  EAX = (0x1u);
  /* 1298ea2f jmp 0x1298ecfe */
  goto L_1298ecfe;
L_1298ea34:;
  /* 1298ea34 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298ea37 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ea38 mov edx, dword ptr [0x129ae708] */
  EDX = (r32((uint32_t)(0x129ae708)));
  /* 1298ea3e push edx */
  push32((uint32_t)(EDX));
  /* 1298ea3f call 0x12990f80 */
  push32(0x1298ea44u); f_12990f80();
  /* 1298ea44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ea47 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ea49 jne 0x1298eb6f */
  if (!C.zf) goto L_1298eb6f;
  /* 1298ea4f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298ea51 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1298ea54 push eax */
  push32((uint32_t)(EAX));
  /* 1298ea55 mov ecx, dword ptr [0x129ae700] */
  ECX = (r32((uint32_t)(0x129ae700)));
  /* 1298ea5b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298ea5d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ea5f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1298ea65 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ea6b push ecx */
  push32((uint32_t)(ECX));
  /* 1298ea6c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ea6f push edx */
  push32((uint32_t)(EDX));
  /* 1298ea70 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298ea76u);
  /* 1298ea76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ea78 jne 0x1298ea8e */
  if (!C.zf) goto L_1298ea8e;
  /* 1298ea7a mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298ea84 mov eax, 1 */
  EAX = (0x1u);
  /* 1298ea89 jmp 0x1298ecfe */
  goto L_1298ecfe;
L_1298ea8e:;
  /* 1298ea8e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1298ea91 push eax */
  push32((uint32_t)(EAX));
  /* 1298ea92 mov ecx, dword ptr [0x129ae704] */
  ECX = (r32((uint32_t)(0x129ae704)));
  /* 1298ea98 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ea99 call 0x12990f80 */
  push32(0x1298ea9eu); f_12990f80();
  /* 1298ea9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eaa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298eaa3 jne 0x1298ead0 */
  if (!C.zf) goto L_1298ead0;
  /* 1298eaa5 mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eaab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1298eab1 mov dword ptr [0x129ae70c], edx */
  w32((uint32_t)(0x129ae70c), (EDX));
  /* 1298eab7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eaba mov dword ptr [0x129ae710], eax */
  w32((uint32_t)(0x129ae710), (EAX));
  /* 1298eabf mov ecx, dword ptr [0x129ae710] */
  ECX = (r32((uint32_t)(0x129ae710)));
  /* 1298eac5 mov dword ptr [0x129ae6f4], ecx */
  w32((uint32_t)(0x129ae6f4), (ECX));
  /* 1298eacb jmp 0x1298eb6f */
  goto L_1298eb6f;
L_1298ead0:;
  /* 1298ead0 mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ead6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ead9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298eadb jne 0x1298eb6f */
  if (!C.zf) goto L_1298eb6f;
  /* 1298eae1 cmp dword ptr [0x129ae6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298eae8 je 0x1298eb3d */
  if (C.zf) goto L_1298eb3d;
  /* 1298eaea mov eax, dword ptr [0x129ae6fc] */
  EAX = (r32((uint32_t)(0x129ae6fc)));
  /* 1298eaef push eax */
  push32((uint32_t)(EAX));
  /* 1298eaf0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298eaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298eaf4 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298eafa push edx */
  push32((uint32_t)(EDX));
  /* 1298eafb call 0x12991050 */
  push32(0x1298eb00u); f_12991050();
  /* 1298eb00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eb03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298eb05 jne 0x1298eb3d */
  if (!C.zf) goto L_1298eb3d;
  /* 1298eb07 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eb0c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1298eb0e mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298eb13 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eb16 mov dword ptr [0x129ae710], ecx */
  w32((uint32_t)(0x129ae710), (ECX));
  /* 1298eb1c mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298eb22 push edx */
  push32((uint32_t)(EDX));
  /* 1298eb23 call 0x129856e0 */
  push32(0x1298eb28u); f_129856e0();
  /* 1298eb28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eb2b cmp eax, dword ptr [0x129ae6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ae6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298eb31 jne 0x1298eb3b */
  if (!C.zf) goto L_1298eb3b;
  /* 1298eb33 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eb36 mov dword ptr [0x129ae6f4], eax */
  w32((uint32_t)(0x129ae6f4), (EAX));
L_1298eb3b:;
  /* 1298eb3b jmp 0x1298eb6f */
  goto L_1298eb6f;
L_1298eb3d:;
  /* 1298eb3d mov ecx, dword ptr [0x129ae70c] */
  ECX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eb43 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298eb46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298eb48 jne 0x1298eb6f */
  if (!C.zf) goto L_1298eb6f;
  /* 1298eb4a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eb4d push edx */
  push32((uint32_t)(EDX));
  /* 1298eb4e call 0x1298f080 */
  push32(0x1298eb53u); f_1298f080();
  /* 1298eb53 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eb56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298eb58 je 0x1298eb6f */
  if (C.zf) goto L_1298eb6f;
  /* 1298eb5a mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eb5f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1298eb61 mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298eb66 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eb69 mov dword ptr [0x129ae710], ecx */
  w32((uint32_t)(0x129ae710), (ECX));
L_1298eb6f:;
  /* 1298eb6f mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eb75 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1298eb7b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298eb81 je 0x1298ecf1 */
  if (C.zf) goto L_1298ecf1;
  /* 1298eb87 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298eb89 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1298eb8c push eax */
  push32((uint32_t)(EAX));
  /* 1298eb8d mov ecx, dword ptr [0x129ae700] */
  ECX = (r32((uint32_t)(0x129ae700)));
  /* 1298eb93 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298eb95 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298eb97 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1298eb9d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eba3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298eba4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eba7 push edx */
  push32((uint32_t)(EDX));
  /* 1298eba8 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298ebaeu);
  /* 1298ebae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ebb0 jne 0x1298ebc6 */
  if (!C.zf) goto L_1298ebc6;
  /* 1298ebb2 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298ebbc mov eax, 1 */
  EAX = (0x1u);
  /* 1298ebc1 jmp 0x1298ecfe */
  goto L_1298ecfe;
L_1298ebc6:;
  /* 1298ebc6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1298ebc9 push eax */
  push32((uint32_t)(EAX));
  /* 1298ebca mov ecx, dword ptr [0x129ae704] */
  ECX = (r32((uint32_t)(0x129ae704)));
  /* 1298ebd0 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ebd1 call 0x12990f80 */
  push32(0x1298ebd6u); f_12990f80();
  /* 1298ebd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ebd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ebdb jne 0x1298ec90 */
  if (!C.zf) goto L_1298ec90;
  /* 1298ebe1 mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ebe7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1298ebea mov dword ptr [0x129ae70c], edx */
  w32((uint32_t)(0x129ae70c), (EDX));
  /* 1298ebf0 cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ebf7 je 0x1298ec1a */
  if (C.zf) goto L_1298ec1a;
  /* 1298ebf9 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ebfe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1298ec01 mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298ec06 cmp dword ptr [0x129ae6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec0d jne 0x1298ec18 */
  if (!C.zf) goto L_1298ec18;
  /* 1298ec0f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ec12 mov dword ptr [0x129ae6f4], ecx */
  w32((uint32_t)(0x129ae6f4), (ECX));
L_1298ec18:;
  /* 1298ec18 jmp 0x1298ec8e */
  goto L_1298ec8e;
L_1298ec1a:;
  /* 1298ec1a cmp dword ptr [0x129ae6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec21 je 0x1298ec6f */
  if (C.zf) goto L_1298ec6f;
  /* 1298ec23 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298ec29 push edx */
  push32((uint32_t)(EDX));
  /* 1298ec2a call 0x129856e0 */
  push32(0x1298ec2fu); f_129856e0();
  /* 1298ec2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ec32 cmp eax, dword ptr [0x129ae6fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129ae6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec38 jne 0x1298ec6f */
  if (!C.zf) goto L_1298ec6f;
  /* 1298ec3a push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ec3c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ec3f push eax */
  push32((uint32_t)(EAX));
  /* 1298ec40 call 0x1298f0d0 */
  push32(0x1298ec45u); f_1298f0d0();
  /* 1298ec45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ec48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ec4a je 0x1298ec6d */
  if (C.zf) goto L_1298ec6d;
  /* 1298ec4c mov ecx, dword ptr [0x129ae70c] */
  ECX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ec52 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1298ec55 mov dword ptr [0x129ae70c], ecx */
  w32((uint32_t)(0x129ae70c), (ECX));
  /* 1298ec5b cmp dword ptr [0x129ae6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec62 jne 0x1298ec6d */
  if (!C.zf) goto L_1298ec6d;
  /* 1298ec64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ec67 mov dword ptr [0x129ae6f4], edx */
  w32((uint32_t)(0x129ae6f4), (EDX));
L_1298ec6d:;
  /* 1298ec6d jmp 0x1298ec8e */
  goto L_1298ec8e;
L_1298ec6f:;
  /* 1298ec6f mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ec74 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1298ec77 mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298ec7c cmp dword ptr [0x129ae6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec83 jne 0x1298ec8e */
  if (!C.zf) goto L_1298ec8e;
  /* 1298ec85 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ec88 mov dword ptr [0x129ae6f4], ecx */
  w32((uint32_t)(0x129ae6f4), (ECX));
L_1298ec8e:;
  /* 1298ec8e jmp 0x1298ecf1 */
  goto L_1298ecf1;
L_1298ec90:;
  /* 1298ec90 cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ec97 jne 0x1298ecf1 */
  if (!C.zf) goto L_1298ecf1;
  /* 1298ec99 cmp dword ptr [0x129ae6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298eca0 je 0x1298ecf1 */
  if (C.zf) goto L_1298ecf1;
  /* 1298eca2 mov edx, dword ptr [0x129ae6fc] */
  EDX = (r32((uint32_t)(0x129ae6fc)));
  /* 1298eca8 push edx */
  push32((uint32_t)(EDX));
  /* 1298eca9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1298ecac push eax */
  push32((uint32_t)(EAX));
  /* 1298ecad mov ecx, dword ptr [0x129ae704] */
  ECX = (r32((uint32_t)(0x129ae704)));
  /* 1298ecb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ecb4 call 0x12991050 */
  push32(0x1298ecb9u); f_12991050();
  /* 1298ecb9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ecbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ecbe jne 0x1298ecf1 */
  if (!C.zf) goto L_1298ecf1;
  /* 1298ecc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ecc2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ecc5 push edx */
  push32((uint32_t)(EDX));
  /* 1298ecc6 call 0x1298f0d0 */
  push32(0x1298eccbu); f_1298f0d0();
  /* 1298eccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ecce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ecd0 je 0x1298ecf1 */
  if (C.zf) goto L_1298ecf1;
  /* 1298ecd2 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ecd7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1298ecda mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298ecdf cmp dword ptr [0x129ae6f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ece6 jne 0x1298ecf1 */
  if (!C.zf) goto L_1298ecf1;
  /* 1298ece8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298eceb mov dword ptr [0x129ae6f4], ecx */
  w32((uint32_t)(0x129ae6f4), (ECX));
L_1298ecf1:;
  /* 1298ecf1 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ecf6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1298ecf9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298ecfb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ecfd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1298ecfe:;
  /* 1298ecfe mov esp, ebp */
  ESP = (EBP);
  /* 1298ed00 pop ebp */
  EBP = (pop32());
  /* 1298ed01 ret 4 */
  ESPCHK(0x1298e9e0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ed10 @ 0x1298ed10 (116 bytes, 33 insns) */
void f_1298ed10(void) {
  FTRACE(0x1298ed10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ed10 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ed11 mov ebp, esp */
  EBP = (ESP);
  /* 1298ed13 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ed14 mov eax, dword ptr [0x129ae704] */
  EAX = (r32((uint32_t)(0x129ae704)));
  /* 1298ed19 push eax */
  push32((uint32_t)(EAX));
  /* 1298ed1a call 0x129856e0 */
  push32(0x1298ed1fu); f_129856e0();
  /* 1298ed1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ed22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298ed24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ed27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1298ed2a mov dword ptr [0x129ae700], ecx */
  w32((uint32_t)(0x129ae700), (ECX));
  /* 1298ed30 cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ed37 je 0x1298ed42 */
  if (C.zf) goto L_1298ed42;
  /* 1298ed39 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1298ed40 jmp 0x1298ed54 */
  goto L_1298ed54;
L_1298ed42:;
  /* 1298ed42 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298ed48 push edx */
  push32((uint32_t)(EDX));
  /* 1298ed49 call 0x1298f3c0 */
  push32(0x1298ed4eu); f_1298f3c0();
  /* 1298ed4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ed51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1298ed54:;
  /* 1298ed54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298ed57 mov dword ptr [0x129ae6fc], eax */
  w32((uint32_t)(0x129ae6fc), (EAX));
  /* 1298ed5c push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ed5e push 0x1298ed90 */
  push32((uint32_t)(0x1298ed90u));
  /* 1298ed63 call dword ptr [0x129b02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02bc))), 0x1298ed69u);
  /* 1298ed69 mov ecx, dword ptr [0x129ae70c] */
  ECX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ed6f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1298ed72 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298ed74 jne 0x1298ed80 */
  if (!C.zf) goto L_1298ed80;
  /* 1298ed76 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
L_1298ed80:;
  /* 1298ed80 mov esp, ebp */
  ESP = (EBP);
  /* 1298ed82 pop ebp */
  EBP = (pop32());
  /* 1298ed83 ret  */
  ESPCHK(0x1298ed10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed90 @ 0x1298ed90 (287 bytes, 86 insns) */
void f_1298ed90(void) {
  FTRACE(0x1298ed90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ed90 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ed91 mov ebp, esp */
  EBP = (ESP);
  /* 1298ed93 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ed96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ed99 push eax */
  push32((uint32_t)(EAX));
  /* 1298ed9a call 0x1298f340 */
  push32(0x1298ed9fu); f_1298f340();
  /* 1298ed9f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eda2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1298eda5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298eda7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298edaa push ecx */
  push32((uint32_t)(ECX));
  /* 1298edab mov edx, dword ptr [0x129ae700] */
  EDX = (r32((uint32_t)(0x129ae700)));
  /* 1298edb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298edb3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298edb5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1298edbb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298edc1 push edx */
  push32((uint32_t)(EDX));
  /* 1298edc2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298edc5 push eax */
  push32((uint32_t)(EAX));
  /* 1298edc6 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298edccu);
  /* 1298edcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298edce jne 0x1298ede4 */
  if (!C.zf) goto L_1298ede4;
  /* 1298edd0 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298edda mov eax, 1 */
  EAX = (0x1u);
  /* 1298eddf jmp 0x1298eea9 */
  goto L_1298eea9;
L_1298ede4:;
  /* 1298ede4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298ede7 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ede8 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298edee push edx */
  push32((uint32_t)(EDX));
  /* 1298edef call 0x12990f80 */
  push32(0x1298edf4u); f_12990f80();
  /* 1298edf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298edf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298edf9 jne 0x1298ee39 */
  if (!C.zf) goto L_1298ee39;
  /* 1298edfb cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ee02 jne 0x1298ee16 */
  if (!C.zf) goto L_1298ee16;
  /* 1298ee04 push 1 */
  push32((uint32_t)(0x1u));
  /* 1298ee06 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ee09 push eax */
  push32((uint32_t)(EAX));
  /* 1298ee0a call 0x1298f0d0 */
  push32(0x1298ee0fu); f_1298f0d0();
  /* 1298ee0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ee12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ee14 je 0x1298ee37 */
  if (C.zf) goto L_1298ee37;
L_1298ee16:;
  /* 1298ee16 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ee19 mov dword ptr [0x129ae710], ecx */
  w32((uint32_t)(0x129ae710), (ECX));
  /* 1298ee1f mov edx, dword ptr [0x129ae710] */
  EDX = (r32((uint32_t)(0x129ae710)));
  /* 1298ee25 mov dword ptr [0x129ae6f4], edx */
  w32((uint32_t)(0x129ae6f4), (EDX));
  /* 1298ee2b mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ee30 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1298ee32 mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
L_1298ee37:;
  /* 1298ee37 jmp 0x1298ee9c */
  goto L_1298ee9c;
L_1298ee39:;
  /* 1298ee39 cmp dword ptr [0x129ae700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ee40 jne 0x1298ee9c */
  if (!C.zf) goto L_1298ee9c;
  /* 1298ee42 cmp dword ptr [0x129ae6fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x129ae6fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298ee49 je 0x1298ee9c */
  if (C.zf) goto L_1298ee9c;
  /* 1298ee4b mov ecx, dword ptr [0x129ae6fc] */
  ECX = (r32((uint32_t)(0x129ae6fc)));
  /* 1298ee51 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ee52 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 1298ee55 push edx */
  push32((uint32_t)(EDX));
  /* 1298ee56 mov eax, dword ptr [0x129ae704] */
  EAX = (r32((uint32_t)(0x129ae704)));
  /* 1298ee5b push eax */
  push32((uint32_t)(EAX));
  /* 1298ee5c call 0x12991050 */
  push32(0x1298ee61u); f_12991050();
  /* 1298ee61 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ee64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ee66 jne 0x1298ee9c */
  if (!C.zf) goto L_1298ee9c;
  /* 1298ee68 push 0 */
  push32((uint32_t)(0x0u));
  /* 1298ee6a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ee6d push ecx */
  push32((uint32_t)(ECX));
  /* 1298ee6e call 0x1298f0d0 */
  push32(0x1298ee73u); f_1298f0d0();
  /* 1298ee73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ee76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ee78 je 0x1298ee9c */
  if (C.zf) goto L_1298ee9c;
  /* 1298ee7a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ee7d mov dword ptr [0x129ae710], edx */
  w32((uint32_t)(0x129ae710), (EDX));
  /* 1298ee83 mov eax, dword ptr [0x129ae710] */
  EAX = (r32((uint32_t)(0x129ae710)));
  /* 1298ee88 mov dword ptr [0x129ae6f4], eax */
  w32((uint32_t)(0x129ae6f4), (EAX));
  /* 1298ee8d mov ecx, dword ptr [0x129ae70c] */
  ECX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ee93 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1298ee96 mov dword ptr [0x129ae70c], ecx */
  w32((uint32_t)(0x129ae70c), (ECX));
L_1298ee9c:;
  /* 1298ee9c mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eea1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1298eea4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298eea6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298eea8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1298eea9:;
  /* 1298eea9 mov esp, ebp */
  ESP = (EBP);
  /* 1298eeab pop ebp */
  EBP = (pop32());
  /* 1298eeac ret 4 */
  ESPCHK(0x1298ed90u, _esp0);
  ESP += 8; return;
}

/* FUN_1000eeb0 @ 0x1298eeb0 (69 bytes, 20 insns) */
void f_1298eeb0(void) {
  FTRACE(0x1298eeb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298eeb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298eeb1 mov ebp, esp */
  EBP = (ESP);
  /* 1298eeb3 mov eax, dword ptr [0x129ae708] */
  EAX = (r32((uint32_t)(0x129ae708)));
  /* 1298eeb8 push eax */
  push32((uint32_t)(EAX));
  /* 1298eeb9 call 0x129856e0 */
  push32(0x1298eebeu); f_129856e0();
  /* 1298eebe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298eec1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298eec3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298eec6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1298eec9 mov dword ptr [0x129ae6f8], ecx */
  w32((uint32_t)(0x129ae6f8), (ECX));
  /* 1298eecf push 1 */
  push32((uint32_t)(0x1u));
  /* 1298eed1 push 0x1298ef00 */
  push32((uint32_t)(0x1298ef00u));
  /* 1298eed6 call dword ptr [0x129b02bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b02bc))), 0x1298eedcu);
  /* 1298eedc mov edx, dword ptr [0x129ae70c] */
  EDX = (r32((uint32_t)(0x129ae70c)));
  /* 1298eee2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1298eee5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298eee7 jne 0x1298eef3 */
  if (!C.zf) goto L_1298eef3;
  /* 1298eee9 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
L_1298eef3:;
  /* 1298eef3 pop ebp */
  EBP = (pop32());
  /* 1298eef4 ret  */
  ESPCHK(0x1298eeb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef00 @ 0x1298ef00 (172 bytes, 54 insns) */
void f_1298ef00(void) {
  FTRACE(0x1298ef00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298ef00 push ebp */
  push32((uint32_t)(EBP));
  /* 1298ef01 mov ebp, esp */
  EBP = (ESP);
  /* 1298ef03 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ef06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298ef09 push eax */
  push32((uint32_t)(EAX));
  /* 1298ef0a call 0x1298f340 */
  push32(0x1298ef0fu); f_1298f340();
  /* 1298ef0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ef12 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1298ef15 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298ef17 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298ef1a push ecx */
  push32((uint32_t)(ECX));
  /* 1298ef1b mov edx, dword ptr [0x129ae6f8] */
  EDX = (r32((uint32_t)(0x129ae6f8)));
  /* 1298ef21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298ef23 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298ef25 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1298ef2b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ef31 push edx */
  push32((uint32_t)(EDX));
  /* 1298ef32 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ef35 push eax */
  push32((uint32_t)(EAX));
  /* 1298ef36 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298ef3cu);
  /* 1298ef3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ef3e jne 0x1298ef51 */
  if (!C.zf) goto L_1298ef51;
  /* 1298ef40 mov dword ptr [0x129ae70c], 0 */
  w32((uint32_t)(0x129ae70c), (0x0u));
  /* 1298ef4a mov eax, 1 */
  EAX = (0x1u);
  /* 1298ef4f jmp 0x1298efa6 */
  goto L_1298efa6;
L_1298ef51:;
  /* 1298ef51 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1298ef54 push ecx */
  push32((uint32_t)(ECX));
  /* 1298ef55 mov edx, dword ptr [0x129ae708] */
  EDX = (r32((uint32_t)(0x129ae708)));
  /* 1298ef5b push edx */
  push32((uint32_t)(EDX));
  /* 1298ef5c call 0x12990f80 */
  push32(0x1298ef61u); f_12990f80();
  /* 1298ef61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ef64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ef66 jne 0x1298ef99 */
  if (!C.zf) goto L_1298ef99;
  /* 1298ef68 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ef6b push eax */
  push32((uint32_t)(EAX));
  /* 1298ef6c call 0x1298f080 */
  push32(0x1298ef71u); f_1298f080();
  /* 1298ef71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298ef74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298ef76 je 0x1298ef99 */
  if (C.zf) goto L_1298ef99;
  /* 1298ef78 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1298ef7b mov dword ptr [0x129ae710], ecx */
  w32((uint32_t)(0x129ae710), (ECX));
  /* 1298ef81 mov edx, dword ptr [0x129ae710] */
  EDX = (r32((uint32_t)(0x129ae710)));
  /* 1298ef87 mov dword ptr [0x129ae6f4], edx */
  w32((uint32_t)(0x129ae6f4), (EDX));
  /* 1298ef8d mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ef92 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1298ef94 mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
L_1298ef99:;
  /* 1298ef99 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298ef9e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1298efa1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1298efa3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298efa5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1298efa6:;
  /* 1298efa6 mov esp, ebp */
  ESP = (EBP);
  /* 1298efa8 pop ebp */
  EBP = (pop32());
  /* 1298efa9 ret 4 */
  ESPCHK(0x1298ef00u, _esp0);
  ESP += 8; return;
}

/* FUN_1000efb0 @ 0x1298efb0 (43 bytes, 11 insns) */
void f_1298efb0(void) {
  FTRACE(0x1298efb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298efb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298efb1 mov ebp, esp */
  EBP = (ESP);
  /* 1298efb3 mov eax, dword ptr [0x129ae70c] */
  EAX = (r32((uint32_t)(0x129ae70c)));
  /* 1298efb8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1298efbd mov dword ptr [0x129ae70c], eax */
  w32((uint32_t)(0x129ae70c), (EAX));
  /* 1298efc2 call dword ptr [0x129b0240] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0240))), 0x1298efc8u);
  /* 1298efc8 mov dword ptr [0x129ae710], eax */
  w32((uint32_t)(0x129ae710), (EAX));
  /* 1298efcd mov ecx, dword ptr [0x129ae710] */
  ECX = (r32((uint32_t)(0x129ae710)));
  /* 1298efd3 mov dword ptr [0x129ae6f4], ecx */
  w32((uint32_t)(0x129ae6f4), (ECX));
  /* 1298efd9 pop ebp */
  EBP = (pop32());
  /* 1298efda ret  */
  ESPCHK(0x1298efb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efe0 @ 0x1298efe0 (155 bytes, 57 insns) */
void f_1298efe0(void) {
  FTRACE(0x1298efe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298efe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298efe1 mov ebp, esp */
  EBP = (ESP);
  /* 1298efe3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298efe6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298efea je 0x1298f00b */
  if (C.zf) goto L_1298f00b;
  /* 1298efec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298efef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1298eff2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298eff4 je 0x1298f00b */
  if (C.zf) goto L_1298f00b;
  /* 1298eff6 push 0x129aa67c */
  push32((uint32_t)(0x129aa67cu));
  /* 1298effb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298effe push edx */
  push32((uint32_t)(EDX));
  /* 1298efff call 0x1298e540 */
  push32(0x1298f004u); f_1298e540();
  /* 1298f004 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f007 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f009 jne 0x1298f033 */
  if (!C.zf) goto L_1298f033;
L_1298f00b:;
  /* 1298f00b push 8 */
  push32((uint32_t)(0x8u));
  /* 1298f00d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1298f010 push eax */
  push32((uint32_t)(EAX));
  /* 1298f011 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1298f016 mov ecx, dword ptr [0x129ae710] */
  ECX = (r32((uint32_t)(0x129ae710)));
  /* 1298f01c push ecx */
  push32((uint32_t)(ECX));
  /* 1298f01d call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298f023u);
  /* 1298f023 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f025 jne 0x1298f02b */
  if (!C.zf) goto L_1298f02b;
  /* 1298f027 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f029 jmp 0x1298f077 */
  goto L_1298f077;
L_1298f02b:;
  /* 1298f02b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1298f02e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1298f031 jmp 0x1298f06b */
  goto L_1298f06b;
L_1298f033:;
  /* 1298f033 push 0x129aa678 */
  push32((uint32_t)(0x129aa678u));
  /* 1298f038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f03b push eax */
  push32((uint32_t)(EAX));
  /* 1298f03c call 0x1298e540 */
  push32(0x1298f041u); f_1298e540();
  /* 1298f041 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f046 jne 0x1298f06b */
  if (!C.zf) goto L_1298f06b;
  /* 1298f048 push 8 */
  push32((uint32_t)(0x8u));
  /* 1298f04a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1298f04d push ecx */
  push32((uint32_t)(ECX));
  /* 1298f04e push 0xb */
  push32((uint32_t)(0xbu));
  /* 1298f050 mov edx, dword ptr [0x129ae710] */
  EDX = (r32((uint32_t)(0x129ae710)));
  /* 1298f056 push edx */
  push32((uint32_t)(EDX));
  /* 1298f057 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298f05du);
  /* 1298f05d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f05f jne 0x1298f065 */
  if (!C.zf) goto L_1298f065;
  /* 1298f061 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f063 jmp 0x1298f077 */
  goto L_1298f077;
L_1298f065:;
  /* 1298f065 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1298f068 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1298f06b:;
  /* 1298f06b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f06e push ecx */
  push32((uint32_t)(ECX));
  /* 1298f06f call 0x12991160 */
  push32(0x1298f074u); f_12991160();
  /* 1298f074 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1298f077:;
  /* 1298f077 mov esp, ebp */
  ESP = (EBP);
  /* 1298f079 pop ebp */
  EBP = (pop32());
  /* 1298f07a ret  */
  ESPCHK(0x1298efe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f080 @ 0x1298f080 (79 bytes, 26 insns) */
void f_1298f080(void) {
  FTRACE(0x1298f080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f080 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f081 mov ebp, esp */
  EBP = (ESP);
  /* 1298f083 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f086 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1298f08a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1298f08e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298f095 jmp 0x1298f0a0 */
  goto L_1298f0a0;
L_1298f097:;
  /* 1298f097 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f09a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f09d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1298f0a0:;
  /* 1298f0a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f0a4 jae 0x1298f0c6 */
  if (!C.cf) goto L_1298f0c6;
  /* 1298f0a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f0a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1298f0af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f0b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1298f0b4 mov cx, word ptr [eax*2 + 0x129ad9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x129ad9c4)));
  /* 1298f0bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f0be jne 0x1298f0c4 */
  if (!C.zf) goto L_1298f0c4;
  /* 1298f0c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f0c2 jmp 0x1298f0cb */
  goto L_1298f0cb;
L_1298f0c4:;
  /* 1298f0c4 jmp 0x1298f097 */
  goto L_1298f097;
L_1298f0c6:;
  /* 1298f0c6 mov eax, 1 */
  EAX = (0x1u);
L_1298f0cb:;
  /* 1298f0cb mov esp, ebp */
  ESP = (EBP);
  /* 1298f0cd pop ebp */
  EBP = (pop32());
  /* 1298f0ce ret  */
  ESPCHK(0x1298f080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x1298f0d0 (135 bytes, 48 insns) */
void f_1298f0d0(void) {
  FTRACE(0x1298f0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f0d1 mov ebp, esp */
  EBP = (ESP);
  /* 1298f0d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f0d6 push esi */
  push32((uint32_t)(ESI));
  /* 1298f0d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f0da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f0df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f0e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f0e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1298f0ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f0f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f0f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1298f0f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1298f0f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f0fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1298f0fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f0ff push edx */
  push32((uint32_t)(EDX));
  /* 1298f100 call dword ptr [0x129ae714] */
  call_ind((uint32_t)(r32((uint32_t)(0x129ae714))), 0x1298f106u);
  /* 1298f106 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f108 jne 0x1298f10e */
  if (!C.zf) goto L_1298f10e;
  /* 1298f10a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f10c jmp 0x1298f152 */
  goto L_1298f152;
L_1298f10e:;
  /* 1298f10e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1298f111 push eax */
  push32((uint32_t)(EAX));
  /* 1298f112 call 0x1298f340 */
  push32(0x1298f117u); f_1298f340();
  /* 1298f117 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f11a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f11d je 0x1298f14d */
  if (C.zf) goto L_1298f14d;
  /* 1298f11f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f123 je 0x1298f14d */
  if (C.zf) goto L_1298f14d;
  /* 1298f125 mov ecx, dword ptr [0x129ae704] */
  ECX = (r32((uint32_t)(0x129ae704)));
  /* 1298f12b push ecx */
  push32((uint32_t)(ECX));
  /* 1298f12c call 0x1298f3c0 */
  push32(0x1298f131u); f_1298f3c0();
  /* 1298f131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f134 mov esi, eax */
  ESI = (EAX);
  /* 1298f136 mov edx, dword ptr [0x129ae704] */
  EDX = (r32((uint32_t)(0x129ae704)));
  /* 1298f13c push edx */
  push32((uint32_t)(EDX));
  /* 1298f13d call 0x129856e0 */
  push32(0x1298f142u); f_129856e0();
  /* 1298f142 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f145 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f147 jne 0x1298f14d */
  if (!C.zf) goto L_1298f14d;
  /* 1298f149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1298f14b jmp 0x1298f152 */
  goto L_1298f152;
L_1298f14d:;
  /* 1298f14d mov eax, 1 */
  EAX = (0x1u);
L_1298f152:;
  /* 1298f152 pop esi */
  ESI = (pop32());
  /* 1298f153 mov esp, ebp */
  ESP = (EBP);
  /* 1298f155 pop ebp */
  EBP = (pop32());
  /* 1298f156 ret  */
  ESPCHK(0x1298f0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f160 @ 0x1298f160 (77 bytes, 18 insns) */
void f_1298f160(void) {
  FTRACE(0x1298f160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f160 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f161 mov ebp, esp */
  EBP = (ESP);
  /* 1298f163 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f169 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1298f173 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1298f179 push eax */
  push32((uint32_t)(EAX));
  /* 1298f17a call dword ptr [0x129b023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b023c))), 0x1298f180u);
  /* 1298f180 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1298f182 je 0x1298f199 */
  if (C.zf) goto L_1298f199;
  /* 1298f184 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f18b jne 0x1298f199 */
  if (!C.zf) goto L_1298f199;
  /* 1298f18d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1298f197 jmp 0x1298f1a3 */
  goto L_1298f1a3;
L_1298f199:;
  /* 1298f199 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1298f1a3:;
  /* 1298f1a3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1298f1a9 mov esp, ebp */
  ESP = (EBP);
  /* 1298f1ab pop ebp */
  EBP = (pop32());
  /* 1298f1ac ret  */
  ESPCHK(0x1298f160u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1298f1b0 (388 bytes, 118 insns) */
void f_1298f1b0(void) {
  FTRACE(0x1298f1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f1b1 mov ebp, esp */
  EBP = (ESP);
  /* 1298f1b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f1b6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1298f1bd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1298f1c4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1298f1cb:;
  /* 1298f1cb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f1ce cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f1d1 jg 0x1298f318 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298f318;
  /* 1298f1d7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1298f1da add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f1dd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1298f1de sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f1e0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1298f1e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1298f1e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f1e8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f1eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f1ee cmp edx, dword ptr [ecx + 0x129ad520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x129ad520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f1f4 jne 0x1298f2ee */
  if (!C.zf) goto L_1298f2ee;
  /* 1298f1fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298f1fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1298f200 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f204 ja 0x1298f227 */
  if ((!C.cf&&!C.zf)) goto L_1298f227;
  /* 1298f206 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f20a je 0x1298f299 */
  if (C.zf) goto L_1298f299;
  /* 1298f210 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f214 je 0x1298f244 */
  if (C.zf) goto L_1298f244;
  /* 1298f216 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f21a je 0x1298f266 */
  if (C.zf) goto L_1298f266;
  /* 1298f21c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f220 je 0x1298f288 */
  if (C.zf) goto L_1298f288;
  /* 1298f222 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f227:;
  /* 1298f227 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f22e je 0x1298f255 */
  if (C.zf) goto L_1298f255;
  /* 1298f230 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f237 je 0x1298f277 */
  if (C.zf) goto L_1298f277;
  /* 1298f239 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f240 je 0x1298f2aa */
  if (C.zf) goto L_1298f2aa;
  /* 1298f242 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f244:;
  /* 1298f244 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f247 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f24a add ecx, 0x129ad524 */
  { uint32_t _a=(ECX),_b=(0x129ad524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f250 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298f253 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f255:;
  /* 1298f255 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f258 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f25b mov eax, dword ptr [edx + 0x129ad52c] */
  EAX = (r32((uint32_t)(EDX + 0x129ad52c)));
  /* 1298f261 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298f264 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f266:;
  /* 1298f266 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f269 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f26c add ecx, 0x129ad530 */
  { uint32_t _a=(ECX),_b=(0x129ad530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f272 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298f275 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f277:;
  /* 1298f277 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f27a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f27d mov eax, dword ptr [edx + 0x129ad534] */
  EAX = (r32((uint32_t)(EDX + 0x129ad534)));
  /* 1298f283 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1298f286 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f288:;
  /* 1298f288 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f28b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f28e add ecx, 0x129ad538 */
  { uint32_t _a=(ECX),_b=(0x129ad538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f294 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298f297 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f299:;
  /* 1298f299 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f29c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f29f add edx, 0x129ad53c */
  { uint32_t _a=(EDX),_b=(0x129ad53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f2a5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1298f2a8 jmp 0x1298f2b8 */
  goto L_1298f2b8;
L_1298f2aa:;
  /* 1298f2aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f2ad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f2b0 add eax, 0x129ad544 */
  { uint32_t _a=(EAX),_b=(0x129ad544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f2b5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1298f2b8:;
  /* 1298f2b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f2bc je 0x1298f2c4 */
  if (C.zf) goto L_1298f2c4;
  /* 1298f2be cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f2c2 jge 0x1298f2c6 */
  if ((C.sf==C.of)) goto L_1298f2c6;
L_1298f2c4:;
  /* 1298f2c4 jmp 0x1298f318 */
  goto L_1298f318;
L_1298f2c6:;
  /* 1298f2c6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298f2c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f2cc push ecx */
  push32((uint32_t)(ECX));
  /* 1298f2cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f2d0 push edx */
  push32((uint32_t)(EDX));
  /* 1298f2d1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298f2d4 push eax */
  push32((uint32_t)(EAX));
  /* 1298f2d5 call 0x129860d0 */
  push32(0x1298f2dau); f_129860d0();
  /* 1298f2da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f2dd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298f2e0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f2e3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1298f2e7 mov eax, 1 */
  EAX = (0x1u);
  /* 1298f2ec jmp 0x1298f32e */
  goto L_1298f32e;
L_1298f2ee:;
  /* 1298f2ee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f2f1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f2f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f2f7 cmp eax, dword ptr [edx + 0x129ad520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x129ad520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f2fd jae 0x1298f30a */
  if (!C.cf) goto L_1298f30a;
  /* 1298f2ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f302 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f305 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1298f308 jmp 0x1298f313 */
  goto L_1298f313;
L_1298f30a:;
  /* 1298f30a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1298f30d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f310 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1298f313:;
  /* 1298f313 jmp 0x1298f1cb */
  goto L_1298f1cb;
L_1298f318:;
  /* 1298f318 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1298f31b push eax */
  push32((uint32_t)(EAX));
  /* 1298f31c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1298f31f push ecx */
  push32((uint32_t)(ECX));
  /* 1298f320 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1298f323 push edx */
  push32((uint32_t)(EDX));
  /* 1298f324 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f327 push eax */
  push32((uint32_t)(EAX));
  /* 1298f328 call dword ptr [0x129b0338] */
  call_ind((uint32_t)(r32((uint32_t)(0x129b0338))), 0x1298f32eu);
L_1298f32e:;
  /* 1298f32e mov esp, ebp */
  ESP = (EBP);
  /* 1298f330 pop ebp */
  EBP = (pop32());
  /* 1298f331 ret 0x10 */
  ESPCHK(0x1298f1b0u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f340 @ 0x1298f340 (118 bytes, 42 insns) */
void f_1298f340(void) {
  FTRACE(0x1298f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f340 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f341 mov ebp, esp */
  EBP = (ESP);
  /* 1298f343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f346 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1298f34d:;
  /* 1298f34d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f350 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1298f352 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1298f355 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f359 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f35c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f35f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1298f362 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1298f364 je 0x1298f3af */
  if (C.zf) goto L_1298f3af;
  /* 1298f366 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f36a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f36d jl 0x1298f382 */
  if ((C.sf!=C.of)) goto L_1298f382;
  /* 1298f36f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f373 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f376 jg 0x1298f382 */
  if ((!C.zf&&C.sf==C.of)) goto L_1298f382;
  /* 1298f378 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1298f37b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298f37d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1298f380 jmp 0x1298f39c */
  goto L_1298f39c;
L_1298f382:;
  /* 1298f382 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f386 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f389 jl 0x1298f39c */
  if ((C.sf!=C.of)) goto L_1298f39c;
  /* 1298f38b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f38f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f392 jg 0x1298f39c */
  if ((!C.zf&&C.sf==C.of)) goto L_1298f39c;
  /* 1298f394 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1298f397 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1298f399 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1298f39c:;
  /* 1298f39c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f39f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1298f3a2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1298f3a6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1298f3aa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f3ad jmp 0x1298f34d */
  goto L_1298f34d;
L_1298f3af:;
  /* 1298f3af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1298f3b2 mov esp, ebp */
  ESP = (EBP);
  /* 1298f3b4 pop ebp */
  EBP = (pop32());
  /* 1298f3b5 ret  */
  ESPCHK(0x1298f340u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1298f3c0 (101 bytes, 36 insns) */
void f_1298f3c0(void) {
  FTRACE(0x1298f3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f3c1 mov ebp, esp */
  EBP = (ESP);
  /* 1298f3c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1298f3c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1298f3cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f3d0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1298f3d2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1298f3d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f3d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f3db mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1298f3de:;
  /* 1298f3de movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1298f3e2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f3e5 jl 0x1298f3f0 */
  if ((C.sf!=C.of)) goto L_1298f3f0;
  /* 1298f3e7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1298f3eb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f3ee jle 0x1298f402 */
  if ((C.zf||C.sf!=C.of)) goto L_1298f402;
L_1298f3f0:;
  /* 1298f3f0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1298f3f4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f3f7 jl 0x1298f41e */
  if ((C.sf!=C.of)) goto L_1298f41e;
  /* 1298f3f9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1298f3fd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f400 jg 0x1298f41e */
  if ((!C.zf&&C.sf==C.of)) goto L_1298f41e;
L_1298f402:;
  /* 1298f402 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f405 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f408 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1298f40b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f40e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1298f410 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1298f413 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f416 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f419 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1298f41c jmp 0x1298f3de */
  goto L_1298f3de;
L_1298f41e:;
  /* 1298f41e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1298f421 mov esp, ebp */
  ESP = (EBP);
  /* 1298f423 pop ebp */
  EBP = (pop32());
  /* 1298f424 ret  */
  ESPCHK(0x1298f3c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f430 @ 0x1298f430 (122 bytes, 39 insns) */
void f_1298f430(void) {
  FTRACE(0x1298f430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1298f430 push ebp */
  push32((uint32_t)(EBP));
  /* 1298f431 mov ebp, esp */
  EBP = (ESP);
  /* 1298f433 push ecx */
  push32((uint32_t)(ECX));
  /* 1298f434 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f437 cmp eax, dword ptr [0x129aff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x129aff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1298f43d jae 0x1298f461 */
  if (!C.cf) goto L_1298f461;
  /* 1298f43f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f442 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1298f445 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f448 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1298f44b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1298f44e mov eax, dword ptr [ecx*4 + 0x129afe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x129afe60)));
  /* 1298f455 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1298f45a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1298f45d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1298f45f jne 0x1298f47c */
  if (!C.zf) goto L_1298f47c;
L_1298f461:;
  /* 1298f461 call 0x1298a780 */
  push32(0x1298f466u); f_1298a780();
  /* 1298f466 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1298f46c call 0x1298a790 */
  push32(0x1298f471u); f_1298a790();
  /* 1298f471 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1298f477 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1298f47a jmp 0x1298f4a6 */
  goto L_1298f4a6;
L_1298f47c:;
  /* 1298f47c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f47f push edx */
  push32((uint32_t)(EDX));
  /* 1298f480 call 0x1298bfa0 */
  push32(0x1298f485u); f_1298bfa0();
  /* 1298f485 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f48b push eax */
  push32((uint32_t)(EAX));
  /* 1298f48c call 0x1298f4b0 */
  push32(0x1298f491u); f_1298f4b0();
  /* 1298f491 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f494 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1298f497 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1298f49a push ecx */
  push32((uint32_t)(ECX));
  /* 1298f49b call 0x1298c030 */
  push32(0x1298f4a0u); f_1298c030();
  /* 1298f4a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1298f4a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1298f4a6:;
  /* 1298f4a6 mov esp, ebp */
  ESP = (EBP);
  /* 1298f4a8 pop ebp */
  EBP = (pop32());
  /* 1298f4a9 ret  */
  ESPCHK(0x1298f430u, _esp0);
  ESP += 4; return;
}

