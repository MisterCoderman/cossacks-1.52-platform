#include "recomp.h"

/* FUN_100057e0 @ 0x11cc57e0 (39 bytes, 20 insns) */
void f_11cc57e0(void) {
  FTRACE(0x11cc57e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc57e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc57e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc57e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc57e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc57e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc57e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc57e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc57ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc57ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc57f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc57f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc57f9 pop ecx */
  ECX = (pop32());
  /* 11cc57fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc57fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5800 pop edi */
  EDI = (pop32());
  /* 11cc5801 pop esi */
  ESI = (pop32());
  /* 11cc5802 pop ebx */
  EBX = (pop32());
  /* 11cc5803 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5805 pop ebp */
  EBP = (pop32());
  /* 11cc5806 ret  */
  ESPCHK(0x11cc57e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005810 @ 0x11cc5810 (71 bytes, 30 insns) */
void f_11cc5810(void) {
  FTRACE(0x11cc5810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5810 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5811 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5813 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5816 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5817 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5818 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5819 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc581a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc581d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5822 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5827 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5829 pop ecx */
  ECX = (pop32());
  /* 11cc582a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc582d mov esi, esp */
  ESI = (ESP);
  /* 11cc582f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5832 push eax */
  push32((uint32_t)(EAX));
  /* 11cc5833 call dword ptr [0x11d01548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01548))), 0x11cc5839u);
  /* 11cc5839 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc583c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc583e call 0x11cc9200 */
  push32(0x11cc5843u); f_11cc9200();
  /* 11cc5843 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5846 pop edi */
  EDI = (pop32());
  /* 11cc5847 pop esi */
  ESI = (pop32());
  /* 11cc5848 pop ebx */
  EBX = (pop32());
  /* 11cc5849 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc584c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc584e call 0x11cc9200 */
  push32(0x11cc5853u); f_11cc9200();
  /* 11cc5853 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5855 pop ebp */
  EBP = (pop32());
  /* 11cc5856 ret  */
  ESPCHK(0x11cc5810u, _esp0);
  ESP += 4; return;
}

/* FUN_10005870 @ 0x11cc5870 (47 bytes, 22 insns) */
void f_11cc5870(void) {
  FTRACE(0x11cc5870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5870 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5871 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5873 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5876 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5877 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5878 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5879 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc587a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc587d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5882 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5887 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5889 pop ecx */
  ECX = (pop32());
  /* 11cc588a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc588d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5890 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5893 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11cc5896 pop edi */
  EDI = (pop32());
  /* 11cc5897 pop esi */
  ESI = (pop32());
  /* 11cc5898 pop ebx */
  EBX = (pop32());
  /* 11cc5899 mov esp, ebp */
  ESP = (EBP);
  /* 11cc589b pop ebp */
  EBP = (pop32());
  /* 11cc589c ret 4 */
  ESPCHK(0x11cc5870u, _esp0);
  ESP += 8; return;
}

/* FUN_100058b0 @ 0x11cc58b0 (94 bytes, 39 insns) */
void f_11cc58b0(void) {
  FTRACE(0x11cc58b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc58b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc58b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc58b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc58b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc58b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc58b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc58b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc58ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc58bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc58c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc58c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc58c9 pop ecx */
  ECX = (pop32());
  /* 11cc58ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc58cd mov esi, esp */
  ESI = (ESP);
  /* 11cc58cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc58d2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc58d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc58d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc58d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc58da mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cc58dd push eax */
  push32((uint32_t)(EAX));
  /* 11cc58de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc58e1 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc58e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc58e5 call dword ptr [0x11d014c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c4))), 0x11cc58ebu);
  /* 11cc58eb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc58ee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc58f0 call 0x11cc9200 */
  push32(0x11cc58f5u); f_11cc9200();
  /* 11cc58f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc58f8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc58fb pop edi */
  EDI = (pop32());
  /* 11cc58fc pop esi */
  ESI = (pop32());
  /* 11cc58fd pop ebx */
  EBX = (pop32());
  /* 11cc58fe add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5901 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5903 call 0x11cc9200 */
  push32(0x11cc5908u); f_11cc9200();
  /* 11cc5908 mov esp, ebp */
  ESP = (EBP);
  /* 11cc590a pop ebp */
  EBP = (pop32());
  /* 11cc590b ret 4 */
  ESPCHK(0x11cc58b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005930 @ 0x11cc5930 (221 bytes, 81 insns) */
void f_11cc5930(void) {
  FTRACE(0x11cc5930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5930 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5931 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5933 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5936 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5937 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5938 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5939 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc593a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc593d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc5942 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5947 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5949 pop ecx */
  ECX = (pop32());
  /* 11cc594a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc594d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5950 call 0x11cc1168 */
  push32(0x11cc5955u); f_11cc1168();
  /* 11cc5955 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc5957 jne 0x11cc59fa */
  if (!C.zf) goto L_11cc59fa;
  /* 11cc595d mov esi, esp */
  ESI = (ESP);
  /* 11cc595f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5962 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11cc5965 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5966 call dword ptr [0x11d014ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ec))), 0x11cc596cu);
  /* 11cc596c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc596f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5971 call 0x11cc9200 */
  push32(0x11cc5976u); f_11cc9200();
  /* 11cc5976 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc597d jmp 0x11cc5988 */
  goto L_11cc5988;
L_11cc597f:;
  /* 11cc597f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc5982 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5985 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cc5988:;
  /* 11cc5988 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc598b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc598e jge 0x11cc59db */
  if ((C.sf==C.of)) goto L_11cc59db;
  /* 11cc5990 mov esi, esp */
  ESI = (ESP);
  /* 11cc5992 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5994 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5997 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5998 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc599b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11cc599e push eax */
  push32((uint32_t)(EAX));
  /* 11cc599f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59a2 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cc59a5 push edx */
  push32((uint32_t)(EDX));
  /* 11cc59a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59a9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc59ac push ecx */
  push32((uint32_t)(ECX));
  /* 11cc59ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59b0 push edx */
  push32((uint32_t)(EDX));
  /* 11cc59b1 call dword ptr [0x11d014c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c0))), 0x11cc59b7u);
  /* 11cc59b7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc59ba cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc59bc call 0x11cc9200 */
  push32(0x11cc59c1u); f_11cc9200();
  /* 11cc59c1 mov esi, esp */
  ESI = (ESP);
  /* 11cc59c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc59c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59c8 push eax */
  push32((uint32_t)(EAX));
  /* 11cc59c9 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc59cfu);
  /* 11cc59cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc59d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc59d4 call 0x11cc9200 */
  push32(0x11cc59d9u); f_11cc9200();
  /* 11cc59d9 jmp 0x11cc597f */
  goto L_11cc597f;
L_11cc59db:;
  /* 11cc59db mov esi, esp */
  ESI = (ESP);
  /* 11cc59dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc59df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59e2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc59e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc59e6 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 11cc59e9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc59ea call dword ptr [0x11d01550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01550))), 0x11cc59f0u);
  /* 11cc59f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc59f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc59f5 call 0x11cc9200 */
  push32(0x11cc59fau); f_11cc9200();
L_11cc59fa:;
  /* 11cc59fa pop edi */
  EDI = (pop32());
  /* 11cc59fb pop esi */
  ESI = (pop32());
  /* 11cc59fc pop ebx */
  EBX = (pop32());
  /* 11cc59fd add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5a00 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5a02 call 0x11cc9200 */
  push32(0x11cc5a07u); f_11cc9200();
  /* 11cc5a07 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5a09 pop ebp */
  EBP = (pop32());
  /* 11cc5a0a ret 8 */
  ESPCHK(0x11cc5930u, _esp0);
  ESP += 12; return;
}

/* FUN_10005a50 @ 0x11cc5a50 (47 bytes, 22 insns) */
void f_11cc5a50(void) {
  FTRACE(0x11cc5a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5a51 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5a57 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5a58 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5a69 pop ecx */
  ECX = (pop32());
  /* 11cc5a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5a6d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5a70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5a73 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11cc5a76 pop edi */
  EDI = (pop32());
  /* 11cc5a77 pop esi */
  ESI = (pop32());
  /* 11cc5a78 pop ebx */
  EBX = (pop32());
  /* 11cc5a79 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5a7b pop ebp */
  EBP = (pop32());
  /* 11cc5a7c ret 4 */
  ESPCHK(0x11cc5a50u, _esp0);
  ESP += 8; return;
}

/* FUN_10005a90 @ 0x11cc5a90 (47 bytes, 22 insns) */
void f_11cc5a90(void) {
  FTRACE(0x11cc5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5a90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5a91 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5a93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5a96 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5a97 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5a98 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5a99 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5a9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5a9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5aa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5aa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5aa9 pop ecx */
  ECX = (pop32());
  /* 11cc5aaa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5aad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5ab0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5ab3 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11cc5ab6 pop edi */
  EDI = (pop32());
  /* 11cc5ab7 pop esi */
  ESI = (pop32());
  /* 11cc5ab8 pop ebx */
  EBX = (pop32());
  /* 11cc5ab9 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5abb pop ebp */
  EBP = (pop32());
  /* 11cc5abc ret 4 */
  ESPCHK(0x11cc5a90u, _esp0);
  ESP += 8; return;
}

/* FUN_10005ad0 @ 0x11cc5ad0 (131 bytes, 48 insns) */
void f_11cc5ad0(void) {
  FTRACE(0x11cc5ad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5ad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5ad1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5ad3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5ad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5ad7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5ad8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5ad9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5ada lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11cc5add mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11cc5ae2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5ae7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5ae9 pop ecx */
  ECX = (pop32());
  /* 11cc5aea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5aed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc5af4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cc5afb jmp 0x11cc5b06 */
  goto L_11cc5b06;
L_11cc5afd:;
  /* 11cc5afd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cc5b00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5b03 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11cc5b06:;
  /* 11cc5b06 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5b0a jge 0x11cc5b39 */
  if ((C.sf==C.of)) goto L_11cc5b39;
  /* 11cc5b0c mov esi, esp */
  ESI = (ESP);
  /* 11cc5b0e mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 11cc5b11 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5b12 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5b15 push edx */
  push32((uint32_t)(EDX));
  /* 11cc5b16 call dword ptr [0x11d014d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014d0))), 0x11cc5b1cu);
  /* 11cc5b1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5b1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5b21 call 0x11cc9200 */
  push32(0x11cc5b26u); f_11cc9200();
  /* 11cc5b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc5b28 jle 0x11cc5b37 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc5b37;
  /* 11cc5b2a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cc5b2d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc5b30 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_11cc5b37:;
  /* 11cc5b37 jmp 0x11cc5afd */
  goto L_11cc5afd;
L_11cc5b39:;
  /* 11cc5b39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5b3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc5b3f mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11cc5b42 pop edi */
  EDI = (pop32());
  /* 11cc5b43 pop esi */
  ESI = (pop32());
  /* 11cc5b44 pop ebx */
  EBX = (pop32());
  /* 11cc5b45 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5b48 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5b4a call 0x11cc9200 */
  push32(0x11cc5b4fu); f_11cc9200();
  /* 11cc5b4f mov esp, ebp */
  ESP = (EBP);
  /* 11cc5b51 pop ebp */
  EBP = (pop32());
  /* 11cc5b52 ret  */
  ESPCHK(0x11cc5ad0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005b80 @ 0x11cc5b80 (47 bytes, 22 insns) */
void f_11cc5b80(void) {
  FTRACE(0x11cc5b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5b81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5b83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5b86 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5b87 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5b88 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5b8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5b8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5b99 pop ecx */
  ECX = (pop32());
  /* 11cc5b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5ba0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5ba3 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11cc5ba6 pop edi */
  EDI = (pop32());
  /* 11cc5ba7 pop esi */
  ESI = (pop32());
  /* 11cc5ba8 pop ebx */
  EBX = (pop32());
  /* 11cc5ba9 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5bab pop ebp */
  EBP = (pop32());
  /* 11cc5bac ret 4 */
  ESPCHK(0x11cc5b80u, _esp0);
  ESP += 8; return;
}

/* FUN_10005bc0 @ 0x11cc5bc0 (65 bytes, 28 insns) */
void f_11cc5bc0(void) {
  FTRACE(0x11cc5bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5bc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5bc7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5bc8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5bca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5bcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5bd9 pop ecx */
  ECX = (pop32());
  /* 11cc5bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5be0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5be3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 11cc5be6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5be9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc5bec mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 11cc5bef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5bf2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc5bf5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11cc5bf8 pop edi */
  EDI = (pop32());
  /* 11cc5bf9 pop esi */
  ESI = (pop32());
  /* 11cc5bfa pop ebx */
  EBX = (pop32());
  /* 11cc5bfb mov esp, ebp */
  ESP = (EBP);
  /* 11cc5bfd pop ebp */
  EBP = (pop32());
  /* 11cc5bfe ret 0xc */
  ESPCHK(0x11cc5bc0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005c20 @ 0x11cc5c20 (166 bytes, 58 insns) */
void f_11cc5c20(void) {
  FTRACE(0x11cc5c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5c21 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5c23 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5c26 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5c27 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5c28 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5c29 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5c2a lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 11cc5c2d mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 11cc5c32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5c37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5c39 pop ecx */
  ECX = (pop32());
  /* 11cc5c3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5c3d mov esi, esp */
  ESI = (ESP);
  /* 11cc5c3f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc5c42 push eax */
  push32((uint32_t)(EAX));
  /* 11cc5c43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5c45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5c48 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5c49 call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc5c4fu);
  /* 11cc5c4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5c52 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5c54 call 0x11cc9200 */
  push32(0x11cc5c59u); f_11cc9200();
  /* 11cc5c59 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cc5c5c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cc5c62 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5c65 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11cc5c68 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc5c6d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5c6f jge 0x11cc5c7d */
  if ((C.sf==C.of)) goto L_11cc5c7d;
  /* 11cc5c71 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 11cc5c75 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cc5c79 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11cc5c7d:;
  /* 11cc5c7d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cc5c80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cc5c86 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5c89 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11cc5c8c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc5c91 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5c93 jl 0x11cc5c9d */
  if ((C.sf!=C.of)) goto L_11cc5c9d;
  /* 11cc5c95 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 11cc5c99 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_11cc5c9d:;
  /* 11cc5c9d mov esi, esp */
  ESI = (ESP);
  /* 11cc5c9f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11cc5ca2 push edx */
  push32((uint32_t)(EDX));
  /* 11cc5ca3 call dword ptr [0x11d014b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014b0))), 0x11cc5ca9u);
  /* 11cc5ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5cac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5cae call 0x11cc9200 */
  push32(0x11cc5cb3u); f_11cc9200();
  /* 11cc5cb3 pop edi */
  EDI = (pop32());
  /* 11cc5cb4 pop esi */
  ESI = (pop32());
  /* 11cc5cb5 pop ebx */
  EBX = (pop32());
  /* 11cc5cb6 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5cb9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5cbb call 0x11cc9200 */
  push32(0x11cc5cc0u); f_11cc9200();
  /* 11cc5cc0 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5cc2 pop ebp */
  EBP = (pop32());
  /* 11cc5cc3 ret 4 */
  ESPCHK(0x11cc5c20u, _esp0);
  ESP += 8; return;
}

/* FUN_10005cf0 @ 0x11cc5cf0 (114 bytes, 42 insns) */
void f_11cc5cf0(void) {
  FTRACE(0x11cc5cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5cf1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5cf3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5cf6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5cf7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5cf8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5cf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5cfa lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11cc5cfd mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11cc5d02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5d07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5d09 pop ecx */
  ECX = (pop32());
  /* 11cc5d0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5d0d mov esi, esp */
  ESI = (ESP);
  /* 11cc5d0f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc5d12 push eax */
  push32((uint32_t)(EAX));
  /* 11cc5d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5d15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5d18 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5d19 call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc5d1fu);
  /* 11cc5d1f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5d22 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5d24 call 0x11cc9200 */
  push32(0x11cc5d29u); f_11cc9200();
  /* 11cc5d29 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11cc5d2c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cc5d32 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11cc5d35 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11cc5d38 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 11cc5d3b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc5d40 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11cc5d43 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11cc5d46 fmul dword ptr [0x11cf931c] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x11cf931c)));
  /* 11cc5d4c call 0x11cc94ec */
  push32(0x11cc5d51u); f_11cc94ec();
  /* 11cc5d51 pop edi */
  EDI = (pop32());
  /* 11cc5d52 pop esi */
  ESI = (pop32());
  /* 11cc5d53 pop ebx */
  EBX = (pop32());
  /* 11cc5d54 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5d57 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5d59 call 0x11cc9200 */
  push32(0x11cc5d5eu); f_11cc9200();
  /* 11cc5d5e mov esp, ebp */
  ESP = (EBP);
  /* 11cc5d60 pop ebp */
  EBP = (pop32());
  /* 11cc5d61 ret  */
  ESPCHK(0x11cc5cf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005d80 @ 0x11cc5d80 (94 bytes, 37 insns) */
void f_11cc5d80(void) {
  FTRACE(0x11cc5d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5d81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5d83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5d87 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5d88 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5d8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5d8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5d92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5d97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5d99 pop ecx */
  ECX = (pop32());
  /* 11cc5d9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5d9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5da0 call 0x11cc1163 */
  push32(0x11cc5da5u); f_11cc1163();
  /* 11cc5da5 mov esi, esp */
  ESI = (ESP);
  /* 11cc5da7 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11cc5daa push eax */
  push32((uint32_t)(EAX));
  /* 11cc5dab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5dae mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11cc5db1 push edx */
  push32((uint32_t)(EDX));
  /* 11cc5db2 call dword ptr [0x11d014b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014b8))), 0x11cc5db8u);
  /* 11cc5db8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5dbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5dbd call 0x11cc9200 */
  push32(0x11cc5dc2u); f_11cc9200();
  /* 11cc5dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5dc5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5dc8 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11cc5dcb pop edi */
  EDI = (pop32());
  /* 11cc5dcc pop esi */
  ESI = (pop32());
  /* 11cc5dcd pop ebx */
  EBX = (pop32());
  /* 11cc5dce add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5dd1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5dd3 call 0x11cc9200 */
  push32(0x11cc5dd8u); f_11cc9200();
  /* 11cc5dd8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5dda pop ebp */
  EBP = (pop32());
  /* 11cc5ddb ret 4 */
  ESPCHK(0x11cc5d80u, _esp0);
  ESP += 8; return;
}

/* FUN_10005e00 @ 0x11cc5e00 (39 bytes, 20 insns) */
void f_11cc5e00(void) {
  FTRACE(0x11cc5e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5e01 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5e03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5e07 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5e08 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5e0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5e0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5e19 pop ecx */
  ECX = (pop32());
  /* 11cc5e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5e20 pop edi */
  EDI = (pop32());
  /* 11cc5e21 pop esi */
  ESI = (pop32());
  /* 11cc5e22 pop ebx */
  EBX = (pop32());
  /* 11cc5e23 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5e25 pop ebp */
  EBP = (pop32());
  /* 11cc5e26 ret  */
  ESPCHK(0x11cc5e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e30 @ 0x11cc5e30 (98 bytes, 39 insns) */
void f_11cc5e30(void) {
  FTRACE(0x11cc5e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5e31 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5e33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5e36 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5e37 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5e38 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5e3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5e3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5e42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5e47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5e49 pop ecx */
  ECX = (pop32());
  /* 11cc5e4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5e4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5e50 call 0x11cc1163 */
  push32(0x11cc5e55u); f_11cc1163();
  /* 11cc5e55 mov esi, esp */
  ESI = (ESP);
  /* 11cc5e57 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5e59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5e5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5e5e push eax */
  push32((uint32_t)(EAX));
  /* 11cc5e5f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5e62 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11cc5e65 push edx */
  push32((uint32_t)(EDX));
  /* 11cc5e66 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc5e6cu);
  /* 11cc5e6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5e6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5e71 call 0x11cc9200 */
  push32(0x11cc5e76u); f_11cc9200();
  /* 11cc5e76 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5e79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5e7c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11cc5e7f pop edi */
  EDI = (pop32());
  /* 11cc5e80 pop esi */
  ESI = (pop32());
  /* 11cc5e81 pop ebx */
  EBX = (pop32());
  /* 11cc5e82 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5e85 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5e87 call 0x11cc9200 */
  push32(0x11cc5e8cu); f_11cc9200();
  /* 11cc5e8c mov esp, ebp */
  ESP = (EBP);
  /* 11cc5e8e pop ebp */
  EBP = (pop32());
  /* 11cc5e8f ret 4 */
  ESPCHK(0x11cc5e30u, _esp0);
  ESP += 8; return;
}

/* FUN_10005eb0 @ 0x11cc5eb0 (87 bytes, 35 insns) */
void f_11cc5eb0(void) {
  FTRACE(0x11cc5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5eb1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5eb7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5eb8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5eba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc5ebd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc5ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5ec9 pop ecx */
  ECX = (pop32());
  /* 11cc5eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5ecd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5ed0 call 0x11cc1163 */
  push32(0x11cc5ed5u); f_11cc1163();
  /* 11cc5ed5 mov esi, esp */
  ESI = (ESP);
  /* 11cc5ed7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc5ed9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5edc push eax */
  push32((uint32_t)(EAX));
  /* 11cc5edd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5ee0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 11cc5ee3 push edx */
  push32((uint32_t)(EDX));
  /* 11cc5ee4 call dword ptr [0x11d014b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014b4))), 0x11cc5eeau);
  /* 11cc5eea add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5eed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5eef call 0x11cc9200 */
  push32(0x11cc5ef4u); f_11cc9200();
  /* 11cc5ef4 pop edi */
  EDI = (pop32());
  /* 11cc5ef5 pop esi */
  ESI = (pop32());
  /* 11cc5ef6 pop ebx */
  EBX = (pop32());
  /* 11cc5ef7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5efa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5efc call 0x11cc9200 */
  push32(0x11cc5f01u); f_11cc9200();
  /* 11cc5f01 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5f03 pop ebp */
  EBP = (pop32());
  /* 11cc5f04 ret 4 */
  ESPCHK(0x11cc5eb0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005f20 @ 0x11cc5f20 (90 bytes, 37 insns) */
void f_11cc5f20(void) {
  FTRACE(0x11cc5f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5f21 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5f23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5f26 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5f27 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5f28 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5f29 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5f2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc5f2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc5f32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5f37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5f39 pop ecx */
  ECX = (pop32());
  /* 11cc5f3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5f3d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc5f41 mov esi, esp */
  ESI = (ESP);
  /* 11cc5f43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5f46 push eax */
  push32((uint32_t)(EAX));
  /* 11cc5f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5f4a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cc5f4d push edx */
  push32((uint32_t)(EDX));
  /* 11cc5f4e call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc5f54u);
  /* 11cc5f54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5f57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5f59 call 0x11cc9200 */
  push32(0x11cc5f5eu); f_11cc9200();
  /* 11cc5f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc5f60 jle 0x11cc5f66 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc5f66;
  /* 11cc5f62 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc5f66:;
  /* 11cc5f66 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc5f69 pop edi */
  EDI = (pop32());
  /* 11cc5f6a pop esi */
  ESI = (pop32());
  /* 11cc5f6b pop ebx */
  EBX = (pop32());
  /* 11cc5f6c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5f6f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5f71 call 0x11cc9200 */
  push32(0x11cc5f76u); f_11cc9200();
  /* 11cc5f76 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5f78 pop ebp */
  EBP = (pop32());
  /* 11cc5f79 ret  */
  ESPCHK(0x11cc5f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x11cc5f90 (89 bytes, 36 insns) */
void f_11cc5f90(void) {
  FTRACE(0x11cc5f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc5f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc5f91 mov ebp, esp */
  EBP = (ESP);
  /* 11cc5f93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc5f96 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc5f97 push esi */
  push32((uint32_t)(ESI));
  /* 11cc5f98 push edi */
  push32((uint32_t)(EDI));
  /* 11cc5f99 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5f9a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc5f9d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc5fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc5fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc5fa9 pop ecx */
  ECX = (pop32());
  /* 11cc5faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc5fad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc5fb1 mov esi, esp */
  ESI = (ESP);
  /* 11cc5fb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc5fb6 push eax */
  push32((uint32_t)(EAX));
  /* 11cc5fb7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc5fba push ecx */
  push32((uint32_t)(ECX));
  /* 11cc5fbb call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc5fc1u);
  /* 11cc5fc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5fc6 call 0x11cc9200 */
  push32(0x11cc5fcbu); f_11cc9200();
  /* 11cc5fcb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc5fcd jle 0x11cc5fd3 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc5fd3;
  /* 11cc5fcf mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc5fd3:;
  /* 11cc5fd3 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc5fd6 pop edi */
  EDI = (pop32());
  /* 11cc5fd7 pop esi */
  ESI = (pop32());
  /* 11cc5fd8 pop ebx */
  EBX = (pop32());
  /* 11cc5fd9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc5fdc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc5fde call 0x11cc9200 */
  push32(0x11cc5fe3u); f_11cc9200();
  /* 11cc5fe3 mov esp, ebp */
  ESP = (EBP);
  /* 11cc5fe5 pop ebp */
  EBP = (pop32());
  /* 11cc5fe6 ret 4 */
  ESPCHK(0x11cc5f90u, _esp0);
  ESP += 8; return;
}

/* FUN_10006000 @ 0x11cc6000 (47 bytes, 22 insns) */
void f_11cc6000(void) {
  FTRACE(0x11cc6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6000 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6001 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6003 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6006 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6007 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6008 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6009 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc600a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc600d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6019 pop ecx */
  ECX = (pop32());
  /* 11cc601a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc601d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6020 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6023 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 11cc6026 pop edi */
  EDI = (pop32());
  /* 11cc6027 pop esi */
  ESI = (pop32());
  /* 11cc6028 pop ebx */
  EBX = (pop32());
  /* 11cc6029 mov esp, ebp */
  ESP = (EBP);
  /* 11cc602b pop ebp */
  EBP = (pop32());
  /* 11cc602c ret 4 */
  ESPCHK(0x11cc6000u, _esp0);
  ESP += 8; return;
}

/* FUN_10006040 @ 0x11cc6040 (81 bytes, 33 insns) */
void f_11cc6040(void) {
  FTRACE(0x11cc6040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6040 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6041 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6043 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6046 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6047 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6048 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6049 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc604a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc604d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6052 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6057 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6059 pop ecx */
  ECX = (pop32());
  /* 11cc605a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc605d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6060 call 0x11cc1163 */
  push32(0x11cc6065u); f_11cc1163();
  /* 11cc6065 mov esi, esp */
  ESI = (ESP);
  /* 11cc6067 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc6069 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc606c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11cc606f push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6070 call dword ptr [0x11d01530] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01530))), 0x11cc6076u);
  /* 11cc6076 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6079 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc607b call 0x11cc9200 */
  push32(0x11cc6080u); f_11cc9200();
  /* 11cc6080 pop edi */
  EDI = (pop32());
  /* 11cc6081 pop esi */
  ESI = (pop32());
  /* 11cc6082 pop ebx */
  EBX = (pop32());
  /* 11cc6083 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6086 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6088 call 0x11cc9200 */
  push32(0x11cc608du); f_11cc9200();
  /* 11cc608d mov esp, ebp */
  ESP = (EBP);
  /* 11cc608f pop ebp */
  EBP = (pop32());
  /* 11cc6090 ret  */
  ESPCHK(0x11cc6040u, _esp0);
  ESP += 4; return;
}

/* FUN_100060b0 @ 0x11cc60b0 (99 bytes, 38 insns) */
void f_11cc60b0(void) {
  FTRACE(0x11cc60b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc60b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc60b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc60b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc60b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc60b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc60b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc60b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc60ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc60bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc60c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc60c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc60c9 pop ecx */
  ECX = (pop32());
  /* 11cc60ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc60cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc60d0 call 0x11cc1028 */
  push32(0x11cc60d5u); f_11cc1028();
  /* 11cc60d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc60da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc60dc je 0x11cc6102 */
  if (C.zf) goto L_11cc6102;
  /* 11cc60de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc60e1 call 0x11cc121c */
  push32(0x11cc60e6u); f_11cc121c();
  /* 11cc60e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc60e9 call 0x11cc1096 */
  push32(0x11cc60eeu); f_11cc1096();
  /* 11cc60ee cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc60f1 jge 0x11cc6102 */
  if ((C.sf==C.of)) goto L_11cc6102;
  /* 11cc60f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc60f6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11cc60f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc60fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc60fd call 0x11cc11c7 */
  push32(0x11cc6102u); f_11cc11c7();
L_11cc6102:;
  /* 11cc6102 pop edi */
  EDI = (pop32());
  /* 11cc6103 pop esi */
  ESI = (pop32());
  /* 11cc6104 pop ebx */
  EBX = (pop32());
  /* 11cc6105 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6108 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc610a call 0x11cc9200 */
  push32(0x11cc610fu); f_11cc9200();
  /* 11cc610f mov esp, ebp */
  ESP = (EBP);
  /* 11cc6111 pop ebp */
  EBP = (pop32());
  /* 11cc6112 ret  */
  ESPCHK(0x11cc60b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006130 @ 0x11cc6130 (76 bytes, 32 insns) */
void f_11cc6130(void) {
  FTRACE(0x11cc6130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6130 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6131 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6133 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6136 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6137 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6138 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6139 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc613a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc613d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6142 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6147 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6149 pop ecx */
  ECX = (pop32());
  /* 11cc614a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc614d mov esi, esp */
  ESI = (ESP);
  /* 11cc614f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6151 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6154 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6155 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6158 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6159 call dword ptr [0x11d01538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01538))), 0x11cc615fu);
  /* 11cc615f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6162 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6164 call 0x11cc9200 */
  push32(0x11cc6169u); f_11cc9200();
  /* 11cc6169 pop edi */
  EDI = (pop32());
  /* 11cc616a pop esi */
  ESI = (pop32());
  /* 11cc616b pop ebx */
  EBX = (pop32());
  /* 11cc616c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc616f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6171 call 0x11cc9200 */
  push32(0x11cc6176u); f_11cc9200();
  /* 11cc6176 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6178 pop ebp */
  EBP = (pop32());
  /* 11cc6179 ret 4 */
  ESPCHK(0x11cc6130u, _esp0);
  ESP += 8; return;
}

/* FUN_10006190 @ 0x11cc6190 (95 bytes, 37 insns) */
void f_11cc6190(void) {
  FTRACE(0x11cc6190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6190 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6191 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6193 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6196 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6197 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6198 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6199 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc619a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc619d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc61a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc61a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc61a9 pop ecx */
  ECX = (pop32());
  /* 11cc61aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc61ad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc61b1 mov esi, esp */
  ESI = (ESP);
  /* 11cc61b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc61b5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11cc61ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc61bd call 0x11cc1262 */
  push32(0x11cc61c2u); f_11cc1262();
  /* 11cc61c2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc61c3 call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc61c9u);
  /* 11cc61c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc61cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc61ce call 0x11cc9200 */
  push32(0x11cc61d3u); f_11cc9200();
  /* 11cc61d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc61d5 jle 0x11cc61db */
  if ((C.zf||C.sf!=C.of)) goto L_11cc61db;
  /* 11cc61d7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc61db:;
  /* 11cc61db mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc61de pop edi */
  EDI = (pop32());
  /* 11cc61df pop esi */
  ESI = (pop32());
  /* 11cc61e0 pop ebx */
  EBX = (pop32());
  /* 11cc61e1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc61e4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc61e6 call 0x11cc9200 */
  push32(0x11cc61ebu); f_11cc9200();
  /* 11cc61eb mov esp, ebp */
  ESP = (EBP);
  /* 11cc61ed pop ebp */
  EBP = (pop32());
  /* 11cc61ee ret  */
  ESPCHK(0x11cc6190u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x11cc6210 (47 bytes, 22 insns) */
void f_11cc6210(void) {
  FTRACE(0x11cc6210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6210 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6211 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6216 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6217 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6218 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6219 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc621a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc621d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6229 pop ecx */
  ECX = (pop32());
  /* 11cc622a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc622d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6230 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6233 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 11cc6236 pop edi */
  EDI = (pop32());
  /* 11cc6237 pop esi */
  ESI = (pop32());
  /* 11cc6238 pop ebx */
  EBX = (pop32());
  /* 11cc6239 mov esp, ebp */
  ESP = (EBP);
  /* 11cc623b pop ebp */
  EBP = (pop32());
  /* 11cc623c ret 4 */
  ESPCHK(0x11cc6210u, _esp0);
  ESP += 8; return;
}

/* FUN_10006250 @ 0x11cc6250 (64 bytes, 27 insns) */
void f_11cc6250(void) {
  FTRACE(0x11cc6250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6250 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6251 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6253 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6256 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6257 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6258 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6259 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc625a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc625d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6262 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6267 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6269 pop ecx */
  ECX = (pop32());
  /* 11cc626a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc626d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6270 call 0x11cc11a9 */
  push32(0x11cc6275u); f_11cc11a9();
  /* 11cc6275 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6278 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11cc627c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc627f pop edi */
  EDI = (pop32());
  /* 11cc6280 pop esi */
  ESI = (pop32());
  /* 11cc6281 pop ebx */
  EBX = (pop32());
  /* 11cc6282 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6285 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6287 call 0x11cc9200 */
  push32(0x11cc628cu); f_11cc9200();
  /* 11cc628c mov esp, ebp */
  ESP = (EBP);
  /* 11cc628e pop ebp */
  EBP = (pop32());
  /* 11cc628f ret  */
  ESPCHK(0x11cc6250u, _esp0);
  ESP += 4; return;
}

/* FUN_100062a0 @ 0x11cc62a0 (57 bytes, 25 insns) */
void f_11cc62a0(void) {
  FTRACE(0x11cc62a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc62a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc62a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc62a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc62a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc62a7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc62a8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc62a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc62aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc62ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc62b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc62b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc62b9 pop ecx */
  ECX = (pop32());
  /* 11cc62ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc62bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc62c0 call 0x11cc1226 */
  push32(0x11cc62c5u); f_11cc1226();
  /* 11cc62c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc62c8 pop edi */
  EDI = (pop32());
  /* 11cc62c9 pop esi */
  ESI = (pop32());
  /* 11cc62ca pop ebx */
  EBX = (pop32());
  /* 11cc62cb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc62ce cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc62d0 call 0x11cc9200 */
  push32(0x11cc62d5u); f_11cc9200();
  /* 11cc62d5 mov esp, ebp */
  ESP = (EBP);
  /* 11cc62d7 pop ebp */
  EBP = (pop32());
  /* 11cc62d8 ret  */
  ESPCHK(0x11cc62a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100062f0 @ 0x11cc62f0 (56 bytes, 25 insns) */
void f_11cc62f0(void) {
  FTRACE(0x11cc62f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc62f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc62f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc62f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc62f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc62f7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc62f8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc62f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc62fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc62fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6302 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6307 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6309 pop ecx */
  ECX = (pop32());
  /* 11cc630a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc630d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6310 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6313 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 11cc6316 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc631c mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 11cc631f pop edi */
  EDI = (pop32());
  /* 11cc6320 pop esi */
  ESI = (pop32());
  /* 11cc6321 pop ebx */
  EBX = (pop32());
  /* 11cc6322 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6324 pop ebp */
  EBP = (pop32());
  /* 11cc6325 ret 8 */
  ESPCHK(0x11cc62f0u, _esp0);
  ESP += 12; return;
}

/* FUN_10006340 @ 0x11cc6340 (566 bytes, 177 insns) [1 switch table(s)] */
void f_11cc6340(void) {
  FTRACE(0x11cc6340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6340 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6341 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6343 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6346 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6347 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6348 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6349 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc634a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11cc634d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11cc6352 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6357 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6359 pop ecx */
  ECX = (pop32());
  /* 11cc635a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc635d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6360 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc6362 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 11cc6365 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc6367 je 0x11cc6565 */
  if (C.zf) goto L_11cc6565;
  /* 11cc636d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6370 call 0x11cc1028 */
  push32(0x11cc6375u); f_11cc1028();
  /* 11cc6375 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc637a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc637c je 0x11cc6565 */
  if (C.zf) goto L_11cc6565;
  /* 11cc6382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6385 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6389 je 0x11cc6565 */
  if (C.zf) goto L_11cc6565;
  /* 11cc638f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6392 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6396 je 0x11cc63dd */
  if (C.zf) goto L_11cc63dd;
  /* 11cc6398 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc639b call 0x11cc1096 */
  push32(0x11cc63a0u); f_11cc1096();
  /* 11cc63a0 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc63a3 jge 0x11cc63ad */
  if ((C.sf==C.of)) goto L_11cc63ad;
  /* 11cc63a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc63a8 call 0x11cc1230 */
  push32(0x11cc63adu); f_11cc1230();
L_11cc63ad:;
  /* 11cc63ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc63b0 call 0x11cc1235 */
  push32(0x11cc63b5u); f_11cc1235();
  /* 11cc63b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc63ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc63bc je 0x11cc63d8 */
  if (C.zf) goto L_11cc63d8;
  /* 11cc63be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc63c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc63c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc63c5 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11cc63c8 push eax */
  push32((uint32_t)(EAX));
  /* 11cc63c9 call 0x11cc1258 */
  push32(0x11cc63ceu); f_11cc1258();
  /* 11cc63ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc63d1 mov ecx, eax */
  ECX = (EAX);
  /* 11cc63d3 call 0x11cc11a4 */
  push32(0x11cc63d8u); f_11cc11a4();
L_11cc63d8:;
  /* 11cc63d8 jmp 0x11cc6565 */
  goto L_11cc6565;
L_11cc63dd:;
  /* 11cc63dd mov esi, esp */
  ESI = (ESP);
  /* 11cc63df push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc63e1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 11cc63e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc63e9 call 0x11cc1262 */
  push32(0x11cc63eeu); f_11cc1262();
  /* 11cc63ee push eax */
  push32((uint32_t)(EAX));
  /* 11cc63ef call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc63f5u);
  /* 11cc63f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc63f8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc63fa call 0x11cc9200 */
  push32(0x11cc63ffu); f_11cc9200();
  /* 11cc63ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6401 jle 0x11cc6565 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc6565;
  /* 11cc6407 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc640a cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc640e je 0x11cc6565 */
  if (C.zf) goto L_11cc6565;
  /* 11cc6414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6417 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11cc641a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc641d cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6421 ja 0x11cc64f2 */
  if ((!C.cf&&!C.zf)) goto L_11cc64f2;
  /* 11cc6427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc642a jmp dword ptr [ecx*4 + 0x11cc6576] */
  switch (ECX) {
    case 0: goto L_11cc6431;
    case 1: goto L_11cc6454;
    case 2: goto L_11cc6474;
    case 3: goto L_11cc6494;
    case 4: goto L_11cc64b4;
    case 5: goto L_11cc64d4;
    default: x86_unimpl("switch@0x11cc642a out of table"); return;
  }
L_11cc6431:;
  /* 11cc6431 mov esi, esp */
  ESI = (ESP);
  /* 11cc6433 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6436 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11cc6439 push eax */
  push32((uint32_t)(EAX));
  /* 11cc643a push 0x11cf936c */
  push32((uint32_t)(0x11cf936cu));
  /* 11cc643f call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc6445u);
  /* 11cc6445 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6448 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc644a call 0x11cc9200 */
  push32(0x11cc644fu); f_11cc9200();
  /* 11cc644f jmp 0x11cc64f2 */
  goto L_11cc64f2;
L_11cc6454:;
  /* 11cc6454 mov esi, esp */
  ESI = (ESP);
  /* 11cc6456 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6459 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11cc645c push edx */
  push32((uint32_t)(EDX));
  /* 11cc645d push 0x11cf9360 */
  push32((uint32_t)(0x11cf9360u));
  /* 11cc6462 call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc6468u);
  /* 11cc6468 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc646b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc646d call 0x11cc9200 */
  push32(0x11cc6472u); f_11cc9200();
  /* 11cc6472 jmp 0x11cc64f2 */
  goto L_11cc64f2;
L_11cc6474:;
  /* 11cc6474 mov esi, esp */
  ESI = (ESP);
  /* 11cc6476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6479 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11cc647c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc647d push 0x11cf9354 */
  push32((uint32_t)(0x11cf9354u));
  /* 11cc6482 call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc6488u);
  /* 11cc6488 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc648b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc648d call 0x11cc9200 */
  push32(0x11cc6492u); f_11cc9200();
  /* 11cc6492 jmp 0x11cc64f2 */
  goto L_11cc64f2;
L_11cc6494:;
  /* 11cc6494 mov esi, esp */
  ESI = (ESP);
  /* 11cc6496 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6499 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11cc649c push eax */
  push32((uint32_t)(EAX));
  /* 11cc649d push 0x11cf9348 */
  push32((uint32_t)(0x11cf9348u));
  /* 11cc64a2 call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc64a8u);
  /* 11cc64a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc64ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc64ad call 0x11cc9200 */
  push32(0x11cc64b2u); f_11cc9200();
  /* 11cc64b2 jmp 0x11cc64f2 */
  goto L_11cc64f2;
L_11cc64b4:;
  /* 11cc64b4 mov esi, esp */
  ESI = (ESP);
  /* 11cc64b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc64b9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11cc64bc push edx */
  push32((uint32_t)(EDX));
  /* 11cc64bd push 0x11cf933c */
  push32((uint32_t)(0x11cf933cu));
  /* 11cc64c2 call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc64c8u);
  /* 11cc64c8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc64cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc64cd call 0x11cc9200 */
  push32(0x11cc64d2u); f_11cc9200();
  /* 11cc64d2 jmp 0x11cc64f2 */
  goto L_11cc64f2;
L_11cc64d4:;
  /* 11cc64d4 mov esi, esp */
  ESI = (ESP);
  /* 11cc64d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc64d9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 11cc64dc push ecx */
  push32((uint32_t)(ECX));
  /* 11cc64dd push 0x11cf9330 */
  push32((uint32_t)(0x11cf9330u));
  /* 11cc64e2 call dword ptr [0x11d014ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ac))), 0x11cc64e8u);
  /* 11cc64e8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc64eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc64ed call 0x11cc9200 */
  push32(0x11cc64f2u); f_11cc9200();
L_11cc64f2:;
  /* 11cc64f2 mov esi, esp */
  ESI = (ESP);
  /* 11cc64f4 push 0x11cf9320 */
  push32((uint32_t)(0x11cf9320u));
  /* 11cc64f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc64fb push 0x11cf91d4 */
  push32((uint32_t)(0x11cf91d4u));
  /* 11cc6500 push 7 */
  push32((uint32_t)(0x7u));
  /* 11cc6502 call dword ptr [0x11d0150c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0150c))), 0x11cc6508u);
  /* 11cc6508 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc650b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc650d call 0x11cc9200 */
  push32(0x11cc6512u); f_11cc9200();
  /* 11cc6512 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cc6515 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6519 je 0x11cc6523 */
  if (C.zf) goto L_11cc6523;
  /* 11cc651b cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc651f je 0x11cc652f */
  if (C.zf) goto L_11cc652f;
  /* 11cc6521 jmp 0x11cc6537 */
  goto L_11cc6537;
L_11cc6523:;
  /* 11cc6523 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6528 call 0x11cc10fa */
  push32(0x11cc652du); f_11cc10fa();
  /* 11cc652d jmp 0x11cc6537 */
  goto L_11cc6537;
L_11cc652f:;
  /* 11cc652f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6532 call 0x11cc112c */
  push32(0x11cc6537u); f_11cc112c();
L_11cc6537:;
  /* 11cc6537 mov esi, esp */
  ESI = (ESP);
  /* 11cc6539 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc653c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11cc653f push eax */
  push32((uint32_t)(EAX));
  /* 11cc6540 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6543 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11cc6546 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6547 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6549 call dword ptr [0x11d014a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014a4))), 0x11cc654fu);
  /* 11cc654f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6552 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6554 call 0x11cc9200 */
  push32(0x11cc6559u); f_11cc9200();
  /* 11cc6559 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc655b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc655d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6560 call 0x11cc1186 */
  push32(0x11cc6565u); f_11cc1186();
L_11cc6565:;
  /* 11cc6565 pop edi */
  EDI = (pop32());
  /* 11cc6566 pop esi */
  ESI = (pop32());
  /* 11cc6567 pop ebx */
  EBX = (pop32());
  /* 11cc6568 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc656b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc656d call 0x11cc9200 */
  push32(0x11cc6572u); f_11cc9200();
  /* 11cc6572 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6574 pop ebp */
  EBP = (pop32());
  /* 11cc6575 ret  */
  ESPCHK(0x11cc6340u, _esp0);
  ESP += 4; return;
}

/* FUN_10006630 @ 0x11cc6630 (112 bytes, 43 insns) */
void f_11cc6630(void) {
  FTRACE(0x11cc6630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6630 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6631 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6633 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6636 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6637 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6638 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6639 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc663a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc663d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6642 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6647 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6649 pop ecx */
  ECX = (pop32());
  /* 11cc664a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc664d push 6 */
  push32((uint32_t)(0x6u));
  /* 11cc664f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6652 call 0x11cc10fa */
  push32(0x11cc6657u); f_11cc10fa();
  /* 11cc6657 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc665a call 0x11cc1163 */
  push32(0x11cc665fu); f_11cc1163();
  /* 11cc665f mov esi, esp */
  ESI = (ESP);
  /* 11cc6661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6663 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6665 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11cc6667 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc666a call 0x11cc1262 */
  push32(0x11cc666fu); f_11cc1262();
  /* 11cc666f push eax */
  push32((uint32_t)(EAX));
  /* 11cc6670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6673 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 11cc6676 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6677 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc667du);
  /* 11cc667d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6680 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6682 call 0x11cc9200 */
  push32(0x11cc6687u); f_11cc9200();
  /* 11cc6687 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc668a call 0x11cc124e */
  push32(0x11cc668fu); f_11cc124e();
  /* 11cc668f pop edi */
  EDI = (pop32());
  /* 11cc6690 pop esi */
  ESI = (pop32());
  /* 11cc6691 pop ebx */
  EBX = (pop32());
  /* 11cc6692 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6695 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6697 call 0x11cc9200 */
  push32(0x11cc669cu); f_11cc9200();
  /* 11cc669c mov esp, ebp */
  ESP = (EBP);
  /* 11cc669e pop ebp */
  EBP = (pop32());
  /* 11cc669f ret  */
  ESPCHK(0x11cc6630u, _esp0);
  ESP += 4; return;
}

/* FUN_100066c0 @ 0x11cc66c0 (75 bytes, 32 insns) */
void f_11cc66c0(void) {
  FTRACE(0x11cc66c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc66c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc66c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc66c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc66c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc66c7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc66c8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc66c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc66ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc66cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc66d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc66d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc66d9 pop ecx */
  ECX = (pop32());
  /* 11cc66da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc66dd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc66e0 push eax */
  push32((uint32_t)(EAX));
  /* 11cc66e1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc66e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc66e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc66e8 push edx */
  push32((uint32_t)(EDX));
  /* 11cc66e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc66ec call 0x11cc101e */
  push32(0x11cc66f1u); f_11cc101e();
  /* 11cc66f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc66f4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 11cc66f8 pop edi */
  EDI = (pop32());
  /* 11cc66f9 pop esi */
  ESI = (pop32());
  /* 11cc66fa pop ebx */
  EBX = (pop32());
  /* 11cc66fb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc66fe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6700 call 0x11cc9200 */
  push32(0x11cc6705u); f_11cc9200();
  /* 11cc6705 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6707 pop ebp */
  EBP = (pop32());
  /* 11cc6708 ret 0xc */
  ESPCHK(0x11cc66c0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006720 @ 0x11cc6720 (95 bytes, 37 insns) */
void f_11cc6720(void) {
  FTRACE(0x11cc6720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6720 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6721 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6723 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6726 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6727 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6728 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6729 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc672a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc672d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc6732 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6737 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6739 pop ecx */
  ECX = (pop32());
  /* 11cc673a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc673d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc6741 mov esi, esp */
  ESI = (ESP);
  /* 11cc6743 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6745 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 11cc674a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc674d call 0x11cc1262 */
  push32(0x11cc6752u); f_11cc1262();
  /* 11cc6752 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6753 call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc6759u);
  /* 11cc6759 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc675c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc675e call 0x11cc9200 */
  push32(0x11cc6763u); f_11cc9200();
  /* 11cc6763 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6765 jle 0x11cc676b */
  if ((C.zf||C.sf!=C.of)) goto L_11cc676b;
  /* 11cc6767 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc676b:;
  /* 11cc676b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc676e pop edi */
  EDI = (pop32());
  /* 11cc676f pop esi */
  ESI = (pop32());
  /* 11cc6770 pop ebx */
  EBX = (pop32());
  /* 11cc6771 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6774 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6776 call 0x11cc9200 */
  push32(0x11cc677bu); f_11cc9200();
  /* 11cc677b mov esp, ebp */
  ESP = (EBP);
  /* 11cc677d pop ebp */
  EBP = (pop32());
  /* 11cc677e ret  */
  ESPCHK(0x11cc6720u, _esp0);
  ESP += 4; return;
}

/* FUN_100067a0 @ 0x11cc67a0 (78 bytes, 28 insns) */
void f_11cc67a0(void) {
  FTRACE(0x11cc67a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc67a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc67a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc67a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc67a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc67a7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc67a8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc67a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc67aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc67ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc67b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc67b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc67b9 pop ecx */
  ECX = (pop32());
  /* 11cc67ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc67bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc67c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc67c3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cc67c6 mov edx, dword ptr [0x11cff3f4] */
  EDX = (r32((uint32_t)(0x11cff3f4)));
  /* 11cc67cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc67cf mov dword ptr [edx*4 + 0x11cff3a4], eax */
  w32((uint32_t)(EDX*4 + 0x11cff3a4), (EAX));
  /* 11cc67d6 mov ecx, dword ptr [0x11cff3f4] */
  ECX = (r32((uint32_t)(0x11cff3f4)));
  /* 11cc67dc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc67df mov dword ptr [0x11cff3f4], ecx */
  w32((uint32_t)(0x11cff3f4), (ECX));
  /* 11cc67e5 pop edi */
  EDI = (pop32());
  /* 11cc67e6 pop esi */
  ESI = (pop32());
  /* 11cc67e7 pop ebx */
  EBX = (pop32());
  /* 11cc67e8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc67ea pop ebp */
  EBP = (pop32());
  /* 11cc67eb ret 4 */
  ESPCHK(0x11cc67a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006810 @ 0x11cc6810 (128 bytes, 44 insns) */
void f_11cc6810(void) {
  FTRACE(0x11cc6810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6810 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6811 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6813 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6816 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6817 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6818 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6819 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc681c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc6821 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6826 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6828 mov eax, dword ptr [0x11cff3a4] */
  EAX = (r32((uint32_t)(0x11cff3a4)));
  /* 11cc682d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc6830 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc6837 jmp 0x11cc6842 */
  goto L_11cc6842;
L_11cc6839:;
  /* 11cc6839 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc683c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc683f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11cc6842:;
  /* 11cc6842 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc6845 cmp edx, dword ptr [0x11cff3f4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11cff3f4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc684b jge 0x11cc687c */
  if ((C.sf==C.of)) goto L_11cc687c;
  /* 11cc684d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc6850 mov ecx, dword ptr [eax*4 + 0x11cff3a4] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11cff3a4)));
  /* 11cc6857 call 0x11cc1109 */
  push32(0x11cc685cu); f_11cc1109();
  /* 11cc685c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc685e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cc6861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc6866 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11cc6869 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc686b jne 0x11cc687a */
  if (!C.zf) goto L_11cc687a;
  /* 11cc686d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc6870 mov edx, dword ptr [ecx*4 + 0x11cff3a4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11cff3a4)));
  /* 11cc6877 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11cc687a:;
  /* 11cc687a jmp 0x11cc6839 */
  goto L_11cc6839;
L_11cc687c:;
  /* 11cc687c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc687f pop edi */
  EDI = (pop32());
  /* 11cc6880 pop esi */
  ESI = (pop32());
  /* 11cc6881 pop ebx */
  EBX = (pop32());
  /* 11cc6882 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6885 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6887 call 0x11cc9200 */
  push32(0x11cc688cu); f_11cc9200();
  /* 11cc688c mov esp, ebp */
  ESP = (EBP);
  /* 11cc688e pop ebp */
  EBP = (pop32());
  /* 11cc688f ret  */
  ESPCHK(0x11cc6810u, _esp0);
  ESP += 4; return;
}

/* FUN_100068b0 @ 0x11cc68b0 (47 bytes, 22 insns) */
void f_11cc68b0(void) {
  FTRACE(0x11cc68b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc68b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc68b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc68b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc68b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc68b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc68b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc68b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc68ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc68bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc68c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc68c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc68c9 pop ecx */
  ECX = (pop32());
  /* 11cc68ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc68cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc68d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc68d3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11cc68d6 pop edi */
  EDI = (pop32());
  /* 11cc68d7 pop esi */
  ESI = (pop32());
  /* 11cc68d8 pop ebx */
  EBX = (pop32());
  /* 11cc68d9 mov esp, ebp */
  ESP = (EBP);
  /* 11cc68db pop ebp */
  EBP = (pop32());
  /* 11cc68dc ret 4 */
  ESPCHK(0x11cc68b0u, _esp0);
  ESP += 8; return;
}

/* FUN_100068f0 @ 0x11cc68f0 (47 bytes, 22 insns) */
void f_11cc68f0(void) {
  FTRACE(0x11cc68f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc68f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc68f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc68f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc68f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc68f7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc68f8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc68f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc68fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc68fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6902 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6907 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6909 pop ecx */
  ECX = (pop32());
  /* 11cc690a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc690d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6910 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6913 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11cc6916 pop edi */
  EDI = (pop32());
  /* 11cc6917 pop esi */
  ESI = (pop32());
  /* 11cc6918 pop ebx */
  EBX = (pop32());
  /* 11cc6919 mov esp, ebp */
  ESP = (EBP);
  /* 11cc691b pop ebp */
  EBP = (pop32());
  /* 11cc691c ret 4 */
  ESPCHK(0x11cc68f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006930 @ 0x11cc6930 (47 bytes, 22 insns) */
void f_11cc6930(void) {
  FTRACE(0x11cc6930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6930 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6931 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6933 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6936 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6937 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6938 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6939 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc693a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc693d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6942 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6947 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6949 pop ecx */
  ECX = (pop32());
  /* 11cc694a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc694d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6953 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 11cc6956 pop edi */
  EDI = (pop32());
  /* 11cc6957 pop esi */
  ESI = (pop32());
  /* 11cc6958 pop ebx */
  EBX = (pop32());
  /* 11cc6959 mov esp, ebp */
  ESP = (EBP);
  /* 11cc695b pop ebp */
  EBP = (pop32());
  /* 11cc695c ret 4 */
  ESPCHK(0x11cc6930u, _esp0);
  ESP += 8; return;
}

/* FUN_10006970 @ 0x11cc6970 (85 bytes, 35 insns) */
void f_11cc6970(void) {
  FTRACE(0x11cc6970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6970 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6971 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6973 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6976 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6977 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6978 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6979 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc697a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc697d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6982 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6987 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6989 pop ecx */
  ECX = (pop32());
  /* 11cc698a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc698d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6990 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cc6993 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6994 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6997 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11cc699a push eax */
  push32((uint32_t)(EAX));
  /* 11cc699b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc699e call 0x11cc1186 */
  push32(0x11cc69a3u); f_11cc1186();
  /* 11cc69a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc69a6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cc69a9 push edx */
  push32((uint32_t)(EDX));
  /* 11cc69aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc69ad call 0x11cc11c7 */
  push32(0x11cc69b2u); f_11cc11c7();
  /* 11cc69b2 pop edi */
  EDI = (pop32());
  /* 11cc69b3 pop esi */
  ESI = (pop32());
  /* 11cc69b4 pop ebx */
  EBX = (pop32());
  /* 11cc69b5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc69b8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc69ba call 0x11cc9200 */
  push32(0x11cc69bfu); f_11cc9200();
  /* 11cc69bf mov esp, ebp */
  ESP = (EBP);
  /* 11cc69c1 pop ebp */
  EBP = (pop32());
  /* 11cc69c2 ret 4 */
  ESPCHK(0x11cc6970u, _esp0);
  ESP += 8; return;
}

/* FUN_100069e0 @ 0x11cc69e0 (42 bytes, 21 insns) */
void f_11cc69e0(void) {
  FTRACE(0x11cc69e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc69e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc69e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc69e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc69e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc69e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc69e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc69e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc69ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc69ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc69f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc69f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc69f9 pop ecx */
  ECX = (pop32());
  /* 11cc69fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc69fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a00 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc6a03 pop edi */
  EDI = (pop32());
  /* 11cc6a04 pop esi */
  ESI = (pop32());
  /* 11cc6a05 pop ebx */
  EBX = (pop32());
  /* 11cc6a06 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6a08 pop ebp */
  EBP = (pop32());
  /* 11cc6a09 ret  */
  ESPCHK(0x11cc69e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a20 @ 0x11cc6a20 (39 bytes, 20 insns) */
void f_11cc6a20(void) {
  FTRACE(0x11cc6a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6a21 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6a23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6a26 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6a27 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6a28 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6a29 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6a2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6a2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6a32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6a37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6a39 pop ecx */
  ECX = (pop32());
  /* 11cc6a3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6a3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a40 pop edi */
  EDI = (pop32());
  /* 11cc6a41 pop esi */
  ESI = (pop32());
  /* 11cc6a42 pop ebx */
  EBX = (pop32());
  /* 11cc6a43 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6a45 pop ebp */
  EBP = (pop32());
  /* 11cc6a46 ret  */
  ESPCHK(0x11cc6a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a50 @ 0x11cc6a50 (518 bytes, 176 insns) */
void f_11cc6a50(void) {
  FTRACE(0x11cc6a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6a51 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6a57 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6a58 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6a69 pop ecx */
  ECX = (pop32());
  /* 11cc6a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6a6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a70 call 0x11cc1177 */
  push32(0x11cc6a75u); f_11cc1177();
  /* 11cc6a75 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6a77 jle 0x11cc6c45 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc6c45;
  /* 11cc6a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a80 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6a83 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6a86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a89 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6a8c jge 0x11cc6c45 */
  if ((C.sf==C.of)) goto L_11cc6c45;
  /* 11cc6a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a95 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6a98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6a9b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6aa0 jne 0x11cc6b69 */
  if (!C.zf) goto L_11cc6b69;
  /* 11cc6aa6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6aa9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6aac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6aaf mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11cc6ab3 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6ab4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ab7 call 0x11cc10af */
  push32(0x11cc6abcu); f_11cc10af();
  /* 11cc6abc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc6ac1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6ac3 je 0x11cc6af0 */
  if (C.zf) goto L_11cc6af0;
  /* 11cc6ac5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ac8 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cc6acb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ace mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11cc6ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6ad3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ad6 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cc6ad9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6adc mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11cc6ae0 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ae4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6ae7 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6ae8 call 0x11cc105f */
  push32(0x11cc6aedu); f_11cc105f();
  /* 11cc6aed add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cc6af0:;
  /* 11cc6af0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6af3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cc6af6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6af9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 11cc6afd push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b01 call 0x11cc10af */
  push32(0x11cc6b06u); f_11cc10af();
  /* 11cc6b06 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc6b0b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6b0d je 0x11cc6b64 */
  if (C.zf) goto L_11cc6b64;
  /* 11cc6b0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b12 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cc6b15 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b1b mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11cc6b1e mov esi, esp */
  ESI = (ESP);
  /* 11cc6b20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6b22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b25 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b28 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6b29 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc6b2fu);
  /* 11cc6b2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b32 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6b34 call 0x11cc9200 */
  push32(0x11cc6b39u); f_11cc9200();
  /* 11cc6b39 mov esi, esp */
  ESI = (ESP);
  /* 11cc6b3b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6b3d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6b3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b42 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6b45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b48 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 11cc6b4c push eax */
  push32((uint32_t)(EAX));
  /* 11cc6b4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b50 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 11cc6b53 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6b54 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc6b5au);
  /* 11cc6b5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b5d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6b5f call 0x11cc9200 */
  push32(0x11cc6b64u); f_11cc9200();
L_11cc6b64:;
  /* 11cc6b64 jmp 0x11cc6c45 */
  goto L_11cc6c45;
L_11cc6b69:;
  /* 11cc6b69 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b6c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6b6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b72 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6b77 je 0x11cc6b89 */
  if (C.zf) goto L_11cc6b89;
  /* 11cc6b79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b7c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc6b7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b82 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6b87 jne 0x11cc6be0 */
  if (!C.zf) goto L_11cc6be0;
L_11cc6b89:;
  /* 11cc6b89 mov esi, esp */
  ESI = (ESP);
  /* 11cc6b8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6b8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6b90 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b93 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6b94 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc6b9au);
  /* 11cc6b9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6b9d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6b9f call 0x11cc9200 */
  push32(0x11cc6ba4u); f_11cc9200();
  /* 11cc6ba4 mov esi, esp */
  ESI = (ESP);
  /* 11cc6ba6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc6ba8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6baa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bad mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cc6bb0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6bb3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bb6 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 11cc6bb9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bbc mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cc6bbf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bc2 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 11cc6bc6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6bc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bca mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11cc6bcd push eax */
  push32((uint32_t)(EAX));
  /* 11cc6bce call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc6bd4u);
  /* 11cc6bd4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6bd7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6bd9 call 0x11cc9200 */
  push32(0x11cc6bdeu); f_11cc9200();
  /* 11cc6bde jmp 0x11cc6c45 */
  goto L_11cc6c45;
L_11cc6be0:;
  /* 11cc6be0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6be3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11cc6be6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6be9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6bee jne 0x11cc6c45 */
  if (!C.zf) goto L_11cc6c45;
  /* 11cc6bf0 mov esi, esp */
  ESI = (ESP);
  /* 11cc6bf2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6bf4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6bf7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6bfa push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6bfb call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc6c01u);
  /* 11cc6c01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6c04 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6c06 call 0x11cc9200 */
  push32(0x11cc6c0bu); f_11cc9200();
  /* 11cc6c0b mov esi, esp */
  ESI = (ESP);
  /* 11cc6c0d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6c0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6c14 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cc6c17 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6c1a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6c1d mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 11cc6c20 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6c23 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11cc6c26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6c29 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 11cc6c2d push edx */
  push32((uint32_t)(EDX));
  /* 11cc6c2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6c31 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11cc6c34 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6c35 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc6c3bu);
  /* 11cc6c3b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6c40 call 0x11cc9200 */
  push32(0x11cc6c45u); f_11cc9200();
L_11cc6c45:;
  /* 11cc6c45 pop edi */
  EDI = (pop32());
  /* 11cc6c46 pop esi */
  ESI = (pop32());
  /* 11cc6c47 pop ebx */
  EBX = (pop32());
  /* 11cc6c48 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6c4b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6c4d call 0x11cc9200 */
  push32(0x11cc6c52u); f_11cc9200();
  /* 11cc6c52 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6c54 pop ebp */
  EBP = (pop32());
  /* 11cc6c55 ret  */
  ESPCHK(0x11cc6a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ce0 @ 0x11cc6ce0 (38 bytes, 20 insns) */
void f_11cc6ce0(void) {
  FTRACE(0x11cc6ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6ce1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6ce3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6ce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6ce7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6ce8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6ce9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6cea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6ced mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6cf2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6cf7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6cf9 pop ecx */
  ECX = (pop32());
  /* 11cc6cfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6cfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc6cff pop edi */
  EDI = (pop32());
  /* 11cc6d00 pop esi */
  ESI = (pop32());
  /* 11cc6d01 pop ebx */
  EBX = (pop32());
  /* 11cc6d02 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6d04 pop ebp */
  EBP = (pop32());
  /* 11cc6d05 ret  */
  ESPCHK(0x11cc6ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d10 @ 0x11cc6d10 (85 bytes, 34 insns) */
void f_11cc6d10(void) {
  FTRACE(0x11cc6d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6d10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6d11 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6d13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6d16 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6d17 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6d18 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6d19 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6d1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6d1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6d29 pop ecx */
  ECX = (pop32());
  /* 11cc6d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6d2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d30 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11cc6d33 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6d39 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11cc6d3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d40 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cc6d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d46 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc6d49 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 11cc6d4d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d50 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 11cc6d53 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6d56 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6d59 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 11cc6d5c pop edi */
  EDI = (pop32());
  /* 11cc6d5d pop esi */
  ESI = (pop32());
  /* 11cc6d5e pop ebx */
  EBX = (pop32());
  /* 11cc6d5f mov esp, ebp */
  ESP = (EBP);
  /* 11cc6d61 pop ebp */
  EBP = (pop32());
  /* 11cc6d62 ret 8 */
  ESPCHK(0x11cc6d10u, _esp0);
  ESP += 12; return;
}

/* FUN_10006d80 @ 0x11cc6d80 (86 bytes, 33 insns) */
void f_11cc6d80(void) {
  FTRACE(0x11cc6d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6d81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6d83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6d86 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6d87 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6d88 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6d89 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6d8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6d8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6d92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6d97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6d99 pop ecx */
  ECX = (pop32());
  /* 11cc6d9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6d9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6da0 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 11cc6da3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6da9 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 11cc6dad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6db0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cc6db3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6db6 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 11cc6dbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6dc1 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 11cc6dc4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6dc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6dca mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 11cc6dcd pop edi */
  EDI = (pop32());
  /* 11cc6dce pop esi */
  ESI = (pop32());
  /* 11cc6dcf pop ebx */
  EBX = (pop32());
  /* 11cc6dd0 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6dd2 pop ebp */
  EBP = (pop32());
  /* 11cc6dd3 ret 4 */
  ESPCHK(0x11cc6d80u, _esp0);
  ESP += 8; return;
}

/* FUN_10006df0 @ 0x11cc6df0 (119 bytes, 43 insns) */
void f_11cc6df0(void) {
  FTRACE(0x11cc6df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6df1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6df3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6df6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6df7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6df8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6df9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6dfa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6dfd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6e02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6e07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6e09 pop ecx */
  ECX = (pop32());
  /* 11cc6e0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6e0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e10 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6e13 mov esi, esp */
  ESI = (ESP);
  /* 11cc6e15 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6e16 call dword ptr [0x11d01548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01548))), 0x11cc6e1cu);
  /* 11cc6e1c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6e1f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6e21 call 0x11cc9200 */
  push32(0x11cc6e26u); f_11cc9200();
  /* 11cc6e26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6e2c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11cc6e2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e31 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc6e34 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11cc6e37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e3a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 11cc6e41 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e44 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 11cc6e4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6e4e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc6e51 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 11cc6e54 pop edi */
  EDI = (pop32());
  /* 11cc6e55 pop esi */
  ESI = (pop32());
  /* 11cc6e56 pop ebx */
  EBX = (pop32());
  /* 11cc6e57 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6e5a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6e5c call 0x11cc9200 */
  push32(0x11cc6e61u); f_11cc9200();
  /* 11cc6e61 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6e63 pop ebp */
  EBP = (pop32());
  /* 11cc6e64 ret 0xc */
  ESPCHK(0x11cc6df0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006e90 @ 0x11cc6e90 (263 bytes, 93 insns) */
void f_11cc6e90(void) {
  FTRACE(0x11cc6e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6e91 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6e93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6e96 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6e97 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6e98 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6e99 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6e9a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc6e9d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc6ea2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6ea7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6ea9 pop ecx */
  ECX = (pop32());
  /* 11cc6eaa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6ead mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6eb0 call 0x11cc1177 */
  push32(0x11cc6eb5u); f_11cc1177();
  /* 11cc6eb5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc6eb7 jne 0x11cc6f84 */
  if (!C.zf) goto L_11cc6f84;
  /* 11cc6ebd mov esi, esp */
  ESI = (ESP);
  /* 11cc6ebf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6ec2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11cc6ec5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6ec6 call dword ptr [0x11d014ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014ec))), 0x11cc6eccu);
  /* 11cc6ecc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6ecf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6ed1 call 0x11cc9200 */
  push32(0x11cc6ed6u); f_11cc9200();
  /* 11cc6ed6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc6edd jmp 0x11cc6ee8 */
  goto L_11cc6ee8;
L_11cc6edf:;
  /* 11cc6edf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc6ee2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6ee5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11cc6ee8:;
  /* 11cc6ee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc6eeb cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6eee jge 0x11cc6f40 */
  if ((C.sf==C.of)) goto L_11cc6f40;
  /* 11cc6ef0 mov esi, esp */
  ESI = (ESP);
  /* 11cc6ef2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6ef8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6efb mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11cc6efe push eax */
  push32((uint32_t)(EAX));
  /* 11cc6eff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f02 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cc6f04 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6f05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f08 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc6f0b push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6f0c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f0f add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f12 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6f13 call dword ptr [0x11d014c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c0))), 0x11cc6f19u);
  /* 11cc6f19 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f1c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6f1e call 0x11cc9200 */
  push32(0x11cc6f23u); f_11cc9200();
  /* 11cc6f23 mov esi, esp */
  ESI = (ESP);
  /* 11cc6f25 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc6f27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f2a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f2d push eax */
  push32((uint32_t)(EAX));
  /* 11cc6f2e call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc6f34u);
  /* 11cc6f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f37 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6f39 call 0x11cc9200 */
  push32(0x11cc6f3eu); f_11cc9200();
  /* 11cc6f3e jmp 0x11cc6edf */
  goto L_11cc6edf;
L_11cc6f40:;
  /* 11cc6f40 mov esi, esp */
  ESI = (ESP);
  /* 11cc6f42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6f44 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f47 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f4a push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6f4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f4e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 11cc6f51 push eax */
  push32((uint32_t)(EAX));
  /* 11cc6f52 call dword ptr [0x11d01550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01550))), 0x11cc6f58u);
  /* 11cc6f58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6f5d call 0x11cc9200 */
  push32(0x11cc6f62u); f_11cc9200();
  /* 11cc6f62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f65 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 11cc6f6c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc6f6e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc6f71 push edx */
  push32((uint32_t)(EDX));
  /* 11cc6f72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f75 call 0x11cc1055 */
  push32(0x11cc6f7au); f_11cc1055();
  /* 11cc6f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc6f7d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_11cc6f84:;
  /* 11cc6f84 pop edi */
  EDI = (pop32());
  /* 11cc6f85 pop esi */
  ESI = (pop32());
  /* 11cc6f86 pop ebx */
  EBX = (pop32());
  /* 11cc6f87 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc6f8a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc6f8c call 0x11cc9200 */
  push32(0x11cc6f91u); f_11cc9200();
  /* 11cc6f91 mov esp, ebp */
  ESP = (EBP);
  /* 11cc6f93 pop ebp */
  EBP = (pop32());
  /* 11cc6f94 ret 8 */
  ESPCHK(0x11cc6e90u, _esp0);
  ESP += 12; return;
}

/* FUN_10006fe0 @ 0x11cc6fe0 (42 bytes, 21 insns) */
void f_11cc6fe0(void) {
  FTRACE(0x11cc6fe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc6fe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc6fe1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc6fe3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc6fe6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc6fe7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc6fe8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc6fe9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc6fea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc6fed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc6ff2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc6ff7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc6ff9 pop ecx */
  ECX = (pop32());
  /* 11cc6ffa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc6ffd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7000 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7003 pop edi */
  EDI = (pop32());
  /* 11cc7004 pop esi */
  ESI = (pop32());
  /* 11cc7005 pop ebx */
  EBX = (pop32());
  /* 11cc7006 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7008 pop ebp */
  EBP = (pop32());
  /* 11cc7009 ret  */
  ESPCHK(0x11cc6fe0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007020 @ 0x11cc7020 (78 bytes, 33 insns) */
void f_11cc7020(void) {
  FTRACE(0x11cc7020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7020 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7021 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7023 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7026 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7027 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7028 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7029 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc702a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc702d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7032 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7037 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7039 pop ecx */
  ECX = (pop32());
  /* 11cc703a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc703d mov esi, esp */
  ESI = (ESP);
  /* 11cc703f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7042 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 11cc7045 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7046 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7049 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc704c push edx */
  push32((uint32_t)(EDX));
  /* 11cc704d call dword ptr [0x11d014d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014d0))), 0x11cc7053u);
  /* 11cc7053 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7056 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7058 call 0x11cc9200 */
  push32(0x11cc705du); f_11cc9200();
  /* 11cc705d pop edi */
  EDI = (pop32());
  /* 11cc705e pop esi */
  ESI = (pop32());
  /* 11cc705f pop ebx */
  EBX = (pop32());
  /* 11cc7060 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7063 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7065 call 0x11cc9200 */
  push32(0x11cc706au); f_11cc9200();
  /* 11cc706a mov esp, ebp */
  ESP = (EBP);
  /* 11cc706c pop ebp */
  EBP = (pop32());
  /* 11cc706d ret  */
  ESPCHK(0x11cc7020u, _esp0);
  ESP += 4; return;
}

/* FUN_10007090 @ 0x11cc7090 (102 bytes, 40 insns) */
void f_11cc7090(void) {
  FTRACE(0x11cc7090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7090 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7091 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7093 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7096 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7097 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7098 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7099 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc709a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc709d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc70a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc70a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc70a9 pop ecx */
  ECX = (pop32());
  /* 11cc70aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc70ad mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc70b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc70b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc70b7 mov esi, esp */
  ESI = (ESP);
  /* 11cc70b9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc70ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc70bd push ecx */
  push32((uint32_t)(ECX));
  /* 11cc70be call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc70c4u);
  /* 11cc70c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc70c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc70c9 call 0x11cc9200 */
  push32(0x11cc70ceu); f_11cc9200();
  /* 11cc70ce mov esi, eax */
  ESI = (EAX);
  /* 11cc70d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc70d3 call 0x11cc1177 */
  push32(0x11cc70d8u); f_11cc1177();
  /* 11cc70d8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc70da jne 0x11cc70e0 */
  if (!C.zf) goto L_11cc70e0;
  /* 11cc70dc mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc70e0:;
  /* 11cc70e0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc70e3 pop edi */
  EDI = (pop32());
  /* 11cc70e4 pop esi */
  ESI = (pop32());
  /* 11cc70e5 pop ebx */
  EBX = (pop32());
  /* 11cc70e6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc70e9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc70eb call 0x11cc9200 */
  push32(0x11cc70f0u); f_11cc9200();
  /* 11cc70f0 mov esp, ebp */
  ESP = (EBP);
  /* 11cc70f2 pop ebp */
  EBP = (pop32());
  /* 11cc70f3 ret 4 */
  ESPCHK(0x11cc7090u, _esp0);
  ESP += 8; return;
}

/* FUN_10007110 @ 0x11cc7110 (117 bytes, 44 insns) */
void f_11cc7110(void) {
  FTRACE(0x11cc7110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7110 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7111 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7113 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7116 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7117 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7118 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7119 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc711a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc711d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7129 pop ecx */
  ECX = (pop32());
  /* 11cc712a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc712d mov esi, esp */
  ESI = (ESP);
  /* 11cc712f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7132 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7133 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7136 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7139 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc713a call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc7140u);
  /* 11cc7140 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7143 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7145 call 0x11cc9200 */
  push32(0x11cc714au); f_11cc9200();
  /* 11cc714a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc714d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7150 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7151 call 0x11cc104b */
  push32(0x11cc7156u); f_11cc104b();
  /* 11cc7156 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7159 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc715c mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 11cc715f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7162 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 11cc7169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc716c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc716f mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 11cc7172 pop edi */
  EDI = (pop32());
  /* 11cc7173 pop esi */
  ESI = (pop32());
  /* 11cc7174 pop ebx */
  EBX = (pop32());
  /* 11cc7175 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7178 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc717a call 0x11cc9200 */
  push32(0x11cc717fu); f_11cc9200();
  /* 11cc717f mov esp, ebp */
  ESP = (EBP);
  /* 11cc7181 pop ebp */
  EBP = (pop32());
  /* 11cc7182 ret 8 */
  ESPCHK(0x11cc7110u, _esp0);
  ESP += 12; return;
}

/* FUN_100071b0 @ 0x11cc71b0 (56 bytes, 25 insns) */
void f_11cc71b0(void) {
  FTRACE(0x11cc71b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc71b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc71b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc71b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc71b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc71b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc71b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc71b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc71ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc71bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc71c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc71c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc71c9 pop ecx */
  ECX = (pop32());
  /* 11cc71ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc71cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc71d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc71d4 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc71d8 jne 0x11cc71de */
  if (!C.zf) goto L_11cc71de;
  /* 11cc71da mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc71de:;
  /* 11cc71de mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc71e1 pop edi */
  EDI = (pop32());
  /* 11cc71e2 pop esi */
  ESI = (pop32());
  /* 11cc71e3 pop ebx */
  EBX = (pop32());
  /* 11cc71e4 mov esp, ebp */
  ESP = (EBP);
  /* 11cc71e6 pop ebp */
  EBP = (pop32());
  /* 11cc71e7 ret  */
  ESPCHK(0x11cc71b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007200 @ 0x11cc7200 (163 bytes, 60 insns) */
void f_11cc7200(void) {
  FTRACE(0x11cc7200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7200 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7201 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7203 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7206 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7207 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7208 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7209 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc720a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc720d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7212 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7217 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7219 pop ecx */
  ECX = (pop32());
  /* 11cc721a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc721d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7220 call 0x11cc10c3 */
  push32(0x11cc7225u); f_11cc10c3();
  /* 11cc7225 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc722a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc722c je 0x11cc7290 */
  if (C.zf) goto L_11cc7290;
  /* 11cc722e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7231 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7234 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11cc7237 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc723a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc723d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cc723f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7242 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc7245 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11cc7248 mov esi, esp */
  ESI = (ESP);
  /* 11cc724a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc724c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc724f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7252 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7253 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc7259u);
  /* 11cc7259 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc725c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc725e call 0x11cc9200 */
  push32(0x11cc7263u); f_11cc9200();
  /* 11cc7263 mov esi, esp */
  ESI = (ESP);
  /* 11cc7265 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7267 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7269 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc726c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cc726e push edx */
  push32((uint32_t)(EDX));
  /* 11cc726f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7272 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11cc7275 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7276 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc727cu);
  /* 11cc727c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc727f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7281 call 0x11cc9200 */
  push32(0x11cc7286u); f_11cc9200();
  /* 11cc7286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7289 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_11cc7290:;
  /* 11cc7290 pop edi */
  EDI = (pop32());
  /* 11cc7291 pop esi */
  ESI = (pop32());
  /* 11cc7292 pop ebx */
  EBX = (pop32());
  /* 11cc7293 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7296 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7298 call 0x11cc9200 */
  push32(0x11cc729du); f_11cc9200();
  /* 11cc729d mov esp, ebp */
  ESP = (EBP);
  /* 11cc729f pop ebp */
  EBP = (pop32());
  /* 11cc72a0 ret 0xc */
  ESPCHK(0x11cc7200u, _esp0);
  ESP += 16; return;
}

/* FUN_100072d0 @ 0x11cc72d0 (140 bytes, 53 insns) */
void f_11cc72d0(void) {
  FTRACE(0x11cc72d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc72d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc72d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc72d3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc72d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc72d7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc72d8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc72d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc72da lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc72dd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc72e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc72e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc72e9 pop ecx */
  ECX = (pop32());
  /* 11cc72ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc72ed mov esi, esp */
  ESI = (ESP);
  /* 11cc72ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc72f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc72f4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc72f7 push eax */
  push32((uint32_t)(EAX));
  /* 11cc72f8 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc72feu);
  /* 11cc72fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7301 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7303 call 0x11cc9200 */
  push32(0x11cc7308u); f_11cc9200();
  /* 11cc7308 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc730c mov esi, esp */
  ESI = (ESP);
  /* 11cc730e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7311 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cc7314 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7315 call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc731bu);
  /* 11cc731b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc731e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7320 call 0x11cc9200 */
  push32(0x11cc7325u); f_11cc9200();
  /* 11cc7325 mov esi, eax */
  ESI = (EAX);
  /* 11cc7327 mov edi, esp */
  EDI = (ESP);
  /* 11cc7329 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc732c mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11cc732f push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7330 call dword ptr [0x11d014a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014a8))), 0x11cc7336u);
  /* 11cc7336 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7339 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc733b call 0x11cc9200 */
  push32(0x11cc7340u); f_11cc9200();
  /* 11cc7340 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7342 jne 0x11cc7348 */
  if (!C.zf) goto L_11cc7348;
  /* 11cc7344 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc7348:;
  /* 11cc7348 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc734b pop edi */
  EDI = (pop32());
  /* 11cc734c pop esi */
  ESI = (pop32());
  /* 11cc734d pop ebx */
  EBX = (pop32());
  /* 11cc734e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7351 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7353 call 0x11cc9200 */
  push32(0x11cc7358u); f_11cc9200();
  /* 11cc7358 mov esp, ebp */
  ESP = (EBP);
  /* 11cc735a pop ebp */
  EBP = (pop32());
  /* 11cc735b ret  */
  ESPCHK(0x11cc72d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007380 @ 0x11cc7380 (125 bytes, 48 insns) */
void f_11cc7380(void) {
  FTRACE(0x11cc7380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7380 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7381 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7383 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7386 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7387 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7388 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7389 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc738a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc738d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7392 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7397 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7399 pop ecx */
  ECX = (pop32());
  /* 11cc739a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc739d mov esi, esp */
  ESI = (ESP);
  /* 11cc739f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc73a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc73a4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc73a7 push eax */
  push32((uint32_t)(EAX));
  /* 11cc73a8 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc73aeu);
  /* 11cc73ae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc73b1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc73b3 call 0x11cc9200 */
  push32(0x11cc73b8u); f_11cc9200();
  /* 11cc73b8 mov esi, esp */
  ESI = (ESP);
  /* 11cc73ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc73bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc73bf mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cc73c2 push edx */
  push32((uint32_t)(EDX));
  /* 11cc73c3 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc73c9u);
  /* 11cc73c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc73cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc73ce call 0x11cc9200 */
  push32(0x11cc73d3u); f_11cc9200();
  /* 11cc73d3 mov esi, esp */
  ESI = (ESP);
  /* 11cc73d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc73d8 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 11cc73db push ecx */
  push32((uint32_t)(ECX));
  /* 11cc73dc call dword ptr [0x11d01498] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01498))), 0x11cc73e2u);
  /* 11cc73e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc73e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc73e7 call 0x11cc9200 */
  push32(0x11cc73ecu); f_11cc9200();
  /* 11cc73ec pop edi */
  EDI = (pop32());
  /* 11cc73ed pop esi */
  ESI = (pop32());
  /* 11cc73ee pop ebx */
  EBX = (pop32());
  /* 11cc73ef add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc73f2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc73f4 call 0x11cc9200 */
  push32(0x11cc73f9u); f_11cc9200();
  /* 11cc73f9 mov esp, ebp */
  ESP = (EBP);
  /* 11cc73fb pop ebp */
  EBP = (pop32());
  /* 11cc73fc ret  */
  ESPCHK(0x11cc7380u, _esp0);
  ESP += 4; return;
}

/* FUN_10007420 @ 0x11cc7420 (98 bytes, 39 insns) */
void f_11cc7420(void) {
  FTRACE(0x11cc7420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7420 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7421 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7423 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7426 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7427 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7428 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7429 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc742a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc742d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7432 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7437 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7439 pop ecx */
  ECX = (pop32());
  /* 11cc743a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc743d mov esi, esp */
  ESI = (ESP);
  /* 11cc743f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7441 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7444 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7447 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7448 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc744eu);
  /* 11cc744e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7453 call 0x11cc9200 */
  push32(0x11cc7458u); f_11cc9200();
  /* 11cc7458 mov esi, esp */
  ESI = (ESP);
  /* 11cc745a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc745d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11cc7460 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7461 call dword ptr [0x11d014a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014a0))), 0x11cc7467u);
  /* 11cc7467 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc746a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc746c call 0x11cc9200 */
  push32(0x11cc7471u); f_11cc9200();
  /* 11cc7471 pop edi */
  EDI = (pop32());
  /* 11cc7472 pop esi */
  ESI = (pop32());
  /* 11cc7473 pop ebx */
  EBX = (pop32());
  /* 11cc7474 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7477 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7479 call 0x11cc9200 */
  push32(0x11cc747eu); f_11cc9200();
  /* 11cc747e mov esp, ebp */
  ESP = (EBP);
  /* 11cc7480 pop ebp */
  EBP = (pop32());
  /* 11cc7481 ret  */
  ESPCHK(0x11cc7420u, _esp0);
  ESP += 4; return;
}

/* FUN_100074a0 @ 0x11cc74a0 (402 bytes, 129 insns) [1 switch table(s)] */
void f_11cc74a0(void) {
  FTRACE(0x11cc74a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc74a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc74a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc74a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc74a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc74a7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc74a8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc74a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc74aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc74ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc74b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc74b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc74b9 pop ecx */
  ECX = (pop32());
  /* 11cc74ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc74bd mov esi, esp */
  ESI = (ESP);
  /* 11cc74bf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc74c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc74c4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc74c7 push eax */
  push32((uint32_t)(EAX));
  /* 11cc74c8 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc74ceu);
  /* 11cc74ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc74d1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc74d3 call 0x11cc9200 */
  push32(0x11cc74d8u); f_11cc9200();
  /* 11cc74d8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc74db mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cc74de mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11cc74e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc74e4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc74e7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc74ea cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc74ee ja 0x11cc7621 */
  if ((!C.cf&&!C.zf)) goto L_11cc7621;
  /* 11cc74f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc74f7 jmp dword ptr [ecx*4 + 0x11cc7632] */
  switch (ECX) {
    case 0: goto L_11cc74fe;
    case 1: goto L_11cc7537;
    case 2: goto L_11cc757b;
    case 3: goto L_11cc75b1;
    case 4: goto L_11cc75f5;
    default: x86_unimpl("switch@0x11cc74f7 out of table"); return;
  }
L_11cc74fe:;
  /* 11cc74fe mov esi, esp */
  ESI = (ESP);
  /* 11cc7500 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7503 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 11cc7506 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7507 call dword ptr [0x11d0149c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0149c))), 0x11cc750du);
  /* 11cc750d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7510 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7512 call 0x11cc9200 */
  push32(0x11cc7517u); f_11cc9200();
  /* 11cc7517 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc751c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc751e je 0x11cc7532 */
  if (C.zf) goto L_11cc7532;
  /* 11cc7520 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7523 call 0x11cc11c2 */
  push32(0x11cc7528u); f_11cc11c2();
  /* 11cc7528 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc752b mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_11cc7532:;
  /* 11cc7532 jmp 0x11cc7621 */
  goto L_11cc7621;
L_11cc7537:;
  /* 11cc7537 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc753a call 0x11cc1118 */
  push32(0x11cc753fu); f_11cc1118();
  /* 11cc753f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7544 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7546 je 0x11cc7576 */
  if (C.zf) goto L_11cc7576;
  /* 11cc7548 mov esi, esp */
  ESI = (ESP);
  /* 11cc754a push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc754c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc754e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7551 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11cc7554 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7555 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7558 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11cc755b push edx */
  push32((uint32_t)(EDX));
  /* 11cc755c call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc7562u);
  /* 11cc7562 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7565 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7567 call 0x11cc9200 */
  push32(0x11cc756cu); f_11cc9200();
  /* 11cc756c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc756f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_11cc7576:;
  /* 11cc7576 jmp 0x11cc7621 */
  goto L_11cc7621;
L_11cc757b:;
  /* 11cc757b mov esi, esp */
  ESI = (ESP);
  /* 11cc757d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7580 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11cc7583 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7584 call dword ptr [0x11d0149c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0149c))), 0x11cc758au);
  /* 11cc758a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc758d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc758f call 0x11cc9200 */
  push32(0x11cc7594u); f_11cc9200();
  /* 11cc7594 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7599 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc759b je 0x11cc75af */
  if (C.zf) goto L_11cc75af;
  /* 11cc759d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75a0 call 0x11cc106e */
  push32(0x11cc75a5u); f_11cc106e();
  /* 11cc75a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75a8 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_11cc75af:;
  /* 11cc75af jmp 0x11cc7621 */
  goto L_11cc7621;
L_11cc75b1:;
  /* 11cc75b1 mov esi, esp */
  ESI = (ESP);
  /* 11cc75b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75b6 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 11cc75b9 push edx */
  push32((uint32_t)(EDX));
  /* 11cc75ba call dword ptr [0x11d014a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014a8))), 0x11cc75c0u);
  /* 11cc75c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc75c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc75c5 call 0x11cc9200 */
  push32(0x11cc75cau); f_11cc9200();
  /* 11cc75ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc75cc jne 0x11cc75f3 */
  if (!C.zf) goto L_11cc75f3;
  /* 11cc75ce mov esi, esp */
  ESI = (ESP);
  /* 11cc75d0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11cc75d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75d5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11cc75d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc75d9 call dword ptr [0x11d014e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014e8))), 0x11cc75dfu);
  /* 11cc75df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc75e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc75e4 call 0x11cc9200 */
  push32(0x11cc75e9u); f_11cc9200();
  /* 11cc75e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75ec mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_11cc75f3:;
  /* 11cc75f3 jmp 0x11cc7621 */
  goto L_11cc7621;
L_11cc75f5:;
  /* 11cc75f5 mov esi, esp */
  ESI = (ESP);
  /* 11cc75f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc75fa mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11cc75fd push ecx */
  push32((uint32_t)(ECX));
  /* 11cc75fe call dword ptr [0x11d014f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014f0))), 0x11cc7604u);
  /* 11cc7604 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7607 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7609 call 0x11cc9200 */
  push32(0x11cc760eu); f_11cc9200();
  /* 11cc760e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7613 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7615 je 0x11cc7621 */
  if (C.zf) goto L_11cc7621;
  /* 11cc7617 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc761a mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_11cc7621:;
  /* 11cc7621 pop edi */
  EDI = (pop32());
  /* 11cc7622 pop esi */
  ESI = (pop32());
  /* 11cc7623 pop ebx */
  EBX = (pop32());
  /* 11cc7624 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7627 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7629 call 0x11cc9200 */
  push32(0x11cc762eu); f_11cc9200();
  /* 11cc762e mov esp, ebp */
  ESP = (EBP);
  /* 11cc7630 pop ebp */
  EBP = (pop32());
  /* 11cc7631 ret  */
  ESPCHK(0x11cc74a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076b0 @ 0x11cc76b0 (39 bytes, 18 insns) */
void f_11cc76b0(void) {
  FTRACE(0x11cc76b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc76b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc76b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc76b3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc76b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc76b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc76b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc76b9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11cc76bc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11cc76c1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc76c6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc76c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc76cb mov dword ptr [0x11cff3f8], eax */
  w32((uint32_t)(0x11cff3f8), (EAX));
  /* 11cc76d0 pop edi */
  EDI = (pop32());
  /* 11cc76d1 pop esi */
  ESI = (pop32());
  /* 11cc76d2 pop ebx */
  EBX = (pop32());
  /* 11cc76d3 mov esp, ebp */
  ESP = (EBP);
  /* 11cc76d5 pop ebp */
  EBP = (pop32());
  /* 11cc76d6 ret  */
  ESPCHK(0x11cc76b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100076e0 @ 0x11cc76e0 (93 bytes, 34 insns) */
void f_11cc76e0(void) {
  FTRACE(0x11cc76e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc76e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc76e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc76e3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc76e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc76e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc76e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc76e9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 11cc76ec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 11cc76f1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc76f6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc76f8 cmp dword ptr [0x11cff3f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff3f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc76ff je 0x11cc772c */
  if (C.zf) goto L_11cc772c;
  /* 11cc7701 mov ecx, dword ptr [0x11cff3f8] */
  ECX = (r32((uint32_t)(0x11cff3f8)));
  /* 11cc7707 call 0x11cc10c3 */
  push32(0x11cc770cu); f_11cc10c3();
  /* 11cc770c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7711 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7713 je 0x11cc772c */
  if (C.zf) goto L_11cc772c;
  /* 11cc7715 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc7718 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7719 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc771c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc771d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7720 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7721 mov ecx, dword ptr [0x11cff3f8] */
  ECX = (r32((uint32_t)(0x11cff3f8)));
  /* 11cc7727 call 0x11cc10f5 */
  push32(0x11cc772cu); f_11cc10f5();
L_11cc772c:;
  /* 11cc772c pop edi */
  EDI = (pop32());
  /* 11cc772d pop esi */
  ESI = (pop32());
  /* 11cc772e pop ebx */
  EBX = (pop32());
  /* 11cc772f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7732 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7734 call 0x11cc9200 */
  push32(0x11cc7739u); f_11cc9200();
  /* 11cc7739 mov esp, ebp */
  ESP = (EBP);
  /* 11cc773b pop ebp */
  EBP = (pop32());
  /* 11cc773c ret  */
  ESPCHK(0x11cc76e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007760 @ 0x11cc7760 (437 bytes, 146 insns) */
void f_11cc7760(void) {
  FTRACE(0x11cc7760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7760 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7761 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7763 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7766 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7767 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7768 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7769 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc776a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc776d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc7772 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7777 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7779 pop ecx */
  ECX = (pop32());
  /* 11cc777a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc777d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7780 call 0x11cc1050 */
  push32(0x11cc7785u); f_11cc1050();
  /* 11cc7785 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc778a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc778c je 0x11cc7904 */
  if (C.zf) goto L_11cc7904;
  /* 11cc7792 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7795 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 11cc7798 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11cc779b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cc779f je 0x11cc7859 */
  if (C.zf) goto L_11cc7859;
  /* 11cc77a5 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11cc77a9 je 0x11cc77b0 */
  if (C.zf) goto L_11cc77b0;
  /* 11cc77ab jmp 0x11cc78af */
  goto L_11cc78af;
L_11cc77b0:;
  /* 11cc77b0 cmp dword ptr [0x11cff400], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff400))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc77b7 je 0x11cc77ff */
  if (C.zf) goto L_11cc77ff;
  /* 11cc77b9 mov esi, esp */
  ESI = (ESP);
  /* 11cc77bb push 3 */
  push32((uint32_t)(0x3u));
  /* 11cc77bd mov edx, dword ptr [0x11cff400] */
  EDX = (r32((uint32_t)(0x11cff400)));
  /* 11cc77c3 push edx */
  push32((uint32_t)(EDX));
  /* 11cc77c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc77c7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc77ca push eax */
  push32((uint32_t)(EAX));
  /* 11cc77cb call dword ptr [0x11d01538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01538))), 0x11cc77d1u);
  /* 11cc77d1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc77d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc77d6 call 0x11cc9200 */
  push32(0x11cc77dbu); f_11cc9200();
  /* 11cc77db mov esi, esp */
  ESI = (ESP);
  /* 11cc77dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc77df mov ecx, dword ptr [0x11cff400] */
  ECX = (r32((uint32_t)(0x11cff400)));
  /* 11cc77e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc77e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc77e9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc77ec push edx */
  push32((uint32_t)(EDX));
  /* 11cc77ed call dword ptr [0x11d01538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01538))), 0x11cc77f3u);
  /* 11cc77f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc77f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc77f8 call 0x11cc9200 */
  push32(0x11cc77fdu); f_11cc9200();
  /* 11cc77fd jmp 0x11cc7854 */
  goto L_11cc7854;
L_11cc77ff:;
  /* 11cc77ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7802 call 0x11cc1091 */
  push32(0x11cc7807u); f_11cc1091();
  /* 11cc7807 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc780c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc780e jne 0x11cc7854 */
  if (!C.zf) goto L_11cc7854;
  /* 11cc7810 mov esi, esp */
  ESI = (ESP);
  /* 11cc7812 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7817 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc781a push eax */
  push32((uint32_t)(EAX));
  /* 11cc781b call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc7821u);
  /* 11cc7821 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7824 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7826 call 0x11cc9200 */
  push32(0x11cc782bu); f_11cc9200();
  /* 11cc782b mov esi, esp */
  ESI = (ESP);
  /* 11cc782d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc782f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7832 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11cc7835 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7836 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7839 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc783c push eax */
  push32((uint32_t)(EAX));
  /* 11cc783d mov cl, byte ptr [0x11cff3fc] */
  CL = (r8((uint32_t)(0x11cff3fc)));
  /* 11cc7843 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7844 call dword ptr [0x11d01528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01528))), 0x11cc784au);
  /* 11cc784a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc784d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc784f call 0x11cc9200 */
  push32(0x11cc7854u); f_11cc9200();
L_11cc7854:;
  /* 11cc7854 jmp 0x11cc7904 */
  goto L_11cc7904;
L_11cc7859:;
  /* 11cc7859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc785c call 0x11cc1091 */
  push32(0x11cc7861u); f_11cc1091();
  /* 11cc7861 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7866 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7868 jne 0x11cc78ad */
  if (!C.zf) goto L_11cc78ad;
  /* 11cc786a mov esi, esp */
  ESI = (ESP);
  /* 11cc786c push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc786e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7871 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7874 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7875 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc787bu);
  /* 11cc787b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc787e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7880 call 0x11cc9200 */
  push32(0x11cc7885u); f_11cc9200();
  /* 11cc7885 mov esi, esp */
  ESI = (ESP);
  /* 11cc7887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7889 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc788c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 11cc788f push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7890 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7893 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7896 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7897 mov al, byte ptr [0x11cff3fc] */
  AL = (r8((uint32_t)(0x11cff3fc)));
  /* 11cc789c push eax */
  push32((uint32_t)(EAX));
  /* 11cc789d call dword ptr [0x11d01528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01528))), 0x11cc78a3u);
  /* 11cc78a3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc78a6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc78a8 call 0x11cc9200 */
  push32(0x11cc78adu); f_11cc9200();
L_11cc78ad:;
  /* 11cc78ad jmp 0x11cc7904 */
  goto L_11cc7904;
L_11cc78af:;
  /* 11cc78af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc78b2 call 0x11cc1091 */
  push32(0x11cc78b7u); f_11cc1091();
  /* 11cc78b7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc78bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc78be jne 0x11cc7904 */
  if (!C.zf) goto L_11cc7904;
  /* 11cc78c0 mov esi, esp */
  ESI = (ESP);
  /* 11cc78c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc78c4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc78c7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc78ca push ecx */
  push32((uint32_t)(ECX));
  /* 11cc78cb call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc78d1u);
  /* 11cc78d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc78d4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc78d6 call 0x11cc9200 */
  push32(0x11cc78dbu); f_11cc9200();
  /* 11cc78db mov esi, esp */
  ESI = (ESP);
  /* 11cc78dd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc78df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc78e2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 11cc78e5 push eax */
  push32((uint32_t)(EAX));
  /* 11cc78e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc78e9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc78ec push ecx */
  push32((uint32_t)(ECX));
  /* 11cc78ed mov dl, byte ptr [0x11cff3fc] */
  DL = (r8((uint32_t)(0x11cff3fc)));
  /* 11cc78f3 push edx */
  push32((uint32_t)(EDX));
  /* 11cc78f4 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc78fau);
  /* 11cc78fa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc78fd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc78ff call 0x11cc9200 */
  push32(0x11cc7904u); f_11cc9200();
L_11cc7904:;
  /* 11cc7904 pop edi */
  EDI = (pop32());
  /* 11cc7905 pop esi */
  ESI = (pop32());
  /* 11cc7906 pop ebx */
  EBX = (pop32());
  /* 11cc7907 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc790a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc790c call 0x11cc9200 */
  push32(0x11cc7911u); f_11cc9200();
  /* 11cc7911 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7913 pop ebp */
  EBP = (pop32());
  /* 11cc7914 ret  */
  ESPCHK(0x11cc7760u, _esp0);
  ESP += 4; return;
}

/* FUN_10007990 @ 0x11cc7990 (235 bytes, 78 insns) */
void f_11cc7990(void) {
  FTRACE(0x11cc7990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7990 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7991 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7993 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7999 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc799a push esi */
  push32((uint32_t)(ESI));
  /* 11cc799b push edi */
  push32((uint32_t)(EDI));
  /* 11cc799c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc799d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11cc79a3 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11cc79a8 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc79ad rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc79af pop ecx */
  ECX = (pop32());
  /* 11cc79b0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc79b3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11cc79ba mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11cc79c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc79c4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc79c7 mov esi, esp */
  ESI = (ESP);
  /* 11cc79c9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc79ca call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc79d0u);
  /* 11cc79d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc79d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc79d5 call 0x11cc9200 */
  push32(0x11cc79dau); f_11cc9200();
  /* 11cc79da mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11cc79dd cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc79e1 jle 0x11cc7a54 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc7a54;
  /* 11cc79e3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11cc79ea mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11cc79f1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cc79f8 jmp 0x11cc7a03 */
  goto L_11cc7a03;
L_11cc79fa:;
  /* 11cc79fa mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc79fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a00 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11cc7a03:;
  /* 11cc7a03 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc7a06 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7a09 jge 0x11cc7a40 */
  if ((C.sf==C.of)) goto L_11cc7a40;
  /* 11cc7a0b mov esi, esp */
  ESI = (ESP);
  /* 11cc7a0d lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc7a10 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7a11 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc7a14 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7a15 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7a18 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a1b push edx */
  push32((uint32_t)(EDX));
  /* 11cc7a1c call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc7a22u);
  /* 11cc7a22 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a25 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7a27 call 0x11cc9200 */
  push32(0x11cc7a2cu); f_11cc9200();
  /* 11cc7a2c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cc7a2f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a32 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11cc7a35 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cc7a38 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a3b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11cc7a3e jmp 0x11cc79fa */
  goto L_11cc79fa;
L_11cc7a40:;
  /* 11cc7a40 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cc7a43 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cc7a44 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cc7a47 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11cc7a4a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cc7a4d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cc7a4e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cc7a51 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11cc7a54:;
  /* 11cc7a54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7a57 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cc7a5a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cc7a5c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cc7a5f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cc7a62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7a65 pop edi */
  EDI = (pop32());
  /* 11cc7a66 pop esi */
  ESI = (pop32());
  /* 11cc7a67 pop ebx */
  EBX = (pop32());
  /* 11cc7a68 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7a6e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7a70 call 0x11cc9200 */
  push32(0x11cc7a75u); f_11cc9200();
  /* 11cc7a75 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7a77 pop ebp */
  EBP = (pop32());
  /* 11cc7a78 ret 4 */
  ESPCHK(0x11cc7990u, _esp0);
  ESP += 8; return;
}

/* FUN_10007ac0 @ 0x11cc7ac0 (120 bytes, 47 insns) */
void f_11cc7ac0(void) {
  FTRACE(0x11cc7ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7ac1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7ac3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7ac7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7ac8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7aca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc7acd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc7ad2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7ad7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7ad9 pop ecx */
  ECX = (pop32());
  /* 11cc7ada mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7add mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc7ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7ae4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7ae7 mov esi, esp */
  ESI = (ESP);
  /* 11cc7ae9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7aea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7aed add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7af0 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7af1 call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc7af7u);
  /* 11cc7af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7afa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7afc call 0x11cc9200 */
  push32(0x11cc7b01u); f_11cc9200();
  /* 11cc7b01 mov esi, eax */
  ESI = (EAX);
  /* 11cc7b03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7b06 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7b09 mov edi, esp */
  EDI = (ESP);
  /* 11cc7b0b push edx */
  push32((uint32_t)(EDX));
  /* 11cc7b0c call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc7b12u);
  /* 11cc7b12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7b15 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7b17 call 0x11cc9200 */
  push32(0x11cc7b1cu); f_11cc9200();
  /* 11cc7b1c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7b1e jne 0x11cc7b24 */
  if (!C.zf) goto L_11cc7b24;
  /* 11cc7b20 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc7b24:;
  /* 11cc7b24 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc7b27 pop edi */
  EDI = (pop32());
  /* 11cc7b28 pop esi */
  ESI = (pop32());
  /* 11cc7b29 pop ebx */
  EBX = (pop32());
  /* 11cc7b2a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7b2d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7b2f call 0x11cc9200 */
  push32(0x11cc7b34u); f_11cc9200();
  /* 11cc7b34 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7b36 pop ebp */
  EBP = (pop32());
  /* 11cc7b37 ret  */
  ESPCHK(0x11cc7ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007b60 @ 0x11cc7b60 (86 bytes, 35 insns) */
void f_11cc7b60(void) {
  FTRACE(0x11cc7b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7b61 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7b63 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7b67 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7b68 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7b6a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc7b6d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc7b72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7b77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7b79 pop ecx */
  ECX = (pop32());
  /* 11cc7b7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7b7d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc7b81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7b84 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7b87 mov esi, esp */
  ESI = (ESP);
  /* 11cc7b89 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7b8a call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc7b90u);
  /* 11cc7b90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7b93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7b95 call 0x11cc9200 */
  push32(0x11cc7b9au); f_11cc9200();
  /* 11cc7b9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7b9c jle 0x11cc7ba2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc7ba2;
  /* 11cc7b9e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc7ba2:;
  /* 11cc7ba2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc7ba5 pop edi */
  EDI = (pop32());
  /* 11cc7ba6 pop esi */
  ESI = (pop32());
  /* 11cc7ba7 pop ebx */
  EBX = (pop32());
  /* 11cc7ba8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7bab cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7bad call 0x11cc9200 */
  push32(0x11cc7bb2u); f_11cc9200();
  /* 11cc7bb2 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7bb4 pop ebp */
  EBP = (pop32());
  /* 11cc7bb5 ret  */
  ESPCHK(0x11cc7b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bd0 @ 0x11cc7bd0 (42 bytes, 21 insns) */
void f_11cc7bd0(void) {
  FTRACE(0x11cc7bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7bd1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7bd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7bd6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7bd7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7bd8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7bd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7bda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc7bdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7be2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7be7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7be9 pop ecx */
  ECX = (pop32());
  /* 11cc7bea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7bed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7bf0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7bf3 pop edi */
  EDI = (pop32());
  /* 11cc7bf4 pop esi */
  ESI = (pop32());
  /* 11cc7bf5 pop ebx */
  EBX = (pop32());
  /* 11cc7bf6 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7bf8 pop ebp */
  EBP = (pop32());
  /* 11cc7bf9 ret  */
  ESPCHK(0x11cc7bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c10 @ 0x11cc7c10 (77 bytes, 32 insns) */
void f_11cc7c10(void) {
  FTRACE(0x11cc7c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7c10 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7c11 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7c13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7c16 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7c17 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7c18 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7c19 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7c1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc7c1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc7c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7c29 pop ecx */
  ECX = (pop32());
  /* 11cc7c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7c2d mov esi, esp */
  ESI = (ESP);
  /* 11cc7c2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7c32 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7c33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7c36 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7c39 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7c3a call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc7c40u);
  /* 11cc7c40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7c43 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7c45 call 0x11cc9200 */
  push32(0x11cc7c4au); f_11cc9200();
  /* 11cc7c4a pop edi */
  EDI = (pop32());
  /* 11cc7c4b pop esi */
  ESI = (pop32());
  /* 11cc7c4c pop ebx */
  EBX = (pop32());
  /* 11cc7c4d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7c50 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7c52 call 0x11cc9200 */
  push32(0x11cc7c57u); f_11cc9200();
  /* 11cc7c57 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7c59 pop ebp */
  EBP = (pop32());
  /* 11cc7c5a ret 4 */
  ESPCHK(0x11cc7c10u, _esp0);
  ESP += 8; return;
}

/* FUN_10007c70 @ 0x11cc7c70 (413 bytes, 143 insns) */
void f_11cc7c70(void) {
  FTRACE(0x11cc7c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7c71 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7c73 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7c76 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7c77 push esi */
  push32((uint32_t)(ESI));
  /* 11cc7c78 push edi */
  push32((uint32_t)(EDI));
  /* 11cc7c79 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7c7a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 11cc7c7d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 11cc7c82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7c87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7c89 pop ecx */
  ECX = (pop32());
  /* 11cc7c8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7c8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7c90 call 0x11cc10b9 */
  push32(0x11cc7c95u); f_11cc10b9();
  /* 11cc7c95 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7c9a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7c9c je 0x11cc7dfc */
  if (C.zf) goto L_11cc7dfc;
  /* 11cc7ca2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7ca5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc7ca7 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 11cc7caa cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7cad jne 0x11cc7d58 */
  if (!C.zf) goto L_11cc7d58;
  /* 11cc7cb3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11cc7cb8 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cc7cbb push edx */
  push32((uint32_t)(EDX));
  /* 11cc7cbc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7cbf call 0x11cc10aa */
  push32(0x11cc7cc4u); f_11cc10aa();
  /* 11cc7cc4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc7cc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7cc8 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11cc7cca push edx */
  push32((uint32_t)(EDX));
  /* 11cc7ccb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7cce add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7cd1 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7cd5 call 0x11cc1267 */
  push32(0x11cc7cdau); f_11cc1267();
  /* 11cc7cda mov esi, esp */
  ESI = (ESP);
  /* 11cc7cdc push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7cde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7ce1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7ce5 call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc7cebu);
  /* 11cc7ceb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7cee cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7cf0 call 0x11cc9200 */
  push32(0x11cc7cf5u); f_11cc9200();
  /* 11cc7cf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7cf8 jge 0x11cc7d03 */
  if ((C.sf==C.of)) goto L_11cc7d03;
  /* 11cc7cfa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7cfd mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 11cc7d01 jmp 0x11cc7d58 */
  goto L_11cc7d58;
L_11cc7d03:;
  /* 11cc7d03 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d06 call 0x11cc1154 */
  push32(0x11cc7d0bu); f_11cc1154();
  /* 11cc7d0b and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7d10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc7d12 jne 0x11cc7d58 */
  if (!C.zf) goto L_11cc7d58;
  /* 11cc7d14 mov esi, esp */
  ESI = (ESP);
  /* 11cc7d16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7d18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d1b add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d1e push eax */
  push32((uint32_t)(EAX));
  /* 11cc7d1f call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc7d25u);
  /* 11cc7d25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d28 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7d2a call 0x11cc9200 */
  push32(0x11cc7d2fu); f_11cc9200();
  /* 11cc7d2f mov esi, esp */
  ESI = (ESP);
  /* 11cc7d31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7d33 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d36 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11cc7d39 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7d3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d3d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d40 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7d41 mov cl, byte ptr [0x11cfcd6c] */
  CL = (r8((uint32_t)(0x11cfcd6c)));
  /* 11cc7d47 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7d48 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc7d4eu);
  /* 11cc7d4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d51 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7d53 call 0x11cc9200 */
  push32(0x11cc7d58u); f_11cc9200();
L_11cc7d58:;
  /* 11cc7d58 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc7d5d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 11cc7d60 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7d63 jne 0x11cc7dfc */
  if (!C.zf) goto L_11cc7dfc;
  /* 11cc7d69 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 11cc7d6e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11cc7d71 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7d72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d75 call 0x11cc10aa */
  push32(0x11cc7d7au); f_11cc10aa();
  /* 11cc7d7a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc7d7d push edx */
  push32((uint32_t)(EDX));
  /* 11cc7d7e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11cc7d80 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7d81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d84 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d87 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7d88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d8b call 0x11cc1267 */
  push32(0x11cc7d90u); f_11cc1267();
  /* 11cc7d90 mov esi, esp */
  ESI = (ESP);
  /* 11cc7d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7d94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7d97 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7d9a push edx */
  push32((uint32_t)(EDX));
  /* 11cc7d9b call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc7da1u);
  /* 11cc7da1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7da4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7da6 call 0x11cc9200 */
  push32(0x11cc7dabu); f_11cc9200();
  /* 11cc7dab cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7dae jge 0x11cc7df5 */
  if ((C.sf==C.of)) goto L_11cc7df5;
  /* 11cc7db0 mov esi, esp */
  ESI = (ESP);
  /* 11cc7db2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7db4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7db7 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7dba push eax */
  push32((uint32_t)(EAX));
  /* 11cc7dbb call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc7dc1u);
  /* 11cc7dc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7dc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7dc6 call 0x11cc9200 */
  push32(0x11cc7dcbu); f_11cc9200();
  /* 11cc7dcb mov esi, esp */
  ESI = (ESP);
  /* 11cc7dcd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc7dcf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7dd2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 11cc7dd5 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7dd6 mov eax, dword ptr [0x11cff404] */
  EAX = (r32((uint32_t)(0x11cff404)));
  /* 11cc7ddb push eax */
  push32((uint32_t)(EAX));
  /* 11cc7ddc mov cl, byte ptr [0x11cfcd6c] */
  CL = (r8((uint32_t)(0x11cfcd6c)));
  /* 11cc7de2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7de3 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc7de9u);
  /* 11cc7de9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7dec cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7dee call 0x11cc9200 */
  push32(0x11cc7df3u); f_11cc9200();
  /* 11cc7df3 jmp 0x11cc7dfc */
  goto L_11cc7dfc;
L_11cc7df5:;
  /* 11cc7df5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7df8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_11cc7dfc:;
  /* 11cc7dfc pop edi */
  EDI = (pop32());
  /* 11cc7dfd pop esi */
  ESI = (pop32());
  /* 11cc7dfe pop ebx */
  EBX = (pop32());
  /* 11cc7dff add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7e02 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7e04 call 0x11cc9200 */
  push32(0x11cc7e09u); f_11cc9200();
  /* 11cc7e09 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7e0b pop ebp */
  EBP = (pop32());
  /* 11cc7e0c ret  */
  ESPCHK(0x11cc7c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e80 @ 0x11cc7e80 (311 bytes, 104 insns) */
void f_11cc7e80(void) {
  FTRACE(0x11cc7e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc7e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc7e81 mov ebp, esp */
  EBP = (ESP);
  /* 11cc7e83 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7e89 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc7e8a push esi */
  push32((uint32_t)(ESI));
  /* 11cc7e8b push edi */
  push32((uint32_t)(EDI));
  /* 11cc7e8c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7e8d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11cc7e93 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11cc7e98 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc7e9d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc7e9f pop ecx */
  ECX = (pop32());
  /* 11cc7ea0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc7ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc7ea6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc7ea9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc7eac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11cc7eaf lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11cc7eb2 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7eb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7eb6 call 0x11cc10aa */
  push32(0x11cc7ebbu); f_11cc10aa();
  /* 11cc7ebb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11cc7ebd mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc7ec0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11cc7ec3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11cc7ec6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cc7ec9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cc7ecc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cc7ecf mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11cc7ed2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cc7ed5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7ed8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11cc7edb fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 11cc7ede mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cc7ee1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7ee4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11cc7ee7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 11cc7eea fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 11cc7eec sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7eef fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 11cc7ef2 call 0x11cc93b4 */
  push32(0x11cc7ef7u); f_11cc93b4();
  /* 11cc7ef7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7efa fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 11cc7efd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cc7f00 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc7f03 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc7f05 jge 0x11cc7f13 */
  if ((C.sf==C.of)) goto L_11cc7f13;
  /* 11cc7f07 fld qword ptr [0x11cf9040] */
  fpu_push(rf64((uint32_t)(0x11cf9040)));
  /* 11cc7f0d fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 11cc7f10 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_11cc7f13:;
  /* 11cc7f13 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 11cc7f16 fmul qword ptr [0x11cf9030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x11cf9030)));
  /* 11cc7f1c fdiv qword ptr [0x11cf9020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x11cf9020)));
  /* 11cc7f22 call 0x11cc94ec */
  push32(0x11cc7f27u); f_11cc94ec();
  /* 11cc7f27 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cc7f2a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11cc7f2d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 11cc7f30 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cc7f33 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7f34 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc7f37 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7f38 call 0x11cc9304 */
  push32(0x11cc7f3du); f_11cc9304();
  /* 11cc7f3d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7f40 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 11cc7f43 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 11cc7f46 call 0x11cc94ec */
  push32(0x11cc7f4bu); f_11cc94ec();
  /* 11cc7f4b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cc7f4e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 11cc7f51 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 11cc7f54 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11cc7f57 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7f58 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11cc7f5b push edx */
  push32((uint32_t)(EDX));
  /* 11cc7f5c call 0x11cc9254 */
  push32(0x11cc7f61u); f_11cc9254();
  /* 11cc7f61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7f64 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 11cc7f67 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 11cc7f6a call 0x11cc94ec */
  push32(0x11cc7f6fu); f_11cc94ec();
  /* 11cc7f6f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11cc7f72 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11cc7f74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11cc7f77 push eax */
  push32((uint32_t)(EAX));
  /* 11cc7f78 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cc7f7b push ecx */
  push32((uint32_t)(ECX));
  /* 11cc7f7c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7f7f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7f82 push edx */
  push32((uint32_t)(EDX));
  /* 11cc7f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7f86 call 0x11cc1267 */
  push32(0x11cc7f8bu); f_11cc1267();
  /* 11cc7f8b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cc7f8e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7f93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7f96 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11cc7f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc7f9c call 0x11cc11cc */
  push32(0x11cc7fa1u); f_11cc11cc();
  /* 11cc7fa1 pop edi */
  EDI = (pop32());
  /* 11cc7fa2 pop esi */
  ESI = (pop32());
  /* 11cc7fa3 pop ebx */
  EBX = (pop32());
  /* 11cc7fa4 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc7faa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc7fac call 0x11cc9200 */
  push32(0x11cc7fb1u); f_11cc9200();
  /* 11cc7fb1 mov esp, ebp */
  ESP = (EBP);
  /* 11cc7fb3 pop ebp */
  EBP = (pop32());
  /* 11cc7fb4 ret 0xc */
  ESPCHK(0x11cc7e80u, _esp0);
  ESP += 16; return;
}

/* FUN_10008010 @ 0x11cc8010 (198 bytes, 71 insns) */
void f_11cc8010(void) {
  FTRACE(0x11cc8010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8010 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8011 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8013 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8016 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8017 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8018 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8019 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc801a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 11cc801d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 11cc8022 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8027 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8029 pop ecx */
  ECX = (pop32());
  /* 11cc802a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc802d mov esi, esp */
  ESI = (ESP);
  /* 11cc802f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc8032 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8033 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8035 mov ecx, dword ptr [0x11cff408] */
  ECX = (r32((uint32_t)(0x11cff408)));
  /* 11cc803b push ecx */
  push32((uint32_t)(ECX));
  /* 11cc803c call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc8042u);
  /* 11cc8042 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8045 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8047 call 0x11cc9200 */
  push32(0x11cc804cu); f_11cc9200();
  /* 11cc804c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11cc804f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11cc8052 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cc8055 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11cc8058 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc805b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11cc805e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc8061 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cc8064 mov esi, esp */
  ESI = (ESP);
  /* 11cc8066 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc8069 push eax */
  push32((uint32_t)(EAX));
  /* 11cc806a call dword ptr [0x11d014b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014b0))), 0x11cc8070u);
  /* 11cc8070 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8073 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8075 call 0x11cc9200 */
  push32(0x11cc807au); f_11cc9200();
  /* 11cc807a mov esi, esp */
  ESI = (ESP);
  /* 11cc807c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc807f push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8080 mov edx, dword ptr [0x11cff408] */
  EDX = (r32((uint32_t)(0x11cff408)));
  /* 11cc8086 push edx */
  push32((uint32_t)(EDX));
  /* 11cc8087 mov eax, dword ptr [0x11cff404] */
  EAX = (r32((uint32_t)(0x11cff404)));
  /* 11cc808c push eax */
  push32((uint32_t)(EAX));
  /* 11cc808d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8090 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8091 call dword ptr [0x11d014c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c4))), 0x11cc8097u);
  /* 11cc8097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc809a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc809c call 0x11cc9200 */
  push32(0x11cc80a1u); f_11cc9200();
  /* 11cc80a1 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cc80a4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11cc80a7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cc80aa mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cc80ad mov esi, esp */
  ESI = (ESP);
  /* 11cc80af lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11cc80b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc80b3 call dword ptr [0x11d014b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014b0))), 0x11cc80b9u);
  /* 11cc80b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc80bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc80be call 0x11cc9200 */
  push32(0x11cc80c3u); f_11cc9200();
  /* 11cc80c3 pop edi */
  EDI = (pop32());
  /* 11cc80c4 pop esi */
  ESI = (pop32());
  /* 11cc80c5 pop ebx */
  EBX = (pop32());
  /* 11cc80c6 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc80c9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc80cb call 0x11cc9200 */
  push32(0x11cc80d0u); f_11cc9200();
  /* 11cc80d0 mov esp, ebp */
  ESP = (EBP);
  /* 11cc80d2 pop ebp */
  EBP = (pop32());
  /* 11cc80d3 ret 0x10 */
  ESPCHK(0x11cc8010u, _esp0);
  ESP += 20; return;
}

/* FUN_10008110 @ 0x11cc8110 (120 bytes, 47 insns) */
void f_11cc8110(void) {
  FTRACE(0x11cc8110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8110 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8111 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8113 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8116 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8117 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8118 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8119 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc811a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc811d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc8122 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8127 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8129 pop ecx */
  ECX = (pop32());
  /* 11cc812a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc812d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc8131 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8134 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8137 mov esi, esp */
  ESI = (ESP);
  /* 11cc8139 push eax */
  push32((uint32_t)(EAX));
  /* 11cc813a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc813d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8140 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8141 call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc8147u);
  /* 11cc8147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc814a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc814c call 0x11cc9200 */
  push32(0x11cc8151u); f_11cc9200();
  /* 11cc8151 mov esi, eax */
  ESI = (EAX);
  /* 11cc8153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8156 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8159 mov edi, esp */
  EDI = (ESP);
  /* 11cc815b push edx */
  push32((uint32_t)(EDX));
  /* 11cc815c call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc8162u);
  /* 11cc8162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8165 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8167 call 0x11cc9200 */
  push32(0x11cc816cu); f_11cc9200();
  /* 11cc816c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc816e jne 0x11cc8174 */
  if (!C.zf) goto L_11cc8174;
  /* 11cc8170 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc8174:;
  /* 11cc8174 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc8177 pop edi */
  EDI = (pop32());
  /* 11cc8178 pop esi */
  ESI = (pop32());
  /* 11cc8179 pop ebx */
  EBX = (pop32());
  /* 11cc817a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc817d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc817f call 0x11cc9200 */
  push32(0x11cc8184u); f_11cc9200();
  /* 11cc8184 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8186 pop ebp */
  EBP = (pop32());
  /* 11cc8187 ret  */
  ESPCHK(0x11cc8110u, _esp0);
  ESP += 4; return;
}

/* FUN_100081b0 @ 0x11cc81b0 (86 bytes, 35 insns) */
void f_11cc81b0(void) {
  FTRACE(0x11cc81b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc81b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc81b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc81b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc81b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc81b7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc81b8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc81b9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc81ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc81bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc81c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc81c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc81c9 pop ecx */
  ECX = (pop32());
  /* 11cc81ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc81cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc81d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc81d4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc81d7 mov esi, esp */
  ESI = (ESP);
  /* 11cc81d9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc81da call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc81e0u);
  /* 11cc81e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc81e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc81e5 call 0x11cc9200 */
  push32(0x11cc81eau); f_11cc9200();
  /* 11cc81ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc81ec jle 0x11cc81f2 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc81f2;
  /* 11cc81ee mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc81f2:;
  /* 11cc81f2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc81f5 pop edi */
  EDI = (pop32());
  /* 11cc81f6 pop esi */
  ESI = (pop32());
  /* 11cc81f7 pop ebx */
  EBX = (pop32());
  /* 11cc81f8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc81fb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc81fd call 0x11cc9200 */
  push32(0x11cc8202u); f_11cc9200();
  /* 11cc8202 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8204 pop ebp */
  EBP = (pop32());
  /* 11cc8205 ret  */
  ESPCHK(0x11cc81b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008220 @ 0x11cc8220 (42 bytes, 21 insns) */
void f_11cc8220(void) {
  FTRACE(0x11cc8220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8220 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8221 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8223 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8226 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8227 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8228 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8229 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc822a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc822d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8232 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8237 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8239 pop ecx */
  ECX = (pop32());
  /* 11cc823a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc823d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8240 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8243 pop edi */
  EDI = (pop32());
  /* 11cc8244 pop esi */
  ESI = (pop32());
  /* 11cc8245 pop ebx */
  EBX = (pop32());
  /* 11cc8246 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8248 pop ebp */
  EBP = (pop32());
  /* 11cc8249 ret  */
  ESPCHK(0x11cc8220u, _esp0);
  ESP += 4; return;
}

/* FUN_10008260 @ 0x11cc8260 (235 bytes, 78 insns) */
void f_11cc8260(void) {
  FTRACE(0x11cc8260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8260 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8261 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8263 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8269 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc826a push esi */
  push32((uint32_t)(ESI));
  /* 11cc826b push edi */
  push32((uint32_t)(EDI));
  /* 11cc826c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc826d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 11cc8273 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 11cc8278 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc827d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc827f pop ecx */
  ECX = (pop32());
  /* 11cc8280 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8283 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 11cc828a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11cc8291 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8294 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8297 mov esi, esp */
  ESI = (ESP);
  /* 11cc8299 push eax */
  push32((uint32_t)(EAX));
  /* 11cc829a call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc82a0u);
  /* 11cc82a0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc82a3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc82a5 call 0x11cc9200 */
  push32(0x11cc82aau); f_11cc9200();
  /* 11cc82aa mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 11cc82ad cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc82b1 jle 0x11cc8324 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc8324;
  /* 11cc82b3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11cc82ba mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11cc82c1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 11cc82c8 jmp 0x11cc82d3 */
  goto L_11cc82d3;
L_11cc82ca:;
  /* 11cc82ca mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc82cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc82d0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_11cc82d3:;
  /* 11cc82d3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc82d6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc82d9 jge 0x11cc8310 */
  if ((C.sf==C.of)) goto L_11cc8310;
  /* 11cc82db mov esi, esp */
  ESI = (ESP);
  /* 11cc82dd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc82e0 push eax */
  push32((uint32_t)(EAX));
  /* 11cc82e1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11cc82e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc82e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc82e8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc82eb push edx */
  push32((uint32_t)(EDX));
  /* 11cc82ec call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc82f2u);
  /* 11cc82f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc82f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc82f7 call 0x11cc9200 */
  push32(0x11cc82fcu); f_11cc9200();
  /* 11cc82fc mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cc82ff add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8302 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 11cc8305 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cc8308 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc830b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11cc830e jmp 0x11cc82ca */
  goto L_11cc82ca;
L_11cc8310:;
  /* 11cc8310 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11cc8313 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cc8314 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cc8317 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11cc831a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11cc831d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11cc831e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11cc8321 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11cc8324:;
  /* 11cc8324 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8327 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11cc832a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11cc832c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cc832f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cc8332 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8335 pop edi */
  EDI = (pop32());
  /* 11cc8336 pop esi */
  ESI = (pop32());
  /* 11cc8337 pop ebx */
  EBX = (pop32());
  /* 11cc8338 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc833e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8340 call 0x11cc9200 */
  push32(0x11cc8345u); f_11cc9200();
  /* 11cc8345 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8347 pop ebp */
  EBP = (pop32());
  /* 11cc8348 ret 4 */
  ESPCHK(0x11cc8260u, _esp0);
  ESP += 8; return;
}

/* FUN_10008390 @ 0x11cc8390 (250 bytes, 89 insns) */
void f_11cc8390(void) {
  FTRACE(0x11cc8390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8390 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8391 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8393 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8396 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8397 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8398 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8399 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc839a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc839d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc83a2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc83a7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc83a9 pop ecx */
  ECX = (pop32());
  /* 11cc83aa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc83ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc83b0 call 0x11cc10e1 */
  push32(0x11cc83b5u); f_11cc10e1();
  /* 11cc83b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc83ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc83bc je 0x11cc8479 */
  if (C.zf) goto L_11cc8479;
  /* 11cc83c2 mov esi, esp */
  ESI = (ESP);
  /* 11cc83c4 mov eax, dword ptr [0x11cfcd70] */
  EAX = (r32((uint32_t)(0x11cfcd70)));
  /* 11cc83c9 push eax */
  push32((uint32_t)(EAX));
  /* 11cc83ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc83cd push ecx */
  push32((uint32_t)(ECX));
  /* 11cc83ce mov edx, dword ptr [0x11cff40c] */
  EDX = (r32((uint32_t)(0x11cff40c)));
  /* 11cc83d4 push edx */
  push32((uint32_t)(EDX));
  /* 11cc83d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc83d8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc83db push eax */
  push32((uint32_t)(EAX));
  /* 11cc83dc call dword ptr [0x11d014c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c4))), 0x11cc83e2u);
  /* 11cc83e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc83e5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc83e7 call 0x11cc9200 */
  push32(0x11cc83ecu); f_11cc9200();
  /* 11cc83ec mov esi, esp */
  ESI = (ESP);
  /* 11cc83ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc83f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc83f3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc83f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc83f7 call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc83fdu);
  /* 11cc83fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8400 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8402 call 0x11cc9200 */
  push32(0x11cc8407u); f_11cc9200();
  /* 11cc8407 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc8409 jle 0x11cc842c */
  if ((C.zf||C.sf!=C.of)) goto L_11cc842c;
  /* 11cc840b mov esi, esp */
  ESI = (ESP);
  /* 11cc840d push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc840f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8412 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8415 push edx */
  push32((uint32_t)(EDX));
  /* 11cc8416 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8419 push eax */
  push32((uint32_t)(EAX));
  /* 11cc841a call dword ptr [0x11d01538] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01538))), 0x11cc8420u);
  /* 11cc8420 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8423 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8425 call 0x11cc9200 */
  push32(0x11cc842au); f_11cc9200();
  /* 11cc842a jmp 0x11cc8479 */
  goto L_11cc8479;
L_11cc842c:;
  /* 11cc842c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc842f call 0x11cc11db */
  push32(0x11cc8434u); f_11cc11db();
  /* 11cc8434 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc8439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc843b jne 0x11cc8479 */
  if (!C.zf) goto L_11cc8479;
  /* 11cc843d mov esi, esp */
  ESI = (ESP);
  /* 11cc843f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8441 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8444 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8445 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc844bu);
  /* 11cc844b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc844e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8450 call 0x11cc9200 */
  push32(0x11cc8455u); f_11cc9200();
  /* 11cc8455 mov esi, esp */
  ESI = (ESP);
  /* 11cc8457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8459 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc845b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc845e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cc8461 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8462 mov cl, byte ptr [0x11cfcd74] */
  CL = (r8((uint32_t)(0x11cfcd74)));
  /* 11cc8468 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8469 call dword ptr [0x11d01528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01528))), 0x11cc846fu);
  /* 11cc846f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8474 call 0x11cc9200 */
  push32(0x11cc8479u); f_11cc9200();
L_11cc8479:;
  /* 11cc8479 pop edi */
  EDI = (pop32());
  /* 11cc847a pop esi */
  ESI = (pop32());
  /* 11cc847b pop ebx */
  EBX = (pop32());
  /* 11cc847c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc847f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8481 call 0x11cc9200 */
  push32(0x11cc8486u); f_11cc9200();
  /* 11cc8486 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8488 pop ebp */
  EBP = (pop32());
  /* 11cc8489 ret  */
  ESPCHK(0x11cc8390u, _esp0);
  ESP += 4; return;
}

/* FUN_100084d0 @ 0x11cc84d0 (74 bytes, 31 insns) */
void f_11cc84d0(void) {
  FTRACE(0x11cc84d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc84d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc84d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc84d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc84d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc84d7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc84d8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc84d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc84da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc84dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc84e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc84e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc84e9 pop ecx */
  ECX = (pop32());
  /* 11cc84ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc84ed mov esi, esp */
  ESI = (ESP);
  /* 11cc84ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc84f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc84f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc84f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc84f7 call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc84fdu);
  /* 11cc84fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8500 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8502 call 0x11cc9200 */
  push32(0x11cc8507u); f_11cc9200();
  /* 11cc8507 pop edi */
  EDI = (pop32());
  /* 11cc8508 pop esi */
  ESI = (pop32());
  /* 11cc8509 pop ebx */
  EBX = (pop32());
  /* 11cc850a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc850d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc850f call 0x11cc9200 */
  push32(0x11cc8514u); f_11cc9200();
  /* 11cc8514 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8516 pop ebp */
  EBP = (pop32());
  /* 11cc8517 ret 4 */
  ESPCHK(0x11cc84d0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008530 @ 0x11cc8530 (114 bytes, 45 insns) */
void f_11cc8530(void) {
  FTRACE(0x11cc8530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8530 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8531 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8533 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8536 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8537 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8538 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8539 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc853a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc853d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc8542 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8547 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8549 pop ecx */
  ECX = (pop32());
  /* 11cc854a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc854d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc8551 mov esi, esp */
  ESI = (ESP);
  /* 11cc8553 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8556 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc855a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cc855d push edx */
  push32((uint32_t)(EDX));
  /* 11cc855e call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc8564u);
  /* 11cc8564 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8567 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8569 call 0x11cc9200 */
  push32(0x11cc856eu); f_11cc9200();
  /* 11cc856e mov esi, eax */
  ESI = (EAX);
  /* 11cc8570 mov edi, esp */
  EDI = (ESP);
  /* 11cc8572 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8575 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8576 call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc857cu);
  /* 11cc857c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc857f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8581 call 0x11cc9200 */
  push32(0x11cc8586u); f_11cc9200();
  /* 11cc8586 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8588 jne 0x11cc858e */
  if (!C.zf) goto L_11cc858e;
  /* 11cc858a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc858e:;
  /* 11cc858e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc8591 pop edi */
  EDI = (pop32());
  /* 11cc8592 pop esi */
  ESI = (pop32());
  /* 11cc8593 pop ebx */
  EBX = (pop32());
  /* 11cc8594 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8597 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8599 call 0x11cc9200 */
  push32(0x11cc859eu); f_11cc9200();
  /* 11cc859e mov esp, ebp */
  ESP = (EBP);
  /* 11cc85a0 pop ebp */
  EBP = (pop32());
  /* 11cc85a1 ret  */
  ESPCHK(0x11cc8530u, _esp0);
  ESP += 4; return;
}

/* FUN_100085c0 @ 0x11cc85c0 (83 bytes, 34 insns) */
void f_11cc85c0(void) {
  FTRACE(0x11cc85c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc85c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc85c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc85c3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc85c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc85c7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc85c8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc85c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc85ca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc85cd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc85d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc85d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc85d9 pop ecx */
  ECX = (pop32());
  /* 11cc85da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc85dd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc85e1 mov esi, esp */
  ESI = (ESP);
  /* 11cc85e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc85e6 push eax */
  push32((uint32_t)(EAX));
  /* 11cc85e7 call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc85edu);
  /* 11cc85ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc85f0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc85f2 call 0x11cc9200 */
  push32(0x11cc85f7u); f_11cc9200();
  /* 11cc85f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc85f9 jle 0x11cc85ff */
  if ((C.zf||C.sf!=C.of)) goto L_11cc85ff;
  /* 11cc85fb mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc85ff:;
  /* 11cc85ff mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc8602 pop edi */
  EDI = (pop32());
  /* 11cc8603 pop esi */
  ESI = (pop32());
  /* 11cc8604 pop ebx */
  EBX = (pop32());
  /* 11cc8605 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8608 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc860a call 0x11cc9200 */
  push32(0x11cc860fu); f_11cc9200();
  /* 11cc860f mov esp, ebp */
  ESP = (EBP);
  /* 11cc8611 pop ebp */
  EBP = (pop32());
  /* 11cc8612 ret  */
  ESPCHK(0x11cc85c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008630 @ 0x11cc8630 (126 bytes, 48 insns) */
void f_11cc8630(void) {
  FTRACE(0x11cc8630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8630 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8631 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8633 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8636 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8637 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8638 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8639 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc863a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc863d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8642 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8647 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8649 pop ecx */
  ECX = (pop32());
  /* 11cc864a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc864d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8653 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 11cc8656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8659 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc865c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 11cc865f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8662 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8663 call 0x11cc104b */
  push32(0x11cc8668u); f_11cc104b();
  /* 11cc8668 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc866b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc866e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 11cc8671 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8674 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11cc8677 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11cc8679 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc867c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc867f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11cc8682 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8685 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8688 mov esi, esp */
  ESI = (ESP);
  /* 11cc868a push ecx */
  push32((uint32_t)(ECX));
  /* 11cc868b call dword ptr [0x11d01548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01548))), 0x11cc8691u);
  /* 11cc8691 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8694 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8696 call 0x11cc9200 */
  push32(0x11cc869bu); f_11cc9200();
  /* 11cc869b pop edi */
  EDI = (pop32());
  /* 11cc869c pop esi */
  ESI = (pop32());
  /* 11cc869d pop ebx */
  EBX = (pop32());
  /* 11cc869e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc86a1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc86a3 call 0x11cc9200 */
  push32(0x11cc86a8u); f_11cc9200();
  /* 11cc86a8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc86aa pop ebp */
  EBP = (pop32());
  /* 11cc86ab ret 0x10 */
  ESPCHK(0x11cc8630u, _esp0);
  ESP += 20; return;
}

/* FUN_100086d0 @ 0x11cc86d0 (136 bytes, 54 insns) */
void f_11cc86d0(void) {
  FTRACE(0x11cc86d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc86d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc86d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc86d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc86d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc86d7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc86d8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc86d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc86da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc86dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc86e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc86e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc86e9 pop ecx */
  ECX = (pop32());
  /* 11cc86ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc86ed mov esi, esp */
  ESI = (ESP);
  /* 11cc86ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc86f2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc86f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc86f6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc86f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc86fa call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc8700u);
  /* 11cc8700 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8703 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8705 call 0x11cc9200 */
  push32(0x11cc870au); f_11cc9200();
  /* 11cc870a mov esi, esp */
  ESI = (ESP);
  /* 11cc870c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc870f push edx */
  push32((uint32_t)(EDX));
  /* 11cc8710 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8713 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8716 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8717 call dword ptr [0x11d01518] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01518))), 0x11cc871du);
  /* 11cc871d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8720 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8722 call 0x11cc9200 */
  push32(0x11cc8727u); f_11cc9200();
  /* 11cc8727 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc872a push ecx */
  push32((uint32_t)(ECX));
  /* 11cc872b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 11cc872e push edx */
  push32((uint32_t)(EDX));
  /* 11cc872f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8732 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8735 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8736 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8739 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc873c push ecx */
  push32((uint32_t)(ECX));
  /* 11cc873d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8740 call 0x11cc1069 */
  push32(0x11cc8745u); f_11cc1069();
  /* 11cc8745 pop edi */
  EDI = (pop32());
  /* 11cc8746 pop esi */
  ESI = (pop32());
  /* 11cc8747 pop ebx */
  EBX = (pop32());
  /* 11cc8748 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc874b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc874d call 0x11cc9200 */
  push32(0x11cc8752u); f_11cc9200();
  /* 11cc8752 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8754 pop ebp */
  EBP = (pop32());
  /* 11cc8755 ret 0x10 */
  ESPCHK(0x11cc86d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10008780 @ 0x11cc8780 (150 bytes, 58 insns) */
void f_11cc8780(void) {
  FTRACE(0x11cc8780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8780 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8781 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8783 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8786 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8787 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8788 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8789 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc878a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc878d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8792 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8797 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8799 pop ecx */
  ECX = (pop32());
  /* 11cc879a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc879d mov esi, esp */
  ESI = (ESP);
  /* 11cc879f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc87a2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc87a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87a6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc87aa call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc87b0u);
  /* 11cc87b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc87b5 call 0x11cc9200 */
  push32(0x11cc87bau); f_11cc9200();
  /* 11cc87ba mov esi, esp */
  ESI = (ESP);
  /* 11cc87bc push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 11cc87c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87c4 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87c7 push edx */
  push32((uint32_t)(EDX));
  /* 11cc87c8 mov eax, dword ptr [0x11cff410] */
  EAX = (r32((uint32_t)(0x11cff410)));
  /* 11cc87cd push eax */
  push32((uint32_t)(EAX));
  /* 11cc87ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87d1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc87d5 call dword ptr [0x11d014c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c4))), 0x11cc87dbu);
  /* 11cc87db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc87e0 call 0x11cc9200 */
  push32(0x11cc87e5u); f_11cc9200();
  /* 11cc87e5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc87e8 push edx */
  push32((uint32_t)(EDX));
  /* 11cc87e9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11cc87ec push eax */
  push32((uint32_t)(EAX));
  /* 11cc87ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87f0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc87f4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87f7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc87fa push edx */
  push32((uint32_t)(EDX));
  /* 11cc87fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc87fe call 0x11cc1069 */
  push32(0x11cc8803u); f_11cc1069();
  /* 11cc8803 pop edi */
  EDI = (pop32());
  /* 11cc8804 pop esi */
  ESI = (pop32());
  /* 11cc8805 pop ebx */
  EBX = (pop32());
  /* 11cc8806 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8809 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc880b call 0x11cc9200 */
  push32(0x11cc8810u); f_11cc9200();
  /* 11cc8810 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8812 pop ebp */
  EBP = (pop32());
  /* 11cc8813 ret 0xc */
  ESPCHK(0x11cc8780u, _esp0);
  ESP += 16; return;
}

/* FUN_10008840 @ 0x11cc8840 (255 bytes, 92 insns) */
void f_11cc8840(void) {
  FTRACE(0x11cc8840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8840 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8841 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8843 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8846 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8847 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8848 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8849 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc884a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc884d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8852 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8857 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8859 pop ecx */
  ECX = (pop32());
  /* 11cc885a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc885d mov esi, esp */
  ESI = (ESP);
  /* 11cc885f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8862 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11cc8865 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8866 call dword ptr [0x11d014c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c8))), 0x11cc886cu);
  /* 11cc886c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc886f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8871 call 0x11cc9200 */
  push32(0x11cc8876u); f_11cc9200();
  /* 11cc8876 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc887b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc887d je 0x11cc88c5 */
  if (C.zf) goto L_11cc88c5;
  /* 11cc887f mov esi, esp */
  ESI = (ESP);
  /* 11cc8881 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8884 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11cc8886 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8887 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc888a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 11cc888d push edx */
  push32((uint32_t)(EDX));
  /* 11cc888e call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc8894u);
  /* 11cc8894 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8897 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8899 call 0x11cc9200 */
  push32(0x11cc889eu); f_11cc9200();
  /* 11cc889e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc88a0 jle 0x11cc88c5 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc88c5;
  /* 11cc88a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc88a5 call 0x11cc1253 */
  push32(0x11cc88aau); f_11cc1253();
  /* 11cc88aa mov esi, esp */
  ESI = (ESP);
  /* 11cc88ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc88ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc88b1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 11cc88b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc88b5 call dword ptr [0x11d014e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014e0))), 0x11cc88bbu);
  /* 11cc88bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc88be cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc88c0 call 0x11cc9200 */
  push32(0x11cc88c5u); f_11cc9200();
L_11cc88c5:;
  /* 11cc88c5 mov esi, esp */
  ESI = (ESP);
  /* 11cc88c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc88ca mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11cc88cd push eax */
  push32((uint32_t)(EAX));
  /* 11cc88ce call dword ptr [0x11d014c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014c8))), 0x11cc88d4u);
  /* 11cc88d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc88d7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc88d9 call 0x11cc9200 */
  push32(0x11cc88deu); f_11cc9200();
  /* 11cc88de and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc88e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc88e5 jne 0x11cc892e */
  if (!C.zf) goto L_11cc892e;
  /* 11cc88e7 mov esi, esp */
  ESI = (ESP);
  /* 11cc88e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc88ec mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cc88ee push edx */
  push32((uint32_t)(EDX));
  /* 11cc88ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc88f2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 11cc88f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc88f6 call dword ptr [0x11d0151c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0151c))), 0x11cc88fcu);
  /* 11cc88fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc88ff cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8901 call 0x11cc9200 */
  push32(0x11cc8906u); f_11cc9200();
  /* 11cc8906 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8909 jge 0x11cc892e */
  if ((C.sf==C.of)) goto L_11cc892e;
  /* 11cc890b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc890e call 0x11cc10be */
  push32(0x11cc8913u); f_11cc10be();
  /* 11cc8913 mov esi, esp */
  ESI = (ESP);
  /* 11cc8915 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc8917 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc891a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 11cc891d push eax */
  push32((uint32_t)(EAX));
  /* 11cc891e call dword ptr [0x11d014e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d014e0))), 0x11cc8924u);
  /* 11cc8924 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8927 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8929 call 0x11cc9200 */
  push32(0x11cc892eu); f_11cc9200();
L_11cc892e:;
  /* 11cc892e pop edi */
  EDI = (pop32());
  /* 11cc892f pop esi */
  ESI = (pop32());
  /* 11cc8930 pop ebx */
  EBX = (pop32());
  /* 11cc8931 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8934 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8936 call 0x11cc9200 */
  push32(0x11cc893bu); f_11cc9200();
  /* 11cc893b mov esp, ebp */
  ESP = (EBP);
  /* 11cc893d pop ebp */
  EBP = (pop32());
  /* 11cc893e ret  */
  ESPCHK(0x11cc8840u, _esp0);
  ESP += 4; return;
}

/* FUN_10008980 @ 0x11cc8980 (158 bytes, 60 insns) */
void f_11cc8980(void) {
  FTRACE(0x11cc8980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8980 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8981 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8983 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8986 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8987 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8988 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8989 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc898a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc898d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8992 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8997 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8999 pop ecx */
  ECX = (pop32());
  /* 11cc899a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc899d mov esi, esp */
  ESI = (ESP);
  /* 11cc899f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc89a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc89a4 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc89a7 push eax */
  push32((uint32_t)(EAX));
  /* 11cc89a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc89ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cc89ad push edx */
  push32((uint32_t)(EDX));
  /* 11cc89ae call dword ptr [0x11d01550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01550))), 0x11cc89b4u);
  /* 11cc89b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc89b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc89b9 call 0x11cc9200 */
  push32(0x11cc89beu); f_11cc9200();
  /* 11cc89be mov esi, esp */
  ESI = (ESP);
  /* 11cc89c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc89c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc89c5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11cc89c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc89c9 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc89cfu);
  /* 11cc89cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc89d2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc89d4 call 0x11cc9200 */
  push32(0x11cc89d9u); f_11cc9200();
  /* 11cc89d9 mov esi, esp */
  ESI = (ESP);
  /* 11cc89db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc89de mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cc89e1 push eax */
  push32((uint32_t)(EAX));
  /* 11cc89e2 call dword ptr [0x11d0148c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0148c))), 0x11cc89e8u);
  /* 11cc89e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc89eb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc89ed call 0x11cc9200 */
  push32(0x11cc89f2u); f_11cc9200();
  /* 11cc89f2 mov esi, esp */
  ESI = (ESP);
  /* 11cc89f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc89f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc89f9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc89fc push ecx */
  push32((uint32_t)(ECX));
  /* 11cc89fd call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc8a03u);
  /* 11cc8a03 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8a06 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8a08 call 0x11cc9200 */
  push32(0x11cc8a0du); f_11cc9200();
  /* 11cc8a0d pop edi */
  EDI = (pop32());
  /* 11cc8a0e pop esi */
  ESI = (pop32());
  /* 11cc8a0f pop ebx */
  EBX = (pop32());
  /* 11cc8a10 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8a13 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8a15 call 0x11cc9200 */
  push32(0x11cc8a1au); f_11cc9200();
  /* 11cc8a1a mov esp, ebp */
  ESP = (EBP);
  /* 11cc8a1c pop ebp */
  EBP = (pop32());
  /* 11cc8a1d ret  */
  ESPCHK(0x11cc8980u, _esp0);
  ESP += 4; return;
}

/* FUN_10008a50 @ 0x11cc8a50 (158 bytes, 60 insns) */
void f_11cc8a50(void) {
  FTRACE(0x11cc8a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8a50 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8a51 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8a53 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8a56 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8a57 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8a58 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8a59 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8a5a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc8a5d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8a62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8a67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8a69 pop ecx */
  ECX = (pop32());
  /* 11cc8a6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8a6d mov esi, esp */
  ESI = (ESP);
  /* 11cc8a6f push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8a71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8a74 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8a77 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8a78 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8a7b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11cc8a7d push edx */
  push32((uint32_t)(EDX));
  /* 11cc8a7e call dword ptr [0x11d01550] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01550))), 0x11cc8a84u);
  /* 11cc8a84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8a87 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8a89 call 0x11cc9200 */
  push32(0x11cc8a8eu); f_11cc9200();
  /* 11cc8a8e mov esi, esp */
  ESI = (ESP);
  /* 11cc8a90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8a92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8a95 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 11cc8a98 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8a99 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc8a9fu);
  /* 11cc8a9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8aa2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8aa4 call 0x11cc9200 */
  push32(0x11cc8aa9u); f_11cc9200();
  /* 11cc8aa9 mov esi, esp */
  ESI = (ESP);
  /* 11cc8aab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8aae mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11cc8ab1 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8ab2 call dword ptr [0x11d01494] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01494))), 0x11cc8ab8u);
  /* 11cc8ab8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8abb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8abd call 0x11cc9200 */
  push32(0x11cc8ac2u); f_11cc9200();
  /* 11cc8ac2 mov esi, esp */
  ESI = (ESP);
  /* 11cc8ac4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8ac6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8ac9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8acc push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8acd call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc8ad3u);
  /* 11cc8ad3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8ad6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8ad8 call 0x11cc9200 */
  push32(0x11cc8addu); f_11cc9200();
  /* 11cc8add pop edi */
  EDI = (pop32());
  /* 11cc8ade pop esi */
  ESI = (pop32());
  /* 11cc8adf pop ebx */
  EBX = (pop32());
  /* 11cc8ae0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8ae3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8ae5 call 0x11cc9200 */
  push32(0x11cc8aeau); f_11cc9200();
  /* 11cc8aea mov esp, ebp */
  ESP = (EBP);
  /* 11cc8aec pop ebp */
  EBP = (pop32());
  /* 11cc8aed ret  */
  ESPCHK(0x11cc8a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b20 @ 0x11cc8b20 (49 bytes, 22 insns) */
void f_11cc8b20(void) {
  FTRACE(0x11cc8b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8b20 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8b21 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8b23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8b26 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8b27 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8b28 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8b29 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8b2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc8b2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8b32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8b37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8b39 pop ecx */
  ECX = (pop32());
  /* 11cc8b3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8b3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8b40 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 11cc8b47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8b4a pop edi */
  EDI = (pop32());
  /* 11cc8b4b pop esi */
  ESI = (pop32());
  /* 11cc8b4c pop ebx */
  EBX = (pop32());
  /* 11cc8b4d mov esp, ebp */
  ESP = (EBP);
  /* 11cc8b4f pop ebp */
  EBP = (pop32());
  /* 11cc8b50 ret  */
  ESPCHK(0x11cc8b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10008b60 @ 0x11cc8b60 (77 bytes, 32 insns) */
void f_11cc8b60(void) {
  FTRACE(0x11cc8b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8b61 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8b63 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8b66 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8b67 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8b68 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8b69 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8b6a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc8b6d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8b72 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8b77 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8b79 pop ecx */
  ECX = (pop32());
  /* 11cc8b7a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8b7d mov esi, esp */
  ESI = (ESP);
  /* 11cc8b7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8b82 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8b83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8b86 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8b89 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8b8a call dword ptr [0x11d01510] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01510))), 0x11cc8b90u);
  /* 11cc8b90 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8b93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8b95 call 0x11cc9200 */
  push32(0x11cc8b9au); f_11cc9200();
  /* 11cc8b9a pop edi */
  EDI = (pop32());
  /* 11cc8b9b pop esi */
  ESI = (pop32());
  /* 11cc8b9c pop ebx */
  EBX = (pop32());
  /* 11cc8b9d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8ba0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8ba2 call 0x11cc9200 */
  push32(0x11cc8ba7u); f_11cc9200();
  /* 11cc8ba7 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8ba9 pop ebp */
  EBP = (pop32());
  /* 11cc8baa ret 4 */
  ESPCHK(0x11cc8b60u, _esp0);
  ESP += 8; return;
}

/* FUN_10008bc0 @ 0x11cc8bc0 (102 bytes, 40 insns) */
void f_11cc8bc0(void) {
  FTRACE(0x11cc8bc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8bc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8bc1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8bc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8bc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8bc7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8bc8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8bca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc8bcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8bd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8bd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8bd9 pop ecx */
  ECX = (pop32());
  /* 11cc8bda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8bdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8be0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8be3 mov esi, esp */
  ESI = (ESP);
  /* 11cc8be5 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8be6 call dword ptr [0x11d01548] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01548))), 0x11cc8becu);
  /* 11cc8bec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8bef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8bf1 call 0x11cc9200 */
  push32(0x11cc8bf6u); f_11cc9200();
  /* 11cc8bf6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8bf9 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8bfc mov esi, esp */
  ESI = (ESP);
  /* 11cc8bfe push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8bff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8c02 push edx */
  push32((uint32_t)(EDX));
  /* 11cc8c03 call dword ptr [0x11d01490] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01490))), 0x11cc8c09u);
  /* 11cc8c09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8c0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8c0e call 0x11cc9200 */
  push32(0x11cc8c13u); f_11cc9200();
  /* 11cc8c13 pop edi */
  EDI = (pop32());
  /* 11cc8c14 pop esi */
  ESI = (pop32());
  /* 11cc8c15 pop ebx */
  EBX = (pop32());
  /* 11cc8c16 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8c19 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8c1b call 0x11cc9200 */
  push32(0x11cc8c20u); f_11cc9200();
  /* 11cc8c20 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8c22 pop ebp */
  EBP = (pop32());
  /* 11cc8c23 ret 4 */
  ESPCHK(0x11cc8bc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008c40 @ 0x11cc8c40 (184 bytes, 69 insns) */
void f_11cc8c40(void) {
  FTRACE(0x11cc8c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8c41 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8c43 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8c46 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8c47 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8c48 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8c49 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8c4a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc8c4d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc8c52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8c57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8c59 pop ecx */
  ECX = (pop32());
  /* 11cc8c5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8c5d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc8c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8c64 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8c68 jne 0x11cc8c97 */
  if (!C.zf) goto L_11cc8c97;
  /* 11cc8c6a mov esi, esp */
  ESI = (ESP);
  /* 11cc8c6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8c6f push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8c70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8c72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8c75 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8c78 push edx */
  push32((uint32_t)(EDX));
  /* 11cc8c79 call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc8c7fu);
  /* 11cc8c7f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8c82 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8c84 call 0x11cc9200 */
  push32(0x11cc8c89u); f_11cc9200();
  /* 11cc8c89 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8c8c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc8c8e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cc8c91 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8c94 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_11cc8c97:;
  /* 11cc8c97 mov esi, esp */
  ESI = (ESP);
  /* 11cc8c99 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8c9c push eax */
  push32((uint32_t)(EAX));
  /* 11cc8c9d call dword ptr [0x11d01554] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01554))), 0x11cc8ca3u);
  /* 11cc8ca3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8ca6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8ca8 call 0x11cc9200 */
  push32(0x11cc8cadu); f_11cc9200();
  /* 11cc8cad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8cb0 jne 0x11cc8ce2 */
  if (!C.zf) goto L_11cc8ce2;
  /* 11cc8cb2 mov esi, esp */
  ESI = (ESP);
  /* 11cc8cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8cb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8cb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8cba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8cbd push edx */
  push32((uint32_t)(EDX));
  /* 11cc8cbe call dword ptr [0x11d0154c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0154c))), 0x11cc8cc4u);
  /* 11cc8cc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8cc7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8cc9 call 0x11cc9200 */
  push32(0x11cc8cceu); f_11cc9200();
  /* 11cc8cce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8cd1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc8cd3 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11cc8cd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8cd9 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8cdc jne 0x11cc8ce2 */
  if (!C.zf) goto L_11cc8ce2;
  /* 11cc8cde mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc8ce2:;
  /* 11cc8ce2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc8ce5 pop edi */
  EDI = (pop32());
  /* 11cc8ce6 pop esi */
  ESI = (pop32());
  /* 11cc8ce7 pop ebx */
  EBX = (pop32());
  /* 11cc8ce8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8ceb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8ced call 0x11cc9200 */
  push32(0x11cc8cf2u); f_11cc9200();
  /* 11cc8cf2 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8cf4 pop ebp */
  EBP = (pop32());
  /* 11cc8cf5 ret 4 */
  ESPCHK(0x11cc8c40u, _esp0);
  ESP += 8; return;
}

/* FUN_10008d30 @ 0x11cc8d30 (110 bytes, 43 insns) */
void f_11cc8d30(void) {
  FTRACE(0x11cc8d30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8d30 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8d31 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8d33 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8d36 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8d37 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8d38 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8d39 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8d3a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 11cc8d3d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 11cc8d42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8d47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8d49 pop ecx */
  ECX = (pop32());
  /* 11cc8d4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8d4d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc8d51 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8d54 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8d55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8d58 call 0x11cc100a */
  push32(0x11cc8d5du); f_11cc100a();
  /* 11cc8d5d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11cc8d62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc8d64 je 0x11cc8d88 */
  if (C.zf) goto L_11cc8d88;
  /* 11cc8d66 mov esi, esp */
  ESI = (ESP);
  /* 11cc8d68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8d6b push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8d6c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc8d6f push edx */
  push32((uint32_t)(EDX));
  /* 11cc8d70 call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc8d76u);
  /* 11cc8d76 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8d79 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8d7b call 0x11cc9200 */
  push32(0x11cc8d80u); f_11cc9200();
  /* 11cc8d80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc8d82 jle 0x11cc8d88 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc8d88;
  /* 11cc8d84 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc8d88:;
  /* 11cc8d88 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc8d8b pop edi */
  EDI = (pop32());
  /* 11cc8d8c pop esi */
  ESI = (pop32());
  /* 11cc8d8d pop ebx */
  EBX = (pop32());
  /* 11cc8d8e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8d91 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8d93 call 0x11cc9200 */
  push32(0x11cc8d98u); f_11cc9200();
  /* 11cc8d98 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8d9a pop ebp */
  EBP = (pop32());
  /* 11cc8d9b ret 8 */
  ESPCHK(0x11cc8d30u, _esp0);
  ESP += 12; return;
}

/* FUN_10008dc0 @ 0x11cc8dc0 (42 bytes, 21 insns) */
void f_11cc8dc0(void) {
  FTRACE(0x11cc8dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8dc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8dc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8dc7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8dc8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8dca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 11cc8dcd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 11cc8dd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8dd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8dd9 pop ecx */
  ECX = (pop32());
  /* 11cc8dda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8ddd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8de0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8de3 pop edi */
  EDI = (pop32());
  /* 11cc8de4 pop esi */
  ESI = (pop32());
  /* 11cc8de5 pop ebx */
  EBX = (pop32());
  /* 11cc8de6 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8de8 pop ebp */
  EBP = (pop32());
  /* 11cc8de9 ret  */
  ESPCHK(0x11cc8dc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008e00 @ 0x11cc8e00 (155 bytes, 58 insns) */
void f_11cc8e00(void) {
  FTRACE(0x11cc8e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8e01 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8e03 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8e06 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8e07 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8e08 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8e09 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8e0a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11cc8e0d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11cc8e12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8e17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8e19 pop ecx */
  ECX = (pop32());
  /* 11cc8e1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8e1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc8e23 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 11cc8e26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e29 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 11cc8e2c mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 11cc8e2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc8e35 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 11cc8e38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e3b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc8e3e mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 11cc8e41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e44 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cc8e47 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 11cc8e4a mov esi, esp */
  ESI = (ESP);
  /* 11cc8e4c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11cc8e51 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8e54 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11cc8e57 push edx */
  push32((uint32_t)(EDX));
  /* 11cc8e58 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11cc8e5b push eax */
  push32((uint32_t)(EAX));
  /* 11cc8e5c call dword ptr [0x11d01544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01544))), 0x11cc8e62u);
  /* 11cc8e62 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8e65 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8e67 call 0x11cc9200 */
  push32(0x11cc8e6cu); f_11cc9200();
  /* 11cc8e6c mov esi, esp */
  ESI = (ESP);
  /* 11cc8e6e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8e72 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cc8e75 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8e76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8e78 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc8e7eu);
  /* 11cc8e7e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8e81 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8e83 call 0x11cc9200 */
  push32(0x11cc8e88u); f_11cc9200();
  /* 11cc8e88 pop edi */
  EDI = (pop32());
  /* 11cc8e89 pop esi */
  ESI = (pop32());
  /* 11cc8e8a pop ebx */
  EBX = (pop32());
  /* 11cc8e8b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8e8e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8e90 call 0x11cc9200 */
  push32(0x11cc8e95u); f_11cc9200();
  /* 11cc8e95 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8e97 pop ebp */
  EBP = (pop32());
  /* 11cc8e98 ret 0x14 */
  ESPCHK(0x11cc8e00u, _esp0);
  ESP += 24; return;
}

/* FUN_10008ed0 @ 0x11cc8ed0 (252 bytes, 91 insns) */
void f_11cc8ed0(void) {
  FTRACE(0x11cc8ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc8ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc8ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc8ed3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc8ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc8ed7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc8ed8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc8ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8eda lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 11cc8edd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 11cc8ee2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc8ee7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc8ee9 pop ecx */
  ECX = (pop32());
  /* 11cc8eea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc8eed mov esi, esp */
  ESI = (ESP);
  /* 11cc8eef push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8ef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8ef4 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 11cc8ef7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8ef8 call dword ptr [0x11d0152c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0152c))), 0x11cc8efeu);
  /* 11cc8efe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8f01 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f03 call 0x11cc9200 */
  push32(0x11cc8f08u); f_11cc9200();
  /* 11cc8f08 mov esi, esp */
  ESI = (ESP);
  /* 11cc8f0a push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 11cc8f0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f12 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 11cc8f15 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8f16 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11cc8f19 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8f1a call dword ptr [0x11d01544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01544))), 0x11cc8f20u);
  /* 11cc8f20 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8f23 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f25 call 0x11cc9200 */
  push32(0x11cc8f2au); f_11cc9200();
  /* 11cc8f2a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f2d cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f31 je 0x11cc8f42 */
  if (C.zf) goto L_11cc8f42;
  /* 11cc8f33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f36 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 11cc8f3a add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 11cc8f3e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_11cc8f42:;
  /* 11cc8f42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f45 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f49 je 0x11cc8f56 */
  if (C.zf) goto L_11cc8f56;
  /* 11cc8f4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f4e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 11cc8f52 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_11cc8f56:;
  /* 11cc8f56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f59 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11cc8f5b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 11cc8f5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc8f60 jne 0x11cc8f83 */
  if (!C.zf) goto L_11cc8f83;
  /* 11cc8f62 mov esi, esp */
  ESI = (ESP);
  /* 11cc8f64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8f66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f69 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 11cc8f6c push edx */
  push32((uint32_t)(EDX));
  /* 11cc8f6d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11cc8f70 push eax */
  push32((uint32_t)(EAX));
  /* 11cc8f71 push 3 */
  push32((uint32_t)(0x3u));
  /* 11cc8f73 call dword ptr [0x11d0153c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d0153c))), 0x11cc8f79u);
  /* 11cc8f79 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8f7c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f7e call 0x11cc9200 */
  push32(0x11cc8f83u); f_11cc9200();
L_11cc8f83:;
  /* 11cc8f83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f86 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11cc8f88 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 11cc8f8b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8f8e jne 0x11cc8fb1 */
  if (!C.zf) goto L_11cc8fb1;
  /* 11cc8f90 mov esi, esp */
  ESI = (ESP);
  /* 11cc8f92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc8f94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8f97 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 11cc8f9a push ecx */
  push32((uint32_t)(ECX));
  /* 11cc8f9b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11cc8f9e push edx */
  push32((uint32_t)(EDX));
  /* 11cc8f9f push 3 */
  push32((uint32_t)(0x3u));
  /* 11cc8fa1 call dword ptr [0x11d01528] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01528))), 0x11cc8fa7u);
  /* 11cc8fa7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8faa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8fac call 0x11cc9200 */
  push32(0x11cc8fb1u); f_11cc9200();
L_11cc8fb1:;
  /* 11cc8fb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc8fb4 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 11cc8fbb pop edi */
  EDI = (pop32());
  /* 11cc8fbc pop esi */
  ESI = (pop32());
  /* 11cc8fbd pop ebx */
  EBX = (pop32());
  /* 11cc8fbe add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc8fc1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc8fc3 call 0x11cc9200 */
  push32(0x11cc8fc8u); f_11cc9200();
  /* 11cc8fc8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc8fca pop ebp */
  EBP = (pop32());
  /* 11cc8fcb ret  */
  ESPCHK(0x11cc8ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009010 @ 0x11cc9010 (143 bytes, 53 insns) */
void f_11cc9010(void) {
  FTRACE(0x11cc9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9010 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9011 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9013 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9016 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9017 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9018 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9019 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc901a lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 11cc901d mov ecx, 0x14 */
  ECX = (0x14u);
  /* 11cc9022 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 11cc9027 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11cc9029 pop ecx */
  ECX = (pop32());
  /* 11cc902a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc902d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc9031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9034 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9038 je 0x11cc908b */
  if (C.zf) goto L_11cc908b;
  /* 11cc903a mov esi, esp */
  ESI = (ESP);
  /* 11cc903c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 11cc9041 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9044 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 11cc9047 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9048 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 11cc904b push eax */
  push32((uint32_t)(EAX));
  /* 11cc904c call dword ptr [0x11d01544] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01544))), 0x11cc9052u);
  /* 11cc9052 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9055 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9057 call 0x11cc9200 */
  push32(0x11cc905cu); f_11cc9200();
  /* 11cc905c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc905f call 0x11cc11f4 */
  push32(0x11cc9064u); f_11cc11f4();
  /* 11cc9064 mov esi, esp */
  ESI = (ESP);
  /* 11cc9066 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9067 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11cc906a push ecx */
  push32((uint32_t)(ECX));
  /* 11cc906b call dword ptr [0x11d01534] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d01534))), 0x11cc9071u);
  /* 11cc9071 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9074 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9076 call 0x11cc9200 */
  push32(0x11cc907bu); f_11cc9200();
  /* 11cc907b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc907d jle 0x11cc908b */
  if ((C.zf||C.sf!=C.of)) goto L_11cc908b;
  /* 11cc907f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9082 call 0x11cc108c */
  push32(0x11cc9087u); f_11cc108c();
  /* 11cc9087 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_11cc908b:;
  /* 11cc908b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11cc908e pop edi */
  EDI = (pop32());
  /* 11cc908f pop esi */
  ESI = (pop32());
  /* 11cc9090 pop ebx */
  EBX = (pop32());
  /* 11cc9091 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9094 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9096 call 0x11cc9200 */
  push32(0x11cc909bu); f_11cc9200();
  /* 11cc909b mov esp, ebp */
  ESP = (EBP);
  /* 11cc909d pop ebp */
  EBP = (pop32());
  /* 11cc909e ret  */
  ESPCHK(0x11cc9010u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x11cc9200 (56 bytes, 28 insns) */
void f_11cc9200(void) {
  FTRACE(0x11cc9200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9200 jne 0x11cc9203 */
  if (!C.zf) goto L_11cc9203;
  /* 11cc9202 ret  */
  ESPCHK(0x11cc9200u, _esp0);
  ESP += 4; return;
L_11cc9203:;
  /* 11cc9203 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9204 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9206 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9209 push eax */
  push32((uint32_t)(EAX));
  /* 11cc920a push edx */
  push32((uint32_t)(EDX));
  /* 11cc920b push ebx */
  push32((uint32_t)(EBX));
  /* 11cc920c push esi */
  push32((uint32_t)(ESI));
  /* 11cc920d push edi */
  push32((uint32_t)(EDI));
  /* 11cc920e push 0x11cf938c */
  push32((uint32_t)(0x11cf938cu));
  /* 11cc9213 push 0x11cf9388 */
  push32((uint32_t)(0x11cf9388u));
  /* 11cc9218 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 11cc921a push 0x11cf9378 */
  push32((uint32_t)(0x11cf9378u));
  /* 11cc921f push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc9221 call 0x11cca080 */
  push32(0x11cc9226u); f_11cca080();
  /* 11cc9226 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9229 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc922c jne 0x11cc922f */
  if (!C.zf) goto L_11cc922f;
  /* 11cc922e int3  */
  x86_unimpl("int3 @ 0x11cc922e");
L_11cc922f:;
  /* 11cc922f pop edi */
  EDI = (pop32());
  /* 11cc9230 pop esi */
  ESI = (pop32());
  /* 11cc9231 pop ebx */
  EBX = (pop32());
  /* 11cc9232 pop edx */
  EDX = (pop32());
  /* 11cc9233 pop eax */
  EAX = (pop32());
  /* 11cc9234 mov esp, ebp */
  ESP = (EBP);
  /* 11cc9236 pop ebp */
  EBP = (pop32());
  /* 11cc9237 ret  */
  ESPCHK(0x11cc9200u, _esp0);
  ESP += 4; return;
}

/* FUN_10009240 @ 0x11cc9240 (20 bytes, 6 insns) */
void f_11cc9240(void) {
  FTRACE(0x11cc9240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9240 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9243 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11cc9246 call 0x11cca978 */
  push32(0x11cc924bu); f_11cca978();
  /* 11cc924b call 0x11cc925d */
  push32(0x11cc9250u); f_11cc925d();
  /* 11cc9250 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9253 ret  */
  ESPCHK(0x11cc9240u, _esp0);
  ESP += 4; return;
}

/* FUN_10009254 @ 0x11cc9254 (9 bytes, 2 insns) */
void f_11cc9254(void) {
  FTRACE(0x11cc9254u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9254 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11cc9258 call 0x11cca935 */
  push32(0x11cc925du); f_11cca935();
}

/* FUN_1000925d @ 0x11cc925d (145 bytes, 43 insns) */
void f_11cc925d(void) {
  FTRACE(0x11cc925du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc925d push edx */
  push32((uint32_t)(EDX));
  /* 11cc925e wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc925f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11cc9262 je 0x11cc92b4 */
  if (C.zf) goto L_11cc92b4;
  /* 11cc9264 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cc926a je 0x11cc9272 */
  if (C.zf) goto L_11cc9272;
  /* 11cc926c fldcw word ptr [0x11cf9718] */
  C.fcw = r16((uint32_t)(0x11cf9718));
L_11cc9272:;
  /* 11cc9272 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11cc9274 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc9275 fnstsw ax */
  AX = fpu_status();
  /* 11cc9277 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11cc9278 jp 0x11cc9297 */
  if (C.pf) goto L_11cc9297;
L_11cc927a:;
  /* 11cc927a cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9281 jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc9287 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11cc928c lea ecx, [0x11cfcd80] */
  ECX = ((uint32_t)(0x11cfcd80));
  /* 11cc9292 jmp 0x11cca99b */
  f_11cca99b(); return;
L_11cc9297:;
  /* 11cc9297 fld xword ptr [0x11cf971a] */
  fpu_push(rf80((uint32_t)(0x11cf971a)));
  /* 11cc929d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11cc929f:;
  /* 11cc929f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11cc92a1 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc92a2 fnstsw ax */
  AX = fpu_status();
  /* 11cc92a4 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11cc92a5 jp 0x11cc929f */
  if (C.pf) goto L_11cc929f;
  /* 11cc92a7 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cc92a9 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 11cc92ab jmp 0x11cc927a */
  goto L_11cc927a;
L_11cc92ad:;
  /* 11cc92ad call 0x11cca91c */
  push32(0x11cc92b2u); f_11cca91c();
  /* 11cc92b2 jmp 0x11cc92cf */
  goto L_11cc92cf;
L_11cc92b4:;
  /* 11cc92b4 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11cc92b9 jne 0x11cc92ad */
  if (!C.zf) goto L_11cc92ad;
  /* 11cc92bb cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc92c0 jne 0x11cc92ad */
  if (!C.zf) goto L_11cc92ad;
  /* 11cc92c2 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cc92c4 fld xword ptr [0x11cfce00] */
  fpu_push(rf80((uint32_t)(0x11cfce00)));
  /* 11cc92ca mov eax, 1 */
  EAX = (0x1u);
L_11cc92cf:;
  /* 11cc92cf cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc92d6 jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc92dc mov edx, 0x1e */
  EDX = (0x1eu);
  /* 11cc92e1 lea ecx, [0x11cfcd80] */
  ECX = ((uint32_t)(0x11cfcd80));
  /* 11cc92e7 call 0x11ccaa97 */
  push32(0x11cc92ecu); f_11ccaa97();
  /* 11cc92ec pop edx */
  EDX = (pop32());
  /* 11cc92ed ret  */
  ESPCHK(0x11cc925du, _esp0);
  ESP += 4; return;
}

/* FUN_100092f0 @ 0x11cc92f0 (20 bytes, 6 insns) */
void f_11cc92f0(void) {
  FTRACE(0x11cc92f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc92f0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc92f3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11cc92f6 call 0x11cca978 */
  push32(0x11cc92fbu); f_11cca978();
  /* 11cc92fb call 0x11cc930d */
  push32(0x11cc9300u); f_11cc930d();
  /* 11cc9300 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9303 ret  */
  ESPCHK(0x11cc92f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009304 @ 0x11cc9304 (9 bytes, 2 insns) */
void f_11cc9304(void) {
  FTRACE(0x11cc9304u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9304 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11cc9308 call 0x11cca935 */
  push32(0x11cc930du); f_11cca935();
}

/* FUN_1000930d @ 0x11cc930d (145 bytes, 43 insns) */
void f_11cc930d(void) {
  FTRACE(0x11cc930du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc930d push edx */
  push32((uint32_t)(EDX));
  /* 11cc930e wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc930f fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11cc9312 je 0x11cc9364 */
  if (C.zf) goto L_11cc9364;
  /* 11cc9314 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cc931a je 0x11cc9322 */
  if (C.zf) goto L_11cc9322;
  /* 11cc931c fldcw word ptr [0x11cf9718] */
  C.fcw = r16((uint32_t)(0x11cf9718));
L_11cc9322:;
  /* 11cc9322 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11cc9324 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc9325 fnstsw ax */
  AX = fpu_status();
  /* 11cc9327 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11cc9328 jp 0x11cc9347 */
  if (C.pf) goto L_11cc9347;
L_11cc932a:;
  /* 11cc932a cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9331 jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc9337 mov edx, 0x12 */
  EDX = (0x12u);
  /* 11cc933c lea ecx, [0x11cfcd90] */
  ECX = ((uint32_t)(0x11cfcd90));
  /* 11cc9342 jmp 0x11cca99b */
  f_11cca99b(); return;
L_11cc9347:;
  /* 11cc9347 fld xword ptr [0x11cf971a] */
  fpu_push(rf80((uint32_t)(0x11cf971a)));
  /* 11cc934d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_11cc934f:;
  /* 11cc934f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 11cc9351 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc9352 fnstsw ax */
  AX = fpu_status();
  /* 11cc9354 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 11cc9355 jp 0x11cc934f */
  if (C.pf) goto L_11cc934f;
  /* 11cc9357 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cc9359 fcos  */
  FPU_ST(0) = __builtin_cos(FPU_ST(0)); C.fsw_c2=0;
  /* 11cc935b jmp 0x11cc932a */
  goto L_11cc932a;
L_11cc935d:;
  /* 11cc935d call 0x11cca91c */
  push32(0x11cc9362u); f_11cca91c();
  /* 11cc9362 jmp 0x11cc937f */
  goto L_11cc937f;
L_11cc9364:;
  /* 11cc9364 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11cc9369 jne 0x11cc935d */
  if (!C.zf) goto L_11cc935d;
  /* 11cc936b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9370 jne 0x11cc935d */
  if (!C.zf) goto L_11cc935d;
  /* 11cc9372 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cc9374 fld xword ptr [0x11cfce00] */
  fpu_push(rf80((uint32_t)(0x11cfce00)));
  /* 11cc937a mov eax, 1 */
  EAX = (0x1u);
L_11cc937f:;
  /* 11cc937f cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9386 jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc938c mov edx, 0x12 */
  EDX = (0x12u);
  /* 11cc9391 lea ecx, [0x11cfcd90] */
  ECX = ((uint32_t)(0x11cfcd90));
  /* 11cc9397 call 0x11ccaa97 */
  push32(0x11cc939cu); f_11ccaa97();
  /* 11cc939c pop edx */
  EDX = (pop32());
  /* 11cc939d ret  */
  ESPCHK(0x11cc930du, _esp0);
  ESP += 4; return;
}

/* FUN_100093a0 @ 0x11cc93a0 (20 bytes, 6 insns) */
void f_11cc93a0(void) {
  FTRACE(0x11cc93a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc93a0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc93a3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 11cc93a6 call 0x11cca978 */
  push32(0x11cc93abu); f_11cca978();
  /* 11cc93ab call 0x11cc93bd */
  push32(0x11cc93b0u); f_11cc93bd();
  /* 11cc93b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc93b3 ret  */
  ESPCHK(0x11cc93a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093b4 @ 0x11cc93b4 (9 bytes, 2 insns) */
void f_11cc93b4(void) {
  FTRACE(0x11cc93b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc93b4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 11cc93b8 call 0x11cca935 */
  push32(0x11cc93bdu); f_11cca935();
}

/* FUN_100093bd @ 0x11cc93bd (138 bytes, 40 insns) */
void f_11cc93bd(void) {
  FTRACE(0x11cc93bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc93bd push edx */
  push32((uint32_t)(EDX));
  /* 11cc93be wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc93bf fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 11cc93c2 je 0x11cc93fa */
  if (C.zf) goto L_11cc93fa;
  /* 11cc93c4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11cc93ca je 0x11cc93d2 */
  if (C.zf) goto L_11cc93d2;
  /* 11cc93cc fldcw word ptr [0x11cf9718] */
  C.fcw = r16((uint32_t)(0x11cf9718));
L_11cc93d2:;
  /* 11cc93d2 fld1  */
  fpu_push(1.0);
  /* 11cc93d4 fpatan  */
  { double _r=__builtin_atan2(FPU_ST(1), FPU_ST(0)); (void)fpu_pop(); FPU_ST(0)=_r; }
L_11cc93d6:;
  /* 11cc93d6 cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc93dd jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc93e3 mov edx, 0xf */
  EDX = (0xfu);
  /* 11cc93e8 lea ecx, [0x11cfcda0] */
  ECX = ((uint32_t)(0x11cfcda0));
  /* 11cc93ee jmp 0x11cca99b */
  f_11cca99b(); return;
L_11cc93f3:;
  /* 11cc93f3 call 0x11cca91c */
  push32(0x11cc93f8u); f_11cca91c();
  /* 11cc93f8 jmp 0x11cc9420 */
  goto L_11cc9420;
L_11cc93fa:;
  /* 11cc93fa test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 11cc93ff jne 0x11cc93f3 */
  if (!C.zf) goto L_11cc93f3;
  /* 11cc9401 cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9406 jne 0x11cc93f3 */
  if (!C.zf) goto L_11cc93f3;
  /* 11cc9408 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 11cc940a fld xword ptr [0x11cfce0a] */
  fpu_push(rf80((uint32_t)(0x11cfce0a)));
  /* 11cc9410 test eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); fl_logic(_r,32); }
  /* 11cc9415 je 0x11cc93d6 */
  if (C.zf) goto L_11cc93d6;
  /* 11cc9417 fchs  */
  FPU_ST(0) = -FPU_ST(0);
  /* 11cc9419 jmp 0x11cc93d6 */
  goto L_11cc93d6;
  /* 11cc941b mov eax, 1 */
  EAX = (0x1u);
L_11cc9420:;
  /* 11cc9420 cmp dword ptr [0x11cff42c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cff42c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9427 jne 0x11cca98e */
  if (!C.zf) { jmp_ind(0x11cca98eu); return; }
  /* 11cc942d mov edx, 0xf */
  EDX = (0xfu);
  /* 11cc9432 lea ecx, [0x11cfcda0] */
  ECX = ((uint32_t)(0x11cfcda0));
  /* 11cc9438 call 0x11ccaa97 */
  push32(0x11cc943du); f_11ccaa97();
  /* 11cc943d pop edx */
  EDX = (pop32());
  /* 11cc943e ret  */
  ESPCHK(0x11cc93bdu, _esp0);
  ESP += 4; return;
  /* 11cc943f int3  */
  x86_unimpl("int3 @ 0x11cc943f");
  /* 11cc9440 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9441 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9443 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9444 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9445 push edi */
  push32((uint32_t)(EDI));
}

/* FUN_10009440 @ 0x11cc9440 (33 bytes, 15 insns) */
void f_11cc9440(void) {
  FTRACE(0x11cc9440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9440 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9441 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9443 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9444 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9445 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9446 call 0x11cc9480 */
  push32(0x11cc944bu); f_11cc9480();
  /* 11cc944b call 0x11ccab60 */
  push32(0x11cc9450u); f_11ccab60();
  /* 11cc9450 mov dword ptr [0x11cff430], eax */
  w32((uint32_t)(0x11cff430), (EAX));
  /* 11cc9455 call 0x11ccaae0 */
  push32(0x11cc945au); f_11ccaae0();
  /* 11cc945a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11cc945c pop edi */
  EDI = (pop32());
  /* 11cc945d pop esi */
  ESI = (pop32());
  /* 11cc945e pop ebx */
  EBX = (pop32());
  /* 11cc945f pop ebp */
  EBP = (pop32());
  /* 11cc9460 ret  */
  ESPCHK(0x11cc9440u, _esp0);
  ESP += 4; return;
}

/* FUN_10009470 @ 0x11cc9470 (5 bytes, 4 insns) */
void f_11cc9470(void) {
  FTRACE(0x11cc9470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9470 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9471 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9473 pop ebp */
  EBP = (pop32());
  /* 11cc9474 ret  */
  ESPCHK(0x11cc9470u, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x11cc9480 (65 bytes, 10 insns) */
void f_11cc9480(void) {
  FTRACE(0x11cc9480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9480 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9481 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9483 mov dword ptr [0x11cfce30], 0x11ccb250 */
  w32((uint32_t)(0x11cfce30), (0x11ccb250u));
  /* 11cc948d mov dword ptr [0x11cfce34], 0x11ccac60 */
  w32((uint32_t)(0x11cfce34), (0x11ccac60u));
  /* 11cc9497 mov dword ptr [0x11cfce38], 0x11ccad70 */
  w32((uint32_t)(0x11cfce38), (0x11ccad70u));
  /* 11cc94a1 mov dword ptr [0x11cfce3c], 0x11ccabb0 */
  w32((uint32_t)(0x11cfce3c), (0x11ccabb0u));
  /* 11cc94ab mov dword ptr [0x11cfce40], 0x11ccad40 */
  w32((uint32_t)(0x11cfce40), (0x11ccad40u));
  /* 11cc94b5 mov dword ptr [0x11cfce44], 0x11ccb250 */
  w32((uint32_t)(0x11cfce44), (0x11ccb250u));
  /* 11cc94bf pop ebp */
  EBP = (pop32());
  /* 11cc94c0 ret  */
  ESPCHK(0x11cc9480u, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x11cc94d0 (28 bytes, 11 insns) */
void f_11cc94d0(void) {
  FTRACE(0x11cc94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc94d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc94d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc94d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc94d4 mov eax, dword ptr [0x11cff42c] */
  EAX = (r32((uint32_t)(0x11cff42c)));
  /* 11cc94d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc94dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc94df mov dword ptr [0x11cff42c], ecx */
  w32((uint32_t)(0x11cff42c), (ECX));
  /* 11cc94e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc94e8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc94ea pop ebp */
  EBP = (pop32());
  /* 11cc94eb ret  */
  ESPCHK(0x11cc94d0u, _esp0);
  ESP += 4; return;
}

/* __ftol @ 0x11cc94ec (39 bytes, 16 insns) */
void f_11cc94ec(void) {
  FTRACE(0x11cc94ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc94ec push ebp */
  push32((uint32_t)(EBP));
  /* 11cc94ed mov ebp, esp */
  EBP = (ESP);
  /* 11cc94ef add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc94f2 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc94f3 fnstcw word ptr [ebp - 2] */
  w16((uint32_t)(EBP + -0x2), C.fcw);
  /* 11cc94f6 wait  */
  /* wait (no observable integer/reg state) */
  /* 11cc94f7 mov ax, word ptr [ebp - 2] */
  AX = (r16((uint32_t)(EBP + -0x2)));
  /* 11cc94fb or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 11cc94fe mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11cc9502 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11cc9505 fistp qword ptr [ebp - 0xc] */
  { int64_t _q=fpu_to_i64(FPU_ST(0)); w32((uint32_t)(EBP + -0xc),(uint32_t)_q); w32((uint32_t)(EBP + -0xc)+4,(uint32_t)((uint64_t)_q>>32)); }
  (void)fpu_pop();
  /* 11cc9508 fldcw word ptr [ebp - 2] */
  C.fcw = r16((uint32_t)(EBP + -0x2));
  /* 11cc950b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11cc950e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc9511 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11cc9512 ret  */
  ESPCHK(0x11cc94ecu, _esp0);
  ESP += 4; return;
}

/* FUN_10009520 @ 0x11cc9520 (161 bytes, 60 insns) */
void f_11cc9520(void) {
  FTRACE(0x11cc9520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9520 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9521 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9523 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9524 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9525 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9526 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9527 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc952b jne 0x11cc9532 */
  if (!C.zf) goto L_11cc9532;
  /* 11cc952d jmp 0x11cc95ba */
  goto L_11cc95ba;
L_11cc9532:;
  /* 11cc9532 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cc9534 call 0x11ccb3c0 */
  push32(0x11cc9539u); f_11ccb3c0();
  /* 11cc9539 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc953c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc953f sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9542 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11cc9545:;
  /* 11cc9545 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9548 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cc954b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cc9551 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9554 je 0x11cc9597 */
  if (C.zf) goto L_11cc9597;
  /* 11cc9556 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9559 cmp dword ptr [eax + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc955d je 0x11cc9597 */
  if (C.zf) goto L_11cc9597;
  /* 11cc955f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9562 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11cc9565 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11cc956b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc956e je 0x11cc9597 */
  if (C.zf) goto L_11cc9597;
  /* 11cc9570 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9573 cmp dword ptr [eax + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9577 je 0x11cc9597 */
  if (C.zf) goto L_11cc9597;
  /* 11cc9579 push 0x11cf9474 */
  push32((uint32_t)(0x11cf9474u));
  /* 11cc957e push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9580 push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 11cc9582 push 0x11cf9468 */
  push32((uint32_t)(0x11cf9468u));
  /* 11cc9587 push 2 */
  push32((uint32_t)(0x2u));
  /* 11cc9589 call 0x11cca080 */
  push32(0x11cc958eu); f_11cca080();
  /* 11cc958e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9591 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9594 jne 0x11cc9597 */
  if (!C.zf) goto L_11cc9597;
  /* 11cc9596 int3  */
  x86_unimpl("int3 @ 0x11cc9596");
L_11cc9597:;
  /* 11cc9597 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9599 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc959b jne 0x11cc9545 */
  if (!C.zf) goto L_11cc9545;
  /* 11cc959d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc95a0 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11cc95a3 push eax */
  push32((uint32_t)(EAX));
  /* 11cc95a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc95a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc95a8 call 0x11ccbf50 */
  push32(0x11cc95adu); f_11ccbf50();
  /* 11cc95ad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc95b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11cc95b2 call 0x11ccb460 */
  push32(0x11cc95b7u); f_11ccb460();
  /* 11cc95b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11cc95ba:;
  /* 11cc95ba pop edi */
  EDI = (pop32());
  /* 11cc95bb pop esi */
  ESI = (pop32());
  /* 11cc95bc pop ebx */
  EBX = (pop32());
  /* 11cc95bd mov esp, ebp */
  ESP = (EBP);
  /* 11cc95bf pop ebp */
  EBP = (pop32());
  /* 11cc95c0 ret  */
  ESPCHK(0x11cc9520u, _esp0);
  ESP += 4; return;
}

/* FUN_100095d0 @ 0x11cc95d0 (19 bytes, 9 insns) */
void f_11cc95d0(void) {
  FTRACE(0x11cc95d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc95d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc95d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc95d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc95d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc95d8 push eax */
  push32((uint32_t)(EAX));
  /* 11cc95d9 call 0x11ccb4f0 */
  push32(0x11cc95deu); f_11ccb4f0();
  /* 11cc95de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc95e1 pop ebp */
  EBP = (pop32());
  /* 11cc95e2 ret  */
  ESPCHK(0x11cc95d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100095f0 @ 0x11cc95f0 (45 bytes, 17 insns) */
void f_11cc95f0(void) {
  FTRACE(0x11cc95f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc95f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc95f1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc95f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc95f4 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc95f5 push esi */
  push32((uint32_t)(ESI));
  /* 11cc95f6 push edi */
  push32((uint32_t)(EDI));
  /* 11cc95f7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc95fa add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc95fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc9600 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11cc9607 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11cc9609 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11cc960f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9612 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9615 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11cc9618 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc961b jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* _CallMemberFunction0 @ 0x11cc9630 (7 bytes, 4 insns) */
void f_11cc9630(void) {
  FTRACE(0x11cc9630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9630 pop eax */
  EAX = (pop32());
  /* 11cc9631 pop ecx */
  ECX = (pop32());
  /* 11cc9632 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11cc9635 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009640 @ 0x11cc9640 (7 bytes, 4 insns) */
void f_11cc9640(void) {
  FTRACE(0x11cc9640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9640 pop eax */
  EAX = (pop32());
  /* 11cc9641 pop ecx */
  ECX = (pop32());
  /* 11cc9642 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11cc9645 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009650 @ 0x11cc9650 (7 bytes, 4 insns) */
void f_11cc9650(void) {
  FTRACE(0x11cc9650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9650 pop eax */
  EAX = (pop32());
  /* 11cc9651 pop ecx */
  ECX = (pop32());
  /* 11cc9652 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11cc9655 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_10009660 @ 0x11cc9660 (86 bytes, 32 insns) */
void f_11cc9660(void) {
  FTRACE(0x11cc9660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9660 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9661 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9663 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9666 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9667 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9668 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9669 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cc966f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc9672 mov dword ptr [ebp - 4], 0x11cc968c */
  w32((uint32_t)(EBP + -0x4), (0x11cc968cu));
  /* 11cc9679 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc967b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc967e push eax */
  push32((uint32_t)(EAX));
  /* 11cc967f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc9682 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9683 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9686 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9687 call 0x11ce088c */
  push32(0x11cc968cu); f_11ce088c();
  /* 11cc968c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc968f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc9692 and ecx, 0xfffffffd */
  { uint32_t _r=(ECX)&(0xfffffffdu); ECX = (_r); fl_logic(_r,32); }
  /* 11cc9695 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9698 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11cc969b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cc96a1 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc96a4 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11cc96a6 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11cc96ad pop edi */
  EDI = (pop32());
  /* 11cc96ae pop esi */
  ESI = (pop32());
  /* 11cc96af pop ebx */
  EBX = (pop32());
  /* 11cc96b0 mov esp, ebp */
  ESP = (EBP);
  /* 11cc96b2 pop ebp */
  EBP = (pop32());
  /* 11cc96b3 ret 8 */
  ESPCHK(0x11cc9660u, _esp0);
  ESP += 12; return;
}

/* FID_conflict:___CxxFrameHandler3 @ 0x11cc96c0 (60 bytes, 31 insns) */
void f_11cc96c0(void) {
  FTRACE(0x11cc96c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc96c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc96c1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc96c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc96c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc96c7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc96c8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc96c9 cld  */
  C.df=0;
  /* 11cc96ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11cc96cd push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc96cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc96d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc96d3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11cc96d6 push eax */
  push32((uint32_t)(EAX));
  /* 11cc96d7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc96da push ecx */
  push32((uint32_t)(ECX));
  /* 11cc96db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc96de push edx */
  push32((uint32_t)(EDX));
  /* 11cc96df mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc96e2 push eax */
  push32((uint32_t)(EAX));
  /* 11cc96e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc96e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc96e7 call 0x11ccd430 */
  push32(0x11cc96ecu); f_11ccd430();
  /* 11cc96ec add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc96ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11cc96f2 pop edi */
  EDI = (pop32());
  /* 11cc96f3 pop esi */
  ESI = (pop32());
  /* 11cc96f4 pop ebx */
  EBX = (pop32());
  /* 11cc96f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc96f8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc96fa pop ebp */
  EBP = (pop32());
  /* 11cc96fb ret  */
  ESPCHK(0x11cc96c0u, _esp0);
  ESP += 4; return;
}

/* ___CxxLongjmpUnwind@4 @ 0x11cc9700 (38 bytes, 16 insns) */
void f_11cc9700(void) {
  FTRACE(0x11cc9700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9700 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9701 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9703 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9706 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11cc9709 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc970a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc970d mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11cc9710 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9711 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc9713 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9716 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11cc9719 push edx */
  push32((uint32_t)(EDX));
  /* 11cc971a call 0x11ccd9a0 */
  push32(0x11cc971fu); f_11ccd9a0();
  /* 11cc971f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9722 pop ebp */
  EBP = (pop32());
  /* 11cc9723 ret 4 */
  ESPCHK(0x11cc9700u, _esp0);
  ESP += 8; return;
}

/* FUN_10009730 @ 0x11cc9730 (104 bytes, 36 insns) */
void f_11cc9730(void) {
  FTRACE(0x11cc9730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9730 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9731 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9733 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc9736 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9737 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9738 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9739 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11cc9740 mov dword ptr [ebp - 0x10], 0x11cc97a0 */
  w32((uint32_t)(EBP + -0x10), (0x11cc97a0u));
  /* 11cc9747 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc974a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11cc974d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9750 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11cc9753 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc9756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9759 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11cc975c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cc9762 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cc9765 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11cc976b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11cc9771 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cc9774 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9775 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9778 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9779 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc977c push edx */
  push32((uint32_t)(EDX));
  /* 11cc977d call 0x11cce090 */
  push32(0x11cc9782u); f_11cce090();
  /* 11cc9782 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11cc9785 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11cc9788 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11cc978e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11cc9791 pop edi */
  EDI = (pop32());
  /* 11cc9792 pop esi */
  ESI = (pop32());
  /* 11cc9793 pop ebx */
  EBX = (pop32());
  /* 11cc9794 mov esp, ebp */
  ESP = (EBP);
  /* 11cc9796 pop ebp */
  EBP = (pop32());
  /* 11cc9797 ret  */
  ESPCHK(0x11cc9730u, _esp0);
  ESP += 4; return;
}

/* FUN_100097a0 @ 0x11cc97a0 (57 bytes, 30 insns) */
void f_11cc97a0(void) {
  FTRACE(0x11cc97a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc97a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc97a1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc97a3 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc97a4 push esi */
  push32((uint32_t)(ESI));
  /* 11cc97a5 push edi */
  push32((uint32_t)(EDI));
  /* 11cc97a6 cld  */
  C.df=0;
  /* 11cc97a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc97a9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc97ac push eax */
  push32((uint32_t)(EAX));
  /* 11cc97ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc97b0 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11cc97b3 push edx */
  push32((uint32_t)(EDX));
  /* 11cc97b4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc97b7 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cc97ba push ecx */
  push32((uint32_t)(ECX));
  /* 11cc97bb push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc97bd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc97c0 push edx */
  push32((uint32_t)(EDX));
  /* 11cc97c1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc97c4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11cc97c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc97c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc97cb push edx */
  push32((uint32_t)(EDX));
  /* 11cc97cc call 0x11ccd430 */
  push32(0x11cc97d1u); f_11ccd430();
  /* 11cc97d1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc97d4 pop edi */
  EDI = (pop32());
  /* 11cc97d5 pop esi */
  ESI = (pop32());
  /* 11cc97d6 pop ebx */
  EBX = (pop32());
  /* 11cc97d7 pop ebp */
  EBP = (pop32());
  /* 11cc97d8 ret  */
  ESPCHK(0x11cc97a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100097e0 @ 0x11cc97e0 (204 bytes, 58 insns) */
void f_11cc97e0(void) {
  FTRACE(0x11cc97e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc97e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc97e1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc97e3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11cc97e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc97e7 push esi */
  push32((uint32_t)(ESI));
  /* 11cc97e8 push edi */
  push32((uint32_t)(EDI));
  /* 11cc97e9 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11cc97f0 mov dword ptr [ebp - 0x24], 0x11cc98b0 */
  w32((uint32_t)(EBP + -0x24), (0x11cc98b0u));
  /* 11cc97f7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cc97fa mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11cc97fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9800 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11cc9803 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11cc9806 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11cc9809 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11cc980c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11cc980f mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11cc9816 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11cc981d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11cc9824 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11cc982b mov dword ptr [ebp - 0x10], 0x11cc987c */
  w32((uint32_t)(EBP + -0x10), (0x11cc987cu));
  /* 11cc9832 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11cc9835 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11cc9838 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11cc983e mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11cc9841 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11cc9847 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11cc984d mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11cc9854 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9857 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11cc985a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc985d mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11cc9860 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11cc9863 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9867 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11cc9869 push edx */
  push32((uint32_t)(EDX));
  /* 11cc986a call 0x11cce1c0 */
  push32(0x11cc986fu); f_11cce1c0();
  /* 11cc986f call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11cc9872u);
  /* 11cc9872 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9875 mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 11cc987c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9880 je 0x11cc9899 */
  if (C.zf) goto L_11cc9899;
  /* 11cc9882 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11cc9889 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11cc988b mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cc988e mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11cc9890 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11cc9897 jmp 0x11cc98a2 */
  goto L_11cc98a2;
L_11cc9899:;
  /* 11cc9899 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11cc989c mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11cc98a2:;
  /* 11cc98a2 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11cc98a5 pop edi */
  EDI = (pop32());
  /* 11cc98a6 pop esi */
  ESI = (pop32());
  /* 11cc98a7 pop ebx */
  EBX = (pop32());
  /* 11cc98a8 mov esp, ebp */
  ESP = (EBP);
  /* 11cc98aa pop ebp */
  EBP = (pop32());
  /* 11cc98ab ret  */
  ESPCHK(0x11cc97e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100098b0 @ 0x11cc98b0 (124 bytes, 53 insns) */
void f_11cc98b0(void) {
  FTRACE(0x11cc98b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc98b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc98b1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc98b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc98b4 push esi */
  push32((uint32_t)(ESI));
  /* 11cc98b5 push edi */
  push32((uint32_t)(EDI));
  /* 11cc98b6 cld  */
  C.df=0;
  /* 11cc98b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc98ba mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11cc98bd and ecx, 0x66 */
  { uint32_t _r=(ECX)&(0x66u); ECX = (_r); fl_logic(_r,32); }
  /* 11cc98c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc98c2 je 0x11cc98d5 */
  if (C.zf) goto L_11cc98d5;
  /* 11cc98c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc98c7 mov dword ptr [edx + 0x24], 1 */
  w32((uint32_t)(EDX + 0x24), (0x1u));
  /* 11cc98ce mov eax, 1 */
  EAX = (0x1u);
  /* 11cc98d3 jmp 0x11cc992c */
  goto L_11cc992c;
L_11cc98d5:;
  /* 11cc98d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11cc98d7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc98da mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11cc98dd push ecx */
  push32((uint32_t)(ECX));
  /* 11cc98de mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc98e1 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11cc98e4 push eax */
  push32((uint32_t)(EAX));
  /* 11cc98e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc98e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11cc98eb push edx */
  push32((uint32_t)(EDX));
  /* 11cc98ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc98ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc98f1 push eax */
  push32((uint32_t)(EAX));
  /* 11cc98f2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc98f5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11cc98f8 push edx */
  push32((uint32_t)(EDX));
  /* 11cc98f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc98fc push eax */
  push32((uint32_t)(EAX));
  /* 11cc98fd call 0x11ccd430 */
  push32(0x11cc9902u); f_11ccd430();
  /* 11cc9902 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9908 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc990c jne 0x11cc991b */
  if (!C.zf) goto L_11cc991b;
  /* 11cc990e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9911 push edx */
  push32((uint32_t)(EDX));
  /* 11cc9912 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9915 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9916 call 0x11cc9660 */
  push32(0x11cc991bu); f_11cc9660();
L_11cc991b:;
  /* 11cc991b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc991e mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11cc9921 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11cc9924 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11cc9927 mov eax, 1 */
  EAX = (0x1u);
L_11cc992c:;
  /* 11cc992c pop edi */
  EDI = (pop32());
  /* 11cc992d pop esi */
  ESI = (pop32());
  /* 11cc992e pop ebx */
  EBX = (pop32());
  /* 11cc992f pop ebp */
  EBP = (pop32());
  /* 11cc9930 ret  */
  ESPCHK(0x11cc98b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009940 @ 0x11cc9940 (130 bytes, 57 insns) */
void f_11cc9940(void) {
  FTRACE(0x11cc9940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9940 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc9941 mov ebp, esp */
  EBP = (ESP);
  /* 11cc9943 push ecx */
  push32((uint32_t)(ECX));
  /* 11cc9944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11cc9947 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9948 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9949 push edi */
  push32((uint32_t)(EDI));
  /* 11cc994a mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11cc994d mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11cc9950 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11cc9953 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9956 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11cc9958 mov edi, esi */
  EDI = (ESI);
  /* 11cc995a mov ebx, esi */
  EBX = (ESI);
  /* 11cc995c jl 0x11cc9999 */
  if ((C.sf!=C.of)) goto L_11cc9999;
L_11cc995e:;
  /* 11cc995e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9961 jne 0x11cc9968 */
  if (!C.zf) goto L_11cc9968;
  /* 11cc9963 call 0x11cce440 */
  push32(0x11cc9968u); f_11cce440();
L_11cc9968:;
  /* 11cc9968 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc996b dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11cc996c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11cc996f lea edx, [esi + esi*4] */
  EDX = ((uint32_t)(ESI + ESI*4));
  /* 11cc9972 lea eax, [eax + edx*4] */
  EAX = ((uint32_t)(EAX + EDX*4));
  /* 11cc9975 cmp dword ptr [eax + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9978 jge 0x11cc997f */
  if ((C.sf==C.of)) goto L_11cc997f;
  /* 11cc997a cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc997d jle 0x11cc9984 */
  if ((C.zf||C.sf!=C.of)) goto L_11cc9984;
L_11cc997f:;
  /* 11cc997f cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9982 jne 0x11cc998f */
  if (!C.zf) goto L_11cc998f;
L_11cc9984:;
  /* 11cc9984 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9987 mov edi, ebx */
  EDI = (EBX);
  /* 11cc9989 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11cc998a mov ebx, esi */
  EBX = (ESI);
  /* 11cc998c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11cc998f:;
  /* 11cc998f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11cc9992 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11cc9994 jge 0x11cc995e */
  if ((C.sf==C.of)) goto L_11cc995e;
  /* 11cc9996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11cc9999:;
  /* 11cc9999 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11cc999c mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11cc999f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11cc99a0 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11cc99a2 mov dword ptr [edx], edi */
  w32((uint32_t)(EDX), (EDI));
  /* 11cc99a4 cmp edi, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc99a7 ja 0x11cc99ad */
  if ((!C.cf&&!C.zf)) goto L_11cc99ad;
  /* 11cc99a9 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc99ab jbe 0x11cc99b2 */
  if ((C.cf||C.zf)) goto L_11cc99b2;
L_11cc99ad:;
  /* 11cc99ad call 0x11cce440 */
  push32(0x11cc99b2u); f_11cce440();
L_11cc99b2:;
  /* 11cc99b2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11cc99b5 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11cc99b8 pop edi */
  EDI = (pop32());
  /* 11cc99b9 pop esi */
  ESI = (pop32());
  /* 11cc99ba lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11cc99bd pop ebx */
  EBX = (pop32());
  /* 11cc99be mov esp, ebp */
  ESP = (EBP);
  /* 11cc99c0 pop ebp */
  EBP = (pop32());
  /* 11cc99c1 ret  */
  ESPCHK(0x11cc9940u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x11cc99d0 (32 bytes, 18 insns) */
void f_11cc99d0(void) {
  FTRACE(0x11cc99d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc99d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc99d1 mov ebp, esp */
  EBP = (ESP);
  /* 11cc99d3 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc99d4 push esi */
  push32((uint32_t)(ESI));
  /* 11cc99d5 push edi */
  push32((uint32_t)(EDI));
  /* 11cc99d6 push ebp */
  push32((uint32_t)(EBP));
  /* 11cc99d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc99d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11cc99db push 0x11cc99e8 */
  push32((uint32_t)(0x11cc99e8u));
  /* 11cc99e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11cc99e3 call 0x11ce088c */
  push32(0x11cc99e8u); f_11ce088c();
  /* 11cc99e8 pop ebp */
  EBP = (pop32());
  /* 11cc99e9 pop edi */
  EDI = (pop32());
  /* 11cc99ea pop esi */
  ESI = (pop32());
  /* 11cc99eb pop ebx */
  EBX = (pop32());
  /* 11cc99ec mov esp, ebp */
  ESP = (EBP);
  /* 11cc99ee pop ebp */
  EBP = (pop32());
  /* 11cc99ef ret  */
  ESPCHK(0x11cc99d0u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x11cc9a12 (104 bytes, 33 insns) */
void f_11cc9a12(void) {
  FTRACE(0x11cc9a12u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11cc9a12 push ebx */
  push32((uint32_t)(EBX));
  /* 11cc9a13 push esi */
  push32((uint32_t)(ESI));
  /* 11cc9a14 push edi */
  push32((uint32_t)(EDI));
  /* 11cc9a15 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11cc9a19 push eax */
  push32((uint32_t)(EAX));
  /* 11cc9a1a push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 11cc9a1c push 0x11cc99f0 */
  push32((uint32_t)(0x11cc99f0u));
  /* 11cc9a21 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 11cc9a28 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_11cc9a2f:;
  /* 11cc9a2f mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 11cc9a33 mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 11cc9a36 mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 11cc9a39 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9a3c je 0x11cc9a6c */
  if (C.zf) goto L_11cc9a6c;
  /* 11cc9a3e cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9a42 je 0x11cc9a6c */
  if (C.zf) goto L_11cc9a6c;
  /* 11cc9a44 lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 11cc9a47 mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 11cc9a4a mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 11cc9a4e mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11cc9a51 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11cc9a56 jne 0x11cc9a6a */
  if (!C.zf) goto L_11cc9a6a;
  /* 11cc9a58 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 11cc9a5d mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 11cc9a61 call 0x11cc9aa6 */
  push32(0x11cc9a66u); f_11cc9aa6();
  /* 11cc9a66 call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x11cc9a6au);
L_11cc9a6a:;
  /* 11cc9a6a jmp 0x11cc9a2f */
  goto L_11cc9a2f;
L_11cc9a6c:;
  /* 11cc9a6c pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 11cc9a73 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11cc9a76 pop edi */
  EDI = (pop32());
  /* 11cc9a77 pop esi */
  ESI = (pop32());
  /* 11cc9a78 pop ebx */
  EBX = (pop32());
  /* 11cc9a79 ret  */
  ESPCHK(0x11cc9a12u, _esp0);
  ESP += 4; return;
}

