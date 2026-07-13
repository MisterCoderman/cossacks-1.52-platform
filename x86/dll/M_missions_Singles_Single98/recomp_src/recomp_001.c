#include "recomp.h"

/* FUN_10006a79 @ 0x120f6a79 (93 bytes, 30 insns) */
void f_120f6a79(void) {
  FTRACE(0x120f6a79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6a79 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f6a7b push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6a7d cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6a81 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120f6a86 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120f6a89 push eax */
  push32((uint32_t)(EAX));
  /* 120f6a8a call dword ptr [0x120fd070] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd070))), 0x120f6a90u);
  /* 120f6a90 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6a92 mov dword ptr [0x12104464], eax */
  w32((uint32_t)(0x12104464), (EAX));
  /* 120f6a97 je 0x120f6acf */
  if (C.zf) goto L_120f6acf;
  /* 120f6a99 call 0x120f6931 */
  push32(0x120f6a9eu); f_120f6931();
  /* 120f6a9e cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6aa1 mov dword ptr [0x12104468], eax */
  w32((uint32_t)(0x12104468), (EAX));
  /* 120f6aa6 jne 0x120f6ab5 */
  if (!C.zf) goto L_120f6ab5;
  /* 120f6aa8 push 0x3f8 */
  push32((uint32_t)(0x3f8u));
  /* 120f6aad call 0x120f7514 */
  push32(0x120f6ab2u); f_120f7514();
  /* 120f6ab2 pop ecx */
  ECX = (pop32());
  /* 120f6ab3 jmp 0x120f6abf */
  goto L_120f6abf;
L_120f6ab5:;
  /* 120f6ab5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6ab8 jne 0x120f6ad2 */
  if (!C.zf) goto L_120f6ad2;
  /* 120f6aba call 0x120f805b */
  push32(0x120f6abfu); f_120f805b();
L_120f6abf:;
  /* 120f6abf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6ac1 jne 0x120f6ad2 */
  if (!C.zf) goto L_120f6ad2;
  /* 120f6ac3 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f6ac9 call dword ptr [0x120fd068] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd068))), 0x120f6acfu);
L_120f6acf:;
  /* 120f6acf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f6ad1 ret  */
  ESPCHK(0x120f6a79u, _esp0);
  ESP += 4; return;
L_120f6ad2:;
  /* 120f6ad2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f6ad4 pop eax */
  EAX = (pop32());
  /* 120f6ad5 ret  */
  ESPCHK(0x120f6a79u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ad6 @ 0x120f6ad6 (168 bytes, 56 insns) */
void f_120f6ad6(void) {
  FTRACE(0x120f6ad6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6ad6 mov eax, dword ptr [0x12104468] */
  EAX = (r32((uint32_t)(0x12104468)));
  /* 120f6adb push esi */
  push32((uint32_t)(ESI));
  /* 120f6adc cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6adf push edi */
  push32((uint32_t)(EDI));
  /* 120f6ae0 jne 0x120f6b48 */
  if (!C.zf) goto L_120f6b48;
  /* 120f6ae2 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6ae3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f6ae5 cmp dword ptr [0x12104458], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104458))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6aeb push ebp */
  push32((uint32_t)(EBP));
  /* 120f6aec mov ebp, dword ptr [0x120fd000] */
  EBP = (r32((uint32_t)(0x120fd000)));
  /* 120f6af2 jle 0x120f6b34 */
  if ((C.zf||C.sf!=C.of)) goto L_120f6b34;
  /* 120f6af4 mov eax, dword ptr [0x1210445c] */
  EAX = (r32((uint32_t)(0x1210445c)));
  /* 120f6af9 mov edi, dword ptr [0x120fd064] */
  EDI = (r32((uint32_t)(0x120fd064)));
  /* 120f6aff lea esi, [eax + 0xc] */
  ESI = ((uint32_t)(EAX + 0xc));
L_120f6b02:;
  /* 120f6b02 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120f6b07 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 120f6b0c push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6b0e call edi */
  call_ind((uint32_t)(EDI), 0x120f6b10u);
  /* 120f6b10 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120f6b15 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6b17 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6b19 call edi */
  call_ind((uint32_t)(EDI), 0x120f6b1bu);
  /* 120f6b1b push dword ptr [esi + 4] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4))));
  /* 120f6b1e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6b20 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f6b26 call ebp */
  call_ind((uint32_t)(EBP), 0x120f6b28u);
  /* 120f6b28 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6b2b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f6b2c cmp ebx, dword ptr [0x12104458] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12104458))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6b32 jl 0x120f6b02 */
  if ((C.sf!=C.of)) goto L_120f6b02;
L_120f6b34:;
  /* 120f6b34 push dword ptr [0x1210445c] */
  push32((uint32_t)(r32((uint32_t)(0x1210445c))));
  /* 120f6b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6b3c push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f6b42 call ebp */
  call_ind((uint32_t)(EBP), 0x120f6b44u);
  /* 120f6b44 pop ebp */
  EBP = (pop32());
  /* 120f6b45 pop ebx */
  EBX = (pop32());
  /* 120f6b46 jmp 0x120f6b6f */
  goto L_120f6b6f;
L_120f6b48:;
  /* 120f6b48 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6b4b jne 0x120f6b6f */
  if (!C.zf) goto L_120f6b6f;
  /* 120f6b4d mov edi, 0x12101018 */
  EDI = (0x12101018u);
  /* 120f6b52 mov esi, edi */
  ESI = (EDI);
L_120f6b54:;
  /* 120f6b54 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f6b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6b59 je 0x120f6b69 */
  if (C.zf) goto L_120f6b69;
  /* 120f6b5b push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120f6b60 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6b62 push eax */
  push32((uint32_t)(EAX));
  /* 120f6b63 call dword ptr [0x120fd064] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd064))), 0x120f6b69u);
L_120f6b69:;
  /* 120f6b69 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 120f6b6b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6b6d jne 0x120f6b54 */
  if (!C.zf) goto L_120f6b54;
L_120f6b6f:;
  /* 120f6b6f push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f6b75 call dword ptr [0x120fd068] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd068))), 0x120f6b7bu);
  /* 120f6b7b pop edi */
  EDI = (pop32());
  /* 120f6b7c pop esi */
  ESI = (pop32());
  /* 120f6b7d ret  */
  ESPCHK(0x120f6ad6u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b7e @ 0x120f6b7e (57 bytes, 18 insns) */
void f_120f6b7e(void) {
  FTRACE(0x120f6b7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6b7e mov eax, dword ptr [0x12103ea4] */
  EAX = (r32((uint32_t)(0x12103ea4)));
  /* 120f6b83 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6b86 je 0x120f6b95 */
  if (C.zf) goto L_120f6b95;
  /* 120f6b88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6b8a jne 0x120f6bb6 */
  if (!C.zf) goto L_120f6bb6;
  /* 120f6b8c cmp dword ptr [0x12103ea8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12103ea8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6b93 jne 0x120f6bb6 */
  if (!C.zf) goto L_120f6bb6;
L_120f6b95:;
  /* 120f6b95 push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 120f6b9a call 0x120f6bb7 */
  push32(0x120f6b9fu); f_120f6bb7();
  /* 120f6b9f mov eax, dword ptr [0x12104004] */
  EAX = (r32((uint32_t)(0x12104004)));
  /* 120f6ba4 pop ecx */
  ECX = (pop32());
  /* 120f6ba5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6ba7 je 0x120f6bab */
  if (C.zf) goto L_120f6bab;
  /* 120f6ba9 call eax */
  call_ind((uint32_t)(EAX), 0x120f6babu);
L_120f6bab:;
  /* 120f6bab push 0xff */
  push32((uint32_t)(0xffu));
  /* 120f6bb0 call 0x120f6bb7 */
  push32(0x120f6bb5u); f_120f6bb7();
  /* 120f6bb5 pop ecx */
  ECX = (pop32());
L_120f6bb6:;
  /* 120f6bb6 ret  */
  ESPCHK(0x120f6b7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10006bb7 @ 0x120f6bb7 (339 bytes, 100 insns) */
void f_120f6bb7(void) {
  FTRACE(0x120f6bb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6bb7 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6bb8 mov ebp, esp */
  EBP = (ESP);
  /* 120f6bba sub esp, 0x1a4 */
  { uint32_t _a=(ESP),_b=(0x1a4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6bc0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f6bc3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f6bc5 mov eax, 0x12100d20 */
  EAX = (0x12100d20u);
L_120f6bca:;
  /* 120f6bca cmp edx, dword ptr [eax] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6bcc je 0x120f6bd9 */
  if (C.zf) goto L_120f6bd9;
  /* 120f6bce add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6bd1 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f6bd2 cmp eax, 0x12100db0 */
  { uint32_t _a=(EAX),_b=(0x12100db0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6bd7 jl 0x120f6bca */
  if ((C.sf!=C.of)) goto L_120f6bca;
L_120f6bd9:;
  /* 120f6bd9 push esi */
  push32((uint32_t)(ESI));
  /* 120f6bda mov esi, ecx */
  ESI = (ECX);
  /* 120f6bdc shl esi, 3 */
  ESI = (sh_shl((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 120f6bdf cmp edx, dword ptr [esi + 0x12100d20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + 0x12100d20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6be5 jne 0x120f6d07 */
  if (!C.zf) goto L_120f6d07;
  /* 120f6beb mov eax, dword ptr [0x12103ea4] */
  EAX = (r32((uint32_t)(0x12103ea4)));
  /* 120f6bf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6bf3 je 0x120f6ce1 */
  if (C.zf) goto L_120f6ce1;
  /* 120f6bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6bfb jne 0x120f6c0a */
  if (!C.zf) goto L_120f6c0a;
  /* 120f6bfd cmp dword ptr [0x12103ea8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12103ea8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6c04 je 0x120f6ce1 */
  if (C.zf) goto L_120f6ce1;
L_120f6c0a:;
  /* 120f6c0a cmp edx, 0xfc */
  { uint32_t _a=(EDX),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6c10 je 0x120f6d07 */
  if (C.zf) goto L_120f6d07;
  /* 120f6c16 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c1c push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120f6c21 push eax */
  push32((uint32_t)(EAX));
  /* 120f6c22 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6c24 call dword ptr [0x120fd0cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0cc))), 0x120f6c2au);
  /* 120f6c2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6c2c jne 0x120f6c41 */
  if (!C.zf) goto L_120f6c41;
  /* 120f6c2e lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c34 push 0x120fd644 */
  push32((uint32_t)(0x120fd644u));
  /* 120f6c39 push eax */
  push32((uint32_t)(EAX));
  /* 120f6c3a call 0x120f9b80 */
  push32(0x120f6c3fu); f_120f9b80();
  /* 120f6c3f pop ecx */
  ECX = (pop32());
  /* 120f6c40 pop ecx */
  ECX = (pop32());
L_120f6c41:;
  /* 120f6c41 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c47 push edi */
  push32((uint32_t)(EDI));
  /* 120f6c48 push eax */
  push32((uint32_t)(EAX));
  /* 120f6c49 lea edi, [ebp - 0x1a4] */
  EDI = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c4f call 0x120f9190 */
  push32(0x120f6c54u); f_120f9190();
  /* 120f6c54 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f6c55 pop ecx */
  ECX = (pop32());
  /* 120f6c56 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6c59 jbe 0x120f6c84 */
  if ((C.cf||C.zf)) goto L_120f6c84;
  /* 120f6c5b lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c61 push eax */
  push32((uint32_t)(EAX));
  /* 120f6c62 call 0x120f9190 */
  push32(0x120f6c67u); f_120f9190();
  /* 120f6c67 mov edi, eax */
  EDI = (EAX);
  /* 120f6c69 lea eax, [ebp - 0x1a4] */
  EAX = ((uint32_t)(EBP + -0x1a4));
  /* 120f6c6f sub eax, 0x3b */
  { uint32_t _a=(EAX),_b=(0x3bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6c72 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f6c74 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6c76 push 0x120fd640 */
  push32((uint32_t)(0x120fd640u));
  /* 120f6c7b push edi */
  push32((uint32_t)(EDI));
  /* 120f6c7c call 0x120fa880 */
  push32(0x120f6c81u); f_120fa880();
  /* 120f6c81 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f6c84:;
  /* 120f6c84 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 120f6c8a push 0x120fd624 */
  push32((uint32_t)(0x120fd624u));
  /* 120f6c8f push eax */
  push32((uint32_t)(EAX));
  /* 120f6c90 call 0x120f9b80 */
  push32(0x120f6c95u); f_120f9b80();
  /* 120f6c95 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 120f6c9b push edi */
  push32((uint32_t)(EDI));
  /* 120f6c9c push eax */
  push32((uint32_t)(EAX));
  /* 120f6c9d call 0x120f9b90 */
  push32(0x120f6ca2u); f_120f9b90();
  /* 120f6ca2 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 120f6ca8 push 0x120ff25c */
  push32((uint32_t)(0x120ff25cu));
  /* 120f6cad push eax */
  push32((uint32_t)(EAX));
  /* 120f6cae call 0x120f9b90 */
  push32(0x120f6cb3u); f_120f9b90();
  /* 120f6cb3 push dword ptr [esi + 0x12100d24] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x12100d24))));
  /* 120f6cb9 lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 120f6cbf push eax */
  push32((uint32_t)(EAX));
  /* 120f6cc0 call 0x120f9b90 */
  push32(0x120f6cc5u); f_120f9b90();
  /* 120f6cc5 push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 120f6cca lea eax, [ebp - 0xa0] */
  EAX = ((uint32_t)(EBP + -0xa0));
  /* 120f6cd0 push 0x120fd5fc */
  push32((uint32_t)(0x120fd5fcu));
  /* 120f6cd5 push eax */
  push32((uint32_t)(EAX));
  /* 120f6cd6 call 0x120fa7ef */
  push32(0x120f6cdbu); f_120fa7ef();
  /* 120f6cdb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6cde pop edi */
  EDI = (pop32());
  /* 120f6cdf jmp 0x120f6d07 */
  goto L_120f6d07;
L_120f6ce1:;
  /* 120f6ce1 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120f6ce4 lea esi, [esi + 0x12100d24] */
  ESI = ((uint32_t)(ESI + 0x12100d24));
  /* 120f6cea push 0 */
  push32((uint32_t)(0x0u));
  /* 120f6cec push eax */
  push32((uint32_t)(EAX));
  /* 120f6ced push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6cef call 0x120f9190 */
  push32(0x120f6cf4u); f_120f9190();
  /* 120f6cf4 pop ecx */
  ECX = (pop32());
  /* 120f6cf5 push eax */
  push32((uint32_t)(EAX));
  /* 120f6cf6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6cf8 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120f6cfa call dword ptr [0x120fd0f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0f8))), 0x120f6d00u);
  /* 120f6d00 push eax */
  push32((uint32_t)(EAX));
  /* 120f6d01 call dword ptr [0x120fd060] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd060))), 0x120f6d07u);
L_120f6d07:;
  /* 120f6d07 pop esi */
  ESI = (pop32());
  /* 120f6d08 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f6d09 ret  */
  ESPCHK(0x120f6bb7u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d0a @ 0x120f6d0a (289 bytes, 98 insns) */
void f_120f6d0a(void) {
  FTRACE(0x120f6d0au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6d0a push ebp */
  push32((uint32_t)(EBP));
  /* 120f6d0b mov ebp, esp */
  EBP = (ESP);
  /* 120f6d0d push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f6d0f push 0x120fd660 */
  push32((uint32_t)(0x120fd660u));
  /* 120f6d14 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120f6d19 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120f6d1f push eax */
  push32((uint32_t)(EAX));
  /* 120f6d20 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120f6d27 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f6d2a push ebx */
  push32((uint32_t)(EBX));
  /* 120f6d2b push esi */
  push32((uint32_t)(ESI));
  /* 120f6d2c push edi */
  push32((uint32_t)(EDI));
  /* 120f6d2d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f6d30 imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f6d34 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 120f6d37 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 120f6d3a cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d3d ja 0x120f6d53 */
  if ((!C.cf&&!C.zf)) goto L_120f6d53;
  /* 120f6d3f xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f6d41 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d43 jne 0x120f6d48 */
  if (!C.zf) goto L_120f6d48;
  /* 120f6d45 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f6d47 pop esi */
  ESI = (pop32());
L_120f6d48:;
  /* 120f6d48 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6d4b and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120f6d4e mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 120f6d51 jmp 0x120f6d55 */
  goto L_120f6d55;
L_120f6d53:;
  /* 120f6d53 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120f6d55:;
  /* 120f6d55 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 120f6d58 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d5b ja 0x120f6e09 */
  if ((!C.cf&&!C.zf)) goto L_120f6e09;
  /* 120f6d61 mov eax, dword ptr [0x12104468] */
  EAX = (r32((uint32_t)(0x12104468)));
  /* 120f6d66 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d69 jne 0x120f6dac */
  if (!C.zf) goto L_120f6dac;
  /* 120f6d6b mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 120f6d6e cmp edi, dword ptr [0x12104460] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x12104460))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d74 ja 0x120f6df2 */
  if ((!C.cf&&!C.zf)) goto L_120f6df2;
  /* 120f6d76 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6d78 call 0x120f6edc */
  push32(0x120f6d7du); f_120f6edc();
  /* 120f6d7d pop ecx */
  ECX = (pop32());
  /* 120f6d7e mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 120f6d81 push edi */
  push32((uint32_t)(EDI));
  /* 120f6d82 call 0x120f78b0 */
  push32(0x120f6d87u); f_120f78b0();
  /* 120f6d87 pop ecx */
  ECX = (pop32());
  /* 120f6d88 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120f6d8b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f6d8f call 0x120f6da3 */
  push32(0x120f6d94u); f_120f6da3();
  /* 120f6d94 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6d97 je 0x120f6df7 */
  if (C.zf) goto L_120f6df7;
  /* 120f6d99 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 120f6d9c jmp 0x120f6de6 */
  goto L_120f6de6;
  /* 120f6d9e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f6da0 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f6da3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6da5 call 0x120f6f3d */
  push32(0x120f6daau); f_120f6f3d();
  /* 120f6daa pop ecx */
  ECX = (pop32());
  /* 120f6dab ret  */
  ESPCHK(0x120f6d0au, _esp0);
  ESP += 4; return;
L_120f6dac:;
  /* 120f6dac cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6daf jne 0x120f6df2 */
  if (!C.zf) goto L_120f6df2;
  /* 120f6db1 cmp esi, dword ptr [0x1210303c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1210303c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6db7 ja 0x120f6df2 */
  if ((!C.cf&&!C.zf)) goto L_120f6df2;
  /* 120f6db9 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6dbb call 0x120f6edc */
  push32(0x120f6dc0u); f_120f6edc();
  /* 120f6dc0 pop ecx */
  ECX = (pop32());
  /* 120f6dc1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120f6dc8 mov eax, esi */
  EAX = (ESI);
  /* 120f6dca shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120f6dcd push eax */
  push32((uint32_t)(EAX));
  /* 120f6dce call 0x120f8353 */
  push32(0x120f6dd3u); f_120f8353();
  /* 120f6dd3 pop ecx */
  ECX = (pop32());
  /* 120f6dd4 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120f6dd7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f6ddb call 0x120f6e2c */
  push32(0x120f6de0u); f_120f6e2c();
  /* 120f6de0 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6de3 je 0x120f6df7 */
  if (C.zf) goto L_120f6df7;
  /* 120f6de5 push esi */
  push32((uint32_t)(ESI));
L_120f6de6:;
  /* 120f6de6 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6de7 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 120f6dea call 0x120f9c70 */
  push32(0x120f6defu); f_120f9c70();
  /* 120f6def add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f6df2:;
  /* 120f6df2 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6df5 jne 0x120f6e35 */
  if (!C.zf) { jmp_ind(0x120f6e35u); return; }
L_120f6df7:;
  /* 120f6df7 push esi */
  push32((uint32_t)(ESI));
  /* 120f6df8 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f6dfa push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f6e00 call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120f6e06u);
  /* 120f6e06 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_120f6e09:;
  /* 120f6e09 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6e0c jne 0x120f6e35 */
  if (!C.zf) { jmp_ind(0x120f6e35u); return; }
  /* 120f6e0e cmp dword ptr [0x1210412c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1210412c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6e14 je 0x120f6e35 */
  if (C.zf) { jmp_ind(0x120f6e35u); return; }
  /* 120f6e16 push esi */
  push32((uint32_t)(ESI));
  /* 120f6e17 call 0x120f8c9c */
  push32(0x120f6e1cu); f_120f8c9c();
  /* 120f6e1c pop ecx */
  ECX = (pop32());
  /* 120f6e1d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6e1f jne 0x120f6d55 */
  if (!C.zf) goto L_120f6d55;
  /* 120f6e25 jmp 0x120f6e38 */
  jmp_ind(0x120f6e38u); return;
  /* 120f6e27 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_10006da3 @ 0x120f6da3 (9 bytes, 4 insns) */
void f_120f6da3(void) {
  FTRACE(0x120f6da3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6da3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6da5 call 0x120f6f3d */
  push32(0x120f6daau); f_120f6f3d();
  /* 120f6daa pop ecx */
  ECX = (pop32());
  /* 120f6dab ret  */
  ESPCHK(0x120f6da3u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e2c @ 0x120f6e2c (9 bytes, 4 insns) */
void f_120f6e2c(void) {
  FTRACE(0x120f6e2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6e2c push 9 */
  push32((uint32_t)(0x9u));
  /* 120f6e2e call 0x120f6f3d */
  push32(0x120f6e33u); f_120f6f3d();
  /* 120f6e33 pop ecx */
  ECX = (pop32());
  /* 120f6e34 ret  */
  ESPCHK(0x120f6e2cu, _esp0);
  ESP += 4; return;
}

/* FUN_10006e47 @ 0x120f6e47 (41 bytes, 12 insns) */
void f_120f6e47(void) {
  FTRACE(0x120f6e47u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6e47 push esi */
  push32((uint32_t)(ESI));
  /* 120f6e48 mov esi, dword ptr [0x120fd0e0] */
  ESI = (r32((uint32_t)(0x120fd0e0)));
  /* 120f6e4e push dword ptr [0x12100df4] */
  push32((uint32_t)(r32((uint32_t)(0x12100df4))));
  /* 120f6e54 call esi */
  call_ind((uint32_t)(ESI), 0x120f6e56u);
  /* 120f6e56 push dword ptr [0x12100de4] */
  push32((uint32_t)(r32((uint32_t)(0x12100de4))));
  /* 120f6e5c call esi */
  call_ind((uint32_t)(ESI), 0x120f6e5eu);
  /* 120f6e5e push dword ptr [0x12100dd4] */
  push32((uint32_t)(r32((uint32_t)(0x12100dd4))));
  /* 120f6e64 call esi */
  call_ind((uint32_t)(ESI), 0x120f6e66u);
  /* 120f6e66 push dword ptr [0x12100db4] */
  push32((uint32_t)(r32((uint32_t)(0x12100db4))));
  /* 120f6e6c call esi */
  call_ind((uint32_t)(ESI), 0x120f6e6eu);
  /* 120f6e6e pop esi */
  ESI = (pop32());
  /* 120f6e6f ret  */
  ESPCHK(0x120f6e47u, _esp0);
  ESP += 4; return;
}

/* FUN_10006e70 @ 0x120f6e70 (108 bytes, 34 insns) */
void f_120f6e70(void) {
  FTRACE(0x120f6e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6e70 push esi */
  push32((uint32_t)(ESI));
  /* 120f6e71 push edi */
  push32((uint32_t)(EDI));
  /* 120f6e72 mov edi, dword ptr [0x120fd08c] */
  EDI = (r32((uint32_t)(0x120fd08c)));
  /* 120f6e78 mov esi, 0x12100db0 */
  ESI = (0x12100db0u);
L_120f6e7d:;
  /* 120f6e7d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f6e7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f6e81 je 0x120f6eae */
  if (C.zf) goto L_120f6eae;
  /* 120f6e83 cmp esi, 0x12100df4 */
  { uint32_t _a=(ESI),_b=(0x12100df4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6e89 je 0x120f6eae */
  if (C.zf) goto L_120f6eae;
  /* 120f6e8b cmp esi, 0x12100de4 */
  { uint32_t _a=(ESI),_b=(0x12100de4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6e91 je 0x120f6eae */
  if (C.zf) goto L_120f6eae;
  /* 120f6e93 cmp esi, 0x12100dd4 */
  { uint32_t _a=(ESI),_b=(0x12100dd4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6e99 je 0x120f6eae */
  if (C.zf) goto L_120f6eae;
  /* 120f6e9b cmp esi, 0x12100db4 */
  { uint32_t _a=(ESI),_b=(0x12100db4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6ea1 je 0x120f6eae */
  if (C.zf) goto L_120f6eae;
  /* 120f6ea3 push eax */
  push32((uint32_t)(EAX));
  /* 120f6ea4 call edi */
  call_ind((uint32_t)(EDI), 0x120f6ea6u);
  /* 120f6ea6 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6ea8 call 0x120f4e1c */
  push32(0x120f6eadu); f_120f4e1c();
  /* 120f6ead pop ecx */
  ECX = (pop32());
L_120f6eae:;
  /* 120f6eae add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f6eb1 cmp esi, 0x12100e70 */
  { uint32_t _a=(ESI),_b=(0x12100e70u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6eb7 jl 0x120f6e7d */
  if ((C.sf!=C.of)) goto L_120f6e7d;
  /* 120f6eb9 push dword ptr [0x12100dd4] */
  push32((uint32_t)(r32((uint32_t)(0x12100dd4))));
  /* 120f6ebf call edi */
  call_ind((uint32_t)(EDI), 0x120f6ec1u);
  /* 120f6ec1 push dword ptr [0x12100de4] */
  push32((uint32_t)(r32((uint32_t)(0x12100de4))));
  /* 120f6ec7 call edi */
  call_ind((uint32_t)(EDI), 0x120f6ec9u);
  /* 120f6ec9 push dword ptr [0x12100df4] */
  push32((uint32_t)(r32((uint32_t)(0x12100df4))));
  /* 120f6ecf call edi */
  call_ind((uint32_t)(EDI), 0x120f6ed1u);
  /* 120f6ed1 push dword ptr [0x12100db4] */
  push32((uint32_t)(r32((uint32_t)(0x12100db4))));
  /* 120f6ed7 call edi */
  call_ind((uint32_t)(EDI), 0x120f6ed9u);
  /* 120f6ed9 pop edi */
  EDI = (pop32());
  /* 120f6eda pop esi */
  ESI = (pop32());
  /* 120f6edb ret  */
  ESPCHK(0x120f6e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006edc @ 0x120f6edc (97 bytes, 37 insns) */
void f_120f6edc(void) {
  FTRACE(0x120f6edcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6edc push ebp */
  push32((uint32_t)(EBP));
  /* 120f6edd mov ebp, esp */
  EBP = (ESP);
  /* 120f6edf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f6ee2 push esi */
  push32((uint32_t)(ESI));
  /* 120f6ee3 cmp dword ptr [eax*4 + 0x12100db0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x12100db0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6eeb lea esi, [eax*4 + 0x12100db0] */
  ESI = ((uint32_t)(EAX*4 + 0x12100db0));
  /* 120f6ef2 jne 0x120f6f32 */
  if (!C.zf) goto L_120f6f32;
  /* 120f6ef4 push edi */
  push32((uint32_t)(EDI));
  /* 120f6ef5 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120f6ef7 call 0x120f5823 */
  push32(0x120f6efcu); f_120f5823();
  /* 120f6efc mov edi, eax */
  EDI = (EAX);
  /* 120f6efe pop ecx */
  ECX = (pop32());
  /* 120f6eff test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f6f01 jne 0x120f6f0b */
  if (!C.zf) goto L_120f6f0b;
  /* 120f6f03 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f6f05 call 0x120f4b9b */
  push32(0x120f6f0au); f_120f4b9b();
  /* 120f6f0a pop ecx */
  ECX = (pop32());
L_120f6f0b:;
  /* 120f6f0b push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f6f0d call 0x120f6edc */
  push32(0x120f6f12u); f_120f6edc();
  /* 120f6f12 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6f15 pop ecx */
  ECX = (pop32());
  /* 120f6f16 push edi */
  push32((uint32_t)(EDI));
  /* 120f6f17 jne 0x120f6f23 */
  if (!C.zf) goto L_120f6f23;
  /* 120f6f19 call dword ptr [0x120fd0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0e0))), 0x120f6f1fu);
  /* 120f6f1f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 120f6f21 jmp 0x120f6f29 */
  goto L_120f6f29;
L_120f6f23:;
  /* 120f6f23 call 0x120f4e1c */
  push32(0x120f6f28u); f_120f4e1c();
  /* 120f6f28 pop ecx */
  ECX = (pop32());
L_120f6f29:;
  /* 120f6f29 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f6f2b call 0x120f6f3d */
  push32(0x120f6f30u); f_120f6f3d();
  /* 120f6f30 pop ecx */
  ECX = (pop32());
  /* 120f6f31 pop edi */
  EDI = (pop32());
L_120f6f32:;
  /* 120f6f32 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120f6f34 call dword ptr [0x120fd0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d4))), 0x120f6f3au);
  /* 120f6f3a pop esi */
  ESI = (pop32());
  /* 120f6f3b pop ebp */
  EBP = (pop32());
  /* 120f6f3c ret  */
  ESPCHK(0x120f6edcu, _esp0);
  ESP += 4; return;
}

/* FUN_10006f3d @ 0x120f6f3d (21 bytes, 7 insns) */
void f_120f6f3d(void) {
  FTRACE(0x120f6f3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6f3d push ebp */
  push32((uint32_t)(EBP));
  /* 120f6f3e mov ebp, esp */
  EBP = (ESP);
  /* 120f6f40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f6f43 push dword ptr [eax*4 + 0x12100db0] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x12100db0))));
  /* 120f6f4a call dword ptr [0x120fd0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d8))), 0x120f6f50u);
  /* 120f6f50 pop ebp */
  EBP = (pop32());
  /* 120f6f51 ret  */
  ESPCHK(0x120f6f3du, _esp0);
  ESP += 4; return;
}

/* FUN_10006f52 @ 0x120f6f52 (46 bytes, 13 insns) */
void f_120f6f52(void) {
  FTRACE(0x120f6f52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6f52 cmp dword ptr [0x12104120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6f59 jne 0x120f6f7f */
  if (!C.zf) goto L_120f6f7f;
  /* 120f6f5b push 0xb */
  push32((uint32_t)(0xbu));
  /* 120f6f5d call 0x120f6edc */
  push32(0x120f6f62u); f_120f6edc();
  /* 120f6f62 cmp dword ptr [0x12104120], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104120))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6f69 pop ecx */
  ECX = (pop32());
  /* 120f6f6a jne 0x120f6f77 */
  if (!C.zf) goto L_120f6f77;
  /* 120f6f6c call 0x120f6f80 */
  push32(0x120f6f71u); f_120f6f80();
  /* 120f6f71 inc dword ptr [0x12104120] */
  { uint32_t _r=(r32((uint32_t)(0x12104120)))+1; w32((uint32_t)(0x12104120), (_r)); fl_inc(_r,32); }
L_120f6f77:;
  /* 120f6f77 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120f6f79 call 0x120f6f3d */
  push32(0x120f6f7eu); f_120f6f3d();
  /* 120f6f7e pop ecx */
  ECX = (pop32());
L_120f6f7f:;
  /* 120f6f7f ret  */
  ESPCHK(0x120f6f52u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f80 @ 0x120f6f80 (647 bytes, 207 insns) */
void f_120f6f80(void) {
  FTRACE(0x120f6f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f6f80 push ebp */
  push32((uint32_t)(EBP));
  /* 120f6f81 mov ebp, esp */
  EBP = (ESP);
  /* 120f6f83 push ecx */
  push32((uint32_t)(ECX));
  /* 120f6f84 push ecx */
  push32((uint32_t)(ECX));
  /* 120f6f85 push ebx */
  push32((uint32_t)(EBX));
  /* 120f6f86 push esi */
  push32((uint32_t)(ESI));
  /* 120f6f87 push edi */
  push32((uint32_t)(EDI));
  /* 120f6f88 push 0xc */
  push32((uint32_t)(0xcu));
  /* 120f6f8a pop edi */
  EDI = (pop32());
  /* 120f6f8b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f6f8d push edi */
  push32((uint32_t)(EDI));
  /* 120f6f8e mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
  /* 120f6f91 call 0x120f6edc */
  push32(0x120f6f96u); f_120f6edc();
  /* 120f6f96 or dword ptr [0x12100fa0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12100fa0)))|(0xffffffffu); w32((uint32_t)(0x12100fa0), (_r)); fl_logic(_r,32); }
  /* 120f6f9d or dword ptr [0x12100f90], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12100f90)))|(0xffffffffu); w32((uint32_t)(0x12100f90), (_r)); fl_logic(_r,32); }
  /* 120f6fa4 mov dword ptr [0x12104068], ebx */
  w32((uint32_t)(0x12104068), (EBX));
  /* 120f6faa mov dword ptr [esp], 0x120fd6b8 */
  w32((uint32_t)(ESP), (0x120fd6b8u));
  /* 120f6fb1 call 0x120faa09 */
  push32(0x120f6fb6u); f_120faa09();
  /* 120f6fb6 mov esi, eax */
  ESI = (EAX);
  /* 120f6fb8 pop ecx */
  ECX = (pop32());
  /* 120f6fb9 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6fbb jne 0x120f70be */
  if (!C.zf) goto L_120f70be;
  /* 120f6fc1 push edi */
  push32((uint32_t)(EDI));
  /* 120f6fc2 call 0x120f6f3d */
  push32(0x120f6fc7u); f_120f6f3d();
  /* 120f6fc7 mov dword ptr [esp], 0x12104070 */
  w32((uint32_t)(ESP), (0x12104070u));
  /* 120f6fce call dword ptr [0x120fd094] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd094))), 0x120f6fd4u);
  /* 120f6fd4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f6fd7 je 0x120f7202 */
  if (C.zf) goto L_120f7202;
  /* 120f6fdd mov eax, dword ptr [0x12104070] */
  EAX = (r32((uint32_t)(0x12104070)));
  /* 120f6fe2 mov ecx, dword ptr [0x121040c4] */
  ECX = (r32((uint32_t)(0x121040c4)));
  /* 120f6fe8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f6feb cmp word ptr [0x121040b6], bx */
  { uint32_t _a=(r16((uint32_t)(0x121040b6))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f6ff2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f6ff4 pop edx */
  EDX = (pop32());
  /* 120f6ff5 mov dword ptr [0x12100ef8], eax */
  w32((uint32_t)(0x12100ef8), (EAX));
  /* 120f6ffa mov dword ptr [0x12104068], edx */
  w32((uint32_t)(0x12104068), (EDX));
  /* 120f7000 je 0x120f700e */
  if (C.zf) goto L_120f700e;
  /* 120f7002 mov esi, ecx */
  ESI = (ECX);
  /* 120f7004 imul esi, esi, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ESI)*(int64_t)(int32_t)(0x3cu); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7007 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7009 mov dword ptr [0x12100ef8], eax */
  w32((uint32_t)(0x12100ef8), (EAX));
L_120f700e:;
  /* 120f700e cmp word ptr [0x1210410a], bx */
  { uint32_t _a=(r16((uint32_t)(0x1210410a))),_b=(BX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f7015 je 0x120f7032 */
  if (C.zf) goto L_120f7032;
  /* 120f7017 mov eax, dword ptr [0x12104118] */
  EAX = (r32((uint32_t)(0x12104118)));
  /* 120f701c cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f701e je 0x120f7032 */
  if (C.zf) goto L_120f7032;
  /* 120f7020 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7022 mov dword ptr [0x12100efc], edx */
  w32((uint32_t)(0x12100efc), (EDX));
  /* 120f7028 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f702b mov dword ptr [0x12100f00], eax */
  w32((uint32_t)(0x12100f00), (EAX));
  /* 120f7030 jmp 0x120f703e */
  goto L_120f703e;
L_120f7032:;
  /* 120f7032 mov dword ptr [0x12100efc], ebx */
  w32((uint32_t)(0x12100efc), (EBX));
  /* 120f7038 mov dword ptr [0x12100f00], ebx */
  w32((uint32_t)(0x12100f00), (EBX));
L_120f703e:;
  /* 120f703e lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f7041 mov esi, dword ptr [0x120fd088] */
  ESI = (r32((uint32_t)(0x120fd088)));
  /* 120f7047 push eax */
  push32((uint32_t)(EAX));
  /* 120f7048 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7049 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f704b mov edi, 0x220 */
  EDI = (0x220u);
  /* 120f7050 push dword ptr [0x12100f84] */
  push32((uint32_t)(r32((uint32_t)(0x12100f84))));
  /* 120f7056 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f7058 push 0x12104074 */
  push32((uint32_t)(0x12104074u));
  /* 120f705d push edi */
  push32((uint32_t)(EDI));
  /* 120f705e push dword ptr [0x12104160] */
  push32((uint32_t)(r32((uint32_t)(0x12104160))));
  /* 120f7064 call esi */
  call_ind((uint32_t)(ESI), 0x120f7066u);
  /* 120f7066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f7068 je 0x120f707a */
  if (C.zf) goto L_120f707a;
  /* 120f706a cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f706d jne 0x120f707a */
  if (!C.zf) goto L_120f707a;
  /* 120f706f mov eax, dword ptr [0x12100f84] */
  EAX = (r32((uint32_t)(0x12100f84)));
  /* 120f7074 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 120f7078 jmp 0x120f7082 */
  goto L_120f7082;
L_120f707a:;
  /* 120f707a mov eax, dword ptr [0x12100f84] */
  EAX = (r32((uint32_t)(0x12100f84)));
  /* 120f707f and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
L_120f7082:;
  /* 120f7082 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f7085 push eax */
  push32((uint32_t)(EAX));
  /* 120f7086 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7087 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7089 push dword ptr [0x12100f88] */
  push32((uint32_t)(r32((uint32_t)(0x12100f88))));
  /* 120f708f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120f7091 push 0x121040c8 */
  push32((uint32_t)(0x121040c8u));
  /* 120f7096 push edi */
  push32((uint32_t)(EDI));
  /* 120f7097 push dword ptr [0x12104160] */
  push32((uint32_t)(r32((uint32_t)(0x12104160))));
  /* 120f709d call esi */
  call_ind((uint32_t)(ESI), 0x120f709fu);
  /* 120f709f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f70a1 je 0x120f71f1 */
  if (C.zf) goto L_120f71f1;
  /* 120f70a7 cmp dword ptr [ebp - 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f70aa jne 0x120f71f1 */
  if (!C.zf) goto L_120f71f1;
  /* 120f70b0 mov eax, dword ptr [0x12100f88] */
  EAX = (r32((uint32_t)(0x12100f88)));
  /* 120f70b5 and byte ptr [eax + 0x3f], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3f)))&(0x0u); w8((uint32_t)(EAX + 0x3f), (_r)); fl_logic(_r,8); }
  /* 120f70b9 jmp 0x120f7202 */
  goto L_120f7202;
L_120f70be:;
  /* 120f70be cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f70c1 je 0x120f71fb */
  if (C.zf) goto L_120f71fb;
  /* 120f70c7 mov eax, dword ptr [0x1210411c] */
  EAX = (r32((uint32_t)(0x1210411c)));
  /* 120f70cc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f70ce je 0x120f70e1 */
  if (C.zf) goto L_120f70e1;
  /* 120f70d0 push eax */
  push32((uint32_t)(EAX));
  /* 120f70d1 push esi */
  push32((uint32_t)(ESI));
  /* 120f70d2 call 0x120f88c0 */
  push32(0x120f70d7u); f_120f88c0();
  /* 120f70d7 pop ecx */
  ECX = (pop32());
  /* 120f70d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f70da pop ecx */
  ECX = (pop32());
  /* 120f70db je 0x120f71fb */
  if (C.zf) goto L_120f71fb;
L_120f70e1:;
  /* 120f70e1 push dword ptr [0x1210411c] */
  push32((uint32_t)(r32((uint32_t)(0x1210411c))));
  /* 120f70e7 call 0x120f4e1c */
  push32(0x120f70ecu); f_120f4e1c();
  /* 120f70ec push esi */
  push32((uint32_t)(ESI));
  /* 120f70ed call 0x120f9190 */
  push32(0x120f70f2u); f_120f9190();
  /* 120f70f2 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f70f3 push eax */
  push32((uint32_t)(EAX));
  /* 120f70f4 call 0x120f5823 */
  push32(0x120f70f9u); f_120f5823();
  /* 120f70f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f70fc cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f70fe mov dword ptr [0x1210411c], eax */
  w32((uint32_t)(0x1210411c), (EAX));
  /* 120f7103 je 0x120f71fb */
  if (C.zf) goto L_120f71fb;
  /* 120f7109 push esi */
  push32((uint32_t)(ESI));
  /* 120f710a push eax */
  push32((uint32_t)(EAX));
  /* 120f710b call 0x120f9b80 */
  push32(0x120f7110u); f_120f9b80();
  /* 120f7110 push edi */
  push32((uint32_t)(EDI));
  /* 120f7111 call 0x120f6f3d */
  push32(0x120f7116u); f_120f6f3d();
  /* 120f7116 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f7118 push esi */
  push32((uint32_t)(ESI));
  /* 120f7119 push dword ptr [0x12100f84] */
  push32((uint32_t)(r32((uint32_t)(0x12100f84))));
  /* 120f711f call 0x120fa880 */
  push32(0x120f7124u); f_120fa880();
  /* 120f7124 mov eax, dword ptr [0x12100f84] */
  EAX = (r32((uint32_t)(0x12100f84)));
  /* 120f7129 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f712c add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f712f and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 120f7133 cmp byte ptr [esi], 0x2d */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7136 jne 0x120f7140 */
  if (!C.zf) goto L_120f7140;
  /* 120f7138 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120f713f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120f7140:;
  /* 120f7140 push esi */
  push32((uint32_t)(ESI));
  /* 120f7141 call 0x120fa97e */
  push32(0x120f7146u); f_120fa97e();
  /* 120f7146 pop ecx */
  ECX = (pop32());
  /* 120f7147 mov bl, 0x30 */
  BL = (0x30u);
  /* 120f7149 mov ecx, eax */
  ECX = (EAX);
  /* 120f714b imul ecx, ecx, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xe10u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7151 mov dword ptr [0x12100ef8], ecx */
  w32((uint32_t)(0x12100ef8), (ECX));
L_120f7157:;
  /* 120f7157 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f7159 cmp al, 0x2b */
  { uint32_t _a=(AL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f715b je 0x120f7165 */
  if (C.zf) goto L_120f7165;
  /* 120f715d cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f715f jl 0x120f7168 */
  if ((C.sf!=C.of)) goto L_120f7168;
  /* 120f7161 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7163 jg 0x120f7168 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7168;
L_120f7165:;
  /* 120f7165 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f7166 jmp 0x120f7157 */
  goto L_120f7157;
L_120f7168:;
  /* 120f7168 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f716b jne 0x120f71bb */
  if (!C.zf) goto L_120f71bb;
  /* 120f716d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f716e push esi */
  push32((uint32_t)(ESI));
  /* 120f716f call 0x120fa97e */
  push32(0x120f7174u); f_120fa97e();
  /* 120f7174 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7177 pop ecx */
  ECX = (pop32());
  /* 120f7178 mov ecx, dword ptr [0x12100ef8] */
  ECX = (r32((uint32_t)(0x12100ef8)));
  /* 120f717e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7180 mov dword ptr [0x12100ef8], ecx */
  w32((uint32_t)(0x12100ef8), (ECX));
L_120f7186:;
  /* 120f7186 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f7188 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f718a jl 0x120f7193 */
  if ((C.sf!=C.of)) goto L_120f7193;
  /* 120f718c cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f718e jg 0x120f7193 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7193;
  /* 120f7190 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f7191 jmp 0x120f7186 */
  goto L_120f7186;
L_120f7193:;
  /* 120f7193 cmp byte ptr [esi], 0x3a */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7196 jne 0x120f71bb */
  if (!C.zf) goto L_120f71bb;
  /* 120f7198 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f7199 push esi */
  push32((uint32_t)(ESI));
  /* 120f719a call 0x120fa97e */
  push32(0x120f719fu); f_120fa97e();
  /* 120f719f pop ecx */
  ECX = (pop32());
  /* 120f71a0 mov ecx, dword ptr [0x12100ef8] */
  ECX = (r32((uint32_t)(0x12100ef8)));
  /* 120f71a6 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f71a8 mov dword ptr [0x12100ef8], ecx */
  w32((uint32_t)(0x12100ef8), (ECX));
L_120f71ae:;
  /* 120f71ae mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f71b0 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f71b2 jl 0x120f71bb */
  if ((C.sf!=C.of)) goto L_120f71bb;
  /* 120f71b4 cmp al, 0x39 */
  { uint32_t _a=(AL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f71b6 jg 0x120f71bb */
  if ((!C.zf&&C.sf==C.of)) goto L_120f71bb;
  /* 120f71b8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f71b9 jmp 0x120f71ae */
  goto L_120f71ae;
L_120f71bb:;
  /* 120f71bb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f71bf je 0x120f71c9 */
  if (C.zf) goto L_120f71c9;
  /* 120f71c1 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f71c3 mov dword ptr [0x12100ef8], ecx */
  w32((uint32_t)(0x12100ef8), (ECX));
L_120f71c9:;
  /* 120f71c9 movsx eax, byte ptr [esi] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESI))));
  /* 120f71cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f71ce mov dword ptr [0x12100efc], eax */
  w32((uint32_t)(0x12100efc), (EAX));
  /* 120f71d3 je 0x120f71f1 */
  if (C.zf) goto L_120f71f1;
  /* 120f71d5 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f71d7 push esi */
  push32((uint32_t)(ESI));
  /* 120f71d8 push dword ptr [0x12100f88] */
  push32((uint32_t)(r32((uint32_t)(0x12100f88))));
  /* 120f71de call 0x120fa880 */
  push32(0x120f71e3u); f_120fa880();
  /* 120f71e3 mov eax, dword ptr [0x12100f88] */
  EAX = (r32((uint32_t)(0x12100f88)));
  /* 120f71e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f71eb and byte ptr [eax + 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x3)))&(0x0u); w8((uint32_t)(EAX + 0x3), (_r)); fl_logic(_r,8); }
  /* 120f71ef jmp 0x120f7202 */
  goto L_120f7202;
L_120f71f1:;
  /* 120f71f1 mov eax, dword ptr [0x12100f88] */
  EAX = (r32((uint32_t)(0x12100f88)));
  /* 120f71f6 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 120f71f9 jmp 0x120f7202 */
  goto L_120f7202;
L_120f71fb:;
  /* 120f71fb push edi */
  push32((uint32_t)(EDI));
  /* 120f71fc call 0x120f6f3d */
  push32(0x120f7201u); f_120f6f3d();
  /* 120f7201 pop ecx */
  ECX = (pop32());
L_120f7202:;
  /* 120f7202 pop edi */
  EDI = (pop32());
  /* 120f7203 pop esi */
  ESI = (pop32());
  /* 120f7204 pop ebx */
  EBX = (pop32());
  /* 120f7205 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f7206 ret  */
  ESPCHK(0x120f6f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007207 @ 0x120f7207 (33 bytes, 12 insns) */
void f_120f7207(void) {
  FTRACE(0x120f7207u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7207 push esi */
  push32((uint32_t)(ESI));
  /* 120f7208 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120f720a call 0x120f6edc */
  push32(0x120f720fu); f_120f6edc();
  /* 120f720f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f7213 call 0x120f7228 */
  push32(0x120f7218u); f_120f7228();
  /* 120f7218 push 0xb */
  push32((uint32_t)(0xbu));
  /* 120f721a mov esi, eax */
  ESI = (EAX);
  /* 120f721c call 0x120f6f3d */
  push32(0x120f7221u); f_120f6f3d();
  /* 120f7221 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7224 mov eax, esi */
  EAX = (ESI);
  /* 120f7226 pop esi */
  ESI = (pop32());
  /* 120f7227 ret  */
  ESPCHK(0x120f7207u, _esp0);
  ESP += 4; return;
}

/* FUN_10007228 @ 0x120f7228 (428 bytes, 149 insns) */
void f_120f7228(void) {
  FTRACE(0x120f7228u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7228 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7229 push esi */
  push32((uint32_t)(ESI));
  /* 120f722a push edi */
  push32((uint32_t)(EDI));
  /* 120f722b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f722d cmp dword ptr [0x12100efc], edi */
  { uint32_t _a=(r32((uint32_t)(0x12100efc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7233 jne 0x120f723c */
  if (!C.zf) goto L_120f723c;
L_120f7235:;
  /* 120f7235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f7237 jmp 0x120f7388 */
  goto L_120f7388;
L_120f723c:;
  /* 120f723c mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 120f7240 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f7242 pop ebx */
  EBX = (pop32());
  /* 120f7243 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 120f7246 cmp eax, dword ptr [0x12100f90] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12100f90))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f724c jne 0x120f725a */
  if (!C.zf) goto L_120f725a;
  /* 120f724e cmp eax, dword ptr [0x12100fa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12100fa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7254 je 0x120f735c */
  if (C.zf) goto L_120f735c;
L_120f725a:;
  /* 120f725a cmp dword ptr [0x12104068], edi */
  { uint32_t _a=(r32((uint32_t)(0x12104068))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7260 je 0x120f7332 */
  if (C.zf) goto L_120f7332;
  /* 120f7266 movzx ecx, word ptr [0x12104116] */
  ECX = ((uint32_t)(r16((uint32_t)(0x12104116))));
  /* 120f726d push ecx */
  push32((uint32_t)(ECX));
  /* 120f726e cmp word ptr [0x12104108], di */
  { uint32_t _a=(r16((uint32_t)(0x12104108))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f7275 movzx ecx, word ptr [0x12104114] */
  ECX = ((uint32_t)(r16((uint32_t)(0x12104114))));
  /* 120f727c push ecx */
  push32((uint32_t)(ECX));
  /* 120f727d movzx ecx, word ptr [0x12104112] */
  ECX = ((uint32_t)(r16((uint32_t)(0x12104112))));
  /* 120f7284 push ecx */
  push32((uint32_t)(ECX));
  /* 120f7285 movzx ecx, word ptr [0x12104110] */
  ECX = ((uint32_t)(r16((uint32_t)(0x12104110))));
  /* 120f728c push ecx */
  push32((uint32_t)(ECX));
  /* 120f728d jne 0x120f72ac */
  if (!C.zf) goto L_120f72ac;
  /* 120f728f movzx ecx, word ptr [0x1210410c] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1210410c))));
  /* 120f7296 push edi */
  push32((uint32_t)(EDI));
  /* 120f7297 push ecx */
  push32((uint32_t)(ECX));
  /* 120f7298 movzx ecx, word ptr [0x1210410e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1210410e))));
  /* 120f729f push ecx */
  push32((uint32_t)(ECX));
  /* 120f72a0 movzx ecx, word ptr [0x1210410a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1210410a))));
  /* 120f72a7 push ecx */
  push32((uint32_t)(ECX));
  /* 120f72a8 push eax */
  push32((uint32_t)(EAX));
  /* 120f72a9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f72aa jmp 0x120f72c0 */
  goto L_120f72c0;
L_120f72ac:;
  /* 120f72ac movzx ecx, word ptr [0x1210410e] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1210410e))));
  /* 120f72b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120f72b4 push edi */
  push32((uint32_t)(EDI));
  /* 120f72b5 movzx ecx, word ptr [0x1210410a] */
  ECX = ((uint32_t)(r16((uint32_t)(0x1210410a))));
  /* 120f72bc push edi */
  push32((uint32_t)(EDI));
  /* 120f72bd push ecx */
  push32((uint32_t)(ECX));
  /* 120f72be push eax */
  push32((uint32_t)(EAX));
  /* 120f72bf push edi */
  push32((uint32_t)(EDI));
L_120f72c0:;
  /* 120f72c0 push ebx */
  push32((uint32_t)(EBX));
  /* 120f72c1 call 0x120f73d4 */
  push32(0x120f72c6u); f_120f73d4();
  /* 120f72c6 movzx eax, word ptr [0x121040c2] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040c2))));
  /* 120f72cd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f72d0 cmp word ptr [0x121040b4], di */
  { uint32_t _a=(r16((uint32_t)(0x121040b4))),_b=(DI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120f72d7 push eax */
  push32((uint32_t)(EAX));
  /* 120f72d8 movzx eax, word ptr [0x121040c0] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040c0))));
  /* 120f72df push eax */
  push32((uint32_t)(EAX));
  /* 120f72e0 movzx eax, word ptr [0x121040be] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040be))));
  /* 120f72e7 push eax */
  push32((uint32_t)(EAX));
  /* 120f72e8 movzx eax, word ptr [0x121040bc] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040bc))));
  /* 120f72ef push eax */
  push32((uint32_t)(EAX));
  /* 120f72f0 jne 0x120f731a */
  if (!C.zf) goto L_120f731a;
  /* 120f72f2 movzx eax, word ptr [0x121040b8] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040b8))));
  /* 120f72f9 push edi */
  push32((uint32_t)(EDI));
  /* 120f72fa push eax */
  push32((uint32_t)(EAX));
  /* 120f72fb movzx eax, word ptr [0x121040ba] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040ba))));
  /* 120f7302 push eax */
  push32((uint32_t)(EAX));
  /* 120f7303 movzx eax, word ptr [0x121040b6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040b6))));
  /* 120f730a push eax */
  push32((uint32_t)(EAX));
  /* 120f730b push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 120f730e push ebx */
  push32((uint32_t)(EBX));
L_120f730f:;
  /* 120f730f push edi */
  push32((uint32_t)(EDI));
  /* 120f7310 call 0x120f73d4 */
  push32(0x120f7315u); f_120f73d4();
  /* 120f7315 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7318 jmp 0x120f735c */
  goto L_120f735c;
L_120f731a:;
  /* 120f731a movzx eax, word ptr [0x121040ba] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040ba))));
  /* 120f7321 push eax */
  push32((uint32_t)(EAX));
  /* 120f7322 push edi */
  push32((uint32_t)(EDI));
  /* 120f7323 movzx eax, word ptr [0x121040b6] */
  EAX = ((uint32_t)(r16((uint32_t)(0x121040b6))));
  /* 120f732a push edi */
  push32((uint32_t)(EDI));
  /* 120f732b push eax */
  push32((uint32_t)(EAX));
  /* 120f732c push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 120f732f push edi */
  push32((uint32_t)(EDI));
  /* 120f7330 jmp 0x120f730f */
  goto L_120f730f;
L_120f7332:;
  /* 120f7332 push edi */
  push32((uint32_t)(EDI));
  /* 120f7333 push edi */
  push32((uint32_t)(EDI));
  /* 120f7334 push edi */
  push32((uint32_t)(EDI));
  /* 120f7335 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f7337 push edi */
  push32((uint32_t)(EDI));
  /* 120f7338 push edi */
  push32((uint32_t)(EDI));
  /* 120f7339 push ebx */
  push32((uint32_t)(EBX));
  /* 120f733a push 4 */
  push32((uint32_t)(0x4u));
  /* 120f733c push eax */
  push32((uint32_t)(EAX));
  /* 120f733d push ebx */
  push32((uint32_t)(EBX));
  /* 120f733e push ebx */
  push32((uint32_t)(EBX));
  /* 120f733f call 0x120f73d4 */
  push32(0x120f7344u); f_120f73d4();
  /* 120f7344 push edi */
  push32((uint32_t)(EDI));
  /* 120f7345 push edi */
  push32((uint32_t)(EDI));
  /* 120f7346 push edi */
  push32((uint32_t)(EDI));
  /* 120f7347 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f7349 push edi */
  push32((uint32_t)(EDI));
  /* 120f734a push edi */
  push32((uint32_t)(EDI));
  /* 120f734b push 5 */
  push32((uint32_t)(0x5u));
  /* 120f734d push 0xa */
  push32((uint32_t)(0xau));
  /* 120f734f push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 120f7352 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7353 push edi */
  push32((uint32_t)(EDI));
  /* 120f7354 call 0x120f73d4 */
  push32(0x120f7359u); f_120f73d4();
  /* 120f7359 add esp, 0x58 */
  { uint32_t _a=(ESP),_b=(0x58u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f735c:;
  /* 120f735c mov edx, dword ptr [0x12100f94] */
  EDX = (r32((uint32_t)(0x12100f94)));
  /* 120f7362 mov eax, dword ptr [0x12100fa4] */
  EAX = (r32((uint32_t)(0x12100fa4)));
  /* 120f7367 mov ecx, dword ptr [esi + 0x1c] */
  ECX = (r32((uint32_t)(ESI + 0x1c)));
  /* 120f736a cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f736c jge 0x120f738c */
  if ((C.sf==C.of)) goto L_120f738c;
  /* 120f736e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7370 jl 0x120f7235 */
  if ((C.sf!=C.of)) goto L_120f7235;
  /* 120f7376 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7378 jg 0x120f7235 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7235;
  /* 120f737e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7380 jle 0x120f73a0 */
  if ((C.zf||C.sf!=C.of)) goto L_120f73a0;
  /* 120f7382 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7384 jge 0x120f73a0 */
  if ((C.sf==C.of)) goto L_120f73a0;
L_120f7386:;
  /* 120f7386 mov eax, ebx */
  EAX = (EBX);
L_120f7388:;
  /* 120f7388 pop edi */
  EDI = (pop32());
  /* 120f7389 pop esi */
  ESI = (pop32());
  /* 120f738a pop ebx */
  EBX = (pop32());
  /* 120f738b ret  */
  ESPCHK(0x120f7228u, _esp0);
  ESP += 4; return;
L_120f738c:;
  /* 120f738c cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f738e jl 0x120f7386 */
  if ((C.sf!=C.of)) goto L_120f7386;
  /* 120f7390 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7392 jg 0x120f7386 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7386;
  /* 120f7394 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7396 jle 0x120f73a0 */
  if ((C.zf||C.sf!=C.of)) goto L_120f73a0;
  /* 120f7398 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f739a jl 0x120f7235 */
  if ((C.sf!=C.of)) goto L_120f7235;
L_120f73a0:;
  /* 120f73a0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 120f73a3 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f73a6 add eax, dword ptr [esi + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f73a9 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f73ac add eax, dword ptr [esi] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f73ae imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f73b4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f73b6 jne 0x120f73c7 */
  if (!C.zf) goto L_120f73c7;
  /* 120f73b8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f73ba cmp eax, dword ptr [0x12100f98] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12100f98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f73c0 setge cl */
  CL = (((C.sf==C.of)) ? 1u : 0u);
L_120f73c3:;
  /* 120f73c3 mov eax, ecx */
  EAX = (ECX);
  /* 120f73c5 jmp 0x120f7388 */
  goto L_120f7388;
L_120f73c7:;
  /* 120f73c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120f73c9 cmp eax, dword ptr [0x12100fa8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12100fa8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f73cf setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 120f73d2 jmp 0x120f73c3 */
  goto L_120f73c3;
}

/* FUN_100073d4 @ 0x120f73d4 (320 bytes, 101 insns) */
void f_120f73d4(void) {
  FTRACE(0x120f73d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f73d4 push ebp */
  push32((uint32_t)(EBP));
  /* 120f73d5 mov ebp, esp */
  EBP = (ESP);
  /* 120f73d7 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f73db push ebx */
  push32((uint32_t)(EBX));
  /* 120f73dc mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f73df push esi */
  push32((uint32_t)(ESI));
  /* 120f73e0 jne 0x120f746f */
  if (!C.zf) goto L_120f746f;
  /* 120f73e6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f73e9 mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 120f73ec and dword ptr [ebp + 0x10], 3 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))&(0x3u); w32((uint32_t)(EBP + 0x10), (_r)); fl_logic(_r,32); }
  /* 120f73f0 mov esi, eax */
  ESI = (EAX);
  /* 120f73f2 jne 0x120f73ff */
  if (!C.zf) goto L_120f73ff;
  /* 120f73f4 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 120f73f7 mov eax, dword ptr [esi + 0x12100fa8] */
  EAX = (r32((uint32_t)(ESI + 0x12100fa8)));
  /* 120f73fd jmp 0x120f7408 */
  goto L_120f7408;
L_120f73ff:;
  /* 120f73ff shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 120f7402 mov eax, dword ptr [esi + 0x12100fdc] */
  EAX = (r32((uint32_t)(ESI + 0x12100fdc)));
L_120f7408:;
  /* 120f7408 mov edx, ebx */
  EDX = (EBX);
  /* 120f740a lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 120f740d imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7413 lea eax, [ebx - 1] */
  EAX = ((uint32_t)(EBX + -0x1));
  /* 120f7416 push edi */
  push32((uint32_t)(EDI));
  /* 120f7417 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120f741a mov edi, ecx */
  EDI = (ECX);
  /* 120f741c push 7 */
  push32((uint32_t)(0x7u));
  /* 120f741e add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7420 lea eax, [edx + edi - 0x63db] */
  EAX = ((uint32_t)(EDX + EDI*1 + -0x63db));
  /* 120f7427 pop edi */
  EDI = (pop32());
  /* 120f7428 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f7429 idiv edi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(EDI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f742b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120f742e pop edi */
  EDI = (pop32());
  /* 120f742f cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7432 jg 0x120f7442 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7442;
  /* 120f7434 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7437 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7439 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f743c lea ecx, [ecx + eax - 7] */
  ECX = ((uint32_t)(ECX + EAX*1 + -0x7));
  /* 120f7440 jmp 0x120f744c */
  goto L_120f744c;
L_120f7442:;
  /* 120f7442 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7445 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7447 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f744a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_120f744c:;
  /* 120f744c cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7450 jne 0x120f748a */
  if (!C.zf) goto L_120f748a;
  /* 120f7452 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7456 jne 0x120f7460 */
  if (!C.zf) goto L_120f7460;
  /* 120f7458 mov esi, dword ptr [esi + 0x12100fac] */
  ESI = (r32((uint32_t)(ESI + 0x12100fac)));
  /* 120f745e jmp 0x120f7466 */
  goto L_120f7466;
L_120f7460:;
  /* 120f7460 mov esi, dword ptr [esi + 0x12100fe0] */
  ESI = (r32((uint32_t)(ESI + 0x12100fe0)));
L_120f7466:;
  /* 120f7466 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7468 jle 0x120f748a */
  if ((C.zf||C.sf!=C.of)) goto L_120f748a;
  /* 120f746a sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f746d jmp 0x120f748a */
  goto L_120f748a;
L_120f746f:;
  /* 120f746f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f7472 test bl, 3 */
  { uint32_t _r=(BL)&(0x3u); fl_logic(_r,8); }
  /* 120f7475 jne 0x120f7480 */
  if (!C.zf) goto L_120f7480;
  /* 120f7477 mov ecx, dword ptr [eax*4 + 0x12100fa8] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12100fa8)));
  /* 120f747e jmp 0x120f7487 */
  goto L_120f7487;
L_120f7480:;
  /* 120f7480 mov ecx, dword ptr [eax*4 + 0x12100fdc] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12100fdc)));
L_120f7487:;
  /* 120f7487 add ecx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
L_120f748a:;
  /* 120f748a cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f748e jne 0x120f74bb */
  if (!C.zf) goto L_120f74bb;
  /* 120f7490 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120f7493 mov dword ptr [0x12100f94], ecx */
  w32((uint32_t)(0x12100f94), (ECX));
  /* 120f7499 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f749c add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f749f mov dword ptr [0x12100f90], ebx */
  w32((uint32_t)(0x12100f90), (EBX));
  /* 120f74a5 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f74a8 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74ab imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f74b1 add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74b4 mov dword ptr [0x12100f98], eax */
  w32((uint32_t)(0x12100f98), (EAX));
  /* 120f74b9 jmp 0x120f7510 */
  goto L_120f7510;
L_120f74bb:;
  /* 120f74bb mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120f74be mov dword ptr [0x12100fa4], ecx */
  w32((uint32_t)(0x12100fa4), (ECX));
  /* 120f74c4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f74c7 add eax, dword ptr [ebp + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74ca imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f74cd add eax, dword ptr [0x12100f00] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12100f00))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74d3 add eax, dword ptr [ebp + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74d6 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f74dc add eax, dword ptr [ebp + 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74df mov dword ptr [0x12100fa8], eax */
  w32((uint32_t)(0x12100fa8), (EAX));
  /* 120f74e4 jns 0x120f74f3 */
  if (!C.sf) goto L_120f74f3;
  /* 120f74e6 add eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f74eb dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f74ec mov dword ptr [0x12100fa8], eax */
  w32((uint32_t)(0x12100fa8), (EAX));
  /* 120f74f1 jmp 0x120f7504 */
  goto L_120f7504;
L_120f74f3:;
  /* 120f74f3 mov edx, 0x5265c00 */
  EDX = (0x5265c00u);
  /* 120f74f8 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f74fa jl 0x120f750a */
  if ((C.sf!=C.of)) goto L_120f750a;
  /* 120f74fc sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f74fe inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f74ff mov dword ptr [0x12100fa8], eax */
  w32((uint32_t)(0x12100fa8), (EAX));
L_120f7504:;
  /* 120f7504 mov dword ptr [0x12100fa4], ecx */
  w32((uint32_t)(0x12100fa4), (ECX));
L_120f750a:;
  /* 120f750a mov dword ptr [0x12100fa0], ebx */
  w32((uint32_t)(0x12100fa0), (EBX));
L_120f7510:;
  /* 120f7510 pop esi */
  ESI = (pop32());
  /* 120f7511 pop ebx */
  EBX = (pop32());
  /* 120f7512 pop ebp */
  EBP = (pop32());
  /* 120f7513 ret  */
  ESPCHK(0x120f73d4u, _esp0);
  ESP += 4; return;
}

/* FUN_10007514 @ 0x120f7514 (72 bytes, 17 insns) */
void f_120f7514(void) {
  FTRACE(0x120f7514u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7514 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 120f7519 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f751b push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f7521 call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120f7527u);
  /* 120f7527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f7529 mov dword ptr [0x1210445c], eax */
  w32((uint32_t)(0x1210445c), (EAX));
  /* 120f752e jne 0x120f7531 */
  if (!C.zf) goto L_120f7531;
  /* 120f7530 ret  */
  ESPCHK(0x120f7514u, _esp0);
  ESP += 4; return;
L_120f7531:;
  /* 120f7531 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f7535 and dword ptr [0x12104454], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12104454)))&(0x0u); w32((uint32_t)(0x12104454), (_r)); fl_logic(_r,32); }
  /* 120f753c and dword ptr [0x12104458], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12104458)))&(0x0u); w32((uint32_t)(0x12104458), (_r)); fl_logic(_r,32); }
  /* 120f7543 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f7545 mov dword ptr [0x12104450], eax */
  w32((uint32_t)(0x12104450), (EAX));
  /* 120f754a mov dword ptr [0x12104460], ecx */
  w32((uint32_t)(0x12104460), (ECX));
  /* 120f7550 mov dword ptr [0x12104448], 0x10 */
  w32((uint32_t)(0x12104448), (0x10u));
  /* 120f755a pop eax */
  EAX = (pop32());
  /* 120f755b ret  */
  ESPCHK(0x120f7514u, _esp0);
  ESP += 4; return;
}

/* FUN_1000755c @ 0x120f755c (43 bytes, 14 insns) */
void f_120f755c(void) {
  FTRACE(0x120f755cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f755c mov eax, dword ptr [0x12104458] */
  EAX = (r32((uint32_t)(0x12104458)));
  /* 120f7561 lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 120f7564 mov eax, dword ptr [0x1210445c] */
  EAX = (r32((uint32_t)(0x1210445c)));
  /* 120f7569 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_120f756c:;
  /* 120f756c cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f756e jae 0x120f7584 */
  if (!C.cf) goto L_120f7584;
  /* 120f7570 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f7574 sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7577 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f757d jb 0x120f7586 */
  if (C.cf) goto L_120f7586;
  /* 120f757f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7582 jmp 0x120f756c */
  goto L_120f756c;
L_120f7584:;
  /* 120f7584 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f7586:;
  /* 120f7586 ret  */
  ESPCHK(0x120f755cu, _esp0);
  ESP += 4; return;
}

/* FUN_10007587 @ 0x120f7587 (809 bytes, 265 insns) */
void f_120f7587(void) {
  FTRACE(0x120f7587u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7587 push ebp */
  push32((uint32_t)(EBP));
  /* 120f7588 mov ebp, esp */
  EBP = (ESP);
  /* 120f758a sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f758d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7590 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7591 push esi */
  push32((uint32_t)(ESI));
  /* 120f7592 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7595 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 120f7598 push edi */
  push32((uint32_t)(EDI));
  /* 120f7599 mov edi, esi */
  EDI = (ESI);
  /* 120f759b add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f759e sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f75a1 shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 120f75a4 mov ecx, edi */
  ECX = (EDI);
  /* 120f75a6 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f75ac lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120f75b3 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120f75b6 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 120f75b8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f75b9 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 120f75bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f75bf jne 0x120f78ab */
  if (!C.zf) goto L_120f78ab;
  /* 120f75c5 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 120f75c8 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 120f75cb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120f75ce mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 120f75d1 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120f75d4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f75d7 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 120f75da mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 120f75dd jne 0x120f765d */
  if (!C.zf) goto L_120f765d;
  /* 120f75df sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120f75e2 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f75e3 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f75e6 jbe 0x120f75eb */
  if ((C.cf||C.zf)) goto L_120f75eb;
  /* 120f75e8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f75ea pop edx */
  EDX = (pop32());
L_120f75eb:;
  /* 120f75eb mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f75ee cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f75f1 jne 0x120f763f */
  if (!C.zf) goto L_120f763f;
  /* 120f75f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f75f6 jae 0x120f7616 */
  if (!C.cf) goto L_120f7616;
  /* 120f75f8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f75fd mov ecx, edx */
  ECX = (EDX);
  /* 120f75ff shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7601 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 120f7605 not ebx */
  EBX = (~(EBX));
  /* 120f7607 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f760b dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 120f760d jne 0x120f7637 */
  if (!C.zf) goto L_120f7637;
  /* 120f760f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7612 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f7614 jmp 0x120f7637 */
  goto L_120f7637;
L_120f7616:;
  /* 120f7616 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 120f7619 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f761e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7620 lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 120f7624 not ebx */
  EBX = (~(EBX));
  /* 120f7626 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 120f762d dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 120f762f jne 0x120f7637 */
  if (!C.zf) goto L_120f7637;
  /* 120f7631 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7634 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7637:;
  /* 120f7637 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f763a mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f763d jmp 0x120f7642 */
  goto L_120f7642;
L_120f763f:;
  /* 120f763f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_120f7642:;
  /* 120f7642 mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 120f7645 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7648 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f764b mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 120f764e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7651 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f7654 mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7657 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 120f765a mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_120f765d:;
  /* 120f765d mov edx, ecx */
  EDX = (ECX);
  /* 120f765f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120f7662 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f7663 cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7666 jbe 0x120f766b */
  if ((C.cf||C.zf)) goto L_120f766b;
  /* 120f7668 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f766a pop edx */
  EDX = (pop32());
L_120f766b:;
  /* 120f766b mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f766e and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 120f7671 mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 120f7674 jne 0x120f770e */
  if (!C.zf) goto L_120f770e;
  /* 120f767a sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f767d mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f7680 sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 120f7683 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7685 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 120f7688 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f7689 pop esi */
  ESI = (pop32());
  /* 120f768a cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f768c jbe 0x120f7690 */
  if ((C.cf||C.zf)) goto L_120f7690;
  /* 120f768e mov ebx, esi */
  EBX = (ESI);
L_120f7690:;
  /* 120f7690 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7693 mov edx, ecx */
  EDX = (ECX);
  /* 120f7695 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f7698 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120f769b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f769c cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f769e jbe 0x120f76a2 */
  if ((C.cf||C.zf)) goto L_120f76a2;
  /* 120f76a0 mov edx, esi */
  EDX = (ESI);
L_120f76a2:;
  /* 120f76a2 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f76a4 je 0x120f7709 */
  if (C.zf) goto L_120f7709;
  /* 120f76a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f76a9 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 120f76ac cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f76af jne 0x120f76f1 */
  if (!C.zf) goto L_120f76f1;
  /* 120f76b1 cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f76b4 jae 0x120f76d2 */
  if (!C.cf) goto L_120f76d2;
  /* 120f76b6 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 120f76bb mov ecx, ebx */
  ECX = (EBX);
  /* 120f76bd shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f76bf not esi */
  ESI = (~(ESI));
  /* 120f76c1 and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f76c5 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 120f76c9 jne 0x120f76f1 */
  if (!C.zf) goto L_120f76f1;
  /* 120f76cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f76ce and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f76d0 jmp 0x120f76f1 */
  goto L_120f76f1;
L_120f76d2:;
  /* 120f76d2 lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 120f76d5 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 120f76da shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f76dc not esi */
  ESI = (~(ESI));
  /* 120f76de and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 120f76e5 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 120f76e9 jne 0x120f76f1 */
  if (!C.zf) goto L_120f76f1;
  /* 120f76eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f76ee and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f76f1:;
  /* 120f76f1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f76f4 mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 120f76f7 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f76fa mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 120f76fd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7700 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 120f7703 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 120f7706 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_120f7709:;
  /* 120f7709 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f770c jmp 0x120f7711 */
  goto L_120f7711;
L_120f770e:;
  /* 120f770e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120f7711:;
  /* 120f7711 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7715 jne 0x120f771f */
  if (!C.zf) goto L_120f771f;
  /* 120f7717 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7719 je 0x120f77a0 */
  if (C.zf) goto L_120f77a0;
L_120f771f:;
  /* 120f771f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f7722 mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 120f7726 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 120f7729 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 120f772c mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 120f772f mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 120f7732 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f7735 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 120f7738 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f773b cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f773e jne 0x120f77a0 */
  if (!C.zf) goto L_120f77a0;
  /* 120f7740 mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 120f7744 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7747 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 120f774a inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f774c mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 120f7750 jae 0x120f7777 */
  if (!C.cf) goto L_120f7777;
  /* 120f7752 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7756 jne 0x120f7766 */
  if (!C.zf) goto L_120f7766;
  /* 120f7758 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f775d mov ecx, edx */
  ECX = (EDX);
  /* 120f775f shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7761 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7764 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_120f7766:;
  /* 120f7766 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f776b mov ecx, edx */
  ECX = (EDX);
  /* 120f776d shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f776f lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 120f7773 or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f7775 jmp 0x120f77a0 */
  goto L_120f77a0;
L_120f7777:;
  /* 120f7777 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f777b jne 0x120f778d */
  if (!C.zf) goto L_120f778d;
  /* 120f777d lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 120f7780 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7785 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7787 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f778a or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f778d:;
  /* 120f778d lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 120f7790 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120f7795 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f7797 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 120f779e or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_120f77a0:;
  /* 120f77a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f77a3 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f77a5 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 120f77a9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120f77ac dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 120f77ae jne 0x120f78ab */
  if (!C.zf) goto L_120f78ab;
  /* 120f77b4 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f77b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f77bb je 0x120f789d */
  if (C.zf) goto L_120f789d;
  /* 120f77c1 mov ecx, dword ptr [0x1210444c] */
  ECX = (r32((uint32_t)(0x1210444c)));
  /* 120f77c7 mov esi, dword ptr [0x120fd064] */
  ESI = (r32((uint32_t)(0x120fd064)));
  /* 120f77cd shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 120f77d0 add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f77d3 mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 120f77d8 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120f77dd push ebx */
  push32((uint32_t)(EBX));
  /* 120f77de push ecx */
  push32((uint32_t)(ECX));
  /* 120f77df call esi */
  call_ind((uint32_t)(ESI), 0x120f77e1u);
  /* 120f77e1 mov ecx, dword ptr [0x1210444c] */
  ECX = (r32((uint32_t)(0x1210444c)));
  /* 120f77e7 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f77ec mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120f77f1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f77f3 or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 120f77f6 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f77fb mov ecx, dword ptr [0x1210444c] */
  ECX = (r32((uint32_t)(0x1210444c)));
  /* 120f7801 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 120f7804 and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 120f780c mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f7811 mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 120f7814 dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 120f7817 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f781c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120f781f cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7823 jne 0x120f782e */
  if (!C.zf) goto L_120f782e;
  /* 120f7825 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f7829 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
L_120f782e:;
  /* 120f782e cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7832 jne 0x120f789d */
  if (!C.zf) goto L_120f789d;
  /* 120f7834 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7835 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f7837 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 120f783a call esi */
  call_ind((uint32_t)(ESI), 0x120f783cu);
  /* 120f783c mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f7841 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 120f7844 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f7846 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f784c call dword ptr [0x120fd000] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd000))), 0x120f7852u);
  /* 120f7852 mov eax, dword ptr [0x12104458] */
  EAX = (r32((uint32_t)(0x12104458)));
  /* 120f7857 mov edx, dword ptr [0x1210445c] */
  EDX = (r32((uint32_t)(0x1210445c)));
  /* 120f785d lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f7860 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120f7863 mov ecx, eax */
  ECX = (EAX);
  /* 120f7865 mov eax, dword ptr [0x12104454] */
  EAX = (r32((uint32_t)(0x12104454)));
  /* 120f786a sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f786c lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 120f7870 push ecx */
  push32((uint32_t)(ECX));
  /* 120f7871 lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 120f7874 push ecx */
  push32((uint32_t)(ECX));
  /* 120f7875 push eax */
  push32((uint32_t)(EAX));
  /* 120f7876 call 0x120f8950 */
  push32(0x120f787bu); f_120f8950();
  /* 120f787b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f787e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7881 dec dword ptr [0x12104458] */
  { uint32_t _r=(r32((uint32_t)(0x12104458)))-1; w32((uint32_t)(0x12104458), (_r)); fl_dec(_r,32); }
  /* 120f7887 cmp eax, dword ptr [0x12104454] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12104454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f788d jbe 0x120f7893 */
  if ((C.cf||C.zf)) goto L_120f7893;
  /* 120f788f sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_120f7893:;
  /* 120f7893 mov eax, dword ptr [0x1210445c] */
  EAX = (r32((uint32_t)(0x1210445c)));
  /* 120f7898 mov dword ptr [0x12104450], eax */
  w32((uint32_t)(0x12104450), (EAX));
L_120f789d:;
  /* 120f789d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f78a0 mov dword ptr [0x1210444c], edi */
  w32((uint32_t)(0x1210444c), (EDI));
  /* 120f78a6 mov dword ptr [0x12104454], eax */
  w32((uint32_t)(0x12104454), (EAX));
L_120f78ab:;
  /* 120f78ab pop edi */
  EDI = (pop32());
  /* 120f78ac pop esi */
  ESI = (pop32());
  /* 120f78ad pop ebx */
  EBX = (pop32());
  /* 120f78ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f78af ret  */
  ESPCHK(0x120f7587u, _esp0);
  ESP += 4; return;
}

/* FUN_100078b0 @ 0x120f78b0 (777 bytes, 275 insns) */
void f_120f78b0(void) {
  FTRACE(0x120f78b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f78b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120f78b1 mov ebp, esp */
  EBP = (ESP);
  /* 120f78b3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f78b6 mov eax, dword ptr [0x12104458] */
  EAX = (r32((uint32_t)(0x12104458)));
  /* 120f78bb mov edx, dword ptr [0x1210445c] */
  EDX = (r32((uint32_t)(0x1210445c)));
  /* 120f78c1 push ebx */
  push32((uint32_t)(EBX));
  /* 120f78c2 push esi */
  push32((uint32_t)(ESI));
  /* 120f78c3 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f78c6 push edi */
  push32((uint32_t)(EDI));
  /* 120f78c7 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 120f78ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f78cd mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120f78d0 lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 120f78d3 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 120f78d6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120f78d9 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120f78dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f78dd cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f78e0 jge 0x120f78f0 */
  if ((C.sf==C.of)) goto L_120f78f0;
  /* 120f78e2 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 120f78e5 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f78e7 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120f78eb mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 120f78ee jmp 0x120f7900 */
  goto L_120f7900;
L_120f78f0:;
  /* 120f78f0 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f78f3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f78f6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f78f8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120f78fa mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 120f78fd mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120f7900:;
  /* 120f7900 mov eax, dword ptr [0x12104450] */
  EAX = (r32((uint32_t)(0x12104450)));
  /* 120f7905 mov ebx, eax */
  EBX = (EAX);
  /* 120f7907 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7909 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f790c jae 0x120f7927 */
  if (!C.cf) goto L_120f7927;
L_120f790e:;
  /* 120f790e mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7911 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 120f7913 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 120f7916 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 120f7918 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f791a jne 0x120f7927 */
  if (!C.zf) goto L_120f7927;
  /* 120f791c add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f791f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7922 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f7925 jb 0x120f790e */
  if (C.cf) goto L_120f790e;
L_120f7927:;
  /* 120f7927 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f792a jne 0x120f79a5 */
  if (!C.zf) goto L_120f79a5;
  /* 120f792c mov ebx, edx */
  EBX = (EDX);
L_120f792e:;
  /* 120f792e cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7930 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f7933 jae 0x120f794a */
  if (!C.cf) goto L_120f794a;
  /* 120f7935 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7938 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 120f793a and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 120f793d and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 120f793f or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f7941 jne 0x120f7948 */
  if (!C.zf) goto L_120f7948;
  /* 120f7943 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7946 jmp 0x120f792e */
  goto L_120f792e;
L_120f7948:;
  /* 120f7948 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f794a:;
  /* 120f794a jne 0x120f79a5 */
  if (!C.zf) goto L_120f79a5;
L_120f794c:;
  /* 120f794c cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f794f jae 0x120f7962 */
  if (!C.cf) goto L_120f7962;
  /* 120f7951 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7955 jne 0x120f795f */
  if (!C.zf) goto L_120f795f;
  /* 120f7957 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f795a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f795d jmp 0x120f794c */
  goto L_120f794c;
L_120f795f:;
  /* 120f795f cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f7962:;
  /* 120f7962 jne 0x120f798a */
  if (!C.zf) goto L_120f798a;
  /* 120f7964 mov ebx, edx */
  EBX = (EDX);
L_120f7966:;
  /* 120f7966 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7968 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f796b jae 0x120f797a */
  if (!C.cf) goto L_120f797a;
  /* 120f796d cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7971 jne 0x120f7978 */
  if (!C.zf) goto L_120f7978;
  /* 120f7973 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7976 jmp 0x120f7966 */
  goto L_120f7966;
L_120f7978:;
  /* 120f7978 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f797a:;
  /* 120f797a jne 0x120f798a */
  if (!C.zf) goto L_120f798a;
  /* 120f797c call 0x120f7bb9 */
  push32(0x120f7981u); f_120f7bb9();
  /* 120f7981 mov ebx, eax */
  EBX = (EAX);
  /* 120f7983 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f7985 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f7988 je 0x120f799e */
  if (C.zf) goto L_120f799e;
L_120f798a:;
  /* 120f798a push ebx */
  push32((uint32_t)(EBX));
  /* 120f798b call 0x120f7c6a */
  push32(0x120f7990u); f_120f7c6a();
  /* 120f7990 pop ecx */
  ECX = (pop32());
  /* 120f7991 mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 120f7994 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120f7996 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 120f7999 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f799c jne 0x120f79a5 */
  if (!C.zf) goto L_120f79a5;
L_120f799e:;
  /* 120f799e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f79a0 jmp 0x120f7bb4 */
  goto L_120f7bb4;
L_120f79a5:;
  /* 120f79a5 mov dword ptr [0x12104450], ebx */
  w32((uint32_t)(0x12104450), (EBX));
  /* 120f79ab mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 120f79ae mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120f79b0 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f79b3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120f79b6 je 0x120f79cc */
  if (C.zf) goto L_120f79cc;
  /* 120f79b8 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 120f79bf mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 120f79c3 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 120f79c6 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 120f79c8 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f79ca jne 0x120f7a03 */
  if (!C.zf) goto L_120f7a03;
L_120f79cc:;
  /* 120f79cc mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 120f79d2 mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 120f79d5 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120f79d8 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 120f79db and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f79df lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 120f79e2 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 120f79e4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 120f79e7 jne 0x120f7a00 */
  if (!C.zf) goto L_120f7a00;
L_120f79e9:;
  /* 120f79e9 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 120f79ef inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f79f2 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120f79f5 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f79f8 mov edi, esi */
  EDI = (ESI);
  /* 120f79fa and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 120f79fc or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 120f79fe je 0x120f79e9 */
  if (C.zf) goto L_120f79e9;
L_120f7a00:;
  /* 120f7a00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_120f7a03:;
  /* 120f7a03 mov ecx, edx */
  ECX = (EDX);
  /* 120f7a05 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f7a07 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7a0d lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120f7a14 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120f7a17 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 120f7a1b and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 120f7a1d jne 0x120f7a2c */
  if (!C.zf) goto L_120f7a2c;
  /* 120f7a1f mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 120f7a26 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f7a28 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 120f7a2b pop edi */
  EDI = (pop32());
L_120f7a2c:;
  /* 120f7a2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f7a2e jl 0x120f7a35 */
  if ((C.sf!=C.of)) goto L_120f7a35;
  /* 120f7a30 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120f7a32 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f7a33 jmp 0x120f7a2c */
  goto L_120f7a2c;
L_120f7a35:;
  /* 120f7a35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f7a38 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 120f7a3c mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120f7a3e sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7a41 mov esi, ecx */
  ESI = (ECX);
  /* 120f7a43 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f7a46 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 120f7a49 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f7a4a cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7a4d jle 0x120f7a52 */
  if ((C.zf||C.sf!=C.of)) goto L_120f7a52;
  /* 120f7a4f push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7a51 pop esi */
  ESI = (pop32());
L_120f7a52:;
  /* 120f7a52 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7a54 je 0x120f7b67 */
  if (C.zf) goto L_120f7b67;
  /* 120f7a5a mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7a5d cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7a60 jne 0x120f7ac3 */
  if (!C.zf) goto L_120f7ac3;
  /* 120f7a62 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7a65 jge 0x120f7a92 */
  if ((C.sf==C.of)) goto L_120f7a92;
  /* 120f7a67 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7a6c mov ecx, edi */
  ECX = (EDI);
  /* 120f7a6e shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7a70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7a73 lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 120f7a77 not ebx */
  EBX = (~(EBX));
  /* 120f7a79 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 120f7a7c and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 120f7a80 mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 120f7a84 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 120f7a86 jne 0x120f7ac0 */
  if (!C.zf) goto L_120f7ac0;
  /* 120f7a88 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7a8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f7a8e and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 120f7a90 jmp 0x120f7ac3 */
  goto L_120f7ac3;
L_120f7a92:;
  /* 120f7a92 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 120f7a95 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7a9a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7a9f lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 120f7aa3 lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 120f7aaa not ebx */
  EBX = (~(EBX));
  /* 120f7aac and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f7aae dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 120f7ab0 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 120f7ab3 jne 0x120f7ac0 */
  if (!C.zf) goto L_120f7ac0;
  /* 120f7ab5 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7ab8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120f7abb and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f7abe jmp 0x120f7ac3 */
  goto L_120f7ac3;
L_120f7ac0:;
  /* 120f7ac0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120f7ac3:;
  /* 120f7ac3 mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 120f7ac6 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7ac9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7acd mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 120f7ad0 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7ad3 mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 120f7ad6 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 120f7ad9 je 0x120f7b73 */
  if (C.zf) goto L_120f7b73;
  /* 120f7adf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f7ae2 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 120f7ae6 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 120f7ae9 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 120f7aec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120f7aef mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120f7af2 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7af5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120f7af8 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f7afb cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7afe jne 0x120f7b64 */
  if (!C.zf) goto L_120f7b64;
  /* 120f7b00 mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 120f7b04 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7b07 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 120f7b0a jge 0x120f7b35 */
  if ((C.sf==C.of)) goto L_120f7b35;
  /* 120f7b0c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f7b0e cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7b12 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 120f7b16 jne 0x120f7b23 */
  if (!C.zf) goto L_120f7b23;
  /* 120f7b18 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 120f7b1d mov ecx, esi */
  ECX = (ESI);
  /* 120f7b1f shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 120f7b21 or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_120f7b23:;
  /* 120f7b23 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 120f7b28 mov ecx, esi */
  ECX = (ESI);
  /* 120f7b2a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 120f7b2c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7b2f or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f7b33 jmp 0x120f7b64 */
  goto L_120f7b64;
L_120f7b35:;
  /* 120f7b35 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f7b37 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7b3b mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 120f7b3f jne 0x120f7b4e */
  if (!C.zf) goto L_120f7b4e;
  /* 120f7b41 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 120f7b44 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 120f7b49 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 120f7b4b or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7b4e:;
  /* 120f7b4e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7b51 lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 120f7b58 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 120f7b5b mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 120f7b60 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f7b62 or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_120f7b64:;
  /* 120f7b64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_120f7b67:;
  /* 120f7b67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f7b69 je 0x120f7b76 */
  if (C.zf) goto L_120f7b76;
  /* 120f7b6b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120f7b6d mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 120f7b71 jmp 0x120f7b76 */
  goto L_120f7b76;
L_120f7b73:;
  /* 120f7b73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_120f7b76:;
  /* 120f7b76 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 120f7b79 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7b7b lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 120f7b7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120f7b80 mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 120f7b84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 120f7b87 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 120f7b89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120f7b8b lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 120f7b8e mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 120f7b90 jne 0x120f7bac */
  if (!C.zf) goto L_120f7bac;
  /* 120f7b92 cmp ebx, dword ptr [0x12104454] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12104454))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7b98 jne 0x120f7bac */
  if (!C.zf) goto L_120f7bac;
  /* 120f7b9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7b9d cmp ecx, dword ptr [0x1210444c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1210444c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7ba3 jne 0x120f7bac */
  if (!C.zf) goto L_120f7bac;
  /* 120f7ba5 and dword ptr [0x12104454], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12104454)))&(0x0u); w32((uint32_t)(0x12104454), (_r)); fl_logic(_r,32); }
L_120f7bac:;
  /* 120f7bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7baf mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f7bb1 lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_120f7bb4:;
  /* 120f7bb4 pop edi */
  EDI = (pop32());
  /* 120f7bb5 pop esi */
  ESI = (pop32());
  /* 120f7bb6 pop ebx */
  EBX = (pop32());
  /* 120f7bb7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f7bb8 ret  */
  ESPCHK(0x120f78b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007bb9 @ 0x120f7bb9 (177 bytes, 53 insns) */
void f_120f7bb9(void) {
  FTRACE(0x120f7bb9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7bb9 mov eax, dword ptr [0x12104458] */
  EAX = (r32((uint32_t)(0x12104458)));
  /* 120f7bbe mov ecx, dword ptr [0x12104448] */
  ECX = (r32((uint32_t)(0x12104448)));
  /* 120f7bc4 push esi */
  push32((uint32_t)(ESI));
  /* 120f7bc5 push edi */
  push32((uint32_t)(EDI));
  /* 120f7bc6 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f7bc8 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7bca jne 0x120f7bfc */
  if (!C.zf) goto L_120f7bfc;
  /* 120f7bcc lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 120f7bd0 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120f7bd3 push eax */
  push32((uint32_t)(EAX));
  /* 120f7bd4 push dword ptr [0x1210445c] */
  push32((uint32_t)(r32((uint32_t)(0x1210445c))));
  /* 120f7bda push edi */
  push32((uint32_t)(EDI));
  /* 120f7bdb push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f7be1 call dword ptr [0x120fd05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd05c))), 0x120f7be7u);
  /* 120f7be7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7be9 je 0x120f7c4c */
  if (C.zf) goto L_120f7c4c;
  /* 120f7beb add dword ptr [0x12104448], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x12104448))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x12104448), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f7bf2 mov dword ptr [0x1210445c], eax */
  w32((uint32_t)(0x1210445c), (EAX));
  /* 120f7bf7 mov eax, dword ptr [0x12104458] */
  EAX = (r32((uint32_t)(0x12104458)));
L_120f7bfc:;
  /* 120f7bfc mov ecx, dword ptr [0x1210445c] */
  ECX = (r32((uint32_t)(0x1210445c)));
  /* 120f7c02 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 120f7c07 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f7c09 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 120f7c0c push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f7c12 lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 120f7c15 call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120f7c1bu);
  /* 120f7c1b cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7c1d mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 120f7c20 je 0x120f7c4c */
  if (C.zf) goto L_120f7c4c;
  /* 120f7c22 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f7c24 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 120f7c29 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 120f7c2e push edi */
  push32((uint32_t)(EDI));
  /* 120f7c2f call dword ptr [0x120fd058] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd058))), 0x120f7c35u);
  /* 120f7c35 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7c37 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 120f7c3a jne 0x120f7c50 */
  if (!C.zf) goto L_120f7c50;
  /* 120f7c3c push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 120f7c3f push edi */
  push32((uint32_t)(EDI));
  /* 120f7c40 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f7c46 call dword ptr [0x120fd000] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd000))), 0x120f7c4cu);
L_120f7c4c:;
  /* 120f7c4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f7c4e jmp 0x120f7c67 */
  goto L_120f7c67;
L_120f7c50:;
  /* 120f7c50 or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 120f7c54 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 120f7c56 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 120f7c59 inc dword ptr [0x12104458] */
  { uint32_t _r=(r32((uint32_t)(0x12104458)))+1; w32((uint32_t)(0x12104458), (_r)); fl_inc(_r,32); }
  /* 120f7c5f mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f7c62 or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f7c65 mov eax, esi */
  EAX = (ESI);
L_120f7c67:;
  /* 120f7c67 pop edi */
  EDI = (pop32());
  /* 120f7c68 pop esi */
  ESI = (pop32());
  /* 120f7c69 ret  */
  ESPCHK(0x120f7bb9u, _esp0);
  ESP += 4; return;
}

/* FUN_10007c6a @ 0x120f7c6a (251 bytes, 85 insns) */
void f_120f7c6a(void) {
  FTRACE(0x120f7c6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7c6a push ebp */
  push32((uint32_t)(EBP));
  /* 120f7c6b mov ebp, esp */
  EBP = (ESP);
  /* 120f7c6d push ecx */
  push32((uint32_t)(ECX));
  /* 120f7c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7c71 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7c72 push esi */
  push32((uint32_t)(ESI));
  /* 120f7c73 push edi */
  push32((uint32_t)(EDI));
  /* 120f7c74 mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 120f7c77 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 120f7c7a xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120f7c7c:;
  /* 120f7c7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f7c7e jl 0x120f7c85 */
  if ((C.sf!=C.of)) goto L_120f7c85;
  /* 120f7c80 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120f7c82 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f7c83 jmp 0x120f7c7c */
  goto L_120f7c7c;
L_120f7c85:;
  /* 120f7c85 mov eax, ebx */
  EAX = (EBX);
  /* 120f7c87 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7c89 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7c8f pop edx */
  EDX = (pop32());
  /* 120f7c90 lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 120f7c97 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120f7c9a:;
  /* 120f7c9a mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 120f7c9d mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 120f7ca0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7ca3 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f7ca4 jne 0x120f7c9a */
  if (!C.zf) goto L_120f7c9a;
  /* 120f7ca6 mov edi, ebx */
  EDI = (EBX);
  /* 120f7ca8 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f7caa shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 120f7cad add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7cb0 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120f7cb5 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120f7cba push edi */
  push32((uint32_t)(EDI));
  /* 120f7cbb call dword ptr [0x120fd058] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd058))), 0x120f7cc1u);
  /* 120f7cc1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f7cc3 jne 0x120f7ccd */
  if (!C.zf) goto L_120f7ccd;
  /* 120f7cc5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f7cc8 jmp 0x120f7d60 */
  goto L_120f7d60;
L_120f7ccd:;
  /* 120f7ccd lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 120f7cd3 cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7cd5 ja 0x120f7d13 */
  if ((!C.cf&&!C.zf)) goto L_120f7d13;
  /* 120f7cd7 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_120f7cda:;
  /* 120f7cda or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 120f7cde or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 120f7ce5 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 120f7ceb mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 120f7cf2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f7cf4 lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 120f7cfa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f7cfd mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 120f7d07 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7d0c lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 120f7d0f cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7d11 jbe 0x120f7cda */
  if ((C.cf||C.zf)) goto L_120f7cda;
L_120f7d13:;
  /* 120f7d13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7d16 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 120f7d19 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7d1e push 1 */
  push32((uint32_t)(0x1u));
  /* 120f7d20 pop edi */
  EDI = (pop32());
  /* 120f7d21 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f7d24 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120f7d27 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 120f7d2a mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120f7d2d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120f7d30 and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f7d35 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 120f7d3c mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 120f7d3f mov cl, al */
  CL = (AL);
  /* 120f7d41 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f7d43 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f7d45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7d48 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 120f7d4b jne 0x120f7d50 */
  if (!C.zf) goto L_120f7d50;
  /* 120f7d4d or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7d50:;
  /* 120f7d50 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120f7d55 mov ecx, ebx */
  ECX = (EBX);
  /* 120f7d57 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f7d59 not edx */
  EDX = (~(EDX));
  /* 120f7d5b and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 120f7d5e mov eax, ebx */
  EAX = (EBX);
L_120f7d60:;
  /* 120f7d60 pop edi */
  EDI = (pop32());
  /* 120f7d61 pop esi */
  ESI = (pop32());
  /* 120f7d62 pop ebx */
  EBX = (pop32());
  /* 120f7d63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f7d64 ret  */
  ESPCHK(0x120f7c6au, _esp0);
  ESP += 4; return;
}

/* FUN_10007d65 @ 0x120f7d65 (758 bytes, 259 insns) */
void f_120f7d65(void) {
  FTRACE(0x120f7d65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f7d65 push ebp */
  push32((uint32_t)(EBP));
  /* 120f7d66 mov ebp, esp */
  EBP = (ESP);
  /* 120f7d68 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7d6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7d6e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f7d71 push ebx */
  push32((uint32_t)(EBX));
  /* 120f7d72 push esi */
  push32((uint32_t)(ESI));
  /* 120f7d73 push edi */
  push32((uint32_t)(EDI));
  /* 120f7d74 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7d77 mov edx, edi */
  EDX = (EDI);
  /* 120f7d79 lea esi, [eax + 0x17] */
  ESI = ((uint32_t)(EAX + 0x17));
  /* 120f7d7c sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7d7f mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 120f7d82 and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 120f7d85 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 120f7d88 mov ecx, edx */
  ECX = (EDX);
  /* 120f7d8a imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f7d90 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120f7d97 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120f7d9a mov ecx, dword ptr [edi - 4] */
  ECX = (r32((uint32_t)(EDI + -0x4)));
  /* 120f7d9d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f7d9e cmp esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7da0 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120f7da3 mov ebx, dword ptr [ecx + edi - 4] */
  EBX = (r32((uint32_t)(ECX + EDI*1 + -0x4)));
  /* 120f7da7 lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 120f7dab mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 120f7dae jle 0x120f7f13 */
  if ((C.zf||C.sf!=C.of)) goto L_120f7f13;
  /* 120f7db4 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 120f7db7 jne 0x120f7f0c */
  if (!C.zf) goto L_120f7f0c;
  /* 120f7dbd add ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7dbf cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7dc1 jg 0x120f7f0c */
  if ((!C.zf&&C.sf==C.of)) goto L_120f7f0c;
  /* 120f7dc7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7dca sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120f7dcd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f7dce cmp ecx, 0x3f */
  { uint32_t _a=(ECX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7dd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f7dd4 jbe 0x120f7ddc */
  if ((C.cf||C.zf)) goto L_120f7ddc;
  /* 120f7dd6 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7dd8 pop ecx */
  ECX = (pop32());
  /* 120f7dd9 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120f7ddc:;
  /* 120f7ddc mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7ddf cmp ebx, dword ptr [edi + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7de2 jne 0x120f7e2c */
  if (!C.zf) goto L_120f7e2c;
  /* 120f7de4 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7de7 jae 0x120f7e08 */
  if (!C.cf) goto L_120f7e08;
  /* 120f7de9 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7dee shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7df0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f7df3 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 120f7df7 not ebx */
  EBX = (~(EBX));
  /* 120f7df9 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f7dfd dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 120f7dff jne 0x120f7e2c */
  if (!C.zf) goto L_120f7e2c;
  /* 120f7e01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7e04 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f7e06 jmp 0x120f7e2c */
  goto L_120f7e2c;
L_120f7e08:;
  /* 120f7e08 add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7e0b mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7e10 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7e12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f7e15 lea ecx, [ecx + eax + 4] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x4));
  /* 120f7e19 not ebx */
  EBX = (~(EBX));
  /* 120f7e1b and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 120f7e22 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 120f7e24 jne 0x120f7e2c */
  if (!C.zf) goto L_120f7e2c;
  /* 120f7e26 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7e29 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7e2c:;
  /* 120f7e2c mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f7e2f mov ebx, dword ptr [edi + 4] */
  EBX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7e32 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 120f7e35 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7e38 mov edi, dword ptr [edi + 8] */
  EDI = (r32((uint32_t)(EDI + 0x8)));
  /* 120f7e3b mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 120f7e3e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f7e41 sub ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f7e43 add dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f7e46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7e4a jle 0x120f7efa */
  if ((C.zf||C.sf!=C.of)) goto L_120f7efa;
  /* 120f7e50 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7e53 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7e56 sar edi, 4 */
  EDI = (sh_sar((uint32_t)(EDI), (0x4u)&0x1f, 32));
  /* 120f7e59 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120f7e5a lea ecx, [ecx + esi - 4] */
  ECX = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 120f7e5e cmp edi, 0x3f */
  { uint32_t _a=(EDI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7e61 jbe 0x120f7e66 */
  if ((C.cf||C.zf)) goto L_120f7e66;
  /* 120f7e63 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7e65 pop edi */
  EDI = (pop32());
L_120f7e66:;
  /* 120f7e66 mov ebx, dword ptr [ebp - 0xc] */
  EBX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f7e69 lea ebx, [ebx + edi*8] */
  EBX = ((uint32_t)(EBX + EDI*8));
  /* 120f7e6c mov dword ptr [ebp + 0x10], ebx */
  w32((uint32_t)(EBP + 0x10), (EBX));
  /* 120f7e6f mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7e72 mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 120f7e75 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f7e78 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 120f7e7b mov dword ptr [ebx + 4], ecx */
  w32((uint32_t)(EBX + 0x4), (ECX));
  /* 120f7e7e mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f7e81 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 120f7e84 mov ebx, dword ptr [ecx + 4] */
  EBX = (r32((uint32_t)(ECX + 0x4)));
  /* 120f7e87 cmp ebx, dword ptr [ecx + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7e8a jne 0x120f7ee8 */
  if (!C.zf) goto L_120f7ee8;
  /* 120f7e8c mov cl, byte ptr [edi + eax + 4] */
  CL = (r8((uint32_t)(EDI + EAX*1 + 0x4)));
  /* 120f7e90 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7e93 mov byte ptr [ebp + 0x13], cl */
  w8((uint32_t)(EBP + 0x13), (CL));
  /* 120f7e96 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f7e98 mov byte ptr [edi + eax + 4], cl */
  w8((uint32_t)(EDI + EAX*1 + 0x4), (CL));
  /* 120f7e9c jae 0x120f7ebf */
  if (!C.cf) goto L_120f7ebf;
  /* 120f7e9e cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7ea2 jne 0x120f7eb2 */
  if (!C.zf) goto L_120f7eb2;
  /* 120f7ea4 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7ea9 mov ecx, edi */
  ECX = (EDI);
  /* 120f7eab shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7ead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7eb0 or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_120f7eb2:;
  /* 120f7eb2 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 120f7eb6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120f7ebb mov ecx, edi */
  ECX = (EDI);
  /* 120f7ebd jmp 0x120f7ee4 */
  goto L_120f7ee4;
L_120f7ebf:;
  /* 120f7ebf cmp byte ptr [ebp + 0x13], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x13))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f7ec3 jne 0x120f7ed5 */
  if (!C.zf) goto L_120f7ed5;
  /* 120f7ec5 lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 120f7ec8 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7ecd shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7ecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7ed2 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7ed5:;
  /* 120f7ed5 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 120f7edc lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 120f7edf mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_120f7ee4:;
  /* 120f7ee4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f7ee6 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_120f7ee8:;
  /* 120f7ee8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7eee lea eax, [edx + esi - 4] */
  EAX = ((uint32_t)(EDX + ESI*1 + -0x4));
  /* 120f7ef2 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f7ef4 mov dword ptr [ecx + eax - 4], ecx */
  w32((uint32_t)(ECX + EAX*1 + -0x4), (ECX));
  /* 120f7ef8 jmp 0x120f7efd */
  goto L_120f7efd;
L_120f7efa:;
  /* 120f7efa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
L_120f7efd:;
  /* 120f7efd lea eax, [esi + 1] */
  EAX = ((uint32_t)(ESI + 0x1));
  /* 120f7f00 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
  /* 120f7f03 mov dword ptr [edx + esi - 8], eax */
  w32((uint32_t)(EDX + ESI*1 + -0x8), (EAX));
  /* 120f7f07 jmp 0x120f8053 */
  goto L_120f8053;
L_120f7f0c:;
  /* 120f7f0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f7f0e jmp 0x120f8056 */
  goto L_120f8056;
L_120f7f13:;
  /* 120f7f13 jge 0x120f8053 */
  if ((C.sf==C.of)) goto L_120f8053;
  /* 120f7f19 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f7f1c sub dword ptr [ebp + 0x10], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f7f1f lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 120f7f22 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 120f7f25 lea ebx, [ebx + esi - 4] */
  EBX = ((uint32_t)(EBX + ESI*1 + -0x4));
  /* 120f7f29 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f7f2c mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 120f7f2f sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 120f7f32 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f7f33 mov dword ptr [ebx - 4], ecx */
  w32((uint32_t)(EBX + -0x4), (ECX));
  /* 120f7f36 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7f39 jbe 0x120f7f3e */
  if ((C.cf||C.zf)) goto L_120f7f3e;
  /* 120f7f3b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7f3d pop esi */
  ESI = (pop32());
L_120f7f3e:;
  /* 120f7f3e test byte ptr [ebp - 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f7f42 jne 0x120f7fcd */
  if (!C.zf) goto L_120f7fcd;
  /* 120f7f48 mov esi, dword ptr [ebp - 4] */
  ESI = (r32((uint32_t)(EBP + -0x4)));
  /* 120f7f4b sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 120f7f4e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f7f4f cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7f52 jbe 0x120f7f57 */
  if ((C.cf||C.zf)) goto L_120f7f57;
  /* 120f7f54 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7f56 pop esi */
  ESI = (pop32());
L_120f7f57:;
  /* 120f7f57 mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7f5a cmp ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7f5d jne 0x120f7fa6 */
  if (!C.zf) goto L_120f7fa6;
  /* 120f7f5f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7f62 jae 0x120f7f82 */
  if (!C.cf) goto L_120f7f82;
  /* 120f7f64 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7f69 mov ecx, esi */
  ECX = (ESI);
  /* 120f7f6b shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7f6d lea esi, [esi + eax + 4] */
  ESI = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 120f7f71 not ebx */
  EBX = (~(EBX));
  /* 120f7f73 and dword ptr [eax + edx*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 120f7f77 dec byte ptr [esi] */
  { uint32_t _r=(r8((uint32_t)(ESI)))-1; w8((uint32_t)(ESI), (_r)); fl_dec(_r,8); }
  /* 120f7f79 jne 0x120f7fa3 */
  if (!C.zf) goto L_120f7fa3;
  /* 120f7f7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7f7e and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 120f7f80 jmp 0x120f7fa3 */
  goto L_120f7fa3;
L_120f7f82:;
  /* 120f7f82 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 120f7f85 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 120f7f8a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 120f7f8c lea ecx, [esi + eax + 4] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x4));
  /* 120f7f90 not ebx */
  EBX = (~(EBX));
  /* 120f7f92 and dword ptr [eax + edx*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDX*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 120f7f99 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 120f7f9b jne 0x120f7fa3 */
  if (!C.zf) goto L_120f7fa3;
  /* 120f7f9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f7fa0 and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f7fa3:;
  /* 120f7fa3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_120f7fa6:;
  /* 120f7fa6 mov ecx, dword ptr [edi + 8] */
  ECX = (r32((uint32_t)(EDI + 0x8)));
  /* 120f7fa9 mov esi, dword ptr [edi + 4] */
  ESI = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7fac mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 120f7faf mov ecx, dword ptr [edi + 4] */
  ECX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f7fb2 mov esi, dword ptr [edi + 8] */
  ESI = (r32((uint32_t)(EDI + 0x8)));
  /* 120f7fb5 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 120f7fb8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f7fbb add esi, dword ptr [ebp - 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f7fbe mov dword ptr [ebp + 0x10], esi */
  w32((uint32_t)(EBP + 0x10), (ESI));
  /* 120f7fc1 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 120f7fc4 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f7fc5 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7fc8 jbe 0x120f7fcd */
  if ((C.cf||C.zf)) goto L_120f7fcd;
  /* 120f7fca push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 120f7fcc pop esi */
  ESI = (pop32());
L_120f7fcd:;
  /* 120f7fcd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f7fd0 mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 120f7fd4 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 120f7fd7 mov dword ptr [ebx + 4], edi */
  w32((uint32_t)(EBX + 0x4), (EDI));
  /* 120f7fda mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 120f7fdd mov dword ptr [ecx + 4], ebx */
  w32((uint32_t)(ECX + 0x4), (EBX));
  /* 120f7fe0 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7fe3 mov dword ptr [ecx + 8], ebx */
  w32((uint32_t)(ECX + 0x8), (EBX));
  /* 120f7fe6 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120f7fe9 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7fec jne 0x120f804a */
  if (!C.zf) goto L_120f804a;
  /* 120f7fee mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 120f7ff2 cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f7ff5 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 120f7ff8 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 120f7ffa mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 120f7ffe jae 0x120f8021 */
  if (!C.cf) goto L_120f8021;
  /* 120f8000 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8004 jne 0x120f8014 */
  if (!C.zf) goto L_120f8014;
  /* 120f8006 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 120f800b mov ecx, esi */
  ECX = (ESI);
  /* 120f800d shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 120f800f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8012 or dword ptr [ecx], edi */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EDI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_120f8014:;
  /* 120f8014 lea eax, [eax + edx*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0x44));
  /* 120f8018 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120f801d mov ecx, esi */
  ECX = (ESI);
  /* 120f801f jmp 0x120f8046 */
  goto L_120f8046;
L_120f8021:;
  /* 120f8021 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8025 jne 0x120f8037 */
  if (!C.zf) goto L_120f8037;
  /* 120f8027 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 120f802a mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 120f802f shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 120f8031 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8034 or dword ptr [ecx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EDI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_120f8037:;
  /* 120f8037 lea eax, [eax + edx*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDX*4 + 0xc4));
  /* 120f803e lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 120f8041 mov edx, 0x80000000 */
  EDX = (0x80000000u);
L_120f8046:;
  /* 120f8046 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f8048 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_120f804a:;
  /* 120f804a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f804d mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120f804f mov dword ptr [eax + ebx - 4], eax */
  w32((uint32_t)(EAX + EBX*1 + -0x4), (EAX));
L_120f8053:;
  /* 120f8053 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f8055 pop eax */
  EAX = (pop32());
L_120f8056:;
  /* 120f8056 pop edi */
  EDI = (pop32());
  /* 120f8057 pop esi */
  ESI = (pop32());
  /* 120f8058 pop ebx */
  EBX = (pop32());
  /* 120f8059 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f805a ret  */
  ESPCHK(0x120f7d65u, _esp0);
  ESP += 4; return;
}

/* FUN_1000805b @ 0x120f805b (324 bytes, 102 insns) */
void f_120f805b(void) {
  FTRACE(0x120f805bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f805b cmp dword ptr [0x12101028], -1 */
  { uint32_t _a=(r32((uint32_t)(0x12101028))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8062 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8063 push ebp */
  push32((uint32_t)(EBP));
  /* 120f8064 push esi */
  push32((uint32_t)(ESI));
  /* 120f8065 push edi */
  push32((uint32_t)(EDI));
  /* 120f8066 jne 0x120f806f */
  if (!C.zf) goto L_120f806f;
  /* 120f8068 mov esi, 0x12101018 */
  ESI = (0x12101018u);
  /* 120f806d jmp 0x120f808c */
  goto L_120f808c;
L_120f806f:;
  /* 120f806f push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 120f8074 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f8076 push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f807c call dword ptr [0x120fd0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d0))), 0x120f8082u);
  /* 120f8082 mov esi, eax */
  ESI = (EAX);
  /* 120f8084 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f8086 je 0x120f8198 */
  if (C.zf) goto L_120f8198;
L_120f808c:;
  /* 120f808c mov ebp, dword ptr [0x120fd058] */
  EBP = (r32((uint32_t)(0x120fd058)));
  /* 120f8092 push 4 */
  push32((uint32_t)(0x4u));
  /* 120f8094 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 120f8099 push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 120f809e push 0 */
  push32((uint32_t)(0x0u));
  /* 120f80a0 call ebp */
  call_ind((uint32_t)(EBP), 0x120f80a2u);
  /* 120f80a2 mov edi, eax */
  EDI = (EAX);
  /* 120f80a4 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120f80a6 je 0x120f8181 */
  if (C.zf) goto L_120f8181;
  /* 120f80ac push 4 */
  push32((uint32_t)(0x4u));
  /* 120f80ae mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 120f80b3 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120f80b8 push ebx */
  push32((uint32_t)(EBX));
  /* 120f80b9 push edi */
  push32((uint32_t)(EDI));
  /* 120f80ba call ebp */
  call_ind((uint32_t)(EBP), 0x120f80bcu);
  /* 120f80bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f80be je 0x120f8173 */
  if (C.zf) goto L_120f8173;
  /* 120f80c4 mov eax, 0x12101018 */
  EAX = (0x12101018u);
  /* 120f80c9 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f80cb jne 0x120f80eb */
  if (!C.zf) goto L_120f80eb;
  /* 120f80cd cmp dword ptr [0x12101018], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12101018))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f80d4 jne 0x120f80db */
  if (!C.zf) goto L_120f80db;
  /* 120f80d6 mov dword ptr [0x12101018], eax */
  w32((uint32_t)(0x12101018), (EAX));
L_120f80db:;
  /* 120f80db cmp dword ptr [0x1210101c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1210101c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f80e2 jne 0x120f8100 */
  if (!C.zf) goto L_120f8100;
  /* 120f80e4 mov dword ptr [0x1210101c], eax */
  w32((uint32_t)(0x1210101c), (EAX));
  /* 120f80e9 jmp 0x120f8100 */
  goto L_120f8100;
L_120f80eb:;
  /* 120f80eb mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f80ed mov eax, dword ptr [0x1210101c] */
  EAX = (r32((uint32_t)(0x1210101c)));
  /* 120f80f2 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 120f80f5 mov dword ptr [0x1210101c], esi */
  w32((uint32_t)(0x1210101c), (ESI));
  /* 120f80fb mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f80fe mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_120f8100:;
  /* 120f8100 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 120f8106 lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 120f810c mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 120f810f lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 120f8112 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 120f8115 mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 120f8118 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f811b xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 120f811d mov ecx, 0xf1 */
  ECX = (0xf1u);
L_120f8122:;
  /* 120f8122 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120f8124 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8127 setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 120f812a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f812b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f812d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f812e inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 120f812f mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120f8131 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f8134 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8137 cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f813d jl 0x120f8122 */
  if ((C.sf!=C.of)) goto L_120f8122;
  /* 120f813f push ebx */
  push32((uint32_t)(EBX));
  /* 120f8140 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f8142 push edi */
  push32((uint32_t)(EDI));
  /* 120f8143 call 0x120f9c70 */
  push32(0x120f8148u); f_120f9c70();
  /* 120f8148 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f814b:;
  /* 120f814b mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f814e add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8150 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8152 jae 0x120f816f */
  if (!C.cf) goto L_120f816f;
  /* 120f8154 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 120f815b lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 120f815e mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120f8160 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 120f8167 add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f816d jmp 0x120f814b */
  goto L_120f814b;
L_120f816f:;
  /* 120f816f mov eax, esi */
  EAX = (ESI);
  /* 120f8171 jmp 0x120f819a */
  goto L_120f819a;
L_120f8173:;
  /* 120f8173 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120f8178 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f817a push edi */
  push32((uint32_t)(EDI));
  /* 120f817b call dword ptr [0x120fd064] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd064))), 0x120f8181u);
L_120f8181:;
  /* 120f8181 cmp esi, 0x12101018 */
  { uint32_t _a=(ESI),_b=(0x12101018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8187 je 0x120f8198 */
  if (C.zf) goto L_120f8198;
  /* 120f8189 push esi */
  push32((uint32_t)(ESI));
  /* 120f818a push 0 */
  push32((uint32_t)(0x0u));
  /* 120f818c push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f8192 call dword ptr [0x120fd000] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd000))), 0x120f8198u);
L_120f8198:;
  /* 120f8198 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f819a:;
  /* 120f819a pop edi */
  EDI = (pop32());
  /* 120f819b pop esi */
  ESI = (pop32());
  /* 120f819c pop ebp */
  EBP = (pop32());
  /* 120f819d pop ebx */
  EBX = (pop32());
  /* 120f819e ret  */
  ESPCHK(0x120f805bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000819f @ 0x120f819f (86 bytes, 27 insns) */
void f_120f819f(void) {
  FTRACE(0x120f819fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f819f push esi */
  push32((uint32_t)(ESI));
  /* 120f81a0 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f81a4 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120f81a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f81ab push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 120f81ae call dword ptr [0x120fd064] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd064))), 0x120f81b4u);
  /* 120f81b4 cmp dword ptr [0x12103038], esi */
  { uint32_t _a=(r32((uint32_t)(0x12103038))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f81ba jne 0x120f81c4 */
  if (!C.zf) goto L_120f81c4;
  /* 120f81bc mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f81bf mov dword ptr [0x12103038], eax */
  w32((uint32_t)(0x12103038), (EAX));
L_120f81c4:;
  /* 120f81c4 cmp esi, 0x12101018 */
  { uint32_t _a=(ESI),_b=(0x12101018u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f81ca je 0x120f81ec */
  if (C.zf) goto L_120f81ec;
  /* 120f81cc mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f81cf mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 120f81d1 push esi */
  push32((uint32_t)(ESI));
  /* 120f81d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f81d4 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f81d6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f81d8 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 120f81db mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f81de push dword ptr [0x12104464] */
  push32((uint32_t)(r32((uint32_t)(0x12104464))));
  /* 120f81e4 call dword ptr [0x120fd000] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd000))), 0x120f81eau);
  /* 120f81ea pop esi */
  ESI = (pop32());
  /* 120f81eb ret  */
  ESPCHK(0x120f819fu, _esp0);
  ESP += 4; return;
L_120f81ec:;
  /* 120f81ec or dword ptr [0x12101028], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x12101028)))|(0xffffffffu); w32((uint32_t)(0x12101028), (_r)); fl_logic(_r,32); }
  /* 120f81f3 pop esi */
  ESI = (pop32());
  /* 120f81f4 ret  */
  ESPCHK(0x120f819fu, _esp0);
  ESP += 4; return;
}

/* FUN_100081f5 @ 0x120f81f5 (194 bytes, 66 insns) */
void f_120f81f5(void) {
  FTRACE(0x120f81f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f81f5 push ebp */
  push32((uint32_t)(EBP));
  /* 120f81f6 mov ebp, esp */
  EBP = (ESP);
  /* 120f81f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f81f9 push ebx */
  push32((uint32_t)(EBX));
  /* 120f81fa push esi */
  push32((uint32_t)(ESI));
  /* 120f81fb mov esi, dword ptr [0x1210101c] */
  ESI = (r32((uint32_t)(0x1210101c)));
  /* 120f8201 push edi */
  push32((uint32_t)(EDI));
L_120f8202:;
  /* 120f8202 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8206 je 0x120f82a0 */
  if (C.zf) goto L_120f82a0;
  /* 120f820c and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f8210 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 120f8216 mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_120f821b:;
  /* 120f821b cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8221 jne 0x120f825c */
  if (!C.zf) goto L_120f825c;
  /* 120f8223 mov eax, ebx */
  EAX = (EBX);
  /* 120f8225 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120f822a add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f822d push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120f8232 push eax */
  push32((uint32_t)(EAX));
  /* 120f8233 call dword ptr [0x120fd064] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd064))), 0x120f8239u);
  /* 120f8239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f823b je 0x120f825c */
  if (C.zf) goto L_120f825c;
  /* 120f823d or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 120f8240 dec dword ptr [0x12104124] */
  { uint32_t _r=(r32((uint32_t)(0x12104124)))-1; w32((uint32_t)(0x12104124), (_r)); fl_dec(_r,32); }
  /* 120f8246 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 120f8249 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f824b je 0x120f8251 */
  if (C.zf) goto L_120f8251;
  /* 120f824d cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f824f jbe 0x120f8254 */
  if ((C.cf||C.zf)) goto L_120f8254;
L_120f8251:;
  /* 120f8251 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_120f8254:;
  /* 120f8254 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f8257 dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 120f825a je 0x120f8269 */
  if (C.zf) goto L_120f8269;
L_120f825c:;
  /* 120f825c sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8262 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8265 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f8267 jge 0x120f821b */
  if ((C.sf==C.of)) goto L_120f821b;
L_120f8269:;
  /* 120f8269 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f826d mov ecx, esi */
  ECX = (ESI);
  /* 120f826f mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 120f8272 je 0x120f82a0 */
  if (C.zf) goto L_120f82a0;
  /* 120f8274 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8278 jne 0x120f82a0 */
  if (!C.zf) goto L_120f82a0;
  /* 120f827a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f827c lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 120f827f pop edx */
  EDX = (pop32());
L_120f8280:;
  /* 120f8280 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8283 jne 0x120f8291 */
  if (!C.zf) goto L_120f8291;
  /* 120f8285 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120f8286 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8289 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f828f jl 0x120f8280 */
  if ((C.sf!=C.of)) goto L_120f8280;
L_120f8291:;
  /* 120f8291 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8297 jne 0x120f82a0 */
  if (!C.zf) goto L_120f82a0;
  /* 120f8299 push ecx */
  push32((uint32_t)(ECX));
  /* 120f829a call 0x120f819f */
  push32(0x120f829fu); f_120f819f();
  /* 120f829f pop ecx */
  ECX = (pop32());
L_120f82a0:;
  /* 120f82a0 cmp esi, dword ptr [0x1210101c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x1210101c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82a6 je 0x120f82b2 */
  if (C.zf) goto L_120f82b2;
  /* 120f82a8 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82ac jg 0x120f8202 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f8202;
L_120f82b2:;
  /* 120f82b2 pop edi */
  EDI = (pop32());
  /* 120f82b3 pop esi */
  ESI = (pop32());
  /* 120f82b4 pop ebx */
  EBX = (pop32());
  /* 120f82b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f82b6 ret  */
  ESPCHK(0x120f81f5u, _esp0);
  ESP += 4; return;
}

/* FUN_100082b7 @ 0x120f82b7 (87 bytes, 34 insns) */
void f_120f82b7(void) {
  FTRACE(0x120f82b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f82b7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f82bb mov edx, 0x12101018 */
  EDX = (0x12101018u);
  /* 120f82c0 push esi */
  push32((uint32_t)(ESI));
  /* 120f82c1 mov ecx, edx */
  ECX = (EDX);
L_120f82c3:;
  /* 120f82c3 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82c6 jbe 0x120f82cd */
  if ((C.cf||C.zf)) goto L_120f82cd;
  /* 120f82c8 cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82cb jb 0x120f82d5 */
  if (C.cf) goto L_120f82d5;
L_120f82cd:;
  /* 120f82cd mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 120f82cf cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82d1 je 0x120f830a */
  if (C.zf) goto L_120f830a;
  /* 120f82d3 jmp 0x120f82c3 */
  goto L_120f82c3;
L_120f82d5:;
  /* 120f82d5 test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 120f82d7 jne 0x120f830a */
  if (!C.zf) goto L_120f830a;
  /* 120f82d9 mov esi, eax */
  ESI = (EAX);
  /* 120f82db mov edx, 0x100 */
  EDX = (0x100u);
  /* 120f82e0 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 120f82e6 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f82e8 jb 0x120f830a */
  if (C.cf) goto L_120f830a;
  /* 120f82ea mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120f82ee mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 120f82f0 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 120f82f4 mov ecx, eax */
  ECX = (EAX);
  /* 120f82f6 and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 120f82fb sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f82fd mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 120f82ff sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8301 pop esi */
  ESI = (pop32());
  /* 120f8302 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120f8305 lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 120f8309 ret  */
  ESPCHK(0x120f82b7u, _esp0);
  ESP += 4; return;
L_120f830a:;
  /* 120f830a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f830c pop esi */
  ESI = (pop32());
  /* 120f830d ret  */
  ESPCHK(0x120f82b7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000830e @ 0x120f830e (69 bytes, 19 insns) */
void f_120f830e(void) {
  FTRACE(0x120f830eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f830e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f8312 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f8316 sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8319 sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 120f831c lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 120f8320 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f8324 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 120f8327 add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f8329 and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 120f832c cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8332 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 120f8339 jne 0x120f8352 */
  if (!C.zf) goto L_120f8352;
  /* 120f833b inc dword ptr [0x12104124] */
  { uint32_t _r=(r32((uint32_t)(0x12104124)))+1; w32((uint32_t)(0x12104124), (_r)); fl_inc(_r,32); }
  /* 120f8341 cmp dword ptr [0x12104124], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x12104124))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8348 jne 0x120f8352 */
  if (!C.zf) goto L_120f8352;
  /* 120f834a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120f834c call 0x120f81f5 */
  push32(0x120f8351u); f_120f81f5();
  /* 120f8351 pop ecx */
  ECX = (pop32());
L_120f8352:;
  /* 120f8352 ret  */
  ESPCHK(0x120f830eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008353 @ 0x120f8353 (520 bytes, 180 insns) */
void f_120f8353(void) {
  FTRACE(0x120f8353u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8353 push ebp */
  push32((uint32_t)(EBP));
  /* 120f8354 mov ebp, esp */
  EBP = (ESP);
  /* 120f8356 push ecx */
  push32((uint32_t)(ECX));
  /* 120f8357 push ecx */
  push32((uint32_t)(ECX));
  /* 120f8358 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8359 push esi */
  push32((uint32_t)(ESI));
  /* 120f835a mov esi, dword ptr [0x12103038] */
  ESI = (r32((uint32_t)(0x12103038)));
  /* 120f8360 push edi */
  push32((uint32_t)(EDI));
L_120f8361:;
  /* 120f8361 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f8364 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8367 je 0x120f840c */
  if (C.zf) goto L_120f840c;
  /* 120f836d mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 120f8370 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 120f8376 mov eax, edi */
  EAX = (EDI);
  /* 120f8378 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f837a sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f837d sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 120f8380 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 120f8383 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8385 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8387 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f838a jae 0x120f83c6 */
  if (!C.cf) goto L_120f83c6;
L_120f838c:;
  /* 120f838c mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 120f838e mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8391 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8393 jl 0x120f83af */
  if ((C.sf!=C.of)) goto L_120f83af;
  /* 120f8395 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8398 jbe 0x120f83af */
  if ((C.cf||C.zf)) goto L_120f83af;
  /* 120f839a push ebx */
  push32((uint32_t)(EBX));
  /* 120f839b push ecx */
  push32((uint32_t)(ECX));
  /* 120f839c push eax */
  push32((uint32_t)(EAX));
  /* 120f839d call 0x120f855b */
  push32(0x120f83a2u); f_120f855b();
  /* 120f83a2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f83a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f83a7 jne 0x120f841e */
  if (!C.zf) goto L_120f841e;
  /* 120f83a9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f83ac mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_120f83af:;
  /* 120f83af add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f83b2 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 120f83b8 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f83bd cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f83bf mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f83c2 jb 0x120f838c */
  if (C.cf) goto L_120f838c;
  /* 120f83c4 jmp 0x120f83c9 */
  goto L_120f83c9;
L_120f83c6:;
  /* 120f83c6 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120f83c9:;
  /* 120f83c9 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 120f83cc mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 120f83cf lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 120f83d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f83d5 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f83d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120f83da jae 0x120f840f */
  if (!C.cf) goto L_120f840f;
L_120f83dc:;
  /* 120f83dc mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f83de cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f83e0 jl 0x120f83fb */
  if ((C.sf!=C.of)) goto L_120f83fb;
  /* 120f83e2 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f83e5 jbe 0x120f83fb */
  if ((C.cf||C.zf)) goto L_120f83fb;
  /* 120f83e7 push ebx */
  push32((uint32_t)(EBX));
  /* 120f83e8 push eax */
  push32((uint32_t)(EAX));
  /* 120f83e9 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120f83ec call 0x120f855b */
  push32(0x120f83f1u); f_120f855b();
  /* 120f83f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f83f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f83f6 jne 0x120f841e */
  if (!C.zf) goto L_120f841e;
  /* 120f83f8 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_120f83fb:;
  /* 120f83fb add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f8402 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8405 cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8408 jb 0x120f83dc */
  if (C.cf) goto L_120f83dc;
  /* 120f840a jmp 0x120f840f */
  goto L_120f840f;
L_120f840c:;
  /* 120f840c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_120f840f:;
  /* 120f840f mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 120f8411 cmp esi, dword ptr [0x12103038] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12103038))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8417 je 0x120f842e */
  if (C.zf) goto L_120f842e;
  /* 120f8419 jmp 0x120f8361 */
  goto L_120f8361;
L_120f841e:;
  /* 120f841e mov dword ptr [0x12103038], esi */
  w32((uint32_t)(0x12103038), (ESI));
  /* 120f8424 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f8426 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 120f8429 jmp 0x120f8556 */
  goto L_120f8556;
L_120f842e:;
  /* 120f842e mov eax, 0x12101018 */
  EAX = (0x12101018u);
  /* 120f8433 mov edi, eax */
  EDI = (EAX);
L_120f8435:;
  /* 120f8435 cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8439 je 0x120f8441 */
  if (C.zf) goto L_120f8441;
  /* 120f843b cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f843f jne 0x120f844d */
  if (!C.zf) goto L_120f844d;
L_120f8441:;
  /* 120f8441 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 120f8443 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8445 je 0x120f8522 */
  if (C.zf) goto L_120f8522;
  /* 120f844b jmp 0x120f8435 */
  goto L_120f8435;
L_120f844d:;
  /* 120f844d mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 120f8450 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f8454 mov esi, ebx */
  ESI = (EBX);
  /* 120f8456 mov eax, ebx */
  EAX = (EBX);
  /* 120f8458 sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f845a sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f845d sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 120f8460 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 120f8463 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8466 cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8469 jne 0x120f847c */
  if (!C.zf) goto L_120f847c;
L_120f846b:;
  /* 120f846b cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f846f jge 0x120f847c */
  if ((C.sf==C.of)) goto L_120f847c;
  /* 120f8471 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8474 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f8477 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f847a je 0x120f846b */
  if (C.zf) goto L_120f846b;
L_120f847c:;
  /* 120f847c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f847f push 4 */
  push32((uint32_t)(0x4u));
  /* 120f8481 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 120f8484 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120f8489 push eax */
  push32((uint32_t)(EAX));
  /* 120f848a push esi */
  push32((uint32_t)(ESI));
  /* 120f848b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f848e call dword ptr [0x120fd058] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd058))), 0x120f8494u);
  /* 120f8494 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8496 jne 0x120f8554 */
  if (!C.zf) goto L_120f8554;
  /* 120f849c push 0 */
  push32((uint32_t)(0x0u));
  /* 120f849e push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 120f84a1 push esi */
  push32((uint32_t)(ESI));
  /* 120f84a2 call 0x120f9c70 */
  push32(0x120f84a7u); f_120f9c70();
  /* 120f84a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f84aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f84ad test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f84af mov ecx, ebx */
  ECX = (EBX);
  /* 120f84b1 jle 0x120f84e3 */
  if ((C.zf||C.sf!=C.of)) goto L_120f84e3;
  /* 120f84b3 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 120f84b6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120f84b9:;
  /* 120f84b9 or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 120f84c0 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 120f84c3 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 120f84c6 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 120f84cb mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120f84cd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120f84cf mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 120f84d6 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f84db add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f84de dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 120f84e1 jne 0x120f84b9 */
  if (!C.zf) goto L_120f84b9;
L_120f84e3:;
  /* 120f84e3 mov dword ptr [0x12103038], edi */
  w32((uint32_t)(0x12103038), (EDI));
  /* 120f84e9 lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_120f84ef:;
  /* 120f84ef cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f84f1 jae 0x120f84ff */
  if (!C.cf) goto L_120f84ff;
  /* 120f84f3 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f84f6 je 0x120f84fd */
  if (C.zf) goto L_120f84fd;
  /* 120f84f8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f84fb jmp 0x120f84ef */
  goto L_120f84ef;
L_120f84fd:;
  /* 120f84fd cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f84ff:;
  /* 120f84ff sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8501 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120f8503 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 120f8506 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8509 mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 120f850c mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 120f850f sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f8511 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f8514 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 120f8518 lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 120f851e mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 120f8520 jmp 0x120f8556 */
  goto L_120f8556;
L_120f8522:;
  /* 120f8522 call 0x120f805b */
  push32(0x120f8527u); f_120f805b();
  /* 120f8527 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8529 je 0x120f8554 */
  if (C.zf) goto L_120f8554;
  /* 120f852b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120f852e mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 120f8531 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 120f8535 mov dword ptr [0x12103038], eax */
  w32((uint32_t)(0x12103038), (EAX));
  /* 120f853a mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120f853c mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 120f8541 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8543 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120f8546 movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 120f8549 sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f854c lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 120f8552 jmp 0x120f8556 */
  goto L_120f8556;
L_120f8554:;
  /* 120f8554 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f8556:;
  /* 120f8556 pop edi */
  EDI = (pop32());
  /* 120f8557 pop esi */
  ESI = (pop32());
  /* 120f8558 pop ebx */
  EBX = (pop32());
  /* 120f8559 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f855a ret  */
  ESPCHK(0x120f8353u, _esp0);
  ESP += 4; return;
}

/* FUN_1000855b @ 0x120f855b (292 bytes, 125 insns) */
void f_120f855b(void) {
  FTRACE(0x120f855bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f855b push ebp */
  push32((uint32_t)(EBP));
  /* 120f855c mov ebp, esp */
  EBP = (ESP);
  /* 120f855e push ecx */
  push32((uint32_t)(ECX));
  /* 120f855f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8562 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f8565 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8566 push esi */
  push32((uint32_t)(ESI));
  /* 120f8567 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 120f856a push edi */
  push32((uint32_t)(EDI));
  /* 120f856b mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 120f856d lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 120f8573 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8575 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120f8578 mov eax, edi */
  EAX = (EDI);
  /* 120f857a mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f857d jb 0x120f85a0 */
  if (C.cf) goto L_120f85a0;
  /* 120f857f lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 120f8582 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120f8584 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8586 jae 0x120f858f */
  if (!C.cf) goto L_120f858f;
  /* 120f8588 add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f858a sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f858d jmp 0x120f8598 */
  goto L_120f8598;
L_120f858f:;
  /* 120f858f and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f8593 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 120f8596 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120f8598:;
  /* 120f8598 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 120f859b jmp 0x120f866e */
  goto L_120f866e;
L_120f85a0:;
  /* 120f85a0 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f85a2 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f85a5 je 0x120f85a9 */
  if (C.zf) goto L_120f85a9;
  /* 120f85a7 mov eax, esi */
  EAX = (ESI);
L_120f85a9:;
  /* 120f85a9 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 120f85ac cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85ae jae 0x120f85f3 */
  if (!C.cf) goto L_120f85f3;
L_120f85b0:;
  /* 120f85b0 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 120f85b2 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 120f85b4 jne 0x120f85e6 */
  if (!C.zf) goto L_120f85e6;
  /* 120f85b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f85b8 lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 120f85bb pop esi */
  ESI = (pop32());
L_120f85bc:;
  /* 120f85bc cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f85bf jne 0x120f85c5 */
  if (!C.zf) goto L_120f85c5;
  /* 120f85c1 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f85c2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f85c3 jmp 0x120f85bc */
  goto L_120f85bc;
L_120f85c5:;
  /* 120f85c5 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85c7 jae 0x120f8617 */
  if (!C.cf) goto L_120f8617;
  /* 120f85c9 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85cc jne 0x120f85d3 */
  if (!C.zf) goto L_120f85d3;
  /* 120f85ce mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 120f85d1 jmp 0x120f85df */
  goto L_120f85df;
L_120f85d3:;
  /* 120f85d3 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f85d6 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85d9 jb 0x120f8678 */
  if (C.cf) goto L_120f8678;
L_120f85df:;
  /* 120f85df mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 120f85e2 mov eax, ebx */
  EAX = (EBX);
  /* 120f85e4 jmp 0x120f85eb */
  goto L_120f85eb;
L_120f85e6:;
  /* 120f85e6 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 120f85e9 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f85eb:;
  /* 120f85eb lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 120f85ee cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85f1 jb 0x120f85b0 */
  if (C.cf) goto L_120f85b0;
L_120f85f3:;
  /* 120f85f3 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_120f85f6:;
  /* 120f85f6 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f85f8 jae 0x120f8678 */
  if (!C.cf) goto L_120f8678;
  /* 120f85fa lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 120f85fd cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8600 jae 0x120f8678 */
  if (!C.cf) goto L_120f8678;
  /* 120f8602 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f8604 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f8606 jne 0x120f8648 */
  if (!C.zf) goto L_120f8648;
  /* 120f8608 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f860a lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 120f860d pop eax */
  EAX = (pop32());
L_120f860e:;
  /* 120f860e cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8611 jne 0x120f8638 */
  if (!C.zf) goto L_120f8638;
  /* 120f8613 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f8614 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f8615 jmp 0x120f860e */
  goto L_120f860e;
L_120f8617:;
  /* 120f8617 lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 120f861a cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f861d jae 0x120f8628 */
  if (!C.cf) goto L_120f8628;
  /* 120f861f sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8621 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 120f8623 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 120f8626 jmp 0x120f8631 */
  goto L_120f8631;
L_120f8628:;
  /* 120f8628 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f862c lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 120f862f mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_120f8631:;
  /* 120f8631 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120f8633 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8636 jmp 0x120f866e */
  goto L_120f866e;
L_120f8638:;
  /* 120f8638 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f863a jae 0x120f864f */
  if (!C.cf) goto L_120f864f;
  /* 120f863c sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120f863f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8642 jb 0x120f8678 */
  if (C.cf) goto L_120f8678;
  /* 120f8644 mov esi, ebx */
  ESI = (EBX);
  /* 120f8646 jmp 0x120f85f6 */
  goto L_120f85f6;
L_120f8648:;
  /* 120f8648 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 120f864b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f864d jmp 0x120f85f6 */
  goto L_120f85f6;
L_120f864f:;
  /* 120f864f lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 120f8652 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8655 jae 0x120f8660 */
  if (!C.cf) goto L_120f8660;
  /* 120f8657 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8659 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 120f865b mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120f865e jmp 0x120f8669 */
  goto L_120f8669;
L_120f8660:;
  /* 120f8660 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f8664 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 120f8667 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120f8669:;
  /* 120f8669 mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 120f866b lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_120f866e:;
  /* 120f866e imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120f8671 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120f8674 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8676 jmp 0x120f867a */
  goto L_120f867a;
L_120f8678:;
  /* 120f8678 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f867a:;
  /* 120f867a pop edi */
  EDI = (pop32());
  /* 120f867b pop esi */
  ESI = (pop32());
  /* 120f867c pop ebx */
  EBX = (pop32());
  /* 120f867d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f867e ret  */
  ESPCHK(0x120f855bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000867f @ 0x120f867f (169 bytes, 69 insns) */
void f_120f867f(void) {
  FTRACE(0x120f867fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f867f push ebp */
  push32((uint32_t)(EBP));
  /* 120f8680 mov ebp, esp */
  EBP = (ESP);
  /* 120f8682 push ecx */
  push32((uint32_t)(ECX));
  /* 120f8683 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f8686 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8687 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f868a push esi */
  push32((uint32_t)(ESI));
  /* 120f868b movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 120f868e push edi */
  push32((uint32_t)(EDI));
  /* 120f868f mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8692 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f8696 mov eax, ebx */
  EAX = (EBX);
  /* 120f8698 sub eax, dword ptr [edi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f869b sar eax, 0xc */
  EAX = (sh_sar((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 120f869e cmp ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86a1 lea edi, [edi + eax*8 + 0x18] */
  EDI = ((uint32_t)(EDI + EAX*8 + 0x18));
  /* 120f86a5 jbe 0x120f86b9 */
  if ((C.cf||C.zf)) goto L_120f86b9;
  /* 120f86a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f86aa sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f86ac mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120f86ae add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f86b0 mov dword ptr [edi + 4], 0xf1 */
  w32((uint32_t)(EDI + 0x4), (0xf1u));
  /* 120f86b7 jmp 0x120f8719 */
  goto L_120f8719;
L_120f86b9:;
  /* 120f86b9 jae 0x120f8720 */
  if (!C.cf) goto L_120f8720;
  /* 120f86bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120f86be lea esi, [edx + eax] */
  ESI = ((uint32_t)(EDX + EAX*1));
  /* 120f86c1 lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 120f86c7 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86c9 jb 0x120f8720 */
  if (C.cf) goto L_120f8720;
  /* 120f86cb lea eax, [ecx + edx] */
  EAX = ((uint32_t)(ECX + EDX*1));
L_120f86ce:;
  /* 120f86ce cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86d0 jae 0x120f86dc */
  if (!C.cf) goto L_120f86dc;
  /* 120f86d2 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f86d5 jne 0x120f86da */
  if (!C.zf) goto L_120f86da;
  /* 120f86d7 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f86d8 jmp 0x120f86ce */
  goto L_120f86ce;
L_120f86da:;
  /* 120f86da cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_120f86dc:;
  /* 120f86dc jne 0x120f8720 */
  if (!C.zf) goto L_120f8720;
  /* 120f86de mov al, byte ptr [ebp + 0x14] */
  AL = (r8((uint32_t)(EBP + 0x14)));
  /* 120f86e1 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 120f86e3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f86e5 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86e7 ja 0x120f8714 */
  if ((!C.cf&&!C.zf)) goto L_120f8714;
  /* 120f86e9 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86eb jbe 0x120f8714 */
  if ((C.cf||C.zf)) goto L_120f8714;
  /* 120f86ed lea eax, [ebx + 0xf8] */
  EAX = ((uint32_t)(EBX + 0xf8));
  /* 120f86f3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f86f5 jae 0x120f870b */
  if (!C.cf) goto L_120f870b;
  /* 120f86f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f86f9 mov dword ptr [ebx], esi */
  w32((uint32_t)(EBX), (ESI));
  /* 120f86fb cmp byte ptr [esi], al */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f86fd jne 0x120f8706 */
  if (!C.zf) goto L_120f8706;
L_120f86ff:;
  /* 120f86ff inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f8700 cmp byte ptr [esi + eax], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI + EAX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8704 je 0x120f86ff */
  if (C.zf) goto L_120f86ff;
L_120f8706:;
  /* 120f8706 mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 120f8709 jmp 0x120f8714 */
  goto L_120f8714;
L_120f870b:;
  /* 120f870b and dword ptr [ebx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(0x0u); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 120f870f lea eax, [ebx + 8] */
  EAX = ((uint32_t)(EBX + 0x8));
  /* 120f8712 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_120f8714:;
  /* 120f8714 sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8717 add dword ptr [edi], ecx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(ECX),_r=_a+_b; w32((uint32_t)(EDI), (_r)); fl_add(_a,_b,_r,32); }
L_120f8719:;
  /* 120f8719 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_120f8720:;
  /* 120f8720 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f8723 pop edi */
  EDI = (pop32());
  /* 120f8724 pop esi */
  ESI = (pop32());
  /* 120f8725 pop ebx */
  EBX = (pop32());
  /* 120f8726 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8727 ret  */
  ESPCHK(0x120f867fu, _esp0);
  ESP += 4; return;
}

/* FUN_100087ed @ 0x120f87ed (27 bytes, 11 insns) */
void f_120f87ed(void) {
  FTRACE(0x120f87edu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f87ed push ebp */
  push32((uint32_t)(EBP));
  /* 120f87ee mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f87f2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 120f87f4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 120f87f7 push eax */
  push32((uint32_t)(EAX));
  /* 120f87f8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 120f87fb push eax */
  push32((uint32_t)(EAX));
  /* 120f87fc call 0x120f489e */
  push32(0x120f8801u); f_120f489e();
  /* 120f8801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8804 pop ebp */
  EBP = (pop32());
  /* 120f8805 ret 4 */
  ESPCHK(0x120f87edu, _esp0);
  ESP += 8; return;
}

/* FUN_10008808 @ 0x120f8808 (70 bytes, 24 insns) */
void f_120f8808(void) {
  FTRACE(0x120f8808u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8808 push esi */
  push32((uint32_t)(ESI));
  /* 120f8809 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f880d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120f880f cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8815 jne 0x120f882b */
  if (!C.zf) goto L_120f882b;
  /* 120f8817 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f881b jne 0x120f882b */
  if (!C.zf) goto L_120f882b;
  /* 120f881d cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8824 jne 0x120f882b */
  if (!C.zf) goto L_120f882b;
  /* 120f8826 jmp 0x120f576c */
  f_120f576c(); return;
L_120f882b:;
  /* 120f882b mov eax, dword ptr [0x12104128] */
  EAX = (r32((uint32_t)(0x12104128)));
  /* 120f8830 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8832 je 0x120f8848 */
  if (C.zf) goto L_120f8848;
  /* 120f8834 push eax */
  push32((uint32_t)(EAX));
  /* 120f8835 call 0x120f88a4 */
  push32(0x120f883au); f_120f88a4();
  /* 120f883a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f883c pop ecx */
  ECX = (pop32());
  /* 120f883d je 0x120f8848 */
  if (C.zf) goto L_120f8848;
  /* 120f883f push esi */
  push32((uint32_t)(ESI));
  /* 120f8840 call dword ptr [0x12104128] */
  call_ind((uint32_t)(r32((uint32_t)(0x12104128))), 0x120f8846u);
  /* 120f8846 jmp 0x120f884a */
  goto L_120f884a;
L_120f8848:;
  /* 120f8848 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f884a:;
  /* 120f884a pop esi */
  ESI = (pop32());
  /* 120f884b ret 4 */
  ESPCHK(0x120f8808u, _esp0);
  ESP += 8; return;
}

/* FUN_1000886c @ 0x120f886c (28 bytes, 12 insns) */
void f_120f886c(void) {
  FTRACE(0x120f886cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f886c push esi */
  push32((uint32_t)(ESI));
  /* 120f886d push 1 */
  push32((uint32_t)(0x1u));
  /* 120f886f pop esi */
  ESI = (pop32());
  /* 120f8870 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f8874 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f8878 call dword ptr [0x120fd054] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd054))), 0x120f887eu);
  /* 120f887e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8880 je 0x120f8884 */
  if (C.zf) goto L_120f8884;
  /* 120f8882 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120f8884:;
  /* 120f8884 mov eax, esi */
  EAX = (ESI);
  /* 120f8886 pop esi */
  ESI = (pop32());
  /* 120f8887 ret  */
  ESPCHK(0x120f886cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008888 @ 0x120f8888 (28 bytes, 12 insns) */
void f_120f8888(void) {
  FTRACE(0x120f8888u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8888 push esi */
  push32((uint32_t)(ESI));
  /* 120f8889 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f888b pop esi */
  ESI = (pop32());
  /* 120f888c push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f8890 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f8894 call dword ptr [0x120fd050] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd050))), 0x120f889au);
  /* 120f889a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f889c je 0x120f88a0 */
  if (C.zf) goto L_120f88a0;
  /* 120f889e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120f88a0:;
  /* 120f88a0 mov eax, esi */
  EAX = (ESI);
  /* 120f88a2 pop esi */
  ESI = (pop32());
  /* 120f88a3 ret  */
  ESPCHK(0x120f8888u, _esp0);
  ESP += 4; return;
}

/* FUN_100088a4 @ 0x120f88a4 (24 bytes, 11 insns) */
void f_120f88a4(void) {
  FTRACE(0x120f88a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f88a4 push esi */
  push32((uint32_t)(ESI));
  /* 120f88a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f88a7 pop esi */
  ESI = (pop32());
  /* 120f88a8 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f88ac call dword ptr [0x120fd044] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd044))), 0x120f88b2u);
  /* 120f88b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f88b4 je 0x120f88b8 */
  if (C.zf) goto L_120f88b8;
  /* 120f88b6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120f88b8:;
  /* 120f88b8 mov eax, esi */
  EAX = (ESI);
  /* 120f88ba pop esi */
  ESI = (pop32());
  /* 120f88bb ret  */
  ESPCHK(0x120f88a4u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x120f88c0 (129 bytes, 56 insns) */
void f_120f88c0(void) {
  FTRACE(0x120f88c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f88c0 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f88c4 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f88c8 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120f88ce jne 0x120f890c */
  if (!C.zf) goto L_120f890c;
L_120f88d0:;
  /* 120f88d0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120f88d2 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f88d4 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f88d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120f88d8 je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f88da cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f88dd jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f88df or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120f88e1 je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f88e3 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120f88e6 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f88e9 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f88eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120f88ed je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f88ef cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f88f2 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f88f4 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f88f7 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f88fa or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120f88fc jne 0x120f88d0 */
  if (!C.zf) goto L_120f88d0;
  /* 120f88fe mov edi, edi */
  EDI = (EDI);
L_120f8900:;
  /* 120f8900 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f8902 ret  */
  ESPCHK(0x120f88c0u, _esp0);
  ESP += 4; return;
  /* 120f8903 nop  */
  /* nop */
L_120f8904:;
  /* 120f8904 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8906 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120f8908 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f8909 ret  */
  ESPCHK(0x120f88c0u, _esp0);
  ESP += 4; return;
  /* 120f890a mov edi, edi */
  EDI = (EDI);
L_120f890c:;
  /* 120f890c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 120f8912 je 0x120f8928 */
  if (C.zf) goto L_120f8928;
  /* 120f8914 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120f8916 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120f8917 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8919 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f891b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f891c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120f891e je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f8920 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 120f8926 je 0x120f88d0 */
  if (C.zf) goto L_120f88d0;
L_120f8928:;
  /* 120f8928 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120f892b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f892e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8930 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f8932 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120f8934 je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f8936 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f8939 jne 0x120f8904 */
  if (!C.zf) goto L_120f8904;
  /* 120f893b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120f893d je 0x120f8900 */
  if (C.zf) goto L_120f8900;
  /* 120f893f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8942 jmp 0x120f88d0 */
  goto L_120f88d0;
}

/* FUN_10008950 @ 0x120f8950 (664 bytes, 261 insns) [15 switch table(s)] */
void f_120f8950(void) {
  FTRACE(0x120f8950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8950 push ebp */
  push32((uint32_t)(EBP));
  /* 120f8951 mov ebp, esp */
  EBP = (ESP);
  /* 120f8953 push edi */
  push32((uint32_t)(EDI));
  /* 120f8954 push esi */
  push32((uint32_t)(ESI));
  /* 120f8955 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120f8958 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f895b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f895e mov eax, ecx */
  EAX = (ECX);
  /* 120f8960 mov edx, ecx */
  EDX = (ECX);
  /* 120f8962 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8964 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8966 jbe 0x120f8970 */
  if ((C.cf||C.zf)) goto L_120f8970;
  /* 120f8968 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f896a jb 0x120f8ae8 */
  if (C.cf) goto L_120f8ae8;
L_120f8970:;
  /* 120f8970 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120f8976 jne 0x120f898c */
  if (!C.zf) goto L_120f898c;
  /* 120f8978 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f897b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120f897e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8981 jb 0x120f89ac */
  if (C.cf) goto L_120f89ac;
  /* 120f8983 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8985 jmp dword ptr [edx*4 + 0x120f8a98] */
  switch (EDX) {
    case 0: goto L_120f8aa8;
    case 1: goto L_120f8ab0;
    case 2: goto L_120f8abc;
    case 3: goto L_120f8ad0;
    default: x86_unimpl("switch@0x120f8985 out of table"); return;
  }
L_120f898c:;
  /* 120f898c mov eax, edi */
  EAX = (EDI);
  /* 120f898e mov edx, 3 */
  EDX = (0x3u);
  /* 120f8993 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8996 jb 0x120f89a4 */
  if (C.cf) goto L_120f89a4;
  /* 120f8998 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120f899b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f899d jmp dword ptr [eax*4 + 0x120f89b0] */
  switch (EAX) {
    case 1: goto L_120f89c0;
    case 2: goto L_120f89ec;
    case 3: goto L_120f8a10;
    default: x86_unimpl("switch@0x120f899d out of table"); return;
  }
L_120f89a4:;
  /* 120f89a4 jmp dword ptr [ecx*4 + 0x120f8aa8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x120f8aa8)))); return;
  /* 120f89ab nop  */
  /* nop */
L_120f89ac:;
  /* 120f89ac jmp dword ptr [ecx*4 + 0x120f8a2c] */
  switch (ECX) {
    case 0: goto L_120f8a8f;
    case 1: goto L_120f8a7c;
    case 2: goto L_120f8a74;
    case 3: goto L_120f8a6c;
    case 4: goto L_120f8a64;
    case 5: goto L_120f8a5c;
    case 6: goto L_120f8a54;
    case 7: goto L_120f8a4c;
    default: x86_unimpl("switch@0x120f89ac out of table"); return;
  }
  /* 120f89b3 nop  */
  /* nop */
L_120f89c0:;
  /* 120f89c0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f89c2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f89c4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f89c6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f89c9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f89cc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f89cf shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f89d2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f89d5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f89d8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f89db cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f89de jb 0x120f89ac */
  if (C.cf) goto L_120f89ac;
  /* 120f89e0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f89e2 jmp dword ptr [edx*4 + 0x120f8a98] */
  switch (EDX) {
    case 0: goto L_120f8aa8;
    case 1: goto L_120f8ab0;
    case 2: goto L_120f8abc;
    case 3: goto L_120f8ad0;
    default: x86_unimpl("switch@0x120f89e2 out of table"); return;
  }
  /* 120f89e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f89ec:;
  /* 120f89ec and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f89ee mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f89f0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f89f2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f89f5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f89f8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f89fb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f89fe add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8a01 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8a04 jb 0x120f89ac */
  if (C.cf) goto L_120f89ac;
  /* 120f8a06 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8a08 jmp dword ptr [edx*4 + 0x120f8a98] */
  switch (EDX) {
    case 0: goto L_120f8aa8;
    case 1: goto L_120f8ab0;
    case 2: goto L_120f8abc;
    case 3: goto L_120f8ad0;
    default: x86_unimpl("switch@0x120f8a08 out of table"); return;
  }
  /* 120f8a0f nop  */
  /* nop */
L_120f8a10:;
  /* 120f8a10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f8a12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f8a14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f8a16 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f8a17 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f8a1a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f8a1b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8a1e jb 0x120f89ac */
  if (C.cf) goto L_120f89ac;
  /* 120f8a20 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8a22 jmp dword ptr [edx*4 + 0x120f8a98] */
  switch (EDX) {
    case 0: goto L_120f8aa8;
    case 1: goto L_120f8ab0;
    case 2: goto L_120f8abc;
    case 3: goto L_120f8ad0;
    default: x86_unimpl("switch@0x120f8a22 out of table"); return;
  }
  /* 120f8a29 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f8a4c:;
  /* 120f8a4c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 120f8a50 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_120f8a54:;
  /* 120f8a54 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 120f8a58 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_120f8a5c:;
  /* 120f8a5c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 120f8a60 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_120f8a64:;
  /* 120f8a64 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 120f8a68 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_120f8a6c:;
  /* 120f8a6c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 120f8a70 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_120f8a74:;
  /* 120f8a74 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 120f8a78 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_120f8a7c:;
  /* 120f8a7c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 120f8a80 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 120f8a84 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120f8a8b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8a8d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120f8a8f:;
  /* 120f8a8f jmp dword ptr [edx*4 + 0x120f8a98] */
  switch (EDX) {
    case 0: goto L_120f8aa8;
    case 1: goto L_120f8ab0;
    case 2: goto L_120f8abc;
    case 3: goto L_120f8ad0;
    default: x86_unimpl("switch@0x120f8a8f out of table"); return;
  }
  /* 120f8a96 mov edi, edi */
  EDI = (EDI);
L_120f8aa8:;
  /* 120f8aa8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8aab pop esi */
  ESI = (pop32());
  /* 120f8aac pop edi */
  EDI = (pop32());
  /* 120f8aad leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8aae ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8aaf nop  */
  /* nop */
L_120f8ab0:;
  /* 120f8ab0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f8ab2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f8ab4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8ab7 pop esi */
  ESI = (pop32());
  /* 120f8ab8 pop edi */
  EDI = (pop32());
  /* 120f8ab9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8aba ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8abb nop  */
  /* nop */
L_120f8abc:;
  /* 120f8abc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f8abe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f8ac0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f8ac3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f8ac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8ac9 pop esi */
  ESI = (pop32());
  /* 120f8aca pop edi */
  EDI = (pop32());
  /* 120f8acb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8acc ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8acd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f8ad0:;
  /* 120f8ad0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120f8ad2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f8ad4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f8ad7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f8ada mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f8add mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f8ae0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8ae3 pop esi */
  ESI = (pop32());
  /* 120f8ae4 pop edi */
  EDI = (pop32());
  /* 120f8ae5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8ae6 ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8ae7 nop  */
  /* nop */
L_120f8ae8:;
  /* 120f8ae8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 120f8aec lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 120f8af0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120f8af6 jne 0x120f8b1c */
  if (!C.zf) goto L_120f8b1c;
  /* 120f8af8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f8afb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120f8afe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8b01 jb 0x120f8b10 */
  if (C.cf) goto L_120f8b10;
  /* 120f8b03 std  */
  C.df=1;
  /* 120f8b04 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8b06 cld  */
  C.df=0;
  /* 120f8b07 jmp dword ptr [edx*4 + 0x120f8c30] */
  switch (EDX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8b07 out of table"); return;
  }
  /* 120f8b0e mov edi, edi */
  EDI = (EDI);
L_120f8b10:;
  /* 120f8b10 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f8b12 jmp dword ptr [ecx*4 + 0x120f8be0] */
  switch (ECX) {
    case 0: goto L_120f8c27;
    default: x86_unimpl("switch@0x120f8b12 out of table"); return;
  }
  /* 120f8b19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f8b1c:;
  /* 120f8b1c mov eax, edi */
  EAX = (EDI);
  /* 120f8b1e mov edx, 3 */
  EDX = (0x3u);
  /* 120f8b23 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8b26 jb 0x120f8b34 */
  if (C.cf) goto L_120f8b34;
  /* 120f8b28 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120f8b2b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8b2d jmp dword ptr [eax*4 + 0x120f8b38] */
  switch (EAX) {
    case 1: goto L_120f8b48;
    case 2: goto L_120f8b68;
    case 3: goto L_120f8b90;
    default: x86_unimpl("switch@0x120f8b2d out of table"); return;
  }
L_120f8b34:;
  /* 120f8b34 jmp dword ptr [ecx*4 + 0x120f8c30] */
  switch (ECX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8b34 out of table"); return;
  }
  /* 120f8b3b nop  */
  /* nop */
L_120f8b48:;
  /* 120f8b48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8b4b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f8b4d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8b50 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f8b51 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f8b54 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120f8b55 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8b58 jb 0x120f8b10 */
  if (C.cf) goto L_120f8b10;
  /* 120f8b5a std  */
  C.df=1;
  /* 120f8b5b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8b5d cld  */
  C.df=0;
  /* 120f8b5e jmp dword ptr [edx*4 + 0x120f8c30] */
  switch (EDX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8b5e out of table"); return;
  }
  /* 120f8b65 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f8b68:;
  /* 120f8b68 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8b6b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f8b6d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8b70 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f8b73 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f8b76 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f8b79 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8b7c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8b7f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8b82 jb 0x120f8b10 */
  if (C.cf) goto L_120f8b10;
  /* 120f8b84 std  */
  C.df=1;
  /* 120f8b85 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8b87 cld  */
  C.df=0;
  /* 120f8b88 jmp dword ptr [edx*4 + 0x120f8c30] */
  switch (EDX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8b88 out of table"); return;
  }
  /* 120f8b8f nop  */
  /* nop */
L_120f8b90:;
  /* 120f8b90 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8b93 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120f8b95 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8b98 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f8b9b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f8b9e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f8ba1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f8ba4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f8ba7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8baa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8bad cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8bb0 jb 0x120f8b10 */
  if (C.cf) goto L_120f8b10;
  /* 120f8bb6 std  */
  C.df=1;
  /* 120f8bb7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120f8bb9 cld  */
  C.df=0;
  /* 120f8bba jmp dword ptr [edx*4 + 0x120f8c30] */
  switch (EDX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8bba out of table"); return;
  }
  /* 120f8bc1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 120f8bc4 in al, 0x8b */
  x86_unimpl("in @ 0x120f8bc4");
  /* 120f8bc6 movhlps xmm5, xmm4 */
  x86_unimpl("movhlps @ 0x120f8bc6");
  /* 120f8bc9 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 120f8bcb adc dh, ah */
  { uint32_t _a=(C.d.b.h),_b=(AH),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 120f8bcd mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 120f8bcf adc bh, ah */
  { uint32_t _a=(C.b.b.h),_b=(AH),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 120f8bd1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 120f8bd3 adc al, byte ptr [esp + ecx*4] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ESP + ECX*4))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120f8bd6 movlps xmm1, qword ptr [esp + ecx*4] */
  x86_unimpl("movlps @ 0x120f8bd6");
  /* 120f8bda movlps xmm2, qword ptr [esp + ecx*4] */
  x86_unimpl("movlps @ 0x120f8bda");
  /* 120f8be4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 120f8be8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 120f8bec mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 120f8bf0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 120f8bf4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 120f8bf8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 120f8bfc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 120f8c00 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 120f8c04 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 120f8c08 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 120f8c0c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 120f8c10 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 120f8c14 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 120f8c18 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 120f8c1c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120f8c23 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8c25 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120f8c27:;
  /* 120f8c27 jmp dword ptr [edx*4 + 0x120f8c30] */
  switch (EDX) {
    case 0: goto L_120f8c40;
    case 1: goto L_120f8c48;
    case 2: goto L_120f8c58;
    case 3: goto L_120f8c6c;
    default: x86_unimpl("switch@0x120f8c27 out of table"); return;
  }
  /* 120f8c2e mov edi, edi */
  EDI = (EDI);
L_120f8c40:;
  /* 120f8c40 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8c43 pop esi */
  ESI = (pop32());
  /* 120f8c44 pop edi */
  EDI = (pop32());
  /* 120f8c45 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8c46 ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8c47 nop  */
  /* nop */
L_120f8c48:;
  /* 120f8c48 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8c4b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8c4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8c51 pop esi */
  ESI = (pop32());
  /* 120f8c52 pop edi */
  EDI = (pop32());
  /* 120f8c53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8c54 ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8c55 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120f8c58:;
  /* 120f8c58 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8c5b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8c5e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f8c61 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f8c64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8c67 pop esi */
  ESI = (pop32());
  /* 120f8c68 pop edi */
  EDI = (pop32());
  /* 120f8c69 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8c6a ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
  /* 120f8c6b nop  */
  /* nop */
L_120f8c6c:;
  /* 120f8c6c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120f8c6f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120f8c72 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120f8c75 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120f8c78 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120f8c7b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120f8c7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f8c81 pop esi */
  ESI = (pop32());
  /* 120f8c82 pop edi */
  EDI = (pop32());
  /* 120f8c83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f8c84 ret  */
  ESPCHK(0x120f8950u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c85 @ 0x120f8c85 (23 bytes, 8 insns) */
void f_120f8c85(void) {
  FTRACE(0x120f8c85u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8c85 push 0xa */
  push32((uint32_t)(0xau));
  /* 120f8c87 call 0x120f6bb7 */
  push32(0x120f8c8cu); f_120f6bb7();
  /* 120f8c8c push 0x16 */
  push32((uint32_t)(0x16u));
  /* 120f8c8e call 0x120faa86 */
  push32(0x120f8c93u); f_120faa86();
  /* 120f8c93 pop ecx */
  ECX = (pop32());
  /* 120f8c94 pop ecx */
  ECX = (pop32());
  /* 120f8c95 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f8c97 call 0x120f61cb */
  push32(0x120f8c9cu); f_120f61cb();
}

/* FUN_10008c9c @ 0x120f8c9c (27 bytes, 13 insns) */
void f_120f8c9c(void) {
  FTRACE(0x120f8c9cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8c9c mov eax, dword ptr [0x12104130] */
  EAX = (r32((uint32_t)(0x12104130)));
  /* 120f8ca1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8ca3 je 0x120f8cb4 */
  if (C.zf) goto L_120f8cb4;
  /* 120f8ca5 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 120f8ca9 call eax */
  call_ind((uint32_t)(EAX), 0x120f8cabu);
  /* 120f8cab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8cad pop ecx */
  ECX = (pop32());
  /* 120f8cae je 0x120f8cb4 */
  if (C.zf) goto L_120f8cb4;
  /* 120f8cb0 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f8cb2 pop eax */
  EAX = (pop32());
  /* 120f8cb3 ret  */
  ESPCHK(0x120f8c9cu, _esp0);
  ESP += 4; return;
L_120f8cb4:;
  /* 120f8cb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f8cb6 ret  */
  ESPCHK(0x120f8c9cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008d38 @ 0x120f8d38 (115 bytes, 37 insns) */
void f_120f8d38(void) {
  FTRACE(0x120f8d38u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8d38 push esi */
  push32((uint32_t)(ESI));
  /* 120f8d39 call 0x120f8db4 */
  push32(0x120f8d3eu); f_120f8db4();
  /* 120f8d3e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f8d42 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f8d44 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f8d46 mov eax, 0x12103040 */
  EAX = (0x12103040u);
L_120f8d4b:;
  /* 120f8d4b cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d4d je 0x120f8d71 */
  if (C.zf) goto L_120f8d71;
  /* 120f8d4f add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8d52 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f8d53 cmp eax, 0x121031a8 */
  { uint32_t _a=(EAX),_b=(0x121031a8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d58 jl 0x120f8d4b */
  if ((C.sf!=C.of)) goto L_120f8d4b;
  /* 120f8d5a cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d5d jb 0x120f8d81 */
  if (C.cf) goto L_120f8d81;
  /* 120f8d5f cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d62 ja 0x120f8d81 */
  if ((!C.cf&&!C.zf)) goto L_120f8d81;
  /* 120f8d64 call 0x120f8dab */
  push32(0x120f8d69u); f_120f8dab();
  /* 120f8d69 mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 120f8d6f pop esi */
  ESI = (pop32());
  /* 120f8d70 ret  */
  ESPCHK(0x120f8d38u, _esp0);
  ESP += 4; return;
L_120f8d71:;
  /* 120f8d71 call 0x120f8dab */
  push32(0x120f8d76u); f_120f8dab();
  /* 120f8d76 mov ecx, dword ptr [esi*8 + 0x12103044] */
  ECX = (r32((uint32_t)(ESI*8 + 0x12103044)));
  /* 120f8d7d pop esi */
  ESI = (pop32());
  /* 120f8d7e mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f8d80 ret  */
  ESPCHK(0x120f8d38u, _esp0);
  ESP += 4; return;
L_120f8d81:;
  /* 120f8d81 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d87 jb 0x120f8d9e */
  if (C.cf) goto L_120f8d9e;
  /* 120f8d89 cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8d8f ja 0x120f8d9e */
  if ((!C.cf&&!C.zf)) goto L_120f8d9e;
  /* 120f8d91 call 0x120f8dab */
  push32(0x120f8d96u); f_120f8dab();
  /* 120f8d96 mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 120f8d9c pop esi */
  ESI = (pop32());
  /* 120f8d9d ret  */
  ESPCHK(0x120f8d38u, _esp0);
  ESP += 4; return;
L_120f8d9e:;
  /* 120f8d9e call 0x120f8dab */
  push32(0x120f8da3u); f_120f8dab();
  /* 120f8da3 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 120f8da9 pop esi */
  ESI = (pop32());
  /* 120f8daa ret  */
  ESPCHK(0x120f8d38u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dab @ 0x120f8dab (9 bytes, 3 insns) */
void f_120f8dab(void) {
  FTRACE(0x120f8dabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8dab call 0x120f4c53 */
  push32(0x120f8db0u); f_120f4c53();
  /* 120f8db0 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8db3 ret  */
  ESPCHK(0x120f8dabu, _esp0);
  ESP += 4; return;
}

/* FUN_10008db4 @ 0x120f8db4 (9 bytes, 3 insns) */
void f_120f8db4(void) {
  FTRACE(0x120f8db4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8db4 call 0x120f4c53 */
  push32(0x120f8db9u); f_120f4c53();
  /* 120f8db9 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8dbc ret  */
  ESPCHK(0x120f8db4u, _esp0);
  ESP += 4; return;
}

/* FUN_10008dbd @ 0x120f8dbd (127 bytes, 48 insns) */
void f_120f8dbd(void) {
  FTRACE(0x120f8dbdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8dbd mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f8dc1 push esi */
  push32((uint32_t)(ESI));
  /* 120f8dc2 cmp ecx, dword ptr [0x12104580] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12104580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8dc8 push edi */
  push32((uint32_t)(EDI));
  /* 120f8dc9 jae 0x120f8e23 */
  if (!C.cf) goto L_120f8e23;
  /* 120f8dcb mov eax, ecx */
  EAX = (ECX);
  /* 120f8dcd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f8dd0 lea edi, [eax*4 + 0x12104480] */
  EDI = ((uint32_t)(EAX*4 + 0x12104480));
  /* 120f8dd7 mov eax, ecx */
  EAX = (ECX);
  /* 120f8dd9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8ddc lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 120f8ddf mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f8de1 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 120f8de4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8de6 test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f8dea je 0x120f8e23 */
  if (C.zf) goto L_120f8e23;
  /* 120f8dec cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8def je 0x120f8e23 */
  if (C.zf) goto L_120f8e23;
  /* 120f8df1 cmp dword ptr [0x12103ea8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12103ea8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8df8 jne 0x120f8e19 */
  if (!C.zf) goto L_120f8e19;
  /* 120f8dfa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f8dfc sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f8dfe je 0x120f8e10 */
  if (C.zf) goto L_120f8e10;
  /* 120f8e00 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f8e01 je 0x120f8e0b */
  if (C.zf) goto L_120f8e0b;
  /* 120f8e03 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f8e04 jne 0x120f8e19 */
  if (!C.zf) goto L_120f8e19;
  /* 120f8e06 push eax */
  push32((uint32_t)(EAX));
  /* 120f8e07 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120f8e09 jmp 0x120f8e13 */
  goto L_120f8e13;
L_120f8e0b:;
  /* 120f8e0b push eax */
  push32((uint32_t)(EAX));
  /* 120f8e0c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 120f8e0e jmp 0x120f8e13 */
  goto L_120f8e13;
L_120f8e10:;
  /* 120f8e10 push eax */
  push32((uint32_t)(EAX));
  /* 120f8e11 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_120f8e13:;
  /* 120f8e13 call dword ptr [0x120fd040] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd040))), 0x120f8e19u);
L_120f8e19:;
  /* 120f8e19 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f8e1b or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 120f8e1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f8e21 jmp 0x120f8e39 */
  goto L_120f8e39;
L_120f8e23:;
  /* 120f8e23 call 0x120f8dab */
  push32(0x120f8e28u); f_120f8dab();
  /* 120f8e28 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f8e2e call 0x120f8db4 */
  push32(0x120f8e33u); f_120f8db4();
  /* 120f8e33 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f8e36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120f8e39:;
  /* 120f8e39 pop edi */
  EDI = (pop32());
  /* 120f8e3a pop esi */
  ESI = (pop32());
  /* 120f8e3b ret  */
  ESPCHK(0x120f8dbdu, _esp0);
  ESP += 4; return;
}

/* FUN_10008e3c @ 0x120f8e3c (66 bytes, 19 insns) */
void f_120f8e3c(void) {
  FTRACE(0x120f8e3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8e3c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f8e40 cmp eax, dword ptr [0x12104580] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12104580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8e46 jae 0x120f8e67 */
  if (!C.cf) goto L_120f8e67;
  /* 120f8e48 mov ecx, eax */
  ECX = (EAX);
  /* 120f8e4a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8e4d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f8e50 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120f8e53 mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f8e5a test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f8e5f lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 120f8e62 je 0x120f8e67 */
  if (C.zf) goto L_120f8e67;
  /* 120f8e64 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120f8e66 ret  */
  ESPCHK(0x120f8e3cu, _esp0);
  ESP += 4; return;
L_120f8e67:;
  /* 120f8e67 call 0x120f8dab */
  push32(0x120f8e6cu); f_120f8dab();
  /* 120f8e6c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f8e72 call 0x120f8db4 */
  push32(0x120f8e77u); f_120f8db4();
  /* 120f8e77 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f8e7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8e7d ret  */
  ESPCHK(0x120f8e3cu, _esp0);
  ESP += 4; return;
}

/* FUN_10008e7e @ 0x120f8e7e (95 bytes, 34 insns) */
void f_120f8e7e(void) {
  FTRACE(0x120f8e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8e7e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f8e82 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8e83 mov ecx, eax */
  ECX = (EAX);
  /* 120f8e85 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8e88 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f8e8b push esi */
  push32((uint32_t)(ESI));
  /* 120f8e8c push edi */
  push32((uint32_t)(EDI));
  /* 120f8e8d mov esi, dword ptr [ecx*4 + 0x12104480] */
  ESI = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f8e94 lea ebx, [ecx*4 + 0x12104480] */
  EBX = ((uint32_t)(ECX*4 + 0x12104480));
  /* 120f8e9b lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 120f8e9e shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 120f8ea1 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8ea3 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8ea7 jne 0x120f8ecc */
  if (!C.zf) goto L_120f8ecc;
  /* 120f8ea9 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f8eab call 0x120f6edc */
  push32(0x120f8eb0u); f_120f6edc();
  /* 120f8eb0 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8eb4 pop ecx */
  ECX = (pop32());
  /* 120f8eb5 jne 0x120f8ec4 */
  if (!C.zf) goto L_120f8ec4;
  /* 120f8eb7 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 120f8eba push eax */
  push32((uint32_t)(EAX));
  /* 120f8ebb call dword ptr [0x120fd0e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0e0))), 0x120f8ec1u);
  /* 120f8ec1 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_120f8ec4:;
  /* 120f8ec4 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f8ec6 call 0x120f6f3d */
  push32(0x120f8ecbu); f_120f6f3d();
  /* 120f8ecb pop ecx */
  ECX = (pop32());
L_120f8ecc:;
  /* 120f8ecc mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f8ece lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 120f8ed2 push eax */
  push32((uint32_t)(EAX));
  /* 120f8ed3 call dword ptr [0x120fd0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d4))), 0x120f8ed9u);
  /* 120f8ed9 pop edi */
  EDI = (pop32());
  /* 120f8eda pop esi */
  ESI = (pop32());
  /* 120f8edb pop ebx */
  EBX = (pop32());
  /* 120f8edc ret  */
  ESPCHK(0x120f8e7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10008edd @ 0x120f8edd (34 bytes, 10 insns) */
void f_120f8edd(void) {
  FTRACE(0x120f8eddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8edd mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f8ee1 mov ecx, eax */
  ECX = (EAX);
  /* 120f8ee3 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8ee6 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f8ee9 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120f8eec mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f8ef3 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 120f8ef7 push eax */
  push32((uint32_t)(EAX));
  /* 120f8ef8 call dword ptr [0x120fd0d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0d8))), 0x120f8efeu);
  /* 120f8efe ret  */
  ESPCHK(0x120f8eddu, _esp0);
  ESP += 4; return;
}

/* FUN_10008eff @ 0x120f8eff (147 bytes, 52 insns) */
void f_120f8eff(void) {
  FTRACE(0x120f8effu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8eff push ebx */
  push32((uint32_t)(EBX));
  /* 120f8f00 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f8f04 cmp ebx, dword ptr [0x12104580] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x12104580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8f0a push esi */
  push32((uint32_t)(ESI));
  /* 120f8f0b push edi */
  push32((uint32_t)(EDI));
  /* 120f8f0c jae 0x120f8f80 */
  if (!C.cf) goto L_120f8f80;
  /* 120f8f0e mov eax, ebx */
  EAX = (EBX);
  /* 120f8f10 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f8f13 lea edi, [eax*4 + 0x12104480] */
  EDI = ((uint32_t)(EAX*4 + 0x12104480));
  /* 120f8f1a mov eax, ebx */
  EAX = (EBX);
  /* 120f8f1c and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8f1f lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 120f8f22 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f8f24 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 120f8f27 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f8f2c je 0x120f8f80 */
  if (C.zf) goto L_120f8f80;
  /* 120f8f2e push ebx */
  push32((uint32_t)(EBX));
  /* 120f8f2f call 0x120f8e7e */
  push32(0x120f8f34u); f_120f8e7e();
  /* 120f8f34 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f8f36 pop ecx */
  ECX = (pop32());
  /* 120f8f37 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f8f3c je 0x120f8f67 */
  if (C.zf) goto L_120f8f67;
  /* 120f8f3e push ebx */
  push32((uint32_t)(EBX));
  /* 120f8f3f call 0x120f8e3c */
  push32(0x120f8f44u); f_120f8e3c();
  /* 120f8f44 pop ecx */
  ECX = (pop32());
  /* 120f8f45 push eax */
  push32((uint32_t)(EAX));
  /* 120f8f46 call dword ptr [0x120fd048] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd048))), 0x120f8f4cu);
  /* 120f8f4c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f8f4e jne 0x120f8f5a */
  if (!C.zf) goto L_120f8f5a;
  /* 120f8f50 call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120f8f56u);
  /* 120f8f56 mov esi, eax */
  ESI = (EAX);
  /* 120f8f58 jmp 0x120f8f5c */
  goto L_120f8f5c;
L_120f8f5a:;
  /* 120f8f5a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120f8f5c:;
  /* 120f8f5c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f8f5e je 0x120f8f75 */
  if (C.zf) goto L_120f8f75;
  /* 120f8f60 call 0x120f8db4 */
  push32(0x120f8f65u); f_120f8db4();
  /* 120f8f65 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_120f8f67:;
  /* 120f8f67 call 0x120f8dab */
  push32(0x120f8f6cu); f_120f8dab();
  /* 120f8f6c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f8f72 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_120f8f75:;
  /* 120f8f75 push ebx */
  push32((uint32_t)(EBX));
  /* 120f8f76 call 0x120f8edd */
  push32(0x120f8f7bu); f_120f8edd();
  /* 120f8f7b pop ecx */
  ECX = (pop32());
  /* 120f8f7c mov eax, esi */
  EAX = (ESI);
  /* 120f8f7e jmp 0x120f8f8e */
  goto L_120f8f8e;
L_120f8f80:;
  /* 120f8f80 call 0x120f8dab */
  push32(0x120f8f85u); f_120f8dab();
  /* 120f8f85 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f8f8b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120f8f8e:;
  /* 120f8f8e pop edi */
  EDI = (pop32());
  /* 120f8f8f pop esi */
  ESI = (pop32());
  /* 120f8f90 pop ebx */
  EBX = (pop32());
  /* 120f8f91 ret  */
  ESPCHK(0x120f8effu, _esp0);
  ESP += 4; return;
}

/* FUN_10008f92 @ 0x120f8f92 (101 bytes, 34 insns) */
void f_120f8f92(void) {
  FTRACE(0x120f8f92u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8f92 push esi */
  push32((uint32_t)(ESI));
  /* 120f8f93 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f8f97 cmp esi, dword ptr [0x12104580] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x12104580))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f8f9d jae 0x120f8fdf */
  if (!C.cf) goto L_120f8fdf;
  /* 120f8f9f mov ecx, esi */
  ECX = (ESI);
  /* 120f8fa1 mov eax, esi */
  EAX = (ESI);
  /* 120f8fa3 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120f8fa6 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8fa9 mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120f8fb0 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120f8fb3 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 120f8fb8 je 0x120f8fdf */
  if (C.zf) goto L_120f8fdf;
  /* 120f8fba push edi */
  push32((uint32_t)(EDI));
  /* 120f8fbb push esi */
  push32((uint32_t)(ESI));
  /* 120f8fbc call 0x120f8e7e */
  push32(0x120f8fc1u); f_120f8e7e();
  /* 120f8fc1 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120f8fc5 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120f8fc9 push esi */
  push32((uint32_t)(ESI));
  /* 120f8fca call 0x120f8ff7 */
  push32(0x120f8fcfu); f_120f8ff7();
  /* 120f8fcf push esi */
  push32((uint32_t)(ESI));
  /* 120f8fd0 mov edi, eax */
  EDI = (EAX);
  /* 120f8fd2 call 0x120f8edd */
  push32(0x120f8fd7u); f_120f8edd();
  /* 120f8fd7 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f8fda mov eax, edi */
  EAX = (EDI);
  /* 120f8fdc pop edi */
  EDI = (pop32());
  /* 120f8fdd pop esi */
  ESI = (pop32());
  /* 120f8fde ret  */
  ESPCHK(0x120f8f92u, _esp0);
  ESP += 4; return;
L_120f8fdf:;
  /* 120f8fdf call 0x120f8dab */
  push32(0x120f8fe4u); f_120f8dab();
  /* 120f8fe4 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f8fea call 0x120f8db4 */
  push32(0x120f8fefu); f_120f8db4();
  /* 120f8fef and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f8ff2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f8ff5 pop esi */
  ESI = (pop32());
  /* 120f8ff6 ret  */
  ESPCHK(0x120f8f92u, _esp0);
  ESP += 4; return;
}

/* FUN_10008ff7 @ 0x120f8ff7 (395 bytes, 135 insns) */
void f_120f8ff7(void) {
  FTRACE(0x120f8ff7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f8ff7 push ebp */
  push32((uint32_t)(EBP));
  /* 120f8ff8 mov ebp, esp */
  EBP = (ESP);
  /* 120f8ffa sub esp, 0x414 */
  { uint32_t _a=(ESP),_b=(0x414u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9000 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9001 push esi */
  push32((uint32_t)(ESI));
  /* 120f9002 push edi */
  push32((uint32_t)(EDI));
  /* 120f9003 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120f9005 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9008 mov dword ptr [ebp - 8], edi */
  w32((uint32_t)(EBP + -0x8), (EDI));
  /* 120f900b mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 120f900e jne 0x120f9017 */
  if (!C.zf) goto L_120f9017;
L_120f9010:;
  /* 120f9010 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9012 jmp 0x120f917d */
  goto L_120f917d;
L_120f9017:;
  /* 120f9017 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f901a sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120f901d lea ebx, [eax*4 + 0x12104480] */
  EBX = ((uint32_t)(EAX*4 + 0x12104480));
  /* 120f9024 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9027 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 120f902a lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 120f902d mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f902f shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 120f9032 test byte ptr [eax + esi + 4], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x20u); fl_logic(_r,8); }
  /* 120f9037 je 0x120f9047 */
  if (C.zf) goto L_120f9047;
  /* 120f9039 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f903b push edi */
  push32((uint32_t)(EDI));
  /* 120f903c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f903f call 0x120fac45 */
  push32(0x120f9044u); f_120fac45();
  /* 120f9044 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f9047:;
  /* 120f9047 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f9049 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f904b test byte ptr [eax + 4], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x80u); fl_logic(_r,8); }
  /* 120f904f je 0x120f9116 */
  if (C.zf) goto L_120f9116;
  /* 120f9055 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9058 cmp dword ptr [ebp + 0x10], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f905b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f905e mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 120f9061 jbe 0x120f9151 */
  if ((C.cf||C.zf)) goto L_120f9151;
L_120f9067:;
  /* 120f9067 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
L_120f906d:;
  /* 120f906d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f9070 sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9073 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9076 jae 0x120f90a1 */
  if (!C.cf) goto L_120f90a1;
  /* 120f9078 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f907b inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f907e mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 120f9080 cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9083 jne 0x120f908c */
  if (!C.zf) goto L_120f908c;
  /* 120f9085 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 120f9088 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 120f908b inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120f908c:;
  /* 120f908c mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120f908e inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f908f mov ecx, eax */
  ECX = (EAX);
  /* 120f9091 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 120f9097 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9099 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f909f jl 0x120f906d */
  if ((C.sf!=C.of)) goto L_120f906d;
L_120f90a1:;
  /* 120f90a1 mov edi, eax */
  EDI = (EAX);
  /* 120f90a3 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 120f90a9 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f90ab lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f90ae push 0 */
  push32((uint32_t)(0x0u));
  /* 120f90b0 push eax */
  push32((uint32_t)(EAX));
  /* 120f90b1 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 120f90b7 push edi */
  push32((uint32_t)(EDI));
  /* 120f90b8 push eax */
  push32((uint32_t)(EAX));
  /* 120f90b9 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f90bb push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 120f90be call dword ptr [0x120fd060] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd060))), 0x120f90c4u);
  /* 120f90c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f90c6 je 0x120f910b */
  if (C.zf) goto L_120f910b;
  /* 120f90c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f90cb add dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120f90ce cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f90d0 jl 0x120f90dd */
  if ((C.sf!=C.of)) goto L_120f90dd;
  /* 120f90d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f90d5 sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f90d8 cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f90db jb 0x120f9067 */
  if (C.cf) goto L_120f9067;
L_120f90dd:;
  /* 120f90dd xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_120f90df:;
  /* 120f90df mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f90e2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f90e4 jne 0x120f917a */
  if (!C.zf) goto L_120f917a;
  /* 120f90ea cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f90ed je 0x120f9151 */
  if (C.zf) goto L_120f9151;
  /* 120f90ef push 5 */
  push32((uint32_t)(0x5u));
  /* 120f90f1 pop esi */
  ESI = (pop32());
  /* 120f90f2 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f90f5 jne 0x120f9143 */
  if (!C.zf) goto L_120f9143;
  /* 120f90f7 call 0x120f8dab */
  push32(0x120f90fcu); f_120f8dab();
  /* 120f90fc mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120f9102 call 0x120f8db4 */
  push32(0x120f9107u); f_120f8db4();
  /* 120f9107 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 120f9109 jmp 0x120f914c */
  goto L_120f914c;
L_120f910b:;
  /* 120f910b call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120f9111u);
  /* 120f9111 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120f9114 jmp 0x120f90dd */
  goto L_120f90dd;
L_120f9116:;
  /* 120f9116 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120f9119 push edi */
  push32((uint32_t)(EDI));
  /* 120f911a push ecx */
  push32((uint32_t)(ECX));
  /* 120f911b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120f911e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f9121 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 120f9123 call dword ptr [0x120fd060] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd060))), 0x120f9129u);
  /* 120f9129 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f912b je 0x120f9138 */
  if (C.zf) goto L_120f9138;
  /* 120f912d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120f9130 mov dword ptr [ebp + 8], edi */
  w32((uint32_t)(EBP + 0x8), (EDI));
  /* 120f9133 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120f9136 jmp 0x120f90df */
  goto L_120f90df;
L_120f9138:;
  /* 120f9138 call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120f913eu);
  /* 120f913e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120f9141 jmp 0x120f90df */
  goto L_120f90df;
L_120f9143:;
  /* 120f9143 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f9146 call 0x120f8d38 */
  push32(0x120f914bu); f_120f8d38();
  /* 120f914b pop ecx */
  ECX = (pop32());
L_120f914c:;
  /* 120f914c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f914f jmp 0x120f917d */
  goto L_120f917d;
L_120f9151:;
  /* 120f9151 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120f9153 test byte ptr [eax + esi + 4], 0x40 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x40u); fl_logic(_r,8); }
  /* 120f9158 je 0x120f9166 */
  if (C.zf) goto L_120f9166;
  /* 120f915a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f915d cmp byte ptr [eax], 0x1a */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9160 je 0x120f9010 */
  if (C.zf) goto L_120f9010;
L_120f9166:;
  /* 120f9166 call 0x120f8dab */
  push32(0x120f916bu); f_120f8dab();
  /* 120f916b mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 120f9171 call 0x120f8db4 */
  push32(0x120f9176u); f_120f8db4();
  /* 120f9176 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 120f9178 jmp 0x120f914c */
  goto L_120f914c;
L_120f917a:;
  /* 120f917a sub eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120f917d:;
  /* 120f917d pop edi */
  EDI = (pop32());
  /* 120f917e pop esi */
  ESI = (pop32());
  /* 120f917f pop ebx */
  EBX = (pop32());
  /* 120f9180 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9181 ret  */
  ESPCHK(0x120f8ff7u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x120f9190 (123 bytes, 44 insns) */
void f_120f9190(void) {
  FTRACE(0x120f9190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9190 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9194 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f919a je 0x120f91b0 */
  if (C.zf) goto L_120f91b0;
L_120f919c:;
  /* 120f919c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120f919e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f919f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f91a1 je 0x120f91e3 */
  if (C.zf) goto L_120f91e3;
  /* 120f91a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f91a9 jne 0x120f919c */
  if (!C.zf) goto L_120f919c;
  /* 120f91ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120f91b0:;
  /* 120f91b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120f91b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120f91b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f91b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f91bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120f91be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f91c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120f91c6 je 0x120f91b0 */
  if (C.zf) goto L_120f91b0;
  /* 120f91c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 120f91cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f91cd je 0x120f9201 */
  if (C.zf) goto L_120f9201;
  /* 120f91cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120f91d1 je 0x120f91f7 */
  if (C.zf) goto L_120f91f7;
  /* 120f91d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 120f91d8 je 0x120f91ed */
  if (C.zf) goto L_120f91ed;
  /* 120f91da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 120f91df je 0x120f91e3 */
  if (C.zf) goto L_120f91e3;
  /* 120f91e1 jmp 0x120f91b0 */
  goto L_120f91b0;
L_120f91e3:;
  /* 120f91e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 120f91e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f91ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f91ec ret  */
  ESPCHK(0x120f9190u, _esp0);
  ESP += 4; return;
L_120f91ed:;
  /* 120f91ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 120f91f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f91f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f91f6 ret  */
  ESPCHK(0x120f9190u, _esp0);
  ESP += 4; return;
L_120f91f7:;
  /* 120f91f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 120f91fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f91fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9200 ret  */
  ESPCHK(0x120f9190u, _esp0);
  ESP += 4; return;
L_120f9201:;
  /* 120f9201 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 120f9204 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9208 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f920a ret  */
  ESPCHK(0x120f9190u, _esp0);
  ESP += 4; return;
}

/* FUN_100092f5 @ 0x120f92f5 (53 bytes, 25 insns) */
void f_120f92f5(void) {
  FTRACE(0x120f92f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f92f5 push ebp */
  push32((uint32_t)(EBP));
  /* 120f92f6 mov ebp, esp */
  EBP = (ESP);
  /* 120f92f8 push ecx */
  push32((uint32_t)(ECX));
  /* 120f92f9 push esi */
  push32((uint32_t)(ESI));
  /* 120f92fa wait  */
  /* wait (no observable integer/reg state) */
  /* 120f92fb fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 120f92fe push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120f9301 call 0x120f9340 */
  push32(0x120f9306u); f_120f9340();
  /* 120f9306 mov esi, eax */
  ESI = (EAX);
  /* 120f9308 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f930b not eax */
  EAX = (~(EAX));
  /* 120f930d and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 120f930f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9312 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 120f9315 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 120f9317 push esi */
  push32((uint32_t)(ESI));
  /* 120f9318 call 0x120f93d2 */
  push32(0x120f931du); f_120f93d2();
  /* 120f931d pop ecx */
  ECX = (pop32());
  /* 120f931e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f9321 pop ecx */
  ECX = (pop32());
  /* 120f9322 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 120f9325 mov eax, esi */
  EAX = (ESI);
  /* 120f9327 pop esi */
  ESI = (pop32());
  /* 120f9328 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9329 ret  */
  ESPCHK(0x120f92f5u, _esp0);
  ESP += 4; return;
}

/* FUN_1000932a @ 0x120f932a (22 bytes, 8 insns) */
void f_120f932a(void) {
  FTRACE(0x120f932au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f932a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f932e and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f9333 push eax */
  push32((uint32_t)(EAX));
  /* 120f9334 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 120f9338 call 0x120f92f5 */
  push32(0x120f933du); f_120f92f5();
  /* 120f933d pop ecx */
  ECX = (pop32());
  /* 120f933e pop ecx */
  ECX = (pop32());
  /* 120f933f ret  */
  ESPCHK(0x120f932au, _esp0);
  ESP += 4; return;
}

/* FUN_10009340 @ 0x120f9340 (146 bytes, 58 insns) */
void f_120f9340(void) {
  FTRACE(0x120f9340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9340 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9341 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9347 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9348 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 120f934b push edi */
  push32((uint32_t)(EDI));
  /* 120f934c je 0x120f9351 */
  if (C.zf) goto L_120f9351;
  /* 120f934e push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120f9350 pop eax */
  EAX = (pop32());
L_120f9351:;
  /* 120f9351 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 120f9354 je 0x120f9358 */
  if (C.zf) goto L_120f9358;
  /* 120f9356 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_120f9358:;
  /* 120f9358 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 120f935b je 0x120f935f */
  if (C.zf) goto L_120f935f;
  /* 120f935d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_120f935f:;
  /* 120f935f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 120f9362 je 0x120f9366 */
  if (C.zf) goto L_120f9366;
  /* 120f9364 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_120f9366:;
  /* 120f9366 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 120f9369 je 0x120f936d */
  if (C.zf) goto L_120f936d;
  /* 120f936b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_120f936d:;
  /* 120f936d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 120f9370 je 0x120f9377 */
  if (C.zf) goto L_120f9377;
  /* 120f9372 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_120f9377:;
  /* 120f9377 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 120f937a push esi */
  push32((uint32_t)(ESI));
  /* 120f937b mov edx, ecx */
  EDX = (ECX);
  /* 120f937d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 120f9382 mov edi, 0x300 */
  EDI = (0x300u);
  /* 120f9387 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 120f9389 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 120f938e je 0x120f93af */
  if (C.zf) goto L_120f93af;
  /* 120f9390 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9396 je 0x120f93ac */
  if (C.zf) goto L_120f93ac;
  /* 120f9398 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f939e je 0x120f93a8 */
  if (C.zf) goto L_120f93a8;
  /* 120f93a0 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f93a2 jne 0x120f93af */
  if (!C.zf) goto L_120f93af;
  /* 120f93a4 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 120f93a6 jmp 0x120f93af */
  goto L_120f93af;
L_120f93a8:;
  /* 120f93a8 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 120f93aa jmp 0x120f93af */
  goto L_120f93af;
L_120f93ac:;
  /* 120f93ac or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_120f93af:;
  /* 120f93af and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f93b1 pop esi */
  ESI = (pop32());
  /* 120f93b2 je 0x120f93bf */
  if (C.zf) goto L_120f93bf;
  /* 120f93b4 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f93b6 jne 0x120f93c4 */
  if (!C.zf) goto L_120f93c4;
  /* 120f93b8 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 120f93bd jmp 0x120f93c4 */
  goto L_120f93c4;
L_120f93bf:;
  /* 120f93bf or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_120f93c4:;
  /* 120f93c4 pop edi */
  EDI = (pop32());
  /* 120f93c5 pop ebp */
  EBP = (pop32());
  /* 120f93c6 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 120f93c9 pop ebx */
  EBX = (pop32());
  /* 120f93ca je 0x120f93d1 */
  if (C.zf) goto L_120f93d1;
  /* 120f93cc or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_120f93d1:;
  /* 120f93d1 ret  */
  ESPCHK(0x120f9340u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d2 @ 0x120f93d2 (137 bytes, 53 insns) */
void f_120f93d2(void) {
  FTRACE(0x120f93d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f93d2 push ebx */
  push32((uint32_t)(EBX));
  /* 120f93d3 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f93d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f93d9 push esi */
  push32((uint32_t)(ESI));
  /* 120f93da test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 120f93dd je 0x120f93e2 */
  if (C.zf) goto L_120f93e2;
  /* 120f93df push 1 */
  push32((uint32_t)(0x1u));
  /* 120f93e1 pop eax */
  EAX = (pop32());
L_120f93e2:;
  /* 120f93e2 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 120f93e5 je 0x120f93e9 */
  if (C.zf) goto L_120f93e9;
  /* 120f93e7 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_120f93e9:;
  /* 120f93e9 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 120f93ec je 0x120f93f0 */
  if (C.zf) goto L_120f93f0;
  /* 120f93ee or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_120f93f0:;
  /* 120f93f0 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 120f93f3 je 0x120f93f7 */
  if (C.zf) goto L_120f93f7;
  /* 120f93f5 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_120f93f7:;
  /* 120f93f7 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 120f93fa je 0x120f93fe */
  if (C.zf) goto L_120f93fe;
  /* 120f93fc or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_120f93fe:;
  /* 120f93fe test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 120f9404 je 0x120f9408 */
  if (C.zf) goto L_120f9408;
  /* 120f9406 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_120f9408:;
  /* 120f9408 mov ecx, ebx */
  ECX = (EBX);
  /* 120f940a mov edx, 0x300 */
  EDX = (0x300u);
  /* 120f940f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120f9411 mov esi, 0x200 */
  ESI = (0x200u);
  /* 120f9416 je 0x120f9435 */
  if (C.zf) goto L_120f9435;
  /* 120f9418 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f941e je 0x120f9432 */
  if (C.zf) goto L_120f9432;
  /* 120f9420 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9422 je 0x120f942d */
  if (C.zf) goto L_120f942d;
  /* 120f9424 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9426 jne 0x120f9435 */
  if (!C.zf) goto L_120f9435;
  /* 120f9428 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 120f942b jmp 0x120f9435 */
  goto L_120f9435;
L_120f942d:;
  /* 120f942d or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 120f9430 jmp 0x120f9435 */
  goto L_120f9435;
L_120f9432:;
  /* 120f9432 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_120f9435:;
  /* 120f9435 mov ecx, ebx */
  ECX = (EBX);
  /* 120f9437 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 120f943d je 0x120f944b */
  if (C.zf) goto L_120f944b;
  /* 120f943f cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9445 jne 0x120f944d */
  if (!C.zf) goto L_120f944d;
  /* 120f9447 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 120f9449 jmp 0x120f944d */
  goto L_120f944d;
L_120f944b:;
  /* 120f944b or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_120f944d:;
  /* 120f944d pop esi */
  ESI = (pop32());
  /* 120f944e test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 120f9454 pop ebx */
  EBX = (pop32());
  /* 120f9455 je 0x120f945a */
  if (C.zf) goto L_120f945a;
  /* 120f9457 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_120f945a:;
  /* 120f945a ret  */
  ESPCHK(0x120f93d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000945b @ 0x120f945b (117 bytes, 46 insns) */
void f_120f945b(void) {
  FTRACE(0x120f945bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f945b push ebp */
  push32((uint32_t)(EBP));
  /* 120f945c mov ebp, esp */
  EBP = (ESP);
  /* 120f945e push ecx */
  push32((uint32_t)(ECX));
  /* 120f945f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9462 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 120f9465 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f946b ja 0x120f9479 */
  if ((!C.cf&&!C.zf)) goto L_120f9479;
  /* 120f946d mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120f9473 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 120f9477 jmp 0x120f94cb */
  goto L_120f94cb;
L_120f9479:;
  /* 120f9479 mov ecx, eax */
  ECX = (EAX);
  /* 120f947b push esi */
  push32((uint32_t)(ESI));
  /* 120f947c mov esi, dword ptr [0x121031b0] */
  ESI = (r32((uint32_t)(0x121031b0)));
  /* 120f9482 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120f9485 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 120f9488 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 120f948d pop esi */
  ESI = (pop32());
  /* 120f948e je 0x120f949e */
  if (C.zf) goto L_120f949e;
  /* 120f9490 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 120f9494 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 120f9497 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 120f949a push 2 */
  push32((uint32_t)(0x2u));
  /* 120f949c jmp 0x120f94a7 */
  goto L_120f94a7;
L_120f949e:;
  /* 120f949e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 120f94a2 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 120f94a5 push 1 */
  push32((uint32_t)(0x1u));
L_120f94a7:;
  /* 120f94a7 pop eax */
  EAX = (pop32());
  /* 120f94a8 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 120f94ab push 1 */
  push32((uint32_t)(0x1u));
  /* 120f94ad push 0 */
  push32((uint32_t)(0x0u));
  /* 120f94af push 0 */
  push32((uint32_t)(0x0u));
  /* 120f94b1 push ecx */
  push32((uint32_t)(ECX));
  /* 120f94b2 push eax */
  push32((uint32_t)(EAX));
  /* 120f94b3 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 120f94b6 push eax */
  push32((uint32_t)(EAX));
  /* 120f94b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f94b9 call 0x120facb8 */
  push32(0x120f94beu); f_120facb8();
  /* 120f94be add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f94c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f94c3 jne 0x120f94c7 */
  if (!C.zf) goto L_120f94c7;
  /* 120f94c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f94c6 ret  */
  ESPCHK(0x120f945bu, _esp0);
  ESP += 4; return;
L_120f94c7:;
  /* 120f94c7 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_120f94cb:;
  /* 120f94cb and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 120f94ce leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f94cf ret  */
  ESPCHK(0x120f945bu, _esp0);
  ESP += 4; return;
}

/* FUN_100094d0 @ 0x120f94d0 (111 bytes, 44 insns) */
void f_120f94d0(void) {
  FTRACE(0x120f94d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f94d0 push ebx */
  push32((uint32_t)(EBX));
  /* 120f94d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f94d3 cmp dword ptr [0x12104150], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104150))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f94d9 jne 0x120f94ee */
  if (!C.zf) goto L_120f94ee;
  /* 120f94db mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f94df cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f94e2 jl 0x120f953d */
  if ((C.sf!=C.of)) goto L_120f953d;
  /* 120f94e4 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f94e7 jg 0x120f953d */
  if ((!C.zf&&C.sf==C.of)) goto L_120f953d;
  /* 120f94e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f94ec pop ebx */
  EBX = (pop32());
  /* 120f94ed ret  */
  ESPCHK(0x120f94d0u, _esp0);
  ESP += 4; return;
L_120f94ee:;
  /* 120f94ee push esi */
  push32((uint32_t)(ESI));
  /* 120f94ef mov esi, 0x12104218 */
  ESI = (0x12104218u);
  /* 120f94f4 push edi */
  push32((uint32_t)(EDI));
  /* 120f94f5 push esi */
  push32((uint32_t)(ESI));
  /* 120f94f6 call dword ptr [0x120fd038] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd038))), 0x120f94fcu);
  /* 120f94fc cmp dword ptr [0x12104214], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104214))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9502 mov edi, dword ptr [0x120fd03c] */
  EDI = (r32((uint32_t)(0x120fd03c)));
  /* 120f9508 je 0x120f9518 */
  if (C.zf) goto L_120f9518;
  /* 120f950a push esi */
  push32((uint32_t)(ESI));
  /* 120f950b call edi */
  call_ind((uint32_t)(EDI), 0x120f950du);
  /* 120f950d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120f950f call 0x120f6edc */
  push32(0x120f9514u); f_120f6edc();
  /* 120f9514 pop ecx */
  ECX = (pop32());
  /* 120f9515 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9517 pop ebx */
  EBX = (pop32());
L_120f9518:;
  /* 120f9518 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120f951c call 0x120f953f */
  push32(0x120f9521u); f_120f953f();
  /* 120f9521 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f9523 pop ecx */
  ECX = (pop32());
  /* 120f9524 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 120f9528 je 0x120f9534 */
  if (C.zf) goto L_120f9534;
  /* 120f952a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120f952c call 0x120f6f3d */
  push32(0x120f9531u); f_120f6f3d();
  /* 120f9531 pop ecx */
  ECX = (pop32());
  /* 120f9532 jmp 0x120f9537 */
  goto L_120f9537;
L_120f9534:;
  /* 120f9534 push esi */
  push32((uint32_t)(ESI));
  /* 120f9535 call edi */
  call_ind((uint32_t)(EDI), 0x120f9537u);
L_120f9537:;
  /* 120f9537 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120f953b pop edi */
  EDI = (pop32());
  /* 120f953c pop esi */
  ESI = (pop32());
L_120f953d:;
  /* 120f953d pop ebx */
  EBX = (pop32());
  /* 120f953e ret  */
  ESPCHK(0x120f94d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000953f @ 0x120f953f (203 bytes, 78 insns) */
void f_120f953f(void) {
  FTRACE(0x120f953fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f953f push ebp */
  push32((uint32_t)(EBP));
  /* 120f9540 mov ebp, esp */
  EBP = (ESP);
  /* 120f9542 push ecx */
  push32((uint32_t)(ECX));
  /* 120f9543 cmp dword ptr [0x12104150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f954a push ebx */
  push32((uint32_t)(EBX));
  /* 120f954b push esi */
  push32((uint32_t)(ESI));
  /* 120f954c push edi */
  push32((uint32_t)(EDI));
  /* 120f954d jne 0x120f956c */
  if (!C.zf) goto L_120f956c;
  /* 120f954f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9552 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9555 jl 0x120f9605 */
  if ((C.sf!=C.of)) goto L_120f9605;
  /* 120f955b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f955e jg 0x120f9605 */
  if ((!C.zf&&C.sf==C.of)) goto L_120f9605;
  /* 120f9564 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9567 jmp 0x120f9605 */
  goto L_120f9605;
L_120f956c:;
  /* 120f956c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f956f mov edi, 0x100 */
  EDI = (0x100u);
  /* 120f9574 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9576 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9578 pop esi */
  ESI = (pop32());
  /* 120f9579 jge 0x120f95a0 */
  if ((C.sf==C.of)) goto L_120f95a0;
  /* 120f957b cmp dword ptr [0x121033c0], esi */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9581 jle 0x120f958e */
  if ((C.zf||C.sf!=C.of)) goto L_120f958e;
  /* 120f9583 push esi */
  push32((uint32_t)(ESI));
  /* 120f9584 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9585 call 0x120f945b */
  push32(0x120f958au); f_120f945b();
  /* 120f958a pop ecx */
  ECX = (pop32());
  /* 120f958b pop ecx */
  ECX = (pop32());
  /* 120f958c jmp 0x120f9598 */
  goto L_120f9598;
L_120f958e:;
  /* 120f958e mov eax, dword ptr [0x121031b0] */
  EAX = (r32((uint32_t)(0x121031b0)));
  /* 120f9593 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 120f9596 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_120f9598:;
  /* 120f9598 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f959a jne 0x120f95a0 */
  if (!C.zf) goto L_120f95a0;
L_120f959c:;
  /* 120f959c mov eax, ebx */
  EAX = (EBX);
  /* 120f959e jmp 0x120f9605 */
  goto L_120f9605;
L_120f95a0:;
  /* 120f95a0 mov edx, dword ptr [0x121031b0] */
  EDX = (r32((uint32_t)(0x121031b0)));
  /* 120f95a6 mov eax, ebx */
  EAX = (EBX);
  /* 120f95a8 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120f95ab movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 120f95ae test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 120f95b3 je 0x120f95c4 */
  if (C.zf) goto L_120f95c4;
  /* 120f95b5 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 120f95b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f95bb mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 120f95be mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 120f95c1 pop eax */
  EAX = (pop32());
  /* 120f95c2 jmp 0x120f95cd */
  goto L_120f95cd;
L_120f95c4:;
  /* 120f95c4 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 120f95c8 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 120f95cb mov eax, esi */
  EAX = (ESI);
L_120f95cd:;
  /* 120f95cd push esi */
  push32((uint32_t)(ESI));
  /* 120f95ce push 0 */
  push32((uint32_t)(0x0u));
  /* 120f95d0 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120f95d3 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f95d5 push ecx */
  push32((uint32_t)(ECX));
  /* 120f95d6 push eax */
  push32((uint32_t)(EAX));
  /* 120f95d7 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120f95da push eax */
  push32((uint32_t)(EAX));
  /* 120f95db push edi */
  push32((uint32_t)(EDI));
  /* 120f95dc push dword ptr [0x12104150] */
  push32((uint32_t)(r32((uint32_t)(0x12104150))));
  /* 120f95e2 call 0x120fae01 */
  push32(0x120f95e7u); f_120fae01();
  /* 120f95e7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f95ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f95ec je 0x120f959c */
  if (C.zf) goto L_120f959c;
  /* 120f95ee cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f95f0 jne 0x120f95f8 */
  if (!C.zf) goto L_120f95f8;
  /* 120f95f2 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120f95f6 jmp 0x120f9605 */
  goto L_120f9605;
L_120f95f8:;
  /* 120f95f8 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 120f95fc movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120f9600 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120f9603 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_120f9605:;
  /* 120f9605 pop edi */
  EDI = (pop32());
  /* 120f9606 pop esi */
  ESI = (pop32());
  /* 120f9607 pop ebx */
  EBX = (pop32());
  /* 120f9608 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9609 ret  */
  ESPCHK(0x120f953fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000960a @ 0x120f960a (73 bytes, 36 insns) */
void f_120f960a(void) {
  FTRACE(0x120f960au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f960a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f960e push esi */
  push32((uint32_t)(ESI));
  /* 120f960f push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f9611 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f9612 pop ecx */
  ECX = (pop32());
  /* 120f9613 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f9615 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120f9617 mov esi, eax */
  ESI = (EAX);
  /* 120f9619 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120f961d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f961e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f9620 pop ecx */
  ECX = (pop32());
  /* 120f9621 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9625 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9627 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f962a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f962c not edx */
  EDX = (~(EDX));
  /* 120f962e test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 120f9631 jne 0x120f964f */
  if (!C.zf) goto L_120f964f;
  /* 120f9633 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f9634 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9637 jge 0x120f964a */
  if ((C.sf==C.of)) goto L_120f964a;
  /* 120f9639 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_120f963c:;
  /* 120f963c cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f963f jne 0x120f964f */
  if (!C.zf) goto L_120f964f;
  /* 120f9641 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120f9642 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9645 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9648 jl 0x120f963c */
  if ((C.sf!=C.of)) goto L_120f963c;
L_120f964a:;
  /* 120f964a push 1 */
  push32((uint32_t)(0x1u));
  /* 120f964c pop eax */
  EAX = (pop32());
  /* 120f964d pop esi */
  ESI = (pop32());
  /* 120f964e ret  */
  ESPCHK(0x120f960au, _esp0);
  ESP += 4; return;
L_120f964f:;
  /* 120f964f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9651 pop esi */
  ESI = (pop32());
  /* 120f9652 ret  */
  ESPCHK(0x120f960au, _esp0);
  ESP += 4; return;
}

/* FUN_10009653 @ 0x120f9653 (86 bytes, 43 insns) */
void f_120f9653(void) {
  FTRACE(0x120f9653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9653 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9657 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9658 push esi */
  push32((uint32_t)(ESI));
  /* 120f9659 push edi */
  push32((uint32_t)(EDI));
  /* 120f965a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f965c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f9660 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f9661 pop ecx */
  ECX = (pop32());
  /* 120f9662 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f9664 mov esi, eax */
  ESI = (EAX);
  /* 120f9666 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 120f966a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f966b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f966d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 120f9670 push edi */
  push32((uint32_t)(EDI));
  /* 120f9671 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120f9673 pop ecx */
  ECX = (pop32());
  /* 120f9674 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9676 pop eax */
  EAX = (pop32());
  /* 120f9677 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9679 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120f967b push eax */
  push32((uint32_t)(EAX));
  /* 120f967c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 120f967e call 0x120fb025 */
  push32(0x120f9683u); f_120fb025();
  /* 120f9683 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9686 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f9687 js 0x120f96a5 */
  if (C.sf) goto L_120f96a5;
  /* 120f9689 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_120f968c:;
  /* 120f968c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f968e je 0x120f96a5 */
  if (C.zf) goto L_120f96a5;
  /* 120f9690 push edi */
  push32((uint32_t)(EDI));
  /* 120f9691 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9693 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 120f9695 call 0x120fb025 */
  push32(0x120f969au); f_120fb025();
  /* 120f969a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f969d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120f969e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f96a1 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120f96a3 jge 0x120f968c */
  if ((C.sf==C.of)) goto L_120f968c;
L_120f96a5:;
  /* 120f96a5 pop edi */
  EDI = (pop32());
  /* 120f96a6 pop esi */
  ESI = (pop32());
  /* 120f96a7 pop ebx */
  EBX = (pop32());
  /* 120f96a8 ret  */
  ESPCHK(0x120f9653u, _esp0);
  ESP += 4; return;
}

/* FUN_100096a9 @ 0x120f96a9 (140 bytes, 71 insns) */
void f_120f96a9(void) {
  FTRACE(0x120f96a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f96a9 push ebp */
  push32((uint32_t)(EBP));
  /* 120f96aa mov ebp, esp */
  EBP = (ESP);
  /* 120f96ac push ecx */
  push32((uint32_t)(ECX));
  /* 120f96ad push ecx */
  push32((uint32_t)(ECX));
  /* 120f96ae mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f96b1 push ebx */
  push32((uint32_t)(EBX));
  /* 120f96b2 push esi */
  push32((uint32_t)(ESI));
  /* 120f96b3 push edi */
  push32((uint32_t)(EDI));
  /* 120f96b4 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 120f96b7 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f96b9 pop ecx */
  ECX = (pop32());
  /* 120f96ba and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f96be lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 120f96c1 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f96c3 mov eax, ebx */
  EAX = (EBX);
  /* 120f96c5 pop esi */
  ESI = (pop32());
  /* 120f96c6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f96c7 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f96c9 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120f96cb mov ecx, eax */
  ECX = (EAX);
  /* 120f96cd mov eax, ebx */
  EAX = (EBX);
  /* 120f96cf cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f96d0 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f96d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f96d5 pop esi */
  ESI = (pop32());
  /* 120f96d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f96d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f96db lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 120f96de mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f96e1 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f96e3 pop edx */
  EDX = (pop32());
  /* 120f96e4 mov ecx, esi */
  ECX = (ESI);
  /* 120f96e6 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f96e8 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 120f96ea je 0x120f970d */
  if (C.zf) goto L_120f970d;
  /* 120f96ec inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 120f96ed push ebx */
  push32((uint32_t)(EBX));
  /* 120f96ee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f96f1 call 0x120f960a */
  push32(0x120f96f6u); f_120f960a();
  /* 120f96f6 pop ecx */
  ECX = (pop32());
  /* 120f96f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f96f9 pop ecx */
  ECX = (pop32());
  /* 120f96fa jne 0x120f970a */
  if (!C.zf) goto L_120f970a;
  /* 120f96fc push edi */
  push32((uint32_t)(EDI));
  /* 120f96fd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f9700 call 0x120f9653 */
  push32(0x120f9705u); f_120f9653();
  /* 120f9705 pop ecx */
  ECX = (pop32());
  /* 120f9706 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f9709 pop ecx */
  ECX = (pop32());
L_120f970a:;
  /* 120f970a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_120f970d:;
  /* 120f970d or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120f9710 mov ecx, esi */
  ECX = (ESI);
  /* 120f9712 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120f9714 push 3 */
  push32((uint32_t)(0x3u));
  /* 120f9716 pop ecx */
  ECX = (pop32());
  /* 120f9717 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 120f9719 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f971c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f971d cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f971f jge 0x120f972d */
  if ((C.sf==C.of)) goto L_120f972d;
  /* 120f9721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9724 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9726 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 120f9729 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f972b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_120f972d:;
  /* 120f972d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f9730 pop edi */
  EDI = (pop32());
  /* 120f9731 pop esi */
  ESI = (pop32());
  /* 120f9732 pop ebx */
  EBX = (pop32());
  /* 120f9733 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9734 ret  */
  ESPCHK(0x120f96a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009735 @ 0x120f9735 (27 bytes, 13 insns) */
void f_120f9735(void) {
  FTRACE(0x120f9735u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9735 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9739 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f973d push esi */
  push32((uint32_t)(ESI));
  /* 120f973e push 3 */
  push32((uint32_t)(0x3u));
  /* 120f9740 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9742 pop edx */
  EDX = (pop32());
L_120f9743:;
  /* 120f9743 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 120f9745 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 120f9748 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f974b dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f974c jne 0x120f9743 */
  if (!C.zf) goto L_120f9743;
  /* 120f974e pop esi */
  ESI = (pop32());
  /* 120f974f ret  */
  ESPCHK(0x120f9735u, _esp0);
  ESP += 4; return;
}

/* FUN_10009750 @ 0x120f9750 (12 bytes, 8 insns) */
void f_120f9750(void) {
  FTRACE(0x120f9750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9750 push edi */
  push32((uint32_t)(EDI));
  /* 120f9751 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9757 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9758 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9759 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f975a pop edi */
  EDI = (pop32());
  /* 120f975b ret  */
  ESPCHK(0x120f9750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000975c @ 0x120f975c (27 bytes, 13 insns) */
void f_120f975c(void) {
  FTRACE(0x120f975cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f975c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9760 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_120f9762:;
  /* 120f9762 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9765 jne 0x120f9774 */
  if (!C.zf) goto L_120f9774;
  /* 120f9767 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9768 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f976b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f976e jl 0x120f9762 */
  if ((C.sf!=C.of)) goto L_120f9762;
  /* 120f9770 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9772 pop eax */
  EAX = (pop32());
  /* 120f9773 ret  */
  ESPCHK(0x120f975cu, _esp0);
  ESP += 4; return;
L_120f9774:;
  /* 120f9774 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9776 ret  */
  ESPCHK(0x120f975cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009777 @ 0x120f9777 (141 bytes, 64 insns) */
void f_120f9777(void) {
  FTRACE(0x120f9777u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9777 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9778 mov ebp, esp */
  EBP = (ESP);
  /* 120f977a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f977d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9780 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9781 push esi */
  push32((uint32_t)(ESI));
  /* 120f9782 push edi */
  push32((uint32_t)(EDI));
  /* 120f9783 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 120f9785 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9788 pop ebx */
  EBX = (pop32());
  /* 120f9789 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 120f978c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f978d mov ecx, ebx */
  ECX = (EBX);
  /* 120f978f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 120f9796 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f9798 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120f979b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f979e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120f979f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120f97a1 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 120f97a5 mov ecx, edx */
  ECX = (EDX);
  /* 120f97a7 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f97a9 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f97ab not esi */
  ESI = (~(ESI));
L_120f97ad:;
  /* 120f97ad mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120f97af mov ecx, eax */
  ECX = (EAX);
  /* 120f97b1 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 120f97b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f97b6 mov ecx, edx */
  ECX = (EDX);
  /* 120f97b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120f97ba or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 120f97bd mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120f97bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f97c2 mov ecx, ebx */
  ECX = (EBX);
  /* 120f97c4 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f97c7 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120f97c9 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 120f97cc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f97cf jne 0x120f97ad */
  if (!C.zf) goto L_120f97ad;
  /* 120f97d1 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 120f97d4 push 2 */
  push32((uint32_t)(0x2u));
  /* 120f97d6 pop ebx */
  EBX = (pop32());
  /* 120f97d7 mov esi, edi */
  ESI = (EDI);
  /* 120f97d9 push 8 */
  push32((uint32_t)(0x8u));
  /* 120f97db pop ecx */
  ECX = (pop32());
  /* 120f97dc shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_120f97df:;
  /* 120f97df cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f97e1 jl 0x120f97f2 */
  if ((C.sf!=C.of)) goto L_120f97f2;
  /* 120f97e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f97e6 mov eax, ecx */
  EAX = (ECX);
  /* 120f97e8 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f97ea mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 120f97ed mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 120f97f0 jmp 0x120f97f9 */
  goto L_120f97f9;
L_120f97f2:;
  /* 120f97f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f97f5 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_120f97f9:;
  /* 120f97f9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120f97fa sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f97fd jns 0x120f97df */
  if (!C.sf) goto L_120f97df;
  /* 120f97ff pop edi */
  EDI = (pop32());
  /* 120f9800 pop esi */
  ESI = (pop32());
  /* 120f9801 pop ebx */
  EBX = (pop32());
  /* 120f9802 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9803 ret  */
  ESPCHK(0x120f9777u, _esp0);
  ESP += 4; return;
}

/* FUN_10009804 @ 0x120f9804 (364 bytes, 138 insns) */
void f_120f9804(void) {
  FTRACE(0x120f9804u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9804 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9805 mov ebp, esp */
  EBP = (ESP);
  /* 120f9807 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f980a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f980d push ebx */
  push32((uint32_t)(EBX));
  /* 120f980e push esi */
  push32((uint32_t)(ESI));
  /* 120f980f push edi */
  push32((uint32_t)(EDI));
  /* 120f9810 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 120f9814 mov ebx, ecx */
  EBX = (ECX);
  /* 120f9816 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120f981c mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 120f981f mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 120f9822 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120f9825 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 120f9828 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 120f982b mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f982e and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 120f9834 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f983a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120f983d shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120f9840 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120f9849 jne 0x120f9871 */
  if (!C.zf) goto L_120f9871;
  /* 120f984b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f984e xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f9850 push eax */
  push32((uint32_t)(EAX));
  /* 120f9851 call 0x120f975c */
  push32(0x120f9856u); f_120f975c();
  /* 120f9856 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f9858 pop ecx */
  ECX = (pop32());
  /* 120f9859 jne 0x120f9930 */
  if (!C.zf) goto L_120f9930;
  /* 120f985f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9862 push eax */
  push32((uint32_t)(EAX));
  /* 120f9863 call 0x120f9750 */
  push32(0x120f9868u); f_120f9750();
  /* 120f9868 pop ecx */
  ECX = (pop32());
L_120f9869:;
  /* 120f9869 push 2 */
  push32((uint32_t)(0x2u));
L_120f986b:;
  /* 120f986b pop eax */
  EAX = (pop32());
  /* 120f986c jmp 0x120f9932 */
  goto L_120f9932;
L_120f9871:;
  /* 120f9871 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9874 push eax */
  push32((uint32_t)(EAX));
  /* 120f9875 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120f9878 push eax */
  push32((uint32_t)(EAX));
  /* 120f9879 call 0x120f9735 */
  push32(0x120f987eu); f_120f9735();
  /* 120f987e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 120f9881 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9884 push eax */
  push32((uint32_t)(EAX));
  /* 120f9885 call 0x120f96a9 */
  push32(0x120f988au); f_120f96a9();
  /* 120f988a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f988d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120f988f je 0x120f9892 */
  if (C.zf) goto L_120f9892;
  /* 120f9891 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_120f9892:;
  /* 120f9892 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 120f9895 mov ecx, eax */
  ECX = (EAX);
  /* 120f9897 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f989a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f989c jge 0x120f98aa */
  if ((C.sf==C.of)) goto L_120f98aa;
  /* 120f989e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98a1 push eax */
  push32((uint32_t)(EAX));
  /* 120f98a2 call 0x120f9750 */
  push32(0x120f98a7u); f_120f9750();
  /* 120f98a7 pop ecx */
  ECX = (pop32());
  /* 120f98a8 jmp 0x120f98e6 */
  goto L_120f98e6;
L_120f98aa:;
  /* 120f98aa cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f98ac jg 0x120f98ed */
  if ((!C.zf&&C.sf==C.of)) goto L_120f98ed;
  /* 120f98ae sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f98b0 mov esi, eax */
  ESI = (EAX);
  /* 120f98b2 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120f98b5 push eax */
  push32((uint32_t)(EAX));
  /* 120f98b6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98b9 push eax */
  push32((uint32_t)(EAX));
  /* 120f98ba call 0x120f9735 */
  push32(0x120f98bfu); f_120f9735();
  /* 120f98bf lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98c2 push esi */
  push32((uint32_t)(ESI));
  /* 120f98c3 push eax */
  push32((uint32_t)(EAX));
  /* 120f98c4 call 0x120f9777 */
  push32(0x120f98c9u); f_120f9777();
  /* 120f98c9 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 120f98cc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98cf push eax */
  push32((uint32_t)(EAX));
  /* 120f98d0 call 0x120f96a9 */
  push32(0x120f98d5u); f_120f96a9();
  /* 120f98d5 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 120f98d8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f98d9 push eax */
  push32((uint32_t)(EAX));
  /* 120f98da lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98dd push eax */
  push32((uint32_t)(EAX));
  /* 120f98de call 0x120f9777 */
  push32(0x120f98e3u); f_120f9777();
  /* 120f98e3 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f98e6:;
  /* 120f98e6 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f98e8 jmp 0x120f9869 */
  goto L_120f9869;
L_120f98ed:;
  /* 120f98ed cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f98ef jl 0x120f9919 */
  if ((C.sf!=C.of)) goto L_120f9919;
  /* 120f98f1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f98f4 push eax */
  push32((uint32_t)(EAX));
  /* 120f98f5 call 0x120f9750 */
  push32(0x120f98fau); f_120f9750();
  /* 120f98fa push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 120f98fd or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 120f9901 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9904 push eax */
  push32((uint32_t)(EAX));
  /* 120f9905 call 0x120f9777 */
  push32(0x120f990au); f_120f9777();
  /* 120f990a mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 120f990d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9910 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9912 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9914 jmp 0x120f986b */
  goto L_120f986b;
L_120f9919:;
  /* 120f9919 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 120f991c mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 120f991f and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 120f9923 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9926 push eax */
  push32((uint32_t)(EAX));
  /* 120f9927 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9929 call 0x120f9777 */
  push32(0x120f992eu); f_120f9777();
  /* 120f992e pop ecx */
  ECX = (pop32());
  /* 120f992f pop ecx */
  ECX = (pop32());
L_120f9930:;
  /* 120f9930 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120f9932:;
  /* 120f9932 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 120f9934 pop ecx */
  ECX = (pop32());
  /* 120f9935 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9938 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 120f993b shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 120f993d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9940 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f9942 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9944 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120f994a or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 120f994c or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 120f994f cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9952 jne 0x120f9961 */
  if (!C.zf) goto L_120f9961;
  /* 120f9954 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9957 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120f995a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 120f995d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120f995f jmp 0x120f996b */
  goto L_120f996b;
L_120f9961:;
  /* 120f9961 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9964 jne 0x120f996b */
  if (!C.zf) goto L_120f996b;
  /* 120f9966 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9969 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_120f996b:;
  /* 120f996b pop edi */
  EDI = (pop32());
  /* 120f996c pop esi */
  ESI = (pop32());
  /* 120f996d pop ebx */
  EBX = (pop32());
  /* 120f996e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f996f ret  */
  ESPCHK(0x120f9804u, _esp0);
  ESP += 4; return;
}

/* FUN_10009970 @ 0x120f9970 (22 bytes, 6 insns) */
void f_120f9970(void) {
  FTRACE(0x120f9970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9970 push 0x121033d0 */
  push32((uint32_t)(0x121033d0u));
  /* 120f9975 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f9979 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f997d call 0x120f9804 */
  push32(0x120f9982u); f_120f9804();
  /* 120f9982 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9985 ret  */
  ESPCHK(0x120f9970u, _esp0);
  ESP += 4; return;
}

/* FUN_10009986 @ 0x120f9986 (22 bytes, 6 insns) */
void f_120f9986(void) {
  FTRACE(0x120f9986u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9986 push 0x121033e8 */
  push32((uint32_t)(0x121033e8u));
  /* 120f998b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f998f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 120f9993 call 0x120f9804 */
  push32(0x120f9998u); f_120f9804();
  /* 120f9998 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f999b ret  */
  ESPCHK(0x120f9986u, _esp0);
  ESP += 4; return;
}

/* FUN_1000999c @ 0x120f999c (45 bytes, 21 insns) */
void f_120f999c(void) {
  FTRACE(0x120f999cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f999c push ebp */
  push32((uint32_t)(EBP));
  /* 120f999d mov ebp, esp */
  EBP = (ESP);
  /* 120f999f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f99a2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f99a4 push eax */
  push32((uint32_t)(EAX));
  /* 120f99a5 push eax */
  push32((uint32_t)(EAX));
  /* 120f99a6 push eax */
  push32((uint32_t)(EAX));
  /* 120f99a7 push eax */
  push32((uint32_t)(EAX));
  /* 120f99a8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f99ab lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 120f99ae push eax */
  push32((uint32_t)(EAX));
  /* 120f99af lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f99b2 push eax */
  push32((uint32_t)(EAX));
  /* 120f99b3 call 0x120fb1c6 */
  push32(0x120f99b8u); f_120fb1c6();
  /* 120f99b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f99bb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f99be push eax */
  push32((uint32_t)(EAX));
  /* 120f99bf call 0x120f9970 */
  push32(0x120f99c4u); f_120f9970();
  /* 120f99c4 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f99c7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f99c8 ret  */
  ESPCHK(0x120f999cu, _esp0);
  ESP += 4; return;
}

/* FUN_100099c9 @ 0x120f99c9 (45 bytes, 21 insns) */
void f_120f99c9(void) {
  FTRACE(0x120f99c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f99c9 push ebp */
  push32((uint32_t)(EBP));
  /* 120f99ca mov ebp, esp */
  EBP = (ESP);
  /* 120f99cc sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f99cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f99d1 push eax */
  push32((uint32_t)(EAX));
  /* 120f99d2 push eax */
  push32((uint32_t)(EAX));
  /* 120f99d3 push eax */
  push32((uint32_t)(EAX));
  /* 120f99d4 push eax */
  push32((uint32_t)(EAX));
  /* 120f99d5 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120f99d8 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 120f99db push eax */
  push32((uint32_t)(EAX));
  /* 120f99dc lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f99df push eax */
  push32((uint32_t)(EAX));
  /* 120f99e0 call 0x120fb1c6 */
  push32(0x120f99e5u); f_120fb1c6();
  /* 120f99e5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f99e8 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f99eb push eax */
  push32((uint32_t)(EAX));
  /* 120f99ec call 0x120f9986 */
  push32(0x120f99f1u); f_120f9986();
  /* 120f99f1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f99f4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f99f5 ret  */
  ESPCHK(0x120f99c9u, _esp0);
  ESP += 4; return;
}

/* FUN_100099f6 @ 0x120f99f6 (119 bytes, 57 insns) */
void f_120f99f6(void) {
  FTRACE(0x120f99f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f99f6 push ebp */
  push32((uint32_t)(EBP));
  /* 120f99f7 mov ebp, esp */
  EBP = (ESP);
  /* 120f99f9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120f99fc push ebx */
  push32((uint32_t)(EBX));
  /* 120f99fd mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9a00 push esi */
  push32((uint32_t)(ESI));
  /* 120f9a01 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9a04 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 120f9a07 push edi */
  push32((uint32_t)(EDI));
  /* 120f9a08 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 120f9a0b mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 120f9a0e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f9a10 mov eax, edi */
  EAX = (EDI);
  /* 120f9a12 jle 0x120f9a33 */
  if ((C.zf||C.sf!=C.of)) goto L_120f9a33;
  /* 120f9a14 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f9a17 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120f9a19:;
  /* 120f9a19 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120f9a1b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f9a1d je 0x120f9a25 */
  if (C.zf) goto L_120f9a25;
  /* 120f9a1f movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 120f9a22 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9a23 jmp 0x120f9a28 */
  goto L_120f9a28;
L_120f9a25:;
  /* 120f9a25 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 120f9a27 pop edx */
  EDX = (pop32());
L_120f9a28:;
  /* 120f9a28 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120f9a2a inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9a2b dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 120f9a2e jne 0x120f9a19 */
  if (!C.zf) goto L_120f9a19;
  /* 120f9a30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_120f9a33:;
  /* 120f9a33 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 120f9a36 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f9a38 jl 0x120f9a4c */
  if ((C.sf!=C.of)) goto L_120f9a4c;
  /* 120f9a3a cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9a3d jl 0x120f9a4c */
  if ((C.sf!=C.of)) goto L_120f9a4c;
L_120f9a3f:;
  /* 120f9a3f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f9a40 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9a43 jne 0x120f9a4a */
  if (!C.zf) goto L_120f9a4a;
  /* 120f9a45 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 120f9a48 jmp 0x120f9a3f */
  goto L_120f9a3f;
L_120f9a4a:;
  /* 120f9a4a inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_120f9a4c:;
  /* 120f9a4c cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9a4f jne 0x120f9a56 */
  if (!C.zf) goto L_120f9a56;
  /* 120f9a51 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 120f9a54 jmp 0x120f9a68 */
  goto L_120f9a68;
L_120f9a56:;
  /* 120f9a56 push edi */
  push32((uint32_t)(EDI));
  /* 120f9a57 call 0x120f9190 */
  push32(0x120f9a5cu); f_120f9190();
  /* 120f9a5c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9a5d push eax */
  push32((uint32_t)(EAX));
  /* 120f9a5e push edi */
  push32((uint32_t)(EDI));
  /* 120f9a5f push esi */
  push32((uint32_t)(ESI));
  /* 120f9a60 call 0x120f8950 */
  push32(0x120f9a65u); f_120f8950();
  /* 120f9a65 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120f9a68:;
  /* 120f9a68 pop edi */
  EDI = (pop32());
  /* 120f9a69 pop esi */
  ESI = (pop32());
  /* 120f9a6a pop ebx */
  EBX = (pop32());
  /* 120f9a6b pop ebp */
  EBP = (pop32());
  /* 120f9a6c ret  */
  ESPCHK(0x120f99f6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a6d @ 0x120f9a6d (92 bytes, 41 insns) */
void f_120f9a6d(void) {
  FTRACE(0x120f9a6du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9a6d push ebp */
  push32((uint32_t)(EBP));
  /* 120f9a6e mov ebp, esp */
  EBP = (ESP);
  /* 120f9a70 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9a73 push esi */
  push32((uint32_t)(ESI));
  /* 120f9a74 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120f9a77 push edi */
  push32((uint32_t)(EDI));
  /* 120f9a78 push eax */
  push32((uint32_t)(EAX));
  /* 120f9a79 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120f9a7c push eax */
  push32((uint32_t)(EAX));
  /* 120f9a7d call 0x120f9ac9 */
  push32(0x120f9a82u); f_120f9ac9();
  /* 120f9a82 pop ecx */
  ECX = (pop32());
  /* 120f9a83 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120f9a86 pop ecx */
  ECX = (pop32());
  /* 120f9a87 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 120f9a8a push eax */
  push32((uint32_t)(EAX));
  /* 120f9a8b push 0 */
  push32((uint32_t)(0x0u));
  /* 120f9a8d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120f9a8f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9a92 mov edi, esp */
  EDI = (ESP);
  /* 120f9a94 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f9a95 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f9a96 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 120f9a98 call 0x120fb697 */
  push32(0x120f9a9du); f_120fb697();
  /* 120f9a9d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120f9aa0 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 120f9aa3 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120f9aa6 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 120f9aaa mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120f9aac movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 120f9ab0 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 120f9ab3 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 120f9ab6 push eax */
  push32((uint32_t)(EAX));
  /* 120f9ab7 push edi */
  push32((uint32_t)(EDI));
  /* 120f9ab8 call 0x120f9b80 */
  push32(0x120f9abdu); f_120f9b80();
  /* 120f9abd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9ac0 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 120f9ac3 mov eax, esi */
  EAX = (ESI);
  /* 120f9ac5 pop edi */
  EDI = (pop32());
  /* 120f9ac6 pop esi */
  ESI = (pop32());
  /* 120f9ac7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9ac8 ret  */
  ESPCHK(0x120f9a6du, _esp0);
  ESP += 4; return;
}

/* FUN_10009ac9 @ 0x120f9ac9 (182 bytes, 70 insns) */
void f_120f9ac9(void) {
  FTRACE(0x120f9ac9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9ac9 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9aca mov ebp, esp */
  EBP = (ESP);
  /* 120f9acc push ecx */
  push32((uint32_t)(ECX));
  /* 120f9acd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9ad0 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9ad1 push esi */
  push32((uint32_t)(ESI));
  /* 120f9ad2 push edi */
  push32((uint32_t)(EDI));
  /* 120f9ad3 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 120f9ad7 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 120f9adc mov ecx, eax */
  ECX = (EAX);
  /* 120f9ade and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120f9ae3 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120f9ae6 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f9ae8 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120f9aeb mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120f9aee mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 120f9af0 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 120f9af3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 120f9af8 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f9afd test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f9aff mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 120f9b02 je 0x120f9b17 */
  if (C.zf) goto L_120f9b17;
  /* 120f9b04 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9b06 je 0x120f9b10 */
  if (C.zf) goto L_120f9b10;
  /* 120f9b08 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 120f9b0e jmp 0x120f9b38 */
  goto L_120f9b38;
L_120f9b10:;
  /* 120f9b10 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 120f9b15 jmp 0x120f9b38 */
  goto L_120f9b38;
L_120f9b17:;
  /* 120f9b17 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120f9b19 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9b1b jne 0x120f9b2f */
  if (!C.zf) goto L_120f9b2f;
  /* 120f9b1d cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9b1f jne 0x120f9b2f */
  if (!C.zf) goto L_120f9b2f;
  /* 120f9b21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9b24 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 120f9b27 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 120f9b29 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 120f9b2d jmp 0x120f9b7a */
  goto L_120f9b7a;
L_120f9b2f:;
  /* 120f9b2f lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 120f9b35 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_120f9b38:;
  /* 120f9b38 mov ecx, edx */
  ECX = (EDX);
  /* 120f9b3a shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 120f9b3d shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 120f9b40 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120f9b42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9b45 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 120f9b48 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 120f9b4b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120f9b4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120f9b50:;
  /* 120f9b50 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 120f9b52 jne 0x120f9b71 */
  if (!C.zf) goto L_120f9b71;
  /* 120f9b54 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120f9b56 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9b58 mov ebx, edx */
  EBX = (EDX);
  /* 120f9b5a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 120f9b5d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 120f9b5f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 120f9b62 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120f9b64 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 120f9b67 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9b6d mov ecx, ebx */
  ECX = (EBX);
  /* 120f9b6f jmp 0x120f9b50 */
  goto L_120f9b50;
L_120f9b71:;
  /* 120f9b71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120f9b74 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120f9b76 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_120f9b7a:;
  /* 120f9b7a pop edi */
  EDI = (pop32());
  /* 120f9b7b pop esi */
  ESI = (pop32());
  /* 120f9b7c pop ebx */
  EBX = (pop32());
  /* 120f9b7d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9b7e ret  */
  ESPCHK(0x120f9ac9u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b80 @ 0x120f9b80 (7 bytes, 3 insns) */
void f_120f9b80(void) {
  FTRACE(0x120f9b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9b80 push edi */
  push32((uint32_t)(EDI));
  /* 120f9b81 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9b85 jmp 0x120f9bf1 */
  jmp_ind(0x120f9bf1u); return;
}

/* FUN_10009b90 @ 0x120f9b90 (224 bytes, 84 insns) */
void f_120f9b90(void) {
  FTRACE(0x120f9b90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9b90 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9b94 push edi */
  push32((uint32_t)(EDI));
  /* 120f9b95 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f9b9b je 0x120f9bac */
  if (C.zf) goto L_120f9bac;
L_120f9b9d:;
  /* 120f9b9d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120f9b9f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9ba0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f9ba2 je 0x120f9bdf */
  if (C.zf) goto L_120f9bdf;
  /* 120f9ba4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f9baa jne 0x120f9b9d */
  if (!C.zf) goto L_120f9b9d;
L_120f9bac:;
  /* 120f9bac mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120f9bae mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120f9bb3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9bb5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f9bb8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9bba add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9bbd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120f9bc2 je 0x120f9bac */
  if (C.zf) goto L_120f9bac;
  /* 120f9bc4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 120f9bc7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f9bc9 je 0x120f9bee */
  if (C.zf) goto L_120f9bee;
  /* 120f9bcb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120f9bcd je 0x120f9be9 */
  if (C.zf) goto L_120f9be9;
  /* 120f9bcf test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 120f9bd4 je 0x120f9be4 */
  if (C.zf) goto L_120f9be4;
  /* 120f9bd6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 120f9bdb je 0x120f9bdf */
  if (C.zf) goto L_120f9bdf;
  /* 120f9bdd jmp 0x120f9bac */
  goto L_120f9bac;
L_120f9bdf:;
  /* 120f9bdf lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 120f9be2 jmp 0x120f9bf1 */
  goto L_120f9bf1;
L_120f9be4:;
  /* 120f9be4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 120f9be7 jmp 0x120f9bf1 */
  goto L_120f9bf1;
L_120f9be9:;
  /* 120f9be9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 120f9bec jmp 0x120f9bf1 */
  goto L_120f9bf1;
L_120f9bee:;
  /* 120f9bee lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_120f9bf1:;
  /* 120f9bf1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f9bf5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f9bfb je 0x120f9c16 */
  if (C.zf) goto L_120f9c16;
L_120f9bfd:;
  /* 120f9bfd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120f9bff inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9c00 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f9c02 je 0x120f9c68 */
  if (C.zf) goto L_120f9c68;
  /* 120f9c04 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120f9c06 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f9c07 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120f9c0d jne 0x120f9bfd */
  if (!C.zf) goto L_120f9bfd;
  /* 120f9c0f jmp 0x120f9c16 */
  goto L_120f9c16;
L_120f9c11:;
  /* 120f9c11 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120f9c13 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120f9c16:;
  /* 120f9c16 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120f9c1b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120f9c1d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9c1f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120f9c22 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9c24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120f9c26 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9c29 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120f9c2e je 0x120f9c11 */
  if (C.zf) goto L_120f9c11;
  /* 120f9c30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f9c32 je 0x120f9c68 */
  if (C.zf) goto L_120f9c68;
  /* 120f9c34 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120f9c36 je 0x120f9c5f */
  if (C.zf) goto L_120f9c5f;
  /* 120f9c38 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 120f9c3e je 0x120f9c52 */
  if (C.zf) goto L_120f9c52;
  /* 120f9c40 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 120f9c46 je 0x120f9c4a */
  if (C.zf) goto L_120f9c4a;
  /* 120f9c48 jmp 0x120f9c11 */
  goto L_120f9c11;
L_120f9c4a:;
  /* 120f9c4a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120f9c4c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9c50 pop edi */
  EDI = (pop32());
  /* 120f9c51 ret  */
  ESPCHK(0x120f9b90u, _esp0);
  ESP += 4; return;
L_120f9c52:;
  /* 120f9c52 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 120f9c55 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9c59 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 120f9c5d pop edi */
  EDI = (pop32());
  /* 120f9c5e ret  */
  ESPCHK(0x120f9b90u, _esp0);
  ESP += 4; return;
L_120f9c5f:;
  /* 120f9c5f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 120f9c62 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9c66 pop edi */
  EDI = (pop32());
  /* 120f9c67 ret  */
  ESPCHK(0x120f9b90u, _esp0);
  ESP += 4; return;
L_120f9c68:;
  /* 120f9c68 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120f9c6a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9c6e pop edi */
  EDI = (pop32());
  /* 120f9c6f ret  */
  ESPCHK(0x120f9b90u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x120f9c70 (88 bytes, 40 insns) */
void f_120f9c70(void) {
  FTRACE(0x120f9c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9c70 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 120f9c74 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9c78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f9c7a je 0x120f9cc3 */
  if (C.zf) goto L_120f9cc3;
  /* 120f9c7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9c7e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 120f9c82 push edi */
  push32((uint32_t)(EDI));
  /* 120f9c83 mov edi, ecx */
  EDI = (ECX);
  /* 120f9c85 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9c88 jb 0x120f9cb7 */
  if (C.cf) goto L_120f9cb7;
  /* 120f9c8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120f9c8c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 120f9c8f je 0x120f9c99 */
  if (C.zf) goto L_120f9c99;
  /* 120f9c91 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_120f9c93:;
  /* 120f9c93 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f9c95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f9c96 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120f9c97 jne 0x120f9c93 */
  if (!C.zf) goto L_120f9c93;
L_120f9c99:;
  /* 120f9c99 mov ecx, eax */
  ECX = (EAX);
  /* 120f9c9b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120f9c9e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9ca0 mov ecx, eax */
  ECX = (EAX);
  /* 120f9ca2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120f9ca5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9ca7 mov ecx, edx */
  ECX = (EDX);
  /* 120f9ca9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120f9cac shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f9caf je 0x120f9cb7 */
  if (C.zf) goto L_120f9cb7;
  /* 120f9cb1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120f9cb3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120f9cb5 je 0x120f9cbd */
  if (C.zf) goto L_120f9cbd;
L_120f9cb7:;
  /* 120f9cb7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120f9cb9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120f9cba dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120f9cbb jne 0x120f9cb7 */
  if (!C.zf) goto L_120f9cb7;
L_120f9cbd:;
  /* 120f9cbd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120f9cc1 pop edi */
  EDI = (pop32());
  /* 120f9cc2 ret  */
  ESPCHK(0x120f9c70u, _esp0);
  ESP += 4; return;
L_120f9cc3:;
  /* 120f9cc3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9cc7 ret  */
  ESPCHK(0x120f9c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009cd1 @ 0x120f9cd1 (429 bytes, 143 insns) */
void f_120f9cd1(void) {
  FTRACE(0x120f9cd1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9cd1 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9cd2 mov ebp, esp */
  EBP = (ESP);
  /* 120f9cd4 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9cd7 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9cd8 push esi */
  push32((uint32_t)(ESI));
  /* 120f9cd9 push edi */
  push32((uint32_t)(EDI));
  /* 120f9cda push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120f9cdc call 0x120f6edc */
  push32(0x120f9ce1u); f_120f6edc();
  /* 120f9ce1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120f9ce4 call 0x120f9e7e */
  push32(0x120f9ce9u); f_120f9e7e();
  /* 120f9ce9 mov ebx, eax */
  EBX = (EAX);
  /* 120f9ceb pop ecx */
  ECX = (pop32());
  /* 120f9cec cmp ebx, dword ptr [0x1210421c] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x1210421c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9cf2 pop ecx */
  ECX = (pop32());
  /* 120f9cf3 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 120f9cf6 jne 0x120f9cff */
  if (!C.zf) goto L_120f9cff;
L_120f9cf8:;
  /* 120f9cf8 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120f9cfa jmp 0x120f9e6f */
  goto L_120f9e6f;
L_120f9cff:;
  /* 120f9cff test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120f9d01 je 0x120f9e5d */
  if (C.zf) goto L_120f9e5d;
  /* 120f9d07 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120f9d09 mov eax, 0x12103408 */
  EAX = (0x12103408u);
L_120f9d0e:;
  /* 120f9d0e cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9d10 je 0x120f9d86 */
  if (C.zf) goto L_120f9d86;
  /* 120f9d12 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9d15 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120f9d16 cmp eax, 0x121034f8 */
  { uint32_t _a=(EAX),_b=(0x121034f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9d1b jl 0x120f9d0e */
  if ((C.sf!=C.of)) goto L_120f9d0e;
  /* 120f9d1d lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120f9d20 push eax */
  push32((uint32_t)(EAX));
  /* 120f9d21 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9d22 call dword ptr [0x120fd030] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd030))), 0x120f9d28u);
  /* 120f9d28 push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9d2a pop esi */
  ESI = (pop32());
  /* 120f9d2b cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9d2d jne 0x120f9e54 */
  if (!C.zf) goto L_120f9e54;
  /* 120f9d33 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120f9d35 and dword ptr [0x12104444], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12104444)))&(0x0u); w32((uint32_t)(0x12104444), (_r)); fl_logic(_r,32); }
  /* 120f9d3c pop ecx */
  ECX = (pop32());
  /* 120f9d3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9d3f mov edi, 0x12104340 */
  EDI = (0x12104340u);
  /* 120f9d44 cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9d47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120f9d49 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120f9d4a mov dword ptr [0x1210421c], ebx */
  w32((uint32_t)(0x1210421c), (EBX));
  /* 120f9d50 jbe 0x120f9e41 */
  if ((C.cf||C.zf)) goto L_120f9e41;
  /* 120f9d56 cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9d5a je 0x120f9e1c */
  if (C.zf) goto L_120f9e1c;
  /* 120f9d60 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_120f9d63:;
  /* 120f9d63 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120f9d65 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f9d67 je 0x120f9e1c */
  if (C.zf) goto L_120f9e1c;
  /* 120f9d6d movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 120f9d71 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_120f9d74:;
  /* 120f9d74 cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9d76 ja 0x120f9e10 */
  if ((!C.cf&&!C.zf)) goto L_120f9e10;
  /* 120f9d7c or byte ptr [eax + 0x12104341], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x4u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120f9d83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9d84 jmp 0x120f9d74 */
  goto L_120f9d74;
L_120f9d86:;
  /* 120f9d86 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120f9d8a push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120f9d8c pop ecx */
  ECX = (pop32());
  /* 120f9d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9d8f mov edi, 0x12104340 */
  EDI = (0x12104340u);
  /* 120f9d94 lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 120f9d97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120f9d99 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 120f9d9c stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120f9d9d lea ebx, [esi + 0x12103418] */
  EBX = ((uint32_t)(ESI + 0x12103418));
L_120f9da3:;
  /* 120f9da3 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9da6 mov ecx, ebx */
  ECX = (EBX);
  /* 120f9da8 je 0x120f9dd6 */
  if (C.zf) goto L_120f9dd6;
L_120f9daa:;
  /* 120f9daa mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 120f9dad test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120f9daf je 0x120f9dd6 */
  if (C.zf) goto L_120f9dd6;
  /* 120f9db1 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 120f9db4 movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 120f9db7 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9db9 ja 0x120f9dcf */
  if ((!C.cf&&!C.zf)) goto L_120f9dcf;
  /* 120f9dbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120f9dbe mov dl, byte ptr [edx + 0x12103400] */
  DL = (r8((uint32_t)(EDX + 0x12103400)));
L_120f9dc4:;
  /* 120f9dc4 or byte ptr [eax + 0x12104341], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(DL); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120f9dca inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9dcb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9dcd jbe 0x120f9dc4 */
  if ((C.cf||C.zf)) goto L_120f9dc4;
L_120f9dcf:;
  /* 120f9dcf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9dd0 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9dd1 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9dd4 jne 0x120f9daa */
  if (!C.zf) goto L_120f9daa;
L_120f9dd6:;
  /* 120f9dd6 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120f9dd9 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120f9ddc cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9de0 jb 0x120f9da3 */
  if (C.cf) goto L_120f9da3;
  /* 120f9de2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120f9de5 mov dword ptr [0x1210422c], 1 */
  w32((uint32_t)(0x1210422c), (0x1u));
  /* 120f9def push eax */
  push32((uint32_t)(EAX));
  /* 120f9df0 mov dword ptr [0x1210421c], eax */
  w32((uint32_t)(0x1210421c), (EAX));
  /* 120f9df5 call 0x120f9ec8 */
  push32(0x120f9dfau); f_120f9ec8();
  /* 120f9dfa lea esi, [esi + 0x1210340c] */
  ESI = ((uint32_t)(ESI + 0x1210340c));
  /* 120f9e00 mov edi, 0x12104220 */
  EDI = (0x12104220u);
  /* 120f9e05 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f9e06 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f9e07 pop ecx */
  ECX = (pop32());
  /* 120f9e08 mov dword ptr [0x12104444], eax */
  w32((uint32_t)(0x12104444), (EAX));
  /* 120f9e0d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120f9e0e jmp 0x120f9e62 */
  goto L_120f9e62;
L_120f9e10:;
  /* 120f9e10 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9e11 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9e12 cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120f9e16 jne 0x120f9d63 */
  if (!C.zf) goto L_120f9d63;
L_120f9e1c:;
  /* 120f9e1c mov eax, esi */
  EAX = (ESI);
L_120f9e1e:;
  /* 120f9e1e or byte ptr [eax + 0x12104341], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x8u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120f9e25 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9e26 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9e2b jb 0x120f9e1e */
  if (C.cf) goto L_120f9e1e;
  /* 120f9e2d push ebx */
  push32((uint32_t)(EBX));
  /* 120f9e2e call 0x120f9ec8 */
  push32(0x120f9e33u); f_120f9ec8();
  /* 120f9e33 pop ecx */
  ECX = (pop32());
  /* 120f9e34 mov dword ptr [0x12104444], eax */
  w32((uint32_t)(0x12104444), (EAX));
  /* 120f9e39 mov dword ptr [0x1210422c], esi */
  w32((uint32_t)(0x1210422c), (ESI));
  /* 120f9e3f jmp 0x120f9e48 */
  goto L_120f9e48;
L_120f9e41:;
  /* 120f9e41 and dword ptr [0x1210422c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x1210422c)))&(0x0u); w32((uint32_t)(0x1210422c), (_r)); fl_logic(_r,32); }
L_120f9e48:;
  /* 120f9e48 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9e4a mov edi, 0x12104220 */
  EDI = (0x12104220u);
  /* 120f9e4f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9e50 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9e51 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9e52 jmp 0x120f9e62 */
  goto L_120f9e62;
L_120f9e54:;
  /* 120f9e54 cmp dword ptr [0x12104138], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104138))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9e5b je 0x120f9e6c */
  if (C.zf) goto L_120f9e6c;
L_120f9e5d:;
  /* 120f9e5d call 0x120f9efb */
  push32(0x120f9e62u); f_120f9efb();
L_120f9e62:;
  /* 120f9e62 call 0x120f9f24 */
  push32(0x120f9e67u); f_120f9f24();
  /* 120f9e67 jmp 0x120f9cf8 */
  goto L_120f9cf8;
L_120f9e6c:;
  /* 120f9e6c or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_120f9e6f:;
  /* 120f9e6f push 0x19 */
  push32((uint32_t)(0x19u));
  /* 120f9e71 call 0x120f6f3d */
  push32(0x120f9e76u); f_120f6f3d();
  /* 120f9e76 pop ecx */
  ECX = (pop32());
  /* 120f9e77 mov eax, esi */
  EAX = (ESI);
  /* 120f9e79 pop edi */
  EDI = (pop32());
  /* 120f9e7a pop esi */
  ESI = (pop32());
  /* 120f9e7b pop ebx */
  EBX = (pop32());
  /* 120f9e7c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120f9e7d ret  */
  ESPCHK(0x120f9cd1u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e7e @ 0x120f9e7e (74 bytes, 15 insns) */
void f_120f9e7e(void) {
  FTRACE(0x120f9e7eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9e7e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9e82 and dword ptr [0x12104138], 0 */
  { uint32_t _r=(r32((uint32_t)(0x12104138)))&(0x0u); w32((uint32_t)(0x12104138), (_r)); fl_logic(_r,32); }
  /* 120f9e89 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9e8c jne 0x120f9e9e */
  if (!C.zf) goto L_120f9e9e;
  /* 120f9e8e mov dword ptr [0x12104138], 1 */
  w32((uint32_t)(0x12104138), (0x1u));
  /* 120f9e98 jmp dword ptr [0x120fd034] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120fd034)))); return;
L_120f9e9e:;
  /* 120f9e9e cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9ea1 jne 0x120f9eb3 */
  if (!C.zf) goto L_120f9eb3;
  /* 120f9ea3 mov dword ptr [0x12104138], 1 */
  w32((uint32_t)(0x12104138), (0x1u));
  /* 120f9ead jmp dword ptr [0x120fd02c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x120fd02c)))); return;
L_120f9eb3:;
  /* 120f9eb3 cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9eb6 jne 0x120f9ec7 */
  if (!C.zf) goto L_120f9ec7;
  /* 120f9eb8 mov eax, dword ptr [0x12104160] */
  EAX = (r32((uint32_t)(0x12104160)));
  /* 120f9ebd mov dword ptr [0x12104138], 1 */
  w32((uint32_t)(0x12104138), (0x1u));
L_120f9ec7:;
  /* 120f9ec7 ret  */
  ESPCHK(0x120f9e7eu, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec8 @ 0x120f9ec8 (51 bytes, 19 insns) */
void f_120f9ec8(void) {
  FTRACE(0x120f9ec8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9ec8 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120f9ecc sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9ed1 je 0x120f9ef5 */
  if (C.zf) goto L_120f9ef5;
  /* 120f9ed3 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9ed6 je 0x120f9eef */
  if (C.zf) goto L_120f9eef;
  /* 120f9ed8 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9edb je 0x120f9ee9 */
  if (C.zf) goto L_120f9ee9;
  /* 120f9edd dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120f9ede je 0x120f9ee3 */
  if (C.zf) goto L_120f9ee3;
  /* 120f9ee0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9ee2 ret  */
  ESPCHK(0x120f9ec8u, _esp0);
  ESP += 4; return;
L_120f9ee3:;
  /* 120f9ee3 mov eax, 0x404 */
  EAX = (0x404u);
  /* 120f9ee8 ret  */
  ESPCHK(0x120f9ec8u, _esp0);
  ESP += 4; return;
L_120f9ee9:;
  /* 120f9ee9 mov eax, 0x412 */
  EAX = (0x412u);
  /* 120f9eee ret  */
  ESPCHK(0x120f9ec8u, _esp0);
  ESP += 4; return;
L_120f9eef:;
  /* 120f9eef mov eax, 0x804 */
  EAX = (0x804u);
  /* 120f9ef4 ret  */
  ESPCHK(0x120f9ec8u, _esp0);
  ESP += 4; return;
L_120f9ef5:;
  /* 120f9ef5 mov eax, 0x411 */
  EAX = (0x411u);
  /* 120f9efa ret  */
  ESPCHK(0x120f9ec8u, _esp0);
  ESP += 4; return;
}

/* FUN_10009efb @ 0x120f9efb (41 bytes, 17 insns) */
void f_120f9efb(void) {
  FTRACE(0x120f9efbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9efb push edi */
  push32((uint32_t)(EDI));
  /* 120f9efc push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120f9efe pop ecx */
  ECX = (pop32());
  /* 120f9eff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9f01 mov edi, 0x12104340 */
  EDI = (0x12104340u);
  /* 120f9f06 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120f9f08 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 120f9f09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9f0b mov edi, 0x12104220 */
  EDI = (0x12104220u);
  /* 120f9f10 mov dword ptr [0x1210421c], eax */
  w32((uint32_t)(0x1210421c), (EAX));
  /* 120f9f15 mov dword ptr [0x1210422c], eax */
  w32((uint32_t)(0x1210422c), (EAX));
  /* 120f9f1a mov dword ptr [0x12104444], eax */
  w32((uint32_t)(0x12104444), (EAX));
  /* 120f9f1f stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9f20 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9f21 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 120f9f22 pop edi */
  EDI = (pop32());
  /* 120f9f23 ret  */
  ESPCHK(0x120f9efbu, _esp0);
  ESP += 4; return;
}

/* FUN_10009f24 @ 0x120f9f24 (389 bytes, 124 insns) */
void f_120f9f24(void) {
  FTRACE(0x120f9f24u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120f9f24 push ebp */
  push32((uint32_t)(EBP));
  /* 120f9f25 mov ebp, esp */
  EBP = (ESP);
  /* 120f9f27 sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9f2d lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 120f9f30 push esi */
  push32((uint32_t)(ESI));
  /* 120f9f31 push eax */
  push32((uint32_t)(EAX));
  /* 120f9f32 push dword ptr [0x1210421c] */
  push32((uint32_t)(r32((uint32_t)(0x1210421c))));
  /* 120f9f38 call dword ptr [0x120fd030] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd030))), 0x120f9f3eu);
  /* 120f9f3e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9f41 jne 0x120fa05d */
  if (!C.zf) goto L_120fa05d;
  /* 120f9f47 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120f9f49 mov esi, 0x100 */
  ESI = (0x100u);
L_120f9f4e:;
  /* 120f9f4e mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 120f9f55 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120f9f56 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9f58 jb 0x120f9f4e */
  if (C.cf) goto L_120f9f4e;
  /* 120f9f5a mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 120f9f5d mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 120f9f64 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f9f66 je 0x120f9f9f */
  if (C.zf) goto L_120f9f9f;
  /* 120f9f68 push ebx */
  push32((uint32_t)(EBX));
  /* 120f9f69 push edi */
  push32((uint32_t)(EDI));
  /* 120f9f6a lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_120f9f6d:;
  /* 120f9f6d movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 120f9f70 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 120f9f73 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120f9f75 ja 0x120f9f94 */
  if ((!C.cf&&!C.zf)) goto L_120f9f94;
  /* 120f9f77 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120f9f79 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 120f9f80 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120f9f81 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 120f9f86 mov ebx, ecx */
  EBX = (ECX);
  /* 120f9f88 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120f9f8b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120f9f8d mov ecx, ebx */
  ECX = (EBX);
  /* 120f9f8f and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 120f9f92 rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_120f9f94:;
  /* 120f9f94 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120f9f95 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120f9f96 mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 120f9f99 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120f9f9b jne 0x120f9f6d */
  if (!C.zf) goto L_120f9f6d;
  /* 120f9f9d pop edi */
  EDI = (pop32());
  /* 120f9f9e pop ebx */
  EBX = (pop32());
L_120f9f9f:;
  /* 120f9f9f push 0 */
  push32((uint32_t)(0x0u));
  /* 120f9fa1 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 120f9fa7 push dword ptr [0x12104444] */
  push32((uint32_t)(r32((uint32_t)(0x12104444))));
  /* 120f9fad push dword ptr [0x1210421c] */
  push32((uint32_t)(r32((uint32_t)(0x1210421c))));
  /* 120f9fb3 push eax */
  push32((uint32_t)(EAX));
  /* 120f9fb4 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 120f9fba push esi */
  push32((uint32_t)(ESI));
  /* 120f9fbb push eax */
  push32((uint32_t)(EAX));
  /* 120f9fbc push 1 */
  push32((uint32_t)(0x1u));
  /* 120f9fbe call 0x120facb8 */
  push32(0x120f9fc3u); f_120facb8();
  /* 120f9fc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f9fc5 lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 120f9fcb push dword ptr [0x1210421c] */
  push32((uint32_t)(r32((uint32_t)(0x1210421c))));
  /* 120f9fd1 push esi */
  push32((uint32_t)(ESI));
  /* 120f9fd2 push eax */
  push32((uint32_t)(EAX));
  /* 120f9fd3 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 120f9fd9 push esi */
  push32((uint32_t)(ESI));
  /* 120f9fda push eax */
  push32((uint32_t)(EAX));
  /* 120f9fdb push esi */
  push32((uint32_t)(ESI));
  /* 120f9fdc push dword ptr [0x12104444] */
  push32((uint32_t)(r32((uint32_t)(0x12104444))));
  /* 120f9fe2 call 0x120fae01 */
  push32(0x120f9fe7u); f_120fae01();
  /* 120f9fe7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120f9fe9 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 120f9fef push dword ptr [0x1210421c] */
  push32((uint32_t)(r32((uint32_t)(0x1210421c))));
  /* 120f9ff5 push esi */
  push32((uint32_t)(ESI));
  /* 120f9ff6 push eax */
  push32((uint32_t)(EAX));
  /* 120f9ff7 lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 120f9ffd push esi */
  push32((uint32_t)(ESI));
  /* 120f9ffe push eax */
  push32((uint32_t)(EAX));
  /* 120f9fff push 0x200 */
  push32((uint32_t)(0x200u));
  /* 120fa004 push dword ptr [0x12104444] */
  push32((uint32_t)(r32((uint32_t)(0x12104444))));
  /* 120fa00a call 0x120fae01 */
  push32(0x120fa00fu); f_120fae01();
  /* 120fa00f add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa014 lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_120fa01a:;
  /* 120fa01a mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120fa01d test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 120fa020 je 0x120fa038 */
  if (C.zf) goto L_120fa038;
  /* 120fa022 or byte ptr [eax + 0x12104341], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x10u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120fa029 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_120fa030:;
  /* 120fa030 mov byte ptr [eax + 0x12104240], dl */
  w8((uint32_t)(EAX + 0x12104240), (DL));
  /* 120fa036 jmp 0x120fa054 */
  goto L_120fa054;
L_120fa038:;
  /* 120fa038 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 120fa03b je 0x120fa04d */
  if (C.zf) goto L_120fa04d;
  /* 120fa03d or byte ptr [eax + 0x12104341], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x20u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120fa044 mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 120fa04b jmp 0x120fa030 */
  goto L_120fa030;
L_120fa04d:;
  /* 120fa04d and byte ptr [eax + 0x12104240], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104240)))&(0x0u); w8((uint32_t)(EAX + 0x12104240), (_r)); fl_logic(_r,8); }
L_120fa054:;
  /* 120fa054 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fa055 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120fa056 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120fa057 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa059 jb 0x120fa01a */
  if (C.cf) goto L_120fa01a;
  /* 120fa05b jmp 0x120fa0a6 */
  goto L_120fa0a6;
L_120fa05d:;
  /* 120fa05d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa05f mov esi, 0x100 */
  ESI = (0x100u);
L_120fa064:;
  /* 120fa064 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa067 jb 0x120fa082 */
  if (C.cf) goto L_120fa082;
  /* 120fa069 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa06c ja 0x120fa082 */
  if ((!C.cf&&!C.zf)) goto L_120fa082;
  /* 120fa06e or byte ptr [eax + 0x12104341], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x10u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120fa075 mov cl, al */
  CL = (AL);
  /* 120fa077 add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_120fa07a:;
  /* 120fa07a mov byte ptr [eax + 0x12104240], cl */
  w8((uint32_t)(EAX + 0x12104240), (CL));
  /* 120fa080 jmp 0x120fa0a1 */
  goto L_120fa0a1;
L_120fa082:;
  /* 120fa082 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa085 jb 0x120fa09a */
  if (C.cf) goto L_120fa09a;
  /* 120fa087 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa08a ja 0x120fa09a */
  if ((!C.cf&&!C.zf)) goto L_120fa09a;
  /* 120fa08c or byte ptr [eax + 0x12104341], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104341)))|(0x20u); w8((uint32_t)(EAX + 0x12104341), (_r)); fl_logic(_r,8); }
  /* 120fa093 mov cl, al */
  CL = (AL);
  /* 120fa095 sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fa098 jmp 0x120fa07a */
  goto L_120fa07a;
L_120fa09a:;
  /* 120fa09a and byte ptr [eax + 0x12104240], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x12104240)))&(0x0u); w8((uint32_t)(EAX + 0x12104240), (_r)); fl_logic(_r,8); }
L_120fa0a1:;
  /* 120fa0a1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fa0a2 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa0a4 jb 0x120fa064 */
  if (C.cf) goto L_120fa064;
L_120fa0a6:;
  /* 120fa0a6 pop esi */
  ESI = (pop32());
  /* 120fa0a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa0a8 ret  */
  ESPCHK(0x120f9f24u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a9 @ 0x120fa0a9 (28 bytes, 7 insns) */
void f_120fa0a9(void) {
  FTRACE(0x120fa0a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa0a9 cmp dword ptr [0x12104588], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104588))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa0b0 jne 0x120fa0c4 */
  if (!C.zf) goto L_120fa0c4;
  /* 120fa0b2 push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 120fa0b4 call 0x120f9cd1 */
  push32(0x120fa0b9u); f_120f9cd1();
  /* 120fa0b9 pop ecx */
  ECX = (pop32());
  /* 120fa0ba mov dword ptr [0x12104588], 1 */
  w32((uint32_t)(0x12104588), (0x1u));
L_120fa0c4:;
  /* 120fa0c4 ret  */
  ESPCHK(0x120fa0a9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d0 @ 0x120fa0d0 (664 bytes, 256 insns) [15 switch table(s)] */
void f_120fa0d0(void) {
  FTRACE(0x120fa0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120fa0d1 mov ebp, esp */
  EBP = (ESP);
  /* 120fa0d3 push edi */
  push32((uint32_t)(EDI));
  /* 120fa0d4 push esi */
  push32((uint32_t)(ESI));
  /* 120fa0d5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fa0d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fa0db mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa0de mov eax, ecx */
  EAX = (ECX);
  /* 120fa0e0 mov edx, ecx */
  EDX = (ECX);
  /* 120fa0e2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa0e4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa0e6 jbe 0x120fa0f0 */
  if ((C.cf||C.zf)) goto L_120fa0f0;
  /* 120fa0e8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa0ea jb 0x120fa268 */
  if (C.cf) goto L_120fa268;
L_120fa0f0:;
  /* 120fa0f0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120fa0f6 jne 0x120fa10c */
  if (!C.zf) goto L_120fa10c;
  /* 120fa0f8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa0fb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120fa0fe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa101 jb 0x120fa12c */
  if (C.cf) goto L_120fa12c;
  /* 120fa103 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa105 jmp dword ptr [edx*4 + 0x120fa218] */
  switch (EDX) {
    case 0: goto L_120fa228;
    case 1: goto L_120fa230;
    case 2: goto L_120fa23c;
    case 3: goto L_120fa250;
    default: x86_unimpl("switch@0x120fa105 out of table"); return;
  }
L_120fa10c:;
  /* 120fa10c mov eax, edi */
  EAX = (EDI);
  /* 120fa10e mov edx, 3 */
  EDX = (0x3u);
  /* 120fa113 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa116 jb 0x120fa124 */
  if (C.cf) goto L_120fa124;
  /* 120fa118 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120fa11b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa11d jmp dword ptr [eax*4 + 0x120fa130] */
  switch (EAX) {
    case 1: goto L_120fa140;
    case 2: goto L_120fa16c;
    case 3: goto L_120fa190;
    default: x86_unimpl("switch@0x120fa11d out of table"); return;
  }
L_120fa124:;
  /* 120fa124 jmp dword ptr [ecx*4 + 0x120fa228] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x120fa228)))); return;
  /* 120fa12b nop  */
  /* nop */
L_120fa12c:;
  /* 120fa12c jmp dword ptr [ecx*4 + 0x120fa1ac] */
  switch (ECX) {
    case 0: goto L_120fa20f;
    case 1: goto L_120fa1fc;
    case 2: goto L_120fa1f4;
    case 3: goto L_120fa1ec;
    case 4: goto L_120fa1e4;
    case 5: goto L_120fa1dc;
    case 6: goto L_120fa1d4;
    case 7: goto L_120fa1cc;
    default: x86_unimpl("switch@0x120fa12c out of table"); return;
  }
  /* 120fa133 nop  */
  /* nop */
L_120fa140:;
  /* 120fa140 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa142 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa144 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa146 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa149 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa14c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa14f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa152 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa155 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa158 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa15b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa15e jb 0x120fa12c */
  if (C.cf) goto L_120fa12c;
  /* 120fa160 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa162 jmp dword ptr [edx*4 + 0x120fa218] */
  switch (EDX) {
    case 0: goto L_120fa228;
    case 1: goto L_120fa230;
    case 2: goto L_120fa23c;
    case 3: goto L_120fa250;
    default: x86_unimpl("switch@0x120fa162 out of table"); return;
  }
  /* 120fa169 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa16c:;
  /* 120fa16c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa16e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa170 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa172 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa175 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa178 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa17b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa17e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa181 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa184 jb 0x120fa12c */
  if (C.cf) goto L_120fa12c;
  /* 120fa186 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa188 jmp dword ptr [edx*4 + 0x120fa218] */
  switch (EDX) {
    case 0: goto L_120fa228;
    case 1: goto L_120fa230;
    case 2: goto L_120fa23c;
    case 3: goto L_120fa250;
    default: x86_unimpl("switch@0x120fa188 out of table"); return;
  }
  /* 120fa18f nop  */
  /* nop */
L_120fa190:;
  /* 120fa190 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa192 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa194 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa196 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa197 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa19a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa19b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa19e jb 0x120fa12c */
  if (C.cf) goto L_120fa12c;
  /* 120fa1a0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa1a2 jmp dword ptr [edx*4 + 0x120fa218] */
  switch (EDX) {
    case 0: goto L_120fa228;
    case 1: goto L_120fa230;
    case 2: goto L_120fa23c;
    case 3: goto L_120fa250;
    default: x86_unimpl("switch@0x120fa1a2 out of table"); return;
  }
  /* 120fa1a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa1cc:;
  /* 120fa1cc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 120fa1d0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_120fa1d4:;
  /* 120fa1d4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 120fa1d8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_120fa1dc:;
  /* 120fa1dc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 120fa1e0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_120fa1e4:;
  /* 120fa1e4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 120fa1e8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_120fa1ec:;
  /* 120fa1ec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 120fa1f0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_120fa1f4:;
  /* 120fa1f4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 120fa1f8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_120fa1fc:;
  /* 120fa1fc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 120fa200 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 120fa204 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120fa20b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa20d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120fa20f:;
  /* 120fa20f jmp dword ptr [edx*4 + 0x120fa218] */
  switch (EDX) {
    case 0: goto L_120fa228;
    case 1: goto L_120fa230;
    case 2: goto L_120fa23c;
    case 3: goto L_120fa250;
    default: x86_unimpl("switch@0x120fa20f out of table"); return;
  }
  /* 120fa216 mov edi, edi */
  EDI = (EDI);
L_120fa228:;
  /* 120fa228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa22b pop esi */
  ESI = (pop32());
  /* 120fa22c pop edi */
  EDI = (pop32());
  /* 120fa22d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa22e ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa22f nop  */
  /* nop */
L_120fa230:;
  /* 120fa230 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa232 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa237 pop esi */
  ESI = (pop32());
  /* 120fa238 pop edi */
  EDI = (pop32());
  /* 120fa239 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa23a ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa23b nop  */
  /* nop */
L_120fa23c:;
  /* 120fa23c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa23e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa240 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa243 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa249 pop esi */
  ESI = (pop32());
  /* 120fa24a pop edi */
  EDI = (pop32());
  /* 120fa24b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa24c ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa24d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa250:;
  /* 120fa250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa254 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa257 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa25a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa25d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa260 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa263 pop esi */
  ESI = (pop32());
  /* 120fa264 pop edi */
  EDI = (pop32());
  /* 120fa265 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa266 ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa267 nop  */
  /* nop */
L_120fa268:;
  /* 120fa268 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 120fa26c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 120fa270 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120fa276 jne 0x120fa29c */
  if (!C.zf) goto L_120fa29c;
  /* 120fa278 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa27b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120fa27e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa281 jb 0x120fa290 */
  if (C.cf) goto L_120fa290;
  /* 120fa283 std  */
  C.df=1;
  /* 120fa284 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa286 cld  */
  C.df=0;
  /* 120fa287 jmp dword ptr [edx*4 + 0x120fa3b0] */
  switch (EDX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa287 out of table"); return;
  }
  /* 120fa28e mov edi, edi */
  EDI = (EDI);
L_120fa290:;
  /* 120fa290 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fa292 jmp dword ptr [ecx*4 + 0x120fa360] */
  switch (ECX) {
    case 0: goto L_120fa3a7;
    default: x86_unimpl("switch@0x120fa292 out of table"); return;
  }
  /* 120fa299 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa29c:;
  /* 120fa29c mov eax, edi */
  EAX = (EDI);
  /* 120fa29e mov edx, 3 */
  EDX = (0x3u);
  /* 120fa2a3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa2a6 jb 0x120fa2b4 */
  if (C.cf) goto L_120fa2b4;
  /* 120fa2a8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120fa2ab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa2ad jmp dword ptr [eax*4 + 0x120fa2b8] */
  switch (EAX) {
    case 1: goto L_120fa2c8;
    case 2: goto L_120fa2e8;
    case 3: goto L_120fa310;
    default: x86_unimpl("switch@0x120fa2ad out of table"); return;
  }
L_120fa2b4:;
  /* 120fa2b4 jmp dword ptr [ecx*4 + 0x120fa3b0] */
  switch (ECX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa2b4 out of table"); return;
  }
  /* 120fa2bb nop  */
  /* nop */
L_120fa2c8:;
  /* 120fa2c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa2cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa2cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa2d0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120fa2d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa2d4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120fa2d5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa2d8 jb 0x120fa290 */
  if (C.cf) goto L_120fa290;
  /* 120fa2da std  */
  C.df=1;
  /* 120fa2db rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa2dd cld  */
  C.df=0;
  /* 120fa2de jmp dword ptr [edx*4 + 0x120fa3b0] */
  switch (EDX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa2de out of table"); return;
  }
  /* 120fa2e5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa2e8:;
  /* 120fa2e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa2eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa2ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa2f0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa2f3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa2f6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa2f9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa2fc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa2ff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa302 jb 0x120fa290 */
  if (C.cf) goto L_120fa290;
  /* 120fa304 std  */
  C.df=1;
  /* 120fa305 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa307 cld  */
  C.df=0;
  /* 120fa308 jmp dword ptr [edx*4 + 0x120fa3b0] */
  switch (EDX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa308 out of table"); return;
  }
  /* 120fa30f nop  */
  /* nop */
L_120fa310:;
  /* 120fa310 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa313 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa315 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa318 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa31b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa31e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa321 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa324 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa327 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa32a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa32d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa330 jb 0x120fa290 */
  if (C.cf) goto L_120fa290;
  /* 120fa336 std  */
  C.df=1;
  /* 120fa337 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120fa339 cld  */
  C.df=0;
  /* 120fa33a jmp dword ptr [edx*4 + 0x120fa3b0] */
  switch (EDX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa33a out of table"); return;
  }
  /* 120fa341 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 120fa344 mov dword ptr fs:[0xa36c120f], eax */
  w32((uint32_t)(0xa36c120f), (EAX));
  /* 120fa34a movlps xmm6, qword ptr [ebx + 0xf] */
  x86_unimpl("movlps @ 0x120fa34a");
  /* 120fa34f adc bh, byte ptr [ebx + 0xf] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBX + 0xf))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 120fa353 adc al, byte ptr [ebx - 0x5c73edf1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBX + -0x5c73edf1))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fa35c xchg esp, eax */
  { uint32_t _t=(ESP); ESP = (EAX); EAX = (_t); }
  /* 120fa364 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 120fa368 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 120fa36c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 120fa370 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 120fa374 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 120fa378 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 120fa37c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 120fa380 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 120fa384 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 120fa388 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 120fa38c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 120fa390 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 120fa394 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 120fa398 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 120fa39c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120fa3a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa3a5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120fa3a7:;
  /* 120fa3a7 jmp dword ptr [edx*4 + 0x120fa3b0] */
  switch (EDX) {
    case 0: goto L_120fa3c0;
    case 1: goto L_120fa3c8;
    case 2: goto L_120fa3d8;
    case 3: goto L_120fa3ec;
    default: x86_unimpl("switch@0x120fa3a7 out of table"); return;
  }
  /* 120fa3ae mov edi, edi */
  EDI = (EDI);
L_120fa3c0:;
  /* 120fa3c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa3c3 pop esi */
  ESI = (pop32());
  /* 120fa3c4 pop edi */
  EDI = (pop32());
  /* 120fa3c5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa3c6 ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa3c7 nop  */
  /* nop */
L_120fa3c8:;
  /* 120fa3c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa3cb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa3ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa3d1 pop esi */
  ESI = (pop32());
  /* 120fa3d2 pop edi */
  EDI = (pop32());
  /* 120fa3d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa3d4 ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa3d5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fa3d8:;
  /* 120fa3d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa3db mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa3de mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa3e1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa3e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa3e7 pop esi */
  ESI = (pop32());
  /* 120fa3e8 pop edi */
  EDI = (pop32());
  /* 120fa3e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa3ea ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
  /* 120fa3eb nop  */
  /* nop */
L_120fa3ec:;
  /* 120fa3ec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120fa3ef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120fa3f2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120fa3f5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120fa3f8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa3fb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120fa3fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa401 pop esi */
  ESI = (pop32());
  /* 120fa402 pop edi */
  EDI = (pop32());
  /* 120fa403 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa404 ret  */
  ESPCHK(0x120fa0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a405 @ 0x120fa405 (23 bytes, 7 insns) */
void f_120fa405(void) {
  FTRACE(0x120fa405u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa405 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fa407 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120fa40b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120fa40f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120fa413 call 0x120fa41c */
  push32(0x120fa418u); f_120fa41c();
  /* 120fa418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa41b ret  */
  ESPCHK(0x120fa405u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a41c @ 0x120fa41c (517 bytes, 195 insns) */
void f_120fa41c(void) {
  FTRACE(0x120fa41cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa41c push ebp */
  push32((uint32_t)(EBP));
  /* 120fa41d mov ebp, esp */
  EBP = (ESP);
  /* 120fa41f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa422 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa423 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120fa427 push esi */
  push32((uint32_t)(ESI));
  /* 120fa428 push edi */
  push32((uint32_t)(EDI));
  /* 120fa429 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa42c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fa42e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 120fa431 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_120fa434:;
  /* 120fa434 cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa43b jle 0x120fa44c */
  if ((C.zf||C.sf!=C.of)) goto L_120fa44c;
  /* 120fa43d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fa440 push 8 */
  push32((uint32_t)(0x8u));
  /* 120fa442 push eax */
  push32((uint32_t)(EAX));
  /* 120fa443 call 0x120f945b */
  push32(0x120fa448u); f_120f945b();
  /* 120fa448 pop ecx */
  ECX = (pop32());
  /* 120fa449 pop ecx */
  ECX = (pop32());
  /* 120fa44a jmp 0x120fa45b */
  goto L_120fa45b;
L_120fa44c:;
  /* 120fa44c mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fa452 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fa455 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fa458 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_120fa45b:;
  /* 120fa45b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa45d je 0x120fa464 */
  if (C.zf) goto L_120fa464;
  /* 120fa45f mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 120fa461 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa462 jmp 0x120fa434 */
  goto L_120fa434;
L_120fa464:;
  /* 120fa464 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa467 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 120fa46a jne 0x120fa472 */
  if (!C.zf) goto L_120fa472;
  /* 120fa46c or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 120fa470 jmp 0x120fa477 */
  goto L_120fa477;
L_120fa472:;
  /* 120fa472 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa475 jne 0x120fa47d */
  if (!C.zf) goto L_120fa47d;
L_120fa477:;
  /* 120fa477 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 120fa479 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa47a mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_120fa47d:;
  /* 120fa47d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fa480 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa482 jl 0x120fa611 */
  if ((C.sf!=C.of)) goto L_120fa611;
  /* 120fa488 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa48b je 0x120fa611 */
  if (C.zf) goto L_120fa611;
  /* 120fa491 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa494 jg 0x120fa611 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fa611;
  /* 120fa49a push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120fa49c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa49e pop ecx */
  ECX = (pop32());
  /* 120fa49f jne 0x120fa4c5 */
  if (!C.zf) goto L_120fa4c5;
  /* 120fa4a1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4a4 je 0x120fa4af */
  if (C.zf) goto L_120fa4af;
  /* 120fa4a6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 120fa4ad jmp 0x120fa4e1 */
  goto L_120fa4e1;
L_120fa4af:;
  /* 120fa4af mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa4b1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4b3 je 0x120fa4c2 */
  if (C.zf) goto L_120fa4c2;
  /* 120fa4b5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4b7 je 0x120fa4c2 */
  if (C.zf) goto L_120fa4c2;
  /* 120fa4b9 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 120fa4c0 jmp 0x120fa4e1 */
  goto L_120fa4e1;
L_120fa4c2:;
  /* 120fa4c2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_120fa4c5:;
  /* 120fa4c5 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa4c8 jne 0x120fa4e1 */
  if (!C.zf) goto L_120fa4e1;
  /* 120fa4ca cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4cd jne 0x120fa4e1 */
  if (!C.zf) goto L_120fa4e1;
  /* 120fa4cf mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa4d1 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4d3 je 0x120fa4d9 */
  if (C.zf) goto L_120fa4d9;
  /* 120fa4d5 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa4d7 jne 0x120fa4e1 */
  if (!C.zf) goto L_120fa4e1;
L_120fa4d9:;
  /* 120fa4d9 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 120fa4dc inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa4dd inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa4de mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_120fa4e1:;
  /* 120fa4e1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fa4e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa4e6 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120fa4e9 mov edi, 0x103 */
  EDI = (0x103u);
  /* 120fa4ee mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120fa4f1:;
  /* 120fa4f1 cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa4f8 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 120fa4fb jle 0x120fa509 */
  if ((C.zf||C.sf!=C.of)) goto L_120fa509;
  /* 120fa4fd push 4 */
  push32((uint32_t)(0x4u));
  /* 120fa4ff push esi */
  push32((uint32_t)(ESI));
  /* 120fa500 call 0x120f945b */
  push32(0x120fa505u); f_120f945b();
  /* 120fa505 pop ecx */
  ECX = (pop32());
  /* 120fa506 pop ecx */
  ECX = (pop32());
  /* 120fa507 jmp 0x120fa514 */
  goto L_120fa514;
L_120fa509:;
  /* 120fa509 mov eax, dword ptr [0x121031b0] */
  EAX = (r32((uint32_t)(0x121031b0)));
  /* 120fa50e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 120fa511 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_120fa514:;
  /* 120fa514 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa516 je 0x120fa520 */
  if (C.zf) goto L_120fa520;
  /* 120fa518 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fa51b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa51e jmp 0x120fa552 */
  goto L_120fa552;
L_120fa520:;
  /* 120fa520 cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa527 jle 0x120fa534 */
  if ((C.zf||C.sf!=C.of)) goto L_120fa534;
  /* 120fa529 push edi */
  push32((uint32_t)(EDI));
  /* 120fa52a push esi */
  push32((uint32_t)(ESI));
  /* 120fa52b call 0x120f945b */
  push32(0x120fa530u); f_120f945b();
  /* 120fa530 pop ecx */
  ECX = (pop32());
  /* 120fa531 pop ecx */
  ECX = (pop32());
  /* 120fa532 jmp 0x120fa53f */
  goto L_120fa53f;
L_120fa534:;
  /* 120fa534 mov eax, dword ptr [0x121031b0] */
  EAX = (r32((uint32_t)(0x121031b0)));
  /* 120fa539 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 120fa53d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_120fa53f:;
  /* 120fa53f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa541 je 0x120fa58d */
  if (C.zf) goto L_120fa58d;
  /* 120fa543 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fa546 push eax */
  push32((uint32_t)(EAX));
  /* 120fa547 call 0x120fb92a */
  push32(0x120fa54cu); f_120fb92a();
  /* 120fa54c pop ecx */
  ECX = (pop32());
  /* 120fa54d mov ecx, eax */
  ECX = (EAX);
  /* 120fa54f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_120fa552:;
  /* 120fa552 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa555 jae 0x120fa58d */
  if (!C.cf) goto L_120fa58d;
  /* 120fa557 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 120fa55a or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 120fa55e cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa561 jb 0x120fa577 */
  if (C.cf) goto L_120fa577;
  /* 120fa563 jne 0x120fa571 */
  if (!C.zf) goto L_120fa571;
  /* 120fa565 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fa568 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa56a div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120fa56d cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa56f jbe 0x120fa577 */
  if ((C.cf||C.zf)) goto L_120fa577;
L_120fa571:;
  /* 120fa571 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 120fa575 jmp 0x120fa580 */
  goto L_120fa580;
L_120fa577:;
  /* 120fa577 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120fa57b add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa57d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_120fa580:;
  /* 120fa580 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120fa583 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120fa586 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 120fa588 jmp 0x120fa4f1 */
  goto L_120fa4f1;
L_120fa58d:;
  /* 120fa58d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120fa590 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 120fa593 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fa596 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 120fa598 jne 0x120fa5aa */
  if (!C.zf) goto L_120fa5aa;
  /* 120fa59a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fa59c je 0x120fa5a4 */
  if (C.zf) goto L_120fa5a4;
  /* 120fa59e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa5a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120fa5a4:;
  /* 120fa5a4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120fa5a8 jmp 0x120fa5f5 */
  goto L_120fa5f5;
L_120fa5aa:;
  /* 120fa5aa test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 120fa5ac mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 120fa5b1 jne 0x120fa5ce */
  if (!C.zf) goto L_120fa5ce;
  /* 120fa5b3 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 120fa5b5 jne 0x120fa5f5 */
  if (!C.zf) goto L_120fa5f5;
  /* 120fa5b7 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 120fa5ba je 0x120fa5c5 */
  if (C.zf) goto L_120fa5c5;
  /* 120fa5bc cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa5c3 ja 0x120fa5ce */
  if ((!C.cf&&!C.zf)) goto L_120fa5ce;
L_120fa5c5:;
  /* 120fa5c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa5c7 jne 0x120fa5f5 */
  if (!C.zf) goto L_120fa5f5;
  /* 120fa5c9 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa5cc jbe 0x120fa5f5 */
  if ((C.cf||C.zf)) goto L_120fa5f5;
L_120fa5ce:;
  /* 120fa5ce call 0x120f8dab */
  push32(0x120fa5d3u); f_120f8dab();
  /* 120fa5d3 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 120fa5d7 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 120fa5dd je 0x120fa5e5 */
  if (C.zf) goto L_120fa5e5;
  /* 120fa5df or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120fa5e3 jmp 0x120fa5f5 */
  goto L_120fa5f5;
L_120fa5e5:;
  /* 120fa5e5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120fa5e8 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 120fa5ea neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 120fa5ec sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa5ee neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fa5f0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa5f2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120fa5f5:;
  /* 120fa5f5 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fa5f7 je 0x120fa5fe */
  if (C.zf) goto L_120fa5fe;
  /* 120fa5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120fa5fc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_120fa5fe:;
  /* 120fa5fe test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 120fa602 je 0x120fa60c */
  if (C.zf) goto L_120fa60c;
  /* 120fa604 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120fa607 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fa609 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120fa60c:;
  /* 120fa60c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120fa60f jmp 0x120fa61c */
  goto L_120fa61c;
L_120fa611:;
  /* 120fa611 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fa614 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa616 je 0x120fa61a */
  if (C.zf) goto L_120fa61a;
  /* 120fa618 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_120fa61a:;
  /* 120fa61a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fa61c:;
  /* 120fa61c pop edi */
  EDI = (pop32());
  /* 120fa61d pop esi */
  ESI = (pop32());
  /* 120fa61e pop ebx */
  EBX = (pop32());
  /* 120fa61f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa620 ret  */
  ESPCHK(0x120fa41cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x120fa640 (193 bytes, 90 insns) */
void f_120fa640(void) {
  FTRACE(0x120fa640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa640 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa642 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 120fa646 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa647 mov ebx, eax */
  EBX = (EAX);
  /* 120fa649 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120fa64c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fa650 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120fa656 je 0x120fa66b */
  if (C.zf) goto L_120fa66b;
L_120fa658:;
  /* 120fa658 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 120fa65a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120fa65b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa65d je 0x120fa630 */
  if (C.zf) { jmp_ind(0x120fa630u); return; }
  /* 120fa65f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 120fa661 je 0x120fa6b4 */
  if (C.zf) goto L_120fa6b4;
  /* 120fa663 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120fa669 jne 0x120fa658 */
  if (!C.zf) goto L_120fa658;
L_120fa66b:;
  /* 120fa66b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 120fa66d push edi */
  push32((uint32_t)(EDI));
  /* 120fa66e mov eax, ebx */
  EAX = (EBX);
  /* 120fa670 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 120fa673 push esi */
  push32((uint32_t)(ESI));
  /* 120fa674 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_120fa676:;
  /* 120fa676 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 120fa678 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 120fa67d mov eax, ecx */
  EAX = (ECX);
  /* 120fa67f mov esi, edi */
  ESI = (EDI);
  /* 120fa681 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 120fa683 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa685 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa687 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120fa68a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fa68d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120fa68f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 120fa691 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa694 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 120fa69a jne 0x120fa6b8 */
  if (!C.zf) goto L_120fa6b8;
  /* 120fa69c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 120fa6a1 je 0x120fa676 */
  if (C.zf) goto L_120fa676;
  /* 120fa6a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 120fa6a8 jne 0x120fa6b2 */
  if (!C.zf) goto L_120fa6b2;
  /* 120fa6aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 120fa6b0 jne 0x120fa676 */
  if (!C.zf) goto L_120fa676;
L_120fa6b2:;
  /* 120fa6b2 pop esi */
  ESI = (pop32());
  /* 120fa6b3 pop edi */
  EDI = (pop32());
L_120fa6b4:;
  /* 120fa6b4 pop ebx */
  EBX = (pop32());
  /* 120fa6b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa6b7 ret  */
  ESPCHK(0x120fa640u, _esp0);
  ESP += 4; return;
L_120fa6b8:;
  /* 120fa6b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 120fa6bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa6bd je 0x120fa6f5 */
  if (C.zf) goto L_120fa6f5;
  /* 120fa6bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa6c1 je 0x120fa6b2 */
  if (C.zf) goto L_120fa6b2;
  /* 120fa6c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa6c5 je 0x120fa6ee */
  if (C.zf) goto L_120fa6ee;
  /* 120fa6c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120fa6c9 je 0x120fa6b2 */
  if (C.zf) goto L_120fa6b2;
  /* 120fa6cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120fa6ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa6d0 je 0x120fa6e7 */
  if (C.zf) goto L_120fa6e7;
  /* 120fa6d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa6d4 je 0x120fa6b2 */
  if (C.zf) goto L_120fa6b2;
  /* 120fa6d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa6d8 je 0x120fa6e0 */
  if (C.zf) goto L_120fa6e0;
  /* 120fa6da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120fa6dc je 0x120fa6b2 */
  if (C.zf) goto L_120fa6b2;
  /* 120fa6de jmp 0x120fa676 */
  goto L_120fa676;
L_120fa6e0:;
  /* 120fa6e0 pop esi */
  ESI = (pop32());
  /* 120fa6e1 pop edi */
  EDI = (pop32());
  /* 120fa6e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 120fa6e5 pop ebx */
  EBX = (pop32());
  /* 120fa6e6 ret  */
  ESPCHK(0x120fa640u, _esp0);
  ESP += 4; return;
L_120fa6e7:;
  /* 120fa6e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 120fa6ea pop esi */
  ESI = (pop32());
  /* 120fa6eb pop edi */
  EDI = (pop32());
  /* 120fa6ec pop ebx */
  EBX = (pop32());
  /* 120fa6ed ret  */
  ESPCHK(0x120fa640u, _esp0);
  ESP += 4; return;
L_120fa6ee:;
  /* 120fa6ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 120fa6f1 pop esi */
  ESI = (pop32());
  /* 120fa6f2 pop edi */
  EDI = (pop32());
  /* 120fa6f3 pop ebx */
  EBX = (pop32());
  /* 120fa6f4 ret  */
  ESPCHK(0x120fa640u, _esp0);
  ESP += 4; return;
L_120fa6f5:;
  /* 120fa6f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 120fa6f8 pop esi */
  ESI = (pop32());
  /* 120fa6f9 pop edi */
  EDI = (pop32());
  /* 120fa6fa pop ebx */
  EBX = (pop32());
  /* 120fa6fb ret  */
  ESPCHK(0x120fa640u, _esp0);
  ESP += 4; return;
  /* 120fa6fc int3  */
  x86_unimpl("int3 @ 0x120fa6fc");
  /* 120fa6fd int3  */
  x86_unimpl("int3 @ 0x120fa6fd");
  /* 120fa6fe int3  */
  x86_unimpl("int3 @ 0x120fa6fe");
  /* 120fa6ff int3  */
  x86_unimpl("int3 @ 0x120fa6ff");
}

/* _strstr @ 0x120fa700 (128 bytes, 66 insns) */
void f_120fa700(void) {
  FTRACE(0x120fa700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa700 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fa704 push edi */
  push32((uint32_t)(EDI));
  /* 120fa705 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa706 push esi */
  push32((uint32_t)(ESI));
  /* 120fa707 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120fa709 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 120fa70d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120fa70f je 0x120fa77a */
  if (C.zf) goto L_120fa77a;
  /* 120fa711 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 120fa714 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120fa716 je 0x120fa767 */
  if (C.zf) goto L_120fa767;
L_120fa718:;
  /* 120fa718 mov esi, edi */
  ESI = (EDI);
  /* 120fa71a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 120fa71e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 120fa720 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa721 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa723 je 0x120fa73a */
  if (C.zf) goto L_120fa73a;
  /* 120fa725 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa727 je 0x120fa734 */
  if (C.zf) goto L_120fa734;
L_120fa729:;
  /* 120fa729 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa72b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_120fa72c:;
  /* 120fa72c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa72e je 0x120fa73a */
  if (C.zf) goto L_120fa73a;
  /* 120fa730 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa732 jne 0x120fa729 */
  if (!C.zf) goto L_120fa729;
L_120fa734:;
  /* 120fa734 pop esi */
  ESI = (pop32());
  /* 120fa735 pop ebx */
  EBX = (pop32());
  /* 120fa736 pop edi */
  EDI = (pop32());
  /* 120fa737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa739 ret  */
  ESPCHK(0x120fa700u, _esp0);
  ESP += 4; return;
L_120fa73a:;
  /* 120fa73a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa73c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa73d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa73f jne 0x120fa72c */
  if (!C.zf) goto L_120fa72c;
  /* 120fa741 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_120fa744:;
  /* 120fa744 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 120fa747 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120fa749 je 0x120fa773 */
  if (C.zf) goto L_120fa773;
  /* 120fa74b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa74d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa750 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa752 jne 0x120fa718 */
  if (!C.zf) goto L_120fa718;
  /* 120fa754 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 120fa757 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa759 je 0x120fa773 */
  if (C.zf) goto L_120fa773;
  /* 120fa75b mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 120fa75e add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa761 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa763 je 0x120fa744 */
  if (C.zf) goto L_120fa744;
  /* 120fa765 jmp 0x120fa718 */
  goto L_120fa718;
L_120fa767:;
  /* 120fa767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa769 pop esi */
  ESI = (pop32());
  /* 120fa76a pop ebx */
  EBX = (pop32());
  /* 120fa76b pop edi */
  EDI = (pop32());
  /* 120fa76c mov al, dl */
  AL = (DL);
  /* 120fa76e jmp 0x120fa646 */
  jmp_ind(0x120fa646u); return;
L_120fa773:;
  /* 120fa773 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 120fa776 pop esi */
  ESI = (pop32());
  /* 120fa777 pop ebx */
  EBX = (pop32());
  /* 120fa778 pop edi */
  EDI = (pop32());
  /* 120fa779 ret  */
  ESPCHK(0x120fa700u, _esp0);
  ESP += 4; return;
L_120fa77a:;
  /* 120fa77a mov eax, edi */
  EAX = (EDI);
  /* 120fa77c pop esi */
  ESI = (pop32());
  /* 120fa77d pop ebx */
  EBX = (pop32());
  /* 120fa77e pop edi */
  EDI = (pop32());
  /* 120fa77f ret  */
  ESPCHK(0x120fa700u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x120fa780 (56 bytes, 31 insns) */
void f_120fa780(void) {
  FTRACE(0x120fa780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa780 push ebp */
  push32((uint32_t)(EBP));
  /* 120fa781 mov ebp, esp */
  EBP = (ESP);
  /* 120fa783 push edi */
  push32((uint32_t)(EDI));
  /* 120fa784 push esi */
  push32((uint32_t)(ESI));
  /* 120fa785 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa786 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fa789 jecxz 0x120fa7b1 */
  x86_unimpl("jecxz @ 0x120fa789");
  /* 120fa78b mov ebx, ecx */
  EBX = (ECX);
  /* 120fa78d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fa790 mov esi, edi */
  ESI = (EDI);
  /* 120fa792 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa794 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 120fa796 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fa798 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa79a mov edi, esi */
  EDI = (ESI);
  /* 120fa79c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fa79f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 120fa7a1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 120fa7a4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fa7a6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fa7a9 ja 0x120fa7af */
  if ((!C.cf&&!C.zf)) goto L_120fa7af;
  /* 120fa7ab je 0x120fa7b1 */
  if (C.zf) goto L_120fa7b1;
  /* 120fa7ad dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa7ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_120fa7af:;
  /* 120fa7af not ecx */
  ECX = (~(ECX));
L_120fa7b1:;
  /* 120fa7b1 mov eax, ecx */
  EAX = (ECX);
  /* 120fa7b3 pop ebx */
  EBX = (pop32());
  /* 120fa7b4 pop esi */
  ESI = (pop32());
  /* 120fa7b5 pop edi */
  EDI = (pop32());
  /* 120fa7b6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fa7b7 ret  */
  ESPCHK(0x120fa780u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x120fa7c0 (47 bytes, 17 insns) */
void f_120fa7c0(void) {
  FTRACE(0x120fa7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa7c0 push ecx */
  push32((uint32_t)(ECX));
  /* 120fa7c1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa7c6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 120fa7ca jb 0x120fa7e0 */
  if (C.cf) goto L_120fa7e0;
L_120fa7cc:;
  /* 120fa7cc sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa7d2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa7d7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120fa7d9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa7de jae 0x120fa7cc */
  if (!C.cf) goto L_120fa7cc;
L_120fa7e0:;
  /* 120fa7e0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fa7e2 mov eax, esp */
  EAX = (ESP);
  /* 120fa7e4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120fa7e6 mov esp, ecx */
  ESP = (ECX);
  /* 120fa7e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120fa7ea mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120fa7ed push eax */
  push32((uint32_t)(EAX));
  /* 120fa7ee ret  */
  ESPCHK(0x120fa7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7ef @ 0x120fa7ef (137 bytes, 50 insns) */
void f_120fa7ef(void) {
  FTRACE(0x120fa7efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa7ef push ebx */
  push32((uint32_t)(EBX));
  /* 120fa7f0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fa7f2 cmp dword ptr [0x1210413c], ebx */
  { uint32_t _a=(r32((uint32_t)(0x1210413c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa7f8 push esi */
  push32((uint32_t)(ESI));
  /* 120fa7f9 push edi */
  push32((uint32_t)(EDI));
  /* 120fa7fa jne 0x120fa83e */
  if (!C.zf) goto L_120fa83e;
  /* 120fa7fc push 0x120fd6ec */
  push32((uint32_t)(0x120fd6ecu));
  /* 120fa801 call dword ptr [0x120fd024] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd024))), 0x120fa807u);
  /* 120fa807 mov edi, eax */
  EDI = (EAX);
  /* 120fa809 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa80b je 0x120fa874 */
  if (C.zf) goto L_120fa874;
  /* 120fa80d mov esi, dword ptr [0x120fd0c8] */
  ESI = (r32((uint32_t)(0x120fd0c8)));
  /* 120fa813 push 0x120fd6e0 */
  push32((uint32_t)(0x120fd6e0u));
  /* 120fa818 push edi */
  push32((uint32_t)(EDI));
  /* 120fa819 call esi */
  call_ind((uint32_t)(ESI), 0x120fa81bu);
  /* 120fa81b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa81d mov dword ptr [0x1210413c], eax */
  w32((uint32_t)(0x1210413c), (EAX));
  /* 120fa822 je 0x120fa874 */
  if (C.zf) goto L_120fa874;
  /* 120fa824 push 0x120fd6d0 */
  push32((uint32_t)(0x120fd6d0u));
  /* 120fa829 push edi */
  push32((uint32_t)(EDI));
  /* 120fa82a call esi */
  call_ind((uint32_t)(ESI), 0x120fa82cu);
  /* 120fa82c push 0x120fd6bc */
  push32((uint32_t)(0x120fd6bcu));
  /* 120fa831 push edi */
  push32((uint32_t)(EDI));
  /* 120fa832 mov dword ptr [0x12104140], eax */
  w32((uint32_t)(0x12104140), (EAX));
  /* 120fa837 call esi */
  call_ind((uint32_t)(ESI), 0x120fa839u);
  /* 120fa839 mov dword ptr [0x12104144], eax */
  w32((uint32_t)(0x12104144), (EAX));
L_120fa83e:;
  /* 120fa83e mov eax, dword ptr [0x12104140] */
  EAX = (r32((uint32_t)(0x12104140)));
  /* 120fa843 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa845 je 0x120fa85d */
  if (C.zf) goto L_120fa85d;
  /* 120fa847 call eax */
  call_ind((uint32_t)(EAX), 0x120fa849u);
  /* 120fa849 mov ebx, eax */
  EBX = (EAX);
  /* 120fa84b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fa84d je 0x120fa85d */
  if (C.zf) goto L_120fa85d;
  /* 120fa84f mov eax, dword ptr [0x12104144] */
  EAX = (r32((uint32_t)(0x12104144)));
  /* 120fa854 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa856 je 0x120fa85d */
  if (C.zf) goto L_120fa85d;
  /* 120fa858 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa859 call eax */
  call_ind((uint32_t)(EAX), 0x120fa85bu);
  /* 120fa85b mov ebx, eax */
  EBX = (EAX);
L_120fa85d:;
  /* 120fa85d push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120fa861 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120fa865 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120fa869 push ebx */
  push32((uint32_t)(EBX));
  /* 120fa86a call dword ptr [0x1210413c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1210413c))), 0x120fa870u);
L_120fa870:;
  /* 120fa870 pop edi */
  EDI = (pop32());
  /* 120fa871 pop esi */
  ESI = (pop32());
  /* 120fa872 pop ebx */
  EBX = (pop32());
  /* 120fa873 ret  */
  ESPCHK(0x120fa7efu, _esp0);
  ESP += 4; return;
L_120fa874:;
  /* 120fa874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa876 jmp 0x120fa870 */
  goto L_120fa870;
}

/* _strncpy @ 0x120fa880 (254 bytes, 109 insns) */
void f_120fa880(void) {
  FTRACE(0x120fa880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa880 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120fa884 push edi */
  push32((uint32_t)(EDI));
  /* 120fa885 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120fa887 je 0x120fa903 */
  if (C.zf) goto L_120fa903;
  /* 120fa889 push esi */
  push32((uint32_t)(ESI));
  /* 120fa88a push ebx */
  push32((uint32_t)(EBX));
  /* 120fa88b mov ebx, ecx */
  EBX = (ECX);
  /* 120fa88d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 120fa891 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 120fa897 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 120fa89b jne 0x120fa8a4 */
  if (!C.zf) goto L_120fa8a4;
  /* 120fa89d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa8a0 jne 0x120fa911 */
  if (!C.zf) goto L_120fa911;
  /* 120fa8a2 jmp 0x120fa8c5 */
  goto L_120fa8c5;
L_120fa8a4:;
  /* 120fa8a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa8a7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa8a9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa8aa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa8ab je 0x120fa8d2 */
  if (C.zf) goto L_120fa8d2;
  /* 120fa8ad test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa8af je 0x120fa8da */
  if (C.zf) goto L_120fa8da;
  /* 120fa8b1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 120fa8b7 jne 0x120fa8a4 */
  if (!C.zf) goto L_120fa8a4;
  /* 120fa8b9 mov ebx, ecx */
  EBX = (ECX);
  /* 120fa8bb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa8be jne 0x120fa911 */
  if (!C.zf) goto L_120fa911;
L_120fa8c0:;
  /* 120fa8c0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 120fa8c3 je 0x120fa8d2 */
  if (C.zf) goto L_120fa8d2;
L_120fa8c5:;
  /* 120fa8c5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fa8c7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fa8c8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa8ca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa8cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fa8cd je 0x120fa8fe */
  if (C.zf) goto L_120fa8fe;
  /* 120fa8cf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120fa8d0 jne 0x120fa8c5 */
  if (!C.zf) goto L_120fa8c5;
L_120fa8d2:;
  /* 120fa8d2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120fa8d6 pop ebx */
  EBX = (pop32());
  /* 120fa8d7 pop esi */
  ESI = (pop32());
  /* 120fa8d8 pop edi */
  EDI = (pop32());
  /* 120fa8d9 ret  */
  ESPCHK(0x120fa880u, _esp0);
  ESP += 4; return;
L_120fa8da:;
  /* 120fa8da test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120fa8e0 je 0x120fa8f4 */
  if (C.zf) goto L_120fa8f4;
L_120fa8e2:;
  /* 120fa8e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa8e4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa8e5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa8e6 je 0x120fa976 */
  if (C.zf) goto L_120fa976;
  /* 120fa8ec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120fa8f2 jne 0x120fa8e2 */
  if (!C.zf) goto L_120fa8e2;
L_120fa8f4:;
  /* 120fa8f4 mov ebx, ecx */
  EBX = (ECX);
  /* 120fa8f6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120fa8f9 jne 0x120fa967 */
  if (!C.zf) goto L_120fa967;
L_120fa8fb:;
  /* 120fa8fb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120fa8fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_120fa8fe:;
  /* 120fa8fe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120fa8ff jne 0x120fa8fb */
  if (!C.zf) goto L_120fa8fb;
  /* 120fa901 pop ebx */
  EBX = (pop32());
  /* 120fa902 pop esi */
  ESI = (pop32());
L_120fa903:;
  /* 120fa903 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fa907 pop edi */
  EDI = (pop32());
  /* 120fa908 ret  */
  ESPCHK(0x120fa880u, _esp0);
  ESP += 4; return;
L_120fa909:;
  /* 120fa909 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120fa90b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa90e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa90f je 0x120fa8c0 */
  if (C.zf) goto L_120fa8c0;
L_120fa911:;
  /* 120fa911 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120fa916 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120fa918 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa91a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fa91d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa91f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 120fa921 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa924 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120fa929 je 0x120fa909 */
  if (C.zf) goto L_120fa909;
  /* 120fa92b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120fa92d je 0x120fa95b */
  if (C.zf) goto L_120fa95b;
  /* 120fa92f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120fa931 je 0x120fa951 */
  if (C.zf) goto L_120fa951;
  /* 120fa933 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 120fa939 je 0x120fa947 */
  if (C.zf) goto L_120fa947;
  /* 120fa93b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 120fa941 jne 0x120fa909 */
  if (!C.zf) goto L_120fa909;
  /* 120fa943 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120fa945 jmp 0x120fa95f */
  goto L_120fa95f;
L_120fa947:;
  /* 120fa947 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120fa94d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120fa94f jmp 0x120fa95f */
  goto L_120fa95f;
L_120fa951:;
  /* 120fa951 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120fa957 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120fa959 jmp 0x120fa95f */
  goto L_120fa95f;
L_120fa95b:;
  /* 120fa95b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fa95d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_120fa95f:;
  /* 120fa95f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa962 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fa964 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa965 je 0x120fa971 */
  if (C.zf) goto L_120fa971;
L_120fa967:;
  /* 120fa967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fa969:;
  /* 120fa969 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120fa96b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fa96e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fa96f jne 0x120fa969 */
  if (!C.zf) goto L_120fa969;
L_120fa971:;
  /* 120fa971 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 120fa974 jne 0x120fa8fb */
  if (!C.zf) goto L_120fa8fb;
L_120fa976:;
  /* 120fa976 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120fa97a pop ebx */
  EBX = (pop32());
  /* 120fa97b pop esi */
  ESI = (pop32());
  /* 120fa97c pop edi */
  EDI = (pop32());
  /* 120fa97d ret  */
  ESPCHK(0x120fa880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a97e @ 0x120fa97e (139 bytes, 59 insns) */
void f_120fa97e(void) {
  FTRACE(0x120fa97eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fa97e push ebx */
  push32((uint32_t)(EBX));
  /* 120fa97f push ebp */
  push32((uint32_t)(EBP));
  /* 120fa980 push esi */
  push32((uint32_t)(ESI));
  /* 120fa981 push edi */
  push32((uint32_t)(EDI));
  /* 120fa982 mov edi, dword ptr [esp + 0x14] */
  EDI = (r32((uint32_t)(ESP + 0x14)));
L_120fa986:;
  /* 120fa986 cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa98d jle 0x120fa99e */
  if ((C.zf||C.sf!=C.of)) goto L_120fa99e;
  /* 120fa98f movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fa992 push 8 */
  push32((uint32_t)(0x8u));
  /* 120fa994 push eax */
  push32((uint32_t)(EAX));
  /* 120fa995 call 0x120f945b */
  push32(0x120fa99au); f_120f945b();
  /* 120fa99a pop ecx */
  ECX = (pop32());
  /* 120fa99b pop ecx */
  ECX = (pop32());
  /* 120fa99c jmp 0x120fa9ad */
  goto L_120fa9ad;
L_120fa99e:;
  /* 120fa99e movzx eax, byte ptr [edi] */
  EAX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fa9a1 mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fa9a7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fa9aa and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_120fa9ad:;
  /* 120fa9ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa9af je 0x120fa9b4 */
  if (C.zf) goto L_120fa9b4;
  /* 120fa9b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa9b2 jmp 0x120fa986 */
  goto L_120fa986;
L_120fa9b4:;
  /* 120fa9b4 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fa9b7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa9b8 cmp esi, 0x2d */
  { uint32_t _a=(ESI),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa9bb mov ebp, esi */
  EBP = (ESI);
  /* 120fa9bd je 0x120fa9c4 */
  if (C.zf) goto L_120fa9c4;
  /* 120fa9bf cmp esi, 0x2b */
  { uint32_t _a=(ESI),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa9c2 jne 0x120fa9c8 */
  if (!C.zf) goto L_120fa9c8;
L_120fa9c4:;
  /* 120fa9c4 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fa9c7 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_120fa9c8:;
  /* 120fa9c8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_120fa9ca:;
  /* 120fa9ca cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa9d1 jle 0x120fa9df */
  if ((C.zf||C.sf!=C.of)) goto L_120fa9df;
  /* 120fa9d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 120fa9d5 push esi */
  push32((uint32_t)(ESI));
  /* 120fa9d6 call 0x120f945b */
  push32(0x120fa9dbu); f_120f945b();
  /* 120fa9db pop ecx */
  ECX = (pop32());
  /* 120fa9dc pop ecx */
  ECX = (pop32());
  /* 120fa9dd jmp 0x120fa9ea */
  goto L_120fa9ea;
L_120fa9df:;
  /* 120fa9df mov eax, dword ptr [0x121031b0] */
  EAX = (r32((uint32_t)(0x121031b0)));
  /* 120fa9e4 mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 120fa9e7 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_120fa9ea:;
  /* 120fa9ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fa9ec je 0x120fa9fb */
  if (C.zf) goto L_120fa9fb;
  /* 120fa9ee lea eax, [ebx + ebx*4] */
  EAX = ((uint32_t)(EBX + EBX*4));
  /* 120fa9f1 lea ebx, [esi + eax*2 - 0x30] */
  EBX = ((uint32_t)(ESI + EAX*2 + -0x30));
  /* 120fa9f5 movzx esi, byte ptr [edi] */
  ESI = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 120fa9f8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fa9f9 jmp 0x120fa9ca */
  goto L_120fa9ca;
L_120fa9fb:;
  /* 120fa9fb cmp ebp, 0x2d */
  { uint32_t _a=(EBP),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fa9fe mov eax, ebx */
  EAX = (EBX);
  /* 120faa00 jne 0x120faa04 */
  if (!C.zf) goto L_120faa04;
  /* 120faa02 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120faa04:;
  /* 120faa04 pop edi */
  EDI = (pop32());
  /* 120faa05 pop esi */
  ESI = (pop32());
  /* 120faa06 pop ebp */
  EBP = (pop32());
  /* 120faa07 pop ebx */
  EBX = (pop32());
  /* 120faa08 ret  */
  ESPCHK(0x120fa97eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa09 @ 0x120faa09 (125 bytes, 51 insns) */
void f_120faa09(void) {
  FTRACE(0x120faa09u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120faa09 cmp dword ptr [0x12104584], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104584))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faa10 push ebx */
  push32((uint32_t)(EBX));
  /* 120faa11 push esi */
  push32((uint32_t)(ESI));
  /* 120faa12 mov esi, dword ptr [0x12103ed8] */
  ESI = (r32((uint32_t)(0x12103ed8)));
  /* 120faa18 push edi */
  push32((uint32_t)(EDI));
  /* 120faa19 je 0x120faa80 */
  if (C.zf) goto L_120faa80;
  /* 120faa1b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120faa1d jne 0x120faa3a */
  if (!C.zf) goto L_120faa3a;
  /* 120faa1f cmp dword ptr [0x12103ee0], esi */
  { uint32_t _a=(r32((uint32_t)(0x12103ee0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faa25 je 0x120faa80 */
  if (C.zf) goto L_120faa80;
  /* 120faa27 call 0x120fbae3 */
  push32(0x120faa2cu); f_120fbae3();
  /* 120faa2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faa2e jne 0x120faa80 */
  if (!C.zf) goto L_120faa80;
  /* 120faa30 mov esi, dword ptr [0x12103ed8] */
  ESI = (r32((uint32_t)(0x12103ed8)));
  /* 120faa36 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120faa38 je 0x120faa80 */
  if (C.zf) goto L_120faa80;
L_120faa3a:;
  /* 120faa3a mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 120faa3e test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120faa40 je 0x120faa80 */
  if (C.zf) goto L_120faa80;
  /* 120faa42 push ebx */
  push32((uint32_t)(EBX));
  /* 120faa43 call 0x120f9190 */
  push32(0x120faa48u); f_120f9190();
  /* 120faa48 pop ecx */
  ECX = (pop32());
  /* 120faa49 mov edi, eax */
  EDI = (EAX);
L_120faa4b:;
  /* 120faa4b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120faa4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faa4f je 0x120faa80 */
  if (C.zf) goto L_120faa80;
  /* 120faa51 push eax */
  push32((uint32_t)(EAX));
  /* 120faa52 call 0x120f9190 */
  push32(0x120faa57u); f_120f9190();
  /* 120faa57 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faa59 pop ecx */
  ECX = (pop32());
  /* 120faa5a jbe 0x120faa73 */
  if ((C.cf||C.zf)) goto L_120faa73;
  /* 120faa5c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120faa5e cmp byte ptr [eax + edi], 0x3d */
  { uint32_t _a=(r8((uint32_t)(EAX + EDI*1))),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120faa62 jne 0x120faa73 */
  if (!C.zf) goto L_120faa73;
  /* 120faa64 push edi */
  push32((uint32_t)(EDI));
  /* 120faa65 push ebx */
  push32((uint32_t)(EBX));
  /* 120faa66 push eax */
  push32((uint32_t)(EAX));
  /* 120faa67 call 0x120fbaa4 */
  push32(0x120faa6cu); f_120fbaa4();
  /* 120faa6c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120faa6f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faa71 je 0x120faa78 */
  if (C.zf) goto L_120faa78;
L_120faa73:;
  /* 120faa73 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120faa76 jmp 0x120faa4b */
  goto L_120faa4b;
L_120faa78:;
  /* 120faa78 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120faa7a lea eax, [eax + edi + 1] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0x1));
  /* 120faa7e jmp 0x120faa82 */
  goto L_120faa82;
L_120faa80:;
  /* 120faa80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120faa82:;
  /* 120faa82 pop edi */
  EDI = (pop32());
  /* 120faa83 pop esi */
  ESI = (pop32());
  /* 120faa84 pop ebx */
  EBX = (pop32());
  /* 120faa85 ret  */
  ESPCHK(0x120faa09u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa86 @ 0x120faa86 (386 bytes, 138 insns) */
void f_120faa86(void) {
  FTRACE(0x120faa86u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120faa86 push ebp */
  push32((uint32_t)(EBP));
  /* 120faa87 mov ebp, esp */
  EBP = (ESP);
  /* 120faa89 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faa8c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120faa8f and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120faa93 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120faa94 push ebx */
  push32((uint32_t)(EBX));
  /* 120faa95 push esi */
  push32((uint32_t)(ESI));
  /* 120faa96 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120faa97 push edi */
  push32((uint32_t)(EDI));
  /* 120faa98 je 0x120fab01 */
  if (C.zf) goto L_120fab01;
  /* 120faa9a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120faa9b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120faa9c je 0x120faae4 */
  if (C.zf) goto L_120faae4;
  /* 120faa9e sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faaa1 je 0x120faae4 */
  if (C.zf) goto L_120faae4;
  /* 120faaa3 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faaa6 je 0x120faae4 */
  if (C.zf) goto L_120faae4;
  /* 120faaa8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faaab je 0x120faad7 */
  if (C.zf) goto L_120faad7;
  /* 120faaad sub eax, 6 */
  { uint32_t _a=(EAX),_b=(0x6u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faab0 je 0x120faaca */
  if (C.zf) goto L_120faaca;
  /* 120faab2 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120faab3 je 0x120faabd */
  if (C.zf) goto L_120faabd;
  /* 120faab5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120faab8 jmp 0x120fac03 */
  goto L_120fac03;
L_120faabd:;
  /* 120faabd mov ebx, dword ptr [0x12104170] */
  EBX = (r32((uint32_t)(0x12104170)));
  /* 120faac3 mov edi, 0x12104170 */
  EDI = (0x12104170u);
  /* 120faac8 jmp 0x120fab0c */
  goto L_120fab0c;
L_120faaca:;
  /* 120faaca mov ebx, dword ptr [0x1210416c] */
  EBX = (r32((uint32_t)(0x1210416c)));
  /* 120faad0 mov edi, 0x1210416c */
  EDI = (0x1210416cu);
  /* 120faad5 jmp 0x120fab0c */
  goto L_120fab0c;
L_120faad7:;
  /* 120faad7 mov ebx, dword ptr [0x12104174] */
  EBX = (r32((uint32_t)(0x12104174)));
  /* 120faadd mov edi, 0x12104174 */
  EDI = (0x12104174u);
  /* 120faae2 jmp 0x120fab0c */
  goto L_120fab0c;
L_120faae4:;
  /* 120faae4 call 0x120f4c53 */
  push32(0x120faae9u); f_120f4c53();
  /* 120faae9 mov esi, eax */
  ESI = (EAX);
  /* 120faaeb push dword ptr [esi + 0x50] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x50))));
  /* 120faaee push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120faaf1 call 0x120fac08 */
  push32(0x120faaf6u); f_120fac08();
  /* 120faaf6 mov edi, eax */
  EDI = (EAX);
  /* 120faaf8 pop ecx */
  ECX = (pop32());
  /* 120faaf9 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120faafc pop ecx */
  ECX = (pop32());
  /* 120faafd mov ebx, dword ptr [edi] */
  EBX = (r32((uint32_t)(EDI)));
  /* 120faaff jmp 0x120fab1e */
  goto L_120fab1e;
L_120fab01:;
  /* 120fab01 mov ebx, dword ptr [0x12104168] */
  EBX = (r32((uint32_t)(0x12104168)));
  /* 120fab07 mov edi, 0x12104168 */
  EDI = (0x12104168u);
L_120fab0c:;
  /* 120fab0c push 1 */
  push32((uint32_t)(0x1u));
  /* 120fab0e mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120fab15 call 0x120f6edc */
  push32(0x120fab1au); f_120f6edc();
  /* 120fab1a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fab1d pop ecx */
  ECX = (pop32());
L_120fab1e:;
  /* 120fab1e cmp ebx, 1 */
  { uint32_t _a=(EBX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab21 jne 0x120fab39 */
  if (!C.zf) goto L_120fab39;
  /* 120fab23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab27 je 0x120fac01 */
  if (C.zf) goto L_120fac01;
  /* 120fab2d push ebx */
  push32((uint32_t)(EBX));
  /* 120fab2e call 0x120f6f3d */
  push32(0x120fab33u); f_120f6f3d();
  /* 120fab33 pop ecx */
  ECX = (pop32());
  /* 120fab34 jmp 0x120fac01 */
  goto L_120fac01;
L_120fab39:;
  /* 120fab39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fab3b cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab3d jne 0x120fab53 */
  if (!C.zf) goto L_120fab53;
  /* 120fab3f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab42 je 0x120fab4c */
  if (C.zf) goto L_120fab4c;
  /* 120fab44 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fab46 call 0x120f6f3d */
  push32(0x120fab4bu); f_120f6f3d();
  /* 120fab4b pop ecx */
  ECX = (pop32());
L_120fab4c:;
  /* 120fab4c push 3 */
  push32((uint32_t)(0x3u));
  /* 120fab4e call 0x120f61cb */
  push32(0x120fab53u); f_120f61cb();
L_120fab53:;
  /* 120fab53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fab56 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab59 je 0x120fab65 */
  if (C.zf) goto L_120fab65;
  /* 120fab5b cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab5e je 0x120fab65 */
  if (C.zf) goto L_120fab65;
  /* 120fab60 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab63 jne 0x120fab80 */
  if (!C.zf) goto L_120fab80;
L_120fab65:;
  /* 120fab65 mov edx, dword ptr [esi + 0x54] */
  EDX = (r32((uint32_t)(ESI + 0x54)));
  /* 120fab68 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab6b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120fab6e mov dword ptr [esi + 0x54], ecx */
  w32((uint32_t)(ESI + 0x54), (ECX));
  /* 120fab71 jne 0x120fabbc */
  if (!C.zf) goto L_120fabbc;
  /* 120fab73 mov edx, dword ptr [esi + 0x58] */
  EDX = (r32((uint32_t)(ESI + 0x58)));
  /* 120fab76 mov dword ptr [esi + 0x58], 0x8c */
  w32((uint32_t)(ESI + 0x58), (0x8cu));
  /* 120fab7d mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120fab80:;
  /* 120fab80 cmp eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab83 jne 0x120fabbc */
  if (!C.zf) goto L_120fabbc;
  /* 120fab85 mov ecx, dword ptr [0x12100ee8] */
  ECX = (r32((uint32_t)(0x12100ee8)));
  /* 120fab8b mov eax, dword ptr [0x12100eec] */
  EAX = (r32((uint32_t)(0x12100eec)));
  /* 120fab90 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fab92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fab94 jge 0x120fabbe */
  if ((C.sf==C.of)) goto L_120fabbe;
  /* 120fab96 lea eax, [ecx + ecx*2] */
  EAX = ((uint32_t)(ECX + ECX*2));
  /* 120fab99 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
L_120fab9c:;
  /* 120fab9c mov edx, dword ptr [esi + 0x50] */
  EDX = (r32((uint32_t)(ESI + 0x50)));
  /* 120fab9f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120faba2 and dword ptr [edx + eax - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EDX + EAX*1 + -0x4)))&(0x0u); w32((uint32_t)(EDX + EAX*1 + -0x4), (_r)); fl_logic(_r,32); }
  /* 120faba7 mov edx, dword ptr [0x12100ee8] */
  EDX = (r32((uint32_t)(0x12100ee8)));
  /* 120fabad mov edi, dword ptr [0x12100eec] */
  EDI = (r32((uint32_t)(0x12100eec)));
  /* 120fabb3 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120fabb4 add edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fabb6 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabb8 jl 0x120fab9c */
  if ((C.sf!=C.of)) goto L_120fab9c;
  /* 120fabba jmp 0x120fabbe */
  goto L_120fabbe;
L_120fabbc:;
  /* 120fabbc mov dword ptr [edi], ecx */
  w32((uint32_t)(EDI), (ECX));
L_120fabbe:;
  /* 120fabbe cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabc2 je 0x120fabcc */
  if (C.zf) goto L_120fabcc;
  /* 120fabc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fabc6 call 0x120f6f3d */
  push32(0x120fabcbu); f_120f6f3d();
  /* 120fabcb pop ecx */
  ECX = (pop32());
L_120fabcc:;
  /* 120fabcc cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabd0 jne 0x120fabdd */
  if (!C.zf) goto L_120fabdd;
  /* 120fabd2 push dword ptr [esi + 0x58] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x58))));
  /* 120fabd5 push 8 */
  push32((uint32_t)(0x8u));
  /* 120fabd7 call ebx */
  call_ind((uint32_t)(EBX), 0x120fabd9u);
  /* 120fabd9 pop ecx */
  ECX = (pop32());
  /* 120fabda pop ecx */
  ECX = (pop32());
  /* 120fabdb jmp 0x120fabef */
  goto L_120fabef;
L_120fabdd:;
  /* 120fabdd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fabe0 call ebx */
  call_ind((uint32_t)(EBX), 0x120fabe2u);
  /* 120fabe2 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabe6 pop ecx */
  ECX = (pop32());
  /* 120fabe7 je 0x120fabef */
  if (C.zf) goto L_120fabef;
  /* 120fabe9 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabed jne 0x120fac01 */
  if (!C.zf) goto L_120fac01;
L_120fabef:;
  /* 120fabef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120fabf2 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fabf6 mov dword ptr [esi + 0x54], eax */
  w32((uint32_t)(ESI + 0x54), (EAX));
  /* 120fabf9 jne 0x120fac01 */
  if (!C.zf) goto L_120fac01;
  /* 120fabfb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120fabfe mov dword ptr [esi + 0x58], eax */
  w32((uint32_t)(ESI + 0x58), (EAX));
L_120fac01:;
  /* 120fac01 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fac03:;
  /* 120fac03 pop edi */
  EDI = (pop32());
  /* 120fac04 pop esi */
  ESI = (pop32());
  /* 120fac05 pop ebx */
  EBX = (pop32());
  /* 120fac06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fac07 ret  */
  ESPCHK(0x120faa86u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac08 @ 0x120fac08 (61 bytes, 25 insns) */
void f_120fac08(void) {
  FTRACE(0x120fac08u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fac08 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fac0c mov ecx, dword ptr [0x12100ef4] */
  ECX = (r32((uint32_t)(0x12100ef4)));
  /* 120fac12 push esi */
  push32((uint32_t)(ESI));
  /* 120fac13 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120fac17 cmp dword ptr [edx + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac1a push edi */
  push32((uint32_t)(EDI));
  /* 120fac1b mov eax, edx */
  EAX = (EDX);
  /* 120fac1d je 0x120fac31 */
  if (C.zf) goto L_120fac31;
  /* 120fac1f lea edi, [ecx + ecx*2] */
  EDI = ((uint32_t)(ECX + ECX*2));
  /* 120fac22 lea edi, [edx + edi*4] */
  EDI = ((uint32_t)(EDX + EDI*4));
L_120fac25:;
  /* 120fac25 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fac28 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac2a jae 0x120fac31 */
  if (!C.cf) goto L_120fac31;
  /* 120fac2c cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac2f jne 0x120fac25 */
  if (!C.zf) goto L_120fac25;
L_120fac31:;
  /* 120fac31 lea ecx, [ecx + ecx*2] */
  ECX = ((uint32_t)(ECX + ECX*2));
  /* 120fac34 lea ecx, [edx + ecx*4] */
  ECX = ((uint32_t)(EDX + ECX*4));
  /* 120fac37 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac39 jae 0x120fac40 */
  if (!C.cf) goto L_120fac40;
  /* 120fac3b cmp dword ptr [eax + 4], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac3e je 0x120fac42 */
  if (C.zf) goto L_120fac42;
L_120fac40:;
  /* 120fac40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fac42:;
  /* 120fac42 pop edi */
  EDI = (pop32());
  /* 120fac43 pop esi */
  ESI = (pop32());
  /* 120fac44 ret  */
  ESPCHK(0x120fac08u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac45 @ 0x120fac45 (115 bytes, 41 insns) */
void f_120fac45(void) {
  FTRACE(0x120fac45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fac45 push esi */
  push32((uint32_t)(ESI));
  /* 120fac46 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120fac4a push edi */
  push32((uint32_t)(EDI));
  /* 120fac4b push esi */
  push32((uint32_t)(ESI));
  /* 120fac4c call 0x120f8e3c */
  push32(0x120fac51u); f_120f8e3c();
  /* 120fac51 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac54 pop ecx */
  ECX = (pop32());
  /* 120fac55 jne 0x120fac64 */
  if (!C.zf) goto L_120fac64;
  /* 120fac57 call 0x120f8dab */
  push32(0x120fac5cu); f_120f8dab();
  /* 120fac5c mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 120fac62 jmp 0x120fac91 */
  goto L_120fac91;
L_120fac64:;
  /* 120fac64 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 120fac68 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fac6a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 120fac6e push eax */
  push32((uint32_t)(EAX));
  /* 120fac6f call dword ptr [0x120fd028] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd028))), 0x120fac75u);
  /* 120fac75 mov edi, eax */
  EDI = (EAX);
  /* 120fac77 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fac7a jne 0x120fac84 */
  if (!C.zf) goto L_120fac84;
  /* 120fac7c call dword ptr [0x120fd0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd0c4))), 0x120fac82u);
  /* 120fac82 jmp 0x120fac86 */
  goto L_120fac86;
L_120fac84:;
  /* 120fac84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fac86:;
  /* 120fac86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fac88 je 0x120fac96 */
  if (C.zf) goto L_120fac96;
  /* 120fac8a push eax */
  push32((uint32_t)(EAX));
  /* 120fac8b call 0x120f8d38 */
  push32(0x120fac90u); f_120f8d38();
  /* 120fac90 pop ecx */
  ECX = (pop32());
L_120fac91:;
  /* 120fac91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fac94 jmp 0x120facb5 */
  goto L_120facb5;
L_120fac96:;
  /* 120fac96 mov ecx, esi */
  ECX = (ESI);
  /* 120fac98 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 120fac9b sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 120fac9e mov eax, esi */
  EAX = (ESI);
  /* 120faca0 mov ecx, dword ptr [ecx*4 + 0x12104480] */
  ECX = (r32((uint32_t)(ECX*4 + 0x12104480)));
  /* 120faca7 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 120facaa and byte ptr [ecx + eax*4 + 4], 0xfd */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0xfdu); w8((uint32_t)(ECX + EAX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 120facaf lea eax, [ecx + eax*4 + 4] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0x4));
  /* 120facb3 mov eax, edi */
  EAX = (EDI);
L_120facb5:;
  /* 120facb5 pop edi */
  EDI = (pop32());
  /* 120facb6 pop esi */
  ESI = (pop32());
  /* 120facb7 ret  */
  ESPCHK(0x120fac45u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acb8 @ 0x120facb8 (318 bytes, 123 insns) */
void f_120facb8(void) {
  FTRACE(0x120facb8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120facb8 push ebp */
  push32((uint32_t)(EBP));
  /* 120facb9 mov ebp, esp */
  EBP = (ESP);
  /* 120facbb push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120facbd push 0x120fd700 */
  push32((uint32_t)(0x120fd700u));
  /* 120facc2 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120facc7 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120faccd push eax */
  push32((uint32_t)(EAX));
  /* 120facce mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120facd5 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120facd8 push ebx */
  push32((uint32_t)(EBX));
  /* 120facd9 push esi */
  push32((uint32_t)(ESI));
  /* 120facda push edi */
  push32((uint32_t)(EDI));
  /* 120facdb mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120facde mov eax, dword ptr [0x1210418c] */
  EAX = (r32((uint32_t)(0x1210418c)));
  /* 120face3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120face5 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120face7 jne 0x120fad27 */
  if (!C.zf) goto L_120fad27;
  /* 120face9 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120facec push eax */
  push32((uint32_t)(EAX));
  /* 120faced push 1 */
  push32((uint32_t)(0x1u));
  /* 120facef pop esi */
  ESI = (pop32());
  /* 120facf0 push esi */
  push32((uint32_t)(ESI));
  /* 120facf1 push 0x120fd6fc */
  push32((uint32_t)(0x120fd6fcu));
  /* 120facf6 push esi */
  push32((uint32_t)(ESI));
  /* 120facf7 call dword ptr [0x120fd020] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd020))), 0x120facfdu);
  /* 120facfd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120facff je 0x120fad05 */
  if (C.zf) goto L_120fad05;
  /* 120fad01 mov eax, esi */
  EAX = (ESI);
  /* 120fad03 jmp 0x120fad22 */
  goto L_120fad22;
L_120fad05:;
  /* 120fad05 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120fad08 push eax */
  push32((uint32_t)(EAX));
  /* 120fad09 push esi */
  push32((uint32_t)(ESI));
  /* 120fad0a push 0x120fd6f8 */
  push32((uint32_t)(0x120fd6f8u));
  /* 120fad0f push esi */
  push32((uint32_t)(ESI));
  /* 120fad10 push ebx */
  push32((uint32_t)(EBX));
  /* 120fad11 call dword ptr [0x120fd018] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd018))), 0x120fad17u);
  /* 120fad17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fad19 je 0x120faded */
  if (C.zf) goto L_120faded;
  /* 120fad1f push 2 */
  push32((uint32_t)(0x2u));
  /* 120fad21 pop eax */
  EAX = (pop32());
L_120fad22:;
  /* 120fad22 mov dword ptr [0x1210418c], eax */
  w32((uint32_t)(0x1210418c), (EAX));
L_120fad27:;
  /* 120fad27 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fad2a jne 0x120fad50 */
  if (!C.zf) goto L_120fad50;
  /* 120fad2c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120fad2f cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fad31 jne 0x120fad38 */
  if (!C.zf) goto L_120fad38;
  /* 120fad33 mov eax, dword ptr [0x12104150] */
  EAX = (r32((uint32_t)(0x12104150)));
L_120fad38:;
  /* 120fad38 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120fad3b push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fad3e push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fad41 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fad44 push eax */
  push32((uint32_t)(EAX));
  /* 120fad45 call dword ptr [0x120fd018] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd018))), 0x120fad4bu);
  /* 120fad4b jmp 0x120fadef */
  goto L_120fadef;
L_120fad50:;
  /* 120fad50 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fad53 jne 0x120faded */
  if (!C.zf) goto L_120faded;
  /* 120fad59 cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fad5c jne 0x120fad66 */
  if (!C.zf) goto L_120fad66;
  /* 120fad5e mov eax, dword ptr [0x12104160] */
  EAX = (r32((uint32_t)(0x12104160)));
  /* 120fad63 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_120fad66:;
  /* 120fad66 push ebx */
  push32((uint32_t)(EBX));
  /* 120fad67 push ebx */
  push32((uint32_t)(EBX));
  /* 120fad68 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fad6b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fad6e mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 120fad71 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fad73 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fad75 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 120fad78 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fad79 push eax */
  push32((uint32_t)(EAX));
  /* 120fad7a push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fad7d call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120fad83u);
  /* 120fad83 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120fad86 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fad88 je 0x120faded */
  if (C.zf) goto L_120faded;
  /* 120fad8a mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 120fad8d lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 120fad90 mov eax, edi */
  EAX = (EDI);
  /* 120fad92 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fad95 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120fad97 call 0x120fa7c0 */
  push32(0x120fad9cu); f_120fa7c0();
  /* 120fad9c mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fad9f mov esi, esp */
  ESI = (ESP);
  /* 120fada1 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 120fada4 push edi */
  push32((uint32_t)(EDI));
  /* 120fada5 push ebx */
  push32((uint32_t)(EBX));
  /* 120fada6 push esi */
  push32((uint32_t)(ESI));
  /* 120fada7 call 0x120f9c70 */
  push32(0x120fadacu); f_120f9c70();
  /* 120fadac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fadaf jmp 0x120fadbc */
  goto L_120fadbc;
  /* 120fadb1 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fadb3 pop eax */
  EAX = (pop32());
  /* 120fadb4 ret  */
  ESPCHK(0x120facb8u, _esp0);
  ESP += 4; return;
  /* 120fadb5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120fadb8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fadba xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120fadbc:;
  /* 120fadbc or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fadc0 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fadc2 je 0x120faded */
  if (C.zf) goto L_120faded;
  /* 120fadc4 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 120fadc7 push esi */
  push32((uint32_t)(ESI));
  /* 120fadc8 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fadcb push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fadce push 1 */
  push32((uint32_t)(0x1u));
  /* 120fadd0 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fadd3 call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120fadd9u);
  /* 120fadd9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faddb je 0x120faded */
  if (C.zf) goto L_120faded;
  /* 120faddd push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120fade0 push eax */
  push32((uint32_t)(EAX));
  /* 120fade1 push esi */
  push32((uint32_t)(ESI));
  /* 120fade2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fade5 call dword ptr [0x120fd020] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd020))), 0x120fadebu);
  /* 120fadeb jmp 0x120fadef */
  goto L_120fadef;
L_120faded:;
  /* 120faded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fadef:;
  /* 120fadef lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 120fadf2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120fadf5 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120fadfc pop edi */
  EDI = (pop32());
  /* 120fadfd pop esi */
  ESI = (pop32());
  /* 120fadfe pop ebx */
  EBX = (pop32());
  /* 120fadff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fae00 ret  */
  ESPCHK(0x120facb8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae01 @ 0x120fae01 (511 bytes, 193 insns) */
void f_120fae01(void) {
  FTRACE(0x120fae01u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fae01 push ebp */
  push32((uint32_t)(EBP));
  /* 120fae02 mov ebp, esp */
  EBP = (ESP);
  /* 120fae04 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120fae06 push 0x120fd710 */
  push32((uint32_t)(0x120fd710u));
  /* 120fae0b push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120fae10 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120fae16 push eax */
  push32((uint32_t)(EAX));
  /* 120fae17 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120fae1e sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fae21 push ebx */
  push32((uint32_t)(EBX));
  /* 120fae22 push esi */
  push32((uint32_t)(ESI));
  /* 120fae23 push edi */
  push32((uint32_t)(EDI));
  /* 120fae24 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fae27 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fae29 cmp dword ptr [0x12104190], edi */
  { uint32_t _a=(r32((uint32_t)(0x12104190))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fae2f jne 0x120fae77 */
  if (!C.zf) goto L_120fae77;
  /* 120fae31 push edi */
  push32((uint32_t)(EDI));
  /* 120fae32 push edi */
  push32((uint32_t)(EDI));
  /* 120fae33 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fae35 pop ebx */
  EBX = (pop32());
  /* 120fae36 push ebx */
  push32((uint32_t)(EBX));
  /* 120fae37 push 0x120fd6fc */
  push32((uint32_t)(0x120fd6fcu));
  /* 120fae3c mov esi, 0x100 */
  ESI = (0x100u);
  /* 120fae41 push esi */
  push32((uint32_t)(ESI));
  /* 120fae42 push edi */
  push32((uint32_t)(EDI));
  /* 120fae43 call dword ptr [0x120fd010] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd010))), 0x120fae49u);
  /* 120fae49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fae4b je 0x120fae55 */
  if (C.zf) goto L_120fae55;
  /* 120fae4d mov dword ptr [0x12104190], ebx */
  w32((uint32_t)(0x12104190), (EBX));
  /* 120fae53 jmp 0x120fae77 */
  goto L_120fae77;
L_120fae55:;
  /* 120fae55 push edi */
  push32((uint32_t)(EDI));
  /* 120fae56 push edi */
  push32((uint32_t)(EDI));
  /* 120fae57 push ebx */
  push32((uint32_t)(EBX));
  /* 120fae58 push 0x120fd6f8 */
  push32((uint32_t)(0x120fd6f8u));
  /* 120fae5d push esi */
  push32((uint32_t)(ESI));
  /* 120fae5e push edi */
  push32((uint32_t)(EDI));
  /* 120fae5f call dword ptr [0x120fd014] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd014))), 0x120fae65u);
  /* 120fae65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fae67 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120fae6d mov dword ptr [0x12104190], 2 */
  w32((uint32_t)(0x12104190), (0x2u));
L_120fae77:;
  /* 120fae77 cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fae7a jle 0x120fae8c */
  if ((C.zf||C.sf!=C.of)) goto L_120fae8c;
  /* 120fae7c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120fae7f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fae82 call 0x120fc0f3 */
  push32(0x120fae87u); f_120fc0f3();
  /* 120fae87 pop ecx */
  ECX = (pop32());
  /* 120fae88 pop ecx */
  ECX = (pop32());
  /* 120fae89 mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_120fae8c:;
  /* 120fae8c mov eax, dword ptr [0x12104190] */
  EAX = (r32((uint32_t)(0x12104190)));
  /* 120fae91 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fae94 jne 0x120faeb3 */
  if (!C.zf) goto L_120faeb3;
  /* 120fae96 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fae99 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fae9c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120fae9f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120faea2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120faea5 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120faea8 call dword ptr [0x120fd014] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd014))), 0x120faeaeu);
  /* 120faeae jmp 0x120faf91 */
  goto L_120faf91;
L_120faeb3:;
  /* 120faeb3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faeb6 jne 0x120faf8f */
  if (!C.zf) goto L_120faf8f;
  /* 120faebc cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faebf jne 0x120faec9 */
  if (!C.zf) goto L_120faec9;
  /* 120faec1 mov eax, dword ptr [0x12104160] */
  EAX = (r32((uint32_t)(0x12104160)));
  /* 120faec6 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_120faec9:;
  /* 120faec9 push edi */
  push32((uint32_t)(EDI));
  /* 120faeca push edi */
  push32((uint32_t)(EDI));
  /* 120faecb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120faece push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120faed1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 120faed4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120faed6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120faed8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 120faedb inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120faedc push eax */
  push32((uint32_t)(EAX));
  /* 120faedd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120faee0 call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120faee6u);
  /* 120faee6 mov ebx, eax */
  EBX = (EAX);
  /* 120faee8 mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 120faeeb cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faeed je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120faef3 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120faef6 lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 120faef9 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120faefc and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120faefe call 0x120fa7c0 */
  push32(0x120faf03u); f_120fa7c0();
  /* 120faf03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120faf06 mov eax, esp */
  EAX = (ESP);
  /* 120faf08 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120faf0b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120faf0f jmp 0x120faf24 */
  goto L_120faf24;
  /* 120faf11 push 1 */
  push32((uint32_t)(0x1u));
  /* 120faf13 pop eax */
  EAX = (pop32());
  /* 120faf14 ret  */
  ESPCHK(0x120fae01u, _esp0);
  ESP += 4; return;
  /* 120faf15 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120faf18 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120faf1a mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 120faf1d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120faf21 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_120faf24:;
  /* 120faf24 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faf27 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120faf29 push ebx */
  push32((uint32_t)(EBX));
  /* 120faf2a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120faf2d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120faf30 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120faf33 push 1 */
  push32((uint32_t)(0x1u));
  /* 120faf35 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120faf38 call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120faf3eu);
  /* 120faf3e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faf40 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120faf42 push edi */
  push32((uint32_t)(EDI));
  /* 120faf43 push edi */
  push32((uint32_t)(EDI));
  /* 120faf44 push ebx */
  push32((uint32_t)(EBX));
  /* 120faf45 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120faf48 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120faf4b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120faf4e call dword ptr [0x120fd010] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd010))), 0x120faf54u);
  /* 120faf54 mov esi, eax */
  ESI = (EAX);
  /* 120faf56 mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 120faf59 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faf5b je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120faf5d test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 120faf61 je 0x120fafa3 */
  if (C.zf) goto L_120fafa3;
  /* 120faf63 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faf66 je 0x120fb01e */
  if (C.zf) goto L_120fb01e;
  /* 120faf6c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faf6f jg 0x120faf8f */
  if ((!C.zf&&C.sf==C.of)) goto L_120faf8f;
  /* 120faf71 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120faf74 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120faf77 push ebx */
  push32((uint32_t)(EBX));
  /* 120faf78 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120faf7b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120faf7e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120faf81 call dword ptr [0x120fd010] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd010))), 0x120faf87u);
  /* 120faf87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faf89 jne 0x120fb01e */
  if (!C.zf) goto L_120fb01e;
L_120faf8f:;
  /* 120faf8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120faf91:;
  /* 120faf91 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 120faf94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120faf97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120faf9e pop edi */
  EDI = (pop32());
  /* 120faf9f pop esi */
  ESI = (pop32());
  /* 120fafa0 pop ebx */
  EBX = (pop32());
  /* 120fafa1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fafa2 ret  */
  ESPCHK(0x120fae01u, _esp0);
  ESP += 4; return;
L_120fafa3:;
  /* 120fafa3 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120fafaa lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 120fafad add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fafb0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120fafb2 call 0x120fa7c0 */
  push32(0x120fafb7u); f_120fa7c0();
  /* 120fafb7 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fafba mov ebx, esp */
  EBX = (ESP);
  /* 120fafbc mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 120fafbf or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fafc3 jmp 0x120fafd7 */
  goto L_120fafd7;
  /* 120fafc5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fafc7 pop eax */
  EAX = (pop32());
  /* 120fafc8 ret  */
  ESPCHK(0x120fae01u, _esp0);
  ESP += 4; return;
  /* 120fafc9 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120fafcc xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fafce xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fafd0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fafd4 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_120fafd7:;
  /* 120fafd7 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fafd9 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120fafdb push esi */
  push32((uint32_t)(ESI));
  /* 120fafdc push ebx */
  push32((uint32_t)(EBX));
  /* 120fafdd push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 120fafe0 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fafe3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fafe6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fafe9 call dword ptr [0x120fd010] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd010))), 0x120fafefu);
  /* 120fafef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120faff1 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
  /* 120faff3 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120faff6 push edi */
  push32((uint32_t)(EDI));
  /* 120faff7 push edi */
  push32((uint32_t)(EDI));
  /* 120faff8 jne 0x120faffe */
  if (!C.zf) goto L_120faffe;
  /* 120faffa push edi */
  push32((uint32_t)(EDI));
  /* 120faffb push edi */
  push32((uint32_t)(EDI));
  /* 120faffc jmp 0x120fb004 */
  goto L_120fb004;
L_120faffe:;
  /* 120faffe push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fb001 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_120fb004:;
  /* 120fb004 push esi */
  push32((uint32_t)(ESI));
  /* 120fb005 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb006 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 120fb00b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fb00e call dword ptr [0x120fd088] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd088))), 0x120fb014u);
  /* 120fb014 mov esi, eax */
  ESI = (EAX);
  /* 120fb016 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb018 je 0x120faf8f */
  if (C.zf) goto L_120faf8f;
L_120fb01e:;
  /* 120fb01e mov eax, esi */
  EAX = (ESI);
  /* 120fb020 jmp 0x120faf91 */
  goto L_120faf91;
}

/* FUN_1000b025 @ 0x120fb025 (33 bytes, 15 insns) */
void f_120fb025(void) {
  FTRACE(0x120fb025u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb025 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 120fb029 push esi */
  push32((uint32_t)(ESI));
  /* 120fb02a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 120fb02e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fb030 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 120fb033 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb035 jb 0x120fb03b */
  if (C.cf) goto L_120fb03b;
  /* 120fb037 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb039 jae 0x120fb03e */
  if (!C.cf) goto L_120fb03e;
L_120fb03b:;
  /* 120fb03b push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb03d pop eax */
  EAX = (pop32());
L_120fb03e:;
  /* 120fb03e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 120fb042 pop esi */
  ESI = (pop32());
  /* 120fb043 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120fb045 ret  */
  ESPCHK(0x120fb025u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x120fb046 (94 bytes, 38 insns) */
void f_120fb046(void) {
  FTRACE(0x120fb046u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb046 push esi */
  push32((uint32_t)(ESI));
  /* 120fb047 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 120fb04b push edi */
  push32((uint32_t)(EDI));
  /* 120fb04c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 120fb050 push esi */
  push32((uint32_t)(ESI));
  /* 120fb051 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 120fb053 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120fb055 call 0x120fb025 */
  push32(0x120fb05au); f_120fb025();
  /* 120fb05a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb05d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb05f je 0x120fb078 */
  if (C.zf) goto L_120fb078;
  /* 120fb061 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 120fb064 push eax */
  push32((uint32_t)(EAX));
  /* 120fb065 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb067 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 120fb069 call 0x120fb025 */
  push32(0x120fb06eu); f_120fb025();
  /* 120fb06e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb071 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb073 je 0x120fb078 */
  if (C.zf) goto L_120fb078;
  /* 120fb075 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_120fb078:;
  /* 120fb078 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 120fb07b push eax */
  push32((uint32_t)(EAX));
  /* 120fb07c push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 120fb07f push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 120fb081 call 0x120fb025 */
  push32(0x120fb086u); f_120fb025();
  /* 120fb086 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb089 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb08b je 0x120fb090 */
  if (C.zf) goto L_120fb090;
  /* 120fb08d inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_120fb090:;
  /* 120fb090 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 120fb093 push eax */
  push32((uint32_t)(EAX));
  /* 120fb094 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 120fb097 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 120fb099 call 0x120fb025 */
  push32(0x120fb09eu); f_120fb025();
  /* 120fb09e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb0a1 pop edi */
  EDI = (pop32());
  /* 120fb0a2 pop esi */
  ESI = (pop32());
  /* 120fb0a3 ret  */
  ESPCHK(0x120fb046u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0a4 @ 0x120fb0a4 (46 bytes, 21 insns) */
void f_120fb0a4(void) {
  FTRACE(0x120fb0a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb0a4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120fb0a8 push esi */
  push32((uint32_t)(ESI));
  /* 120fb0a9 push edi */
  push32((uint32_t)(EDI));
  /* 120fb0aa mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 120fb0ac mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 120fb0af mov ecx, esi */
  ECX = (ESI);
  /* 120fb0b1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb0b3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 120fb0b5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 120fb0b8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 120fb0bb or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 120fb0bd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120fb0c0 mov edx, edi */
  EDX = (EDI);
  /* 120fb0c2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 120fb0c5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 120fb0c8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120fb0ca or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120fb0cc pop edi */
  EDI = (pop32());
  /* 120fb0cd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120fb0d0 pop esi */
  ESI = (pop32());
  /* 120fb0d1 ret  */
  ESPCHK(0x120fb0a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0d2 @ 0x120fb0d2 (45 bytes, 21 insns) */
void f_120fb0d2(void) {
  FTRACE(0x120fb0d2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb0d2 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120fb0d6 push esi */
  push32((uint32_t)(ESI));
  /* 120fb0d7 push edi */
  push32((uint32_t)(EDI));
  /* 120fb0d8 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 120fb0db mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120fb0de mov esi, edx */
  ESI = (EDX);
  /* 120fb0e0 mov edi, ecx */
  EDI = (ECX);
  /* 120fb0e2 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 120fb0e5 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120fb0e7 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 120fb0e9 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120fb0ec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120fb0ee shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 120fb0f1 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120fb0f3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 120fb0f5 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 120fb0f7 pop edi */
  EDI = (pop32());
  /* 120fb0f8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120fb0fb mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120fb0fd pop esi */
  ESI = (pop32());
  /* 120fb0fe ret  */
  ESPCHK(0x120fb0d2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0ff @ 0x120fb0ff (199 bytes, 76 insns) */
void f_120fb0ff(void) {
  FTRACE(0x120fb0ffu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb0ff push ebp */
  push32((uint32_t)(EBP));
  /* 120fb100 mov ebp, esp */
  EBP = (ESP);
  /* 120fb102 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb105 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fb108 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb109 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb10c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb10e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb110 push esi */
  push32((uint32_t)(ESI));
  /* 120fb111 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 120fb118 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 120fb11a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 120fb11d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 120fb120 jbe 0x120fb173 */
  if ((C.cf||C.zf)) goto L_120fb173;
  /* 120fb122 push edi */
  push32((uint32_t)(EDI));
  /* 120fb123 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120fb126:;
  /* 120fb126 mov esi, ebx */
  ESI = (EBX);
  /* 120fb128 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 120fb12b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb12c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb12d push ebx */
  push32((uint32_t)(EBX));
  /* 120fb12e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb12f call 0x120fb0a4 */
  push32(0x120fb134u); f_120fb0a4();
  /* 120fb134 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb135 call 0x120fb0a4 */
  push32(0x120fb13au); f_120fb0a4();
  /* 120fb13a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb13d push eax */
  push32((uint32_t)(EAX));
  /* 120fb13e push ebx */
  push32((uint32_t)(EBX));
  /* 120fb13f call 0x120fb046 */
  push32(0x120fb144u); f_120fb046();
  /* 120fb144 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb145 call 0x120fb0a4 */
  push32(0x120fb14au); f_120fb0a4();
  /* 120fb14a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fb14d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 120fb151 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 120fb155 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120fb158 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120fb15b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb15e push eax */
  push32((uint32_t)(EAX));
  /* 120fb15f push ebx */
  push32((uint32_t)(EBX));
  /* 120fb160 call 0x120fb046 */
  push32(0x120fb165u); f_120fb046();
  /* 120fb165 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb168 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 120fb16b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 120fb16e jne 0x120fb126 */
  if (!C.zf) goto L_120fb126;
  /* 120fb170 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb172 pop edi */
  EDI = (pop32());
L_120fb173:;
  /* 120fb173 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb176 jne 0x120fb1a0 */
  if (!C.zf) goto L_120fb1a0;
  /* 120fb178 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 120fb17b mov eax, ecx */
  EAX = (ECX);
  /* 120fb17d shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120fb180 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 120fb183 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120fb185 mov esi, eax */
  ESI = (EAX);
  /* 120fb187 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 120fb18a shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 120fb18d or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 120fb18f shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120fb192 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fb199 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 120fb19c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 120fb19e jmp 0x120fb173 */
  goto L_120fb173;
L_120fb1a0:;
  /* 120fb1a0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_120fb1a5:;
  /* 120fb1a5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 120fb1a8 jne 0x120fb1ba */
  if (!C.zf) goto L_120fb1ba;
  /* 120fb1aa push ebx */
  push32((uint32_t)(EBX));
  /* 120fb1ab call 0x120fb0a4 */
  push32(0x120fb1b0u); f_120fb0a4();
  /* 120fb1b0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fb1b7 pop ecx */
  ECX = (pop32());
  /* 120fb1b8 jmp 0x120fb1a5 */
  goto L_120fb1a5;
L_120fb1ba:;
  /* 120fb1ba mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120fb1be pop esi */
  ESI = (pop32());
  /* 120fb1bf mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 120fb1c3 pop ebx */
  EBX = (pop32());
  /* 120fb1c4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fb1c5 ret  */
  ESPCHK(0x120fb0ffu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c6 @ 0x120fb1c6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_120fb1c6(void) {
  FTRACE(0x120fb1c6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb1c6 push ebp */
  push32((uint32_t)(EBP));
  /* 120fb1c7 mov ebp, esp */
  EBP = (ESP);
  /* 120fb1c9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb1cc push ebx */
  push32((uint32_t)(EBX));
  /* 120fb1cd push esi */
  push32((uint32_t)(ESI));
  /* 120fb1ce push edi */
  push32((uint32_t)(EDI));
  /* 120fb1cf mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb1d2 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 120fb1d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb1d7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120fb1da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fb1dc pop edx */
  EDX = (pop32());
  /* 120fb1dd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120fb1e0 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120fb1e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120fb1e6 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120fb1e9 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fb1ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120fb1ef mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120fb1f2 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120fb1f5 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120fb1f8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120fb1fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120fb1fe mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_120fb201:;
  /* 120fb201 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 120fb203 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb206 je 0x120fb217 */
  if (C.zf) goto L_120fb217;
  /* 120fb208 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb20b je 0x120fb217 */
  if (C.zf) goto L_120fb217;
  /* 120fb20d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb210 je 0x120fb217 */
  if (C.zf) goto L_120fb217;
  /* 120fb212 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb215 jne 0x120fb21a */
  if (!C.zf) goto L_120fb21a;
L_120fb217:;
  /* 120fb217 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb218 jmp 0x120fb201 */
  goto L_120fb201;
L_120fb21a:;
  /* 120fb21a push 4 */
  push32((uint32_t)(0x4u));
  /* 120fb21c pop esi */
  ESI = (pop32());
L_120fb21d:;
  /* 120fb21d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb21f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb220 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb223 ja 0x120fb4a0 */
  if ((!C.cf&&!C.zf)) goto L_120fb4a0;
  /* 120fb229 jmp dword ptr [eax*4 + 0x120fb667] */
  switch (EAX) {
    case 0: goto L_120fb230;
    case 1: goto L_120fb27f;
    case 2: goto L_120fb2d6;
    case 3: goto L_120fb300;
    case 4: goto L_120fb35b;
    case 5: goto L_120fb3d2;
    case 6: goto L_120fb408;
    case 7: goto L_120fb452;
    case 8: goto L_120fb431;
    case 9: goto L_120fb4b6;
    case 10: goto L_120fb4a0;
    case 11: goto L_120fb46c;
    default: x86_unimpl("switch@0x120fb229 out of table"); return;
  }
L_120fb230:;
  /* 120fb230 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb233 jl 0x120fb241 */
  if ((C.sf!=C.of)) goto L_120fb241;
  /* 120fb235 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb238 jg 0x120fb241 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb241;
L_120fb23a:;
  /* 120fb23a push 3 */
  push32((uint32_t)(0x3u));
  /* 120fb23c jmp 0x120fb45e */
  goto L_120fb45e;
L_120fb241:;
  /* 120fb241 cmp bl, byte ptr [0x121033c4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x121033c4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb247 jne 0x120fb250 */
  if (!C.zf) goto L_120fb250;
L_120fb249:;
  /* 120fb249 push 5 */
  push32((uint32_t)(0x5u));
  /* 120fb24b jmp 0x120fb496 */
  goto L_120fb496;
L_120fb250:;
  /* 120fb250 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fb253 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb256 je 0x120fb276 */
  if (C.zf) goto L_120fb276;
  /* 120fb258 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb259 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb25a je 0x120fb26a */
  if (C.zf) goto L_120fb26a;
  /* 120fb25c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb25f jne 0x120fb539 */
  if (!C.zf) goto L_120fb539;
  /* 120fb265 jmp 0x120fb2f9 */
  goto L_120fb2f9;
L_120fb26a:;
  /* 120fb26a push 2 */
  push32((uint32_t)(0x2u));
  /* 120fb26c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 120fb273 pop eax */
  EAX = (pop32());
  /* 120fb274 jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb276:;
  /* 120fb276 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 120fb27a push 2 */
  push32((uint32_t)(0x2u));
  /* 120fb27c pop eax */
  EAX = (pop32());
  /* 120fb27d jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb27f:;
  /* 120fb27f cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb282 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120fb285 jl 0x120fb28c */
  if ((C.sf!=C.of)) goto L_120fb28c;
  /* 120fb287 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb28a jle 0x120fb23a */
  if ((C.zf||C.sf!=C.of)) goto L_120fb23a;
L_120fb28c:;
  /* 120fb28c cmp bl, byte ptr [0x121033c4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x121033c4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb292 je 0x120fb354 */
  if (C.zf) goto L_120fb354;
  /* 120fb298 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb29b je 0x120fb2ce */
  if (C.zf) goto L_120fb2ce;
  /* 120fb29d cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2a0 je 0x120fb2ce */
  if (C.zf) goto L_120fb2ce;
  /* 120fb2a2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2a5 je 0x120fb2f9 */
  if (C.zf) goto L_120fb2f9;
L_120fb2a7:;
  /* 120fb2a7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2aa jle 0x120fb539 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb539;
  /* 120fb2b0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2b3 jle 0x120fb2c7 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb2c7;
  /* 120fb2b5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2b8 jle 0x120fb539 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb539;
  /* 120fb2be cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2c1 jg 0x120fb539 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb539;
L_120fb2c7:;
  /* 120fb2c7 push 6 */
  push32((uint32_t)(0x6u));
  /* 120fb2c9 jmp 0x120fb496 */
  goto L_120fb496;
L_120fb2ce:;
  /* 120fb2ce dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120fb2cf push 0xb */
  push32((uint32_t)(0xbu));
  /* 120fb2d1 jmp 0x120fb496 */
  goto L_120fb496;
L_120fb2d6:;
  /* 120fb2d6 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2d9 jl 0x120fb2e4 */
  if ((C.sf!=C.of)) goto L_120fb2e4;
  /* 120fb2db cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2de jle 0x120fb23a */
  if ((C.zf||C.sf!=C.of)) goto L_120fb23a;
L_120fb2e4:;
  /* 120fb2e4 cmp bl, byte ptr [0x121033c4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x121033c4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2ea je 0x120fb249 */
  if (C.zf) goto L_120fb249;
  /* 120fb2f0 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb2f3 jne 0x120fb4ae */
  if (!C.zf) goto L_120fb4ae;
L_120fb2f9:;
  /* 120fb2f9 mov eax, edx */
  EAX = (EDX);
  /* 120fb2fb jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb300:;
  /* 120fb300 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_120fb303:;
  /* 120fb303 cmp dword ptr [0x121033c0], edx */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb309 jle 0x120fb31c */
  if ((C.zf||C.sf!=C.of)) goto L_120fb31c;
  /* 120fb30b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb30e push esi */
  push32((uint32_t)(ESI));
  /* 120fb30f push eax */
  push32((uint32_t)(EAX));
  /* 120fb310 call 0x120f945b */
  push32(0x120fb315u); f_120f945b();
  /* 120fb315 pop ecx */
  ECX = (pop32());
  /* 120fb316 pop ecx */
  ECX = (pop32());
  /* 120fb317 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb319 pop edx */
  EDX = (pop32());
  /* 120fb31a jmp 0x120fb32a */
  goto L_120fb32a;
L_120fb31c:;
  /* 120fb31c mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fb322 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb325 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fb328 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_120fb32a:;
  /* 120fb32a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb32c je 0x120fb34c */
  if (C.zf) goto L_120fb34c;
  /* 120fb32e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb332 jae 0x120fb344 */
  if (!C.cf) goto L_120fb344;
  /* 120fb334 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120fb337 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120fb33a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fb33d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 120fb340 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 120fb342 jmp 0x120fb347 */
  goto L_120fb347;
L_120fb344:;
  /* 120fb344 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_120fb347:;
  /* 120fb347 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb349 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb34a jmp 0x120fb303 */
  goto L_120fb303;
L_120fb34c:;
  /* 120fb34c cmp bl, byte ptr [0x121033c4] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x121033c4))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb352 jne 0x120fb3bb */
  if (!C.zf) goto L_120fb3bb;
L_120fb354:;
  /* 120fb354 mov eax, esi */
  EAX = (ESI);
  /* 120fb356 jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb35b:;
  /* 120fb35b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb35f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120fb362 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120fb365 jne 0x120fb374 */
  if (!C.zf) goto L_120fb374;
L_120fb367:;
  /* 120fb367 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb36a jne 0x120fb374 */
  if (!C.zf) goto L_120fb374;
  /* 120fb36c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 120fb36f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb371 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb372 jmp 0x120fb367 */
  goto L_120fb367;
L_120fb374:;
  /* 120fb374 cmp dword ptr [0x121033c0], edx */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb37a jle 0x120fb38d */
  if ((C.zf||C.sf!=C.of)) goto L_120fb38d;
  /* 120fb37c movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb37f push esi */
  push32((uint32_t)(ESI));
  /* 120fb380 push eax */
  push32((uint32_t)(EAX));
  /* 120fb381 call 0x120f945b */
  push32(0x120fb386u); f_120f945b();
  /* 120fb386 pop ecx */
  ECX = (pop32());
  /* 120fb387 pop ecx */
  ECX = (pop32());
  /* 120fb388 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb38a pop edx */
  EDX = (pop32());
  /* 120fb38b jmp 0x120fb39b */
  goto L_120fb39b;
L_120fb38d:;
  /* 120fb38d mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fb393 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb396 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fb399 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_120fb39b:;
  /* 120fb39b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb39d je 0x120fb3bb */
  if (C.zf) goto L_120fb3bb;
  /* 120fb39f cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb3a3 jae 0x120fb3b6 */
  if (!C.cf) goto L_120fb3b6;
  /* 120fb3a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120fb3a8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 120fb3ab sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fb3ae inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 120fb3b1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 120fb3b4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_120fb3b6:;
  /* 120fb3b6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb3b8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb3b9 jmp 0x120fb374 */
  goto L_120fb374;
L_120fb3bb:;
  /* 120fb3bb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb3be je 0x120fb2ce */
  if (C.zf) goto L_120fb2ce;
  /* 120fb3c4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb3c7 je 0x120fb2ce */
  if (C.zf) goto L_120fb2ce;
  /* 120fb3cd jmp 0x120fb2a7 */
  goto L_120fb2a7;
L_120fb3d2:;
  /* 120fb3d2 cmp dword ptr [0x121033c0], edx */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb3d8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120fb3db jle 0x120fb3ee */
  if ((C.zf||C.sf!=C.of)) goto L_120fb3ee;
  /* 120fb3dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb3e0 push esi */
  push32((uint32_t)(ESI));
  /* 120fb3e1 push eax */
  push32((uint32_t)(EAX));
  /* 120fb3e2 call 0x120f945b */
  push32(0x120fb3e7u); f_120f945b();
  /* 120fb3e7 pop ecx */
  ECX = (pop32());
  /* 120fb3e8 pop ecx */
  ECX = (pop32());
  /* 120fb3e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb3eb pop edx */
  EDX = (pop32());
  /* 120fb3ec jmp 0x120fb3fc */
  goto L_120fb3fc;
L_120fb3ee:;
  /* 120fb3ee mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fb3f4 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb3f7 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fb3fa and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_120fb3fc:;
  /* 120fb3fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb3fe je 0x120fb4ae */
  if (C.zf) goto L_120fb4ae;
  /* 120fb404 mov eax, esi */
  EAX = (ESI);
  /* 120fb406 jmp 0x120fb45f */
  goto L_120fb45f;
L_120fb408:;
  /* 120fb408 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 120fb40b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb40e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120fb411 jl 0x120fb418 */
  if ((C.sf!=C.of)) goto L_120fb418;
  /* 120fb413 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb416 jle 0x120fb45c */
  if ((C.zf||C.sf!=C.of)) goto L_120fb45c;
L_120fb418:;
  /* 120fb418 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fb41b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb41e je 0x120fb494 */
  if (C.zf) goto L_120fb494;
  /* 120fb420 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb421 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb422 je 0x120fb488 */
  if (C.zf) goto L_120fb488;
  /* 120fb424 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb427 jne 0x120fb53c */
  if (!C.zf) goto L_120fb53c;
L_120fb42d:;
  /* 120fb42d push 8 */
  push32((uint32_t)(0x8u));
  /* 120fb42f jmp 0x120fb496 */
  goto L_120fb496;
L_120fb431:;
  /* 120fb431 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_120fb434:;
  /* 120fb434 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb437 jne 0x120fb43e */
  if (!C.zf) goto L_120fb43e;
  /* 120fb439 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb43b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb43c jmp 0x120fb434 */
  goto L_120fb434;
L_120fb43e:;
  /* 120fb43e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb441 jl 0x120fb539 */
  if ((C.sf!=C.of)) goto L_120fb539;
  /* 120fb447 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb44a jg 0x120fb539 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb539;
  /* 120fb450 jmp 0x120fb45c */
  goto L_120fb45c;
L_120fb452:;
  /* 120fb452 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb455 jl 0x120fb465 */
  if ((C.sf!=C.of)) goto L_120fb465;
  /* 120fb457 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb45a jg 0x120fb465 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb465;
L_120fb45c:;
  /* 120fb45c push 9 */
  push32((uint32_t)(0x9u));
L_120fb45e:;
  /* 120fb45e pop eax */
  EAX = (pop32());
L_120fb45f:;
  /* 120fb45f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120fb460 jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb465:;
  /* 120fb465 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb468 jne 0x120fb4ae */
  if (!C.zf) goto L_120fb4ae;
  /* 120fb46a jmp 0x120fb42d */
  goto L_120fb42d;
L_120fb46c:;
  /* 120fb46c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb470 je 0x120fb49c */
  if (C.zf) goto L_120fb49c;
  /* 120fb472 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fb475 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 120fb478 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb47b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120fb47e je 0x120fb494 */
  if (C.zf) goto L_120fb494;
  /* 120fb480 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb481 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb482 jne 0x120fb53c */
  if (!C.zf) goto L_120fb53c;
L_120fb488:;
  /* 120fb488 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 120fb48c push 7 */
  push32((uint32_t)(0x7u));
  /* 120fb48e pop eax */
  EAX = (pop32());
  /* 120fb48f jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb494:;
  /* 120fb494 push 7 */
  push32((uint32_t)(0x7u));
L_120fb496:;
  /* 120fb496 pop eax */
  EAX = (pop32());
  /* 120fb497 jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb49c:;
  /* 120fb49c push 0xa */
  push32((uint32_t)(0xau));
  /* 120fb49e dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120fb49f pop eax */
  EAX = (pop32());
L_120fb4a0:;
  /* 120fb4a0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb4a3 je 0x120fb53e */
  if (C.zf) goto L_120fb53e;
  /* 120fb4a9 jmp 0x120fb21d */
  goto L_120fb21d;
L_120fb4ae:;
  /* 120fb4ae mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb4b1 jmp 0x120fb53e */
  goto L_120fb53e;
L_120fb4b6:;
  /* 120fb4b6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 120fb4bd xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_120fb4bf:;
  /* 120fb4bf cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb4c6 jle 0x120fb4d7 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb4d7;
  /* 120fb4c8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb4cb push 4 */
  push32((uint32_t)(0x4u));
  /* 120fb4cd push eax */
  push32((uint32_t)(EAX));
  /* 120fb4ce call 0x120f945b */
  push32(0x120fb4d3u); f_120f945b();
  /* 120fb4d3 pop ecx */
  ECX = (pop32());
  /* 120fb4d4 pop ecx */
  ECX = (pop32());
  /* 120fb4d5 jmp 0x120fb4e6 */
  goto L_120fb4e6;
L_120fb4d7:;
  /* 120fb4d7 mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fb4dd movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb4e0 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fb4e3 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_120fb4e6:;
  /* 120fb4e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb4e8 je 0x120fb506 */
  if (C.zf) goto L_120fb506;
  /* 120fb4ea movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 120fb4ed lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 120fb4f0 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 120fb4f4 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb4fa jg 0x120fb501 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb501;
  /* 120fb4fc mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb4fe inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb4ff jmp 0x120fb4bf */
  goto L_120fb4bf;
L_120fb501:;
  /* 120fb501 mov esi, 0x1451 */
  ESI = (0x1451u);
L_120fb506:;
  /* 120fb506 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_120fb509:;
  /* 120fb509 cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb510 jle 0x120fb521 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb521;
  /* 120fb512 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb515 push 4 */
  push32((uint32_t)(0x4u));
  /* 120fb517 push eax */
  push32((uint32_t)(EAX));
  /* 120fb518 call 0x120f945b */
  push32(0x120fb51du); f_120f945b();
  /* 120fb51d pop ecx */
  ECX = (pop32());
  /* 120fb51e pop ecx */
  ECX = (pop32());
  /* 120fb51f jmp 0x120fb530 */
  goto L_120fb530;
L_120fb521:;
  /* 120fb521 mov ecx, dword ptr [0x121031b0] */
  ECX = (r32((uint32_t)(0x121031b0)));
  /* 120fb527 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 120fb52a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 120fb52d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_120fb530:;
  /* 120fb530 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb532 je 0x120fb539 */
  if (C.zf) goto L_120fb539;
  /* 120fb534 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fb536 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fb537 jmp 0x120fb509 */
  goto L_120fb509;
L_120fb539:;
  /* 120fb539 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120fb53a jmp 0x120fb53e */
  goto L_120fb53e;
L_120fb53c:;
  /* 120fb53c mov edi, ecx */
  EDI = (ECX);
L_120fb53e:;
  /* 120fb53e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fb541 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb545 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 120fb547 je 0x120fb626 */
  if (C.zf) goto L_120fb626;
  /* 120fb54d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 120fb54f pop eax */
  EAX = (pop32());
  /* 120fb550 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb553 jbe 0x120fb56a */
  if ((C.cf||C.zf)) goto L_120fb56a;
  /* 120fb555 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb559 jl 0x120fb55e */
  if ((C.sf!=C.of)) goto L_120fb55e;
  /* 120fb55b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_120fb55e:;
  /* 120fb55e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120fb561 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120fb564 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb565 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 120fb568 jmp 0x120fb56d */
  goto L_120fb56d;
L_120fb56a:;
  /* 120fb56a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_120fb56d:;
  /* 120fb56d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb571 jbe 0x120fb61c */
  if ((C.cf||C.zf)) goto L_120fb61c;
L_120fb577:;
  /* 120fb577 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb578 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb57b jne 0x120fb585 */
  if (!C.zf) goto L_120fb585;
  /* 120fb57d dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 120fb580 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 120fb583 jmp 0x120fb577 */
  goto L_120fb577;
L_120fb585:;
  /* 120fb585 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 120fb588 push eax */
  push32((uint32_t)(EAX));
  /* 120fb589 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 120fb58c push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120fb58f push eax */
  push32((uint32_t)(EAX));
  /* 120fb590 call 0x120fb0ff */
  push32(0x120fb595u); f_120fb0ff();
  /* 120fb595 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120fb598 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fb59a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb59d cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5a0 jge 0x120fb5a4 */
  if ((C.sf==C.of)) goto L_120fb5a4;
  /* 120fb5a2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120fb5a4:;
  /* 120fb5a4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb5a7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5aa jne 0x120fb5af */
  if (!C.zf) goto L_120fb5af;
  /* 120fb5ac add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120fb5af:;
  /* 120fb5af cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5b2 jne 0x120fb5b7 */
  if (!C.zf) goto L_120fb5b7;
  /* 120fb5b4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120fb5b7:;
  /* 120fb5b7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5bc jle 0x120fb5ee */
  if ((C.zf||C.sf!=C.of)) goto L_120fb5ee;
  /* 120fb5be mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_120fb5c5:;
  /* 120fb5c5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb5c8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb5cb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb5ce mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_120fb5d1:;
  /* 120fb5d1 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5d5 je 0x120fb637 */
  if (C.zf) goto L_120fb637;
  /* 120fb5d7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fb5d9 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 120fb5de mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 120fb5e3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb5e5 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 120fb5ec jmp 0x120fb64c */
  goto L_120fb64c;
L_120fb5ee:;
  /* 120fb5ee cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb5f3 jge 0x120fb5fe */
  if ((C.sf==C.of)) goto L_120fb5fe;
  /* 120fb5f5 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 120fb5fc jmp 0x120fb5c5 */
  goto L_120fb5c5;
L_120fb5fe:;
  /* 120fb5fe push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 120fb601 push eax */
  push32((uint32_t)(EAX));
  /* 120fb602 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 120fb605 push eax */
  push32((uint32_t)(EAX));
  /* 120fb606 call 0x120fbdfa */
  push32(0x120fb60bu); f_120fbdfa();
  /* 120fb60b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 120fb60e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 120fb611 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 120fb614 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 120fb617 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb61a jmp 0x120fb5d1 */
  goto L_120fb5d1;
L_120fb61c:;
  /* 120fb61c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb61e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fb620 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120fb622 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fb624 jmp 0x120fb5d1 */
  goto L_120fb5d1;
L_120fb626:;
  /* 120fb626 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb628 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fb62a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120fb62c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fb62e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 120fb635 jmp 0x120fb64c */
  goto L_120fb64c;
L_120fb637:;
  /* 120fb637 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb63b je 0x120fb64c */
  if (C.zf) goto L_120fb64c;
  /* 120fb63d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120fb63f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fb641 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 120fb643 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fb645 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_120fb64c:;
  /* 120fb64c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fb64f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 120fb652 pop edi */
  EDI = (pop32());
  /* 120fb653 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 120fb656 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 120fb659 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 120fb65d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120fb660 pop esi */
  ESI = (pop32());
  /* 120fb661 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 120fb664 pop ebx */
  EBX = (pop32());
  /* 120fb665 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fb666 ret  */
  ESPCHK(0x120fb1c6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b697 @ 0x120fb697 (659 bytes, 232 insns) */
void f_120fb697(void) {
  FTRACE(0x120fb697u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb697 push ebp */
  push32((uint32_t)(EBP));
  /* 120fb698 mov ebp, esp */
  EBP = (ESP);
  /* 120fb69a sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb69d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fb6a0 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb6a1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120fb6a4 push esi */
  push32((uint32_t)(ESI));
  /* 120fb6a5 mov ecx, eax */
  ECX = (EAX);
  /* 120fb6a7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 120fb6ac and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120fb6b2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 120fb6b4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 120fb6b7 push edi */
  push32((uint32_t)(EDI));
  /* 120fb6b8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 120fb6bc mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 120fb6c0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 120fb6c4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 120fb6c8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 120fb6cc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 120fb6d0 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 120fb6d4 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 120fb6d8 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 120fb6dc mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 120fb6e0 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 120fb6e4 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 120fb6e8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120fb6ef mov edx, eax */
  EDX = (EAX);
  /* 120fb6f1 je 0x120fb6f9 */
  if (C.zf) goto L_120fb6f9;
  /* 120fb6f3 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 120fb6f7 jmp 0x120fb6fd */
  goto L_120fb6fd;
L_120fb6f9:;
  /* 120fb6f9 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_120fb6fd:;
  /* 120fb6fd mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fb700 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 120fb703 jne 0x120fb723 */
  if (!C.zf) goto L_120fb723;
  /* 120fb705 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120fb707 jne 0x120fb723 */
  if (!C.zf) goto L_120fb723;
  /* 120fb709 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb70c jne 0x120fb723 */
  if (!C.zf) goto L_120fb723;
L_120fb70e:;
  /* 120fb70e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 120fb712 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 120fb716 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 120fb71a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 120fb71e jmp 0x120fb921 */
  goto L_120fb921;
L_120fb723:;
  /* 120fb723 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fb726 jne 0x120fb7a2 */
  if (!C.zf) goto L_120fb7a2;
  /* 120fb728 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120fb72d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 120fb732 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb734 jne 0x120fb73c */
  if (!C.zf) goto L_120fb73c;
  /* 120fb736 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb73a je 0x120fb74b */
  if (C.zf) goto L_120fb74b;
L_120fb73c:;
  /* 120fb73c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 120fb742 jne 0x120fb74b */
  if (!C.zf) goto L_120fb74b;
  /* 120fb744 push 0x120fd740 */
  push32((uint32_t)(0x120fd740u));
  /* 120fb749 jmp 0x120fb791 */
  goto L_120fb791;
L_120fb74b:;
  /* 120fb74b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 120fb74e je 0x120fb765 */
  if (C.zf) goto L_120fb765;
  /* 120fb750 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb756 jne 0x120fb765 */
  if (!C.zf) goto L_120fb765;
  /* 120fb758 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb75c jne 0x120fb78c */
  if (!C.zf) goto L_120fb78c;
  /* 120fb75e push 0x120fd738 */
  push32((uint32_t)(0x120fd738u));
  /* 120fb763 jmp 0x120fb774 */
  goto L_120fb774;
L_120fb765:;
  /* 120fb765 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb767 jne 0x120fb78c */
  if (!C.zf) goto L_120fb78c;
  /* 120fb769 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb76d jne 0x120fb78c */
  if (!C.zf) goto L_120fb78c;
  /* 120fb76f push 0x120fd730 */
  push32((uint32_t)(0x120fd730u));
L_120fb774:;
  /* 120fb774 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 120fb777 push eax */
  push32((uint32_t)(EAX));
  /* 120fb778 call 0x120f9b80 */
  push32(0x120fb77du); f_120f9b80();
  /* 120fb77d pop ecx */
  ECX = (pop32());
  /* 120fb77e mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 120fb782 pop ecx */
  ECX = (pop32());
L_120fb783:;
  /* 120fb783 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fb787 jmp 0x120fb8fa */
  goto L_120fb8fa;
L_120fb78c:;
  /* 120fb78c push 0x120fd728 */
  push32((uint32_t)(0x120fd728u));
L_120fb791:;
  /* 120fb791 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 120fb794 push eax */
  push32((uint32_t)(EAX));
  /* 120fb795 call 0x120f9b80 */
  push32(0x120fb79au); f_120f9b80();
  /* 120fb79a pop ecx */
  ECX = (pop32());
  /* 120fb79b mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 120fb79f pop ecx */
  ECX = (pop32());
  /* 120fb7a0 jmp 0x120fb783 */
  goto L_120fb783;
L_120fb7a2:;
  /* 120fb7a2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 120fb7a5 mov ecx, edi */
  ECX = (EDI);
  /* 120fb7a7 mov esi, eax */
  ESI = (EAX);
  /* 120fb7a9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 120fb7ac imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120fb7b2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 120fb7b5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 120fb7ba push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb7bc lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 120fb7bf mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 120fb7c3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120fb7c6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 120fb7c9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 120fb7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fb7d3 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 120fb7d6 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 120fb7d9 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 120fb7dc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fb7de push eax */
  push32((uint32_t)(EAX));
  /* 120fb7df lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb7e2 push eax */
  push32((uint32_t)(EAX));
  /* 120fb7e3 call 0x120fbdfa */
  push32(0x120fb7e8u); f_120fbdfa();
  /* 120fb7e8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb7eb cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fb7f1 jb 0x120fb803 */
  if (C.cf) goto L_120fb803;
  /* 120fb7f3 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 120fb7f6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fb7f7 push eax */
  push32((uint32_t)(EAX));
  /* 120fb7f8 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb7fb push eax */
  push32((uint32_t)(EAX));
  /* 120fb7fc call 0x120fbbda */
  push32(0x120fb801u); f_120fbbda();
  /* 120fb801 pop ecx */
  ECX = (pop32());
  /* 120fb802 pop ecx */
  ECX = (pop32());
L_120fb803:;
  /* 120fb803 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 120fb807 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 120fb80a je 0x120fb81d */
  if (C.zf) goto L_120fb81d;
  /* 120fb80c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 120fb80f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 120fb812 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb814 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120fb816 jg 0x120fb820 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb820;
  /* 120fb818 jmp 0x120fb70e */
  goto L_120fb70e;
L_120fb81d:;
  /* 120fb81d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_120fb820:;
  /* 120fb820 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb823 jle 0x120fb828 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb828;
  /* 120fb825 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 120fb827 pop edi */
  EDI = (pop32());
L_120fb828:;
  /* 120fb828 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 120fb82c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb832 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 120fb837 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_120fb83e:;
  /* 120fb83e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb841 push eax */
  push32((uint32_t)(EAX));
  /* 120fb842 call 0x120fb0a4 */
  push32(0x120fb847u); f_120fb0a4();
  /* 120fb847 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 120fb84a pop ecx */
  ECX = (pop32());
  /* 120fb84b jne 0x120fb83e */
  if (!C.zf) goto L_120fb83e;
  /* 120fb84d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fb84f jge 0x120fb868 */
  if ((C.sf==C.of)) goto L_120fb868;
  /* 120fb851 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 120fb853 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 120fb859 jle 0x120fb868 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb868;
L_120fb85b:;
  /* 120fb85b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb85e push eax */
  push32((uint32_t)(EAX));
  /* 120fb85f call 0x120fb0d2 */
  push32(0x120fb864u); f_120fb0d2();
  /* 120fb864 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120fb865 pop ecx */
  ECX = (pop32());
  /* 120fb866 jne 0x120fb85b */
  if (!C.zf) goto L_120fb85b;
L_120fb868:;
  /* 120fb868 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 120fb86b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 120fb86e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120fb870 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 120fb873 jle 0x120fb8c5 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb8c5;
  /* 120fb875 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_120fb878:;
  /* 120fb878 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 120fb87b lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 120fb87e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb87f movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb880 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb883 push eax */
  push32((uint32_t)(EAX));
  /* 120fb884 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fb885 call 0x120fb0a4 */
  push32(0x120fb88au); f_120fb0a4();
  /* 120fb88a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb88d push eax */
  push32((uint32_t)(EAX));
  /* 120fb88e call 0x120fb0a4 */
  push32(0x120fb893u); f_120fb0a4();
  /* 120fb893 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120fb896 push eax */
  push32((uint32_t)(EAX));
  /* 120fb897 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb89a push eax */
  push32((uint32_t)(EAX));
  /* 120fb89b call 0x120fb046 */
  push32(0x120fb8a0u); f_120fb046();
  /* 120fb8a0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 120fb8a3 push eax */
  push32((uint32_t)(EAX));
  /* 120fb8a4 call 0x120fb0a4 */
  push32(0x120fb8a9u); f_120fb0a4();
  /* 120fb8a9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 120fb8ac mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 120fb8af and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 120fb8b3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fb8b6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fb8b8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 120fb8bb dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 120fb8be mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120fb8c0 jne 0x120fb878 */
  if (!C.zf) goto L_120fb878;
  /* 120fb8c2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_120fb8c5:;
  /* 120fb8c5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 120fb8c8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb8c9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb8ca cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb8cd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 120fb8d0 jl 0x120fb902 */
  if ((C.sf!=C.of)) goto L_120fb902;
L_120fb8d2:;
  /* 120fb8d2 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb8d4 jb 0x120fb8e5 */
  if (C.cf) goto L_120fb8e5;
  /* 120fb8d6 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb8d9 jne 0x120fb8e1 */
  if (!C.zf) goto L_120fb8e1;
  /* 120fb8db mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 120fb8de dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb8df jmp 0x120fb8d2 */
  goto L_120fb8d2;
L_120fb8e1:;
  /* 120fb8e1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb8e3 jae 0x120fb8e9 */
  if (!C.cf) goto L_120fb8e9;
L_120fb8e5:;
  /* 120fb8e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fb8e6 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_120fb8e9:;
  /* 120fb8e9 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_120fb8eb:;
  /* 120fb8eb sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fb8ed sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fb8ef mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 120fb8f2 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 120fb8f5 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_120fb8fa:;
  /* 120fb8fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120fb8fd:;
  /* 120fb8fd pop edi */
  EDI = (pop32());
  /* 120fb8fe pop esi */
  ESI = (pop32());
  /* 120fb8ff pop ebx */
  EBX = (pop32());
  /* 120fb900 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fb901 ret  */
  ESPCHK(0x120fb697u, _esp0);
  ESP += 4; return;
L_120fb902:;
  /* 120fb902 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb904 jb 0x120fb912 */
  if (C.cf) goto L_120fb912;
  /* 120fb906 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fb909 jne 0x120fb90e */
  if (!C.zf) goto L_120fb90e;
  /* 120fb90b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120fb90c jmp 0x120fb902 */
  goto L_120fb902;
L_120fb90e:;
  /* 120fb90e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb910 jae 0x120fb8eb */
  if (!C.cf) goto L_120fb8eb;
L_120fb912:;
  /* 120fb912 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 120fb916 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 120fb91a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 120fb91e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_120fb921:;
  /* 120fb921 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 120fb925 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb927 pop eax */
  EAX = (pop32());
  /* 120fb928 jmp 0x120fb8fd */
  goto L_120fb8fd;
}

/* FUN_1000b92a @ 0x120fb92a (111 bytes, 44 insns) */
void f_120fb92a(void) {
  FTRACE(0x120fb92au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb92a push ebx */
  push32((uint32_t)(EBX));
  /* 120fb92b xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fb92d cmp dword ptr [0x12104150], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104150))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb933 jne 0x120fb948 */
  if (!C.zf) goto L_120fb948;
  /* 120fb935 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fb939 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb93c jl 0x120fb997 */
  if ((C.sf!=C.of)) goto L_120fb997;
  /* 120fb93e cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb941 jg 0x120fb997 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fb997;
  /* 120fb943 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb946 pop ebx */
  EBX = (pop32());
  /* 120fb947 ret  */
  ESPCHK(0x120fb92au, _esp0);
  ESP += 4; return;
L_120fb948:;
  /* 120fb948 push esi */
  push32((uint32_t)(ESI));
  /* 120fb949 mov esi, 0x12104218 */
  ESI = (0x12104218u);
  /* 120fb94e push edi */
  push32((uint32_t)(EDI));
  /* 120fb94f push esi */
  push32((uint32_t)(ESI));
  /* 120fb950 call dword ptr [0x120fd038] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd038))), 0x120fb956u);
  /* 120fb956 cmp dword ptr [0x12104214], ebx */
  { uint32_t _a=(r32((uint32_t)(0x12104214))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb95c mov edi, dword ptr [0x120fd03c] */
  EDI = (r32((uint32_t)(0x120fd03c)));
  /* 120fb962 je 0x120fb972 */
  if (C.zf) goto L_120fb972;
  /* 120fb964 push esi */
  push32((uint32_t)(ESI));
  /* 120fb965 call edi */
  call_ind((uint32_t)(EDI), 0x120fb967u);
  /* 120fb967 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fb969 call 0x120f6edc */
  push32(0x120fb96eu); f_120f6edc();
  /* 120fb96e pop ecx */
  ECX = (pop32());
  /* 120fb96f push 1 */
  push32((uint32_t)(0x1u));
  /* 120fb971 pop ebx */
  EBX = (pop32());
L_120fb972:;
  /* 120fb972 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 120fb976 call 0x120fb999 */
  push32(0x120fb97bu); f_120fb999();
  /* 120fb97b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fb97d pop ecx */
  ECX = (pop32());
  /* 120fb97e mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 120fb982 je 0x120fb98e */
  if (C.zf) goto L_120fb98e;
  /* 120fb984 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fb986 call 0x120f6f3d */
  push32(0x120fb98bu); f_120f6f3d();
  /* 120fb98b pop ecx */
  ECX = (pop32());
  /* 120fb98c jmp 0x120fb991 */
  goto L_120fb991;
L_120fb98e:;
  /* 120fb98e push esi */
  push32((uint32_t)(ESI));
  /* 120fb98f call edi */
  call_ind((uint32_t)(EDI), 0x120fb991u);
L_120fb991:;
  /* 120fb991 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120fb995 pop edi */
  EDI = (pop32());
  /* 120fb996 pop esi */
  ESI = (pop32());
L_120fb997:;
  /* 120fb997 pop ebx */
  EBX = (pop32());
  /* 120fb998 ret  */
  ESPCHK(0x120fb92au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b999 @ 0x120fb999 (204 bytes, 71 insns) */
void f_120fb999(void) {
  FTRACE(0x120fb999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fb999 push ebp */
  push32((uint32_t)(EBP));
  /* 120fb99a mov ebp, esp */
  EBP = (ESP);
  /* 120fb99c push ecx */
  push32((uint32_t)(ECX));
  /* 120fb99d cmp dword ptr [0x12104150], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104150))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb9a4 push ebx */
  push32((uint32_t)(EBX));
  /* 120fb9a5 jne 0x120fb9c4 */
  if (!C.zf) goto L_120fb9c4;
  /* 120fb9a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fb9aa cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb9ad jl 0x120fba62 */
  if ((C.sf!=C.of)) goto L_120fba62;
  /* 120fb9b3 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb9b6 jg 0x120fba62 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fba62;
  /* 120fb9bc sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fb9bf jmp 0x120fba62 */
  goto L_120fba62;
L_120fb9c4:;
  /* 120fb9c4 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fb9c7 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb9cd jge 0x120fb9f7 */
  if ((C.sf==C.of)) goto L_120fb9f7;
  /* 120fb9cf cmp dword ptr [0x121033c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x121033c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fb9d6 jle 0x120fb9e4 */
  if ((C.zf||C.sf!=C.of)) goto L_120fb9e4;
  /* 120fb9d8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120fb9da push ebx */
  push32((uint32_t)(EBX));
  /* 120fb9db call 0x120f945b */
  push32(0x120fb9e0u); f_120f945b();
  /* 120fb9e0 pop ecx */
  ECX = (pop32());
  /* 120fb9e1 pop ecx */
  ECX = (pop32());
  /* 120fb9e2 jmp 0x120fb9ef */
  goto L_120fb9ef;
L_120fb9e4:;
  /* 120fb9e4 mov eax, dword ptr [0x121031b0] */
  EAX = (r32((uint32_t)(0x121031b0)));
  /* 120fb9e9 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 120fb9ec and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_120fb9ef:;
  /* 120fb9ef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fb9f1 jne 0x120fb9f7 */
  if (!C.zf) goto L_120fb9f7;
L_120fb9f3:;
  /* 120fb9f3 mov eax, ebx */
  EAX = (EBX);
  /* 120fb9f5 jmp 0x120fba62 */
  goto L_120fba62;
L_120fb9f7:;
  /* 120fb9f7 mov edx, dword ptr [0x121031b0] */
  EDX = (r32((uint32_t)(0x121031b0)));
  /* 120fb9fd mov eax, ebx */
  EAX = (EBX);
  /* 120fb9ff sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120fba02 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 120fba05 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 120fba0a je 0x120fba1a */
  if (C.zf) goto L_120fba1a;
  /* 120fba0c and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 120fba10 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 120fba13 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 120fba16 push 2 */
  push32((uint32_t)(0x2u));
  /* 120fba18 jmp 0x120fba23 */
  goto L_120fba23;
L_120fba1a:;
  /* 120fba1a and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 120fba1e mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 120fba21 push 1 */
  push32((uint32_t)(0x1u));
L_120fba23:;
  /* 120fba23 pop eax */
  EAX = (pop32());
  /* 120fba24 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120fba27 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fba29 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fba2b push 3 */
  push32((uint32_t)(0x3u));
  /* 120fba2d push ecx */
  push32((uint32_t)(ECX));
  /* 120fba2e push eax */
  push32((uint32_t)(EAX));
  /* 120fba2f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120fba32 push eax */
  push32((uint32_t)(EAX));
  /* 120fba33 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 120fba38 push dword ptr [0x12104150] */
  push32((uint32_t)(r32((uint32_t)(0x12104150))));
  /* 120fba3e call 0x120fae01 */
  push32(0x120fba43u); f_120fae01();
  /* 120fba43 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fba46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fba48 je 0x120fb9f3 */
  if (C.zf) goto L_120fb9f3;
  /* 120fba4a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fba4d jne 0x120fba55 */
  if (!C.zf) goto L_120fba55;
  /* 120fba4f movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120fba53 jmp 0x120fba62 */
  goto L_120fba62;
L_120fba55:;
  /* 120fba55 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 120fba59 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 120fba5d shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120fba60 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_120fba62:;
  /* 120fba62 pop ebx */
  EBX = (pop32());
  /* 120fba63 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fba64 ret  */
  ESPCHK(0x120fb999u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x120fbaa4 (63 bytes, 24 insns) */
void f_120fbaa4(void) {
  FTRACE(0x120fbaa4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbaa4 push ebp */
  push32((uint32_t)(EBP));
  /* 120fbaa5 mov ebp, esp */
  EBP = (ESP);
  /* 120fbaa7 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbaab jne 0x120fbab1 */
  if (!C.zf) goto L_120fbab1;
  /* 120fbaad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbaaf pop ebp */
  EBP = (pop32());
  /* 120fbab0 ret  */
  ESPCHK(0x120fbaa4u, _esp0);
  ESP += 4; return;
L_120fbab1:;
  /* 120fbab1 push dword ptr [0x1210421c] */
  push32((uint32_t)(r32((uint32_t)(0x1210421c))));
  /* 120fbab7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fbaba push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fbabd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fbac0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fbac3 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fbac5 push dword ptr [0x12104444] */
  push32((uint32_t)(r32((uint32_t)(0x12104444))));
  /* 120fbacb call 0x120fbe76 */
  push32(0x120fbad0u); f_120fbe76();
  /* 120fbad0 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbad3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbad5 jne 0x120fbade */
  if (!C.zf) goto L_120fbade;
  /* 120fbad7 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 120fbadc pop ebp */
  EBP = (pop32());
  /* 120fbadd ret  */
  ESPCHK(0x120fbaa4u, _esp0);
  ESP += 4; return;
L_120fbade:;
  /* 120fbade add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbae1 pop ebp */
  EBP = (pop32());
  /* 120fbae2 ret  */
  ESPCHK(0x120fbaa4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bae3 @ 0x120fbae3 (110 bytes, 58 insns) */
void f_120fbae3(void) {
  FTRACE(0x120fbae3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbae3 push ecx */
  push32((uint32_t)(ECX));
  /* 120fbae4 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbae5 push ebp */
  push32((uint32_t)(EBP));
  /* 120fbae6 push esi */
  push32((uint32_t)(ESI));
  /* 120fbae7 mov esi, dword ptr [0x12103ee0] */
  ESI = (r32((uint32_t)(0x12103ee0)));
  /* 120fbaed push edi */
  push32((uint32_t)(EDI));
  /* 120fbaee xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fbaf0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120fbaf2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbaf4 je 0x120fbb44 */
  if (C.zf) goto L_120fbb44;
  /* 120fbaf6 mov ebx, dword ptr [0x120fd088] */
  EBX = (r32((uint32_t)(0x120fd088)));
L_120fbafc:;
  /* 120fbafc push edi */
  push32((uint32_t)(EDI));
  /* 120fbafd push edi */
  push32((uint32_t)(EDI));
  /* 120fbafe push edi */
  push32((uint32_t)(EDI));
  /* 120fbaff push edi */
  push32((uint32_t)(EDI));
  /* 120fbb00 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120fbb02 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb03 push edi */
  push32((uint32_t)(EDI));
  /* 120fbb04 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fbb06 call ebx */
  call_ind((uint32_t)(EBX), 0x120fbb08u);
  /* 120fbb08 mov ebp, eax */
  EBP = (EAX);
  /* 120fbb0a cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbb0c je 0x120fbb4c */
  if (C.zf) goto L_120fbb4c;
  /* 120fbb0e push ebp */
  push32((uint32_t)(EBP));
  /* 120fbb0f call 0x120f5823 */
  push32(0x120fbb14u); f_120f5823();
  /* 120fbb14 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbb16 pop ecx */
  ECX = (pop32());
  /* 120fbb17 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 120fbb1b je 0x120fbb4c */
  if (C.zf) goto L_120fbb4c;
  /* 120fbb1d push edi */
  push32((uint32_t)(EDI));
  /* 120fbb1e push edi */
  push32((uint32_t)(EDI));
  /* 120fbb1f push ebp */
  push32((uint32_t)(EBP));
  /* 120fbb20 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb21 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120fbb23 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 120fbb25 push edi */
  push32((uint32_t)(EDI));
  /* 120fbb26 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fbb28 call ebx */
  call_ind((uint32_t)(EBX), 0x120fbb2au);
  /* 120fbb2a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbb2c je 0x120fbb4c */
  if (C.zf) goto L_120fbb4c;
  /* 120fbb2e push edi */
  push32((uint32_t)(EDI));
  /* 120fbb2f push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 120fbb33 call 0x120fc11e */
  push32(0x120fbb38u); f_120fc11e();
  /* 120fbb38 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120fbb3b add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbb3e pop ecx */
  ECX = (pop32());
  /* 120fbb3f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbb41 pop ecx */
  ECX = (pop32());
  /* 120fbb42 jne 0x120fbafc */
  if (!C.zf) goto L_120fbafc;
L_120fbb44:;
  /* 120fbb44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fbb46:;
  /* 120fbb46 pop edi */
  EDI = (pop32());
  /* 120fbb47 pop esi */
  ESI = (pop32());
  /* 120fbb48 pop ebp */
  EBP = (pop32());
  /* 120fbb49 pop ebx */
  EBX = (pop32());
  /* 120fbb4a pop ecx */
  ECX = (pop32());
  /* 120fbb4b ret  */
  ESPCHK(0x120fbae3u, _esp0);
  ESP += 4; return;
L_120fbb4c:;
  /* 120fbb4c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fbb4f jmp 0x120fbb46 */
  goto L_120fbb46;
}

/* FUN_1000bb60 @ 0x120fbb60 (62 bytes, 35 insns) */
void f_120fbb60(void) {
  FTRACE(0x120fbb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbb60 push ebp */
  push32((uint32_t)(EBP));
  /* 120fbb61 mov ebp, esp */
  EBP = (ESP);
  /* 120fbb63 push esi */
  push32((uint32_t)(ESI));
  /* 120fbb64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbb66 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb67 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb68 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb69 push eax */
  push32((uint32_t)(EAX));
  /* 120fbb6a push eax */
  push32((uint32_t)(EAX));
  /* 120fbb6b push eax */
  push32((uint32_t)(EAX));
  /* 120fbb6c push eax */
  push32((uint32_t)(EAX));
  /* 120fbb6d push eax */
  push32((uint32_t)(EAX));
  /* 120fbb6e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbb71 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fbb74:;
  /* 120fbb74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120fbb76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fbb78 je 0x120fbb81 */
  if (C.zf) goto L_120fbb81;
  /* 120fbb7a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120fbb7b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x120fbb7b");
  /* 120fbb7f jmp 0x120fbb74 */
  goto L_120fbb74;
L_120fbb81:;
  /* 120fbb81 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fbb84 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120fbb87 nop  */
  /* nop */
L_120fbb88:;
  /* 120fbb88 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120fbb89 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fbb8b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fbb8d je 0x120fbb96 */
  if (C.zf) goto L_120fbb96;
  /* 120fbb8f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fbb90 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x120fbb90");
  /* 120fbb94 jae 0x120fbb88 */
  if (!C.cf) goto L_120fbb88;
L_120fbb96:;
  /* 120fbb96 mov eax, ecx */
  EAX = (ECX);
  /* 120fbb98 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbb9b pop esi */
  ESI = (pop32());
  /* 120fbb9c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fbb9d ret  */
  ESPCHK(0x120fbb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x120fbba0 (58 bytes, 32 insns) */
void f_120fbba0(void) {
  FTRACE(0x120fbba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbba0 push ebp */
  push32((uint32_t)(EBP));
  /* 120fbba1 mov ebp, esp */
  EBP = (ESP);
  /* 120fbba3 push esi */
  push32((uint32_t)(ESI));
  /* 120fbba4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbba6 push eax */
  push32((uint32_t)(EAX));
  /* 120fbba7 push eax */
  push32((uint32_t)(EAX));
  /* 120fbba8 push eax */
  push32((uint32_t)(EAX));
  /* 120fbba9 push eax */
  push32((uint32_t)(EAX));
  /* 120fbbaa push eax */
  push32((uint32_t)(EAX));
  /* 120fbbab push eax */
  push32((uint32_t)(EAX));
  /* 120fbbac push eax */
  push32((uint32_t)(EAX));
  /* 120fbbad push eax */
  push32((uint32_t)(EAX));
  /* 120fbbae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbbb1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fbbb4:;
  /* 120fbbb4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120fbbb6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fbbb8 je 0x120fbbc1 */
  if (C.zf) goto L_120fbbc1;
  /* 120fbbba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120fbbbb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x120fbbbb");
  /* 120fbbbf jmp 0x120fbbb4 */
  goto L_120fbbb4;
L_120fbbc1:;
  /* 120fbbc1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_120fbbc4:;
  /* 120fbbc4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fbbc6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fbbc8 je 0x120fbbd4 */
  if (C.zf) goto L_120fbbd4;
  /* 120fbbca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fbbcb bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x120fbbcb");
  /* 120fbbcf jae 0x120fbbc4 */
  if (!C.cf) goto L_120fbbc4;
  /* 120fbbd1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_120fbbd4:;
  /* 120fbbd4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbbd7 pop esi */
  ESI = (pop32());
  /* 120fbbd8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fbbd9 ret  */
  ESPCHK(0x120fbba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbda @ 0x120fbbda (544 bytes, 177 insns) */
void f_120fbbda(void) {
  FTRACE(0x120fbbdau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbbda push ebp */
  push32((uint32_t)(EBP));
  /* 120fbbdb mov ebp, esp */
  EBP = (ESP);
  /* 120fbbdd sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fbbe0 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbbe1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbbe4 push esi */
  push32((uint32_t)(ESI));
  /* 120fbbe5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fbbe8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 120fbbec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbbee push edi */
  push32((uint32_t)(EDI));
  /* 120fbbef mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120fbbf2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fbbf5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120fbbf8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120fbbfb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 120fbbff mov edi, ecx */
  EDI = (ECX);
  /* 120fbc01 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 120fbc06 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 120fbc08 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbc0a and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120fbc0c and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 120fbc12 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbc16 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 120fbc19 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120fbc1c jae 0x120fbdda */
  if (!C.cf) goto L_120fbdda;
  /* 120fbc22 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbc27 jae 0x120fbdda */
  if (!C.cf) goto L_120fbdda;
  /* 120fbc2d cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbc32 ja 0x120fbdda */
  if ((!C.cf&&!C.zf)) goto L_120fbdda;
  /* 120fbc38 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbc3d ja 0x120fbc43 */
  if ((!C.cf&&!C.zf)) goto L_120fbc43;
  /* 120fbc3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbc41 jmp 0x120fbc7d */
  goto L_120fbc7d;
L_120fbc43:;
  /* 120fbc43 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 120fbc46 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 120fbc4b jne 0x120fbc65 */
  if (!C.zf) goto L_120fbc65;
  /* 120fbc4d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 120fbc50 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 120fbc53 jne 0x120fbc65 */
  if (!C.zf) goto L_120fbc65;
  /* 120fbc55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fbc57 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbc5a jne 0x120fbc67 */
  if (!C.zf) goto L_120fbc67;
  /* 120fbc5c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbc5e jne 0x120fbc67 */
  if (!C.zf) goto L_120fbc67;
  /* 120fbc60 jmp 0x120fbdd4 */
  goto L_120fbdd4;
L_120fbc65:;
  /* 120fbc65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fbc67:;
  /* 120fbc67 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbc6a jne 0x120fbc8a */
  if (!C.zf) goto L_120fbc8a;
  /* 120fbc6c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 120fbc6f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 120fbc72 jne 0x120fbc8a */
  if (!C.zf) goto L_120fbc8a;
  /* 120fbc74 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbc77 jne 0x120fbc8a */
  if (!C.zf) goto L_120fbc8a;
  /* 120fbc79 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbc7b jne 0x120fbc8a */
  if (!C.zf) goto L_120fbc8a;
L_120fbc7d:;
  /* 120fbc7d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 120fbc80 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 120fbc83 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120fbc85 jmp 0x120fbdf5 */
  goto L_120fbdf5;
L_120fbc8a:;
  /* 120fbc8a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120fbc8d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120fbc90 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120fbc93 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_120fbc9a:;
  /* 120fbc9a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120fbc9d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbc9f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbca3 jle 0x120fbcee */
  if ((C.zf||C.sf!=C.of)) goto L_120fbcee;
  /* 120fbca5 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbca7 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 120fbcaa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120fbcad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbcb0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120fbcb3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_120fbcb6:;
  /* 120fbcb6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120fbcb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120fbcbc movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 120fbcbf movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 120fbcc2 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120fbcc5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120fbcc8 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbccb push ecx */
  push32((uint32_t)(ECX));
  /* 120fbccc push eax */
  push32((uint32_t)(EAX));
  /* 120fbccd push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 120fbccf call 0x120fb025 */
  push32(0x120fbcd4u); f_120fb025();
  /* 120fbcd4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbcd7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbcd9 je 0x120fbce1 */
  if (C.zf) goto L_120fbce1;
  /* 120fbcdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120fbcde inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_120fbce1:;
  /* 120fbce1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbce5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 120fbce9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 120fbcec jne 0x120fbcb6 */
  if (!C.zf) goto L_120fbcb6;
L_120fbcee:;
  /* 120fbcee add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbcf2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 120fbcf5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 120fbcf8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbcfc jg 0x120fbc9a */
  if ((!C.zf&&C.sf==C.of)) goto L_120fbc9a;
  /* 120fbcfe add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbd05 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd0a jle 0x120fbd31 */
  if ((C.zf||C.sf!=C.of)) goto L_120fbd31;
L_120fbd0c:;
  /* 120fbd0c test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 120fbd10 jne 0x120fbd2a */
  if (!C.zf) goto L_120fbd2a;
  /* 120fbd12 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 120fbd15 push eax */
  push32((uint32_t)(EAX));
  /* 120fbd16 call 0x120fb0a4 */
  push32(0x120fbd1bu); f_120fb0a4();
  /* 120fbd1b add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbd22 pop ecx */
  ECX = (pop32());
  /* 120fbd23 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd28 jg 0x120fbd0c */
  if ((!C.zf&&C.sf==C.of)) goto L_120fbd0c;
L_120fbd2a:;
  /* 120fbd2a cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd2f jg 0x120fbd6a */
  if ((!C.zf&&C.sf==C.of)) goto L_120fbd6a;
L_120fbd31:;
  /* 120fbd31 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbd38 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd3d jge 0x120fbd6a */
  if ((C.sf==C.of)) goto L_120fbd6a;
  /* 120fbd3f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 120fbd43 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fbd45 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 120fbd48 mov ebx, eax */
  EBX = (EAX);
L_120fbd4a:;
  /* 120fbd4a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 120fbd4e je 0x120fbd53 */
  if (C.zf) goto L_120fbd53;
  /* 120fbd50 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_120fbd53:;
  /* 120fbd53 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 120fbd56 push eax */
  push32((uint32_t)(EAX));
  /* 120fbd57 call 0x120fb0d2 */
  push32(0x120fbd5cu); f_120fb0d2();
  /* 120fbd5c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120fbd5d pop ecx */
  ECX = (pop32());
  /* 120fbd5e jne 0x120fbd4a */
  if (!C.zf) goto L_120fbd4a;
  /* 120fbd60 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbd64 je 0x120fbd6a */
  if (C.zf) goto L_120fbd6a;
  /* 120fbd66 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_120fbd6a:;
  /* 120fbd6a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd70 ja 0x120fbd81 */
  if ((!C.cf&&!C.zf)) goto L_120fbd81;
  /* 120fbd72 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120fbd75 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120fbd7a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbd7f jne 0x120fbdb6 */
  if (!C.zf) goto L_120fbdb6;
L_120fbd81:;
  /* 120fbd81 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbd85 jne 0x120fbdb3 */
  if (!C.zf) goto L_120fbdb3;
  /* 120fbd87 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 120fbd8b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbd8f jne 0x120fbdae */
  if (!C.zf) goto L_120fbdae;
  /* 120fbd91 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 120fbd95 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbd9b jne 0x120fbda8 */
  if (!C.zf) goto L_120fbda8;
  /* 120fbd9d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 120fbda0 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 120fbda6 jmp 0x120fbdb6 */
  goto L_120fbdb6;
L_120fbda8:;
  /* 120fbda8 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 120fbdac jmp 0x120fbdb6 */
  goto L_120fbdb6;
L_120fbdae:;
  /* 120fbdae inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 120fbdb1 jmp 0x120fbdb6 */
  goto L_120fbdb6;
L_120fbdb3:;
  /* 120fbdb3 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_120fbdb6:;
  /* 120fbdb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fbdb9 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbdbd jae 0x120fbdda */
  if (!C.cf) goto L_120fbdda;
  /* 120fbdbf mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 120fbdc3 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 120fbdc5 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 120fbdc8 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120fbdcb mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 120fbdce mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120fbdd1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_120fbdd4:;
  /* 120fbdd4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 120fbdd8 jmp 0x120fbdf5 */
  goto L_120fbdf5;
L_120fbdda:;
  /* 120fbdda neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 120fbddd sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fbddf and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 120fbde3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 120fbde9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbdef and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 120fbdf2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_120fbdf5:;
  /* 120fbdf5 pop edi */
  EDI = (pop32());
  /* 120fbdf6 pop esi */
  ESI = (pop32());
  /* 120fbdf7 pop ebx */
  EBX = (pop32());
  /* 120fbdf8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fbdf9 ret  */
  ESPCHK(0x120fbbdau, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdfa @ 0x120fbdfa (124 bytes, 52 insns) */
void f_120fbdfa(void) {
  FTRACE(0x120fbdfau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbdfa push ebp */
  push32((uint32_t)(EBP));
  /* 120fbdfb mov ebp, esp */
  EBP = (ESP);
  /* 120fbdfd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fbe00 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbe01 mov ebx, 0x12103710 */
  EBX = (0x12103710u);
  /* 120fbe06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fbe08 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fbe0b cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbe0e je 0x120fbe73 */
  if (C.zf) goto L_120fbe73;
  /* 120fbe10 jge 0x120fbe22 */
  if ((C.sf==C.of)) goto L_120fbe22;
  /* 120fbe12 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbe15 mov ebx, 0x12103870 */
  EBX = (0x12103870u);
  /* 120fbe1a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fbe1c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120fbe1f sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_120fbe22:;
  /* 120fbe22 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbe25 jne 0x120fbe2d */
  if (!C.zf) goto L_120fbe2d;
  /* 120fbe27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fbe2a mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_120fbe2d:;
  /* 120fbe2d cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbe30 je 0x120fbe73 */
  if (C.zf) goto L_120fbe73;
  /* 120fbe32 push esi */
  push32((uint32_t)(ESI));
  /* 120fbe33 push edi */
  push32((uint32_t)(EDI));
L_120fbe34:;
  /* 120fbe34 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120fbe37 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fbe3a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 120fbe3e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 120fbe41 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbe43 je 0x120fbe6c */
  if (C.zf) goto L_120fbe6c;
  /* 120fbe45 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 120fbe48 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 120fbe4e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 120fbe51 jb 0x120fbe5f */
  if (C.cf) goto L_120fbe5f;
  /* 120fbe53 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 120fbe56 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fbe57 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fbe58 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 120fbe59 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 120fbe5c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_120fbe5f:;
  /* 120fbe5f push esi */
  push32((uint32_t)(ESI));
  /* 120fbe60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fbe63 call 0x120fbbda */
  push32(0x120fbe68u); f_120fbbda();
  /* 120fbe68 pop ecx */
  ECX = (pop32());
  /* 120fbe69 pop ecx */
  ECX = (pop32());
  /* 120fbe6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_120fbe6c:;
  /* 120fbe6c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbe6f jne 0x120fbe34 */
  if (!C.zf) goto L_120fbe34;
  /* 120fbe71 pop edi */
  EDI = (pop32());
  /* 120fbe72 pop esi */
  ESI = (pop32());
L_120fbe73:;
  /* 120fbe73 pop ebx */
  EBX = (pop32());
  /* 120fbe74 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fbe75 ret  */
  ESPCHK(0x120fbdfau, _esp0);
  ESP += 4; return;
}

/* FUN_1000be76 @ 0x120fbe76 (597 bytes, 239 insns) */
void f_120fbe76(void) {
  FTRACE(0x120fbe76u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fbe76 push ebp */
  push32((uint32_t)(EBP));
  /* 120fbe77 mov ebp, esp */
  EBP = (ESP);
  /* 120fbe79 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120fbe7b push 0x120fd748 */
  push32((uint32_t)(0x120fd748u));
  /* 120fbe80 push 0x120f8730 */
  push32((uint32_t)(0x120f8730u));
  /* 120fbe85 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120fbe8b push eax */
  push32((uint32_t)(EAX));
  /* 120fbe8c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120fbe93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fbe96 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbe97 push esi */
  push32((uint32_t)(ESI));
  /* 120fbe98 push edi */
  push32((uint32_t)(EDI));
  /* 120fbe99 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fbe9c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fbe9e cmp dword ptr [0x121041f8], ebx */
  { uint32_t _a=(r32((uint32_t)(0x121041f8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbea4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fbea6 pop edi */
  EDI = (pop32());
  /* 120fbea7 jne 0x120fbee9 */
  if (!C.zf) goto L_120fbee9;
  /* 120fbea9 push edi */
  push32((uint32_t)(EDI));
  /* 120fbeaa mov eax, 0x120fd6fc */
  EAX = (0x120fd6fcu);
  /* 120fbeaf push eax */
  push32((uint32_t)(EAX));
  /* 120fbeb0 push edi */
  push32((uint32_t)(EDI));
  /* 120fbeb1 push eax */
  push32((uint32_t)(EAX));
  /* 120fbeb2 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbeb3 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbeb4 call dword ptr [0x120fd00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd00c))), 0x120fbebau);
  /* 120fbeba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbebc je 0x120fbec6 */
  if (C.zf) goto L_120fbec6;
  /* 120fbebe mov dword ptr [0x121041f8], edi */
  w32((uint32_t)(0x121041f8), (EDI));
  /* 120fbec4 jmp 0x120fbee9 */
  goto L_120fbee9;
L_120fbec6:;
  /* 120fbec6 push edi */
  push32((uint32_t)(EDI));
  /* 120fbec7 mov eax, 0x120fd6f8 */
  EAX = (0x120fd6f8u);
  /* 120fbecc push eax */
  push32((uint32_t)(EAX));
  /* 120fbecd push edi */
  push32((uint32_t)(EDI));
  /* 120fbece push eax */
  push32((uint32_t)(EAX));
  /* 120fbecf push ebx */
  push32((uint32_t)(EBX));
  /* 120fbed0 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbed1 call dword ptr [0x120fd008] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd008))), 0x120fbed7u);
  /* 120fbed7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbed9 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fbedf mov dword ptr [0x121041f8], 2 */
  w32((uint32_t)(0x121041f8), (0x2u));
L_120fbee9:;
  /* 120fbee9 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 120fbeec cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbeee jle 0x120fbf00 */
  if ((C.zf||C.sf!=C.of)) goto L_120fbf00;
  /* 120fbef0 push esi */
  push32((uint32_t)(ESI));
  /* 120fbef1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fbef4 call 0x120fc0f3 */
  push32(0x120fbef9u); f_120fc0f3();
  /* 120fbef9 pop ecx */
  ECX = (pop32());
  /* 120fbefa pop ecx */
  ECX = (pop32());
  /* 120fbefb mov esi, eax */
  ESI = (EAX);
  /* 120fbefd mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_120fbf00:;
  /* 120fbf00 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf03 jle 0x120fbf15 */
  if ((C.zf||C.sf!=C.of)) goto L_120fbf15;
  /* 120fbf05 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fbf08 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fbf0b call 0x120fc0f3 */
  push32(0x120fbf10u); f_120fc0f3();
  /* 120fbf10 pop ecx */
  ECX = (pop32());
  /* 120fbf11 pop ecx */
  ECX = (pop32());
  /* 120fbf12 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_120fbf15:;
  /* 120fbf15 mov eax, dword ptr [0x121041f8] */
  EAX = (r32((uint32_t)(0x121041f8)));
  /* 120fbf1a cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf1d jne 0x120fbf3a */
  if (!C.zf) goto L_120fbf3a;
  /* 120fbf1f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fbf22 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fbf25 push esi */
  push32((uint32_t)(ESI));
  /* 120fbf26 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fbf29 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fbf2c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fbf2f call dword ptr [0x120fd008] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd008))), 0x120fbf35u);
  /* 120fbf35 jmp 0x120fc0e1 */
  goto L_120fc0e1;
L_120fbf3a:;
  /* 120fbf3a cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf3c jne 0x120fc0df */
  if (!C.zf) goto L_120fc0df;
  /* 120fbf42 cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf45 jne 0x120fbf4f */
  if (!C.zf) goto L_120fbf4f;
  /* 120fbf47 mov eax, dword ptr [0x12104160] */
  EAX = (r32((uint32_t)(0x12104160)));
  /* 120fbf4c mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_120fbf4f:;
  /* 120fbf4f cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf51 je 0x120fbf5c */
  if (C.zf) goto L_120fbf5c;
  /* 120fbf53 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf56 jne 0x120fbff4 */
  if (!C.zf) goto L_120fbff4;
L_120fbf5c:;
  /* 120fbf5c cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf5f jne 0x120fbf69 */
  if (!C.zf) goto L_120fbf69;
L_120fbf61:;
  /* 120fbf61 push 2 */
  push32((uint32_t)(0x2u));
L_120fbf63:;
  /* 120fbf63 pop eax */
  EAX = (pop32());
  /* 120fbf64 jmp 0x120fc0e1 */
  goto L_120fc0e1;
L_120fbf69:;
  /* 120fbf69 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf6c jle 0x120fbf75 */
  if ((C.zf||C.sf!=C.of)) goto L_120fbf75;
L_120fbf6e:;
  /* 120fbf6e mov eax, edi */
  EAX = (EDI);
  /* 120fbf70 jmp 0x120fc0e1 */
  goto L_120fc0e1;
L_120fbf75:;
  /* 120fbf75 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf77 jg 0x120fbfba */
  if ((!C.zf&&C.sf==C.of)) goto L_120fbfba;
  /* 120fbf79 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 120fbf7c push eax */
  push32((uint32_t)(EAX));
  /* 120fbf7d push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fbf80 call dword ptr [0x120fd030] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd030))), 0x120fbf86u);
  /* 120fbf86 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fbf88 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fbf8e cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf90 jle 0x120fbfbe */
  if ((C.zf||C.sf!=C.of)) goto L_120fbfbe;
  /* 120fbf92 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbf96 jb 0x120fbfba */
  if (C.cf) goto L_120fbfba;
  /* 120fbf98 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 120fbf9b cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbf9e je 0x120fbfba */
  if (C.zf) goto L_120fbfba;
L_120fbfa0:;
  /* 120fbfa0 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 120fbfa3 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfa5 je 0x120fbfba */
  if (C.zf) goto L_120fbfba;
  /* 120fbfa7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fbfaa mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 120fbfac cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfae jb 0x120fbfb4 */
  if (C.cf) goto L_120fbfb4;
  /* 120fbfb0 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfb2 jbe 0x120fbf61 */
  if ((C.cf||C.zf)) goto L_120fbf61;
L_120fbfb4:;
  /* 120fbfb4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fbfb5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fbfb6 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfb8 jne 0x120fbfa0 */
  if (!C.zf) goto L_120fbfa0;
L_120fbfba:;
  /* 120fbfba push 3 */
  push32((uint32_t)(0x3u));
  /* 120fbfbc jmp 0x120fbf63 */
  goto L_120fbf63;
L_120fbfbe:;
  /* 120fbfbe cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbfc1 jle 0x120fbff4 */
  if ((C.zf||C.sf!=C.of)) goto L_120fbff4;
  /* 120fbfc3 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fbfc7 jb 0x120fbf6e */
  if (C.cf) goto L_120fbf6e;
  /* 120fbfc9 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 120fbfcc cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfcf je 0x120fbf6e */
  if (C.zf) goto L_120fbf6e;
L_120fbfd1:;
  /* 120fbfd1 mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 120fbfd4 cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfd6 je 0x120fbf6e */
  if (C.zf) goto L_120fbf6e;
  /* 120fbfd8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120fbfdb mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 120fbfdd cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfdf jb 0x120fbfe9 */
  if (C.cf) goto L_120fbfe9;
  /* 120fbfe1 cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfe3 jbe 0x120fbf61 */
  if ((C.cf||C.zf)) goto L_120fbf61;
L_120fbfe9:;
  /* 120fbfe9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fbfea inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fbfeb cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fbfed jne 0x120fbfd1 */
  if (!C.zf) goto L_120fbfd1;
  /* 120fbfef jmp 0x120fbf6e */
  goto L_120fbf6e;
L_120fbff4:;
  /* 120fbff4 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbff5 push ebx */
  push32((uint32_t)(EBX));
  /* 120fbff6 push esi */
  push32((uint32_t)(ESI));
  /* 120fbff7 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fbffa push 9 */
  push32((uint32_t)(0x9u));
  /* 120fbffc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fbfff call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120fc005u);
  /* 120fc005 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120fc008 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc00a je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc010 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 120fc013 add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc015 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc018 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120fc01a call 0x120fa7c0 */
  push32(0x120fc01fu); f_120fa7c0();
  /* 120fc01f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fc022 mov eax, esp */
  EAX = (ESP);
  /* 120fc024 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120fc027 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc02b jmp 0x120fc043 */
  goto L_120fc043;
  /* 120fc02d push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc02f pop eax */
  EAX = (pop32());
  /* 120fc030 ret  */
  ESPCHK(0x120fbe76u, _esp0);
  ESP += 4; return;
  /* 120fc031 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120fc034 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc036 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 120fc039 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc03d mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 120fc040 push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc042 pop edi */
  EDI = (pop32());
L_120fc043:;
  /* 120fc043 cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc046 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc04c push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 120fc04f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc052 push esi */
  push32((uint32_t)(ESI));
  /* 120fc053 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 120fc056 push edi */
  push32((uint32_t)(EDI));
  /* 120fc057 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fc05a mov esi, dword ptr [0x120fd01c] */
  ESI = (r32((uint32_t)(0x120fd01c)));
  /* 120fc060 call esi */
  call_ind((uint32_t)(ESI), 0x120fc062u);
  /* 120fc062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc064 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc066 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc067 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc068 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fc06b push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fc06e push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc070 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fc073 call esi */
  call_ind((uint32_t)(ESI), 0x120fc075u);
  /* 120fc075 mov esi, eax */
  ESI = (EAX);
  /* 120fc077 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 120fc07a cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc07c je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc07e mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120fc081 lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 120fc084 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc087 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 120fc089 call 0x120fa7c0 */
  push32(0x120fc08eu); f_120fa7c0();
  /* 120fc08e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120fc091 mov edi, esp */
  EDI = (ESP);
  /* 120fc093 mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 120fc096 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc09a jmp 0x120fc0ae */
  goto L_120fc0ae;
  /* 120fc09c push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc09e pop eax */
  EAX = (pop32());
  /* 120fc09f ret  */
  ESPCHK(0x120fbe76u, _esp0);
  ESP += 4; return;
  /* 120fc0a0 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120fc0a3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc0a5 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc0a7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 120fc0ab mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_120fc0ae:;
  /* 120fc0ae cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc0b0 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc0b2 push esi */
  push32((uint32_t)(ESI));
  /* 120fc0b3 push edi */
  push32((uint32_t)(EDI));
  /* 120fc0b4 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 120fc0b7 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 120fc0ba push 1 */
  push32((uint32_t)(0x1u));
  /* 120fc0bc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 120fc0bf call dword ptr [0x120fd01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd01c))), 0x120fc0c5u);
  /* 120fc0c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc0c7 je 0x120fc0df */
  if (C.zf) goto L_120fc0df;
  /* 120fc0c9 push esi */
  push32((uint32_t)(ESI));
  /* 120fc0ca push edi */
  push32((uint32_t)(EDI));
  /* 120fc0cb push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 120fc0ce push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 120fc0d1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 120fc0d4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc0d7 call dword ptr [0x120fd00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd00c))), 0x120fc0ddu);
  /* 120fc0dd jmp 0x120fc0e1 */
  goto L_120fc0e1;
L_120fc0df:;
  /* 120fc0df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120fc0e1:;
  /* 120fc0e1 lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 120fc0e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120fc0e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120fc0ee pop edi */
  EDI = (pop32());
  /* 120fc0ef pop esi */
  ESI = (pop32());
  /* 120fc0f0 pop ebx */
  EBX = (pop32());
  /* 120fc0f1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fc0f2 ret  */
  ESPCHK(0x120fbe76u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0f3 @ 0x120fc0f3 (43 bytes, 20 insns) */
void f_120fc0f3(void) {
  FTRACE(0x120fc0f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc0f3 mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 120fc0f7 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120fc0fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120fc0fd push esi */
  push32((uint32_t)(ESI));
  /* 120fc0fe lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 120fc101 je 0x120fc110 */
  if (C.zf) goto L_120fc110;
L_120fc103:;
  /* 120fc103 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc106 je 0x120fc110 */
  if (C.zf) goto L_120fc110;
  /* 120fc108 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fc109 mov esi, ecx */
  ESI = (ECX);
  /* 120fc10b dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fc10c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc10e jne 0x120fc103 */
  if (!C.zf) goto L_120fc103;
L_120fc110:;
  /* 120fc110 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc113 pop esi */
  ESI = (pop32());
  /* 120fc114 jne 0x120fc11b */
  if (!C.zf) goto L_120fc11b;
  /* 120fc116 sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc11a ret  */
  ESPCHK(0x120fc0f3u, _esp0);
  ESP += 4; return;
L_120fc11b:;
  /* 120fc11b mov eax, edx */
  EAX = (EDX);
  /* 120fc11d ret  */
  ESPCHK(0x120fc0f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c11e @ 0x120fc11e (391 bytes, 155 insns) */
void f_120fc11e(void) {
  FTRACE(0x120fc11eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc11e push ebp */
  push32((uint32_t)(EBP));
  /* 120fc11f mov ebp, esp */
  EBP = (ESP);
  /* 120fc121 push ecx */
  push32((uint32_t)(ECX));
  /* 120fc122 push ecx */
  push32((uint32_t)(ECX));
  /* 120fc123 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc124 push esi */
  push32((uint32_t)(ESI));
  /* 120fc125 push edi */
  push32((uint32_t)(EDI));
  /* 120fc126 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 120fc128 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc12b je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc12d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 120fc12f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc132 call 0x120fc870 */
  push32(0x120fc137u); f_120fc870();
  /* 120fc137 mov esi, eax */
  ESI = (EAX);
  /* 120fc139 pop ecx */
  ECX = (pop32());
  /* 120fc13a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc13c pop ecx */
  ECX = (pop32());
  /* 120fc13d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 120fc140 je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc142 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc145 je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc147 mov eax, dword ptr [0x12103ed8] */
  EAX = (r32((uint32_t)(0x12103ed8)));
  /* 120fc14c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc14e cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc151 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 120fc154 cmp eax, dword ptr [0x12103edc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12103edc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc15a jne 0x120fc168 */
  if (!C.zf) goto L_120fc168;
  /* 120fc15c push eax */
  push32((uint32_t)(EAX));
  /* 120fc15d call 0x120fc2fd */
  push32(0x120fc162u); f_120fc2fd();
  /* 120fc162 pop ecx */
  ECX = (pop32());
  /* 120fc163 mov dword ptr [0x12103ed8], eax */
  w32((uint32_t)(0x12103ed8), (EAX));
L_120fc168:;
  /* 120fc168 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc16a jne 0x120fc1c0 */
  if (!C.zf) goto L_120fc1c0;
  /* 120fc16c cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc16f je 0x120fc18a */
  if (C.zf) goto L_120fc18a;
  /* 120fc171 cmp dword ptr [0x12103ee0], edi */
  { uint32_t _a=(r32((uint32_t)(0x12103ee0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc177 je 0x120fc18a */
  if (C.zf) goto L_120fc18a;
  /* 120fc179 call 0x120fbae3 */
  push32(0x120fc17eu); f_120fbae3();
  /* 120fc17e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc180 je 0x120fc1c0 */
  if (C.zf) goto L_120fc1c0;
L_120fc182:;
  /* 120fc182 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120fc185:;
  /* 120fc185 pop edi */
  EDI = (pop32());
  /* 120fc186 pop esi */
  ESI = (pop32());
  /* 120fc187 pop ebx */
  EBX = (pop32());
  /* 120fc188 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fc189 ret  */
  ESPCHK(0x120fc11eu, _esp0);
  ESP += 4; return;
L_120fc18a:;
  /* 120fc18a cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc18c jne 0x120fc29e */
  if (!C.zf) goto L_120fc29e;
  /* 120fc192 push 4 */
  push32((uint32_t)(0x4u));
  /* 120fc194 call 0x120f5823 */
  push32(0x120fc199u); f_120f5823();
  /* 120fc199 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc19b pop ecx */
  ECX = (pop32());
  /* 120fc19c mov dword ptr [0x12103ed8], eax */
  w32((uint32_t)(0x12103ed8), (EAX));
  /* 120fc1a1 je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc1a3 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 120fc1a5 cmp dword ptr [0x12103ee0], edi */
  { uint32_t _a=(r32((uint32_t)(0x12103ee0))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc1ab jne 0x120fc1c0 */
  if (!C.zf) goto L_120fc1c0;
  /* 120fc1ad push 4 */
  push32((uint32_t)(0x4u));
  /* 120fc1af call 0x120f5823 */
  push32(0x120fc1b4u); f_120f5823();
  /* 120fc1b4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc1b6 pop ecx */
  ECX = (pop32());
  /* 120fc1b7 mov dword ptr [0x12103ee0], eax */
  w32((uint32_t)(0x12103ee0), (EAX));
  /* 120fc1bc je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc1be mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_120fc1c0:;
  /* 120fc1c0 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc1c3 mov edi, dword ptr [0x12103ed8] */
  EDI = (r32((uint32_t)(0x12103ed8)));
  /* 120fc1c9 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 120fc1cc push esi */
  push32((uint32_t)(ESI));
  /* 120fc1cd push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc1d0 call 0x120fc2a5 */
  push32(0x120fc1d5u); f_120fc2a5();
  /* 120fc1d5 mov esi, eax */
  ESI = (EAX);
  /* 120fc1d7 pop ecx */
  ECX = (pop32());
  /* 120fc1d8 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc1da pop ecx */
  ECX = (pop32());
  /* 120fc1db jl 0x120fc220 */
  if ((C.sf!=C.of)) goto L_120fc220;
  /* 120fc1dd cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc1e0 je 0x120fc220 */
  if (C.zf) goto L_120fc220;
  /* 120fc1e2 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fc1e4 je 0x120fc218 */
  if (C.zf) goto L_120fc218;
  /* 120fc1e6 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 120fc1e9 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 120fc1ec call 0x120f4e1c */
  push32(0x120fc1f1u); f_120f4e1c();
  /* 120fc1f1 pop ecx */
  ECX = (pop32());
L_120fc1f2:;
  /* 120fc1f2 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc1f5 je 0x120fc202 */
  if (C.zf) goto L_120fc202;
  /* 120fc1f7 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 120fc1fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc1fb mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120fc1fd add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc200 jmp 0x120fc1f2 */
  goto L_120fc1f2;
L_120fc202:;
  /* 120fc202 mov eax, esi */
  EAX = (ESI);
  /* 120fc204 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120fc207 push eax */
  push32((uint32_t)(EAX));
  /* 120fc208 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 120fc20b call 0x120fc541 */
  push32(0x120fc210u); f_120fc541();
  /* 120fc210 pop ecx */
  ECX = (pop32());
  /* 120fc211 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc213 pop ecx */
  ECX = (pop32());
  /* 120fc214 je 0x120fc252 */
  if (C.zf) goto L_120fc252;
  /* 120fc216 jmp 0x120fc24d */
  goto L_120fc24d;
L_120fc218:;
  /* 120fc218 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc21b mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 120fc21e jmp 0x120fc252 */
  goto L_120fc252;
L_120fc220:;
  /* 120fc220 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 120fc222 jne 0x120fc29e */
  if (!C.zf) goto L_120fc29e;
  /* 120fc224 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc226 jge 0x120fc22a */
  if ((C.sf==C.of)) goto L_120fc22a;
  /* 120fc228 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_120fc22a:;
  /* 120fc22a lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 120fc231 push eax */
  push32((uint32_t)(EAX));
  /* 120fc232 push edi */
  push32((uint32_t)(EDI));
  /* 120fc233 call 0x120fc541 */
  push32(0x120fc238u); f_120fc541();
  /* 120fc238 pop ecx */
  ECX = (pop32());
  /* 120fc239 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc23b pop ecx */
  ECX = (pop32());
  /* 120fc23c je 0x120fc182 */
  if (C.zf) goto L_120fc182;
  /* 120fc242 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc245 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 120fc248 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_120fc24d:;
  /* 120fc24d mov dword ptr [0x12103ed8], eax */
  w32((uint32_t)(0x12103ed8), (EAX));
L_120fc252:;
  /* 120fc252 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc256 je 0x120fc29e */
  if (C.zf) goto L_120fc29e;
  /* 120fc258 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc25b call 0x120f9190 */
  push32(0x120fc260u); f_120f9190();
  /* 120fc260 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fc261 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fc262 push eax */
  push32((uint32_t)(EAX));
  /* 120fc263 call 0x120f5823 */
  push32(0x120fc268u); f_120f5823();
  /* 120fc268 mov esi, eax */
  ESI = (EAX);
  /* 120fc26a pop ecx */
  ECX = (pop32());
  /* 120fc26b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc26d pop ecx */
  ECX = (pop32());
  /* 120fc26e je 0x120fc29e */
  if (C.zf) goto L_120fc29e;
  /* 120fc270 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 120fc273 push esi */
  push32((uint32_t)(ESI));
  /* 120fc274 call 0x120f9b80 */
  push32(0x120fc279u); f_120f9b80();
  /* 120fc279 mov eax, esi */
  EAX = (ESI);
  /* 120fc27b pop ecx */
  ECX = (pop32());
  /* 120fc27c sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc27f pop ecx */
  ECX = (pop32());
  /* 120fc280 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc283 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 120fc286 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120fc287 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fc289 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc28b not ebx */
  EBX = (~(EBX));
  /* 120fc28d and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc28f push ebx */
  push32((uint32_t)(EBX));
  /* 120fc290 push esi */
  push32((uint32_t)(ESI));
  /* 120fc291 call dword ptr [0x120fd004] */
  call_ind((uint32_t)(r32((uint32_t)(0x120fd004))), 0x120fc297u);
  /* 120fc297 push esi */
  push32((uint32_t)(ESI));
  /* 120fc298 call 0x120f4e1c */
  push32(0x120fc29du); f_120f4e1c();
  /* 120fc29d pop ecx */
  ECX = (pop32());
L_120fc29e:;
  /* 120fc29e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc2a0 jmp 0x120fc185 */
  goto L_120fc185;
}

/* FUN_1000c2a5 @ 0x120fc2a5 (88 bytes, 35 insns) */
void f_120fc2a5(void) {
  FTRACE(0x120fc2a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc2a5 push esi */
  push32((uint32_t)(ESI));
  /* 120fc2a6 mov esi, dword ptr [0x12103ed8] */
  ESI = (r32((uint32_t)(0x12103ed8)));
  /* 120fc2ac push edi */
  push32((uint32_t)(EDI));
  /* 120fc2ad mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120fc2af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc2b1 je 0x120fc2e0 */
  if (C.zf) goto L_120fc2e0;
  /* 120fc2b3 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_120fc2b7:;
  /* 120fc2b7 push edi */
  push32((uint32_t)(EDI));
  /* 120fc2b8 push eax */
  push32((uint32_t)(EAX));
  /* 120fc2b9 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 120fc2bd call 0x120fbaa4 */
  push32(0x120fc2c2u); f_120fbaa4();
  /* 120fc2c2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc2c5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc2c7 jne 0x120fc2d6 */
  if (!C.zf) goto L_120fc2d6;
  /* 120fc2c9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120fc2cb mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 120fc2ce cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc2d0 je 0x120fc2f0 */
  if (C.zf) goto L_120fc2f0;
  /* 120fc2d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120fc2d4 je 0x120fc2f0 */
  if (C.zf) goto L_120fc2f0;
L_120fc2d6:;
  /* 120fc2d6 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 120fc2d9 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc2de jne 0x120fc2b7 */
  if (!C.zf) goto L_120fc2b7;
L_120fc2e0:;
  /* 120fc2e0 mov eax, esi */
  EAX = (ESI);
  /* 120fc2e2 sub eax, dword ptr [0x12103ed8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12103ed8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc2e8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120fc2eb neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_120fc2ed:;
  /* 120fc2ed pop edi */
  EDI = (pop32());
  /* 120fc2ee pop esi */
  ESI = (pop32());
  /* 120fc2ef ret  */
  ESPCHK(0x120fc2a5u, _esp0);
  ESP += 4; return;
L_120fc2f0:;
  /* 120fc2f0 mov eax, esi */
  EAX = (ESI);
  /* 120fc2f2 sub eax, dword ptr [0x12103ed8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12103ed8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc2f8 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120fc2fb jmp 0x120fc2ed */
  goto L_120fc2ed;
}

/* FUN_1000c2fd @ 0x120fc2fd (103 bytes, 49 insns) */
void f_120fc2fd(void) {
  FTRACE(0x120fc2fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc2fd push edi */
  push32((uint32_t)(EDI));
  /* 120fc2fe mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 120fc302 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fc304 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 120fc306 jne 0x120fc30c */
  if (!C.zf) goto L_120fc30c;
  /* 120fc308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc30a pop edi */
  EDI = (pop32());
  /* 120fc30b ret  */
  ESPCHK(0x120fc2fdu, _esp0);
  ESP += 4; return;
L_120fc30c:;
  /* 120fc30c cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc30f lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 120fc312 je 0x120fc31e */
  if (C.zf) goto L_120fc31e;
L_120fc314:;
  /* 120fc314 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 120fc316 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120fc317 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc31a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120fc31c jne 0x120fc314 */
  if (!C.zf) goto L_120fc314;
L_120fc31e:;
  /* 120fc31e push ebx */
  push32((uint32_t)(EBX));
  /* 120fc31f push ebp */
  push32((uint32_t)(EBP));
  /* 120fc320 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 120fc327 push esi */
  push32((uint32_t)(ESI));
  /* 120fc328 push eax */
  push32((uint32_t)(EAX));
  /* 120fc329 call 0x120f5823 */
  push32(0x120fc32eu); f_120f5823();
  /* 120fc32e mov esi, eax */
  ESI = (EAX);
  /* 120fc330 pop ecx */
  ECX = (pop32());
  /* 120fc331 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 120fc333 mov ebp, esi */
  EBP = (ESI);
  /* 120fc335 jne 0x120fc33f */
  if (!C.zf) goto L_120fc33f;
  /* 120fc337 push 9 */
  push32((uint32_t)(0x9u));
  /* 120fc339 call 0x120f4b9b */
  push32(0x120fc33eu); f_120f4b9b();
  /* 120fc33e pop ecx */
  ECX = (pop32());
L_120fc33f:;
  /* 120fc33f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 120fc341 mov ebx, edi */
  EBX = (EDI);
L_120fc343:;
  /* 120fc343 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120fc345 je 0x120fc35a */
  if (C.zf) goto L_120fc35a;
  /* 120fc347 push eax */
  push32((uint32_t)(EAX));
  /* 120fc348 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc34b call 0x120fc907 */
  push32(0x120fc350u); f_120fc907();
  /* 120fc350 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 120fc352 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 120fc354 pop ecx */
  ECX = (pop32());
  /* 120fc355 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc358 jmp 0x120fc343 */
  goto L_120fc343;
L_120fc35a:;
  /* 120fc35a and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 120fc35d mov eax, ebp */
  EAX = (EBP);
  /* 120fc35f pop esi */
  ESI = (pop32());
  /* 120fc360 pop ebp */
  EBP = (pop32());
  /* 120fc361 pop ebx */
  EBX = (pop32());
  /* 120fc362 pop edi */
  EDI = (pop32());
  /* 120fc363 ret  */
  ESPCHK(0x120fc2fdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c370 @ 0x120fc370 (208 bytes, 85 insns) */
void f_120fc370(void) {
  FTRACE(0x120fc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc370 push ebp */
  push32((uint32_t)(EBP));
  /* 120fc371 mov ebp, esp */
  EBP = (ESP);
  /* 120fc373 push edi */
  push32((uint32_t)(EDI));
  /* 120fc374 push esi */
  push32((uint32_t)(ESI));
  /* 120fc375 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc376 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc379 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc37c lea eax, [0x12104148] */
  EAX = ((uint32_t)(0x12104148));
  /* 120fc382 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc386 jne 0x120fc3c3 */
  if (!C.zf) goto L_120fc3c3;
  /* 120fc388 mov al, 0xff */
  AL = (0xffu);
  /* 120fc38a mov edi, edi */
  EDI = (EDI);
L_120fc38c:;
  /* 120fc38c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fc38e je 0x120fc3be */
  if (C.zf) goto L_120fc3be;
  /* 120fc390 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fc392 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc393 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 120fc395 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fc396 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc398 je 0x120fc38c */
  if (C.zf) goto L_120fc38c;
  /* 120fc39a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fc39c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc39e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fc3a0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120fc3a3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fc3a5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fc3a7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 120fc3a9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fc3ab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc3ad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fc3af and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 120fc3b2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fc3b4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120fc3b6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc3b8 je 0x120fc38c */
  if (C.zf) goto L_120fc38c;
  /* 120fc3ba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120fc3bc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_120fc3be:;
  /* 120fc3be movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 120fc3c1 jmp 0x120fc43b */
  goto L_120fc43b;
L_120fc3c3:;
  /* 120fc3c3 lock inc dword ptr [0x12104218] */
  x86_unimpl("lock inc @ 0x120fc3c3");
  /* 120fc3ca cmp dword ptr [0x12104214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc3d1 jg 0x120fc3d7 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fc3d7;
  /* 120fc3d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fc3d5 jmp 0x120fc3ec */
  goto L_120fc3ec;
L_120fc3d7:;
  /* 120fc3d7 lock dec dword ptr [0x12104218] */
  x86_unimpl("lock dec @ 0x120fc3d7");
  /* 120fc3de push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fc3e0 call 0x120f6edc */
  push32(0x120fc3e5u); f_120f6edc();
  /* 120fc3e5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_120fc3ec:;
  /* 120fc3ec mov eax, 0xff */
  EAX = (0xffu);
  /* 120fc3f1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc3f3 nop  */
  /* nop */
L_120fc3f4:;
  /* 120fc3f4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fc3f6 je 0x120fc41f */
  if (C.zf) goto L_120fc41f;
  /* 120fc3f8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fc3fa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc3fb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fc3fd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fc3fe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc400 je 0x120fc3f4 */
  if (C.zf) goto L_120fc3f4;
  /* 120fc402 push eax */
  push32((uint32_t)(EAX));
  /* 120fc403 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc404 call 0x120f953f */
  push32(0x120fc409u); f_120f953f();
  /* 120fc409 mov ebx, eax */
  EBX = (EAX);
  /* 120fc40b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc40e call 0x120f953f */
  push32(0x120fc413u); f_120f953f();
  /* 120fc413 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc416 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc418 je 0x120fc3f4 */
  if (C.zf) goto L_120fc3f4;
  /* 120fc41a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120fc41c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_120fc41f:;
  /* 120fc41f mov ebx, eax */
  EBX = (EAX);
  /* 120fc421 pop eax */
  EAX = (pop32());
  /* 120fc422 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc424 jne 0x120fc42f */
  if (!C.zf) goto L_120fc42f;
  /* 120fc426 lock dec dword ptr [0x12104218] */
  x86_unimpl("lock dec @ 0x120fc426");
  /* 120fc42d jmp 0x120fc439 */
  goto L_120fc439;
L_120fc42f:;
  /* 120fc42f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fc431 call 0x120f6f3d */
  push32(0x120fc436u); f_120f6f3d();
  /* 120fc436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120fc439:;
  /* 120fc439 mov eax, ebx */
  EAX = (EBX);
L_120fc43b:;
  /* 120fc43b pop ebx */
  EBX = (pop32());
  /* 120fc43c pop esi */
  ESI = (pop32());
  /* 120fc43d pop edi */
  EDI = (pop32());
  /* 120fc43e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fc43f ret  */
  ESPCHK(0x120fc370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c440 @ 0x120fc440 (257 bytes, 103 insns) */
void f_120fc440(void) {
  FTRACE(0x120fc440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120fc440 push ebp */
  push32((uint32_t)(EBP));
  /* 120fc441 mov ebp, esp */
  EBP = (ESP);
  /* 120fc443 push edi */
  push32((uint32_t)(EDI));
  /* 120fc444 push esi */
  push32((uint32_t)(ESI));
  /* 120fc445 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc446 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120fc449 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fc44b je 0x120fc53a */
  if (C.zf) goto L_120fc53a;
  /* 120fc451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120fc454 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 120fc457 lea eax, [0x12104148] */
  EAX = ((uint32_t)(0x12104148));
  /* 120fc45d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc461 jne 0x120fc4b1 */
  if (!C.zf) goto L_120fc4b1;
  /* 120fc463 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 120fc465 mov bl, 0x5a */
  BL = (0x5au);
  /* 120fc467 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 120fc469 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120fc46c:;
  /* 120fc46c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 120fc46e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120fc470 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 120fc472 je 0x120fc495 */
  if (C.zf) goto L_120fc495;
  /* 120fc474 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120fc476 je 0x120fc495 */
  if (C.zf) goto L_120fc495;
  /* 120fc478 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc479 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fc47a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc47c jb 0x120fc484 */
  if (C.cf) goto L_120fc484;
  /* 120fc47e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc480 ja 0x120fc484 */
  if ((!C.cf&&!C.zf)) goto L_120fc484;
  /* 120fc482 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_120fc484:;
  /* 120fc484 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc486 jb 0x120fc48e */
  if (C.cf) goto L_120fc48e;
  /* 120fc488 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc48a ja 0x120fc48e */
  if ((!C.cf&&!C.zf)) goto L_120fc48e;
  /* 120fc48c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_120fc48e:;
  /* 120fc48e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc490 jne 0x120fc49f */
  if (!C.zf) goto L_120fc49f;
  /* 120fc492 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fc493 jne 0x120fc46c */
  if (!C.zf) goto L_120fc46c;
L_120fc495:;
  /* 120fc495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fc497 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120fc499 je 0x120fc53a */
  if (C.zf) goto L_120fc53a;
L_120fc49f:;
  /* 120fc49f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 120fc4a4 jb 0x120fc53a */
  if (C.cf) goto L_120fc53a;
  /* 120fc4aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120fc4ac jmp 0x120fc53a */
  goto L_120fc53a;
L_120fc4b1:;
  /* 120fc4b1 lock inc dword ptr [0x12104218] */
  x86_unimpl("lock inc @ 0x120fc4b1");
  /* 120fc4b8 cmp dword ptr [0x12104214], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12104214))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc4bf jg 0x120fc4c5 */
  if ((!C.zf&&C.sf==C.of)) goto L_120fc4c5;
  /* 120fc4c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120fc4c3 jmp 0x120fc4de */
  goto L_120fc4de;
L_120fc4c5:;
  /* 120fc4c5 lock dec dword ptr [0x12104218] */
  x86_unimpl("lock dec @ 0x120fc4c5");
  /* 120fc4cc mov ebx, ecx */
  EBX = (ECX);
  /* 120fc4ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fc4d0 call 0x120f6edc */
  push32(0x120fc4d5u); f_120f6edc();
  /* 120fc4d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 120fc4dc mov ecx, ebx */
  ECX = (EBX);
L_120fc4de:;
  /* 120fc4de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc4e0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc4e2 mov edi, edi */
  EDI = (EDI);
L_120fc4e4:;
  /* 120fc4e4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120fc4e6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc4e8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 120fc4ea je 0x120fc50f */
  if (C.zf) goto L_120fc50f;
  /* 120fc4ec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 120fc4ee je 0x120fc50f */
  if (C.zf) goto L_120fc50f;
  /* 120fc4f0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120fc4f1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120fc4f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120fc4f3 push eax */
  push32((uint32_t)(EAX));
  /* 120fc4f4 push ebx */
  push32((uint32_t)(EBX));
  /* 120fc4f5 call 0x120f953f */
  push32(0x120fc4fau); f_120f953f();
  /* 120fc4fa mov ebx, eax */
  EBX = (EAX);
  /* 120fc4fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc4ff call 0x120f953f */
  push32(0x120fc504u); f_120f953f();
  /* 120fc504 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc507 pop ecx */
  ECX = (pop32());
  /* 120fc508 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc50a jne 0x120fc515 */
  if (!C.zf) goto L_120fc515;
  /* 120fc50c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120fc50d jne 0x120fc4e4 */
  if (!C.zf) goto L_120fc4e4;
L_120fc50f:;
  /* 120fc50f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120fc511 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120fc513 je 0x120fc51e */
  if (C.zf) goto L_120fc51e;
L_120fc515:;
  /* 120fc515 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 120fc51a jb 0x120fc51e */
  if (C.cf) goto L_120fc51e;
  /* 120fc51c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_120fc51e:;
  /* 120fc51e pop eax */
  EAX = (pop32());
  /* 120fc51f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120fc521 jne 0x120fc52c */
  if (!C.zf) goto L_120fc52c;
  /* 120fc523 lock dec dword ptr [0x12104218] */
  x86_unimpl("lock dec @ 0x120fc523");
  /* 120fc52a jmp 0x120fc53a */
  goto L_120fc53a;
L_120fc52c:;
  /* 120fc52c mov ebx, ecx */
  EBX = (ECX);
  /* 120fc52e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120fc530 call 0x120f6f3d */
  push32(0x120fc535u); f_120f6f3d();
  /* 120fc535 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120fc538 mov ecx, ebx */
  ECX = (EBX);
L_120fc53a:;
  /* 120fc53a mov eax, ecx */
  EAX = (ECX);
  /* 120fc53c pop ebx */
  EBX = (pop32());
  /* 120fc53d pop esi */
  ESI = (pop32());
  /* 120fc53e pop edi */
  EDI = (pop32());
  /* 120fc53f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120fc540 ret  */
  ESPCHK(0x120fc440u, _esp0);
  ESP += 4; return;
}

