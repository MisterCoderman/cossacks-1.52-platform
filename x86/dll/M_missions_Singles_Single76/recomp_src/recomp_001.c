#include "recomp.h"

/* FUN_10006953 @ 0x11ca6953 (11 bytes, 5 insns) */
void f_11ca6953(void) {
  FTRACE(0x11ca6953u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6953 push 9 */
  push32((uint32_t)(0x9u));
  /* 11ca6955 call 0x11ca2bc1 */
  push32(0x11ca695au); f_11ca2bc1();
  /* 11ca695a pop ecx */
  ECX = (pop32());
  /* 11ca695b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11ca695d ret  */
  ESPCHK(0x11ca6953u, _esp0);
  ESP += 4; return;
}

/* FUN_100069a9 @ 0x11ca69a9 (151 bytes, 62 insns) */
void f_11ca69a9(void) {
  FTRACE(0x11ca69a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca69a9 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca69aa mov ebp, esp */
  EBP = (ESP);
  /* 11ca69ac cmp dword ptr [0x11cab09c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cab09c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca69b3 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca69b4 push esi */
  push32((uint32_t)(ESI));
  /* 11ca69b5 jne 0x11ca69c6 */
  if (!C.zf) goto L_11ca69c6;
  /* 11ca69b7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11ca69ba push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11ca69bd call 0x11ca3e90 */
  push32(0x11ca69c2u); f_11ca3e90();
  /* 11ca69c2 pop ecx */
  ECX = (pop32());
  /* 11ca69c3 pop ecx */
  ECX = (pop32());
  /* 11ca69c4 jmp 0x11ca6a3c */
  goto L_11ca6a3c;
L_11ca69c6:;
  /* 11ca69c6 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca69c8 call 0x11ca2b60 */
  push32(0x11ca69cdu); f_11ca2b60();
  /* 11ca69cd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca69d0 pop ecx */
  ECX = (pop32());
L_11ca69d1:;
  /* 11ca69d1 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11ca69d5 test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11ca69d8 je 0x11ca6a24 */
  if (C.zf) goto L_11ca6a24;
  /* 11ca69da movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11ca69dd test byte ptr [eax + 0x11cab1a1], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11cab1a1)))&(0x4u); fl_logic(_r,8); }
  /* 11ca69e4 je 0x11ca6a00 */
  if (C.zf) goto L_11ca6a00;
  /* 11ca69e6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11ca69e9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca69ea test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11ca69ec je 0x11ca6a0b */
  if (C.zf) goto L_11ca6a0b;
  /* 11ca69ee movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11ca69f1 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11ca69f4 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ca69f7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca69f9 cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca69fc je 0x11ca6a17 */
  if (C.zf) goto L_11ca6a17;
  /* 11ca69fe jmp 0x11ca6a08 */
  goto L_11ca6a08;
L_11ca6a00:;
  /* 11ca6a00 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11ca6a03 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6a06 je 0x11ca6a24 */
  if (C.zf) goto L_11ca6a24;
L_11ca6a08:;
  /* 11ca6a08 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6a09 jmp 0x11ca69d1 */
  goto L_11ca69d1;
L_11ca6a0b:;
  /* 11ca6a0b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca6a0d call 0x11ca2bc1 */
  push32(0x11ca6a12u); f_11ca2bc1();
  /* 11ca6a12 pop ecx */
  ECX = (pop32());
  /* 11ca6a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6a15 jmp 0x11ca6a3c */
  goto L_11ca6a3c;
L_11ca6a17:;
  /* 11ca6a17 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca6a19 call 0x11ca2bc1 */
  push32(0x11ca6a1eu); f_11ca2bc1();
  /* 11ca6a1e pop ecx */
  ECX = (pop32());
  /* 11ca6a1f lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11ca6a22 jmp 0x11ca6a3c */
  goto L_11ca6a3c;
L_11ca6a24:;
  /* 11ca6a24 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11ca6a26 call 0x11ca2bc1 */
  push32(0x11ca6a2bu); f_11ca2bc1();
  /* 11ca6a2b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6a2e pop ecx */
  ECX = (pop32());
  /* 11ca6a2f movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11ca6a32 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6a34 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca6a36 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6a38 not eax */
  EAX = (~(EAX));
  /* 11ca6a3a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11ca6a3c:;
  /* 11ca6a3c pop esi */
  ESI = (pop32());
  /* 11ca6a3d pop ebx */
  EBX = (pop32());
  /* 11ca6a3e pop ebp */
  EBP = (pop32());
  /* 11ca6a3f ret  */
  ESPCHK(0x11ca69a9u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a40 @ 0x11ca6a40 (43 bytes, 23 insns) */
void f_11ca6a40(void) {
  FTRACE(0x11ca6a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6a40 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6a41 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11ca6a45 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11ca6a47 je 0x11ca6a67 */
  if (C.zf) goto L_11ca6a67;
  /* 11ca6a49 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6a4a call 0x11ca34b0 */
  push32(0x11ca6a4fu); f_11ca34b0();
  /* 11ca6a4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11ca6a50 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6a51 call 0x11ca3281 */
  push32(0x11ca6a56u); f_11ca3281();
  /* 11ca6a56 pop ecx */
  ECX = (pop32());
  /* 11ca6a57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6a59 pop ecx */
  ECX = (pop32());
  /* 11ca6a5a je 0x11ca6a67 */
  if (C.zf) goto L_11ca6a67;
  /* 11ca6a5c push esi */
  push32((uint32_t)(ESI));
  /* 11ca6a5d push eax */
  push32((uint32_t)(EAX));
  /* 11ca6a5e call 0x11ca33c0 */
  push32(0x11ca6a63u); f_11ca33c0();
  /* 11ca6a63 pop ecx */
  ECX = (pop32());
  /* 11ca6a64 pop ecx */
  ECX = (pop32());
  /* 11ca6a65 pop esi */
  ESI = (pop32());
  /* 11ca6a66 ret  */
  ESPCHK(0x11ca6a40u, _esp0);
  ESP += 4; return;
L_11ca6a67:;
  /* 11ca6a67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6a69 pop esi */
  ESI = (pop32());
  /* 11ca6a6a ret  */
  ESPCHK(0x11ca6a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006a70 @ 0x11ca6a70 (208 bytes, 85 insns) */
void f_11ca6a70(void) {
  FTRACE(0x11ca6a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6a70 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6a71 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6a73 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6a74 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6a75 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6a76 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6a79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6a7c lea eax, [0x11caafb0] */
  EAX = ((uint32_t)(0x11caafb0));
  /* 11ca6a82 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6a86 jne 0x11ca6ac3 */
  if (!C.zf) goto L_11ca6ac3;
  /* 11ca6a88 mov al, 0xff */
  AL = (0xffu);
  /* 11ca6a8a mov edi, edi */
  EDI = (EDI);
L_11ca6a8c:;
  /* 11ca6a8c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6a8e je 0x11ca6abe */
  if (C.zf) goto L_11ca6abe;
  /* 11ca6a90 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca6a92 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6a93 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11ca6a95 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca6a96 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6a98 je 0x11ca6a8c */
  if (C.zf) goto L_11ca6a8c;
  /* 11ca6a9a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca6a9c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6a9e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca6aa0 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ca6aa3 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ca6aa5 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ca6aa7 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11ca6aa9 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca6aab cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6aad sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca6aaf and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11ca6ab2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ca6ab4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ca6ab6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6ab8 je 0x11ca6a8c */
  if (C.zf) goto L_11ca6a8c;
  /* 11ca6aba sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ca6abc sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11ca6abe:;
  /* 11ca6abe movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11ca6ac1 jmp 0x11ca6b3b */
  goto L_11ca6b3b;
L_11ca6ac3:;
  /* 11ca6ac3 lock inc dword ptr [0x11cab068] */
  x86_unimpl("lock inc @ 0x11ca6ac3");
  /* 11ca6aca cmp dword ptr [0x11cab064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cab064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6ad1 jg 0x11ca6ad7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca6ad7;
  /* 11ca6ad3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca6ad5 jmp 0x11ca6aec */
  goto L_11ca6aec;
L_11ca6ad7:;
  /* 11ca6ad7 lock dec dword ptr [0x11cab068] */
  x86_unimpl("lock dec @ 0x11ca6ad7");
  /* 11ca6ade push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca6ae0 call 0x11ca2b60 */
  push32(0x11ca6ae5u); f_11ca2b60();
  /* 11ca6ae5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11ca6aec:;
  /* 11ca6aec mov eax, 0xff */
  EAX = (0xffu);
  /* 11ca6af1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca6af3 nop  */
  /* nop */
L_11ca6af4:;
  /* 11ca6af4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6af6 je 0x11ca6b1f */
  if (C.zf) goto L_11ca6b1f;
  /* 11ca6af8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca6afa inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6afb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ca6afd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca6afe cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b00 je 0x11ca6af4 */
  if (C.zf) goto L_11ca6af4;
  /* 11ca6b02 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6b03 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6b04 call 0x11ca6d35 */
  push32(0x11ca6b09u); f_11ca6d35();
  /* 11ca6b09 mov ebx, eax */
  EBX = (EAX);
  /* 11ca6b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6b0e call 0x11ca6d35 */
  push32(0x11ca6b13u); f_11ca6d35();
  /* 11ca6b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6b16 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b18 je 0x11ca6af4 */
  if (C.zf) goto L_11ca6af4;
  /* 11ca6b1a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ca6b1c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11ca6b1f:;
  /* 11ca6b1f mov ebx, eax */
  EBX = (EAX);
  /* 11ca6b21 pop eax */
  EAX = (pop32());
  /* 11ca6b22 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6b24 jne 0x11ca6b2f */
  if (!C.zf) goto L_11ca6b2f;
  /* 11ca6b26 lock dec dword ptr [0x11cab068] */
  x86_unimpl("lock dec @ 0x11ca6b26");
  /* 11ca6b2d jmp 0x11ca6b39 */
  goto L_11ca6b39;
L_11ca6b2f:;
  /* 11ca6b2f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca6b31 call 0x11ca2bc1 */
  push32(0x11ca6b36u); f_11ca2bc1();
  /* 11ca6b36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11ca6b39:;
  /* 11ca6b39 mov eax, ebx */
  EAX = (EBX);
L_11ca6b3b:;
  /* 11ca6b3b pop ebx */
  EBX = (pop32());
  /* 11ca6b3c pop esi */
  ESI = (pop32());
  /* 11ca6b3d pop edi */
  EDI = (pop32());
  /* 11ca6b3e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6b3f ret  */
  ESPCHK(0x11ca6a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b40 @ 0x11ca6b40 (257 bytes, 103 insns) */
void f_11ca6b40(void) {
  FTRACE(0x11ca6b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6b40 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6b41 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6b43 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6b44 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6b45 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6b46 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ca6b49 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca6b4b je 0x11ca6c3a */
  if (C.zf) goto L_11ca6c3a;
  /* 11ca6b51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6b54 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11ca6b57 lea eax, [0x11caafb0] */
  EAX = ((uint32_t)(0x11caafb0));
  /* 11ca6b5d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6b61 jne 0x11ca6bb1 */
  if (!C.zf) goto L_11ca6bb1;
  /* 11ca6b63 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11ca6b65 mov bl, 0x5a */
  BL = (0x5au);
  /* 11ca6b67 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11ca6b69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11ca6b6c:;
  /* 11ca6b6c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11ca6b6e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11ca6b70 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11ca6b72 je 0x11ca6b95 */
  if (C.zf) goto L_11ca6b95;
  /* 11ca6b74 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11ca6b76 je 0x11ca6b95 */
  if (C.zf) goto L_11ca6b95;
  /* 11ca6b78 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6b79 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca6b7a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b7c jb 0x11ca6b84 */
  if (C.cf) goto L_11ca6b84;
  /* 11ca6b7e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b80 ja 0x11ca6b84 */
  if ((!C.cf&&!C.zf)) goto L_11ca6b84;
  /* 11ca6b82 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11ca6b84:;
  /* 11ca6b84 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b86 jb 0x11ca6b8e */
  if (C.cf) goto L_11ca6b8e;
  /* 11ca6b88 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b8a ja 0x11ca6b8e */
  if ((!C.cf&&!C.zf)) goto L_11ca6b8e;
  /* 11ca6b8c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11ca6b8e:;
  /* 11ca6b8e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b90 jne 0x11ca6b9f */
  if (!C.zf) goto L_11ca6b9f;
  /* 11ca6b92 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca6b93 jne 0x11ca6b6c */
  if (!C.zf) goto L_11ca6b6c;
L_11ca6b95:;
  /* 11ca6b95 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca6b97 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11ca6b99 je 0x11ca6c3a */
  if (C.zf) goto L_11ca6c3a;
L_11ca6b9f:;
  /* 11ca6b9f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ca6ba4 jb 0x11ca6c3a */
  if (C.cf) goto L_11ca6c3a;
  /* 11ca6baa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11ca6bac jmp 0x11ca6c3a */
  goto L_11ca6c3a;
L_11ca6bb1:;
  /* 11ca6bb1 lock inc dword ptr [0x11cab068] */
  x86_unimpl("lock inc @ 0x11ca6bb1");
  /* 11ca6bb8 cmp dword ptr [0x11cab064], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11cab064))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6bbf jg 0x11ca6bc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca6bc5;
  /* 11ca6bc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca6bc3 jmp 0x11ca6bde */
  goto L_11ca6bde;
L_11ca6bc5:;
  /* 11ca6bc5 lock dec dword ptr [0x11cab068] */
  x86_unimpl("lock dec @ 0x11ca6bc5");
  /* 11ca6bcc mov ebx, ecx */
  EBX = (ECX);
  /* 11ca6bce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca6bd0 call 0x11ca2b60 */
  push32(0x11ca6bd5u); f_11ca2b60();
  /* 11ca6bd5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11ca6bdc mov ecx, ebx */
  ECX = (EBX);
L_11ca6bde:;
  /* 11ca6bde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6be0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca6be2 mov edi, edi */
  EDI = (EDI);
L_11ca6be4:;
  /* 11ca6be4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11ca6be6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6be8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11ca6bea je 0x11ca6c0f */
  if (C.zf) goto L_11ca6c0f;
  /* 11ca6bec or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11ca6bee je 0x11ca6c0f */
  if (C.zf) goto L_11ca6c0f;
  /* 11ca6bf0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11ca6bf1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11ca6bf2 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca6bf3 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6bf4 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6bf5 call 0x11ca6d35 */
  push32(0x11ca6bfau); f_11ca6d35();
  /* 11ca6bfa mov ebx, eax */
  EBX = (EAX);
  /* 11ca6bfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6bff call 0x11ca6d35 */
  push32(0x11ca6c04u); f_11ca6d35();
  /* 11ca6c04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6c07 pop ecx */
  ECX = (pop32());
  /* 11ca6c08 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6c0a jne 0x11ca6c15 */
  if (!C.zf) goto L_11ca6c15;
  /* 11ca6c0c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11ca6c0d jne 0x11ca6be4 */
  if (!C.zf) goto L_11ca6be4;
L_11ca6c0f:;
  /* 11ca6c0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ca6c11 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6c13 je 0x11ca6c1e */
  if (C.zf) goto L_11ca6c1e;
L_11ca6c15:;
  /* 11ca6c15 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11ca6c1a jb 0x11ca6c1e */
  if (C.cf) goto L_11ca6c1e;
  /* 11ca6c1c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11ca6c1e:;
  /* 11ca6c1e pop eax */
  EAX = (pop32());
  /* 11ca6c1f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ca6c21 jne 0x11ca6c2c */
  if (!C.zf) goto L_11ca6c2c;
  /* 11ca6c23 lock dec dword ptr [0x11cab068] */
  x86_unimpl("lock dec @ 0x11ca6c23");
  /* 11ca6c2a jmp 0x11ca6c3a */
  goto L_11ca6c3a;
L_11ca6c2c:;
  /* 11ca6c2c mov ebx, ecx */
  EBX = (ECX);
  /* 11ca6c2e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ca6c30 call 0x11ca2bc1 */
  push32(0x11ca6c35u); f_11ca2bc1();
  /* 11ca6c35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6c38 mov ecx, ebx */
  ECX = (EBX);
L_11ca6c3a:;
  /* 11ca6c3a mov eax, ecx */
  EAX = (ECX);
  /* 11ca6c3c pop ebx */
  EBX = (pop32());
  /* 11ca6c3d pop esi */
  ESI = (pop32());
  /* 11ca6c3e pop edi */
  EDI = (pop32());
  /* 11ca6c3f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6c40 ret  */
  ESPCHK(0x11ca6b40u, _esp0);
  ESP += 4; return;
}

/* FUN_10006d35 @ 0x11ca6d35 (203 bytes, 78 insns) */
void f_11ca6d35(void) {
  FTRACE(0x11ca6d35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6d35 push ebp */
  push32((uint32_t)(EBP));
  /* 11ca6d36 mov ebp, esp */
  EBP = (ESP);
  /* 11ca6d38 push ecx */
  push32((uint32_t)(ECX));
  /* 11ca6d39 cmp dword ptr [0x11caafb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11caafb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6d40 push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6d41 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6d42 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6d43 jne 0x11ca6d62 */
  if (!C.zf) goto L_11ca6d62;
  /* 11ca6d45 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6d48 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6d4b jl 0x11ca6dfb */
  if ((C.sf!=C.of)) goto L_11ca6dfb;
  /* 11ca6d51 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6d54 jg 0x11ca6dfb */
  if ((!C.zf&&C.sf==C.of)) goto L_11ca6dfb;
  /* 11ca6d5a add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6d5d jmp 0x11ca6dfb */
  goto L_11ca6dfb;
L_11ca6d62:;
  /* 11ca6d62 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ca6d65 mov edi, 0x100 */
  EDI = (0x100u);
  /* 11ca6d6a push 1 */
  push32((uint32_t)(0x1u));
  /* 11ca6d6c cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6d6e pop esi */
  ESI = (pop32());
  /* 11ca6d6f jge 0x11ca6d96 */
  if ((C.sf==C.of)) goto L_11ca6d96;
  /* 11ca6d71 cmp dword ptr [0x11caa9f4], esi */
  { uint32_t _a=(r32((uint32_t)(0x11caa9f4))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6d77 jle 0x11ca6d84 */
  if ((C.zf||C.sf!=C.of)) goto L_11ca6d84;
  /* 11ca6d79 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6d7a push ebx */
  push32((uint32_t)(EBX));
  /* 11ca6d7b call 0x11ca5c72 */
  push32(0x11ca6d80u); f_11ca5c72();
  /* 11ca6d80 pop ecx */
  ECX = (pop32());
  /* 11ca6d81 pop ecx */
  ECX = (pop32());
  /* 11ca6d82 jmp 0x11ca6d8e */
  goto L_11ca6d8e;
L_11ca6d84:;
  /* 11ca6d84 mov eax, dword ptr [0x11caa7e8] */
  EAX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca6d89 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11ca6d8c and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11ca6d8e:;
  /* 11ca6d8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6d90 jne 0x11ca6d96 */
  if (!C.zf) goto L_11ca6d96;
L_11ca6d92:;
  /* 11ca6d92 mov eax, ebx */
  EAX = (EBX);
  /* 11ca6d94 jmp 0x11ca6dfb */
  goto L_11ca6dfb;
L_11ca6d96:;
  /* 11ca6d96 mov edx, dword ptr [0x11caa7e8] */
  EDX = (r32((uint32_t)(0x11caa7e8)));
  /* 11ca6d9c mov eax, ebx */
  EAX = (EBX);
  /* 11ca6d9e sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca6da1 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11ca6da4 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11ca6da9 je 0x11ca6dba */
  if (C.zf) goto L_11ca6dba;
  /* 11ca6dab and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11ca6daf push 2 */
  push32((uint32_t)(0x2u));
  /* 11ca6db1 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11ca6db4 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11ca6db7 pop eax */
  EAX = (pop32());
  /* 11ca6db8 jmp 0x11ca6dc3 */
  goto L_11ca6dc3;
L_11ca6dba:;
  /* 11ca6dba and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11ca6dbe mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11ca6dc1 mov eax, esi */
  EAX = (ESI);
L_11ca6dc3:;
  /* 11ca6dc3 push esi */
  push32((uint32_t)(ESI));
  /* 11ca6dc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ca6dc6 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ca6dc9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ca6dcb push ecx */
  push32((uint32_t)(ECX));
  /* 11ca6dcc push eax */
  push32((uint32_t)(EAX));
  /* 11ca6dcd lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11ca6dd0 push eax */
  push32((uint32_t)(EAX));
  /* 11ca6dd1 push edi */
  push32((uint32_t)(EDI));
  /* 11ca6dd2 push dword ptr [0x11caafb8] */
  push32((uint32_t)(r32((uint32_t)(0x11caafb8))));
  /* 11ca6dd8 call 0x11ca57c1 */
  push32(0x11ca6dddu); f_11ca57c1();
  /* 11ca6ddd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ca6de0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ca6de2 je 0x11ca6d92 */
  if (C.zf) goto L_11ca6d92;
  /* 11ca6de4 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ca6de6 jne 0x11ca6dee */
  if (!C.zf) goto L_11ca6dee;
  /* 11ca6de8 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ca6dec jmp 0x11ca6dfb */
  goto L_11ca6dfb;
L_11ca6dee:;
  /* 11ca6dee movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11ca6df2 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11ca6df6 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11ca6df9 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11ca6dfb:;
  /* 11ca6dfb pop edi */
  EDI = (pop32());
  /* 11ca6dfc pop esi */
  ESI = (pop32());
  /* 11ca6dfd pop ebx */
  EBX = (pop32());
  /* 11ca6dfe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11ca6dff ret  */
  ESPCHK(0x11ca6d35u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11ca6e00 (6 bytes, 1 insns) */
void f_11ca6e00(void) {
  FTRACE(0x11ca6e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ca6e00 jmp dword ptr [0x11ca7038] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11ca7038)))); return;
}

