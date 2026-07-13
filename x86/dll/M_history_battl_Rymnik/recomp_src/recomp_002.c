#include "recomp.h"

/* FUN_1000fad0 @ 0x12eafad0 (512 bytes, 147 insns) */
void f_12eafad0(void) {
  FTRACE(0x12eafad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafad0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafad1 mov ebp, esp */
  EBP = (ESP);
  /* 12eafad3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafad6 cmp dword ptr [0x12ebf85c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf85c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafadd jne 0x12eafb02 */
  if (!C.zf) goto L_12eafb02;
  /* 12eafadf call 0x12eb05a0 */
  push32(0x12eafae4u); f_12eb05a0();
  /* 12eafae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafae6 je 0x12eafaf2 */
  if (C.zf) goto L_12eafaf2;
  /* 12eafae8 mov eax, dword ptr [0x12ec22b8] */
  EAX = (r32((uint32_t)(0x12ec22b8)));
  /* 12eafaed mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eafaf0 jmp 0x12eafaf9 */
  goto L_12eafaf9;
L_12eafaf2:;
  /* 12eafaf2 mov dword ptr [ebp - 8], 0x12eb05f0 */
  w32((uint32_t)(EBP + -0x8), (0x12eb05f0u));
L_12eafaf9:;
  /* 12eafaf9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eafafc mov dword ptr [0x12ebf85c], ecx */
  w32((uint32_t)(0x12ebf85c), (ECX));
L_12eafb02:;
  /* 12eafb02 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafb06 jne 0x12eafb12 */
  if (!C.zf) goto L_12eafb12;
  /* 12eafb08 call 0x12eb03f0 */
  push32(0x12eafb0du); f_12eb03f0();
  /* 12eafb0d jmp 0x12eafbde */
  goto L_12eafbde;
L_12eafb12:;
  /* 12eafb12 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafb15 mov dword ptr [0x12ebf84c], edx */
  w32((uint32_t)(0x12ebf84c), (EDX));
  /* 12eafb1b cmp dword ptr [0x12ebf84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafb22 je 0x12eafb44 */
  if (C.zf) goto L_12eafb44;
  /* 12eafb24 mov eax, dword ptr [0x12ebf84c] */
  EAX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eafb29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eafb2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eafb2e je 0x12eafb44 */
  if (C.zf) goto L_12eafb44;
  /* 12eafb30 push 0x12ebf84c */
  push32((uint32_t)(0x12ebf84cu));
  /* 12eafb35 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12eafb37 push 0x12ebeab0 */
  push32((uint32_t)(0x12ebeab0u));
  /* 12eafb3c call 0x12eafcd0 */
  push32(0x12eafb41u); f_12eafcd0();
  /* 12eafb41 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eafb44:;
  /* 12eafb44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafb47 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafb4a mov dword ptr [0x12ebf850], edx */
  w32((uint32_t)(0x12ebf850), (EDX));
  /* 12eafb50 cmp dword ptr [0x12ebf850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafb57 je 0x12eafb79 */
  if (C.zf) goto L_12eafb79;
  /* 12eafb59 mov eax, dword ptr [0x12ebf850] */
  EAX = (r32((uint32_t)(0x12ebf850)));
  /* 12eafb5e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eafb61 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eafb63 je 0x12eafb79 */
  if (C.zf) goto L_12eafb79;
  /* 12eafb65 push 0x12ebf850 */
  push32((uint32_t)(0x12ebf850u));
  /* 12eafb6a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 12eafb6c push 0x12ebe9f8 */
  push32((uint32_t)(0x12ebe9f8u));
  /* 12eafb71 call 0x12eafcd0 */
  push32(0x12eafb76u); f_12eafcd0();
  /* 12eafb76 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eafb79:;
  /* 12eafb79 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eafb83 cmp dword ptr [0x12ebf84c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf84c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafb8a je 0x12eafbbd */
  if (C.zf) goto L_12eafbbd;
  /* 12eafb8c mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eafb92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eafb95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafb97 je 0x12eafbbd */
  if (C.zf) goto L_12eafbbd;
  /* 12eafb99 cmp dword ptr [0x12ebf850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafba0 je 0x12eafbb6 */
  if (C.zf) goto L_12eafbb6;
  /* 12eafba2 mov ecx, dword ptr [0x12ebf850] */
  ECX = (r32((uint32_t)(0x12ebf850)));
  /* 12eafba8 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eafbab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eafbad je 0x12eafbb6 */
  if (C.zf) goto L_12eafbb6;
  /* 12eafbaf call 0x12eafd60 */
  push32(0x12eafbb4u); f_12eafd60();
  /* 12eafbb4 jmp 0x12eafbbb */
  goto L_12eafbbb;
L_12eafbb6:;
  /* 12eafbb6 call 0x12eb0150 */
  push32(0x12eafbbbu); f_12eb0150();
L_12eafbbb:;
  /* 12eafbbb jmp 0x12eafbde */
  goto L_12eafbde;
L_12eafbbd:;
  /* 12eafbbd cmp dword ptr [0x12ebf850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafbc4 je 0x12eafbd9 */
  if (C.zf) goto L_12eafbd9;
  /* 12eafbc6 mov eax, dword ptr [0x12ebf850] */
  EAX = (r32((uint32_t)(0x12ebf850)));
  /* 12eafbcb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eafbce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eafbd0 je 0x12eafbd9 */
  if (C.zf) goto L_12eafbd9;
  /* 12eafbd2 call 0x12eb02f0 */
  push32(0x12eafbd7u); f_12eb02f0();
  /* 12eafbd7 jmp 0x12eafbde */
  goto L_12eafbde;
L_12eafbd9:;
  /* 12eafbd9 call 0x12eb03f0 */
  push32(0x12eafbdeu); f_12eb03f0();
L_12eafbde:;
  /* 12eafbde cmp dword ptr [0x12ebf854], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf854))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafbe5 jne 0x12eafbee */
  if (!C.zf) goto L_12eafbee;
  /* 12eafbe7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafbe9 jmp 0x12eafccc */
  goto L_12eafccc;
L_12eafbee:;
  /* 12eafbee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafbf1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafbf7 push edx */
  push32((uint32_t)(EDX));
  /* 12eafbf8 call 0x12eb0420 */
  push32(0x12eafbfdu); f_12eb0420();
  /* 12eafbfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafc00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eafc03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafc07 je 0x12eafc1c */
  if (C.zf) goto L_12eafc1c;
  /* 12eafc09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafc0c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eafc11 push eax */
  push32((uint32_t)(EAX));
  /* 12eafc12 call dword ptr [0x12ec22bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22bc))), 0x12eafc18u);
  /* 12eafc18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafc1a jne 0x12eafc23 */
  if (!C.zf) goto L_12eafc23;
L_12eafc1c:;
  /* 12eafc1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafc1e jmp 0x12eafccc */
  goto L_12eafccc;
L_12eafc23:;
  /* 12eafc23 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eafc25 mov ecx, dword ptr [0x12ebf83c] */
  ECX = (r32((uint32_t)(0x12ebf83c)));
  /* 12eafc2b push ecx */
  push32((uint32_t)(ECX));
  /* 12eafc2c call dword ptr [0x12ec22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22c0))), 0x12eafc32u);
  /* 12eafc32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafc34 jne 0x12eafc3d */
  if (!C.zf) goto L_12eafc3d;
  /* 12eafc36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafc38 jmp 0x12eafccc */
  goto L_12eafccc;
L_12eafc3d:;
  /* 12eafc3d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafc41 je 0x12eafc68 */
  if (C.zf) goto L_12eafc68;
  /* 12eafc43 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafc46 mov ax, word ptr [0x12ebf83c] */
  AX = (r16((uint32_t)(0x12ebf83c)));
  /* 12eafc4c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 12eafc4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafc52 mov dx, word ptr [0x12ebf858] */
  DX = (r16((uint32_t)(0x12ebf858)));
  /* 12eafc59 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 12eafc5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eafc60 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 12eafc64 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_12eafc68:;
  /* 12eafc68 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafc6c je 0x12eafcc7 */
  if (C.zf) goto L_12eafcc7;
  /* 12eafc6e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12eafc70 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafc73 push edx */
  push32((uint32_t)(EDX));
  /* 12eafc74 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 12eafc79 mov eax, dword ptr [0x12ebf83c] */
  EAX = (r32((uint32_t)(0x12ebf83c)));
  /* 12eafc7e push eax */
  push32((uint32_t)(EAX));
  /* 12eafc7f call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eafc85u);
  /* 12eafc85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafc87 jne 0x12eafc8d */
  if (!C.zf) goto L_12eafc8d;
  /* 12eafc89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafc8b jmp 0x12eafccc */
  goto L_12eafccc;
L_12eafc8d:;
  /* 12eafc8d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 12eafc8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafc92 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafc95 push ecx */
  push32((uint32_t)(ECX));
  /* 12eafc96 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 12eafc9b mov edx, dword ptr [0x12ebf858] */
  EDX = (r32((uint32_t)(0x12ebf858)));
  /* 12eafca1 push edx */
  push32((uint32_t)(EDX));
  /* 12eafca2 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eafca8u);
  /* 12eafca8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafcaa jne 0x12eafcb0 */
  if (!C.zf) goto L_12eafcb0;
  /* 12eafcac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eafcae jmp 0x12eafccc */
  goto L_12eafccc;
L_12eafcb0:;
  /* 12eafcb0 push 0xa */
  push32((uint32_t)(0xau));
  /* 12eafcb2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafcb5 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafcba push eax */
  push32((uint32_t)(EAX));
  /* 12eafcbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafcbe push ecx */
  push32((uint32_t)(ECX));
  /* 12eafcbf call 0x12ea6830 */
  push32(0x12eafcc4u); f_12ea6830();
  /* 12eafcc4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eafcc7:;
  /* 12eafcc7 mov eax, 1 */
  EAX = (0x1u);
L_12eafccc:;
  /* 12eafccc mov esp, ebp */
  ESP = (EBP);
  /* 12eafcce pop ebp */
  EBP = (pop32());
  /* 12eafccf ret  */
  ESPCHK(0x12eafad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcd0 @ 0x12eafcd0 (130 bytes, 47 insns) */
void f_12eafcd0(void) {
  FTRACE(0x12eafcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafcd1 mov ebp, esp */
  EBP = (ESP);
  /* 12eafcd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafcd6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12eafcdd mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_12eafce4:;
  /* 12eafce4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eafce7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafcea jg 0x12eafd4e */
  if ((!C.zf&&C.sf==C.of)) goto L_12eafd4e;
  /* 12eafcec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafcf0 je 0x12eafd4e */
  if (C.zf) goto L_12eafd4e;
  /* 12eafcf2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eafcf5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafcf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eafcf9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafcfb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eafcfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eafd00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafd03 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafd06 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 12eafd09 push eax */
  push32((uint32_t)(EAX));
  /* 12eafd0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafd0d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eafd0f push edx */
  push32((uint32_t)(EDX));
  /* 12eafd10 call 0x12eb23c0 */
  push32(0x12eafd15u); f_12eb23c0();
  /* 12eafd15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafd18 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eafd1b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafd1f jne 0x12eafd32 */
  if (!C.zf) goto L_12eafd32;
  /* 12eafd21 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafd24 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafd27 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 12eafd2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eafd2e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eafd30 jmp 0x12eafd4c */
  goto L_12eafd4c;
L_12eafd32:;
  /* 12eafd32 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafd36 jge 0x12eafd43 */
  if ((C.sf==C.of)) goto L_12eafd43;
  /* 12eafd38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafd3b sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafd3e mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 12eafd41 jmp 0x12eafd4c */
  goto L_12eafd4c;
L_12eafd43:;
  /* 12eafd43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafd46 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafd49 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eafd4c:;
  /* 12eafd4c jmp 0x12eafce4 */
  goto L_12eafce4;
L_12eafd4e:;
  /* 12eafd4e mov esp, ebp */
  ESP = (EBP);
  /* 12eafd50 pop ebp */
  EBP = (pop32());
  /* 12eafd51 ret  */
  ESPCHK(0x12eafcd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd60 @ 0x12eafd60 (186 bytes, 50 insns) */
void f_12eafd60(void) {
  FTRACE(0x12eafd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafd60 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafd61 mov ebp, esp */
  EBP = (ESP);
  /* 12eafd63 push ecx */
  push32((uint32_t)(ECX));
  /* 12eafd64 mov eax, dword ptr [0x12ebf84c] */
  EAX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eafd69 push eax */
  push32((uint32_t)(EAX));
  /* 12eafd6a call 0x12ea6b20 */
  push32(0x12eafd6fu); f_12ea6b20();
  /* 12eafd6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafd72 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eafd74 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafd77 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12eafd7a mov dword ptr [0x12ebf848], ecx */
  w32((uint32_t)(0x12ebf848), (ECX));
  /* 12eafd80 mov edx, dword ptr [0x12ebf850] */
  EDX = (r32((uint32_t)(0x12ebf850)));
  /* 12eafd86 push edx */
  push32((uint32_t)(EDX));
  /* 12eafd87 call 0x12ea6b20 */
  push32(0x12eafd8cu); f_12ea6b20();
  /* 12eafd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafd8f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eafd91 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafd94 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12eafd97 mov dword ptr [0x12ebf840], ecx */
  w32((uint32_t)(0x12ebf840), (ECX));
  /* 12eafd9d mov dword ptr [0x12ebf83c], 0 */
  w32((uint32_t)(0x12ebf83c), (0x0u));
  /* 12eafda7 cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eafdae je 0x12eafdb9 */
  if (C.zf) goto L_12eafdb9;
  /* 12eafdb0 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12eafdb7 jmp 0x12eafdcb */
  goto L_12eafdcb;
L_12eafdb9:;
  /* 12eafdb9 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eafdbf push edx */
  push32((uint32_t)(EDX));
  /* 12eafdc0 call 0x12eb0800 */
  push32(0x12eafdc5u); f_12eb0800();
  /* 12eafdc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafdc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eafdcb:;
  /* 12eafdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eafdce mov dword ptr [0x12ebf844], eax */
  w32((uint32_t)(0x12ebf844), (EAX));
  /* 12eafdd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eafdd5 push 0x12eafe20 */
  push32((uint32_t)(0x12eafe20u));
  /* 12eafdda call dword ptr [0x12ec22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b4))), 0x12eafde0u);
  /* 12eafde0 mov ecx, dword ptr [0x12ebf854] */
  ECX = (r32((uint32_t)(0x12ebf854)));
  /* 12eafde6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 12eafdec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eafdee je 0x12eafe0c */
  if (C.zf) goto L_12eafe0c;
  /* 12eafdf0 mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eafdf6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 12eafdfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eafdfe je 0x12eafe0c */
  if (C.zf) goto L_12eafe0c;
  /* 12eafe00 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eafe05 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 12eafe08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafe0a jne 0x12eafe16 */
  if (!C.zf) goto L_12eafe16;
L_12eafe0c:;
  /* 12eafe0c mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
L_12eafe16:;
  /* 12eafe16 mov esp, ebp */
  ESP = (EBP);
  /* 12eafe18 pop ebp */
  EBP = (pop32());
  /* 12eafe19 ret  */
  ESPCHK(0x12eafd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe20 @ 0x12eafe20 (804 bytes, 220 insns) */
void f_12eafe20(void) {
  FTRACE(0x12eafe20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eafe20 push ebp */
  push32((uint32_t)(EBP));
  /* 12eafe21 mov ebp, esp */
  EBP = (ESP);
  /* 12eafe23 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafe26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eafe29 push eax */
  push32((uint32_t)(EAX));
  /* 12eafe2a call 0x12eb0780 */
  push32(0x12eafe2fu); f_12eb0780();
  /* 12eafe2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafe32 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12eafe35 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eafe37 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eafe3a push ecx */
  push32((uint32_t)(ECX));
  /* 12eafe3b mov edx, dword ptr [0x12ebf840] */
  EDX = (r32((uint32_t)(0x12ebf840)));
  /* 12eafe41 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eafe43 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafe45 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12eafe4b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafe51 push edx */
  push32((uint32_t)(EDX));
  /* 12eafe52 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eafe55 push eax */
  push32((uint32_t)(EAX));
  /* 12eafe56 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eafe5cu);
  /* 12eafe5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafe5e jne 0x12eafe74 */
  if (!C.zf) goto L_12eafe74;
  /* 12eafe60 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eafe6a mov eax, 1 */
  EAX = (0x1u);
  /* 12eafe6f jmp 0x12eb013e */
  goto L_12eb013e;
L_12eafe74:;
  /* 12eafe74 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eafe77 push ecx */
  push32((uint32_t)(ECX));
  /* 12eafe78 mov edx, dword ptr [0x12ebf850] */
  EDX = (r32((uint32_t)(0x12ebf850)));
  /* 12eafe7e push edx */
  push32((uint32_t)(EDX));
  /* 12eafe7f call 0x12eb23c0 */
  push32(0x12eafe84u); f_12eb23c0();
  /* 12eafe84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafe87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafe89 jne 0x12eaffaf */
  if (!C.zf) goto L_12eaffaf;
  /* 12eafe8f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eafe91 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12eafe94 push eax */
  push32((uint32_t)(EAX));
  /* 12eafe95 mov ecx, dword ptr [0x12ebf848] */
  ECX = (r32((uint32_t)(0x12ebf848)));
  /* 12eafe9b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eafe9d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eafe9f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12eafea5 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafeab push ecx */
  push32((uint32_t)(ECX));
  /* 12eafeac mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eafeaf push edx */
  push32((uint32_t)(EDX));
  /* 12eafeb0 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eafeb6u);
  /* 12eafeb6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafeb8 jne 0x12eafece */
  if (!C.zf) goto L_12eafece;
  /* 12eafeba mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eafec4 mov eax, 1 */
  EAX = (0x1u);
  /* 12eafec9 jmp 0x12eb013e */
  goto L_12eb013e;
L_12eafece:;
  /* 12eafece lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12eafed1 push eax */
  push32((uint32_t)(EAX));
  /* 12eafed2 mov ecx, dword ptr [0x12ebf84c] */
  ECX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eafed8 push ecx */
  push32((uint32_t)(ECX));
  /* 12eafed9 call 0x12eb23c0 */
  push32(0x12eafedeu); f_12eb23c0();
  /* 12eafede add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eafee1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafee3 jne 0x12eaff10 */
  if (!C.zf) goto L_12eaff10;
  /* 12eafee5 mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eafeeb or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 12eafef1 mov dword ptr [0x12ebf854], edx */
  w32((uint32_t)(0x12ebf854), (EDX));
  /* 12eafef7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eafefa mov dword ptr [0x12ebf858], eax */
  w32((uint32_t)(0x12ebf858), (EAX));
  /* 12eafeff mov ecx, dword ptr [0x12ebf858] */
  ECX = (r32((uint32_t)(0x12ebf858)));
  /* 12eaff05 mov dword ptr [0x12ebf83c], ecx */
  w32((uint32_t)(0x12ebf83c), (ECX));
  /* 12eaff0b jmp 0x12eaffaf */
  goto L_12eaffaf;
L_12eaff10:;
  /* 12eaff10 mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eaff16 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaff19 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eaff1b jne 0x12eaffaf */
  if (!C.zf) goto L_12eaffaf;
  /* 12eaff21 cmp dword ptr [0x12ebf844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaff28 je 0x12eaff7d */
  if (C.zf) goto L_12eaff7d;
  /* 12eaff2a mov eax, dword ptr [0x12ebf844] */
  EAX = (r32((uint32_t)(0x12ebf844)));
  /* 12eaff2f push eax */
  push32((uint32_t)(EAX));
  /* 12eaff30 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eaff33 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaff34 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eaff3a push edx */
  push32((uint32_t)(EDX));
  /* 12eaff3b call 0x12eb2490 */
  push32(0x12eaff40u); f_12eb2490();
  /* 12eaff40 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaff43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaff45 jne 0x12eaff7d */
  if (!C.zf) goto L_12eaff7d;
  /* 12eaff47 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eaff4c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 12eaff4e mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eaff53 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eaff56 mov dword ptr [0x12ebf858], ecx */
  w32((uint32_t)(0x12ebf858), (ECX));
  /* 12eaff5c mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eaff62 push edx */
  push32((uint32_t)(EDX));
  /* 12eaff63 call 0x12ea6b20 */
  push32(0x12eaff68u); f_12ea6b20();
  /* 12eaff68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaff6b cmp eax, dword ptr [0x12ebf844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebf844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaff71 jne 0x12eaff7b */
  if (!C.zf) goto L_12eaff7b;
  /* 12eaff73 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eaff76 mov dword ptr [0x12ebf83c], eax */
  w32((uint32_t)(0x12ebf83c), (EAX));
L_12eaff7b:;
  /* 12eaff7b jmp 0x12eaffaf */
  goto L_12eaffaf;
L_12eaff7d:;
  /* 12eaff7d mov ecx, dword ptr [0x12ebf854] */
  ECX = (r32((uint32_t)(0x12ebf854)));
  /* 12eaff83 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaff86 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eaff88 jne 0x12eaffaf */
  if (!C.zf) goto L_12eaffaf;
  /* 12eaff8a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eaff8d push edx */
  push32((uint32_t)(EDX));
  /* 12eaff8e call 0x12eb04c0 */
  push32(0x12eaff93u); f_12eb04c0();
  /* 12eaff93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaff96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eaff98 je 0x12eaffaf */
  if (C.zf) goto L_12eaffaf;
  /* 12eaff9a mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eaff9f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 12eaffa1 mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eaffa6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eaffa9 mov dword ptr [0x12ebf858], ecx */
  w32((uint32_t)(0x12ebf858), (ECX));
L_12eaffaf:;
  /* 12eaffaf mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eaffb5 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 12eaffbb cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eaffc1 je 0x12eb0131 */
  if (C.zf) goto L_12eb0131;
  /* 12eaffc7 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eaffc9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12eaffcc push eax */
  push32((uint32_t)(EAX));
  /* 12eaffcd mov ecx, dword ptr [0x12ebf848] */
  ECX = (r32((uint32_t)(0x12ebf848)));
  /* 12eaffd3 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eaffd5 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eaffd7 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 12eaffdd add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eaffe3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eaffe4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eaffe7 push edx */
  push32((uint32_t)(EDX));
  /* 12eaffe8 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eaffeeu);
  /* 12eaffee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eafff0 jne 0x12eb0006 */
  if (!C.zf) goto L_12eb0006;
  /* 12eafff2 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eafffc mov eax, 1 */
  EAX = (0x1u);
  /* 12eb0001 jmp 0x12eb013e */
  goto L_12eb013e;
L_12eb0006:;
  /* 12eb0006 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12eb0009 push eax */
  push32((uint32_t)(EAX));
  /* 12eb000a mov ecx, dword ptr [0x12ebf84c] */
  ECX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb0010 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0011 call 0x12eb23c0 */
  push32(0x12eb0016u); f_12eb23c0();
  /* 12eb0016 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0019 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb001b jne 0x12eb00d0 */
  if (!C.zf) goto L_12eb00d0;
  /* 12eb0021 mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0027 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 12eb002a mov dword ptr [0x12ebf854], edx */
  w32((uint32_t)(0x12ebf854), (EDX));
  /* 12eb0030 cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0037 je 0x12eb005a */
  if (C.zf) goto L_12eb005a;
  /* 12eb0039 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb003e or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12eb0041 mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eb0046 cmp dword ptr [0x12ebf83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb004d jne 0x12eb0058 */
  if (!C.zf) goto L_12eb0058;
  /* 12eb004f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0052 mov dword ptr [0x12ebf83c], ecx */
  w32((uint32_t)(0x12ebf83c), (ECX));
L_12eb0058:;
  /* 12eb0058 jmp 0x12eb00ce */
  goto L_12eb00ce;
L_12eb005a:;
  /* 12eb005a cmp dword ptr [0x12ebf844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0061 je 0x12eb00af */
  if (C.zf) goto L_12eb00af;
  /* 12eb0063 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb0069 push edx */
  push32((uint32_t)(EDX));
  /* 12eb006a call 0x12ea6b20 */
  push32(0x12eb006fu); f_12ea6b20();
  /* 12eb006f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0072 cmp eax, dword ptr [0x12ebf844] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebf844))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0078 jne 0x12eb00af */
  if (!C.zf) goto L_12eb00af;
  /* 12eb007a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb007c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb007f push eax */
  push32((uint32_t)(EAX));
  /* 12eb0080 call 0x12eb0510 */
  push32(0x12eb0085u); f_12eb0510();
  /* 12eb0085 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0088 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb008a je 0x12eb00ad */
  if (C.zf) goto L_12eb00ad;
  /* 12eb008c mov ecx, dword ptr [0x12ebf854] */
  ECX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0092 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 12eb0095 mov dword ptr [0x12ebf854], ecx */
  w32((uint32_t)(0x12ebf854), (ECX));
  /* 12eb009b cmp dword ptr [0x12ebf83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb00a2 jne 0x12eb00ad */
  if (!C.zf) goto L_12eb00ad;
  /* 12eb00a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb00a7 mov dword ptr [0x12ebf83c], edx */
  w32((uint32_t)(0x12ebf83c), (EDX));
L_12eb00ad:;
  /* 12eb00ad jmp 0x12eb00ce */
  goto L_12eb00ce;
L_12eb00af:;
  /* 12eb00af mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb00b4 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12eb00b7 mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eb00bc cmp dword ptr [0x12ebf83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb00c3 jne 0x12eb00ce */
  if (!C.zf) goto L_12eb00ce;
  /* 12eb00c5 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb00c8 mov dword ptr [0x12ebf83c], ecx */
  w32((uint32_t)(0x12ebf83c), (ECX));
L_12eb00ce:;
  /* 12eb00ce jmp 0x12eb0131 */
  goto L_12eb0131;
L_12eb00d0:;
  /* 12eb00d0 cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb00d7 jne 0x12eb0131 */
  if (!C.zf) goto L_12eb0131;
  /* 12eb00d9 cmp dword ptr [0x12ebf844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb00e0 je 0x12eb0131 */
  if (C.zf) goto L_12eb0131;
  /* 12eb00e2 mov edx, dword ptr [0x12ebf844] */
  EDX = (r32((uint32_t)(0x12ebf844)));
  /* 12eb00e8 push edx */
  push32((uint32_t)(EDX));
  /* 12eb00e9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 12eb00ec push eax */
  push32((uint32_t)(EAX));
  /* 12eb00ed mov ecx, dword ptr [0x12ebf84c] */
  ECX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb00f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb00f4 call 0x12eb2490 */
  push32(0x12eb00f9u); f_12eb2490();
  /* 12eb00f9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb00fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb00fe jne 0x12eb0131 */
  if (!C.zf) goto L_12eb0131;
  /* 12eb0100 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb0102 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0105 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0106 call 0x12eb0510 */
  push32(0x12eb010bu); f_12eb0510();
  /* 12eb010b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb010e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0110 je 0x12eb0131 */
  if (C.zf) goto L_12eb0131;
  /* 12eb0112 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0117 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 12eb011a mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eb011f cmp dword ptr [0x12ebf83c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf83c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0126 jne 0x12eb0131 */
  if (!C.zf) goto L_12eb0131;
  /* 12eb0128 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb012b mov dword ptr [0x12ebf83c], ecx */
  w32((uint32_t)(0x12ebf83c), (ECX));
L_12eb0131:;
  /* 12eb0131 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0136 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0139 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb013b sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb013d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12eb013e:;
  /* 12eb013e mov esp, ebp */
  ESP = (EBP);
  /* 12eb0140 pop ebp */
  EBP = (pop32());
  /* 12eb0141 ret 4 */
  ESPCHK(0x12eafe20u, _esp0);
  ESP += 8; return;
}

/* FUN_10010150 @ 0x12eb0150 (116 bytes, 33 insns) */
void f_12eb0150(void) {
  FTRACE(0x12eb0150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0150 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0151 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0153 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0154 mov eax, dword ptr [0x12ebf84c] */
  EAX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb0159 push eax */
  push32((uint32_t)(EAX));
  /* 12eb015a call 0x12ea6b20 */
  push32(0x12eb015fu); f_12ea6b20();
  /* 12eb015f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0162 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb0164 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0167 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12eb016a mov dword ptr [0x12ebf848], ecx */
  w32((uint32_t)(0x12ebf848), (ECX));
  /* 12eb0170 cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0177 je 0x12eb0182 */
  if (C.zf) goto L_12eb0182;
  /* 12eb0179 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12eb0180 jmp 0x12eb0194 */
  goto L_12eb0194;
L_12eb0182:;
  /* 12eb0182 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb0188 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0189 call 0x12eb0800 */
  push32(0x12eb018eu); f_12eb0800();
  /* 12eb018e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0191 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eb0194:;
  /* 12eb0194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0197 mov dword ptr [0x12ebf844], eax */
  w32((uint32_t)(0x12ebf844), (EAX));
  /* 12eb019c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb019e push 0x12eb01d0 */
  push32((uint32_t)(0x12eb01d0u));
  /* 12eb01a3 call dword ptr [0x12ec22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b4))), 0x12eb01a9u);
  /* 12eb01a9 mov ecx, dword ptr [0x12ebf854] */
  ECX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb01af and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb01b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb01b4 jne 0x12eb01c0 */
  if (!C.zf) goto L_12eb01c0;
  /* 12eb01b6 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
L_12eb01c0:;
  /* 12eb01c0 mov esp, ebp */
  ESP = (EBP);
  /* 12eb01c2 pop ebp */
  EBP = (pop32());
  /* 12eb01c3 ret  */
  ESPCHK(0x12eb0150u, _esp0);
  ESP += 4; return;
}

/* FUN_100101d0 @ 0x12eb01d0 (287 bytes, 86 insns) */
void f_12eb01d0(void) {
  FTRACE(0x12eb01d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb01d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb01d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb01d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb01d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb01d9 push eax */
  push32((uint32_t)(EAX));
  /* 12eb01da call 0x12eb0780 */
  push32(0x12eb01dfu); f_12eb0780();
  /* 12eb01df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb01e2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12eb01e5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eb01e7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eb01ea push ecx */
  push32((uint32_t)(ECX));
  /* 12eb01eb mov edx, dword ptr [0x12ebf848] */
  EDX = (r32((uint32_t)(0x12ebf848)));
  /* 12eb01f1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb01f3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb01f5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb01fb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0201 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0202 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0205 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0206 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eb020cu);
  /* 12eb020c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb020e jne 0x12eb0224 */
  if (!C.zf) goto L_12eb0224;
  /* 12eb0210 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eb021a mov eax, 1 */
  EAX = (0x1u);
  /* 12eb021f jmp 0x12eb02e9 */
  goto L_12eb02e9;
L_12eb0224:;
  /* 12eb0224 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eb0227 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0228 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb022e push edx */
  push32((uint32_t)(EDX));
  /* 12eb022f call 0x12eb23c0 */
  push32(0x12eb0234u); f_12eb23c0();
  /* 12eb0234 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0237 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0239 jne 0x12eb0279 */
  if (!C.zf) goto L_12eb0279;
  /* 12eb023b cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0242 jne 0x12eb0256 */
  if (!C.zf) goto L_12eb0256;
  /* 12eb0244 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb0246 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0249 push eax */
  push32((uint32_t)(EAX));
  /* 12eb024a call 0x12eb0510 */
  push32(0x12eb024fu); f_12eb0510();
  /* 12eb024f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0252 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0254 je 0x12eb0277 */
  if (C.zf) goto L_12eb0277;
L_12eb0256:;
  /* 12eb0256 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0259 mov dword ptr [0x12ebf858], ecx */
  w32((uint32_t)(0x12ebf858), (ECX));
  /* 12eb025f mov edx, dword ptr [0x12ebf858] */
  EDX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb0265 mov dword ptr [0x12ebf83c], edx */
  w32((uint32_t)(0x12ebf83c), (EDX));
  /* 12eb026b mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0270 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12eb0272 mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
L_12eb0277:;
  /* 12eb0277 jmp 0x12eb02dc */
  goto L_12eb02dc;
L_12eb0279:;
  /* 12eb0279 cmp dword ptr [0x12ebf848], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf848))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0280 jne 0x12eb02dc */
  if (!C.zf) goto L_12eb02dc;
  /* 12eb0282 cmp dword ptr [0x12ebf844], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf844))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0289 je 0x12eb02dc */
  if (C.zf) goto L_12eb02dc;
  /* 12eb028b mov ecx, dword ptr [0x12ebf844] */
  ECX = (r32((uint32_t)(0x12ebf844)));
  /* 12eb0291 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0292 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 12eb0295 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0296 mov eax, dword ptr [0x12ebf84c] */
  EAX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb029b push eax */
  push32((uint32_t)(EAX));
  /* 12eb029c call 0x12eb2490 */
  push32(0x12eb02a1u); f_12eb2490();
  /* 12eb02a1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb02a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb02a6 jne 0x12eb02dc */
  if (!C.zf) goto L_12eb02dc;
  /* 12eb02a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb02aa mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb02ad push ecx */
  push32((uint32_t)(ECX));
  /* 12eb02ae call 0x12eb0510 */
  push32(0x12eb02b3u); f_12eb0510();
  /* 12eb02b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb02b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb02b8 je 0x12eb02dc */
  if (C.zf) goto L_12eb02dc;
  /* 12eb02ba mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb02bd mov dword ptr [0x12ebf858], edx */
  w32((uint32_t)(0x12ebf858), (EDX));
  /* 12eb02c3 mov eax, dword ptr [0x12ebf858] */
  EAX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb02c8 mov dword ptr [0x12ebf83c], eax */
  w32((uint32_t)(0x12ebf83c), (EAX));
  /* 12eb02cd mov ecx, dword ptr [0x12ebf854] */
  ECX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb02d3 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb02d6 mov dword ptr [0x12ebf854], ecx */
  w32((uint32_t)(0x12ebf854), (ECX));
L_12eb02dc:;
  /* 12eb02dc mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb02e1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb02e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb02e6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb02e8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12eb02e9:;
  /* 12eb02e9 mov esp, ebp */
  ESP = (EBP);
  /* 12eb02eb pop ebp */
  EBP = (pop32());
  /* 12eb02ec ret 4 */
  ESPCHK(0x12eb01d0u, _esp0);
  ESP += 8; return;
}

/* FUN_100102f0 @ 0x12eb02f0 (69 bytes, 20 insns) */
void f_12eb02f0(void) {
  FTRACE(0x12eb02f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb02f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb02f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb02f3 mov eax, dword ptr [0x12ebf850] */
  EAX = (r32((uint32_t)(0x12ebf850)));
  /* 12eb02f8 push eax */
  push32((uint32_t)(EAX));
  /* 12eb02f9 call 0x12ea6b20 */
  push32(0x12eb02feu); f_12ea6b20();
  /* 12eb02fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0301 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb0303 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0306 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 12eb0309 mov dword ptr [0x12ebf840], ecx */
  w32((uint32_t)(0x12ebf840), (ECX));
  /* 12eb030f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb0311 push 0x12eb0340 */
  push32((uint32_t)(0x12eb0340u));
  /* 12eb0316 call dword ptr [0x12ec22b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b4))), 0x12eb031cu);
  /* 12eb031c mov edx, dword ptr [0x12ebf854] */
  EDX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb0322 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb0325 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb0327 jne 0x12eb0333 */
  if (!C.zf) goto L_12eb0333;
  /* 12eb0329 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
L_12eb0333:;
  /* 12eb0333 pop ebp */
  EBP = (pop32());
  /* 12eb0334 ret  */
  ESPCHK(0x12eb02f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010340 @ 0x12eb0340 (172 bytes, 54 insns) */
void f_12eb0340(void) {
  FTRACE(0x12eb0340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0340 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0341 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0343 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0346 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0349 push eax */
  push32((uint32_t)(EAX));
  /* 12eb034a call 0x12eb0780 */
  push32(0x12eb034fu); f_12eb0780();
  /* 12eb034f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0352 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 12eb0355 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eb0357 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eb035a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb035b mov edx, dword ptr [0x12ebf840] */
  EDX = (r32((uint32_t)(0x12ebf840)));
  /* 12eb0361 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb0363 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0365 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb036b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0371 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0372 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb0375 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0376 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eb037cu);
  /* 12eb037c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb037e jne 0x12eb0391 */
  if (!C.zf) goto L_12eb0391;
  /* 12eb0380 mov dword ptr [0x12ebf854], 0 */
  w32((uint32_t)(0x12ebf854), (0x0u));
  /* 12eb038a mov eax, 1 */
  EAX = (0x1u);
  /* 12eb038f jmp 0x12eb03e6 */
  goto L_12eb03e6;
L_12eb0391:;
  /* 12eb0391 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 12eb0394 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0395 mov edx, dword ptr [0x12ebf850] */
  EDX = (r32((uint32_t)(0x12ebf850)));
  /* 12eb039b push edx */
  push32((uint32_t)(EDX));
  /* 12eb039c call 0x12eb23c0 */
  push32(0x12eb03a1u); f_12eb23c0();
  /* 12eb03a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb03a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb03a6 jne 0x12eb03d9 */
  if (!C.zf) goto L_12eb03d9;
  /* 12eb03a8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb03ab push eax */
  push32((uint32_t)(EAX));
  /* 12eb03ac call 0x12eb04c0 */
  push32(0x12eb03b1u); f_12eb04c0();
  /* 12eb03b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb03b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb03b6 je 0x12eb03d9 */
  if (C.zf) goto L_12eb03d9;
  /* 12eb03b8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 12eb03bb mov dword ptr [0x12ebf858], ecx */
  w32((uint32_t)(0x12ebf858), (ECX));
  /* 12eb03c1 mov edx, dword ptr [0x12ebf858] */
  EDX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb03c7 mov dword ptr [0x12ebf83c], edx */
  w32((uint32_t)(0x12ebf83c), (EDX));
  /* 12eb03cd mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb03d2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 12eb03d4 mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
L_12eb03d9:;
  /* 12eb03d9 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb03de and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb03e1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb03e3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb03e5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_12eb03e6:;
  /* 12eb03e6 mov esp, ebp */
  ESP = (EBP);
  /* 12eb03e8 pop ebp */
  EBP = (pop32());
  /* 12eb03e9 ret 4 */
  ESPCHK(0x12eb0340u, _esp0);
  ESP += 8; return;
}

/* FUN_100103f0 @ 0x12eb03f0 (43 bytes, 11 insns) */
void f_12eb03f0(void) {
  FTRACE(0x12eb03f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb03f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb03f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb03f3 mov eax, dword ptr [0x12ebf854] */
  EAX = (r32((uint32_t)(0x12ebf854)));
  /* 12eb03f8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb03fd mov dword ptr [0x12ebf854], eax */
  w32((uint32_t)(0x12ebf854), (EAX));
  /* 12eb0402 call dword ptr [0x12ec22b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b0))), 0x12eb0408u);
  /* 12eb0408 mov dword ptr [0x12ebf858], eax */
  w32((uint32_t)(0x12ebf858), (EAX));
  /* 12eb040d mov ecx, dword ptr [0x12ebf858] */
  ECX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb0413 mov dword ptr [0x12ebf83c], ecx */
  w32((uint32_t)(0x12ebf83c), (ECX));
  /* 12eb0419 pop ebp */
  EBP = (pop32());
  /* 12eb041a ret  */
  ESPCHK(0x12eb03f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010420 @ 0x12eb0420 (155 bytes, 57 insns) */
void f_12eb0420(void) {
  FTRACE(0x12eb0420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0420 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0421 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0423 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0426 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb042a je 0x12eb044b */
  if (C.zf) goto L_12eb044b;
  /* 12eb042c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb042f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb0432 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb0434 je 0x12eb044b */
  if (C.zf) goto L_12eb044b;
  /* 12eb0436 push 0x12ebb8ac */
  push32((uint32_t)(0x12ebb8acu));
  /* 12eb043b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb043e push edx */
  push32((uint32_t)(EDX));
  /* 12eb043f call 0x12eaf980 */
  push32(0x12eb0444u); f_12eaf980();
  /* 12eb0444 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0449 jne 0x12eb0473 */
  if (!C.zf) goto L_12eb0473;
L_12eb044b:;
  /* 12eb044b push 8 */
  push32((uint32_t)(0x8u));
  /* 12eb044d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12eb0450 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0451 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 12eb0456 mov ecx, dword ptr [0x12ebf858] */
  ECX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb045c push ecx */
  push32((uint32_t)(ECX));
  /* 12eb045d call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eb0463u);
  /* 12eb0463 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0465 jne 0x12eb046b */
  if (!C.zf) goto L_12eb046b;
  /* 12eb0467 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0469 jmp 0x12eb04b7 */
  goto L_12eb04b7;
L_12eb046b:;
  /* 12eb046b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 12eb046e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12eb0471 jmp 0x12eb04ab */
  goto L_12eb04ab;
L_12eb0473:;
  /* 12eb0473 push 0x12ebb8a8 */
  push32((uint32_t)(0x12ebb8a8u));
  /* 12eb0478 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb047b push eax */
  push32((uint32_t)(EAX));
  /* 12eb047c call 0x12eaf980 */
  push32(0x12eb0481u); f_12eaf980();
  /* 12eb0481 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0486 jne 0x12eb04ab */
  if (!C.zf) goto L_12eb04ab;
  /* 12eb0488 push 8 */
  push32((uint32_t)(0x8u));
  /* 12eb048a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12eb048d push ecx */
  push32((uint32_t)(ECX));
  /* 12eb048e push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb0490 mov edx, dword ptr [0x12ebf858] */
  EDX = (r32((uint32_t)(0x12ebf858)));
  /* 12eb0496 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0497 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eb049du);
  /* 12eb049d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb049f jne 0x12eb04a5 */
  if (!C.zf) goto L_12eb04a5;
  /* 12eb04a1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb04a3 jmp 0x12eb04b7 */
  goto L_12eb04b7;
L_12eb04a5:;
  /* 12eb04a5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12eb04a8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12eb04ab:;
  /* 12eb04ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb04ae push ecx */
  push32((uint32_t)(ECX));
  /* 12eb04af call 0x12eb25a0 */
  push32(0x12eb04b4u); f_12eb25a0();
  /* 12eb04b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb04b7:;
  /* 12eb04b7 mov esp, ebp */
  ESP = (EBP);
  /* 12eb04b9 pop ebp */
  EBP = (pop32());
  /* 12eb04ba ret  */
  ESPCHK(0x12eb0420u, _esp0);
  ESP += 4; return;
}

/* FUN_100104c0 @ 0x12eb04c0 (79 bytes, 26 insns) */
void f_12eb04c0(void) {
  FTRACE(0x12eb04c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb04c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb04c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb04c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb04c6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 12eb04ca mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 12eb04ce mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb04d5 jmp 0x12eb04e0 */
  goto L_12eb04e0;
L_12eb04d7:;
  /* 12eb04d7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb04da add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb04dd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12eb04e0:;
  /* 12eb04e0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb04e4 jae 0x12eb0506 */
  if (!C.cf) goto L_12eb0506;
  /* 12eb04e6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb04e9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb04ef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb04f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb04f4 mov cx, word ptr [eax*2 + 0x12ebe9e4] */
  CX = (r16((uint32_t)(EAX*2 + 0x12ebe9e4)));
  /* 12eb04fc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb04fe jne 0x12eb0504 */
  if (!C.zf) goto L_12eb0504;
  /* 12eb0500 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0502 jmp 0x12eb050b */
  goto L_12eb050b;
L_12eb0504:;
  /* 12eb0504 jmp 0x12eb04d7 */
  goto L_12eb04d7;
L_12eb0506:;
  /* 12eb0506 mov eax, 1 */
  EAX = (0x1u);
L_12eb050b:;
  /* 12eb050b mov esp, ebp */
  ESP = (EBP);
  /* 12eb050d pop ebp */
  EBP = (pop32());
  /* 12eb050e ret  */
  ESPCHK(0x12eb04c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010510 @ 0x12eb0510 (135 bytes, 48 insns) */
void f_12eb0510(void) {
  FTRACE(0x12eb0510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0510 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0511 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0513 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0516 push esi */
  push32((uint32_t)(ESI));
  /* 12eb0517 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb051a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb051f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0524 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0529 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 12eb052c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0531 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb0534 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 12eb0536 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 12eb0539 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb053a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb053c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb053f push edx */
  push32((uint32_t)(EDX));
  /* 12eb0540 call dword ptr [0x12ebf85c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ebf85c))), 0x12eb0546u);
  /* 12eb0546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0548 jne 0x12eb054e */
  if (!C.zf) goto L_12eb054e;
  /* 12eb054a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb054c jmp 0x12eb0592 */
  goto L_12eb0592;
L_12eb054e:;
  /* 12eb054e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 12eb0551 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0552 call 0x12eb0780 */
  push32(0x12eb0557u); f_12eb0780();
  /* 12eb0557 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb055a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb055d je 0x12eb058d */
  if (C.zf) goto L_12eb058d;
  /* 12eb055f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0563 je 0x12eb058d */
  if (C.zf) goto L_12eb058d;
  /* 12eb0565 mov ecx, dword ptr [0x12ebf84c] */
  ECX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb056b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb056c call 0x12eb0800 */
  push32(0x12eb0571u); f_12eb0800();
  /* 12eb0571 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0574 mov esi, eax */
  ESI = (EAX);
  /* 12eb0576 mov edx, dword ptr [0x12ebf84c] */
  EDX = (r32((uint32_t)(0x12ebf84c)));
  /* 12eb057c push edx */
  push32((uint32_t)(EDX));
  /* 12eb057d call 0x12ea6b20 */
  push32(0x12eb0582u); f_12ea6b20();
  /* 12eb0582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0585 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0587 jne 0x12eb058d */
  if (!C.zf) goto L_12eb058d;
  /* 12eb0589 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb058b jmp 0x12eb0592 */
  goto L_12eb0592;
L_12eb058d:;
  /* 12eb058d mov eax, 1 */
  EAX = (0x1u);
L_12eb0592:;
  /* 12eb0592 pop esi */
  ESI = (pop32());
  /* 12eb0593 mov esp, ebp */
  ESP = (EBP);
  /* 12eb0595 pop ebp */
  EBP = (pop32());
  /* 12eb0596 ret  */
  ESPCHK(0x12eb0510u, _esp0);
  ESP += 4; return;
}

/* FUN_100105a0 @ 0x12eb05a0 (77 bytes, 18 insns) */
void f_12eb05a0(void) {
  FTRACE(0x12eb05a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb05a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb05a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb05a3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb05a9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 12eb05b3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 12eb05b9 push eax */
  push32((uint32_t)(EAX));
  /* 12eb05ba call dword ptr [0x12ec22ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22ac))), 0x12eb05c0u);
  /* 12eb05c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb05c2 je 0x12eb05d9 */
  if (C.zf) goto L_12eb05d9;
  /* 12eb05c4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb05cb jne 0x12eb05d9 */
  if (!C.zf) goto L_12eb05d9;
  /* 12eb05cd mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 12eb05d7 jmp 0x12eb05e3 */
  goto L_12eb05e3;
L_12eb05d9:;
  /* 12eb05d9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_12eb05e3:;
  /* 12eb05e3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12eb05e9 mov esp, ebp */
  ESP = (EBP);
  /* 12eb05eb pop ebp */
  EBP = (pop32());
  /* 12eb05ec ret  */
  ESPCHK(0x12eb05a0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x12eb05f0 (388 bytes, 118 insns) */
void f_12eb05f0(void) {
  FTRACE(0x12eb05f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb05f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb05f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb05f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb05f6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb05fd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 12eb0604 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12eb060b:;
  /* 12eb060b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb060e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0611 jg 0x12eb0758 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb0758;
  /* 12eb0617 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb061a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb061d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb061e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0620 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eb0622 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb0625 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0628 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb062b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb062e cmp edx, dword ptr [ecx + 0x12ebe540] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12ebe540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0634 jne 0x12eb072e */
  if (!C.zf) goto L_12eb072e;
  /* 12eb063a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb063d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0640 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0644 ja 0x12eb0667 */
  if ((!C.cf&&!C.zf)) goto L_12eb0667;
  /* 12eb0646 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb064a je 0x12eb06d9 */
  if (C.zf) goto L_12eb06d9;
  /* 12eb0650 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0654 je 0x12eb0684 */
  if (C.zf) goto L_12eb0684;
  /* 12eb0656 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb065a je 0x12eb06a6 */
  if (C.zf) goto L_12eb06a6;
  /* 12eb065c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0660 je 0x12eb06c8 */
  if (C.zf) goto L_12eb06c8;
  /* 12eb0662 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb0667:;
  /* 12eb0667 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb066e je 0x12eb0695 */
  if (C.zf) goto L_12eb0695;
  /* 12eb0670 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0677 je 0x12eb06b7 */
  if (C.zf) goto L_12eb06b7;
  /* 12eb0679 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0680 je 0x12eb06ea */
  if (C.zf) goto L_12eb06ea;
  /* 12eb0682 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb0684:;
  /* 12eb0684 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0687 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb068a add ecx, 0x12ebe544 */
  { uint32_t _a=(ECX),_b=(0x12ebe544u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0690 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb0693 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb0695:;
  /* 12eb0695 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0698 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb069b mov eax, dword ptr [edx + 0x12ebe54c] */
  EAX = (r32((uint32_t)(EDX + 0x12ebe54c)));
  /* 12eb06a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb06a4 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb06a6:;
  /* 12eb06a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb06a9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb06ac add ecx, 0x12ebe550 */
  { uint32_t _a=(ECX),_b=(0x12ebe550u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb06b2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb06b5 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb06b7:;
  /* 12eb06b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb06ba imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb06bd mov eax, dword ptr [edx + 0x12ebe554] */
  EAX = (r32((uint32_t)(EDX + 0x12ebe554)));
  /* 12eb06c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb06c6 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb06c8:;
  /* 12eb06c8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb06cb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb06ce add ecx, 0x12ebe558 */
  { uint32_t _a=(ECX),_b=(0x12ebe558u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb06d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb06d7 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb06d9:;
  /* 12eb06d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb06dc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb06df add edx, 0x12ebe55c */
  { uint32_t _a=(EDX),_b=(0x12ebe55cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb06e5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb06e8 jmp 0x12eb06f8 */
  goto L_12eb06f8;
L_12eb06ea:;
  /* 12eb06ea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb06ed imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb06f0 add eax, 0x12ebe564 */
  { uint32_t _a=(EAX),_b=(0x12ebe564u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb06f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eb06f8:;
  /* 12eb06f8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb06fc je 0x12eb0704 */
  if (C.zf) goto L_12eb0704;
  /* 12eb06fe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0702 jge 0x12eb0706 */
  if ((C.sf==C.of)) goto L_12eb0706;
L_12eb0704:;
  /* 12eb0704 jmp 0x12eb0758 */
  goto L_12eb0758;
L_12eb0706:;
  /* 12eb0706 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb0709 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb070c push ecx */
  push32((uint32_t)(ECX));
  /* 12eb070d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0710 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0711 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb0714 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0715 call 0x12ea7510 */
  push32(0x12eb071au); f_12ea7510();
  /* 12eb071a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb071d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb0720 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0723 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 12eb0727 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb072c jmp 0x12eb076e */
  goto L_12eb076e;
L_12eb072e:;
  /* 12eb072e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0731 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb0734 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0737 cmp eax, dword ptr [edx + 0x12ebe540] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12ebe540))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb073d jae 0x12eb074a */
  if (!C.cf) goto L_12eb074a;
  /* 12eb073f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0742 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0745 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb0748 jmp 0x12eb0753 */
  goto L_12eb0753;
L_12eb074a:;
  /* 12eb074a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb074d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0750 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb0753:;
  /* 12eb0753 jmp 0x12eb060b */
  goto L_12eb060b;
L_12eb0758:;
  /* 12eb0758 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb075b push eax */
  push32((uint32_t)(EAX));
  /* 12eb075c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb075f push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0760 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb0763 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0767 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0768 call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb076eu);
L_12eb076e:;
  /* 12eb076e mov esp, ebp */
  ESP = (EBP);
  /* 12eb0770 pop ebp */
  EBP = (pop32());
  /* 12eb0771 ret 0x10 */
  ESPCHK(0x12eb05f0u, _esp0);
  ESP += 20; return;
}

/* FUN_10010780 @ 0x12eb0780 (118 bytes, 42 insns) */
void f_12eb0780(void) {
  FTRACE(0x12eb0780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0780 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0781 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0786 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12eb078d:;
  /* 12eb078d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0790 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb0792 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12eb0795 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb0799 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb079c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb079f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb07a2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb07a4 je 0x12eb07ef */
  if (C.zf) goto L_12eb07ef;
  /* 12eb07a6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb07aa cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb07ad jl 0x12eb07c2 */
  if ((C.sf!=C.of)) goto L_12eb07c2;
  /* 12eb07af movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb07b3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb07b6 jg 0x12eb07c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb07c2;
  /* 12eb07b8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12eb07bb add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb07bd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 12eb07c0 jmp 0x12eb07dc */
  goto L_12eb07dc;
L_12eb07c2:;
  /* 12eb07c2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb07c6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb07c9 jl 0x12eb07dc */
  if ((C.sf!=C.of)) goto L_12eb07dc;
  /* 12eb07cb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb07cf cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb07d2 jg 0x12eb07dc */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb07dc;
  /* 12eb07d4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12eb07d7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb07d9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_12eb07dc:;
  /* 12eb07dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb07df shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 12eb07e2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb07e6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12eb07ea mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb07ed jmp 0x12eb078d */
  goto L_12eb078d;
L_12eb07ef:;
  /* 12eb07ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb07f2 mov esp, ebp */
  ESP = (EBP);
  /* 12eb07f4 pop ebp */
  EBP = (pop32());
  /* 12eb07f5 ret  */
  ESPCHK(0x12eb0780u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x12eb0800 (101 bytes, 36 insns) */
void f_12eb0800(void) {
  FTRACE(0x12eb0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0800 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0801 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0803 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0806 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb080d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0810 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb0812 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 12eb0815 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb081b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12eb081e:;
  /* 12eb081e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12eb0822 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0825 jl 0x12eb0830 */
  if ((C.sf!=C.of)) goto L_12eb0830;
  /* 12eb0827 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12eb082b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb082e jle 0x12eb0842 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb0842;
L_12eb0830:;
  /* 12eb0830 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12eb0834 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0837 jl 0x12eb085e */
  if ((C.sf!=C.of)) goto L_12eb085e;
  /* 12eb0839 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 12eb083d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0840 jg 0x12eb085e */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb085e;
L_12eb0842:;
  /* 12eb0842 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0845 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0848 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb084b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb084e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb0850 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 12eb0853 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0856 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0859 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eb085c jmp 0x12eb081e */
  goto L_12eb081e;
L_12eb085e:;
  /* 12eb085e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0861 mov esp, ebp */
  ESP = (EBP);
  /* 12eb0863 pop ebp */
  EBP = (pop32());
  /* 12eb0864 ret  */
  ESPCHK(0x12eb0800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010870 @ 0x12eb0870 (122 bytes, 39 insns) */
void f_12eb0870(void) {
  FTRACE(0x12eb0870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0870 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0871 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0873 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0874 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0877 cmp eax, dword ptr [0x12ec10dc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ec10dc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb087d jae 0x12eb08a1 */
  if (!C.cf) goto L_12eb08a1;
  /* 12eb087f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0882 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 12eb0885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0888 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb088b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb088e mov eax, dword ptr [ecx*4 + 0x12ec0fa0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12ec0fa0)));
  /* 12eb0895 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 12eb089a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb089d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb089f jne 0x12eb08bc */
  if (!C.zf) goto L_12eb08bc;
L_12eb08a1:;
  /* 12eb08a1 call 0x12eabbc0 */
  push32(0x12eb08a6u); f_12eabbc0();
  /* 12eb08a6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 12eb08ac call 0x12eabbd0 */
  push32(0x12eb08b1u); f_12eabbd0();
  /* 12eb08b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12eb08b7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb08ba jmp 0x12eb08e6 */
  goto L_12eb08e6;
L_12eb08bc:;
  /* 12eb08bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb08bf push edx */
  push32((uint32_t)(EDX));
  /* 12eb08c0 call 0x12ead3e0 */
  push32(0x12eb08c5u); f_12ead3e0();
  /* 12eb08c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb08c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb08cb push eax */
  push32((uint32_t)(EAX));
  /* 12eb08cc call 0x12eb08f0 */
  push32(0x12eb08d1u); f_12eb08f0();
  /* 12eb08d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb08d4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb08d7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb08da push ecx */
  push32((uint32_t)(ECX));
  /* 12eb08db call 0x12ead470 */
  push32(0x12eb08e0u); f_12ead470();
  /* 12eb08e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb08e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eb08e6:;
  /* 12eb08e6 mov esp, ebp */
  ESP = (EBP);
  /* 12eb08e8 pop ebp */
  EBP = (pop32());
  /* 12eb08e9 ret  */
  ESPCHK(0x12eb0870u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x12eb08f0 (170 bytes, 59 insns) */
void f_12eb08f0(void) {
  FTRACE(0x12eb08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb08f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb08f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb08f4 push esi */
  push32((uint32_t)(ESI));
  /* 12eb08f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb08f8 push eax */
  push32((uint32_t)(EAX));
  /* 12eb08f9 call 0x12ead260 */
  push32(0x12eb08feu); f_12ead260();
  /* 12eb08fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0901 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0904 je 0x12eb0943 */
  if (C.zf) goto L_12eb0943;
  /* 12eb0906 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb090a je 0x12eb0912 */
  if (C.zf) goto L_12eb0912;
  /* 12eb090c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0910 jne 0x12eb092c */
  if (!C.zf) goto L_12eb092c;
L_12eb0912:;
  /* 12eb0912 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb0914 call 0x12ead260 */
  push32(0x12eb0919u); f_12ead260();
  /* 12eb0919 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb091c mov esi, eax */
  ESI = (EAX);
  /* 12eb091e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb0920 call 0x12ead260 */
  push32(0x12eb0925u); f_12ead260();
  /* 12eb0925 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0928 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb092a je 0x12eb0943 */
  if (C.zf) goto L_12eb0943;
L_12eb092c:;
  /* 12eb092c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb092f push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0930 call 0x12ead260 */
  push32(0x12eb0935u); f_12ead260();
  /* 12eb0935 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0938 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0939 call dword ptr [0x12ec22a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a8))), 0x12eb093fu);
  /* 12eb093f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb0941 je 0x12eb094c */
  if (C.zf) goto L_12eb094c;
L_12eb0943:;
  /* 12eb0943 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb094a jmp 0x12eb0955 */
  goto L_12eb0955;
L_12eb094c:;
  /* 12eb094c call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eb0952u);
  /* 12eb0952 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eb0955:;
  /* 12eb0955 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0958 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0959 call 0x12ead180 */
  push32(0x12eb095eu); f_12ead180();
  /* 12eb095e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0961 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0964 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 12eb0967 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb096a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 12eb096d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb0970 mov edx, dword ptr [eax*4 + 0x12ec0fa0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12ec0fa0)));
  /* 12eb0977 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 12eb097c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0980 je 0x12eb0993 */
  if (C.zf) goto L_12eb0993;
  /* 12eb0982 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0985 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0986 call 0x12eabb20 */
  push32(0x12eb098bu); f_12eabb20();
  /* 12eb098b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb098e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb0991 jmp 0x12eb0995 */
  goto L_12eb0995;
L_12eb0993:;
  /* 12eb0993 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb0995:;
  /* 12eb0995 pop esi */
  ESI = (pop32());
  /* 12eb0996 mov esp, ebp */
  ESP = (EBP);
  /* 12eb0998 pop ebp */
  EBP = (pop32());
  /* 12eb0999 ret  */
  ESPCHK(0x12eb08f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100109a0 @ 0x12eb09a0 (146 bytes, 52 insns) */
void f_12eb09a0(void) {
  FTRACE(0x12eb09a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb09a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb09a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb09a3 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb09a4 push esi */
  push32((uint32_t)(ESI));
  /* 12eb09a5 push edi */
  push32((uint32_t)(EDI));
L_12eb09a6:;
  /* 12eb09a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb09aa jne 0x12eb09ca */
  if (!C.zf) goto L_12eb09ca;
  /* 12eb09ac push 0x12ebb1e8 */
  push32((uint32_t)(0x12ebb1e8u));
  /* 12eb09b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb09b3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 12eb09b5 push 0x12ebb8b0 */
  push32((uint32_t)(0x12ebb8b0u));
  /* 12eb09ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb09bc call 0x12ea2db0 */
  push32(0x12eb09c1u); f_12ea2db0();
  /* 12eb09c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb09c4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb09c7 jne 0x12eb09ca */
  if (!C.zf) goto L_12eb09ca;
  /* 12eb09c9 int3  */
  x86_unimpl("int3 @ 0x12eb09c9");
L_12eb09ca:;
  /* 12eb09ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb09cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb09ce jne 0x12eb09a6 */
  if (!C.zf) goto L_12eb09a6;
  /* 12eb09d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb09d3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eb09d6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb09dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb09de je 0x12eb0a2d */
  if (C.zf) goto L_12eb0a2d;
  /* 12eb09e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb09e3 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 12eb09e6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb09e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb09eb je 0x12eb0a2d */
  if (C.zf) goto L_12eb0a2d;
  /* 12eb09ed push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb09ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb09f2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eb09f5 push eax */
  push32((uint32_t)(EAX));
  /* 12eb09f6 call 0x12ea4780 */
  push32(0x12eb09fbu); f_12ea4780();
  /* 12eb09fb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb09fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0a01 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eb0a04 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb0a0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0a0d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 12eb0a10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0a13 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 12eb0a19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0a1c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 12eb0a23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb0a26 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_12eb0a2d:;
  /* 12eb0a2d pop edi */
  EDI = (pop32());
  /* 12eb0a2e pop esi */
  ESI = (pop32());
  /* 12eb0a2f pop ebx */
  EBX = (pop32());
  /* 12eb0a30 pop ebp */
  EBP = (pop32());
  /* 12eb0a31 ret  */
  ESPCHK(0x12eb09a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a40 @ 0x12eb0a40 (289 bytes, 97 insns) */
void f_12eb0a40(void) {
  FTRACE(0x12eb0a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0a40 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0a41 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0a43 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0a46 push esi */
  push32((uint32_t)(ESI));
  /* 12eb0a47 mov eax, dword ptr [0x12ebecb8] */
  EAX = (r32((uint32_t)(0x12ebecb8)));
  /* 12eb0a4c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb0a4f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb0a56 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0a5d jmp 0x12eb0a68 */
  goto L_12eb0a68;
L_12eb0a5f:;
  /* 12eb0a5f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0a65 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12eb0a68:;
  /* 12eb0a68 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0a6c jae 0x12eb0aa1 */
  if (!C.cf) goto L_12eb0aa1;
  /* 12eb0a6e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0a71 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0a74 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12eb0a77 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0a78 call 0x12ea6b20 */
  push32(0x12eb0a7du); f_12ea6b20();
  /* 12eb0a7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0a80 mov esi, eax */
  ESI = (EAX);
  /* 12eb0a82 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0a85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0a88 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12eb0a8c push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0a8d call 0x12ea6b20 */
  push32(0x12eb0a92u); f_12ea6b20();
  /* 12eb0a92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0a95 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0a98 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12eb0a9c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb0a9f jmp 0x12eb0a5f */
  goto L_12eb0a5f;
L_12eb0aa1:;
  /* 12eb0aa1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0aa4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0aa7 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0aa8 call 0x12ea3cd0 */
  push32(0x12eb0aadu); f_12ea3cd0();
  /* 12eb0aad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ab0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb0ab3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0ab7 je 0x12eb0b59 */
  if (C.zf) goto L_12eb0b59;
  /* 12eb0abd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0ac0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0ac3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0aca jmp 0x12eb0ad5 */
  goto L_12eb0ad5;
L_12eb0acc:;
  /* 12eb0acc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0acf add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ad2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb0ad5:;
  /* 12eb0ad5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0ad9 jae 0x12eb0b4a */
  if (!C.cf) goto L_12eb0b4a;
  /* 12eb0adb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ade mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12eb0ae1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ae4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ae7 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0aea mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0aed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0af0 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12eb0af3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0af4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0af7 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0af8 call 0x12ea6ca0 */
  push32(0x12eb0afdu); f_12ea6ca0();
  /* 12eb0afd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b00 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0b01 call 0x12ea6b20 */
  push32(0x12eb0b06u); f_12ea6b20();
  /* 12eb0b06 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b09 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b0c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b0e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0b11 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b14 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12eb0b17 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b1a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b1d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0b20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0b23 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0b26 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12eb0b2a push eax */
  push32((uint32_t)(EAX));
  /* 12eb0b2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b2e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0b2f call 0x12ea6ca0 */
  push32(0x12eb0b34u); f_12ea6ca0();
  /* 12eb0b34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b37 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0b38 call 0x12ea6b20 */
  push32(0x12eb0b3du); f_12ea6b20();
  /* 12eb0b3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b43 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b45 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0b48 jmp 0x12eb0acc */
  goto L_12eb0acc;
L_12eb0b4a:;
  /* 12eb0b4a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b4d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12eb0b50 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0b53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b56 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12eb0b59:;
  /* 12eb0b59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0b5c pop esi */
  ESI = (pop32());
  /* 12eb0b5d mov esp, ebp */
  ESP = (EBP);
  /* 12eb0b5f pop ebp */
  EBP = (pop32());
  /* 12eb0b60 ret  */
  ESPCHK(0x12eb0a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b70 @ 0x12eb0b70 (291 bytes, 97 insns) */
void f_12eb0b70(void) {
  FTRACE(0x12eb0b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0b70 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0b71 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0b73 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0b76 push esi */
  push32((uint32_t)(ESI));
  /* 12eb0b77 mov eax, dword ptr [0x12ebecb8] */
  EAX = (r32((uint32_t)(0x12ebecb8)));
  /* 12eb0b7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb0b7f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb0b86 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0b8d jmp 0x12eb0b98 */
  goto L_12eb0b98;
L_12eb0b8f:;
  /* 12eb0b8f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0b92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0b95 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12eb0b98:;
  /* 12eb0b98 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0b9c jae 0x12eb0bd2 */
  if (!C.cf) goto L_12eb0bd2;
  /* 12eb0b9e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0ba1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0ba4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12eb0ba8 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0ba9 call 0x12ea6b20 */
  push32(0x12eb0baeu); f_12ea6b20();
  /* 12eb0bae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0bb1 mov esi, eax */
  ESI = (EAX);
  /* 12eb0bb3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0bb6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0bb9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 12eb0bbd push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0bbe call 0x12ea6b20 */
  push32(0x12eb0bc3u); f_12ea6b20();
  /* 12eb0bc3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0bc6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0bc9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12eb0bcd mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb0bd0 jmp 0x12eb0b8f */
  goto L_12eb0b8f;
L_12eb0bd2:;
  /* 12eb0bd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0bd5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0bd8 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0bd9 call 0x12ea3cd0 */
  push32(0x12eb0bdeu); f_12ea3cd0();
  /* 12eb0bde add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0be1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb0be4 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0be8 je 0x12eb0c8b */
  if (C.zf) goto L_12eb0c8b;
  /* 12eb0bee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0bf1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0bf4 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0bfb jmp 0x12eb0c06 */
  goto L_12eb0c06;
L_12eb0bfd:;
  /* 12eb0bfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0c00 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c03 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb0c06:;
  /* 12eb0c06 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0c0a jae 0x12eb0c7c */
  if (!C.cf) goto L_12eb0c7c;
  /* 12eb0c0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c0f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 12eb0c12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c18 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0c1b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0c1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0c21 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 12eb0c25 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0c26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c29 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0c2a call 0x12ea6ca0 */
  push32(0x12eb0c2fu); f_12ea6ca0();
  /* 12eb0c2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c32 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0c33 call 0x12ea6b20 */
  push32(0x12eb0c38u); f_12ea6b20();
  /* 12eb0c38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c3e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb0c43 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c46 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 12eb0c49 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c4f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0c52 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0c55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0c58 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12eb0c5c push eax */
  push32((uint32_t)(EAX));
  /* 12eb0c5d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c60 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0c61 call 0x12ea6ca0 */
  push32(0x12eb0c66u); f_12ea6ca0();
  /* 12eb0c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c69 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0c6a call 0x12ea6b20 */
  push32(0x12eb0c6fu); f_12ea6b20();
  /* 12eb0c6f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c75 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c77 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0c7a jmp 0x12eb0bfd */
  goto L_12eb0bfd;
L_12eb0c7c:;
  /* 12eb0c7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c7f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12eb0c82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0c85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0c88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_12eb0c8b:;
  /* 12eb0c8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0c8e pop esi */
  ESI = (pop32());
  /* 12eb0c8f mov esp, ebp */
  ESP = (EBP);
  /* 12eb0c91 pop ebp */
  EBP = (pop32());
  /* 12eb0c92 ret  */
  ESPCHK(0x12eb0b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ca0 @ 0x12eb0ca0 (878 bytes, 273 insns) */
void f_12eb0ca0(void) {
  FTRACE(0x12eb0ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb0ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb0ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb0ca3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb0ca6 push esi */
  push32((uint32_t)(ESI));
  /* 12eb0ca7 mov eax, dword ptr [0x12ebecb8] */
  EAX = (r32((uint32_t)(0x12ebecb8)));
  /* 12eb0cac mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb0caf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb0cb6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0cbd jmp 0x12eb0cc8 */
  goto L_12eb0cc8;
L_12eb0cbf:;
  /* 12eb0cbf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0cc2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0cc5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12eb0cc8:;
  /* 12eb0cc8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0ccc jae 0x12eb0d01 */
  if (!C.cf) goto L_12eb0d01;
  /* 12eb0cce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0cd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0cd4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 12eb0cd7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0cd8 call 0x12ea6b20 */
  push32(0x12eb0cddu); f_12ea6b20();
  /* 12eb0cdd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ce0 mov esi, eax */
  ESI = (EAX);
  /* 12eb0ce2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0ce5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0ce8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 12eb0cec push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0ced call 0x12ea6b20 */
  push32(0x12eb0cf2u); f_12ea6b20();
  /* 12eb0cf2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0cf5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0cf8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12eb0cfc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb0cff jmp 0x12eb0cbf */
  goto L_12eb0cbf;
L_12eb0d01:;
  /* 12eb0d01 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0d08 jmp 0x12eb0d13 */
  goto L_12eb0d13;
L_12eb0d0a:;
  /* 12eb0d0a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0d0d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d10 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12eb0d13:;
  /* 12eb0d13 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0d17 jae 0x12eb0d4d */
  if (!C.cf) goto L_12eb0d4d;
  /* 12eb0d19 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0d1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d1f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12eb0d23 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0d24 call 0x12ea6b20 */
  push32(0x12eb0d29u); f_12ea6b20();
  /* 12eb0d29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d2c mov esi, eax */
  ESI = (EAX);
  /* 12eb0d2e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0d31 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d34 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12eb0d38 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0d39 call 0x12ea6b20 */
  push32(0x12eb0d3eu); f_12ea6b20();
  /* 12eb0d3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d41 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d44 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12eb0d48 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb0d4b jmp 0x12eb0d0a */
  goto L_12eb0d0a;
L_12eb0d4d:;
  /* 12eb0d4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d50 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12eb0d56 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0d57 call 0x12ea6b20 */
  push32(0x12eb0d5cu); f_12ea6b20();
  /* 12eb0d5c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d5f mov esi, eax */
  ESI = (EAX);
  /* 12eb0d61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d64 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 12eb0d6a push edx */
  push32((uint32_t)(EDX));
  /* 12eb0d6b call 0x12ea6b20 */
  push32(0x12eb0d70u); f_12ea6b20();
  /* 12eb0d70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d73 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d76 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 12eb0d7a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb0d7d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d80 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12eb0d86 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0d87 call 0x12ea6b20 */
  push32(0x12eb0d8cu); f_12ea6b20();
  /* 12eb0d8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0d8f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0d92 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0d96 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb0d99 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0d9c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 12eb0da2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0da3 call 0x12ea6b20 */
  push32(0x12eb0da8u); f_12ea6b20();
  /* 12eb0da8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0dab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0dae lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12eb0db2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb0db5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0db8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12eb0dbe push edx */
  push32((uint32_t)(EDX));
  /* 12eb0dbf call 0x12ea6b20 */
  push32(0x12eb0dc4u); f_12ea6b20();
  /* 12eb0dc4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0dc7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0dca lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0dce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb0dd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb0dd4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0dd9 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0dda call 0x12ea3cd0 */
  push32(0x12eb0ddfu); f_12ea3cd0();
  /* 12eb0ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0de2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb0de5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0de9 je 0x12eb1006 */
  if (C.zf) goto L_12eb1006;
  /* 12eb0def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0df2 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 12eb0df5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0df8 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0dfe mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0e01 push 0xac */
  push32((uint32_t)(0xacu));
  /* 12eb0e06 mov eax, dword ptr [0x12ebecb8] */
  EAX = (r32((uint32_t)(0x12ebecb8)));
  /* 12eb0e0b push eax */
  push32((uint32_t)(EAX));
  /* 12eb0e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb0e0f push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0e10 call 0x12eaa5d0 */
  push32(0x12eb0e15u); f_12eaa5d0();
  /* 12eb0e15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e18 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0e1f jmp 0x12eb0e2a */
  goto L_12eb0e2a;
L_12eb0e21:;
  /* 12eb0e21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0e24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb0e2a:;
  /* 12eb0e2a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0e2e jae 0x12eb0e9e */
  if (!C.cf) goto L_12eb0e9e;
  /* 12eb0e30 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0e33 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0e36 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e39 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12eb0e3c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0e3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0e42 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12eb0e45 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0e46 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e49 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0e4a call 0x12ea6ca0 */
  push32(0x12eb0e4fu); f_12ea6ca0();
  /* 12eb0e4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e52 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0e53 call 0x12ea6b20 */
  push32(0x12eb0e58u); f_12ea6b20();
  /* 12eb0e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e5e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0e62 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0e65 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0e68 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0e6b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e6e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 12eb0e72 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0e75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0e78 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 12eb0e7c push edx */
  push32((uint32_t)(EDX));
  /* 12eb0e7d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e80 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0e81 call 0x12ea6ca0 */
  push32(0x12eb0e86u); f_12ea6ca0();
  /* 12eb0e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e89 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0e8a call 0x12ea6b20 */
  push32(0x12eb0e8fu); f_12ea6b20();
  /* 12eb0e8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0e92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0e95 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0e99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0e9c jmp 0x12eb0e21 */
  goto L_12eb0e21;
L_12eb0e9e:;
  /* 12eb0e9e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb0ea5 jmp 0x12eb0eb0 */
  goto L_12eb0eb0;
L_12eb0ea7:;
  /* 12eb0ea7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0eaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ead mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12eb0eb0:;
  /* 12eb0eb0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb0eb4 jae 0x12eb0f26 */
  if (!C.cf) goto L_12eb0f26;
  /* 12eb0eb6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0eb9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0ebc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ebf mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 12eb0ec3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0ec6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0ec9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12eb0ecd push eax */
  push32((uint32_t)(EAX));
  /* 12eb0ece mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ed1 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0ed2 call 0x12ea6ca0 */
  push32(0x12eb0ed7u); f_12ea6ca0();
  /* 12eb0ed7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0eda push eax */
  push32((uint32_t)(EAX));
  /* 12eb0edb call 0x12ea6b20 */
  push32(0x12eb0ee0u); f_12ea6b20();
  /* 12eb0ee0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ee3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ee6 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12eb0eea mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0eed mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0ef0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0ef3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ef6 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 12eb0efa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb0efd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0f00 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12eb0f04 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0f05 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f08 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0f09 call 0x12ea6ca0 */
  push32(0x12eb0f0eu); f_12ea6ca0();
  /* 12eb0f0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f11 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0f12 call 0x12ea6b20 */
  push32(0x12eb0f17u); f_12ea6b20();
  /* 12eb0f17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f1a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f1d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12eb0f21 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0f24 jmp 0x12eb0ea7 */
  goto L_12eb0ea7;
L_12eb0f26:;
  /* 12eb0f26 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0f29 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f2c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 12eb0f32 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0f35 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12eb0f3b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0f3c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f3f push edx */
  push32((uint32_t)(EDX));
  /* 12eb0f40 call 0x12ea6ca0 */
  push32(0x12eb0f45u); f_12ea6ca0();
  /* 12eb0f45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f48 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0f49 call 0x12ea6b20 */
  push32(0x12eb0f4eu); f_12ea6b20();
  /* 12eb0f4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f54 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0f58 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0f5b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0f5e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f61 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 12eb0f67 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0f6a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12eb0f70 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0f71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f74 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0f75 call 0x12ea6ca0 */
  push32(0x12eb0f7au); f_12ea6ca0();
  /* 12eb0f7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f7d push eax */
  push32((uint32_t)(EAX));
  /* 12eb0f7e call 0x12ea6b20 */
  push32(0x12eb0f83u); f_12ea6b20();
  /* 12eb0f83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0f86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f89 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12eb0f8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0f90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0f93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0f96 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 12eb0f9c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0f9f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 12eb0fa5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0fa6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0fa9 push edx */
  push32((uint32_t)(EDX));
  /* 12eb0faa call 0x12ea6ca0 */
  push32(0x12eb0fafu); f_12ea6ca0();
  /* 12eb0faf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0fb2 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0fb3 call 0x12ea6b20 */
  push32(0x12eb0fb8u); f_12ea6b20();
  /* 12eb0fb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0fbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0fbe lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 12eb0fc2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb0fc5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0fc8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0fcb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 12eb0fd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb0fd4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12eb0fda push eax */
  push32((uint32_t)(EAX));
  /* 12eb0fdb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0fde push ecx */
  push32((uint32_t)(ECX));
  /* 12eb0fdf call 0x12ea6ca0 */
  push32(0x12eb0fe4u); f_12ea6ca0();
  /* 12eb0fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0fe7 push eax */
  push32((uint32_t)(EAX));
  /* 12eb0fe8 call 0x12ea6b20 */
  push32(0x12eb0fedu); f_12ea6b20();
  /* 12eb0fed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb0ff0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb0ff3 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 12eb0ff7 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb0ffa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb0ffd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb1000 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_12eb1006:;
  /* 12eb1006 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1009 pop esi */
  ESI = (pop32());
  /* 12eb100a mov esp, ebp */
  ESP = (EBP);
  /* 12eb100c pop ebp */
  EBP = (pop32());
  /* 12eb100d ret  */
  ESPCHK(0x12eb0ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011010 @ 0x12eb1010 (31 bytes, 15 insns) */
void f_12eb1010(void) {
  FTRACE(0x12eb1010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb1010 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb1011 mov ebp, esp */
  EBP = (ESP);
  /* 12eb1013 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1015 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1018 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1019 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb101c push ecx */
  push32((uint32_t)(ECX));
  /* 12eb101d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1020 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1021 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1024 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1025 call 0x12eb1030 */
  push32(0x12eb102au); f_12eb1030();
  /* 12eb102a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb102d pop ebp */
  EBP = (pop32());
  /* 12eb102e ret  */
  ESPCHK(0x12eb1010u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x12eb1030 (394 bytes, 123 insns) */
void f_12eb1030(void) {
  FTRACE(0x12eb1030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb1030 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb1031 mov ebp, esp */
  EBP = (ESP);
  /* 12eb1033 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1036 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1039 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb103c push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb1041 call dword ptr [0x12ec2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2338))), 0x12eb1047u);
  /* 12eb1047 cmp dword ptr [0x12ebf94c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf94c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb104e je 0x12eb106e */
  if (C.zf) goto L_12eb106e;
  /* 12eb1050 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb1055 call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eb105bu);
  /* 12eb105b push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb105d call 0x12ea76f0 */
  push32(0x12eb1062u); f_12ea76f0();
  /* 12eb1062 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1065 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 12eb106c jmp 0x12eb1075 */
  goto L_12eb1075;
L_12eb106e:;
  /* 12eb106e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12eb1075:;
  /* 12eb1075 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1079 jne 0x12eb1086 */
  if (!C.zf) goto L_12eb1086;
  /* 12eb107b mov ecx, dword ptr [0x12ebecb8] */
  ECX = (r32((uint32_t)(0x12ebecb8)));
  /* 12eb1081 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eb1084 jmp 0x12eb108c */
  goto L_12eb108c;
L_12eb1086:;
  /* 12eb1086 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1089 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb108c:;
  /* 12eb108c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb108f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eb1092:;
  /* 12eb1092 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1096 jbe 0x12eb1183 */
  if ((C.cf||C.zf)) goto L_12eb1183;
  /* 12eb109c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb109f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb10a1 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 12eb10a4 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb10a8 je 0x12eb10b2 */
  if (C.zf) goto L_12eb10b2;
  /* 12eb10aa cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb10ae je 0x12eb10b7 */
  if (C.zf) goto L_12eb10b7;
  /* 12eb10b0 jmp 0x12eb1111 */
  goto L_12eb1111;
L_12eb10b2:;
  /* 12eb10b2 jmp 0x12eb1183 */
  goto L_12eb1183;
L_12eb10b7:;
  /* 12eb10b7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb10ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb10bd mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 12eb10c0 mov dword ptr [0x12ebf938], 0 */
  w32((uint32_t)(0x12ebf938), (0x0u));
  /* 12eb10ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb10cd movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb10d0 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb10d3 jne 0x12eb10e8 */
  if (!C.zf) goto L_12eb10e8;
  /* 12eb10d5 mov dword ptr [0x12ebf938], 1 */
  w32((uint32_t)(0x12ebf938), (0x1u));
  /* 12eb10df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb10e2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb10e5 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_12eb10e8:;
  /* 12eb10e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb10eb push ecx */
  push32((uint32_t)(ECX));
  /* 12eb10ec lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12eb10ef push edx */
  push32((uint32_t)(EDX));
  /* 12eb10f0 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 12eb10f3 push eax */
  push32((uint32_t)(EAX));
  /* 12eb10f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb10f7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb10f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb10fb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb10fd push eax */
  push32((uint32_t)(EAX));
  /* 12eb10fe call 0x12eb11c0 */
  push32(0x12eb1103u); f_12eb11c0();
  /* 12eb1103 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1106 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1109 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb110c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12eb110f jmp 0x12eb117e */
  goto L_12eb117e;
L_12eb1111:;
  /* 12eb1111 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1116 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1118 mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb111e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb1120 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb1124 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb112a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb112c je 0x12eb1159 */
  if (C.zf) goto L_12eb1159;
  /* 12eb112e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1132 jbe 0x12eb1159 */
  if ((C.cf||C.zf)) goto L_12eb1159;
  /* 12eb1134 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1137 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb113a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb113c mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12eb113e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1141 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1144 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb1147 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb114a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb114d mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12eb1150 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1153 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1156 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eb1159:;
  /* 12eb1159 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb115c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb115f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb1161 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12eb1163 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1166 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1169 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb116c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb116f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1172 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 12eb1175 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1178 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb117b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eb117e:;
  /* 12eb117e jmp 0x12eb1092 */
  goto L_12eb1092;
L_12eb1183:;
  /* 12eb1183 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1187 je 0x12eb1195 */
  if (C.zf) goto L_12eb1195;
  /* 12eb1189 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb118b call 0x12ea7790 */
  push32(0x12eb1190u); f_12ea7790();
  /* 12eb1190 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1193 jmp 0x12eb11a0 */
  goto L_12eb11a0;
L_12eb1195:;
  /* 12eb1195 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb119a call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eb11a0u);
L_12eb11a0:;
  /* 12eb11a0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb11a4 jbe 0x12eb11b4 */
  if ((C.cf||C.zf)) goto L_12eb11b4;
  /* 12eb11a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb11a9 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12eb11ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb11af sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb11b2 jmp 0x12eb11b6 */
  goto L_12eb11b6;
L_12eb11b4:;
  /* 12eb11b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb11b6:;
  /* 12eb11b6 mov esp, ebp */
  ESP = (EBP);
  /* 12eb11b8 pop ebp */
  EBP = (pop32());
  /* 12eb11b9 ret  */
  ESPCHK(0x12eb1030u, _esp0);
  ESP += 4; return;
}

/* FUN_100111c0 @ 0x12eb11c0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_12eb11c0(void) {
  FTRACE(0x12eb11c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb11c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb11c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb11c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb11c6 push esi */
  push32((uint32_t)(ESI));
  /* 12eb11c7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 12eb11cb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb11ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb11d1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb11d4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb11d7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb11db ja 0x12eb1728 */
  if ((!C.cf&&!C.zf)) goto L_12eb1728;
  /* 12eb11e1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb11e4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb11e6 mov dl, byte ptr [eax + 0x12eb1789] */
  DL = (r8((uint32_t)(EAX + 0x12eb1789)));
  /* 12eb11ec jmp dword ptr [edx*4 + 0x12eb172d] */
  switch (EDX) {
    case 0: goto L_12eb1706;
    case 1: goto L_12eb1215;
    case 2: goto L_12eb125b;
    case 3: goto L_12eb13a8;
    case 4: goto L_12eb13d0;
    case 5: goto L_12eb146f;
    case 6: goto L_12eb14db;
    case 7: goto L_12eb1504;
    case 8: goto L_12eb1545;
    case 9: goto L_12eb1627;
    case 10: goto L_12eb168e;
    case 11: goto L_12eb16db;
    case 12: goto L_12eb11f3;
    case 13: goto L_12eb1238;
    case 14: goto L_12eb127e;
    case 15: goto L_12eb137e;
    case 16: goto L_12eb1415;
    case 17: goto L_12eb1442;
    case 18: goto L_12eb1497;
    case 19: goto L_12eb151b;
    case 20: goto L_12eb15c9;
    case 21: goto L_12eb1658;
    case 22: goto L_12eb1728;
    default: x86_unimpl("switch@0x12eb11ec out of table"); return;
  }
L_12eb11f3:;
  /* 12eb11f3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb11f6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb11f7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb11fa push edx */
  push32((uint32_t)(EDX));
  /* 12eb11fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb11fe mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12eb1201 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1204 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 12eb1207 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1208 call 0x12eb17e0 */
  push32(0x12eb120du); f_12eb17e0();
  /* 12eb120d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1210 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1215:;
  /* 12eb1215 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1218 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1219 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb121c push edx */
  push32((uint32_t)(EDX));
  /* 12eb121d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1220 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 12eb1223 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1226 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 12eb122a push eax */
  push32((uint32_t)(EAX));
  /* 12eb122b call 0x12eb17e0 */
  push32(0x12eb1230u); f_12eb17e0();
  /* 12eb1230 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1233 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1238:;
  /* 12eb1238 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb123b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb123c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb123f push edx */
  push32((uint32_t)(EDX));
  /* 12eb1240 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1243 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12eb1246 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1249 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 12eb124d push eax */
  push32((uint32_t)(EAX));
  /* 12eb124e call 0x12eb17e0 */
  push32(0x12eb1253u); f_12eb17e0();
  /* 12eb1253 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1256 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb125b:;
  /* 12eb125b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb125e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb125f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1262 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1263 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1266 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 12eb1269 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb126c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 12eb1270 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1271 call 0x12eb17e0 */
  push32(0x12eb1276u); f_12eb17e0();
  /* 12eb1276 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1279 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb127e:;
  /* 12eb127e cmp dword ptr [0x12ebf938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1285 je 0x12eb1306 */
  if (C.zf) goto L_12eb1306;
  /* 12eb1287 mov dword ptr [0x12ebf938], 0 */
  w32((uint32_t)(0x12ebf938), (0x0u));
  /* 12eb1291 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1294 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1295 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1298 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1299 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb129c push eax */
  push32((uint32_t)(EAX));
  /* 12eb129d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb12a0 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb12a1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb12a4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 12eb12aa push eax */
  push32((uint32_t)(EAX));
  /* 12eb12ab call 0x12eb1990 */
  push32(0x12eb12b0u); f_12eb1990();
  /* 12eb12b0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb12b3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb12b6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb12b9 jne 0x12eb12c0 */
  if (!C.zf) goto L_12eb12c0;
  /* 12eb12bb jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb12c0:;
  /* 12eb12c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb12c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb12c5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12eb12c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb12cb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb12cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb12d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb12d3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb12d5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb12d8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb12da sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb12dd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb12e0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb12e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb12e5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb12e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb12e9 push edx */
  push32((uint32_t)(EDX));
  /* 12eb12ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb12ed push eax */
  push32((uint32_t)(EAX));
  /* 12eb12ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb12f1 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb12f2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb12f5 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12eb12fb push eax */
  push32((uint32_t)(EAX));
  /* 12eb12fc call 0x12eb1990 */
  push32(0x12eb1301u); f_12eb1990();
  /* 12eb1301 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1304 jmp 0x12eb1379 */
  goto L_12eb1379;
L_12eb1306:;
  /* 12eb1306 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1309 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb130a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb130d push edx */
  push32((uint32_t)(EDX));
  /* 12eb130e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1311 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1312 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1315 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1316 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1319 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 12eb131f push eax */
  push32((uint32_t)(EAX));
  /* 12eb1320 call 0x12eb1990 */
  push32(0x12eb1325u); f_12eb1990();
  /* 12eb1325 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1328 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb132b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb132e jne 0x12eb1335 */
  if (!C.zf) goto L_12eb1335;
  /* 12eb1330 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1335:;
  /* 12eb1335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1338 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb133a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 12eb133d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1340 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1342 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1345 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1348 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb134a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb134d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb134f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1352 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1355 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb1357 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb135a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb135b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb135e push edx */
  push32((uint32_t)(EDX));
  /* 12eb135f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1362 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1363 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1366 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1367 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb136a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 12eb1370 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1371 call 0x12eb1990 */
  push32(0x12eb1376u); f_12eb1990();
  /* 12eb1376 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb1379:;
  /* 12eb1379 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb137e:;
  /* 12eb137e mov ecx, dword ptr [0x12ebf938] */
  ECX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb1384 mov dword ptr [0x12ebf948], ecx */
  w32((uint32_t)(0x12ebf948), (ECX));
  /* 12eb138a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb138d push edx */
  push32((uint32_t)(EDX));
  /* 12eb138e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1391 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1392 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1394 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1397 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 12eb139a push edx */
  push32((uint32_t)(EDX));
  /* 12eb139b call 0x12eb1830 */
  push32(0x12eb13a0u); f_12eb1830();
  /* 12eb13a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb13a3 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb13a8:;
  /* 12eb13a8 mov eax, dword ptr [0x12ebf938] */
  EAX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb13ad mov dword ptr [0x12ebf948], eax */
  w32((uint32_t)(0x12ebf948), (EAX));
  /* 12eb13b2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb13b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb13b6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb13b9 push edx */
  push32((uint32_t)(EDX));
  /* 12eb13ba push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb13bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb13bf mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 12eb13c2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb13c3 call 0x12eb1830 */
  push32(0x12eb13c8u); f_12eb1830();
  /* 12eb13c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb13cb jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb13d0:;
  /* 12eb13d0 mov edx, dword ptr [0x12ebf938] */
  EDX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb13d6 mov dword ptr [0x12ebf948], edx */
  w32((uint32_t)(0x12ebf948), (EDX));
  /* 12eb13dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb13df mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 12eb13e2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb13e3 mov ecx, 0xc */
  ECX = (0xcu);
  /* 12eb13e8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb13ea mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb13ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb13f1 jne 0x12eb13fa */
  if (!C.zf) goto L_12eb13fa;
  /* 12eb13f3 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_12eb13fa:;
  /* 12eb13fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb13fd push edx */
  push32((uint32_t)(EDX));
  /* 12eb13fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1401 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1402 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1404 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1407 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1408 call 0x12eb1830 */
  push32(0x12eb140du); f_12eb1830();
  /* 12eb140d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1410 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1415:;
  /* 12eb1415 mov edx, dword ptr [0x12ebf938] */
  EDX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb141b mov dword ptr [0x12ebf948], edx */
  w32((uint32_t)(0x12ebf948), (EDX));
  /* 12eb1421 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1424 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1425 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1428 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1429 push 3 */
  push32((uint32_t)(0x3u));
  /* 12eb142b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb142e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eb1431 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1434 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1435 call 0x12eb1830 */
  push32(0x12eb143au); f_12eb1830();
  /* 12eb143a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb143d jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1442:;
  /* 12eb1442 mov ecx, dword ptr [0x12ebf938] */
  ECX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb1448 mov dword ptr [0x12ebf948], ecx */
  w32((uint32_t)(0x12ebf948), (ECX));
  /* 12eb144e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1451 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1452 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1455 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1456 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1458 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb145b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 12eb145e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1461 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1462 call 0x12eb1830 */
  push32(0x12eb1467u); f_12eb1830();
  /* 12eb1467 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb146a jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb146f:;
  /* 12eb146f mov eax, dword ptr [0x12ebf938] */
  EAX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb1474 mov dword ptr [0x12ebf948], eax */
  w32((uint32_t)(0x12ebf948), (EAX));
  /* 12eb1479 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb147c push ecx */
  push32((uint32_t)(ECX));
  /* 12eb147d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1480 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1481 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1483 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1486 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 12eb1489 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb148a call 0x12eb1830 */
  push32(0x12eb148fu); f_12eb1830();
  /* 12eb148f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1492 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1497:;
  /* 12eb1497 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb149a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb149e jg 0x12eb14bc */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb14bc;
  /* 12eb14a0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb14a3 push eax */
  push32((uint32_t)(EAX));
  /* 12eb14a4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb14a7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb14a8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb14ab mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 12eb14b1 push eax */
  push32((uint32_t)(EAX));
  /* 12eb14b2 call 0x12eb17e0 */
  push32(0x12eb14b7u); f_12eb17e0();
  /* 12eb14b7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb14ba jmp 0x12eb14d6 */
  goto L_12eb14d6;
L_12eb14bc:;
  /* 12eb14bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb14bf push ecx */
  push32((uint32_t)(ECX));
  /* 12eb14c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb14c3 push edx */
  push32((uint32_t)(EDX));
  /* 12eb14c4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb14c7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 12eb14cd push ecx */
  push32((uint32_t)(ECX));
  /* 12eb14ce call 0x12eb17e0 */
  push32(0x12eb14d3u); f_12eb17e0();
  /* 12eb14d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb14d6:;
  /* 12eb14d6 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb14db:;
  /* 12eb14db mov edx, dword ptr [0x12ebf938] */
  EDX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb14e1 mov dword ptr [0x12ebf948], edx */
  w32((uint32_t)(0x12ebf948), (EDX));
  /* 12eb14e7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb14ea push eax */
  push32((uint32_t)(EAX));
  /* 12eb14eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb14ee push ecx */
  push32((uint32_t)(ECX));
  /* 12eb14ef push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb14f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb14f4 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb14f6 push eax */
  push32((uint32_t)(EAX));
  /* 12eb14f7 call 0x12eb1830 */
  push32(0x12eb14fcu); f_12eb1830();
  /* 12eb14fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb14ff jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1504:;
  /* 12eb1504 mov ecx, dword ptr [0x12ebf938] */
  ECX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb150a mov dword ptr [0x12ebf948], ecx */
  w32((uint32_t)(0x12ebf948), (ECX));
  /* 12eb1510 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1513 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12eb1516 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb1519 jmp 0x12eb156d */
  goto L_12eb156d;
L_12eb151b:;
  /* 12eb151b mov ecx, dword ptr [0x12ebf938] */
  ECX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb1521 mov dword ptr [0x12ebf948], ecx */
  w32((uint32_t)(0x12ebf948), (ECX));
  /* 12eb1527 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb152a push edx */
  push32((uint32_t)(EDX));
  /* 12eb152b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb152e push eax */
  push32((uint32_t)(EAX));
  /* 12eb152f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb1531 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1534 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 12eb1537 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1538 call 0x12eb1830 */
  push32(0x12eb153du); f_12eb1830();
  /* 12eb153d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1540 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1545:;
  /* 12eb1545 mov eax, dword ptr [0x12ebf938] */
  EAX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb154a mov dword ptr [0x12ebf948], eax */
  w32((uint32_t)(0x12ebf948), (EAX));
  /* 12eb154f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1552 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1556 jne 0x12eb1561 */
  if (!C.zf) goto L_12eb1561;
  /* 12eb1558 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 12eb155f jmp 0x12eb156d */
  goto L_12eb156d;
L_12eb1561:;
  /* 12eb1561 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1564 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 12eb1567 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb156a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eb156d:;
  /* 12eb156d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1570 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12eb1573 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1576 jge 0x12eb1581 */
  if ((C.sf==C.of)) goto L_12eb1581;
  /* 12eb1578 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb157f jmp 0x12eb15ae */
  goto L_12eb15ae;
L_12eb1581:;
  /* 12eb1581 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1584 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eb1587 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb1588 mov ecx, 7 */
  ECX = (0x7u);
  /* 12eb158d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb158f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb1592 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1595 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eb1598 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb1599 mov ecx, 7 */
  ECX = (0x7u);
  /* 12eb159e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb15a0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb15a3 jl 0x12eb15ae */
  if ((C.sf!=C.of)) goto L_12eb15ae;
  /* 12eb15a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb15a8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb15ab mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_12eb15ae:;
  /* 12eb15ae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb15b1 push eax */
  push32((uint32_t)(EAX));
  /* 12eb15b2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb15b5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb15b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb15b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb15bb push edx */
  push32((uint32_t)(EDX));
  /* 12eb15bc call 0x12eb1830 */
  push32(0x12eb15c1u); f_12eb1830();
  /* 12eb15c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb15c4 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb15c9:;
  /* 12eb15c9 cmp dword ptr [0x12ebf938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb15d0 je 0x12eb1600 */
  if (C.zf) goto L_12eb1600;
  /* 12eb15d2 mov dword ptr [0x12ebf938], 0 */
  w32((uint32_t)(0x12ebf938), (0x0u));
  /* 12eb15dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb15df push eax */
  push32((uint32_t)(EAX));
  /* 12eb15e0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb15e3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb15e4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb15e7 push edx */
  push32((uint32_t)(EDX));
  /* 12eb15e8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb15eb push eax */
  push32((uint32_t)(EAX));
  /* 12eb15ec mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb15ef mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 12eb15f5 push edx */
  push32((uint32_t)(EDX));
  /* 12eb15f6 call 0x12eb1990 */
  push32(0x12eb15fbu); f_12eb1990();
  /* 12eb15fb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb15fe jmp 0x12eb1622 */
  goto L_12eb1622;
L_12eb1600:;
  /* 12eb1600 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1603 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1604 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1607 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1608 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb160b push edx */
  push32((uint32_t)(EDX));
  /* 12eb160c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb160f push eax */
  push32((uint32_t)(EAX));
  /* 12eb1610 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1613 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 12eb1619 push edx */
  push32((uint32_t)(EDX));
  /* 12eb161a call 0x12eb1990 */
  push32(0x12eb161fu); f_12eb1990();
  /* 12eb161f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb1622:;
  /* 12eb1622 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1627:;
  /* 12eb1627 mov dword ptr [0x12ebf938], 0 */
  w32((uint32_t)(0x12ebf938), (0x0u));
  /* 12eb1631 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1634 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1635 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1638 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1639 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb163c push edx */
  push32((uint32_t)(EDX));
  /* 12eb163d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1640 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1641 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1644 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 12eb164a push edx */
  push32((uint32_t)(EDX));
  /* 12eb164b call 0x12eb1990 */
  push32(0x12eb1650u); f_12eb1990();
  /* 12eb1650 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1653 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1658:;
  /* 12eb1658 mov eax, dword ptr [0x12ebf938] */
  EAX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb165d mov dword ptr [0x12ebf948], eax */
  w32((uint32_t)(0x12ebf948), (EAX));
  /* 12eb1662 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1665 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 12eb1668 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb1669 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12eb166e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb1670 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb1673 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1676 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1677 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb167a push eax */
  push32((uint32_t)(EAX));
  /* 12eb167b push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb167d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1680 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1681 call 0x12eb1830 */
  push32(0x12eb1686u); f_12eb1830();
  /* 12eb1686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1689 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb168e:;
  /* 12eb168e mov edx, dword ptr [0x12ebf938] */
  EDX = (r32((uint32_t)(0x12ebf938)));
  /* 12eb1694 mov dword ptr [0x12ebf948], edx */
  w32((uint32_t)(0x12ebf948), (EDX));
  /* 12eb169a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb169d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 12eb16a0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb16a1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 12eb16a6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb16a8 mov ecx, eax */
  ECX = (EAX);
  /* 12eb16aa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb16ad imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb16b0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb16b3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eb16b6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb16b7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 12eb16bc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb16be add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb16c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb16c3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb16c6 push eax */
  push32((uint32_t)(EAX));
  /* 12eb16c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb16ca push ecx */
  push32((uint32_t)(ECX));
  /* 12eb16cb push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb16cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb16d0 push edx */
  push32((uint32_t)(EDX));
  /* 12eb16d1 call 0x12eb1830 */
  push32(0x12eb16d6u); f_12eb1830();
  /* 12eb16d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb16d9 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb16db:;
  /* 12eb16db call 0x12eb27f0 */
  push32(0x12eb16e0u); f_12eb27f0();
  /* 12eb16e0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb16e3 push eax */
  push32((uint32_t)(EAX));
  /* 12eb16e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb16e7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb16e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb16eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb16ed cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb16f1 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 12eb16f4 mov ecx, dword ptr [eax*4 + 0x12ebee3c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebee3c)));
  /* 12eb16fb push ecx */
  push32((uint32_t)(ECX));
  /* 12eb16fc call 0x12eb17e0 */
  push32(0x12eb1701u); f_12eb17e0();
  /* 12eb1701 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1704 jmp 0x12eb1728 */
  goto L_12eb1728;
L_12eb1706:;
  /* 12eb1706 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1709 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb170b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 12eb170e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1711 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1713 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1716 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1719 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb171b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb171e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1720 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1723 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1726 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12eb1728:;
  /* 12eb1728 pop esi */
  ESI = (pop32());
  /* 12eb1729 mov esp, ebp */
  ESP = (EBP);
  /* 12eb172b pop ebp */
  EBP = (pop32());
  /* 12eb172c ret  */
  ESPCHK(0x12eb11c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x12eb17e0 (72 bytes, 30 insns) */
void f_12eb17e0(void) {
  FTRACE(0x12eb17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb17e1 mov ebp, esp */
  EBP = (ESP);
L_12eb17e3:;
  /* 12eb17e3 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb17e6 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb17e9 je 0x12eb1826 */
  if (C.zf) goto L_12eb1826;
  /* 12eb17eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb17ee movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb17f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb17f3 je 0x12eb1826 */
  if (C.zf) goto L_12eb1826;
  /* 12eb17f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb17f8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb17fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb17fd mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb17ff mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eb1801 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1804 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1806 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb180c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb180e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1811 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1814 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eb1817 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb181a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb181c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb181f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1822 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb1824 jmp 0x12eb17e3 */
  goto L_12eb17e3;
L_12eb1826:;
  /* 12eb1826 pop ebp */
  EBP = (pop32());
  /* 12eb1827 ret  */
  ESPCHK(0x12eb17e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011830 @ 0x12eb1830 (173 bytes, 64 insns) */
void f_12eb1830(void) {
  FTRACE(0x12eb1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb1830 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb1831 mov ebp, esp */
  EBP = (ESP);
  /* 12eb1833 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1834 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb183b cmp dword ptr [0x12ebf948], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf948))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1842 je 0x12eb185a */
  if (C.zf) goto L_12eb185a;
  /* 12eb1844 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1847 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1848 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb184b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb184c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb184f push edx */
  push32((uint32_t)(EDX));
  /* 12eb1850 call 0x12eb18e0 */
  push32(0x12eb1855u); f_12eb18e0();
  /* 12eb1855 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1858 jmp 0x12eb18d9 */
  goto L_12eb18d9;
L_12eb185a:;
  /* 12eb185a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb185d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1860 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1862 jae 0x12eb18d0 */
  if (!C.cf) goto L_12eb18d0;
  /* 12eb1864 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1867 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb186a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 12eb186d jmp 0x12eb1878 */
  goto L_12eb1878;
L_12eb186f:;
  /* 12eb186f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1872 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1875 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_12eb1878:;
  /* 12eb1878 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb187b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb187e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb1880 je 0x12eb18b4 */
  if (C.zf) goto L_12eb18b4;
  /* 12eb1882 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1885 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb1886 mov ecx, 0xa */
  ECX = (0xau);
  /* 12eb188b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb188d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1890 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1893 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1895 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1898 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 12eb189b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb189e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb189f mov ecx, 0xa */
  ECX = (0xau);
  /* 12eb18a4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb18a6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb18a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb18ac add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb18af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb18b2 jmp 0x12eb186f */
  goto L_12eb186f;
L_12eb18b4:;
  /* 12eb18b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb18b7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb18b9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb18bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb18bf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eb18c1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb18c4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb18c6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb18c9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb18cc mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eb18ce jmp 0x12eb18d9 */
  goto L_12eb18d9;
L_12eb18d0:;
  /* 12eb18d0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb18d3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12eb18d9:;
  /* 12eb18d9 mov esp, ebp */
  ESP = (EBP);
  /* 12eb18db pop ebp */
  EBP = (pop32());
  /* 12eb18dc ret  */
  ESPCHK(0x12eb1830u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x12eb18e0 (172 bytes, 65 insns) */
void f_12eb18e0(void) {
  FTRACE(0x12eb18e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb18e0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb18e1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb18e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb18e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb18e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb18eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb18ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb18f1 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb18f4 jbe 0x12eb193b */
  if ((C.cf||C.zf)) goto L_12eb193b;
L_12eb18f6:;
  /* 12eb18f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb18f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb18fa mov ecx, 0xa */
  ECX = (0xau);
  /* 12eb18ff idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb1901 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1904 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1907 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12eb1909 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb190c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb190f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb1912 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1915 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1917 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb191a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb191d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb191f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1922 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb1923 mov ecx, 0xa */
  ECX = (0xau);
  /* 12eb1928 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb192a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb192d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1931 jle 0x12eb193b */
  if ((C.zf||C.sf!=C.of)) goto L_12eb193b;
  /* 12eb1933 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1936 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1939 ja 0x12eb18f6 */
  if ((!C.cf&&!C.zf)) goto L_12eb18f6;
L_12eb193b:;
  /* 12eb193b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb193e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1940 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb1943 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1949 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12eb194b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb194e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1951 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eb1954:;
  /* 12eb1954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1957 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1959 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 12eb195c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb195f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb1962 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1964 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eb1966 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1969 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb196c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb196f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb1972 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 12eb1975 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 12eb1977 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb197a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb197d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb1980 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb1983 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1986 jb 0x12eb1954 */
  if (C.cf) goto L_12eb1954;
  /* 12eb1988 mov esp, ebp */
  ESP = (EBP);
  /* 12eb198a pop ebp */
  EBP = (pop32());
  /* 12eb198b ret  */
  ESPCHK(0x12eb18e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011990 @ 0x12eb1990 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_12eb1990(void) {
  FTRACE(0x12eb1990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb1990 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb1991 mov ebp, esp */
  EBP = (ESP);
  /* 12eb1993 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12eb1996:;
  /* 12eb1996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1999 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb199c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb199e je 0x12eb1e0c */
  if (C.zf) goto L_12eb1e0c;
  /* 12eb19a4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb19a7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb19aa je 0x12eb1e0c */
  if (C.zf) goto L_12eb1e0c;
  /* 12eb19b0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 12eb19b4 mov dword ptr [0x12ebf948], 0 */
  w32((uint32_t)(0x12ebf948), (0x0u));
  /* 12eb19be mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eb19c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb19c8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb19cb jmp 0x12eb19d6 */
  goto L_12eb19d6;
L_12eb19cd:;
  /* 12eb19cd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb19d0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb19d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12eb19d6:;
  /* 12eb19d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb19d9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb19dc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb19df movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb19e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb19e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb19e8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb19eb cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb19ed jne 0x12eb19f1 */
  if (!C.zf) goto L_12eb19f1;
  /* 12eb19ef jmp 0x12eb19cd */
  goto L_12eb19cd;
L_12eb19f1:;
  /* 12eb19f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb19f4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb19f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb19fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb19fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb1a00 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb1a03 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb1a06 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1a09 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 12eb1a0c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1a10 ja 0x12eb1d60 */
  if ((!C.cf&&!C.zf)) goto L_12eb1d60;
  /* 12eb1a16 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb1a19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1a1b mov al, byte ptr [ecx + 0x12eb1e3c] */
  AL = (r8((uint32_t)(ECX + 0x12eb1e3c)));
  /* 12eb1a21 jmp dword ptr [eax*4 + 0x12eb1e10] */
  switch (EAX) {
    case 0: goto L_12eb1c7f;
    case 1: goto L_12eb1b63;
    case 2: goto L_12eb1aee;
    case 3: goto L_12eb1a28;
    case 4: goto L_12eb1a66;
    case 5: goto L_12eb1ac7;
    case 6: goto L_12eb1b15;
    case 7: goto L_12eb1b3c;
    case 8: goto L_12eb1baa;
    case 9: goto L_12eb1aa4;
    case 10: goto L_12eb1d60;
    default: x86_unimpl("switch@0x12eb1a21 out of table"); return;
  }
L_12eb1a28:;
  /* 12eb1a28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1a2b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 12eb1a2e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb1a31 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1a34 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12eb1a37 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1a3b ja 0x12eb1a61 */
  if ((!C.cf&&!C.zf)) goto L_12eb1a61;
  /* 12eb1a3d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb1a40 jmp dword ptr [ecx*4 + 0x12eb1e8f] */
  switch (ECX) {
    case 0: goto L_12eb1a47;
    case 1: goto L_12eb1a51;
    case 2: goto L_12eb1a57;
    case 3: goto L_12eb1a5d;
    case 4: goto L_12eb1a85;
    case 5: goto L_12eb1a8f;
    case 6: goto L_12eb1a95;
    case 7: goto L_12eb1a9b;
    default: x86_unimpl("switch@0x12eb1a40 out of table"); return;
  }
L_12eb1a47:;
  /* 12eb1a47 mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1a51:;
  /* 12eb1a51 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 12eb1a55 jmp 0x12eb1a61 */
  goto L_12eb1a61;
L_12eb1a57:;
  /* 12eb1a57 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 12eb1a5b jmp 0x12eb1a61 */
  goto L_12eb1a61;
L_12eb1a5d:;
  /* 12eb1a5d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_12eb1a61:;
  /* 12eb1a61 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1a66:;
  /* 12eb1a66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1a69 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 12eb1a6c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb1a6f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1a72 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eb1a75 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1a79 ja 0x12eb1a9f */
  if ((!C.cf&&!C.zf)) goto L_12eb1a9f;
  /* 12eb1a7b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb1a7e jmp dword ptr [ecx*4 + 0x12eb1e9f] */
  switch (ECX) {
    case 0: goto L_12eb1a85;
    case 1: goto L_12eb1a8f;
    case 2: goto L_12eb1a95;
    case 3: goto L_12eb1a9b;
    default: x86_unimpl("switch@0x12eb1a7e out of table"); return;
  }
L_12eb1a85:;
  /* 12eb1a85 mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1a8f:;
  /* 12eb1a8f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 12eb1a93 jmp 0x12eb1a9f */
  goto L_12eb1a9f;
L_12eb1a95:;
  /* 12eb1a95 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 12eb1a99 jmp 0x12eb1a9f */
  goto L_12eb1a9f;
L_12eb1a9b:;
  /* 12eb1a9b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_12eb1a9f:;
  /* 12eb1a9f jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1aa4:;
  /* 12eb1aa4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1aa7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 12eb1aaa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1aae je 0x12eb1ab8 */
  if (C.zf) goto L_12eb1ab8;
  /* 12eb1ab0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1ab4 je 0x12eb1abe */
  if (C.zf) goto L_12eb1abe;
  /* 12eb1ab6 jmp 0x12eb1ac2 */
  goto L_12eb1ac2;
L_12eb1ab8:;
  /* 12eb1ab8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 12eb1abc jmp 0x12eb1ac2 */
  goto L_12eb1ac2;
L_12eb1abe:;
  /* 12eb1abe mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_12eb1ac2:;
  /* 12eb1ac2 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1ac7:;
  /* 12eb1ac7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1aca mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eb1acd cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1ad1 je 0x12eb1adb */
  if (C.zf) goto L_12eb1adb;
  /* 12eb1ad3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1ad7 je 0x12eb1ae5 */
  if (C.zf) goto L_12eb1ae5;
  /* 12eb1ad9 jmp 0x12eb1ae9 */
  goto L_12eb1ae9;
L_12eb1adb:;
  /* 12eb1adb mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1ae5:;
  /* 12eb1ae5 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_12eb1ae9:;
  /* 12eb1ae9 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1aee:;
  /* 12eb1aee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1af1 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12eb1af4 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1af8 je 0x12eb1b02 */
  if (C.zf) goto L_12eb1b02;
  /* 12eb1afa cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1afe je 0x12eb1b0c */
  if (C.zf) goto L_12eb1b0c;
  /* 12eb1b00 jmp 0x12eb1b10 */
  goto L_12eb1b10;
L_12eb1b02:;
  /* 12eb1b02 mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1b0c:;
  /* 12eb1b0c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_12eb1b10:;
  /* 12eb1b10 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1b15:;
  /* 12eb1b15 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1b18 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 12eb1b1b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1b1f je 0x12eb1b29 */
  if (C.zf) goto L_12eb1b29;
  /* 12eb1b21 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1b25 je 0x12eb1b33 */
  if (C.zf) goto L_12eb1b33;
  /* 12eb1b27 jmp 0x12eb1b37 */
  goto L_12eb1b37;
L_12eb1b29:;
  /* 12eb1b29 mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1b33:;
  /* 12eb1b33 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_12eb1b37:;
  /* 12eb1b37 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1b3c:;
  /* 12eb1b3c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1b3f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 12eb1b42 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1b46 je 0x12eb1b50 */
  if (C.zf) goto L_12eb1b50;
  /* 12eb1b48 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1b4c je 0x12eb1b5a */
  if (C.zf) goto L_12eb1b5a;
  /* 12eb1b4e jmp 0x12eb1b5e */
  goto L_12eb1b5e;
L_12eb1b50:;
  /* 12eb1b50 mov dword ptr [0x12ebf948], 1 */
  w32((uint32_t)(0x12ebf948), (0x1u));
L_12eb1b5a:;
  /* 12eb1b5a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_12eb1b5e:;
  /* 12eb1b5e jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1b63:;
  /* 12eb1b63 push 0x12ebb9e4 */
  push32((uint32_t)(0x12ebb9e4u));
  /* 12eb1b68 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1b6b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1b6c call 0x12eb23c0 */
  push32(0x12eb1b71u); f_12eb23c0();
  /* 12eb1b71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1b74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb1b76 jne 0x12eb1b83 */
  if (!C.zf) goto L_12eb1b83;
  /* 12eb1b78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1b7b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1b7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb1b81 jmp 0x12eb1ba1 */
  goto L_12eb1ba1;
L_12eb1b83:;
  /* 12eb1b83 push 0x12ebb9e0 */
  push32((uint32_t)(0x12ebb9e0u));
  /* 12eb1b88 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1b8b push eax */
  push32((uint32_t)(EAX));
  /* 12eb1b8c call 0x12eb23c0 */
  push32(0x12eb1b91u); f_12eb23c0();
  /* 12eb1b91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1b94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb1b96 jne 0x12eb1ba1 */
  if (!C.zf) goto L_12eb1ba1;
  /* 12eb1b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1b9b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1b9e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eb1ba1:;
  /* 12eb1ba1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 12eb1ba5 jmp 0x12eb1d60 */
  goto L_12eb1d60;
L_12eb1baa:;
  /* 12eb1baa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1bad cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1bb1 jg 0x12eb1bc1 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb1bc1;
  /* 12eb1bb3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1bb6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 12eb1bbc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eb1bbf jmp 0x12eb1bcd */
  goto L_12eb1bcd;
L_12eb1bc1:;
  /* 12eb1bc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1bc4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 12eb1bca mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_12eb1bcd:;
  /* 12eb1bcd cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1bd1 jle 0x12eb1c74 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb1c74;
  /* 12eb1bd7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1bda cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1bdd jbe 0x12eb1c74 */
  if ((C.cf||C.zf)) goto L_12eb1c74;
  /* 12eb1be3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb1be6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1be8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1bea mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb1bf0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb1bf2 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb1bf6 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb1bfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb1bfe je 0x12eb1c37 */
  if (C.zf) goto L_12eb1c37;
  /* 12eb1c00 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1c03 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1c06 jbe 0x12eb1c37 */
  if ((C.cf||C.zf)) goto L_12eb1c37;
  /* 12eb1c08 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c0b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1c0d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb1c10 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb1c12 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12eb1c14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c17 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1c19 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c1f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb1c21 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb1c24 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1c27 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 12eb1c2a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1c2d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1c2f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1c32 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1c35 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_12eb1c37:;
  /* 12eb1c37 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c3a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1c3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb1c3f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1c41 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eb1c43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1c48 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1c4b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1c4e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb1c50 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb1c53 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1c56 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eb1c59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1c5c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1c5e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1c61 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1c64 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb1c66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1c69 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1c6c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eb1c6f jmp 0x12eb1bcd */
  goto L_12eb1bcd;
L_12eb1c74:;
  /* 12eb1c74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1c77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb1c7a jmp 0x12eb1996 */
  goto L_12eb1996;
L_12eb1c7f:;
  /* 12eb1c7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1c82 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb1c85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb1c87 je 0x12eb1d52 */
  if (C.zf) goto L_12eb1d52;
  /* 12eb1c8d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1c90 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1c93 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12eb1c96:;
  /* 12eb1c96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1c99 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb1c9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb1c9e je 0x12eb1d50 */
  if (C.zf) goto L_12eb1d50;
  /* 12eb1ca4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1ca7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1caa je 0x12eb1d50 */
  if (C.zf) goto L_12eb1d50;
  /* 12eb1cb0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1cb3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb1cb6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1cb9 jne 0x12eb1cc9 */
  if (!C.zf) goto L_12eb1cc9;
  /* 12eb1cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1cbe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1cc1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12eb1cc4 jmp 0x12eb1d50 */
  goto L_12eb1d50;
L_12eb1cc9:;
  /* 12eb1cc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1ccc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb1cce mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb1cd0 mov edx, dword ptr [0x12ebdcb8] */
  EDX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb1cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1cd8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 12eb1cdc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1ce1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb1ce3 je 0x12eb1d1c */
  if (C.zf) goto L_12eb1d1c;
  /* 12eb1ce5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1ce8 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1ceb jbe 0x12eb1d1c */
  if ((C.cf||C.zf)) goto L_12eb1d1c;
  /* 12eb1ced mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1cf0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1cf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1cf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb1cf7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12eb1cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1cfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1cfe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d01 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1d04 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eb1d06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1d09 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d0c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb1d0f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1d12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1d14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1d17 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1d1a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12eb1d1c:;
  /* 12eb1d1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1d1f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1d21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1d24 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb1d26 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 12eb1d28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1d2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1d2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1d33 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb1d35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1d38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12eb1d3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1d41 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1d43 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1d46 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1d49 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eb1d4b jmp 0x12eb1c96 */
  goto L_12eb1c96;
L_12eb1d50:;
  /* 12eb1d50 jmp 0x12eb1d5b */
  goto L_12eb1d5b;
L_12eb1d52:;
  /* 12eb1d52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1d55 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d58 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12eb1d5b:;
  /* 12eb1d5b jmp 0x12eb1996 */
  goto L_12eb1996;
L_12eb1d60:;
  /* 12eb1d60 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 12eb1d64 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb1d66 je 0x12eb1d8c */
  if (C.zf) goto L_12eb1d8c;
  /* 12eb1d68 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb1d6b push edx */
  push32((uint32_t)(EDX));
  /* 12eb1d6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1d6f push eax */
  push32((uint32_t)(EAX));
  /* 12eb1d70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1d73 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1d74 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1d77 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1d78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 12eb1d7b push eax */
  push32((uint32_t)(EAX));
  /* 12eb1d7c call 0x12eb11c0 */
  push32(0x12eb1d81u); f_12eb11c0();
  /* 12eb1d81 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1d84 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb1d87 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eb1d8a jmp 0x12eb1e07 */
  goto L_12eb1e07;
L_12eb1d8c:;
  /* 12eb1d8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1d8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1d91 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1d93 mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb1d99 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb1d9b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb1d9f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb1da5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb1da7 je 0x12eb1dd8 */
  if (C.zf) goto L_12eb1dd8;
  /* 12eb1da9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1dac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1dae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1db1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb1db3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eb1db5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1db8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1dba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1dbd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1dc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 12eb1dc2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1dc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1dc8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eb1dcb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1dce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1dd0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1dd3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1dd6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_12eb1dd8:;
  /* 12eb1dd8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1ddb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb1ddd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1de0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb1de2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 12eb1de4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1de7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1de9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1dec mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1def mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 12eb1df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb1df4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1df7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb1dfa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1dfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb1dff sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1e02 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1e05 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_12eb1e07:;
  /* 12eb1e07 jmp 0x12eb1996 */
  goto L_12eb1996;
L_12eb1e0c:;
  /* 12eb1e0c mov esp, ebp */
  ESP = (EBP);
  /* 12eb1e0e pop ebp */
  EBP = (pop32());
  /* 12eb1e0f ret  */
  ESPCHK(0x12eb1990u, _esp0);
  ESP += 4; return;
}

/* FUN_10011eb0 @ 0x12eb1eb0 (650 bytes, 178 insns) */
void f_12eb1eb0(void) {
  FTRACE(0x12eb1eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb1eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb1eb1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb1eb3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb1eb9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1ebd jne 0x12eb2019 */
  if (!C.zf) goto L_12eb2019;
  /* 12eb1ec3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb1ec6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 12eb1ecc lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 12eb1ed2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb1ed5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb1edc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 12eb1ee6 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1ee8 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12eb1eee push edx */
  push32((uint32_t)(EDX));
  /* 12eb1eef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1ef2 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1ef3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1ef6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1ef7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1efa push edx */
  push32((uint32_t)(EDX));
  /* 12eb1efb call 0x12eb32d0 */
  push32(0x12eb1f00u); f_12eb32d0();
  /* 12eb1f00 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1f03 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb1f06 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1f0a jne 0x12eb1f9f */
  if (!C.zf) goto L_12eb1f9f;
  /* 12eb1f10 call dword ptr [0x12ec2364] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2364))), 0x12eb1f16u);
  /* 12eb1f16 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1f19 je 0x12eb1f20 */
  if (C.zf) goto L_12eb1f20;
  /* 12eb1f1b jmp 0x12eb1ffd */
  goto L_12eb1ffd;
L_12eb1f20:;
  /* 12eb1f20 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1f22 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1f24 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1f26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1f29 push eax */
  push32((uint32_t)(EAX));
  /* 12eb1f2a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1f2d push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1f2e call 0x12eb32d0 */
  push32(0x12eb1f33u); f_12eb32d0();
  /* 12eb1f33 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1f36 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 12eb1f3c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1f43 jne 0x12eb1f4a */
  if (!C.zf) goto L_12eb1f4a;
  /* 12eb1f45 jmp 0x12eb1ffd */
  goto L_12eb1ffd;
L_12eb1f4a:;
  /* 12eb1f4a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 12eb1f4c push 0x12ebb9ec */
  push32((uint32_t)(0x12ebb9ecu));
  /* 12eb1f51 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1f53 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 12eb1f59 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1f5a call 0x12ea3cf0 */
  push32(0x12eb1f5fu); f_12ea3cf0();
  /* 12eb1f5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1f62 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb1f65 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1f69 jne 0x12eb1f70 */
  if (!C.zf) goto L_12eb1f70;
  /* 12eb1f6b jmp 0x12eb1ffd */
  goto L_12eb1ffd;
L_12eb1f70:;
  /* 12eb1f70 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eb1f77 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb1f79 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 12eb1f7f push eax */
  push32((uint32_t)(EAX));
  /* 12eb1f80 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1f83 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1f84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb1f87 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1f88 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb1f8b push eax */
  push32((uint32_t)(EAX));
  /* 12eb1f8c call 0x12eb32d0 */
  push32(0x12eb1f91u); f_12eb32d0();
  /* 12eb1f91 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1f94 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb1f97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1f9b jne 0x12eb1f9f */
  if (!C.zf) goto L_12eb1f9f;
  /* 12eb1f9d jmp 0x12eb1ffd */
  goto L_12eb1ffd;
L_12eb1f9f:;
  /* 12eb1f9f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 12eb1fa1 push 0x12ebb9ec */
  push32((uint32_t)(0x12ebb9ecu));
  /* 12eb1fa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1fa8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb1fab push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1fac call 0x12ea3cf0 */
  push32(0x12eb1fb1u); f_12ea3cf0();
  /* 12eb1fb1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1fb4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 12eb1fba mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 12eb1fbc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12eb1fc2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1fc5 jne 0x12eb1fc9 */
  if (!C.zf) goto L_12eb1fc9;
  /* 12eb1fc7 jmp 0x12eb1ffd */
  goto L_12eb1ffd;
L_12eb1fc9:;
  /* 12eb1fc9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb1fcc push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1fcd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1fd0 push edx */
  push32((uint32_t)(EDX));
  /* 12eb1fd1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 12eb1fd7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb1fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb1fda call 0x12ea7510 */
  push32(0x12eb1fdfu); f_12ea7510();
  /* 12eb1fdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb1fe2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb1fe6 je 0x12eb1ff6 */
  if (C.zf) goto L_12eb1ff6;
  /* 12eb1fe8 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb1fea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb1fed push edx */
  push32((uint32_t)(EDX));
  /* 12eb1fee call 0x12ea4780 */
  push32(0x12eb1ff3u); f_12ea4780();
  /* 12eb1ff3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb1ff6:;
  /* 12eb1ff6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb1ff8 jmp 0x12eb2136 */
  goto L_12eb2136;
L_12eb1ffd:;
  /* 12eb1ffd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2001 je 0x12eb2011 */
  if (C.zf) goto L_12eb2011;
  /* 12eb2003 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb2005 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2008 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2009 call 0x12ea4780 */
  push32(0x12eb200eu); f_12ea4780();
  /* 12eb200e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb2011:;
  /* 12eb2011 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2014 jmp 0x12eb2136 */
  goto L_12eb2136;
L_12eb2019:;
  /* 12eb2019 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb201d jne 0x12eb2133 */
  if (!C.zf) goto L_12eb2133;
  /* 12eb2023 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 12eb202d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2030 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 12eb2036 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2038 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 12eb203e push edx */
  push32((uint32_t)(EDX));
  /* 12eb203f push 0x12ebf860 */
  push32((uint32_t)(0x12ebf860u));
  /* 12eb2044 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2047 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2048 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb204b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb204c call 0x12eb3130 */
  push32(0x12eb2051u); f_12eb3130();
  /* 12eb2051 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb2056 jne 0x12eb2060 */
  if (!C.zf) goto L_12eb2060;
  /* 12eb2058 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb205b jmp 0x12eb2136 */
  goto L_12eb2136;
L_12eb2060:;
  /* 12eb2060 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eb2066 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 12eb2069 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 12eb2073 jmp 0x12eb2084 */
  goto L_12eb2084;
L_12eb2075:;
  /* 12eb2075 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eb207b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb207e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_12eb2084:;
  /* 12eb2084 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb208b jge 0x12eb212f */
  if ((C.sf==C.of)) goto L_12eb212f;
  /* 12eb2091 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2098 jle 0x12eb20cb */
  if ((C.zf||C.sf!=C.of)) goto L_12eb20cb;
  /* 12eb209a push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb209c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eb20a2 mov dl, byte ptr [ecx*2 + 0x12ebf860] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ebf860)));
  /* 12eb20a9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12eb20af mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12eb20b5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb20ba push eax */
  push32((uint32_t)(EAX));
  /* 12eb20bb call 0x12ea9d00 */
  push32(0x12eb20c0u); f_12ea9d00();
  /* 12eb20c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb20c3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 12eb20c9 jmp 0x12eb20fe */
  goto L_12eb20fe;
L_12eb20cb:;
  /* 12eb20cb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 12eb20d1 mov dl, byte ptr [ecx*2 + 0x12ebf860] */
  DL = (r8((uint32_t)(ECX*2 + 0x12ebf860)));
  /* 12eb20d8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 12eb20de mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 12eb20e4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb20e9 mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb20ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb20f1 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb20f5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb20f8 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_12eb20fe:;
  /* 12eb20fe cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2105 je 0x12eb2128 */
  if (C.zf) goto L_12eb2128;
  /* 12eb2107 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eb210d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb2110 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2113 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 12eb211a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 12eb211e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 12eb2124 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 12eb2126 jmp 0x12eb212a */
  goto L_12eb212a;
L_12eb2128:;
  /* 12eb2128 jmp 0x12eb212f */
  goto L_12eb212f;
L_12eb212a:;
  /* 12eb212a jmp 0x12eb2075 */
  goto L_12eb2075;
L_12eb212f:;
  /* 12eb212f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2131 jmp 0x12eb2136 */
  goto L_12eb2136;
L_12eb2133:;
  /* 12eb2133 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_12eb2136:;
  /* 12eb2136 mov esp, ebp */
  ESP = (EBP);
  /* 12eb2138 pop ebp */
  EBP = (pop32());
  /* 12eb2139 ret  */
  ESPCHK(0x12eb1eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x12eb2140 (10 bytes, 5 insns) */
void f_12eb2140(void) {
  FTRACE(0x12eb2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2140 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2141 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2143 mov eax, dword ptr [0x12ebeda8] */
  EAX = (r32((uint32_t)(0x12ebeda8)));
  /* 12eb2148 pop ebp */
  EBP = (pop32());
  /* 12eb2149 ret  */
  ESPCHK(0x12eb2140u, _esp0);
  ESP += 4; return;
}

/* FUN_10012150 @ 0x12eb2150 (575 bytes, 196 insns) */
void f_12eb2150(void) {
  FTRACE(0x12eb2150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2150 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2151 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2153 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb2155 push 0x12ebb9f8 */
  push32((uint32_t)(0x12ebb9f8u));
  /* 12eb215a push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eb215f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eb2165 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2166 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eb216d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2170 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb2171 push esi */
  push32((uint32_t)(ESI));
  /* 12eb2172 push edi */
  push32((uint32_t)(EDI));
  /* 12eb2173 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb2176 cmp dword ptr [0x12ebf86c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf86c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb217d jne 0x12eb21ce */
  if (!C.zf) goto L_12eb21ce;
  /* 12eb217f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 12eb2182 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2183 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2185 push 0x12ebb12c */
  push32((uint32_t)(0x12ebb12cu));
  /* 12eb218a push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb218c call dword ptr [0x12ec22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e0))), 0x12eb2192u);
  /* 12eb2192 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb2194 je 0x12eb21a2 */
  if (C.zf) goto L_12eb21a2;
  /* 12eb2196 mov dword ptr [0x12ebf86c], 1 */
  w32((uint32_t)(0x12ebf86c), (0x1u));
  /* 12eb21a0 jmp 0x12eb21ce */
  goto L_12eb21ce;
L_12eb21a2:;
  /* 12eb21a2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 12eb21a5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb21a6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb21a8 push 0x12ebb128 */
  push32((uint32_t)(0x12ebb128u));
  /* 12eb21ad push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb21af push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb21b1 call dword ptr [0x12ec22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e4))), 0x12eb21b7u);
  /* 12eb21b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb21b9 je 0x12eb21c7 */
  if (C.zf) goto L_12eb21c7;
  /* 12eb21bb mov dword ptr [0x12ebf86c], 2 */
  w32((uint32_t)(0x12ebf86c), (0x2u));
  /* 12eb21c5 jmp 0x12eb21ce */
  goto L_12eb21ce;
L_12eb21c7:;
  /* 12eb21c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb21c9 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb21ce:;
  /* 12eb21ce cmp dword ptr [0x12ebf86c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf86c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb21d5 jne 0x12eb21f2 */
  if (!C.zf) goto L_12eb21f2;
  /* 12eb21d7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb21da push edx */
  push32((uint32_t)(EDX));
  /* 12eb21db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb21de push eax */
  push32((uint32_t)(EAX));
  /* 12eb21df mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb21e2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb21e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb21e6 push edx */
  push32((uint32_t)(EDX));
  /* 12eb21e7 call dword ptr [0x12ec22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e0))), 0x12eb21edu);
  /* 12eb21ed jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb21f2:;
  /* 12eb21f2 cmp dword ptr [0x12ebf86c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf86c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb21f9 jne 0x12eb23a7 */
  if (!C.zf) goto L_12eb23a7;
  /* 12eb21ff cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2203 jne 0x12eb220d */
  if (!C.zf) goto L_12eb220d;
  /* 12eb2205 mov eax, dword ptr [0x12ebf7e0] */
  EAX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb220a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_12eb220d:;
  /* 12eb220d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb220f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2211 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2213 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2215 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2218 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2219 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb221c push edx */
  push32((uint32_t)(EDX));
  /* 12eb221d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb2222 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb2225 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2226 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb222cu);
  /* 12eb222c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 12eb222f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2233 jne 0x12eb223c */
  if (!C.zf) goto L_12eb223c;
  /* 12eb2235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2237 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb223c:;
  /* 12eb223c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb2243 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb2246 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2249 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb224b call 0x12ea6e90 */
  push32(0x12eb2250u); f_12ea6e90();
  /* 12eb2250 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 12eb2253 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb2256 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 12eb2259 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 12eb225c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb225f push edx */
  push32((uint32_t)(EDX));
  /* 12eb2260 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2262 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eb2265 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2266 call 0x12ea7a60 */
  push32(0x12eb226bu); f_12ea7a60();
  /* 12eb226b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb226e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb2275 jmp 0x12eb228e */
  goto L_12eb228e;
  /* 12eb2277 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb227c ret  */
  ESPCHK(0x12eb2150u, _esp0);
  ESP += 4; return;
  /* 12eb227d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb2280 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 12eb2287 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb228e:;
  /* 12eb228e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2292 jne 0x12eb229b */
  if (!C.zf) goto L_12eb229b;
  /* 12eb2294 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2296 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb229b:;
  /* 12eb229b push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb229d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb229f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb22a2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb22a3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eb22a6 push edx */
  push32((uint32_t)(EDX));
  /* 12eb22a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb22aa push eax */
  push32((uint32_t)(EAX));
  /* 12eb22ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb22ae push ecx */
  push32((uint32_t)(ECX));
  /* 12eb22af push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb22b4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb22b7 push edx */
  push32((uint32_t)(EDX));
  /* 12eb22b8 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb22beu);
  /* 12eb22be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb22c0 jne 0x12eb22c9 */
  if (!C.zf) goto L_12eb22c9;
  /* 12eb22c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb22c4 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb22c9:;
  /* 12eb22c9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eb22d0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb22d3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 12eb22d7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb22da and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb22dc call 0x12ea6e90 */
  push32(0x12eb22e1u); f_12ea6e90();
  /* 12eb22e1 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 12eb22e4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb22e7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 12eb22ea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eb22ed mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb22f4 jmp 0x12eb230d */
  goto L_12eb230d;
  /* 12eb22f6 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb22fb ret  */
  ESPCHK(0x12eb2150u, _esp0);
  ESP += 4; return;
  /* 12eb22fc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb22ff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12eb2306 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb230d:;
  /* 12eb230d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2311 jne 0x12eb231a */
  if (!C.zf) goto L_12eb231a;
  /* 12eb2313 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2315 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb231a:;
  /* 12eb231a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb231e jne 0x12eb2329 */
  if (!C.zf) goto L_12eb2329;
  /* 12eb2320 mov edx, dword ptr [0x12ebf7d0] */
  EDX = (r32((uint32_t)(0x12ebf7d0)));
  /* 12eb2326 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_12eb2329:;
  /* 12eb2329 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb232c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb232f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 12eb2335 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2338 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb233b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 12eb2342 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb2345 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2346 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb2349 push edx */
  push32((uint32_t)(EDX));
  /* 12eb234a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 12eb234d push eax */
  push32((uint32_t)(EAX));
  /* 12eb234e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2351 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2352 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb2355 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2356 call dword ptr [0x12ec22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e4))), 0x12eb235cu);
  /* 12eb235c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eb235f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2362 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb2365 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2367 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 12eb236c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2372 je 0x12eb2388 */
  if (C.zf) goto L_12eb2388;
  /* 12eb2374 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2377 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb237a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb237c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb2380 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2386 je 0x12eb238c */
  if (C.zf) goto L_12eb238c;
L_12eb2388:;
  /* 12eb2388 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb238a jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb238c:;
  /* 12eb238c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb238f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eb2391 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2392 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb2395 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2396 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2399 push edx */
  push32((uint32_t)(EDX));
  /* 12eb239a call 0x12eabbe0 */
  push32(0x12eb239fu); f_12eabbe0();
  /* 12eb239f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb23a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb23a5 jmp 0x12eb23a9 */
  goto L_12eb23a9;
L_12eb23a7:;
  /* 12eb23a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb23a9:;
  /* 12eb23a9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 12eb23ac mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb23af mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eb23b6 pop edi */
  EDI = (pop32());
  /* 12eb23b7 pop esi */
  ESI = (pop32());
  /* 12eb23b8 pop ebx */
  EBX = (pop32());
  /* 12eb23b9 mov esp, ebp */
  ESP = (EBP);
  /* 12eb23bb pop ebp */
  EBP = (pop32());
  /* 12eb23bc ret  */
  ESPCHK(0x12eb2150u, _esp0);
  ESP += 4; return;
}

/* FUN_100123c0 @ 0x12eb23c0 (208 bytes, 85 insns) */
void f_12eb23c0(void) {
  FTRACE(0x12eb23c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb23c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb23c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb23c3 push edi */
  push32((uint32_t)(EDI));
  /* 12eb23c4 push esi */
  push32((uint32_t)(ESI));
  /* 12eb23c5 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb23c6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb23c9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb23cc lea eax, [0x12ebf7c8] */
  EAX = ((uint32_t)(0x12ebf7c8));
  /* 12eb23d2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb23d6 jne 0x12eb2413 */
  if (!C.zf) goto L_12eb2413;
  /* 12eb23d8 mov al, 0xff */
  AL = (0xffu);
  /* 12eb23da mov edi, edi */
  EDI = (EDI);
L_12eb23dc:;
  /* 12eb23dc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eb23de je 0x12eb240e */
  if (C.zf) goto L_12eb240e;
  /* 12eb23e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eb23e2 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eb23e3 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 12eb23e5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eb23e6 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb23e8 je 0x12eb23dc */
  if (C.zf) goto L_12eb23dc;
  /* 12eb23ea sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12eb23ec cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb23ee sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12eb23f0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12eb23f3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb23f5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb23f7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 12eb23f9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12eb23fb cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb23fd sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12eb23ff and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 12eb2402 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb2404 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 12eb2406 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb2408 je 0x12eb23dc */
  if (C.zf) goto L_12eb23dc;
  /* 12eb240a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 12eb240c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_12eb240e:;
  /* 12eb240e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 12eb2411 jmp 0x12eb248b */
  goto L_12eb248b;
L_12eb2413:;
  /* 12eb2413 lock inc dword ptr [0x12ebf95c] */
  x86_unimpl("lock inc @ 0x12eb2413");
  /* 12eb241a cmp dword ptr [0x12ebf94c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf94c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2421 jg 0x12eb2427 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2427;
  /* 12eb2423 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2425 jmp 0x12eb243c */
  goto L_12eb243c;
L_12eb2427:;
  /* 12eb2427 lock dec dword ptr [0x12ebf95c] */
  x86_unimpl("lock dec @ 0x12eb2427");
  /* 12eb242e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb2430 call 0x12ea76f0 */
  push32(0x12eb2435u); f_12ea76f0();
  /* 12eb2435 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_12eb243c:;
  /* 12eb243c mov eax, 0xff */
  EAX = (0xffu);
  /* 12eb2441 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12eb2443 nop  */
  /* nop */
L_12eb2444:;
  /* 12eb2444 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eb2446 je 0x12eb246f */
  if (C.zf) goto L_12eb246f;
  /* 12eb2448 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eb244a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eb244b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12eb244d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eb244e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb2450 je 0x12eb2444 */
  if (C.zf) goto L_12eb2444;
  /* 12eb2452 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2453 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb2454 call 0x12eb3530 */
  push32(0x12eb2459u); f_12eb3530();
  /* 12eb2459 mov ebx, eax */
  EBX = (EAX);
  /* 12eb245b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb245e call 0x12eb3530 */
  push32(0x12eb2463u); f_12eb3530();
  /* 12eb2463 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2466 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb2468 je 0x12eb2444 */
  if (C.zf) goto L_12eb2444;
  /* 12eb246a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb246c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12eb246f:;
  /* 12eb246f mov ebx, eax */
  EBX = (EAX);
  /* 12eb2471 pop eax */
  EAX = (pop32());
  /* 12eb2472 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2474 jne 0x12eb247f */
  if (!C.zf) goto L_12eb247f;
  /* 12eb2476 lock dec dword ptr [0x12ebf95c] */
  x86_unimpl("lock dec @ 0x12eb2476");
  /* 12eb247d jmp 0x12eb2489 */
  goto L_12eb2489;
L_12eb247f:;
  /* 12eb247f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb2481 call 0x12ea7790 */
  push32(0x12eb2486u); f_12ea7790();
  /* 12eb2486 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb2489:;
  /* 12eb2489 mov eax, ebx */
  EAX = (EBX);
L_12eb248b:;
  /* 12eb248b pop ebx */
  EBX = (pop32());
  /* 12eb248c pop esi */
  ESI = (pop32());
  /* 12eb248d pop edi */
  EDI = (pop32());
  /* 12eb248e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eb248f ret  */
  ESPCHK(0x12eb23c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x12eb2490 (257 bytes, 103 insns) */
void f_12eb2490(void) {
  FTRACE(0x12eb2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2490 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2491 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2493 push edi */
  push32((uint32_t)(EDI));
  /* 12eb2494 push esi */
  push32((uint32_t)(ESI));
  /* 12eb2495 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb2496 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2499 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb249b je 0x12eb258a */
  if (C.zf) goto L_12eb258a;
  /* 12eb24a1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb24a4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb24a7 lea eax, [0x12ebf7c8] */
  EAX = ((uint32_t)(0x12ebf7c8));
  /* 12eb24ad cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb24b1 jne 0x12eb2501 */
  if (!C.zf) goto L_12eb2501;
  /* 12eb24b3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 12eb24b5 mov bl, 0x5a */
  BL = (0x5au);
  /* 12eb24b7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 12eb24b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_12eb24bc:;
  /* 12eb24bc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 12eb24be or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 12eb24c0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 12eb24c2 je 0x12eb24e5 */
  if (C.zf) goto L_12eb24e5;
  /* 12eb24c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 12eb24c6 je 0x12eb24e5 */
  if (C.zf) goto L_12eb24e5;
  /* 12eb24c8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eb24c9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eb24ca cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24cc jb 0x12eb24d4 */
  if (C.cf) goto L_12eb24d4;
  /* 12eb24ce cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24d0 ja 0x12eb24d4 */
  if ((!C.cf&&!C.zf)) goto L_12eb24d4;
  /* 12eb24d2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_12eb24d4:;
  /* 12eb24d4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24d6 jb 0x12eb24de */
  if (C.cf) goto L_12eb24de;
  /* 12eb24d8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24da ja 0x12eb24de */
  if ((!C.cf&&!C.zf)) goto L_12eb24de;
  /* 12eb24dc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_12eb24de:;
  /* 12eb24de cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24e0 jne 0x12eb24ef */
  if (!C.zf) goto L_12eb24ef;
  /* 12eb24e2 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12eb24e3 jne 0x12eb24bc */
  if (!C.zf) goto L_12eb24bc;
L_12eb24e5:;
  /* 12eb24e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb24e7 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb24e9 je 0x12eb258a */
  if (C.zf) goto L_12eb258a;
L_12eb24ef:;
  /* 12eb24ef mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12eb24f4 jb 0x12eb258a */
  if (C.cf) goto L_12eb258a;
  /* 12eb24fa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb24fc jmp 0x12eb258a */
  goto L_12eb258a;
L_12eb2501:;
  /* 12eb2501 lock inc dword ptr [0x12ebf95c] */
  x86_unimpl("lock inc @ 0x12eb2501");
  /* 12eb2508 cmp dword ptr [0x12ebf94c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf94c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb250f jg 0x12eb2515 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2515;
  /* 12eb2511 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2513 jmp 0x12eb252e */
  goto L_12eb252e;
L_12eb2515:;
  /* 12eb2515 lock dec dword ptr [0x12ebf95c] */
  x86_unimpl("lock dec @ 0x12eb2515");
  /* 12eb251c mov ebx, ecx */
  EBX = (ECX);
  /* 12eb251e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb2520 call 0x12ea76f0 */
  push32(0x12eb2525u); f_12ea76f0();
  /* 12eb2525 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 12eb252c mov ecx, ebx */
  ECX = (EBX);
L_12eb252e:;
  /* 12eb252e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2530 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12eb2532 mov edi, edi */
  EDI = (EDI);
L_12eb2534:;
  /* 12eb2534 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 12eb2536 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2538 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 12eb253a je 0x12eb255f */
  if (C.zf) goto L_12eb255f;
  /* 12eb253c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 12eb253e je 0x12eb255f */
  if (C.zf) goto L_12eb255f;
  /* 12eb2540 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 12eb2541 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 12eb2542 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2543 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2544 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb2545 call 0x12eb3530 */
  push32(0x12eb254au); f_12eb3530();
  /* 12eb254a mov ebx, eax */
  EBX = (EAX);
  /* 12eb254c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb254f call 0x12eb3530 */
  push32(0x12eb2554u); f_12eb3530();
  /* 12eb2554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2557 pop ecx */
  ECX = (pop32());
  /* 12eb2558 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb255a jne 0x12eb2565 */
  if (!C.zf) goto L_12eb2565;
  /* 12eb255c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 12eb255d jne 0x12eb2534 */
  if (!C.zf) goto L_12eb2534;
L_12eb255f:;
  /* 12eb255f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2561 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2563 je 0x12eb256e */
  if (C.zf) goto L_12eb256e;
L_12eb2565:;
  /* 12eb2565 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 12eb256a jb 0x12eb256e */
  if (C.cf) goto L_12eb256e;
  /* 12eb256c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_12eb256e:;
  /* 12eb256e pop eax */
  EAX = (pop32());
  /* 12eb256f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2571 jne 0x12eb257c */
  if (!C.zf) goto L_12eb257c;
  /* 12eb2573 lock dec dword ptr [0x12ebf95c] */
  x86_unimpl("lock dec @ 0x12eb2573");
  /* 12eb257a jmp 0x12eb258a */
  goto L_12eb258a;
L_12eb257c:;
  /* 12eb257c mov ebx, ecx */
  EBX = (ECX);
  /* 12eb257e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb2580 call 0x12ea7790 */
  push32(0x12eb2585u); f_12ea7790();
  /* 12eb2585 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2588 mov ecx, ebx */
  ECX = (EBX);
L_12eb258a:;
  /* 12eb258a mov eax, ecx */
  EAX = (ECX);
  /* 12eb258c pop ebx */
  EBX = (pop32());
  /* 12eb258d pop esi */
  ESI = (pop32());
  /* 12eb258e pop edi */
  EDI = (pop32());
  /* 12eb258f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 12eb2590 ret  */
  ESPCHK(0x12eb2490u, _esp0);
  ESP += 4; return;
}

/* FUN_100125a0 @ 0x12eb25a0 (255 bytes, 88 insns) */
void f_12eb25a0(void) {
  FTRACE(0x12eb25a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb25a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb25a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb25a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_12eb25a6:;
  /* 12eb25a6 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb25ad jle 0x12eb25c6 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb25c6;
  /* 12eb25af push 8 */
  push32((uint32_t)(0x8u));
  /* 12eb25b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb25b4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb25b6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb25b8 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb25b9 call 0x12ea9d00 */
  push32(0x12eb25beu); f_12ea9d00();
  /* 12eb25be add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb25c1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eb25c4 jmp 0x12eb25df */
  goto L_12eb25df;
L_12eb25c6:;
  /* 12eb25c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb25c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb25cb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb25cd mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb25d3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb25d5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb25d9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb25dc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb25df:;
  /* 12eb25df cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb25e3 je 0x12eb25f0 */
  if (C.zf) goto L_12eb25f0;
  /* 12eb25e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb25e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb25eb mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb25ee jmp 0x12eb25a6 */
  goto L_12eb25a6;
L_12eb25f0:;
  /* 12eb25f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb25f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb25f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb25f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb25fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb25fd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2600 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb2603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2606 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb2609 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb260d je 0x12eb2615 */
  if (C.zf) goto L_12eb2615;
  /* 12eb260f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2613 jne 0x12eb2628 */
  if (!C.zf) goto L_12eb2628;
L_12eb2615:;
  /* 12eb2615 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2618 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb261a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb261c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb261f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2622 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2625 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12eb2628:;
  /* 12eb2628 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12eb262f:;
  /* 12eb262f cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2636 jle 0x12eb264b */
  if ((C.zf||C.sf!=C.of)) goto L_12eb264b;
  /* 12eb2638 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb263a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb263d push edx */
  push32((uint32_t)(EDX));
  /* 12eb263e call 0x12ea9d00 */
  push32(0x12eb2643u); f_12ea9d00();
  /* 12eb2643 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2646 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb2649 jmp 0x12eb2660 */
  goto L_12eb2660;
L_12eb264b:;
  /* 12eb264b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb264e mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb2654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2656 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb265a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb265d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12eb2660:;
  /* 12eb2660 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2664 je 0x12eb268b */
  if (C.zf) goto L_12eb268b;
  /* 12eb2666 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb2669 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb266c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb266f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 12eb2673 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb2676 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2679 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb267b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb267d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb2680 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2683 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2686 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12eb2689 jmp 0x12eb262f */
  goto L_12eb262f;
L_12eb268b:;
  /* 12eb268b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb268f jne 0x12eb2698 */
  if (!C.zf) goto L_12eb2698;
  /* 12eb2691 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb2694 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb2696 jmp 0x12eb269b */
  goto L_12eb269b;
L_12eb2698:;
  /* 12eb2698 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_12eb269b:;
  /* 12eb269b mov esp, ebp */
  ESP = (EBP);
  /* 12eb269d pop ebp */
  EBP = (pop32());
  /* 12eb269e ret  */
  ESPCHK(0x12eb25a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126a0 @ 0x12eb26a0 (17 bytes, 8 insns) */
void f_12eb26a0(void) {
  FTRACE(0x12eb26a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb26a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb26a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb26a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb26a6 push eax */
  push32((uint32_t)(EAX));
  /* 12eb26a7 call 0x12eb25a0 */
  push32(0x12eb26acu); f_12eb25a0();
  /* 12eb26ac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb26af pop ebp */
  EBP = (pop32());
  /* 12eb26b0 ret  */
  ESPCHK(0x12eb26a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126c0 @ 0x12eb26c0 (297 bytes, 106 insns) */
void f_12eb26c0(void) {
  FTRACE(0x12eb26c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb26c0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb26c1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb26c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb26c6 push esi */
  push32((uint32_t)(ESI));
L_12eb26c7:;
  /* 12eb26c7 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb26ce jle 0x12eb26e7 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb26e7;
  /* 12eb26d0 push 8 */
  push32((uint32_t)(0x8u));
  /* 12eb26d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb26d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb26d7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb26d9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb26da call 0x12ea9d00 */
  push32(0x12eb26dfu); f_12ea9d00();
  /* 12eb26df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb26e2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb26e5 jmp 0x12eb2700 */
  goto L_12eb2700;
L_12eb26e7:;
  /* 12eb26e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb26ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb26ec mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb26ee mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb26f4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb26f6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb26fa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb26fd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_12eb2700:;
  /* 12eb2700 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2704 je 0x12eb2711 */
  if (C.zf) goto L_12eb2711;
  /* 12eb2706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2709 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb270c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb270f jmp 0x12eb26c7 */
  goto L_12eb26c7;
L_12eb2711:;
  /* 12eb2711 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2714 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2716 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb2718 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb271b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb271e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2721 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb2724 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2727 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eb272a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb272e je 0x12eb2736 */
  if (C.zf) goto L_12eb2736;
  /* 12eb2730 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2734 jne 0x12eb2749 */
  if (!C.zf) goto L_12eb2749;
L_12eb2736:;
  /* 12eb2736 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2739 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb273b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb273d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb2740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2743 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2746 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_12eb2749:;
  /* 12eb2749 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 12eb2750 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_12eb2757:;
  /* 12eb2757 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb275e jle 0x12eb2773 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb2773;
  /* 12eb2760 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb2762 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2765 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2766 call 0x12ea9d00 */
  push32(0x12eb276bu); f_12ea9d00();
  /* 12eb276b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb276e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12eb2771 jmp 0x12eb2788 */
  goto L_12eb2788;
L_12eb2773:;
  /* 12eb2773 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2776 mov ecx, dword ptr [0x12ebdcb8] */
  ECX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb277c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb277e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 12eb2782 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2785 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_12eb2788:;
  /* 12eb2788 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb278c je 0x12eb27c9 */
  if (C.zf) goto L_12eb27c9;
  /* 12eb278e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2790 push 0xa */
  push32((uint32_t)(0xau));
  /* 12eb2792 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb2795 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2796 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2799 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb279a call 0x12eb3660 */
  push32(0x12eb279fu); f_12eb3660();
  /* 12eb279f mov ecx, eax */
  ECX = (EAX);
  /* 12eb27a1 mov esi, edx */
  ESI = (EDX);
  /* 12eb27a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb27a6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb27a9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb27aa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb27ac adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb27ae mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb27b1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 12eb27b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb27b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb27b9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb27bb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb27be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb27c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb27c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 12eb27c7 jmp 0x12eb2757 */
  goto L_12eb2757;
L_12eb27c9:;
  /* 12eb27c9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb27cd jne 0x12eb27de */
  if (!C.zf) goto L_12eb27de;
  /* 12eb27cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb27d2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb27d4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb27d7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb27da neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb27dc jmp 0x12eb27e4 */
  goto L_12eb27e4;
L_12eb27de:;
  /* 12eb27de mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb27e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_12eb27e4:;
  /* 12eb27e4 pop esi */
  ESI = (pop32());
  /* 12eb27e5 mov esp, ebp */
  ESP = (EBP);
  /* 12eb27e7 pop ebp */
  EBP = (pop32());
  /* 12eb27e8 ret  */
  ESPCHK(0x12eb26c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100127f0 @ 0x12eb27f0 (61 bytes, 18 insns) */
void f_12eb27f0(void) {
  FTRACE(0x12eb27f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb27f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb27f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb27f3 cmp dword ptr [0x12ebf928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb27fa jne 0x12eb282b */
  if (!C.zf) goto L_12eb282b;
  /* 12eb27fc push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb27fe call 0x12ea76f0 */
  push32(0x12eb2803u); f_12ea76f0();
  /* 12eb2803 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2806 cmp dword ptr [0x12ebf928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb280d jne 0x12eb2821 */
  if (!C.zf) goto L_12eb2821;
  /* 12eb280f call 0x12eb2850 */
  push32(0x12eb2814u); f_12eb2850();
  /* 12eb2814 mov eax, dword ptr [0x12ebf928] */
  EAX = (r32((uint32_t)(0x12ebf928)));
  /* 12eb2819 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb281c mov dword ptr [0x12ebf928], eax */
  w32((uint32_t)(0x12ebf928), (EAX));
L_12eb2821:;
  /* 12eb2821 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb2823 call 0x12ea7790 */
  push32(0x12eb2828u); f_12ea7790();
  /* 12eb2828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb282b:;
  /* 12eb282b pop ebp */
  EBP = (pop32());
  /* 12eb282c ret  */
  ESPCHK(0x12eb27f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012830 @ 0x12eb2830 (30 bytes, 11 insns) */
void f_12eb2830(void) {
  FTRACE(0x12eb2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2830 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2831 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2833 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb2835 call 0x12ea76f0 */
  push32(0x12eb283au); f_12ea76f0();
  /* 12eb283a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb283d call 0x12eb2850 */
  push32(0x12eb2842u); f_12eb2850();
  /* 12eb2842 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb2844 call 0x12ea7790 */
  push32(0x12eb2849u); f_12ea7790();
  /* 12eb2849 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb284c pop ebp */
  EBP = (pop32());
  /* 12eb284d ret  */
  ESPCHK(0x12eb2830u, _esp0);
  ESP += 4; return;
}

/* FUN_10012850 @ 0x12eb2850 (939 bytes, 266 insns) */
void f_12eb2850(void) {
  FTRACE(0x12eb2850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2850 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2851 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2853 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2856 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb285d push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb285f call 0x12ea76f0 */
  push32(0x12eb2864u); f_12ea76f0();
  /* 12eb2864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2867 mov dword ptr [0x12ebf870], 0 */
  w32((uint32_t)(0x12ebf870), (0x0u));
  /* 12eb2871 mov dword ptr [0x12ebee58], 0xffffffff */
  w32((uint32_t)(0x12ebee58), (0xffffffffu));
  /* 12eb287b mov eax, dword ptr [0x12ebee58] */
  EAX = (r32((uint32_t)(0x12ebee58)));
  /* 12eb2880 mov dword ptr [0x12ebee48], eax */
  w32((uint32_t)(0x12ebee48), (EAX));
  /* 12eb2885 push 0x12ebba58 */
  push32((uint32_t)(0x12ebba58u));
  /* 12eb288a call 0x12eb36d0 */
  push32(0x12eb288fu); f_12eb36d0();
  /* 12eb288f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2892 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb2895 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2899 jne 0x12eb29d3 */
  if (!C.zf) goto L_12eb29d3;
  /* 12eb289f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb28a1 call 0x12ea7790 */
  push32(0x12eb28a6u); f_12ea7790();
  /* 12eb28a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb28a9 push 0x12ebf878 */
  push32((uint32_t)(0x12ebf878u));
  /* 12eb28ae call dword ptr [0x12ec22a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a4))), 0x12eb28b4u);
  /* 12eb28b4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb28b7 je 0x12eb29ce */
  if (C.zf) goto L_12eb29ce;
  /* 12eb28bd mov dword ptr [0x12ebf870], 1 */
  w32((uint32_t)(0x12ebf870), (0x1u));
  /* 12eb28c7 mov ecx, dword ptr [0x12ebf878] */
  ECX = (r32((uint32_t)(0x12ebf878)));
  /* 12eb28cd imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb28d0 mov dword ptr [0x12ebedb0], ecx */
  w32((uint32_t)(0x12ebedb0), (ECX));
  /* 12eb28d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb28d8 mov dx, word ptr [0x12ebf8be] */
  DX = (r16((uint32_t)(0x12ebf8be)));
  /* 12eb28df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb28e1 je 0x12eb28f9 */
  if (C.zf) goto L_12eb28f9;
  /* 12eb28e3 mov eax, dword ptr [0x12ebf8cc] */
  EAX = (r32((uint32_t)(0x12ebf8cc)));
  /* 12eb28e8 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb28eb mov ecx, dword ptr [0x12ebedb0] */
  ECX = (r32((uint32_t)(0x12ebedb0)));
  /* 12eb28f1 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb28f3 mov dword ptr [0x12ebedb0], ecx */
  w32((uint32_t)(0x12ebedb0), (ECX));
L_12eb28f9:;
  /* 12eb28f9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb28fb mov dx, word ptr [0x12ebf912] */
  DX = (r16((uint32_t)(0x12ebf912)));
  /* 12eb2902 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb2904 je 0x12eb292e */
  if (C.zf) goto L_12eb292e;
  /* 12eb2906 cmp dword ptr [0x12ebf920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb290d je 0x12eb292e */
  if (C.zf) goto L_12eb292e;
  /* 12eb290f mov dword ptr [0x12ebedb4], 1 */
  w32((uint32_t)(0x12ebedb4), (0x1u));
  /* 12eb2919 mov eax, dword ptr [0x12ebf920] */
  EAX = (r32((uint32_t)(0x12ebf920)));
  /* 12eb291e sub eax, dword ptr [0x12ebf8cc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebf8cc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2924 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2927 mov dword ptr [0x12ebedb8], eax */
  w32((uint32_t)(0x12ebedb8), (EAX));
  /* 12eb292c jmp 0x12eb2942 */
  goto L_12eb2942;
L_12eb292e:;
  /* 12eb292e mov dword ptr [0x12ebedb4], 0 */
  w32((uint32_t)(0x12ebedb4), (0x0u));
  /* 12eb2938 mov dword ptr [0x12ebedb8], 0 */
  w32((uint32_t)(0x12ebedb8), (0x0u));
L_12eb2942:;
  /* 12eb2942 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12eb2945 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2946 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2948 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12eb294a mov edx, dword ptr [0x12ebee3c] */
  EDX = (r32((uint32_t)(0x12ebee3c)));
  /* 12eb2950 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2951 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb2953 push 0x12ebf87c */
  push32((uint32_t)(0x12ebf87cu));
  /* 12eb2958 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb295d mov eax, dword ptr [0x12ebf7e0] */
  EAX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb2962 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2963 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb2969u);
  /* 12eb2969 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb296b je 0x12eb297f */
  if (C.zf) goto L_12eb297f;
  /* 12eb296d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2971 jne 0x12eb297f */
  if (!C.zf) goto L_12eb297f;
  /* 12eb2973 mov ecx, dword ptr [0x12ebee3c] */
  ECX = (r32((uint32_t)(0x12ebee3c)));
  /* 12eb2979 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 12eb297d jmp 0x12eb2988 */
  goto L_12eb2988;
L_12eb297f:;
  /* 12eb297f mov edx, dword ptr [0x12ebee3c] */
  EDX = (r32((uint32_t)(0x12ebee3c)));
  /* 12eb2985 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12eb2988:;
  /* 12eb2988 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 12eb298b push eax */
  push32((uint32_t)(EAX));
  /* 12eb298c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb298e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 12eb2990 mov ecx, dword ptr [0x12ebee40] */
  ECX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb2996 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2997 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb2999 push 0x12ebf8d0 */
  push32((uint32_t)(0x12ebf8d0u));
  /* 12eb299e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb29a3 mov edx, dword ptr [0x12ebf7e0] */
  EDX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb29a9 push edx */
  push32((uint32_t)(EDX));
  /* 12eb29aa call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb29b0u);
  /* 12eb29b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb29b2 je 0x12eb29c5 */
  if (C.zf) goto L_12eb29c5;
  /* 12eb29b4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb29b8 jne 0x12eb29c5 */
  if (!C.zf) goto L_12eb29c5;
  /* 12eb29ba mov eax, dword ptr [0x12ebee40] */
  EAX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb29bf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 12eb29c3 jmp 0x12eb29ce */
  goto L_12eb29ce;
L_12eb29c5:;
  /* 12eb29c5 mov ecx, dword ptr [0x12ebee40] */
  ECX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb29cb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_12eb29ce:;
  /* 12eb29ce jmp 0x12eb2bf7 */
  goto L_12eb2bf7;
L_12eb29d3:;
  /* 12eb29d3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb29d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb29d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb29db je 0x12eb29fd */
  if (C.zf) goto L_12eb29fd;
  /* 12eb29dd cmp dword ptr [0x12ebf924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb29e4 je 0x12eb2a0c */
  if (C.zf) goto L_12eb2a0c;
  /* 12eb29e6 mov ecx, dword ptr [0x12ebf924] */
  ECX = (r32((uint32_t)(0x12ebf924)));
  /* 12eb29ec push ecx */
  push32((uint32_t)(ECX));
  /* 12eb29ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb29f0 push edx */
  push32((uint32_t)(EDX));
  /* 12eb29f1 call 0x12eaf980 */
  push32(0x12eb29f6u); f_12eaf980();
  /* 12eb29f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb29f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb29fb jne 0x12eb2a0c */
  if (!C.zf) goto L_12eb2a0c;
L_12eb29fd:;
  /* 12eb29fd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb29ff call 0x12ea7790 */
  push32(0x12eb2a04u); f_12ea7790();
  /* 12eb2a04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a07 jmp 0x12eb2bf7 */
  goto L_12eb2bf7;
L_12eb2a0c:;
  /* 12eb2a0c push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb2a0e mov eax, dword ptr [0x12ebf924] */
  EAX = (r32((uint32_t)(0x12ebf924)));
  /* 12eb2a13 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2a14 call 0x12ea4780 */
  push32(0x12eb2a19u); f_12ea4780();
  /* 12eb2a19 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a1c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 12eb2a21 push 0x12ebba50 */
  push32((uint32_t)(0x12ebba50u));
  /* 12eb2a26 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb2a28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2a2b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2a2c call 0x12ea6b20 */
  push32(0x12eb2a31u); f_12ea6b20();
  /* 12eb2a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a34 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a37 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2a38 call 0x12ea3cf0 */
  push32(0x12eb2a3du); f_12ea3cf0();
  /* 12eb2a3d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a40 mov dword ptr [0x12ebf924], eax */
  w32((uint32_t)(0x12ebf924), (EAX));
  /* 12eb2a45 cmp dword ptr [0x12ebf924], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf924))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2a4c jne 0x12eb2a5d */
  if (!C.zf) goto L_12eb2a5d;
  /* 12eb2a4e push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb2a50 call 0x12ea7790 */
  push32(0x12eb2a55u); f_12ea7790();
  /* 12eb2a55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a58 jmp 0x12eb2bf7 */
  goto L_12eb2bf7;
L_12eb2a5d:;
  /* 12eb2a5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2a60 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2a61 mov eax, dword ptr [0x12ebf924] */
  EAX = (r32((uint32_t)(0x12ebf924)));
  /* 12eb2a66 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2a67 call 0x12ea6ca0 */
  push32(0x12eb2a6cu); f_12ea6ca0();
  /* 12eb2a6c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a6f push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb2a71 call 0x12ea7790 */
  push32(0x12eb2a76u); f_12ea7790();
  /* 12eb2a76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a79 push 3 */
  push32((uint32_t)(0x3u));
  /* 12eb2a7b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2a7e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2a7f mov edx, dword ptr [0x12ebee3c] */
  EDX = (r32((uint32_t)(0x12ebee3c)));
  /* 12eb2a85 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2a86 call 0x12ea7510 */
  push32(0x12eb2a8bu); f_12ea7510();
  /* 12eb2a8b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a8e mov eax, dword ptr [0x12ebee3c] */
  EAX = (r32((uint32_t)(0x12ebee3c)));
  /* 12eb2a93 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 12eb2a97 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2a9a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2a9d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb2aa0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2aa3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb2aa6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2aa9 jne 0x12eb2abd */
  if (!C.zf) goto L_12eb2abd;
  /* 12eb2aab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2aae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2ab1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb2ab4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2ab7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2aba mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eb2abd:;
  /* 12eb2abd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2ac0 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2ac1 call 0x12eb25a0 */
  push32(0x12eb2ac6u); f_12eb25a0();
  /* 12eb2ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2ac9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2acf mov dword ptr [0x12ebedb0], eax */
  w32((uint32_t)(0x12ebedb0), (EAX));
L_12eb2ad4:;
  /* 12eb2ad4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2ad7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb2ada cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2add je 0x12eb2af5 */
  if (C.zf) goto L_12eb2af5;
  /* 12eb2adf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2ae2 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb2ae5 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2ae8 jl 0x12eb2b00 */
  if ((C.sf!=C.of)) goto L_12eb2b00;
  /* 12eb2aea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2aed movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb2af0 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2af3 jg 0x12eb2b00 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2b00;
L_12eb2af5:;
  /* 12eb2af5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2af8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2afb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb2afe jmp 0x12eb2ad4 */
  goto L_12eb2ad4;
L_12eb2b00:;
  /* 12eb2b00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b03 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb2b06 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b09 jne 0x12eb2ba5 */
  if (!C.zf) goto L_12eb2ba5;
  /* 12eb2b0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b15 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb2b18 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b1b push edx */
  push32((uint32_t)(EDX));
  /* 12eb2b1c call 0x12eb25a0 */
  push32(0x12eb2b21u); f_12eb25a0();
  /* 12eb2b21 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b24 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2b27 mov ecx, dword ptr [0x12ebedb0] */
  ECX = (r32((uint32_t)(0x12ebedb0)));
  /* 12eb2b2d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b2f mov dword ptr [0x12ebedb0], ecx */
  w32((uint32_t)(0x12ebedb0), (ECX));
L_12eb2b35:;
  /* 12eb2b35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b38 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb2b3b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b3e jl 0x12eb2b56 */
  if ((C.sf!=C.of)) goto L_12eb2b56;
  /* 12eb2b40 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b43 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb2b46 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b49 jg 0x12eb2b56 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2b56;
  /* 12eb2b4b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb2b54 jmp 0x12eb2b35 */
  goto L_12eb2b35;
L_12eb2b56:;
  /* 12eb2b56 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b59 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb2b5c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b5f jne 0x12eb2ba5 */
  if (!C.zf) goto L_12eb2ba5;
  /* 12eb2b61 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b64 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b67 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb2b6a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b6d push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2b6e call 0x12eb25a0 */
  push32(0x12eb2b73u); f_12eb25a0();
  /* 12eb2b73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b76 mov edx, dword ptr [0x12ebedb0] */
  EDX = (r32((uint32_t)(0x12ebedb0)));
  /* 12eb2b7c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2b7e mov dword ptr [0x12ebedb0], edx */
  w32((uint32_t)(0x12ebedb0), (EDX));
L_12eb2b84:;
  /* 12eb2b84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b87 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb2b8a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b8d jl 0x12eb2ba5 */
  if ((C.sf!=C.of)) goto L_12eb2ba5;
  /* 12eb2b8f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b92 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 12eb2b95 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2b98 jg 0x12eb2ba5 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2ba5;
  /* 12eb2b9a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2b9d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2ba0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb2ba3 jmp 0x12eb2b84 */
  goto L_12eb2b84;
L_12eb2ba5:;
  /* 12eb2ba5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2ba9 je 0x12eb2bb9 */
  if (C.zf) goto L_12eb2bb9;
  /* 12eb2bab mov edx, dword ptr [0x12ebedb0] */
  EDX = (r32((uint32_t)(0x12ebedb0)));
  /* 12eb2bb1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb2bb3 mov dword ptr [0x12ebedb0], edx */
  w32((uint32_t)(0x12ebedb0), (EDX));
L_12eb2bb9:;
  /* 12eb2bb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2bbc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 12eb2bbf mov dword ptr [0x12ebedb4], ecx */
  w32((uint32_t)(0x12ebedb4), (ECX));
  /* 12eb2bc5 cmp dword ptr [0x12ebedb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebedb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2bcc je 0x12eb2bee */
  if (C.zf) goto L_12eb2bee;
  /* 12eb2bce push 3 */
  push32((uint32_t)(0x3u));
  /* 12eb2bd0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2bd3 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2bd4 mov eax, dword ptr [0x12ebee40] */
  EAX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb2bd9 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2bda call 0x12ea7510 */
  push32(0x12eb2bdfu); f_12ea7510();
  /* 12eb2bdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2be2 mov ecx, dword ptr [0x12ebee40] */
  ECX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb2be8 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 12eb2bec jmp 0x12eb2bf7 */
  goto L_12eb2bf7;
L_12eb2bee:;
  /* 12eb2bee mov edx, dword ptr [0x12ebee40] */
  EDX = (r32((uint32_t)(0x12ebee40)));
  /* 12eb2bf4 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_12eb2bf7:;
  /* 12eb2bf7 mov esp, ebp */
  ESP = (EBP);
  /* 12eb2bf9 pop ebp */
  EBP = (pop32());
  /* 12eb2bfa ret  */
  ESPCHK(0x12eb2850u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c00 @ 0x12eb2c00 (46 bytes, 18 insns) */
void f_12eb2c00(void) {
  FTRACE(0x12eb2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2c01 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2c03 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2c04 push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb2c06 call 0x12ea76f0 */
  push32(0x12eb2c0bu); f_12ea76f0();
  /* 12eb2c0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2c0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2c11 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2c12 call 0x12eb2c30 */
  push32(0x12eb2c17u); f_12eb2c30();
  /* 12eb2c17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2c1a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb2c1d push 0xb */
  push32((uint32_t)(0xbu));
  /* 12eb2c1f call 0x12ea7790 */
  push32(0x12eb2c24u); f_12ea7790();
  /* 12eb2c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2c27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2c2a mov esp, ebp */
  ESP = (EBP);
  /* 12eb2c2c pop ebp */
  EBP = (pop32());
  /* 12eb2c2d ret  */
  ESPCHK(0x12eb2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c30 @ 0x12eb2c30 (762 bytes, 246 insns) */
void f_12eb2c30(void) {
  FTRACE(0x12eb2c30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2c30 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2c31 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2c33 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2c34 cmp dword ptr [0x12ebedb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebedb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2c3b jne 0x12eb2c44 */
  if (!C.zf) goto L_12eb2c44;
  /* 12eb2c3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2c3f jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2c44:;
  /* 12eb2c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2c47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12eb2c4a cmp ecx, dword ptr [0x12ebee48] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebee48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2c50 jne 0x12eb2c64 */
  if (!C.zf) goto L_12eb2c64;
  /* 12eb2c52 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2c55 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eb2c58 cmp eax, dword ptr [0x12ebee58] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebee58))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2c5e je 0x12eb2e2b */
  if (C.zf) goto L_12eb2e2b;
L_12eb2c64:;
  /* 12eb2c64 cmp dword ptr [0x12ebf870], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf870))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2c6b je 0x12eb2de5 */
  if (C.zf) goto L_12eb2de5;
  /* 12eb2c71 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2c73 mov cx, word ptr [0x12ebf910] */
  CX = (r16((uint32_t)(0x12ebf910)));
  /* 12eb2c7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb2c7c jne 0x12eb2cd9 */
  if (!C.zf) goto L_12eb2cd9;
  /* 12eb2c7e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2c80 mov dx, word ptr [0x12ebf91e] */
  DX = (r16((uint32_t)(0x12ebf91e)));
  /* 12eb2c87 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2c88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2c8a mov ax, word ptr [0x12ebf91c] */
  AX = (r16((uint32_t)(0x12ebf91c)));
  /* 12eb2c90 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2c91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2c93 mov cx, word ptr [0x12ebf91a] */
  CX = (r16((uint32_t)(0x12ebf91a)));
  /* 12eb2c9a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2c9b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2c9d mov dx, word ptr [0x12ebf918] */
  DX = (r16((uint32_t)(0x12ebf918)));
  /* 12eb2ca4 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2ca5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2ca7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2ca9 mov ax, word ptr [0x12ebf914] */
  AX = (r16((uint32_t)(0x12ebf914)));
  /* 12eb2caf push eax */
  push32((uint32_t)(EAX));
  /* 12eb2cb0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2cb2 mov cx, word ptr [0x12ebf916] */
  CX = (r16((uint32_t)(0x12ebf916)));
  /* 12eb2cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2cba xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2cbc mov dx, word ptr [0x12ebf912] */
  DX = (r16((uint32_t)(0x12ebf912)));
  /* 12eb2cc3 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2cc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2cc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12eb2cca push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2ccb push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2ccd push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2ccf call 0x12eb2f30 */
  push32(0x12eb2cd4u); f_12eb2f30();
  /* 12eb2cd4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2cd7 jmp 0x12eb2d2a */
  goto L_12eb2d2a;
L_12eb2cd9:;
  /* 12eb2cd9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2cdb mov dx, word ptr [0x12ebf91e] */
  DX = (r16((uint32_t)(0x12ebf91e)));
  /* 12eb2ce2 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2ce3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2ce5 mov ax, word ptr [0x12ebf91c] */
  AX = (r16((uint32_t)(0x12ebf91c)));
  /* 12eb2ceb push eax */
  push32((uint32_t)(EAX));
  /* 12eb2cec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2cee mov cx, word ptr [0x12ebf91a] */
  CX = (r16((uint32_t)(0x12ebf91a)));
  /* 12eb2cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2cf6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2cf8 mov dx, word ptr [0x12ebf918] */
  DX = (r16((uint32_t)(0x12ebf918)));
  /* 12eb2cff push edx */
  push32((uint32_t)(EDX));
  /* 12eb2d00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2d02 mov ax, word ptr [0x12ebf916] */
  AX = (r16((uint32_t)(0x12ebf916)));
  /* 12eb2d08 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2d09 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2d0b push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2d0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2d0f mov cx, word ptr [0x12ebf912] */
  CX = (r16((uint32_t)(0x12ebf912)));
  /* 12eb2d16 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2d17 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2d1a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eb2d1d push eax */
  push32((uint32_t)(EAX));
  /* 12eb2d1e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2d20 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2d22 call 0x12eb2f30 */
  push32(0x12eb2d27u); f_12eb2f30();
  /* 12eb2d27 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb2d2a:;
  /* 12eb2d2a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2d2c mov cx, word ptr [0x12ebf8bc] */
  CX = (r16((uint32_t)(0x12ebf8bc)));
  /* 12eb2d33 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb2d35 jne 0x12eb2d92 */
  if (!C.zf) goto L_12eb2d92;
  /* 12eb2d37 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2d39 mov dx, word ptr [0x12ebf8ca] */
  DX = (r16((uint32_t)(0x12ebf8ca)));
  /* 12eb2d40 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2d41 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2d43 mov ax, word ptr [0x12ebf8c8] */
  AX = (r16((uint32_t)(0x12ebf8c8)));
  /* 12eb2d49 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2d4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2d4c mov cx, word ptr [0x12ebf8c6] */
  CX = (r16((uint32_t)(0x12ebf8c6)));
  /* 12eb2d53 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2d54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2d56 mov dx, word ptr [0x12ebf8c4] */
  DX = (r16((uint32_t)(0x12ebf8c4)));
  /* 12eb2d5d push edx */
  push32((uint32_t)(EDX));
  /* 12eb2d5e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2d60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2d62 mov ax, word ptr [0x12ebf8c0] */
  AX = (r16((uint32_t)(0x12ebf8c0)));
  /* 12eb2d68 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2d69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2d6b mov cx, word ptr [0x12ebf8c2] */
  CX = (r16((uint32_t)(0x12ebf8c2)));
  /* 12eb2d72 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2d73 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2d75 mov dx, word ptr [0x12ebf8be] */
  DX = (r16((uint32_t)(0x12ebf8be)));
  /* 12eb2d7c push edx */
  push32((uint32_t)(EDX));
  /* 12eb2d7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2d80 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12eb2d83 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2d84 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2d86 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2d88 call 0x12eb2f30 */
  push32(0x12eb2d8du); f_12eb2f30();
  /* 12eb2d8d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2d90 jmp 0x12eb2de3 */
  goto L_12eb2de3;
L_12eb2d92:;
  /* 12eb2d92 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2d94 mov dx, word ptr [0x12ebf8ca] */
  DX = (r16((uint32_t)(0x12ebf8ca)));
  /* 12eb2d9b push edx */
  push32((uint32_t)(EDX));
  /* 12eb2d9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2d9e mov ax, word ptr [0x12ebf8c8] */
  AX = (r16((uint32_t)(0x12ebf8c8)));
  /* 12eb2da4 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2da5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2da7 mov cx, word ptr [0x12ebf8c6] */
  CX = (r16((uint32_t)(0x12ebf8c6)));
  /* 12eb2dae push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2daf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb2db1 mov dx, word ptr [0x12ebf8c4] */
  DX = (r16((uint32_t)(0x12ebf8c4)));
  /* 12eb2db8 push edx */
  push32((uint32_t)(EDX));
  /* 12eb2db9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2dbb mov ax, word ptr [0x12ebf8c2] */
  AX = (r16((uint32_t)(0x12ebf8c2)));
  /* 12eb2dc1 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2dc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2dc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2dc8 mov cx, word ptr [0x12ebf8be] */
  CX = (r16((uint32_t)(0x12ebf8be)));
  /* 12eb2dcf push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2dd0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2dd3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 12eb2dd6 push eax */
  push32((uint32_t)(EAX));
  /* 12eb2dd7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2dd9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2ddb call 0x12eb2f30 */
  push32(0x12eb2de0u); f_12eb2f30();
  /* 12eb2de0 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb2de3:;
  /* 12eb2de3 jmp 0x12eb2e2b */
  goto L_12eb2e2b;
L_12eb2de5:;
  /* 12eb2de5 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2de7 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2de9 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2deb push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb2ded push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2def push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2df1 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2df3 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb2df5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2df8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 12eb2dfb push edx */
  push32((uint32_t)(EDX));
  /* 12eb2dfc push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2dfe push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2e00 call 0x12eb2f30 */
  push32(0x12eb2e05u); f_12eb2f30();
  /* 12eb2e05 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2e08 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e0a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e0c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e0e push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb2e10 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e12 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e14 push 5 */
  push32((uint32_t)(0x5u));
  /* 12eb2e16 push 0xa */
  push32((uint32_t)(0xau));
  /* 12eb2e18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e1b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 12eb2e1e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb2e1f push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb2e21 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb2e23 call 0x12eb2f30 */
  push32(0x12eb2e28u); f_12eb2f30();
  /* 12eb2e28 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb2e2b:;
  /* 12eb2e2b mov edx, dword ptr [0x12ebee4c] */
  EDX = (r32((uint32_t)(0x12ebee4c)));
  /* 12eb2e31 cmp edx, dword ptr [0x12ebee5c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e37 jge 0x12eb2e84 */
  if ((C.sf==C.of)) goto L_12eb2e84;
  /* 12eb2e39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e3c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eb2e3f cmp ecx, dword ptr [0x12ebee4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e45 jl 0x12eb2e55 */
  if ((C.sf!=C.of)) goto L_12eb2e55;
  /* 12eb2e47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e4a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eb2e4d cmp eax, dword ptr [0x12ebee5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e53 jle 0x12eb2e5c */
  if ((C.zf||C.sf!=C.of)) goto L_12eb2e5c;
L_12eb2e55:;
  /* 12eb2e55 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2e57 jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2e5c:;
  /* 12eb2e5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e5f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12eb2e62 cmp edx, dword ptr [0x12ebee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e68 jle 0x12eb2e82 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb2e82;
  /* 12eb2e6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e6d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eb2e70 cmp ecx, dword ptr [0x12ebee5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e76 jge 0x12eb2e82 */
  if ((C.sf==C.of)) goto L_12eb2e82;
  /* 12eb2e78 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb2e7d jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2e82:;
  /* 12eb2e82 jmp 0x12eb2ec7 */
  goto L_12eb2ec7;
L_12eb2e84:;
  /* 12eb2e84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e87 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eb2e8a cmp eax, dword ptr [0x12ebee5c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e90 jl 0x12eb2ea0 */
  if ((C.sf!=C.of)) goto L_12eb2ea0;
  /* 12eb2e92 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2e95 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12eb2e98 cmp edx, dword ptr [0x12ebee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2e9e jle 0x12eb2ea7 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb2ea7;
L_12eb2ea0:;
  /* 12eb2ea0 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb2ea5 jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2ea7:;
  /* 12eb2ea7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2eaa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 12eb2ead cmp ecx, dword ptr [0x12ebee5c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebee5c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2eb3 jle 0x12eb2ec7 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb2ec7;
  /* 12eb2eb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2eb8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 12eb2ebb cmp eax, dword ptr [0x12ebee4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2ec1 jge 0x12eb2ec7 */
  if ((C.sf==C.of)) goto L_12eb2ec7;
  /* 12eb2ec3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2ec5 jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2ec7:;
  /* 12eb2ec7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2eca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 12eb2ecd imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2ed3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb2ed5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2ed7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2eda mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 12eb2edd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2ee3 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2ee5 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2eeb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb2eee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb2ef1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 12eb2ef4 cmp edx, dword ptr [0x12ebee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12ebee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2efa jne 0x12eb2f12 */
  if (!C.zf) goto L_12eb2f12;
  /* 12eb2efc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2eff cmp eax, dword ptr [0x12ebee50] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebee50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2f05 jl 0x12eb2f0e */
  if ((C.sf!=C.of)) goto L_12eb2f0e;
  /* 12eb2f07 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb2f0c jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2f0e:;
  /* 12eb2f0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2f10 jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2f12:;
  /* 12eb2f12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2f15 cmp ecx, dword ptr [0x12ebee60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebee60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2f1b jge 0x12eb2f24 */
  if ((C.sf==C.of)) goto L_12eb2f24;
  /* 12eb2f1d mov eax, 1 */
  EAX = (0x1u);
  /* 12eb2f22 jmp 0x12eb2f26 */
  goto L_12eb2f26;
L_12eb2f24:;
  /* 12eb2f24 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb2f26:;
  /* 12eb2f26 mov esp, ebp */
  ESP = (EBP);
  /* 12eb2f28 pop ebp */
  EBP = (pop32());
  /* 12eb2f29 ret  */
  ESPCHK(0x12eb2c30u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f30 @ 0x12eb2f30 (504 bytes, 145 insns) */
void f_12eb2f30(void) {
  FTRACE(0x12eb2f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb2f30 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb2f31 mov ebp, esp */
  EBP = (ESP);
  /* 12eb2f33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2f36 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2f3a jne 0x12eb300c */
  if (!C.zf) goto L_12eb300c;
  /* 12eb2f40 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2f43 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb2f46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb2f48 jne 0x12eb2f59 */
  if (!C.zf) goto L_12eb2f59;
  /* 12eb2f4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2f4d mov edx, dword ptr [ecx*4 + 0x12ebee6c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebee6c)));
  /* 12eb2f54 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eb2f57 jmp 0x12eb2f66 */
  goto L_12eb2f66;
L_12eb2f59:;
  /* 12eb2f59 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2f5c mov ecx, dword ptr [eax*4 + 0x12ebeea0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebeea0)));
  /* 12eb2f63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_12eb2f66:;
  /* 12eb2f66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb2f69 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2f6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb2f6f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2f72 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2f75 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2f7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb2f7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2f80 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2f83 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2f86 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 12eb2f89 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 12eb2f8d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 12eb2f8e mov ecx, 7 */
  ECX = (0x7u);
  /* 12eb2f93 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 12eb2f95 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb2f98 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb2f9b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2f9e jg 0x12eb2fb9 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb2fb9;
  /* 12eb2fa0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb2fa3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2fa6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb2fa9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2fac imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2faf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2fb2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2fb4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb2fb7 jmp 0x12eb2fcd */
  goto L_12eb2fcd;
L_12eb2fb9:;
  /* 12eb2fb9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb2fbc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb2fbf mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb2fc2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb2fc5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2fc8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb2fca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eb2fcd:;
  /* 12eb2fcd cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2fd1 jne 0x12eb300a */
  if (!C.zf) goto L_12eb300a;
  /* 12eb2fd3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb2fd6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb2fd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb2fdb jne 0x12eb2fec */
  if (!C.zf) goto L_12eb2fec;
  /* 12eb2fdd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2fe0 mov eax, dword ptr [edx*4 + 0x12ebee70] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebee70)));
  /* 12eb2fe7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eb2fea jmp 0x12eb2ff9 */
  goto L_12eb2ff9;
L_12eb2fec:;
  /* 12eb2fec mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb2fef mov edx, dword ptr [ecx*4 + 0x12ebeea4] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12ebeea4)));
  /* 12eb2ff6 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_12eb2ff9:;
  /* 12eb2ff9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb2ffc cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb2fff jle 0x12eb300a */
  if ((C.zf||C.sf!=C.of)) goto L_12eb300a;
  /* 12eb3001 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3004 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3007 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12eb300a:;
  /* 12eb300a jmp 0x12eb3041 */
  goto L_12eb3041;
L_12eb300c:;
  /* 12eb300c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb300f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3012 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3014 jne 0x12eb3025 */
  if (!C.zf) goto L_12eb3025;
  /* 12eb3016 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb3019 mov ecx, dword ptr [eax*4 + 0x12ebee6c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12ebee6c)));
  /* 12eb3020 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 12eb3023 jmp 0x12eb3032 */
  goto L_12eb3032;
L_12eb3025:;
  /* 12eb3025 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb3028 mov eax, dword ptr [edx*4 + 0x12ebeea0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12ebeea0)));
  /* 12eb302f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_12eb3032:;
  /* 12eb3032 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb3035 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 12eb3038 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb303b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb303e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_12eb3041:;
  /* 12eb3041 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3045 jne 0x12eb3081 */
  if (!C.zf) goto L_12eb3081;
  /* 12eb3047 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb304a mov dword ptr [0x12ebee4c], eax */
  w32((uint32_t)(0x12ebee4c), (EAX));
  /* 12eb304f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12eb3052 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb3055 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12eb3058 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb305a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb305d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12eb3060 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3062 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb3068 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12eb306b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb306d mov dword ptr [0x12ebee50], ecx */
  w32((uint32_t)(0x12ebee50), (ECX));
  /* 12eb3073 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3076 mov dword ptr [0x12ebee48], edx */
  w32((uint32_t)(0x12ebee48), (EDX));
  /* 12eb307c jmp 0x12eb3124 */
  goto L_12eb3124;
L_12eb3081:;
  /* 12eb3081 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3084 mov dword ptr [0x12ebee5c], eax */
  w32((uint32_t)(0x12ebee5c), (EAX));
  /* 12eb3089 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 12eb308c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb308f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 12eb3092 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3094 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb3097 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 12eb309a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb309c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb30a2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 12eb30a5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb30a7 mov dword ptr [0x12ebee60], ecx */
  w32((uint32_t)(0x12ebee60), (ECX));
  /* 12eb30ad mov edx, dword ptr [0x12ebedb8] */
  EDX = (r32((uint32_t)(0x12ebedb8)));
  /* 12eb30b3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 12eb30b9 mov eax, dword ptr [0x12ebee60] */
  EAX = (r32((uint32_t)(0x12ebee60)));
  /* 12eb30be add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb30c0 mov dword ptr [0x12ebee60], eax */
  w32((uint32_t)(0x12ebee60), (EAX));
  /* 12eb30c5 cmp dword ptr [0x12ebee60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebee60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb30cc jge 0x12eb30f1 */
  if ((C.sf==C.of)) goto L_12eb30f1;
  /* 12eb30ce mov ecx, dword ptr [0x12ebee60] */
  ECX = (r32((uint32_t)(0x12ebee60)));
  /* 12eb30d4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb30da mov dword ptr [0x12ebee60], ecx */
  w32((uint32_t)(0x12ebee60), (ECX));
  /* 12eb30e0 mov edx, dword ptr [0x12ebee5c] */
  EDX = (r32((uint32_t)(0x12ebee5c)));
  /* 12eb30e6 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb30e9 mov dword ptr [0x12ebee5c], edx */
  w32((uint32_t)(0x12ebee5c), (EDX));
  /* 12eb30ef jmp 0x12eb311b */
  goto L_12eb311b;
L_12eb30f1:;
  /* 12eb30f1 cmp dword ptr [0x12ebee60], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12ebee60))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb30fb jl 0x12eb311b */
  if ((C.sf!=C.of)) goto L_12eb311b;
  /* 12eb30fd mov eax, dword ptr [0x12ebee60] */
  EAX = (r32((uint32_t)(0x12ebee60)));
  /* 12eb3102 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3107 mov dword ptr [0x12ebee60], eax */
  w32((uint32_t)(0x12ebee60), (EAX));
  /* 12eb310c mov ecx, dword ptr [0x12ebee5c] */
  ECX = (r32((uint32_t)(0x12ebee5c)));
  /* 12eb3112 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3115 mov dword ptr [0x12ebee5c], ecx */
  w32((uint32_t)(0x12ebee5c), (ECX));
L_12eb311b:;
  /* 12eb311b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb311e mov dword ptr [0x12ebee58], edx */
  w32((uint32_t)(0x12ebee58), (EDX));
L_12eb3124:;
  /* 12eb3124 mov esp, ebp */
  ESP = (EBP);
  /* 12eb3126 pop ebp */
  EBP = (pop32());
  /* 12eb3127 ret  */
  ESPCHK(0x12eb2f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013130 @ 0x12eb3130 (382 bytes, 135 insns) */
void f_12eb3130(void) {
  FTRACE(0x12eb3130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3130 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3131 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3133 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3135 push 0x12ebba60 */
  push32((uint32_t)(0x12ebba60u));
  /* 12eb313a push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eb313f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eb3145 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3146 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eb314d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3150 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb3151 push esi */
  push32((uint32_t)(ESI));
  /* 12eb3152 push edi */
  push32((uint32_t)(EDI));
  /* 12eb3153 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb3156 cmp dword ptr [0x12ebf92c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf92c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb315d jne 0x12eb31a2 */
  if (!C.zf) goto L_12eb31a2;
  /* 12eb315f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3161 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3163 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3165 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3167 call dword ptr [0x12ec22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a0))), 0x12eb316du);
  /* 12eb316d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb316f je 0x12eb317d */
  if (C.zf) goto L_12eb317d;
  /* 12eb3171 mov dword ptr [0x12ebf92c], 1 */
  w32((uint32_t)(0x12ebf92c), (0x1u));
  /* 12eb317b jmp 0x12eb31a2 */
  goto L_12eb31a2;
L_12eb317d:;
  /* 12eb317d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb317f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3181 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3183 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3185 call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb318bu);
  /* 12eb318b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb318d je 0x12eb319b */
  if (C.zf) goto L_12eb319b;
  /* 12eb318f mov dword ptr [0x12ebf92c], 2 */
  w32((uint32_t)(0x12ebf92c), (0x2u));
  /* 12eb3199 jmp 0x12eb31a2 */
  goto L_12eb31a2;
L_12eb319b:;
  /* 12eb319b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb319d jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb31a2:;
  /* 12eb31a2 cmp dword ptr [0x12ebf92c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf92c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb31a9 jne 0x12eb31c6 */
  if (!C.zf) goto L_12eb31c6;
  /* 12eb31ab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb31ae push eax */
  push32((uint32_t)(EAX));
  /* 12eb31af mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb31b2 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb31b3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb31b6 push edx */
  push32((uint32_t)(EDX));
  /* 12eb31b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb31ba push eax */
  push32((uint32_t)(EAX));
  /* 12eb31bb call dword ptr [0x12ec22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a0))), 0x12eb31c1u);
  /* 12eb31c1 jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb31c6:;
  /* 12eb31c6 cmp dword ptr [0x12ebf92c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf92c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb31cd jne 0x12eb32af */
  if (!C.zf) goto L_12eb32af;
  /* 12eb31d3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb31d7 jne 0x12eb31e2 */
  if (!C.zf) goto L_12eb31e2;
  /* 12eb31d9 mov ecx, dword ptr [0x12ebf7e0] */
  ECX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb31df mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12eb31e2:;
  /* 12eb31e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb31e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb31e6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb31e9 push edx */
  push32((uint32_t)(EDX));
  /* 12eb31ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb31ed push eax */
  push32((uint32_t)(EAX));
  /* 12eb31ee call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb31f4u);
  /* 12eb31f4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eb31f7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb31fb jne 0x12eb3204 */
  if (!C.zf) goto L_12eb3204;
  /* 12eb31fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb31ff jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb3204:;
  /* 12eb3204 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb320b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb320e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3211 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb3213 call 0x12ea6e90 */
  push32(0x12eb3218u); f_12ea6e90();
  /* 12eb3218 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12eb321b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb321e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb3221 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12eb3224 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb322b jmp 0x12eb3244 */
  goto L_12eb3244;
  /* 12eb322d mov eax, 1 */
  EAX = (0x1u);
  /* 12eb3232 ret  */
  ESPCHK(0x12eb3130u, _esp0);
  ESP += 4; return;
  /* 12eb3233 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3236 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12eb323d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb3244:;
  /* 12eb3244 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3248 jne 0x12eb324e */
  if (!C.zf) goto L_12eb324e;
  /* 12eb324a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb324c jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb324e:;
  /* 12eb324e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb3251 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3252 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3255 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3256 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3259 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb325a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb325d push edx */
  push32((uint32_t)(EDX));
  /* 12eb325e call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb3264u);
  /* 12eb3264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3266 jne 0x12eb326c */
  if (!C.zf) goto L_12eb326c;
  /* 12eb3268 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb326a jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb326c:;
  /* 12eb326c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3270 jne 0x12eb328d */
  if (!C.zf) goto L_12eb328d;
  /* 12eb3272 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3274 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3276 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3278 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb327b push eax */
  push32((uint32_t)(EAX));
  /* 12eb327c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb327e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3281 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3282 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb3288u);
  /* 12eb3288 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eb328b jmp 0x12eb32aa */
  goto L_12eb32aa;
L_12eb328d:;
  /* 12eb328d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb3290 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3291 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3294 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3295 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3297 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb329a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb329b push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb329d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb32a0 push edx */
  push32((uint32_t)(EDX));
  /* 12eb32a1 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb32a7u);
  /* 12eb32a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12eb32aa:;
  /* 12eb32aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb32ad jmp 0x12eb32b1 */
  goto L_12eb32b1;
L_12eb32af:;
  /* 12eb32af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb32b1:;
  /* 12eb32b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12eb32b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb32b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eb32be pop edi */
  EDI = (pop32());
  /* 12eb32bf pop esi */
  ESI = (pop32());
  /* 12eb32c0 pop ebx */
  EBX = (pop32());
  /* 12eb32c1 mov esp, ebp */
  ESP = (EBP);
  /* 12eb32c3 pop ebp */
  EBP = (pop32());
  /* 12eb32c4 ret  */
  ESPCHK(0x12eb3130u, _esp0);
  ESP += 4; return;
}

/* FUN_100132d0 @ 0x12eb32d0 (398 bytes, 140 insns) */
void f_12eb32d0(void) {
  FTRACE(0x12eb32d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb32d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb32d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb32d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb32d5 push 0x12ebba70 */
  push32((uint32_t)(0x12ebba70u));
  /* 12eb32da push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eb32df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eb32e5 push eax */
  push32((uint32_t)(EAX));
  /* 12eb32e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eb32ed add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb32f0 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb32f1 push esi */
  push32((uint32_t)(ESI));
  /* 12eb32f2 push edi */
  push32((uint32_t)(EDI));
  /* 12eb32f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb32f6 cmp dword ptr [0x12ebf930], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf930))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb32fd jne 0x12eb3342 */
  if (!C.zf) goto L_12eb3342;
  /* 12eb32ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3301 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3303 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3305 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3307 call dword ptr [0x12ec22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a0))), 0x12eb330du);
  /* 12eb330d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb330f je 0x12eb331d */
  if (C.zf) goto L_12eb331d;
  /* 12eb3311 mov dword ptr [0x12ebf930], 1 */
  w32((uint32_t)(0x12ebf930), (0x1u));
  /* 12eb331b jmp 0x12eb3342 */
  goto L_12eb3342;
L_12eb331d:;
  /* 12eb331d push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb331f push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3321 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3323 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3325 call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb332bu);
  /* 12eb332b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb332d je 0x12eb333b */
  if (C.zf) goto L_12eb333b;
  /* 12eb332f mov dword ptr [0x12ebf930], 2 */
  w32((uint32_t)(0x12ebf930), (0x2u));
  /* 12eb3339 jmp 0x12eb3342 */
  goto L_12eb3342;
L_12eb333b:;
  /* 12eb333b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb333d jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb3342:;
  /* 12eb3342 cmp dword ptr [0x12ebf930], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf930))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3349 jne 0x12eb3366 */
  if (!C.zf) goto L_12eb3366;
  /* 12eb334b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb334e push eax */
  push32((uint32_t)(EAX));
  /* 12eb334f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3352 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3353 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3356 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3357 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb335a push eax */
  push32((uint32_t)(EAX));
  /* 12eb335b call dword ptr [0x12ec22b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22b8))), 0x12eb3361u);
  /* 12eb3361 jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb3366:;
  /* 12eb3366 cmp dword ptr [0x12ebf930], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf930))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb336d jne 0x12eb345f */
  if (!C.zf) goto L_12eb345f;
  /* 12eb3373 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3377 jne 0x12eb3382 */
  if (!C.zf) goto L_12eb3382;
  /* 12eb3379 mov ecx, dword ptr [0x12ebf7e0] */
  ECX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb337f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_12eb3382:;
  /* 12eb3382 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3384 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3386 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3389 push edx */
  push32((uint32_t)(EDX));
  /* 12eb338a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb338d push eax */
  push32((uint32_t)(EAX));
  /* 12eb338e call dword ptr [0x12ec22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a0))), 0x12eb3394u);
  /* 12eb3394 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eb3397 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb339b jne 0x12eb33a4 */
  if (!C.zf) goto L_12eb33a4;
  /* 12eb339d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb339f jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb33a4:;
  /* 12eb33a4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb33ab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb33ae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eb33b0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb33b3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb33b5 call 0x12ea6e90 */
  push32(0x12eb33bau); f_12ea6e90();
  /* 12eb33ba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 12eb33bd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb33c0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb33c3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 12eb33c6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb33cd jmp 0x12eb33e6 */
  goto L_12eb33e6;
  /* 12eb33cf mov eax, 1 */
  EAX = (0x1u);
  /* 12eb33d4 ret  */
  ESPCHK(0x12eb32d0u, _esp0);
  ESP += 4; return;
  /* 12eb33d5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb33d8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 12eb33df mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb33e6:;
  /* 12eb33e6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb33ea jne 0x12eb33f0 */
  if (!C.zf) goto L_12eb33f0;
  /* 12eb33ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb33ee jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb33f0:;
  /* 12eb33f0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb33f3 push edx */
  push32((uint32_t)(EDX));
  /* 12eb33f4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb33f7 push eax */
  push32((uint32_t)(EAX));
  /* 12eb33f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb33fb push ecx */
  push32((uint32_t)(ECX));
  /* 12eb33fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb33ff push edx */
  push32((uint32_t)(EDX));
  /* 12eb3400 call dword ptr [0x12ec22a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22a0))), 0x12eb3406u);
  /* 12eb3406 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3408 jne 0x12eb340e */
  if (!C.zf) goto L_12eb340e;
  /* 12eb340a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb340c jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb340e:;
  /* 12eb340e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3412 jne 0x12eb3436 */
  if (!C.zf) goto L_12eb3436;
  /* 12eb3414 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3416 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3418 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb341a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb341c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb341e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3421 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3422 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb3427 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb342a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb342b call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb3431u);
  /* 12eb3431 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 12eb3434 jmp 0x12eb345a */
  goto L_12eb345a;
L_12eb3436:;
  /* 12eb3436 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3438 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb343a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb343d push edx */
  push32((uint32_t)(EDX));
  /* 12eb343e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3441 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3442 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3444 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3447 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3448 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 12eb344d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3450 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3451 call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb3457u);
  /* 12eb3457 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_12eb345a:;
  /* 12eb345a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb345d jmp 0x12eb3461 */
  goto L_12eb3461;
L_12eb345f:;
  /* 12eb345f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb3461:;
  /* 12eb3461 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 12eb3464 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3467 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eb346e pop edi */
  EDI = (pop32());
  /* 12eb346f pop esi */
  ESI = (pop32());
  /* 12eb3470 pop ebx */
  EBX = (pop32());
  /* 12eb3471 mov esp, ebp */
  ESP = (EBP);
  /* 12eb3473 pop ebp */
  EBP = (pop32());
  /* 12eb3474 ret  */
  ESPCHK(0x12eb32d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x12eb3480 (11 bytes, 6 insns) */
void f_12eb3480(void) {
  FTRACE(0x12eb3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3480 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3481 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3483 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3486 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3489 pop ebp */
  EBP = (pop32());
  /* 12eb348a ret  */
  ESPCHK(0x12eb3480u, _esp0);
  ESP += 4; return;
}

/* FUN_10013490 @ 0x12eb3490 (147 bytes, 43 insns) */
void f_12eb3490(void) {
  FTRACE(0x12eb3490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3490 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3491 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3493 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3494 cmp dword ptr [0x12ebf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb349b jne 0x12eb34b7 */
  if (!C.zf) goto L_12eb34b7;
  /* 12eb349d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb34a1 jl 0x12eb34b2 */
  if ((C.sf!=C.of)) goto L_12eb34b2;
  /* 12eb34a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb34a7 jg 0x12eb34b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb34b2;
  /* 12eb34a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb34ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb34af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12eb34b2:;
  /* 12eb34b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb34b5 jmp 0x12eb351f */
  goto L_12eb351f;
L_12eb34b7:;
  /* 12eb34b7 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb34bc call dword ptr [0x12ec2338] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2338))), 0x12eb34c2u);
  /* 12eb34c2 cmp dword ptr [0x12ebf94c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf94c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb34c9 je 0x12eb34e9 */
  if (C.zf) goto L_12eb34e9;
  /* 12eb34cb push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb34d0 call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eb34d6u);
  /* 12eb34d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb34d8 call 0x12ea76f0 */
  push32(0x12eb34ddu); f_12ea76f0();
  /* 12eb34dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb34e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eb34e7 jmp 0x12eb34f0 */
  goto L_12eb34f0;
L_12eb34e9:;
  /* 12eb34e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_12eb34f0:;
  /* 12eb34f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb34f3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb34f4 call 0x12eb3530 */
  push32(0x12eb34f9u); f_12eb3530();
  /* 12eb34f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb34fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 12eb34ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3503 je 0x12eb3511 */
  if (C.zf) goto L_12eb3511;
  /* 12eb3505 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 12eb3507 call 0x12ea7790 */
  push32(0x12eb350cu); f_12ea7790();
  /* 12eb350c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb350f jmp 0x12eb351c */
  goto L_12eb351c;
L_12eb3511:;
  /* 12eb3511 push 0x12ebf95c */
  push32((uint32_t)(0x12ebf95cu));
  /* 12eb3516 call dword ptr [0x12ec2328] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2328))), 0x12eb351cu);
L_12eb351c:;
  /* 12eb351c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_12eb351f:;
  /* 12eb351f mov esp, ebp */
  ESP = (EBP);
  /* 12eb3521 pop ebp */
  EBP = (pop32());
  /* 12eb3522 ret  */
  ESPCHK(0x12eb3490u, _esp0);
  ESP += 4; return;
}

/* FUN_10013530 @ 0x12eb3530 (299 bytes, 91 insns) */
void f_12eb3530(void) {
  FTRACE(0x12eb3530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3530 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3531 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3533 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3536 cmp dword ptr [0x12ebf7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb353d jne 0x12eb355c */
  if (!C.zf) goto L_12eb355c;
  /* 12eb353f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3543 jl 0x12eb3554 */
  if ((C.sf!=C.of)) goto L_12eb3554;
  /* 12eb3545 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3549 jg 0x12eb3554 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb3554;
  /* 12eb354b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb354e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3551 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_12eb3554:;
  /* 12eb3554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3557 jmp 0x12eb3657 */
  goto L_12eb3657;
L_12eb355c:;
  /* 12eb355c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3563 jge 0x12eb35a3 */
  if ((C.sf==C.of)) goto L_12eb35a3;
  /* 12eb3565 cmp dword ptr [0x12ebdec4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebdec4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb356c jle 0x12eb3581 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb3581;
  /* 12eb356e push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3573 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3574 call 0x12ea9d00 */
  push32(0x12eb3579u); f_12ea9d00();
  /* 12eb3579 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb357c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eb357f jmp 0x12eb3595 */
  goto L_12eb3595;
L_12eb3581:;
  /* 12eb3581 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3584 mov eax, dword ptr [0x12ebdcb8] */
  EAX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb3589 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb358b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12eb358f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3592 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_12eb3595:;
  /* 12eb3595 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3599 jne 0x12eb35a3 */
  if (!C.zf) goto L_12eb35a3;
  /* 12eb359b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb359e jmp 0x12eb3657 */
  goto L_12eb3657;
L_12eb35a3:;
  /* 12eb35a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb35a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12eb35a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb35af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb35b5 mov eax, dword ptr [0x12ebdcb8] */
  EAX = (r32((uint32_t)(0x12ebdcb8)));
  /* 12eb35ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb35bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 12eb35c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb35c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb35c8 je 0x12eb35ec */
  if (C.zf) goto L_12eb35ec;
  /* 12eb35ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb35cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12eb35d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb35d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 12eb35d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 12eb35dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 12eb35df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 12eb35e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 12eb35ea jmp 0x12eb35fd */
  goto L_12eb35fd;
L_12eb35ec:;
  /* 12eb35ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 12eb35ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 12eb35f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 12eb35f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_12eb35fd:;
  /* 12eb35fd push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb35ff push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3601 push 3 */
  push32((uint32_t)(0x3u));
  /* 12eb3603 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 12eb3606 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3607 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb360a push eax */
  push32((uint32_t)(EAX));
  /* 12eb360b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 12eb360e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb360f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 12eb3614 mov edx, dword ptr [0x12ebf7d0] */
  EDX = (r32((uint32_t)(0x12ebf7d0)));
  /* 12eb361a push edx */
  push32((uint32_t)(EDX));
  /* 12eb361b call 0x12eac0e0 */
  push32(0x12eb3620u); f_12eac0e0();
  /* 12eb3620 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3623 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb3626 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb362a jne 0x12eb3631 */
  if (!C.zf) goto L_12eb3631;
  /* 12eb362c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb362f jmp 0x12eb3657 */
  goto L_12eb3657;
L_12eb3631:;
  /* 12eb3631 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3635 jne 0x12eb3641 */
  if (!C.zf) goto L_12eb3641;
  /* 12eb3637 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb363a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb363f jmp 0x12eb3657 */
  goto L_12eb3657;
L_12eb3641:;
  /* 12eb3641 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3644 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3649 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 12eb364c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3652 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 12eb3655 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_12eb3657:;
  /* 12eb3657 mov esp, ebp */
  ESP = (EBP);
  /* 12eb3659 pop ebp */
  EBP = (pop32());
  /* 12eb365a ret  */
  ESPCHK(0x12eb3530u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x12eb3660 (52 bytes, 19 insns) */
void f_12eb3660(void) {
  FTRACE(0x12eb3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3660 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eb3664 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 12eb3668 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb366a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 12eb366e jne 0x12eb3679 */
  if (!C.zf) goto L_12eb3679;
  /* 12eb3670 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 12eb3674 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eb3676 ret 0x10 */
  ESPCHK(0x12eb3660u, _esp0);
  ESP += 20; return;
L_12eb3679:;
  /* 12eb3679 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb367a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eb367c mov ebx, eax */
  EBX = (EAX);
  /* 12eb367e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eb3682 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eb3686 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3688 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eb368c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 12eb368e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3690 pop ebx */
  EBX = (pop32());
  /* 12eb3691 ret 0x10 */
  ESPCHK(0x12eb3660u, _esp0);
  ESP += 20; return;
}

/* FUN_100136a0 @ 0x12eb36a0 (46 bytes, 18 insns) */
void f_12eb36a0(void) {
  FTRACE(0x12eb36a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb36a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb36a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb36a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb36a4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb36a6 call 0x12ea76f0 */
  push32(0x12eb36abu); f_12ea76f0();
  /* 12eb36ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb36ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb36b1 push eax */
  push32((uint32_t)(EAX));
  /* 12eb36b2 call 0x12eb36d0 */
  push32(0x12eb36b7u); f_12eb36d0();
  /* 12eb36b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb36ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb36bd push 0xc */
  push32((uint32_t)(0xcu));
  /* 12eb36bf call 0x12ea7790 */
  push32(0x12eb36c4u); f_12ea7790();
  /* 12eb36c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb36c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb36ca mov esp, ebp */
  ESP = (EBP);
  /* 12eb36cc pop ebp */
  EBP = (pop32());
  /* 12eb36cd ret  */
  ESPCHK(0x12eb36a0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x12eb36d0 (198 bytes, 69 insns) */
void f_12eb36d0(void) {
  FTRACE(0x12eb36d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb36d0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb36d1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb36d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb36d6 mov eax, dword ptr [0x12ebf5ec] */
  EAX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb36db mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb36de cmp dword ptr [0x12ec10e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec10e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb36e5 jne 0x12eb36ee */
  if (!C.zf) goto L_12eb36ee;
  /* 12eb36e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb36e9 jmp 0x12eb3792 */
  goto L_12eb3792;
L_12eb36ee:;
  /* 12eb36ee cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb36f2 jne 0x12eb3716 */
  if (!C.zf) goto L_12eb3716;
  /* 12eb36f4 cmp dword ptr [0x12ebf5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb36fb je 0x12eb3716 */
  if (C.zf) goto L_12eb3716;
  /* 12eb36fd call 0x12eb37f0 */
  push32(0x12eb3702u); f_12eb37f0();
  /* 12eb3702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3704 je 0x12eb370d */
  if (C.zf) goto L_12eb370d;
  /* 12eb3706 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3708 jmp 0x12eb3792 */
  goto L_12eb3792;
L_12eb370d:;
  /* 12eb370d mov ecx, dword ptr [0x12ebf5ec] */
  ECX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3713 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_12eb3716:;
  /* 12eb3716 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb371a je 0x12eb3790 */
  if (C.zf) goto L_12eb3790;
  /* 12eb371c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3720 je 0x12eb3790 */
  if (C.zf) goto L_12eb3790;
  /* 12eb3722 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3725 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3726 call 0x12ea6b20 */
  push32(0x12eb372bu); f_12ea6b20();
  /* 12eb372b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb372e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eb3731:;
  /* 12eb3731 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3734 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3737 je 0x12eb3790 */
  if (C.zf) goto L_12eb3790;
  /* 12eb3739 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb373c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb373e push edx */
  push32((uint32_t)(EDX));
  /* 12eb373f call 0x12ea6b20 */
  push32(0x12eb3744u); f_12ea6b20();
  /* 12eb3744 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3747 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb374a jbe 0x12eb3785 */
  if ((C.cf||C.zf)) goto L_12eb3785;
  /* 12eb374c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb374f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb3751 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3754 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 12eb3758 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb375b jne 0x12eb3785 */
  if (!C.zf) goto L_12eb3785;
  /* 12eb375d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3760 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3761 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3764 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3765 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3768 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb376a push ecx */
  push32((uint32_t)(ECX));
  /* 12eb376b call 0x12eb37a0 */
  push32(0x12eb3770u); f_12eb37a0();
  /* 12eb3770 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3773 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3775 jne 0x12eb3785 */
  if (!C.zf) goto L_12eb3785;
  /* 12eb3777 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb377a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb377c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb377f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 12eb3783 jmp 0x12eb3792 */
  goto L_12eb3792;
L_12eb3785:;
  /* 12eb3785 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3788 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb378b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb378e jmp 0x12eb3731 */
  goto L_12eb3731;
L_12eb3790:;
  /* 12eb3790 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb3792:;
  /* 12eb3792 mov esp, ebp */
  ESP = (EBP);
  /* 12eb3794 pop ebp */
  EBP = (pop32());
  /* 12eb3795 ret  */
  ESPCHK(0x12eb36d0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x12eb37a0 (79 bytes, 32 insns) */
void f_12eb37a0(void) {
  FTRACE(0x12eb37a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb37a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb37a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb37a3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb37a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb37a8 jne 0x12eb37ae */
  if (!C.zf) goto L_12eb37ae;
  /* 12eb37aa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb37ac jmp 0x12eb37eb */
  goto L_12eb37eb;
L_12eb37ae:;
  /* 12eb37ae mov eax, dword ptr [0x12ec0ca4] */
  EAX = (r32((uint32_t)(0x12ec0ca4)));
  /* 12eb37b3 push eax */
  push32((uint32_t)(EAX));
  /* 12eb37b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb37b7 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb37b8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb37bb push edx */
  push32((uint32_t)(EDX));
  /* 12eb37bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb37bf push eax */
  push32((uint32_t)(EAX));
  /* 12eb37c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb37c3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb37c4 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb37c6 mov edx, dword ptr [0x12ec0f44] */
  EDX = (r32((uint32_t)(0x12ec0f44)));
  /* 12eb37cc push edx */
  push32((uint32_t)(EDX));
  /* 12eb37cd call 0x12eb38a0 */
  push32(0x12eb37d2u); f_12eb38a0();
  /* 12eb37d2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb37d5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb37d8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb37dc jne 0x12eb37e5 */
  if (!C.zf) goto L_12eb37e5;
  /* 12eb37de mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 12eb37e3 jmp 0x12eb37eb */
  goto L_12eb37eb;
L_12eb37e5:;
  /* 12eb37e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb37e8 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_12eb37eb:;
  /* 12eb37eb mov esp, ebp */
  ESP = (EBP);
  /* 12eb37ed pop ebp */
  EBP = (pop32());
  /* 12eb37ee ret  */
  ESPCHK(0x12eb37a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x12eb37f0 (174 bytes, 66 insns) */
void f_12eb37f0(void) {
  FTRACE(0x12eb37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb37f1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb37f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb37f6 mov eax, dword ptr [0x12ebf5f4] */
  EAX = (r32((uint32_t)(0x12ebf5f4)));
  /* 12eb37fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_12eb37fe:;
  /* 12eb37fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3801 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3804 je 0x12eb3898 */
  if (C.zf) goto L_12eb3898;
  /* 12eb380a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb380c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb380e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3810 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3812 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3814 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3817 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb3819 push eax */
  push32((uint32_t)(EAX));
  /* 12eb381a push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb381c push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb381e call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb3824u);
  /* 12eb3824 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb3827 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb382b jne 0x12eb3832 */
  if (!C.zf) goto L_12eb3832;
  /* 12eb382d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3830 jmp 0x12eb389a */
  goto L_12eb389a;
L_12eb3832:;
  /* 12eb3832 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12eb3834 push 0x12ebba7c */
  push32((uint32_t)(0x12ebba7cu));
  /* 12eb3839 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb383b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb383e push ecx */
  push32((uint32_t)(ECX));
  /* 12eb383f call 0x12ea3cf0 */
  push32(0x12eb3844u); f_12ea3cf0();
  /* 12eb3844 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3847 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb384a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb384e jne 0x12eb3855 */
  if (!C.zf) goto L_12eb3855;
  /* 12eb3850 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3853 jmp 0x12eb389a */
  goto L_12eb389a;
L_12eb3855:;
  /* 12eb3855 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3857 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3859 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb385c push edx */
  push32((uint32_t)(EDX));
  /* 12eb385d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3860 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3861 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb3863 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3866 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb3868 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3869 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb386b push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb386d call dword ptr [0x12ec2390] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2390))), 0x12eb3873u);
  /* 12eb3873 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3875 jne 0x12eb387c */
  if (!C.zf) goto L_12eb387c;
  /* 12eb3877 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb387a jmp 0x12eb389a */
  goto L_12eb389a;
L_12eb387c:;
  /* 12eb387c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb387e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3881 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3882 call 0x12eb3cf0 */
  push32(0x12eb3887u); f_12eb3cf0();
  /* 12eb3887 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb388a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb388d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3890 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb3893 jmp 0x12eb37fe */
  goto L_12eb37fe;
L_12eb3898:;
  /* 12eb3898 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb389a:;
  /* 12eb389a mov esp, ebp */
  ESP = (EBP);
  /* 12eb389c pop ebp */
  EBP = (pop32());
  /* 12eb389d ret  */
  ESPCHK(0x12eb37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100138a0 @ 0x12eb38a0 (970 bytes, 340 insns) */
void f_12eb38a0(void) {
  FTRACE(0x12eb38a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb38a0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb38a1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb38a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 12eb38a5 push 0x12ebbad0 */
  push32((uint32_t)(0x12ebbad0u));
  /* 12eb38aa push 0x12eacdf8 */
  push32((uint32_t)(0x12eacdf8u));
  /* 12eb38af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 12eb38b5 push eax */
  push32((uint32_t)(EAX));
  /* 12eb38b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 12eb38bd add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb38c0 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb38c1 push esi */
  push32((uint32_t)(ESI));
  /* 12eb38c2 push edi */
  push32((uint32_t)(EDI));
  /* 12eb38c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb38c6 cmp dword ptr [0x12ebf934], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf934))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb38cd jne 0x12eb3926 */
  if (!C.zf) goto L_12eb3926;
  /* 12eb38cf push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb38d1 push 0x12ebb12c */
  push32((uint32_t)(0x12ebb12cu));
  /* 12eb38d6 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb38d8 push 0x12ebb12c */
  push32((uint32_t)(0x12ebb12cu));
  /* 12eb38dd push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb38df push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb38e1 call dword ptr [0x12ec2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2298))), 0x12eb38e7u);
  /* 12eb38e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb38e9 je 0x12eb38f7 */
  if (C.zf) goto L_12eb38f7;
  /* 12eb38eb mov dword ptr [0x12ebf934], 1 */
  w32((uint32_t)(0x12ebf934), (0x1u));
  /* 12eb38f5 jmp 0x12eb3926 */
  goto L_12eb3926;
L_12eb38f7:;
  /* 12eb38f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb38f9 push 0x12ebb128 */
  push32((uint32_t)(0x12ebb128u));
  /* 12eb38fe push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3900 push 0x12ebb128 */
  push32((uint32_t)(0x12ebb128u));
  /* 12eb3905 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3907 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3909 call dword ptr [0x12ec229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec229c))), 0x12eb390fu);
  /* 12eb390f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3911 je 0x12eb391f */
  if (C.zf) goto L_12eb391f;
  /* 12eb3913 mov dword ptr [0x12ebf934], 2 */
  w32((uint32_t)(0x12ebf934), (0x2u));
  /* 12eb391d jmp 0x12eb3926 */
  goto L_12eb3926;
L_12eb391f:;
  /* 12eb391f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3921 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3926:;
  /* 12eb3926 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb392a jle 0x12eb393f */
  if ((C.zf||C.sf!=C.of)) goto L_12eb393f;
  /* 12eb392c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb392f push eax */
  push32((uint32_t)(EAX));
  /* 12eb3930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3933 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3934 call 0x12eb3ca0 */
  push32(0x12eb3939u); f_12eb3ca0();
  /* 12eb3939 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb393c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_12eb393f:;
  /* 12eb393f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3943 jle 0x12eb3958 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb3958;
  /* 12eb3945 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb3948 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3949 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb394c push eax */
  push32((uint32_t)(EAX));
  /* 12eb394d call 0x12eb3ca0 */
  push32(0x12eb3952u); f_12eb3ca0();
  /* 12eb3952 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3955 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_12eb3958:;
  /* 12eb3958 cmp dword ptr [0x12ebf934], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf934))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb395f jne 0x12eb3984 */
  if (!C.zf) goto L_12eb3984;
  /* 12eb3961 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb3964 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3965 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3968 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3969 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb396c push eax */
  push32((uint32_t)(EAX));
  /* 12eb396d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3970 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3971 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3974 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3975 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3978 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3979 call dword ptr [0x12ec229c] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec229c))), 0x12eb397fu);
  /* 12eb397f jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3984:;
  /* 12eb3984 cmp dword ptr [0x12ebf934], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf934))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb398b jne 0x12eb3c82 */
  if (!C.zf) goto L_12eb3c82;
  /* 12eb3991 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3995 jne 0x12eb39a0 */
  if (!C.zf) goto L_12eb39a0;
  /* 12eb3997 mov ecx, dword ptr [0x12ebf7e0] */
  ECX = (r32((uint32_t)(0x12ebf7e0)));
  /* 12eb399d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_12eb39a0:;
  /* 12eb39a0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39a4 je 0x12eb39b0 */
  if (C.zf) goto L_12eb39b0;
  /* 12eb39a6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39aa jne 0x12eb3b2c */
  if (!C.zf) goto L_12eb3b2c;
L_12eb39b0:;
  /* 12eb39b0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb39b3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39b6 jne 0x12eb39c2 */
  if (!C.zf) goto L_12eb39c2;
  /* 12eb39b8 mov eax, 2 */
  EAX = (0x2u);
  /* 12eb39bd jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb39c2:;
  /* 12eb39c2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39c6 jle 0x12eb39d2 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb39d2;
  /* 12eb39c8 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb39cd jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb39d2:;
  /* 12eb39d2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39d6 jle 0x12eb39e2 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb39e2;
  /* 12eb39d8 mov eax, 3 */
  EAX = (0x3u);
  /* 12eb39dd jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb39e2:;
  /* 12eb39e2 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 12eb39e5 push eax */
  push32((uint32_t)(EAX));
  /* 12eb39e6 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eb39e9 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb39ea call dword ptr [0x12ec22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22f4))), 0x12eb39f0u);
  /* 12eb39f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb39f2 jne 0x12eb39fb */
  if (!C.zf) goto L_12eb39fb;
  /* 12eb39f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb39f6 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb39fb:;
  /* 12eb39fb cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb39ff jne 0x12eb3a07 */
  if (!C.zf) goto L_12eb3a07;
  /* 12eb3a01 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a05 je 0x12eb3a34 */
  if (C.zf) goto L_12eb3a34;
L_12eb3a07:;
  /* 12eb3a07 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a0b jne 0x12eb3a13 */
  if (!C.zf) goto L_12eb3a13;
  /* 12eb3a0d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a11 je 0x12eb3a34 */
  if (C.zf) goto L_12eb3a34;
L_12eb3a13:;
  /* 12eb3a13 push 0x12ebba90 */
  push32((uint32_t)(0x12ebba90u));
  /* 12eb3a18 push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3a1a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 12eb3a1f push 0x12ebba88 */
  push32((uint32_t)(0x12ebba88u));
  /* 12eb3a24 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3a26 call 0x12ea2db0 */
  push32(0x12eb3a2bu); f_12ea2db0();
  /* 12eb3a2b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3a2e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a31 jne 0x12eb3a34 */
  if (!C.zf) goto L_12eb3a34;
  /* 12eb3a33 int3  */
  x86_unimpl("int3 @ 0x12eb3a33");
L_12eb3a34:;
  /* 12eb3a34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3a36 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3a38 jne 0x12eb39fb */
  if (!C.zf) goto L_12eb39fb;
  /* 12eb3a3a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a3e jle 0x12eb3ab3 */
  if ((C.zf||C.sf!=C.of)) goto L_12eb3ab3;
  /* 12eb3a40 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a44 jae 0x12eb3a50 */
  if (!C.cf) goto L_12eb3a50;
  /* 12eb3a46 mov eax, 3 */
  EAX = (0x3u);
  /* 12eb3a4b jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3a50:;
  /* 12eb3a50 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 12eb3a53 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 12eb3a56 jmp 0x12eb3a61 */
  goto L_12eb3a61;
L_12eb3a58:;
  /* 12eb3a58 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3a5b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3a5e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_12eb3a61:;
  /* 12eb3a61 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3a64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3a66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb3a68 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3a6a je 0x12eb3aa9 */
  if (C.zf) goto L_12eb3aa9;
  /* 12eb3a6c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3a6f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3a71 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 12eb3a74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3a76 je 0x12eb3aa9 */
  if (C.zf) goto L_12eb3aa9;
  /* 12eb3a78 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3a7b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3a7d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb3a7f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3a82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3a84 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb3a86 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a88 jl 0x12eb3aa7 */
  if ((C.sf!=C.of)) goto L_12eb3aa7;
  /* 12eb3a8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3a8d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3a8f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb3a91 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3a94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3a96 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12eb3a99 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3a9b jg 0x12eb3aa7 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb3aa7;
  /* 12eb3a9d mov eax, 2 */
  EAX = (0x2u);
  /* 12eb3aa2 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3aa7:;
  /* 12eb3aa7 jmp 0x12eb3a58 */
  goto L_12eb3a58;
L_12eb3aa9:;
  /* 12eb3aa9 mov eax, 3 */
  EAX = (0x3u);
  /* 12eb3aae jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3ab3:;
  /* 12eb3ab3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3ab7 jle 0x12eb3b2c */
  if ((C.zf||C.sf!=C.of)) goto L_12eb3b2c;
  /* 12eb3ab9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3abd jae 0x12eb3ac9 */
  if (!C.cf) goto L_12eb3ac9;
  /* 12eb3abf mov eax, 1 */
  EAX = (0x1u);
  /* 12eb3ac4 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3ac9:;
  /* 12eb3ac9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 12eb3acc mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 12eb3acf jmp 0x12eb3ada */
  goto L_12eb3ada;
L_12eb3ad1:;
  /* 12eb3ad1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3ad4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3ad7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_12eb3ada:;
  /* 12eb3ada mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3add xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3adf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb3ae1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3ae3 je 0x12eb3b22 */
  if (C.zf) goto L_12eb3b22;
  /* 12eb3ae5 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3ae8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3aea mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 12eb3aed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb3aef je 0x12eb3b22 */
  if (C.zf) goto L_12eb3b22;
  /* 12eb3af1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3af4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3af6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 12eb3af8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3afb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3afd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 12eb3aff cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3b01 jl 0x12eb3b20 */
  if ((C.sf!=C.of)) goto L_12eb3b20;
  /* 12eb3b03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3b06 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb3b08 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb3b0a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 12eb3b0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3b0f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 12eb3b12 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3b14 jg 0x12eb3b20 */
  if ((!C.zf&&C.sf==C.of)) goto L_12eb3b20;
  /* 12eb3b16 mov eax, 2 */
  EAX = (0x2u);
  /* 12eb3b1b jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3b20:;
  /* 12eb3b20 jmp 0x12eb3ad1 */
  goto L_12eb3ad1;
L_12eb3b22:;
  /* 12eb3b22 mov eax, 1 */
  EAX = (0x1u);
  /* 12eb3b27 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3b2c:;
  /* 12eb3b2c push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3b2e push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3b30 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb3b33 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3b34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3b37 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3b38 push 9 */
  push32((uint32_t)(0x9u));
  /* 12eb3b3a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eb3b3d push eax */
  push32((uint32_t)(EAX));
  /* 12eb3b3e call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb3b44u);
  /* 12eb3b44 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 12eb3b47 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3b4b jne 0x12eb3b54 */
  if (!C.zf) goto L_12eb3b54;
  /* 12eb3b4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3b4f jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3b54:;
  /* 12eb3b54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 12eb3b5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb3b5e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eb3b60 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3b63 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb3b65 call 0x12ea6e90 */
  push32(0x12eb3b6au); f_12ea6e90();
  /* 12eb3b6a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 12eb3b6d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb3b70 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 12eb3b73 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 12eb3b76 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb3b7d jmp 0x12eb3b96 */
  goto L_12eb3b96;
  /* 12eb3b7f mov eax, 1 */
  EAX = (0x1u);
  /* 12eb3b84 ret  */
  ESPCHK(0x12eb38a0u, _esp0);
  ESP += 4; return;
  /* 12eb3b85 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3b88 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 12eb3b8f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb3b96:;
  /* 12eb3b96 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3b9a jne 0x12eb3ba3 */
  if (!C.zf) goto L_12eb3ba3;
  /* 12eb3b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3b9e jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3ba3:;
  /* 12eb3ba3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb3ba6 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3ba7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb3baa push eax */
  push32((uint32_t)(EAX));
  /* 12eb3bab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 12eb3bae push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3baf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 12eb3bb2 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3bb3 push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3bb5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eb3bb8 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3bb9 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb3bbfu);
  /* 12eb3bbf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3bc1 jne 0x12eb3bca */
  if (!C.zf) goto L_12eb3bca;
  /* 12eb3bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3bc5 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3bca:;
  /* 12eb3bca push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3bcc push 0 */
  push32((uint32_t)(0x0u));
  /* 12eb3bce mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb3bd1 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3bd2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3bd5 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3bd6 push 9 */
  push32((uint32_t)(0x9u));
  /* 12eb3bd8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eb3bdb push eax */
  push32((uint32_t)(EAX));
  /* 12eb3bdc call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb3be2u);
  /* 12eb3be2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 12eb3be5 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3be9 jne 0x12eb3bf2 */
  if (!C.zf) goto L_12eb3bf2;
  /* 12eb3beb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3bed jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3bf2:;
  /* 12eb3bf2 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 12eb3bf9 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3bfc shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 12eb3bfe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3c01 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 12eb3c03 call 0x12ea6e90 */
  push32(0x12eb3c08u); f_12ea6e90();
  /* 12eb3c08 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 12eb3c0b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 12eb3c0e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 12eb3c11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 12eb3c14 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 12eb3c1b jmp 0x12eb3c34 */
  goto L_12eb3c34;
  /* 12eb3c1d mov eax, 1 */
  EAX = (0x1u);
  /* 12eb3c22 ret  */
  ESPCHK(0x12eb38a0u, _esp0);
  ESP += 4; return;
  /* 12eb3c23 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3c26 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 12eb3c2d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_12eb3c34:;
  /* 12eb3c34 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3c38 jne 0x12eb3c3e */
  if (!C.zf) goto L_12eb3c3e;
  /* 12eb3c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3c3c jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3c3e:;
  /* 12eb3c3e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3c41 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3c42 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb3c45 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3c46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 12eb3c49 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3c4a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 12eb3c4d push edx */
  push32((uint32_t)(EDX));
  /* 12eb3c4e push 1 */
  push32((uint32_t)(0x1u));
  /* 12eb3c50 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 12eb3c53 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3c54 call dword ptr [0x12ec22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec22e8))), 0x12eb3c5au);
  /* 12eb3c5a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3c5c jne 0x12eb3c62 */
  if (!C.zf) goto L_12eb3c62;
  /* 12eb3c5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3c60 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3c62:;
  /* 12eb3c62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 12eb3c65 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3c66 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 12eb3c69 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3c6a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 12eb3c6d push eax */
  push32((uint32_t)(EAX));
  /* 12eb3c6e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 12eb3c71 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3c72 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3c75 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3c76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3c79 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3c7a call dword ptr [0x12ec2298] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2298))), 0x12eb3c80u);
  /* 12eb3c80 jmp 0x12eb3c84 */
  goto L_12eb3c84;
L_12eb3c82:;
  /* 12eb3c82 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb3c84:;
  /* 12eb3c84 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 12eb3c87 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3c8a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 12eb3c91 pop edi */
  EDI = (pop32());
  /* 12eb3c92 pop esi */
  ESI = (pop32());
  /* 12eb3c93 pop ebx */
  EBX = (pop32());
  /* 12eb3c94 mov esp, ebp */
  ESP = (EBP);
  /* 12eb3c96 pop ebp */
  EBP = (pop32());
  /* 12eb3c97 ret  */
  ESPCHK(0x12eb38a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013ca0 @ 0x12eb3ca0 (80 bytes, 32 insns) */
void f_12eb3ca0(void) {
  FTRACE(0x12eb3ca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3ca0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3ca1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3ca3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3ca6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3ca9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb3cac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3caf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eb3cb2:;
  /* 12eb3cb2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3cb5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3cb8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3cbb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb3cbe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3cc0 je 0x12eb3cd7 */
  if (C.zf) goto L_12eb3cd7;
  /* 12eb3cc2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3cc5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb3cc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3cca je 0x12eb3cd7 */
  if (C.zf) goto L_12eb3cd7;
  /* 12eb3ccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3ccf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3cd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb3cd5 jmp 0x12eb3cb2 */
  goto L_12eb3cb2;
L_12eb3cd7:;
  /* 12eb3cd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3cda movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 12eb3cdd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb3cdf jne 0x12eb3ce9 */
  if (!C.zf) goto L_12eb3ce9;
  /* 12eb3ce1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3ce4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3ce7 jmp 0x12eb3cec */
  goto L_12eb3cec;
L_12eb3ce9:;
  /* 12eb3ce9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_12eb3cec:;
  /* 12eb3cec mov esp, ebp */
  ESP = (EBP);
  /* 12eb3cee pop ebp */
  EBP = (pop32());
  /* 12eb3cef ret  */
  ESPCHK(0x12eb3ca0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013cf0 @ 0x12eb3cf0 (736 bytes, 224 insns) */
void f_12eb3cf0(void) {
  FTRACE(0x12eb3cf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3cf0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3cf1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3cf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3cf6 push esi */
  push32((uint32_t)(ESI));
  /* 12eb3cf7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3cfb je 0x12eb3d1c */
  if (C.zf) goto L_12eb3d1c;
  /* 12eb3cfd push 0x3d */
  push32((uint32_t)(0x3du));
  /* 12eb3cff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3d02 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3d03 call 0x12eb4140 */
  push32(0x12eb3d08u); f_12eb4140();
  /* 12eb3d08 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3d0b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 12eb3d0e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d12 je 0x12eb3d1c */
  if (C.zf) goto L_12eb3d1c;
  /* 12eb3d14 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3d17 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d1a jne 0x12eb3d24 */
  if (!C.zf) goto L_12eb3d24;
L_12eb3d1c:;
  /* 12eb3d1c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3d1f jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3d24:;
  /* 12eb3d24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3d27 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 12eb3d2b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb3d2d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3d2f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 12eb3d30 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 12eb3d33 mov ecx, dword ptr [0x12ebf5ec] */
  ECX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3d39 cmp ecx, dword ptr [0x12ebf5f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12ebf5f0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d3f jne 0x12eb3d55 */
  if (!C.zf) goto L_12eb3d55;
  /* 12eb3d41 mov edx, dword ptr [0x12ebf5ec] */
  EDX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3d47 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3d48 call 0x12eb4050 */
  push32(0x12eb3d4du); f_12eb4050();
  /* 12eb3d4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3d50 mov dword ptr [0x12ebf5ec], eax */
  w32((uint32_t)(0x12ebf5ec), (EAX));
L_12eb3d55:;
  /* 12eb3d55 cmp dword ptr [0x12ebf5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d5c jne 0x12eb3e15 */
  if (!C.zf) goto L_12eb3e15;
  /* 12eb3d62 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d66 je 0x12eb3d87 */
  if (C.zf) goto L_12eb3d87;
  /* 12eb3d68 cmp dword ptr [0x12ebf5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d6f je 0x12eb3d87 */
  if (C.zf) goto L_12eb3d87;
  /* 12eb3d71 call 0x12eb37f0 */
  push32(0x12eb3d76u); f_12eb37f0();
  /* 12eb3d76 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb3d78 je 0x12eb3d82 */
  if (C.zf) goto L_12eb3d82;
  /* 12eb3d7a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3d7d jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3d82:;
  /* 12eb3d82 jmp 0x12eb3e15 */
  goto L_12eb3e15;
L_12eb3d87:;
  /* 12eb3d87 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d8b je 0x12eb3d94 */
  if (C.zf) goto L_12eb3d94;
  /* 12eb3d8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3d8f jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3d94:;
  /* 12eb3d94 cmp dword ptr [0x12ebf5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3d9b jne 0x12eb3dd4 */
  if (!C.zf) goto L_12eb3dd4;
  /* 12eb3d9d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 12eb3da2 push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb3da7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3da9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb3dab call 0x12ea3cf0 */
  push32(0x12eb3db0u); f_12ea3cf0();
  /* 12eb3db0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3db3 mov dword ptr [0x12ebf5ec], eax */
  w32((uint32_t)(0x12ebf5ec), (EAX));
  /* 12eb3db8 cmp dword ptr [0x12ebf5ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3dbf jne 0x12eb3dc9 */
  if (!C.zf) goto L_12eb3dc9;
  /* 12eb3dc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3dc4 jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3dc9:;
  /* 12eb3dc9 mov eax, dword ptr [0x12ebf5ec] */
  EAX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3dce mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_12eb3dd4:;
  /* 12eb3dd4 cmp dword ptr [0x12ebf5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3ddb jne 0x12eb3e15 */
  if (!C.zf) goto L_12eb3e15;
  /* 12eb3ddd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 12eb3de2 push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb3de7 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3de9 push 4 */
  push32((uint32_t)(0x4u));
  /* 12eb3deb call 0x12ea3cf0 */
  push32(0x12eb3df0u); f_12ea3cf0();
  /* 12eb3df0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3df3 mov dword ptr [0x12ebf5f4], eax */
  w32((uint32_t)(0x12ebf5f4), (EAX));
  /* 12eb3df8 cmp dword ptr [0x12ebf5f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ebf5f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3dff jne 0x12eb3e09 */
  if (!C.zf) goto L_12eb3e09;
  /* 12eb3e01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3e04 jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3e09:;
  /* 12eb3e09 mov ecx, dword ptr [0x12ebf5f4] */
  ECX = (r32((uint32_t)(0x12ebf5f4)));
  /* 12eb3e0f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_12eb3e15:;
  /* 12eb3e15 mov edx, dword ptr [0x12ebf5ec] */
  EDX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3e1b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 12eb3e1e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3e21 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3e24 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3e25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3e28 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3e29 call 0x12eb3fd0 */
  push32(0x12eb3e2eu); f_12eb3fd0();
  /* 12eb3e2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3e31 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb3e34 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3e38 jl 0x12eb3ed1 */
  if ((C.sf!=C.of)) goto L_12eb3ed1;
  /* 12eb3e3e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3e41 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3e44 je 0x12eb3ed1 */
  if (C.zf) goto L_12eb3ed1;
  /* 12eb3e4a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3e4e je 0x12eb3ec3 */
  if (C.zf) goto L_12eb3ec3;
  /* 12eb3e50 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3e52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e55 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3e58 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 12eb3e5b push edx */
  push32((uint32_t)(EDX));
  /* 12eb3e5c call 0x12ea4780 */
  push32(0x12eb3e61u); f_12ea4780();
  /* 12eb3e61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3e64 jmp 0x12eb3e6f */
  goto L_12eb3e6f;
L_12eb3e66:;
  /* 12eb3e66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3e6c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eb3e6f:;
  /* 12eb3e6f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e72 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3e75 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3e79 je 0x12eb3e90 */
  if (C.zf) goto L_12eb3e90;
  /* 12eb3e7b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e7e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3e81 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e84 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3e87 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 12eb3e8b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 12eb3e8e jmp 0x12eb3e66 */
  goto L_12eb3e66;
L_12eb3e90:;
  /* 12eb3e90 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 12eb3e95 push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb3e9a push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3e9c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3e9f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12eb3ea2 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3ea3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3ea6 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3ea7 call 0x12ea4180 */
  push32(0x12eb3eacu); f_12ea4180();
  /* 12eb3eac add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3eaf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb3eb2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3eb6 je 0x12eb3ec1 */
  if (C.zf) goto L_12eb3ec1;
  /* 12eb3eb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3ebb mov dword ptr [0x12ebf5ec], edx */
  w32((uint32_t)(0x12ebf5ec), (EDX));
L_12eb3ec1:;
  /* 12eb3ec1 jmp 0x12eb3ecf */
  goto L_12eb3ecf;
L_12eb3ec3:;
  /* 12eb3ec3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3ec6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3ec9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3ecc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_12eb3ecf:;
  /* 12eb3ecf jmp 0x12eb3f44 */
  goto L_12eb3f44;
L_12eb3ed1:;
  /* 12eb3ed1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3ed5 jne 0x12eb3f3d */
  if (!C.zf) goto L_12eb3f3d;
  /* 12eb3ed7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3edb jge 0x12eb3ee5 */
  if ((C.sf==C.of)) goto L_12eb3ee5;
  /* 12eb3edd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3ee0 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb3ee2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_12eb3ee5:;
  /* 12eb3ee5 push 0xce */
  push32((uint32_t)(0xceu));
  /* 12eb3eea push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb3eef push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3ef1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3ef4 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 12eb3efb push edx */
  push32((uint32_t)(EDX));
  /* 12eb3efc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3eff push eax */
  push32((uint32_t)(EAX));
  /* 12eb3f00 call 0x12ea4180 */
  push32(0x12eb3f05u); f_12ea4180();
  /* 12eb3f05 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f08 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb3f0b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3f0f jne 0x12eb3f19 */
  if (!C.zf) goto L_12eb3f19;
  /* 12eb3f11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3f14 jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3f19:;
  /* 12eb3f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3f1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3f22 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 12eb3f25 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb3f28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3f2b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 12eb3f33 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb3f36 mov dword ptr [0x12ebf5ec], eax */
  w32((uint32_t)(0x12ebf5ec), (EAX));
  /* 12eb3f3b jmp 0x12eb3f44 */
  goto L_12eb3f44;
L_12eb3f3d:;
  /* 12eb3f3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb3f3f jmp 0x12eb3fcb */
  goto L_12eb3fcb;
L_12eb3f44:;
  /* 12eb3f44 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3f48 je 0x12eb3fc9 */
  if (C.zf) goto L_12eb3fc9;
  /* 12eb3f4a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 12eb3f4f push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb3f54 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3f56 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3f59 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3f5a call 0x12ea6b20 */
  push32(0x12eb3f5fu); f_12ea6b20();
  /* 12eb3f5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f62 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f65 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3f66 call 0x12ea3cf0 */
  push32(0x12eb3f6bu); f_12ea3cf0();
  /* 12eb3f6b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f6e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 12eb3f71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3f75 je 0x12eb3fc9 */
  if (C.zf) goto L_12eb3fc9;
  /* 12eb3f77 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3f7a push edx */
  push32((uint32_t)(EDX));
  /* 12eb3f7b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3f7e push eax */
  push32((uint32_t)(EAX));
  /* 12eb3f7f call 0x12ea6ca0 */
  push32(0x12eb3f84u); f_12ea6ca0();
  /* 12eb3f84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f87 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 12eb3f8a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3f8d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3f90 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3f92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 12eb3f95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3f98 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 12eb3f9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3f9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3fa1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb3fa4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 12eb3fa7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 12eb3fa9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb3fab not edx */
  EDX = (~(EDX));
  /* 12eb3fad and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 12eb3fb0 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3fb1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3fb4 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3fb5 call dword ptr [0x12ec2294] */
  call_ind((uint32_t)(r32((uint32_t)(0x12ec2294))), 0x12eb3fbbu);
  /* 12eb3fbb push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb3fbd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb3fc0 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3fc1 call 0x12ea4780 */
  push32(0x12eb3fc6u); f_12ea4780();
  /* 12eb3fc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb3fc9:;
  /* 12eb3fc9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb3fcb:;
  /* 12eb3fcb pop esi */
  ESI = (pop32());
  /* 12eb3fcc mov esp, ebp */
  ESP = (EBP);
  /* 12eb3fce pop ebp */
  EBP = (pop32());
  /* 12eb3fcf ret  */
  ESPCHK(0x12eb3cf0u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x12eb3fd0 (124 bytes, 47 insns) */
void f_12eb3fd0(void) {
  FTRACE(0x12eb3fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb3fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb3fd1 mov ebp, esp */
  EBP = (ESP);
  /* 12eb3fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb3fd4 mov eax, dword ptr [0x12ebf5ec] */
  EAX = (r32((uint32_t)(0x12ebf5ec)));
  /* 12eb3fd9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 12eb3fdc jmp 0x12eb3fe7 */
  goto L_12eb3fe7;
L_12eb3fde:;
  /* 12eb3fde mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3fe1 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb3fe4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_12eb3fe7:;
  /* 12eb3fe7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3fea cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb3fed je 0x12eb403a */
  if (C.zf) goto L_12eb403a;
  /* 12eb3fef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb3ff2 push eax */
  push32((uint32_t)(EAX));
  /* 12eb3ff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb3ff6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb3ff8 push edx */
  push32((uint32_t)(EDX));
  /* 12eb3ff9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb3ffc push eax */
  push32((uint32_t)(EAX));
  /* 12eb3ffd call 0x12eb37a0 */
  push32(0x12eb4002u); f_12eb37a0();
  /* 12eb4002 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4005 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 12eb4007 jne 0x12eb4038 */
  if (!C.zf) goto L_12eb4038;
  /* 12eb4009 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb400c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb400e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb4011 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 12eb4015 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb4018 je 0x12eb402a */
  if (C.zf) goto L_12eb402a;
  /* 12eb401a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb401d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb401f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb4022 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 12eb4026 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb4028 jne 0x12eb4038 */
  if (!C.zf) goto L_12eb4038;
L_12eb402a:;
  /* 12eb402a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb402d sub eax, dword ptr [0x12ebf5ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebf5ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb4033 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12eb4036 jmp 0x12eb4048 */
  goto L_12eb4048;
L_12eb4038:;
  /* 12eb4038 jmp 0x12eb3fde */
  goto L_12eb3fde;
L_12eb403a:;
  /* 12eb403a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb403d sub eax, dword ptr [0x12ebf5ec] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12ebf5ec))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb4043 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 12eb4046 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_12eb4048:;
  /* 12eb4048 mov esp, ebp */
  ESP = (EBP);
  /* 12eb404a pop ebp */
  EBP = (pop32());
  /* 12eb404b ret  */
  ESPCHK(0x12eb3fd0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x12eb4050 (238 bytes, 80 insns) */
void f_12eb4050(void) {
  FTRACE(0x12eb4050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb4050 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb4051 mov ebp, esp */
  EBP = (ESP);
  /* 12eb4053 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb4056 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 12eb405d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb4060 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb4063 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb4067 jne 0x12eb4070 */
  if (!C.zf) goto L_12eb4070;
  /* 12eb4069 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb406b jmp 0x12eb413a */
  goto L_12eb413a;
L_12eb4070:;
  /* 12eb4070 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb4073 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb4075 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb4078 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb407b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 12eb407e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb4080 je 0x12eb408d */
  if (C.zf) goto L_12eb408d;
  /* 12eb4082 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb4085 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4088 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 12eb408b jmp 0x12eb4070 */
  goto L_12eb4070;
L_12eb408d:;
  /* 12eb408d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 12eb4092 push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb4097 push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb4099 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 12eb409c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 12eb40a3 push eax */
  push32((uint32_t)(EAX));
  /* 12eb40a4 call 0x12ea3cf0 */
  push32(0x12eb40a9u); f_12ea3cf0();
  /* 12eb40a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb40ac mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 12eb40af mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb40b2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 12eb40b5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb40b9 jne 0x12eb40c5 */
  if (!C.zf) goto L_12eb40c5;
  /* 12eb40bb push 9 */
  push32((uint32_t)(0x9u));
  /* 12eb40bd call 0x12ea2c60 */
  push32(0x12eb40c2u); f_12ea2c60();
  /* 12eb40c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb40c5:;
  /* 12eb40c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb40c8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_12eb40cb:;
  /* 12eb40cb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb40ce cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb40d1 je 0x12eb412e */
  if (C.zf) goto L_12eb412e;
  /* 12eb40d3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 12eb40d8 push 0x12ebbae8 */
  push32((uint32_t)(0x12ebbae8u));
  /* 12eb40dd push 2 */
  push32((uint32_t)(0x2u));
  /* 12eb40df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb40e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 12eb40e4 push edx */
  push32((uint32_t)(EDX));
  /* 12eb40e5 call 0x12ea6b20 */
  push32(0x12eb40eau); f_12ea6b20();
  /* 12eb40ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb40ed add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb40f0 push eax */
  push32((uint32_t)(EAX));
  /* 12eb40f1 call 0x12ea3cf0 */
  push32(0x12eb40f6u); f_12ea3cf0();
  /* 12eb40f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb40f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb40fc mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 12eb40fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb4101 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb4104 je 0x12eb411a */
  if (C.zf) goto L_12eb411a;
  /* 12eb4106 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb4109 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 12eb410b push ecx */
  push32((uint32_t)(ECX));
  /* 12eb410c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb410f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 12eb4111 push eax */
  push32((uint32_t)(EAX));
  /* 12eb4112 call 0x12ea6ca0 */
  push32(0x12eb4117u); f_12ea6ca0();
  /* 12eb4117 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_12eb411a:;
  /* 12eb411a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 12eb411d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4120 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 12eb4123 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb4126 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4129 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 12eb412c jmp 0x12eb40cb */
  goto L_12eb40cb;
L_12eb412e:;
  /* 12eb412e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 12eb4131 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 12eb4137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_12eb413a:;
  /* 12eb413a mov esp, ebp */
  ESP = (EBP);
  /* 12eb413c pop ebp */
  EBP = (pop32());
  /* 12eb413d ret  */
  ESPCHK(0x12eb4050u, _esp0);
  ESP += 4; return;
}

/* FUN_10014140 @ 0x12eb4140 (237 bytes, 81 insns) */
void f_12eb4140(void) {
  FTRACE(0x12eb4140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb4140 push ebp */
  push32((uint32_t)(EBP));
  /* 12eb4141 mov ebp, esp */
  EBP = (ESP);
  /* 12eb4143 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb4144 cmp dword ptr [0x12ec0d2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12ec0d2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb414b jne 0x12eb4162 */
  if (!C.zf) goto L_12eb4162;
  /* 12eb414d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 12eb4150 push eax */
  push32((uint32_t)(EAX));
  /* 12eb4151 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb4154 push ecx */
  push32((uint32_t)(ECX));
  /* 12eb4155 call 0x12eb4240 */
  push32(0x12eb415au); f_12eb4240();
  /* 12eb415a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb415d jmp 0x12eb4229 */
  goto L_12eb4229;
L_12eb4162:;
  /* 12eb4162 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eb4164 call 0x12ea76f0 */
  push32(0x12eb4169u); f_12ea76f0();
  /* 12eb4169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb416c jmp 0x12eb4177 */
  goto L_12eb4177;
L_12eb416e:;
  /* 12eb416e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb4171 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4174 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_12eb4177:;
  /* 12eb4177 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb417a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 12eb417e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 12eb4182 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb4185 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb418b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 12eb418d je 0x12eb420b */
  if (C.zf) goto L_12eb420b;
  /* 12eb418f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb4192 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb4197 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb4199 mov cl, byte ptr [eax + 0x12ec0e41] */
  CL = (r8((uint32_t)(EAX + 0x12ec0e41)));
  /* 12eb419f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb41a2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb41a4 je 0x12eb41f6 */
  if (C.zf) goto L_12eb41f6;
  /* 12eb41a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb41a9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb41ac mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 12eb41af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb41b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb41b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb41b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 12eb41b8 jne 0x12eb41c8 */
  if (!C.zf) goto L_12eb41c8;
  /* 12eb41ba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eb41bc call 0x12ea7790 */
  push32(0x12eb41c1u); f_12ea7790();
  /* 12eb41c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb41c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb41c6 jmp 0x12eb4229 */
  goto L_12eb4229;
L_12eb41c8:;
  /* 12eb41c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb41cb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb41d1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 12eb41d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb41d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb41d9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 12eb41db or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 12eb41dd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb41e0 jne 0x12eb41f4 */
  if (!C.zf) goto L_12eb41f4;
  /* 12eb41e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eb41e4 call 0x12ea7790 */
  push32(0x12eb41e9u); f_12ea7790();
  /* 12eb41e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb41ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb41ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 12eb41f2 jmp 0x12eb4229 */
  goto L_12eb4229;
L_12eb41f4:;
  /* 12eb41f4 jmp 0x12eb4206 */
  goto L_12eb4206;
L_12eb41f6:;
  /* 12eb41f6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb41f9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 12eb41ff cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb4202 jne 0x12eb4206 */
  if (!C.zf) goto L_12eb4206;
  /* 12eb4204 jmp 0x12eb420b */
  goto L_12eb420b;
L_12eb4206:;
  /* 12eb4206 jmp 0x12eb416e */
  goto L_12eb416e;
L_12eb420b:;
  /* 12eb420b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 12eb420d call 0x12ea7790 */
  push32(0x12eb4212u); f_12ea7790();
  /* 12eb4212 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4215 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 12eb4218 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb421d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 12eb4220 jne 0x12eb4227 */
  if (!C.zf) goto L_12eb4227;
  /* 12eb4222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 12eb4225 jmp 0x12eb4229 */
  goto L_12eb4229;
L_12eb4227:;
  /* 12eb4227 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_12eb4229:;
  /* 12eb4229 mov esp, ebp */
  ESP = (EBP);
  /* 12eb422b pop ebp */
  EBP = (pop32());
  /* 12eb422c ret  */
  ESPCHK(0x12eb4140u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x12eb4240 (193 bytes, 87 insns) */
void f_12eb4240(void) {
  FTRACE(0x12eb4240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb4240 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb4242 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 12eb4246 push ebx */
  push32((uint32_t)(EBX));
  /* 12eb4247 mov ebx, eax */
  EBX = (EAX);
  /* 12eb4249 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 12eb424c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 12eb4250 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12eb4256 je 0x12eb426b */
  if (C.zf) goto L_12eb426b;
L_12eb4258:;
  /* 12eb4258 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 12eb425a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 12eb425b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb425d je 0x12eb4230 */
  if (C.zf) { jmp_ind(0x12eb4230u); return; }
  /* 12eb425f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 12eb4261 je 0x12eb42b4 */
  if (C.zf) goto L_12eb42b4;
  /* 12eb4263 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 12eb4269 jne 0x12eb4258 */
  if (!C.zf) goto L_12eb4258;
L_12eb426b:;
  /* 12eb426b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 12eb426d push edi */
  push32((uint32_t)(EDI));
  /* 12eb426e mov eax, ebx */
  EAX = (EBX);
  /* 12eb4270 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 12eb4273 push esi */
  push32((uint32_t)(ESI));
  /* 12eb4274 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_12eb4276:;
  /* 12eb4276 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 12eb4278 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 12eb427d mov eax, ecx */
  EAX = (ECX);
  /* 12eb427f mov esi, edi */
  ESI = (EDI);
  /* 12eb4281 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 12eb4283 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4285 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4287 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 12eb428a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 12eb428d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 12eb428f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 12eb4291 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 12eb4294 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 12eb429a jne 0x12eb42b8 */
  if (!C.zf) goto L_12eb42b8;
  /* 12eb429c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb42a1 je 0x12eb4276 */
  if (C.zf) goto L_12eb4276;
  /* 12eb42a3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 12eb42a8 jne 0x12eb42b2 */
  if (!C.zf) goto L_12eb42b2;
  /* 12eb42aa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 12eb42b0 jne 0x12eb4276 */
  if (!C.zf) goto L_12eb4276;
L_12eb42b2:;
  /* 12eb42b2 pop esi */
  ESI = (pop32());
  /* 12eb42b3 pop edi */
  EDI = (pop32());
L_12eb42b4:;
  /* 12eb42b4 pop ebx */
  EBX = (pop32());
  /* 12eb42b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 12eb42b7 ret  */
  ESPCHK(0x12eb4240u, _esp0);
  ESP += 4; return;
L_12eb42b8:;
  /* 12eb42b8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 12eb42bb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb42bd je 0x12eb42f5 */
  if (C.zf) goto L_12eb42f5;
  /* 12eb42bf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12eb42c1 je 0x12eb42b2 */
  if (C.zf) goto L_12eb42b2;
  /* 12eb42c3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb42c5 je 0x12eb42ee */
  if (C.zf) goto L_12eb42ee;
  /* 12eb42c7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12eb42c9 je 0x12eb42b2 */
  if (C.zf) goto L_12eb42b2;
  /* 12eb42cb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 12eb42ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb42d0 je 0x12eb42e7 */
  if (C.zf) goto L_12eb42e7;
  /* 12eb42d2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 12eb42d4 je 0x12eb42b2 */
  if (C.zf) goto L_12eb42b2;
  /* 12eb42d6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 12eb42d8 je 0x12eb42e0 */
  if (C.zf) goto L_12eb42e0;
  /* 12eb42da test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 12eb42dc je 0x12eb42b2 */
  if (C.zf) goto L_12eb42b2;
  /* 12eb42de jmp 0x12eb4276 */
  goto L_12eb4276;
L_12eb42e0:;
  /* 12eb42e0 pop esi */
  ESI = (pop32());
  /* 12eb42e1 pop edi */
  EDI = (pop32());
  /* 12eb42e2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 12eb42e5 pop ebx */
  EBX = (pop32());
  /* 12eb42e6 ret  */
  ESPCHK(0x12eb4240u, _esp0);
  ESP += 4; return;
L_12eb42e7:;
  /* 12eb42e7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 12eb42ea pop esi */
  ESI = (pop32());
  /* 12eb42eb pop edi */
  EDI = (pop32());
  /* 12eb42ec pop ebx */
  EBX = (pop32());
  /* 12eb42ed ret  */
  ESPCHK(0x12eb4240u, _esp0);
  ESP += 4; return;
L_12eb42ee:;
  /* 12eb42ee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 12eb42f1 pop esi */
  ESI = (pop32());
  /* 12eb42f2 pop edi */
  EDI = (pop32());
  /* 12eb42f3 pop ebx */
  EBX = (pop32());
  /* 12eb42f4 ret  */
  ESPCHK(0x12eb4240u, _esp0);
  ESP += 4; return;
L_12eb42f5:;
  /* 12eb42f5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 12eb42f8 pop esi */
  ESI = (pop32());
  /* 12eb42f9 pop edi */
  EDI = (pop32());
  /* 12eb42fa pop ebx */
  EBX = (pop32());
  /* 12eb42fb ret  */
  ESPCHK(0x12eb4240u, _esp0);
  ESP += 4; return;
  /* 12eb42fc jmp dword ptr [0x12ec2314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ec2314)))); return;
}

/* RtlUnwind @ 0x12eb444c (6 bytes, 1 insns) */
void f_12eb444c(void) {
  FTRACE(0x12eb444cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 12eb444c jmp dword ptr [0x12ec22d0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12ec22d0)))); return;
}

