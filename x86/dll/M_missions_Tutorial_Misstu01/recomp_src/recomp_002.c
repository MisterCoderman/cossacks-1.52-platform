#include "recomp.h"

/* __strcats @ 0x122df8b0 (79 bytes, 28 insns) */
void f_122df8b0(void) {
  FTRACE(0x122df8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122df8b1 mov ebp, esp */
  EBP = (ESP);
  /* 122df8b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df8b6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 122df8b9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122df8bc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122df8c3 jmp 0x122df8ce */
  goto L_122df8ce;
L_122df8c5:;
  /* 122df8c5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122df8c8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df8cb mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122df8ce:;
  /* 122df8ce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122df8d1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df8d4 jge 0x122df8f4 */
  if ((C.sf==C.of)) goto L_122df8f4;
  /* 122df8d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df8d9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df8dc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122df8df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df8e2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 122df8e5 push edx */
  push32((uint32_t)(EDX));
  /* 122df8e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df8e9 push eax */
  push32((uint32_t)(EAX));
  /* 122df8ea call 0x122da140 */
  push32(0x122df8efu); f_122da140();
  /* 122df8ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df8f2 jmp 0x122df8c5 */
  goto L_122df8c5;
L_122df8f4:;
  /* 122df8f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122df8fb mov esp, ebp */
  ESP = (EBP);
  /* 122df8fd pop ebp */
  EBP = (pop32());
  /* 122df8fe ret  */
  ESPCHK(0x122df8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f900 @ 0x122df900 (349 bytes, 122 insns) */
void f_122df900(void) {
  FTRACE(0x122df900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122df900 push ebp */
  push32((uint32_t)(EBP));
  /* 122df901 mov ebp, esp */
  EBP = (ESP);
  /* 122df903 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122df906 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 122df90b push 0 */
  push32((uint32_t)(0x0u));
  /* 122df90d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df910 push eax */
  push32((uint32_t)(EAX));
  /* 122df911 call 0x122db8a0 */
  push32(0x122df916u); f_122db8a0();
  /* 122df916 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df919 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df91c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122df91f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122df921 jne 0x122df92a */
  if (!C.zf) goto L_122df92a;
  /* 122df923 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df925 jmp 0x122dfa59 */
  goto L_122dfa59;
L_122df92a:;
  /* 122df92a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df92d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122df930 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df933 jne 0x122df960 */
  if (!C.zf) goto L_122df960;
  /* 122df935 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df938 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122df93c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122df93e je 0x122df960 */
  if (C.zf) goto L_122df960;
  /* 122df940 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df943 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df946 push ecx */
  push32((uint32_t)(ECX));
  /* 122df947 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df94a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df950 push edx */
  push32((uint32_t)(EDX));
  /* 122df951 call 0x122da130 */
  push32(0x122df956u); f_122da130();
  /* 122df956 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122df95b jmp 0x122dfa59 */
  goto L_122dfa59;
L_122df960:;
  /* 122df960 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122df967 jmp 0x122df972 */
  goto L_122df972;
L_122df969:;
  /* 122df969 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122df96c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df96f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122df972:;
  /* 122df972 push 0x122fda00 */
  push32((uint32_t)(0x122fda00u));
  /* 122df977 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df97a push ecx */
  push32((uint32_t)(ECX));
  /* 122df97b call 0x122e1ab0 */
  push32(0x122df980u); f_122e1ab0();
  /* 122df980 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df983 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122df986 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df98a jne 0x122df994 */
  if (!C.zf) goto L_122df994;
  /* 122df98c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122df98f jmp 0x122dfa59 */
  goto L_122dfa59;
L_122df994:;
  /* 122df994 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df997 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df99a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122df99c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 122df99f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9a3 jne 0x122df9ca */
  if (!C.zf) goto L_122df9ca;
  /* 122df9a5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9a9 jge 0x122df9ca */
  if ((C.sf==C.of)) goto L_122df9ca;
  /* 122df9ab movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122df9af cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9b2 je 0x122df9ca */
  if (C.zf) goto L_122df9ca;
  /* 122df9b4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df9b7 push edx */
  push32((uint32_t)(EDX));
  /* 122df9b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df9bb push eax */
  push32((uint32_t)(EAX));
  /* 122df9bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df9bf push ecx */
  push32((uint32_t)(ECX));
  /* 122df9c0 call 0x122da9a0 */
  push32(0x122df9c5u); f_122da9a0();
  /* 122df9c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df9c8 jmp 0x122dfa30 */
  goto L_122dfa30;
L_122df9ca:;
  /* 122df9ca cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9ce jne 0x122df9f8 */
  if (!C.zf) goto L_122df9f8;
  /* 122df9d0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9d4 jge 0x122df9f8 */
  if ((C.sf==C.of)) goto L_122df9f8;
  /* 122df9d6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122df9da cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9dd je 0x122df9f8 */
  if (C.zf) goto L_122df9f8;
  /* 122df9df mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122df9e2 push eax */
  push32((uint32_t)(EAX));
  /* 122df9e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122df9e6 push ecx */
  push32((uint32_t)(ECX));
  /* 122df9e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122df9ea add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122df9ed push edx */
  push32((uint32_t)(EDX));
  /* 122df9ee call 0x122da9a0 */
  push32(0x122df9f3u); f_122da9a0();
  /* 122df9f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122df9f6 jmp 0x122dfa30 */
  goto L_122dfa30;
L_122df9f8:;
  /* 122df9f8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122df9fc jne 0x122dfa2b */
  if (!C.zf) goto L_122dfa2b;
  /* 122df9fe movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122dfa02 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dfa04 je 0x122dfa0f */
  if (C.zf) goto L_122dfa0f;
  /* 122dfa06 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122dfa0a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfa0d jne 0x122dfa2b */
  if (!C.zf) goto L_122dfa2b;
L_122dfa0f:;
  /* 122dfa0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dfa12 push edx */
  push32((uint32_t)(EDX));
  /* 122dfa13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa16 push eax */
  push32((uint32_t)(EAX));
  /* 122dfa17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfa1a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfa20 push ecx */
  push32((uint32_t)(ECX));
  /* 122dfa21 call 0x122da9a0 */
  push32(0x122dfa26u); f_122da9a0();
  /* 122dfa26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfa29 jmp 0x122dfa30 */
  goto L_122dfa30;
L_122dfa2b:;
  /* 122dfa2b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122dfa2e jmp 0x122dfa59 */
  goto L_122dfa59;
L_122dfa30:;
  /* 122dfa30 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122dfa34 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfa37 jne 0x122dfa3b */
  if (!C.zf) goto L_122dfa3b;
  /* 122dfa39 jmp 0x122dfa57 */
  goto L_122dfa57;
L_122dfa3b:;
  /* 122dfa3b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122dfa3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dfa41 jne 0x122dfa45 */
  if (!C.zf) goto L_122dfa45;
  /* 122dfa43 jmp 0x122dfa57 */
  goto L_122dfa57;
L_122dfa45:;
  /* 122dfa45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122dfa48 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa4b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 122dfa4f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 122dfa52 jmp 0x122df969 */
  goto L_122df969;
L_122dfa57:;
  /* 122dfa57 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122dfa59:;
  /* 122dfa59 mov esp, ebp */
  ESP = (EBP);
  /* 122dfa5b pop ebp */
  EBP = (pop32());
  /* 122dfa5c ret  */
  ESPCHK(0x122df900u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x122dfa60 (101 bytes, 36 insns) */
void f_122dfa60(void) {
  FTRACE(0x122dfa60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dfa60 push ebp */
  push32((uint32_t)(EBP));
  /* 122dfa61 mov ebp, esp */
  EBP = (ESP);
  /* 122dfa63 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa66 push eax */
  push32((uint32_t)(EAX));
  /* 122dfa67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfa6a push ecx */
  push32((uint32_t)(ECX));
  /* 122dfa6b call 0x122da130 */
  push32(0x122dfa70u); f_122da130();
  /* 122dfa70 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfa73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa76 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 122dfa7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dfa7c je 0x122dfa98 */
  if (C.zf) goto L_122dfa98;
  /* 122dfa7e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa81 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfa84 push ecx */
  push32((uint32_t)(ECX));
  /* 122dfa85 push 0x122fda08 */
  push32((uint32_t)(0x122fda08u));
  /* 122dfa8a push 2 */
  push32((uint32_t)(0x2u));
  /* 122dfa8c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfa8f push edx */
  push32((uint32_t)(EDX));
  /* 122dfa90 call 0x122df8b0 */
  push32(0x122dfa95u); f_122df8b0();
  /* 122dfa95 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dfa98:;
  /* 122dfa98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfa9b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 122dfaa2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122dfaa4 je 0x122dfac3 */
  if (C.zf) goto L_122dfac3;
  /* 122dfaa6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfaa9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfaaf push edx */
  push32((uint32_t)(EDX));
  /* 122dfab0 push 0x122fda04 */
  push32((uint32_t)(0x122fda04u));
  /* 122dfab5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122dfab7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfaba push eax */
  push32((uint32_t)(EAX));
  /* 122dfabb call 0x122df8b0 */
  push32(0x122dfac0u); f_122df8b0();
  /* 122dfac0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122dfac3:;
  /* 122dfac3 pop ebp */
  EBP = (pop32());
  /* 122dfac4 ret  */
  ESPCHK(0x122dfa60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x122dfad0 (664 bytes, 257 insns) [15 switch table(s)] */
void f_122dfad0(void) {
  FTRACE(0x122dfad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dfad0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dfad1 mov ebp, esp */
  EBP = (ESP);
  /* 122dfad3 push edi */
  push32((uint32_t)(EDI));
  /* 122dfad4 push esi */
  push32((uint32_t)(ESI));
  /* 122dfad5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfad8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dfadb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfade mov eax, ecx */
  EAX = (ECX);
  /* 122dfae0 mov edx, ecx */
  EDX = (ECX);
  /* 122dfae2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfae4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfae6 jbe 0x122dfaf0 */
  if ((C.cf||C.zf)) goto L_122dfaf0;
  /* 122dfae8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfaea jb 0x122dfc68 */
  if (C.cf) goto L_122dfc68;
L_122dfaf0:;
  /* 122dfaf0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122dfaf6 jne 0x122dfb0c */
  if (!C.zf) goto L_122dfb0c;
  /* 122dfaf8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfafb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122dfafe cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfb01 jb 0x122dfb2c */
  if (C.cf) goto L_122dfb2c;
  /* 122dfb03 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfb05 jmp dword ptr [edx*4 + 0x122dfc18] */
  switch (EDX) {
    case 0: goto L_122dfc28;
    case 1: goto L_122dfc30;
    case 2: goto L_122dfc3c;
    case 3: goto L_122dfc50;
    default: x86_unimpl("switch@0x122dfb05 out of table"); return;
  }
L_122dfb0c:;
  /* 122dfb0c mov eax, edi */
  EAX = (EDI);
  /* 122dfb0e mov edx, 3 */
  EDX = (0x3u);
  /* 122dfb13 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfb16 jb 0x122dfb24 */
  if (C.cf) goto L_122dfb24;
  /* 122dfb18 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122dfb1b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfb1d jmp dword ptr [eax*4 + 0x122dfb30] */
  switch (EAX) {
    case 1: goto L_122dfb40;
    case 2: goto L_122dfb6c;
    case 3: goto L_122dfb90;
    default: x86_unimpl("switch@0x122dfb1d out of table"); return;
  }
L_122dfb24:;
  /* 122dfb24 jmp dword ptr [ecx*4 + 0x122dfc28] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x122dfc28)))); return;
  /* 122dfb2b nop  */
  /* nop */
L_122dfb2c:;
  /* 122dfb2c jmp dword ptr [ecx*4 + 0x122dfbac] */
  switch (ECX) {
    case 0: goto L_122dfc0f;
    case 1: goto L_122dfbfc;
    case 2: goto L_122dfbf4;
    case 3: goto L_122dfbec;
    case 4: goto L_122dfbe4;
    case 5: goto L_122dfbdc;
    case 6: goto L_122dfbd4;
    case 7: goto L_122dfbcc;
    default: x86_unimpl("switch@0x122dfb2c out of table"); return;
  }
  /* 122dfb33 nop  */
  /* nop */
L_122dfb40:;
  /* 122dfb40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfb42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfb44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfb46 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfb49 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfb4c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfb4f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfb52 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfb55 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfb58 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfb5b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfb5e jb 0x122dfb2c */
  if (C.cf) goto L_122dfb2c;
  /* 122dfb60 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfb62 jmp dword ptr [edx*4 + 0x122dfc18] */
  switch (EDX) {
    case 0: goto L_122dfc28;
    case 1: goto L_122dfc30;
    case 2: goto L_122dfc3c;
    case 3: goto L_122dfc50;
    default: x86_unimpl("switch@0x122dfb62 out of table"); return;
  }
  /* 122dfb69 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfb6c:;
  /* 122dfb6c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfb6e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfb70 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfb72 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfb75 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfb78 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfb7b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfb7e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfb81 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfb84 jb 0x122dfb2c */
  if (C.cf) goto L_122dfb2c;
  /* 122dfb86 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfb88 jmp dword ptr [edx*4 + 0x122dfc18] */
  switch (EDX) {
    case 0: goto L_122dfc28;
    case 1: goto L_122dfc30;
    case 2: goto L_122dfc3c;
    case 3: goto L_122dfc50;
    default: x86_unimpl("switch@0x122dfb88 out of table"); return;
  }
  /* 122dfb8f nop  */
  /* nop */
L_122dfb90:;
  /* 122dfb90 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfb92 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfb94 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfb96 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122dfb97 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfb9a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122dfb9b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfb9e jb 0x122dfb2c */
  if (C.cf) goto L_122dfb2c;
  /* 122dfba0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfba2 jmp dword ptr [edx*4 + 0x122dfc18] */
  switch (EDX) {
    case 0: goto L_122dfc28;
    case 1: goto L_122dfc30;
    case 2: goto L_122dfc3c;
    case 3: goto L_122dfc50;
    default: x86_unimpl("switch@0x122dfba2 out of table"); return;
  }
  /* 122dfba9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfbcc:;
  /* 122dfbcc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 122dfbd0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_122dfbd4:;
  /* 122dfbd4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 122dfbd8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_122dfbdc:;
  /* 122dfbdc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 122dfbe0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_122dfbe4:;
  /* 122dfbe4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 122dfbe8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_122dfbec:;
  /* 122dfbec mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 122dfbf0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_122dfbf4:;
  /* 122dfbf4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 122dfbf8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_122dfbfc:;
  /* 122dfbfc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 122dfc00 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 122dfc04 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122dfc0b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfc0d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122dfc0f:;
  /* 122dfc0f jmp dword ptr [edx*4 + 0x122dfc18] */
  switch (EDX) {
    case 0: goto L_122dfc28;
    case 1: goto L_122dfc30;
    case 2: goto L_122dfc3c;
    case 3: goto L_122dfc50;
    default: x86_unimpl("switch@0x122dfc0f out of table"); return;
  }
  /* 122dfc16 mov edi, edi */
  EDI = (EDI);
L_122dfc28:;
  /* 122dfc28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfc2b pop esi */
  ESI = (pop32());
  /* 122dfc2c pop edi */
  EDI = (pop32());
  /* 122dfc2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfc2e ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfc2f nop  */
  /* nop */
L_122dfc30:;
  /* 122dfc30 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfc32 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfc34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfc37 pop esi */
  ESI = (pop32());
  /* 122dfc38 pop edi */
  EDI = (pop32());
  /* 122dfc39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfc3a ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfc3b nop  */
  /* nop */
L_122dfc3c:;
  /* 122dfc3c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfc3e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfc40 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfc43 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfc46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfc49 pop esi */
  ESI = (pop32());
  /* 122dfc4a pop edi */
  EDI = (pop32());
  /* 122dfc4b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfc4c ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfc4d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfc50:;
  /* 122dfc50 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122dfc52 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 122dfc54 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfc57 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfc5a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfc5d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfc60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfc63 pop esi */
  ESI = (pop32());
  /* 122dfc64 pop edi */
  EDI = (pop32());
  /* 122dfc65 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfc66 ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfc67 nop  */
  /* nop */
L_122dfc68:;
  /* 122dfc68 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 122dfc6c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 122dfc70 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 122dfc76 jne 0x122dfc9c */
  if (!C.zf) goto L_122dfc9c;
  /* 122dfc78 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfc7b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122dfc7e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfc81 jb 0x122dfc90 */
  if (C.cf) goto L_122dfc90;
  /* 122dfc83 std  */
  C.df=1;
  /* 122dfc84 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfc86 cld  */
  C.df=0;
  /* 122dfc87 jmp dword ptr [edx*4 + 0x122dfdb0] */
  switch (EDX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfc87 out of table"); return;
  }
  /* 122dfc8e mov edi, edi */
  EDI = (EDI);
L_122dfc90:;
  /* 122dfc90 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122dfc92 jmp dword ptr [ecx*4 + 0x122dfd60] */
  switch (ECX) {
    case 0: goto L_122dfda7;
    default: x86_unimpl("switch@0x122dfc92 out of table"); return;
  }
  /* 122dfc99 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfc9c:;
  /* 122dfc9c mov eax, edi */
  EAX = (EDI);
  /* 122dfc9e mov edx, 3 */
  EDX = (0x3u);
  /* 122dfca3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfca6 jb 0x122dfcb4 */
  if (C.cf) goto L_122dfcb4;
  /* 122dfca8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122dfcab sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfcad jmp dword ptr [eax*4 + 0x122dfcb8] */
  switch (EAX) {
    case 1: goto L_122dfcc8;
    case 2: goto L_122dfce8;
    case 3: goto L_122dfd10;
    default: x86_unimpl("switch@0x122dfcad out of table"); return;
  }
L_122dfcb4:;
  /* 122dfcb4 jmp dword ptr [ecx*4 + 0x122dfdb0] */
  switch (ECX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfcb4 out of table"); return;
  }
  /* 122dfcbb nop  */
  /* nop */
L_122dfcc8:;
  /* 122dfcc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfccb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfccd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfcd0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 122dfcd1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfcd4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 122dfcd5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfcd8 jb 0x122dfc90 */
  if (C.cf) goto L_122dfc90;
  /* 122dfcda std  */
  C.df=1;
  /* 122dfcdb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfcdd cld  */
  C.df=0;
  /* 122dfcde jmp dword ptr [edx*4 + 0x122dfdb0] */
  switch (EDX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfcde out of table"); return;
  }
  /* 122dfce5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfce8:;
  /* 122dfce8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfceb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfced mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfcf0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfcf3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfcf6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfcf9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfcfc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfcff cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfd02 jb 0x122dfc90 */
  if (C.cf) goto L_122dfc90;
  /* 122dfd04 std  */
  C.df=1;
  /* 122dfd05 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfd07 cld  */
  C.df=0;
  /* 122dfd08 jmp dword ptr [edx*4 + 0x122dfdb0] */
  switch (EDX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfd08 out of table"); return;
  }
  /* 122dfd0f nop  */
  /* nop */
L_122dfd10:;
  /* 122dfd10 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfd13 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122dfd15 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfd18 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfd1b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfd1e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfd21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 122dfd24 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfd27 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfd2a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfd2d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfd30 jb 0x122dfc90 */
  if (C.cf) goto L_122dfc90;
  /* 122dfd36 std  */
  C.df=1;
  /* 122dfd37 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 122dfd39 cld  */
  C.df=0;
  /* 122dfd3a jmp dword ptr [edx*4 + 0x122dfdb0] */
  switch (EDX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfd3a out of table"); return;
  }
  /* 122dfd41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 122dfd44 std  */
  C.df=1;
  /* 122dfd46 sub eax, 0x2dfd6c12 */
  { uint32_t _a=(EAX),_b=(0x2dfd6c12u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfd4b adc dh, byte ptr [ebp + edi*8 + 0x2d] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EBP + EDI*8 + 0x2d))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 122dfd4f adc bh, byte ptr [ebp + edi*8 + 0x2d] */
  { uint32_t _a=(C.b.b.h),_b=(r8((uint32_t)(EBP + EDI*8 + 0x2d))),_r=_a+_b+C.cf; C.b.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 122dfd53 adc al, byte ptr [ebp + edi*8 - 0x273edd3] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EBP + EDI*8 + -0x273edd3))),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122dfd5a sub eax, 0x2dfd9412 */
  { uint32_t _a=(EAX),_b=(0x2dfd9412u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfd64 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 122dfd68 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 122dfd6c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 122dfd70 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 122dfd74 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 122dfd78 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 122dfd7c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 122dfd80 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 122dfd84 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 122dfd88 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 122dfd8c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 122dfd90 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 122dfd94 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 122dfd98 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 122dfd9c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 122dfda3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfda5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_122dfda7:;
  /* 122dfda7 jmp dword ptr [edx*4 + 0x122dfdb0] */
  switch (EDX) {
    case 0: goto L_122dfdc0;
    case 1: goto L_122dfdc8;
    case 2: goto L_122dfdd8;
    case 3: goto L_122dfdec;
    default: x86_unimpl("switch@0x122dfda7 out of table"); return;
  }
  /* 122dfdae mov edi, edi */
  EDI = (EDI);
L_122dfdc0:;
  /* 122dfdc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfdc3 pop esi */
  ESI = (pop32());
  /* 122dfdc4 pop edi */
  EDI = (pop32());
  /* 122dfdc5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfdc6 ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfdc7 nop  */
  /* nop */
L_122dfdc8:;
  /* 122dfdc8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfdcb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfdce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfdd1 pop esi */
  ESI = (pop32());
  /* 122dfdd2 pop edi */
  EDI = (pop32());
  /* 122dfdd3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfdd4 ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfdd5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122dfdd8:;
  /* 122dfdd8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfddb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfdde mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfde1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfde4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfde7 pop esi */
  ESI = (pop32());
  /* 122dfde8 pop edi */
  EDI = (pop32());
  /* 122dfde9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfdea ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
  /* 122dfdeb nop  */
  /* nop */
L_122dfdec:;
  /* 122dfdec mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 122dfdef mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 122dfdf2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 122dfdf5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 122dfdf8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 122dfdfb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 122dfdfe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfe01 pop esi */
  ESI = (pop32());
  /* 122dfe02 pop edi */
  EDI = (pop32());
  /* 122dfe03 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122dfe04 ret  */
  ESPCHK(0x122dfad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe10 @ 0x122dfe10 (421 bytes, 148 insns) */
void f_122dfe10(void) {
  FTRACE(0x122dfe10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dfe10 push ebp */
  push32((uint32_t)(EBP));
  /* 122dfe11 mov ebp, esp */
  EBP = (ESP);
  /* 122dfe13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122dfe15 push 0x122fda18 */
  push32((uint32_t)(0x122fda18u));
  /* 122dfe1a push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122dfe1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122dfe25 push eax */
  push32((uint32_t)(EAX));
  /* 122dfe26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122dfe2d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfe30 push ebx */
  push32((uint32_t)(EBX));
  /* 122dfe31 push esi */
  push32((uint32_t)(ESI));
  /* 122dfe32 push edi */
  push32((uint32_t)(EDI));
  /* 122dfe33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122dfe36 cmp dword ptr [0x12301978], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301978))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfe3d jne 0x122dfe8e */
  if (!C.zf) goto L_122dfe8e;
  /* 122dfe3f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 122dfe42 push eax */
  push32((uint32_t)(EAX));
  /* 122dfe43 push 1 */
  push32((uint32_t)(0x1u));
  /* 122dfe45 push 0x122fda10 */
  push32((uint32_t)(0x122fda10u));
  /* 122dfe4a push 1 */
  push32((uint32_t)(0x1u));
  /* 122dfe4c call dword ptr [0x123042dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042dc))), 0x122dfe52u);
  /* 122dfe52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dfe54 je 0x122dfe62 */
  if (C.zf) goto L_122dfe62;
  /* 122dfe56 mov dword ptr [0x12301978], 1 */
  w32((uint32_t)(0x12301978), (0x1u));
  /* 122dfe60 jmp 0x122dfe8e */
  goto L_122dfe8e;
L_122dfe62:;
  /* 122dfe62 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 122dfe65 push ecx */
  push32((uint32_t)(ECX));
  /* 122dfe66 push 1 */
  push32((uint32_t)(0x1u));
  /* 122dfe68 push 0x122fda0c */
  push32((uint32_t)(0x122fda0cu));
  /* 122dfe6d push 1 */
  push32((uint32_t)(0x1u));
  /* 122dfe6f push 0 */
  push32((uint32_t)(0x0u));
  /* 122dfe71 call dword ptr [0x12304290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304290))), 0x122dfe77u);
  /* 122dfe77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122dfe79 je 0x122dfe87 */
  if (C.zf) goto L_122dfe87;
  /* 122dfe7b mov dword ptr [0x12301978], 2 */
  w32((uint32_t)(0x12301978), (0x2u));
  /* 122dfe85 jmp 0x122dfe8e */
  goto L_122dfe8e;
L_122dfe87:;
  /* 122dfe87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dfe89 jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dfe8e:;
  /* 122dfe8e cmp dword ptr [0x12301978], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12301978))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfe95 jne 0x122dfec5 */
  if (!C.zf) goto L_122dfec5;
  /* 122dfe97 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfe9b jne 0x122dfea6 */
  if (!C.zf) goto L_122dfea6;
  /* 122dfe9d mov edx, dword ptr [0x12301960] */
  EDX = (r32((uint32_t)(0x12301960)));
  /* 122dfea3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_122dfea6:;
  /* 122dfea6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122dfea9 push eax */
  push32((uint32_t)(EAX));
  /* 122dfeaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dfead push ecx */
  push32((uint32_t)(ECX));
  /* 122dfeae mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfeb1 push edx */
  push32((uint32_t)(EDX));
  /* 122dfeb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dfeb5 push eax */
  push32((uint32_t)(EAX));
  /* 122dfeb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122dfeb9 push ecx */
  push32((uint32_t)(ECX));
  /* 122dfeba call dword ptr [0x12304290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304290))), 0x122dfec0u);
  /* 122dfec0 jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dfec5:;
  /* 122dfec5 cmp dword ptr [0x12301978], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301978))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfecc jne 0x122dffb6 */
  if (!C.zf) goto L_122dffb6;
  /* 122dfed2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfed6 jne 0x122dfee1 */
  if (!C.zf) goto L_122dfee1;
  /* 122dfed8 mov edx, dword ptr [0x12301970] */
  EDX = (r32((uint32_t)(0x12301970)));
  /* 122dfede mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_122dfee1:;
  /* 122dfee1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dfee3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122dfee5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dfee8 push eax */
  push32((uint32_t)(EAX));
  /* 122dfee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dfeec push ecx */
  push32((uint32_t)(ECX));
  /* 122dfeed mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 122dfef0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122dfef2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122dfef4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122dfef7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfefa push edx */
  push32((uint32_t)(EDX));
  /* 122dfefb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122dfefe push eax */
  push32((uint32_t)(EAX));
  /* 122dfeff call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122dff05u);
  /* 122dff05 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122dff08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dff0c jne 0x122dff15 */
  if (!C.zf) goto L_122dff15;
  /* 122dff0e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dff10 jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dff15:;
  /* 122dff15 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122dff1c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dff1f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122dff21 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122dff24 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122dff26 call 0x122da320 */
  push32(0x122dff2bu); f_122da320();
  /* 122dff2b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 122dff2e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122dff31 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122dff34 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122dff37 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dff3a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 122dff3c push edx */
  push32((uint32_t)(EDX));
  /* 122dff3d push 0 */
  push32((uint32_t)(0x0u));
  /* 122dff3f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dff42 push eax */
  push32((uint32_t)(EAX));
  /* 122dff43 call 0x122db8a0 */
  push32(0x122dff48u); f_122db8a0();
  /* 122dff48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dff4b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122dff52 jmp 0x122dff6b */
  goto L_122dff6b;
  /* 122dff54 mov eax, 1 */
  EAX = (0x1u);
  /* 122dff59 ret  */
  ESPCHK(0x122dfe10u, _esp0);
  ESP += 4; return;
  /* 122dff5a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122dff5d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122dff64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122dff6b:;
  /* 122dff6b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dff6f jne 0x122dff75 */
  if (!C.zf) goto L_122dff75;
  /* 122dff71 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dff73 jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dff75:;
  /* 122dff75 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122dff78 push ecx */
  push32((uint32_t)(ECX));
  /* 122dff79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dff7c push edx */
  push32((uint32_t)(EDX));
  /* 122dff7d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122dff80 push eax */
  push32((uint32_t)(EAX));
  /* 122dff81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122dff84 push ecx */
  push32((uint32_t)(ECX));
  /* 122dff85 push 1 */
  push32((uint32_t)(0x1u));
  /* 122dff87 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122dff8a push edx */
  push32((uint32_t)(EDX));
  /* 122dff8b call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122dff91u);
  /* 122dff91 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122dff94 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dff98 jne 0x122dff9e */
  if (!C.zf) goto L_122dff9e;
  /* 122dff9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122dff9c jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dff9e:;
  /* 122dff9e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122dffa1 push eax */
  push32((uint32_t)(EAX));
  /* 122dffa2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122dffa5 push ecx */
  push32((uint32_t)(ECX));
  /* 122dffa6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122dffa9 push edx */
  push32((uint32_t)(EDX));
  /* 122dffaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122dffad push eax */
  push32((uint32_t)(EAX));
  /* 122dffae call dword ptr [0x123042dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042dc))), 0x122dffb4u);
  /* 122dffb4 jmp 0x122dffb8 */
  goto L_122dffb8;
L_122dffb6:;
  /* 122dffb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122dffb8:;
  /* 122dffb8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 122dffbb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122dffbe mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122dffc5 pop edi */
  EDI = (pop32());
  /* 122dffc6 pop esi */
  ESI = (pop32());
  /* 122dffc7 pop ebx */
  EBX = (pop32());
  /* 122dffc8 mov esp, ebp */
  ESP = (EBP);
  /* 122dffca pop ebp */
  EBP = (pop32());
  /* 122dffcb ret  */
  ESPCHK(0x122dfe10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ffd0 @ 0x122dffd0 (727 bytes, 263 insns) */
void f_122dffd0(void) {
  FTRACE(0x122dffd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122dffd0 push ebp */
  push32((uint32_t)(EBP));
  /* 122dffd1 mov ebp, esp */
  EBP = (ESP);
  /* 122dffd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122dffd5 push 0x122fda28 */
  push32((uint32_t)(0x122fda28u));
  /* 122dffda push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122dffdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122dffe5 push eax */
  push32((uint32_t)(EAX));
  /* 122dffe6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122dffed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122dfff0 push ebx */
  push32((uint32_t)(EBX));
  /* 122dfff1 push esi */
  push32((uint32_t)(ESI));
  /* 122dfff2 push edi */
  push32((uint32_t)(EDI));
  /* 122dfff3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122dfff6 cmp dword ptr [0x1230197c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1230197c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122dfffd jne 0x122e0056 */
  if (!C.zf) goto L_122e0056;
  /* 122dffff push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0001 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0003 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0005 push 0x122fda10 */
  push32((uint32_t)(0x122fda10u));
  /* 122e000a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122e000f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0011 call dword ptr [0x123042e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e4))), 0x122e0017u);
  /* 122e0017 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0019 je 0x122e0027 */
  if (C.zf) goto L_122e0027;
  /* 122e001b mov dword ptr [0x1230197c], 1 */
  w32((uint32_t)(0x1230197c), (0x1u));
  /* 122e0025 jmp 0x122e0056 */
  goto L_122e0056;
L_122e0027:;
  /* 122e0027 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0029 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e002b push 1 */
  push32((uint32_t)(0x1u));
  /* 122e002d push 0x122fda0c */
  push32((uint32_t)(0x122fda0cu));
  /* 122e0032 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122e0037 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0039 call dword ptr [0x123042e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e0))), 0x122e003fu);
  /* 122e003f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0041 je 0x122e004f */
  if (C.zf) goto L_122e004f;
  /* 122e0043 mov dword ptr [0x1230197c], 2 */
  w32((uint32_t)(0x1230197c), (0x2u));
  /* 122e004d jmp 0x122e0056 */
  goto L_122e0056;
L_122e004f:;
  /* 122e004f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0051 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e0056:;
  /* 122e0056 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e005a jle 0x122e006f */
  if ((C.zf||C.sf!=C.of)) goto L_122e006f;
  /* 122e005c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e005f push eax */
  push32((uint32_t)(EAX));
  /* 122e0060 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e0063 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0064 call 0x122e02e0 */
  push32(0x122e0069u); f_122e02e0();
  /* 122e0069 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e006c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_122e006f:;
  /* 122e006f cmp dword ptr [0x1230197c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1230197c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0076 jne 0x122e009b */
  if (!C.zf) goto L_122e009b;
  /* 122e0078 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e007b push edx */
  push32((uint32_t)(EDX));
  /* 122e007c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e007f push eax */
  push32((uint32_t)(EAX));
  /* 122e0080 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e0083 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0084 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e0087 push edx */
  push32((uint32_t)(EDX));
  /* 122e0088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e008b push eax */
  push32((uint32_t)(EAX));
  /* 122e008c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e008f push ecx */
  push32((uint32_t)(ECX));
  /* 122e0090 call dword ptr [0x123042e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e0))), 0x122e0096u);
  /* 122e0096 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e009b:;
  /* 122e009b cmp dword ptr [0x1230197c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1230197c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e00a2 jne 0x122e02bf */
  if (!C.zf) goto L_122e02bf;
  /* 122e00a8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e00ac jne 0x122e00b7 */
  if (!C.zf) goto L_122e00b7;
  /* 122e00ae mov edx, dword ptr [0x12301970] */
  EDX = (r32((uint32_t)(0x12301970)));
  /* 122e00b4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_122e00b7:;
  /* 122e00b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e00b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e00bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e00be push eax */
  push32((uint32_t)(EAX));
  /* 122e00bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e00c2 push ecx */
  push32((uint32_t)(ECX));
  /* 122e00c3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 122e00c6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e00c8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e00ca and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122e00cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e00d0 push edx */
  push32((uint32_t)(EDX));
  /* 122e00d1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e00d4 push eax */
  push32((uint32_t)(EAX));
  /* 122e00d5 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e00dbu);
  /* 122e00db mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e00de cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e00e2 jne 0x122e00eb */
  if (!C.zf) goto L_122e00eb;
  /* 122e00e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e00e6 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e00eb:;
  /* 122e00eb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e00f2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e00f5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e00f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e00fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e00fc call 0x122da320 */
  push32(0x122e0101u); f_122da320();
  /* 122e0101 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 122e0104 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e0107 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e010a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122e010d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e0114 jmp 0x122e012d */
  goto L_122e012d;
  /* 122e0116 mov eax, 1 */
  EAX = (0x1u);
  /* 122e011b ret  */
  ESPCHK(0x122dffd0u, _esp0);
  ESP += 4; return;
  /* 122e011c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e011f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122e0126 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e012d:;
  /* 122e012d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0131 jne 0x122e013a */
  if (!C.zf) goto L_122e013a;
  /* 122e0133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0135 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e013a:;
  /* 122e013a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e013d push edx */
  push32((uint32_t)(EDX));
  /* 122e013e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e0141 push eax */
  push32((uint32_t)(EAX));
  /* 122e0142 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e0145 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0146 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e0149 push edx */
  push32((uint32_t)(EDX));
  /* 122e014a push 1 */
  push32((uint32_t)(0x1u));
  /* 122e014c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e014f push eax */
  push32((uint32_t)(EAX));
  /* 122e0150 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e0156u);
  /* 122e0156 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0158 jne 0x122e0161 */
  if (!C.zf) goto L_122e0161;
  /* 122e015a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e015c jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e0161:;
  /* 122e0161 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0163 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0165 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e0168 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0169 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e016c push edx */
  push32((uint32_t)(EDX));
  /* 122e016d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e0170 push eax */
  push32((uint32_t)(EAX));
  /* 122e0171 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0174 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0175 call dword ptr [0x123042e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e4))), 0x122e017bu);
  /* 122e017b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122e017e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0182 jne 0x122e018b */
  if (!C.zf) goto L_122e018b;
  /* 122e0184 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0186 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e018b:;
  /* 122e018b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e018e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 122e0194 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e0196 je 0x122e01db */
  if (C.zf) goto L_122e01db;
  /* 122e0198 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e019c je 0x122e01d6 */
  if (C.zf) goto L_122e01d6;
  /* 122e019e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e01a1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e01a4 jle 0x122e01ad */
  if ((C.zf||C.sf!=C.of)) goto L_122e01ad;
  /* 122e01a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e01a8 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e01ad:;
  /* 122e01ad mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e01b0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e01b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e01b4 push edx */
  push32((uint32_t)(EDX));
  /* 122e01b5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e01b8 push eax */
  push32((uint32_t)(EAX));
  /* 122e01b9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e01bc push ecx */
  push32((uint32_t)(ECX));
  /* 122e01bd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e01c0 push edx */
  push32((uint32_t)(EDX));
  /* 122e01c1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e01c4 push eax */
  push32((uint32_t)(EAX));
  /* 122e01c5 call dword ptr [0x123042e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e4))), 0x122e01cbu);
  /* 122e01cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e01cd jne 0x122e01d6 */
  if (!C.zf) goto L_122e01d6;
  /* 122e01cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e01d1 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e01d6:;
  /* 122e01d6 jmp 0x122e02ba */
  goto L_122e02ba;
L_122e01db:;
  /* 122e01db mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e01de mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122e01e1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122e01e8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e01eb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e01ed add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e01f0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e01f2 call 0x122da320 */
  push32(0x122e01f7u); f_122da320();
  /* 122e01f7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 122e01fa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e01fd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 122e0200 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122e0203 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e020a jmp 0x122e0223 */
  goto L_122e0223;
  /* 122e020c mov eax, 1 */
  EAX = (0x1u);
  /* 122e0211 ret  */
  ESPCHK(0x122dffd0u, _esp0);
  ESP += 4; return;
  /* 122e0212 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e0215 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122e021c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e0223:;
  /* 122e0223 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0227 jne 0x122e0230 */
  if (!C.zf) goto L_122e0230;
  /* 122e0229 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e022b jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e0230:;
  /* 122e0230 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e0233 push eax */
  push32((uint32_t)(EAX));
  /* 122e0234 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e0237 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0238 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e023b push edx */
  push32((uint32_t)(EDX));
  /* 122e023c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e023f push eax */
  push32((uint32_t)(EAX));
  /* 122e0240 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e0243 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0247 push edx */
  push32((uint32_t)(EDX));
  /* 122e0248 call dword ptr [0x123042e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e4))), 0x122e024eu);
  /* 122e024e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0250 jne 0x122e0256 */
  if (!C.zf) goto L_122e0256;
  /* 122e0252 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0254 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e0256:;
  /* 122e0256 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e025a jne 0x122e028a */
  if (!C.zf) goto L_122e028a;
  /* 122e025c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e025e push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0260 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0262 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e0264 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e0267 push eax */
  push32((uint32_t)(EAX));
  /* 122e0268 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e026b push ecx */
  push32((uint32_t)(ECX));
  /* 122e026c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e0271 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e0274 push edx */
  push32((uint32_t)(EDX));
  /* 122e0275 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e027bu);
  /* 122e027b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122e027e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0282 jne 0x122e0288 */
  if (!C.zf) goto L_122e0288;
  /* 122e0284 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0286 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e0288:;
  /* 122e0288 jmp 0x122e02ba */
  goto L_122e02ba;
L_122e028a:;
  /* 122e028a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e028c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e028e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e0291 push eax */
  push32((uint32_t)(EAX));
  /* 122e0292 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e0295 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0296 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e0299 push edx */
  push32((uint32_t)(EDX));
  /* 122e029a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e029d push eax */
  push32((uint32_t)(EAX));
  /* 122e029e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e02a3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e02a6 push ecx */
  push32((uint32_t)(ECX));
  /* 122e02a7 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e02adu);
  /* 122e02ad mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122e02b0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e02b4 jne 0x122e02ba */
  if (!C.zf) goto L_122e02ba;
  /* 122e02b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e02b8 jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e02ba:;
  /* 122e02ba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e02bd jmp 0x122e02c1 */
  goto L_122e02c1;
L_122e02bf:;
  /* 122e02bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e02c1:;
  /* 122e02c1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 122e02c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e02c7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122e02ce pop edi */
  EDI = (pop32());
  /* 122e02cf pop esi */
  ESI = (pop32());
  /* 122e02d0 pop ebx */
  EBX = (pop32());
  /* 122e02d1 mov esp, ebp */
  ESP = (EBP);
  /* 122e02d3 pop ebp */
  EBP = (pop32());
  /* 122e02d4 ret  */
  ESPCHK(0x122dffd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e0 @ 0x122e02e0 (80 bytes, 32 insns) */
void f_122e02e0(void) {
  FTRACE(0x122e02e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e02e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e02e1 mov ebp, esp */
  EBP = (ESP);
  /* 122e02e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e02e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e02e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e02ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e02ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122e02f2:;
  /* 122e02f2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e02f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e02f8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e02fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e02fe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e0300 je 0x122e0317 */
  if (C.zf) goto L_122e0317;
  /* 122e0302 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0305 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e0308 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e030a je 0x122e0317 */
  if (C.zf) goto L_122e0317;
  /* 122e030c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e030f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0312 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e0315 jmp 0x122e02f2 */
  goto L_122e02f2;
L_122e0317:;
  /* 122e0317 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e031a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e031d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e031f jne 0x122e0329 */
  if (!C.zf) goto L_122e0329;
  /* 122e0321 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0324 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e0327 jmp 0x122e032c */
  goto L_122e032c;
L_122e0329:;
  /* 122e0329 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_122e032c:;
  /* 122e032c mov esp, ebp */
  ESP = (EBP);
  /* 122e032e pop ebp */
  EBP = (pop32());
  /* 122e032f ret  */
  ESPCHK(0x122e02e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010330 @ 0x122e0330 (130 bytes, 50 insns) */
void f_122e0330(void) {
  FTRACE(0x122e0330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0330 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0331 mov ebp, esp */
  EBP = (ESP);
  /* 122e0333 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0334 push ebx */
  push32((uint32_t)(EBX));
  /* 122e0335 push esi */
  push32((uint32_t)(ESI));
  /* 122e0336 push edi */
  push32((uint32_t)(EDI));
  /* 122e0337 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e033e:;
  /* 122e033e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0342 jne 0x122e0362 */
  if (!C.zf) goto L_122e0362;
  /* 122e0344 push 0x122fda4c */
  push32((uint32_t)(0x122fda4cu));
  /* 122e0349 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e034b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 122e034d push 0x122fda40 */
  push32((uint32_t)(0x122fda40u));
  /* 122e0352 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0354 call 0x122d5120 */
  push32(0x122e0359u); f_122d5120();
  /* 122e0359 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e035c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e035f jne 0x122e0362 */
  if (!C.zf) goto L_122e0362;
  /* 122e0361 int3  */
  x86_unimpl("int3 @ 0x122e0361");
L_122e0362:;
  /* 122e0362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0364 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0366 jne 0x122e033e */
  if (!C.zf) goto L_122e033e;
  /* 122e0368 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e036b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e036e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 122e0371 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e0373 je 0x122e0381 */
  if (C.zf) goto L_122e0381;
  /* 122e0375 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0378 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 122e037f jmp 0x122e03a8 */
  goto L_122e03a8;
L_122e0381:;
  /* 122e0381 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0384 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0385 call 0x122db160 */
  push32(0x122e038au); f_122db160();
  /* 122e038a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e038d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0390 push edx */
  push32((uint32_t)(EDX));
  /* 122e0391 call 0x122e03c0 */
  push32(0x122e0396u); f_122e03c0();
  /* 122e0396 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0399 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e039c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e039f push eax */
  push32((uint32_t)(EAX));
  /* 122e03a0 call 0x122db1d0 */
  push32(0x122e03a5u); f_122db1d0();
  /* 122e03a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e03a8:;
  /* 122e03a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e03ab pop edi */
  EDI = (pop32());
  /* 122e03ac pop esi */
  ESI = (pop32());
  /* 122e03ad pop ebx */
  EBX = (pop32());
  /* 122e03ae mov esp, ebp */
  ESP = (EBP);
  /* 122e03b0 pop ebp */
  EBP = (pop32());
  /* 122e03b1 ret  */
  ESPCHK(0x122e0330u, _esp0);
  ESP += 4; return;
}

/* FUN_100103c0 @ 0x122e03c0 (190 bytes, 67 insns) */
void f_122e03c0(void) {
  FTRACE(0x122e03c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e03c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e03c1 mov ebp, esp */
  EBP = (ESP);
  /* 122e03c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e03c6 push ebx */
  push32((uint32_t)(EBX));
  /* 122e03c7 push esi */
  push32((uint32_t)(ESI));
  /* 122e03c8 push edi */
  push32((uint32_t)(EDI));
  /* 122e03c9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e03d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e03d3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e03d6:;
  /* 122e03d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e03da jne 0x122e03fa */
  if (!C.zf) goto L_122e03fa;
  /* 122e03dc push 0x122fce68 */
  push32((uint32_t)(0x122fce68u));
  /* 122e03e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e03e3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 122e03e5 push 0x122fda40 */
  push32((uint32_t)(0x122fda40u));
  /* 122e03ea push 2 */
  push32((uint32_t)(0x2u));
  /* 122e03ec call 0x122d5120 */
  push32(0x122e03f1u); f_122d5120();
  /* 122e03f1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e03f4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e03f7 jne 0x122e03fa */
  if (!C.zf) goto L_122e03fa;
  /* 122e03f9 int3  */
  x86_unimpl("int3 @ 0x122e03f9");
L_122e03fa:;
  /* 122e03fa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e03fc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e03fe jne 0x122e03d6 */
  if (!C.zf) goto L_122e03d6;
  /* 122e0400 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0403 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 122e0406 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 122e040b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e040d je 0x122e046a */
  if (C.zf) goto L_122e046a;
  /* 122e040f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0412 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0413 call 0x122dee60 */
  push32(0x122e0418u); f_122dee60();
  /* 122e0418 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e041b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e041e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0421 push edx */
  push32((uint32_t)(EDX));
  /* 122e0422 call 0x122e2c10 */
  push32(0x122e0427u); f_122e2c10();
  /* 122e0427 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e042a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e042d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122e0430 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0431 call 0x122e2ae0 */
  push32(0x122e0436u); f_122e2ae0();
  /* 122e0436 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e043b jge 0x122e0446 */
  if ((C.sf==C.of)) goto L_122e0446;
  /* 122e043d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e0444 jmp 0x122e046a */
  goto L_122e046a;
L_122e0446:;
  /* 122e0446 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0449 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e044d je 0x122e046a */
  if (C.zf) goto L_122e046a;
  /* 122e044f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0451 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0454 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e0457 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0458 call 0x122d7c10 */
  push32(0x122e045du); f_122d7c10();
  /* 122e045d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0460 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0463 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_122e046a:;
  /* 122e046a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e046d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 122e0474 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0477 pop edi */
  EDI = (pop32());
  /* 122e0478 pop esi */
  ESI = (pop32());
  /* 122e0479 pop ebx */
  EBX = (pop32());
  /* 122e047a mov esp, ebp */
  ESP = (EBP);
  /* 122e047c pop ebp */
  EBP = (pop32());
  /* 122e047d ret  */
  ESPCHK(0x122e03c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010480 @ 0x122e0480 (210 bytes, 63 insns) */
void f_122e0480(void) {
  FTRACE(0x122e0480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0480 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0481 mov ebp, esp */
  EBP = (ESP);
  /* 122e0483 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0484 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0487 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e048d jae 0x122e04b1 */
  if (!C.cf) goto L_122e04b1;
  /* 122e048f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0492 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122e0495 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0498 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122e049b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e049e mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122e04a5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122e04aa and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122e04ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e04af jne 0x122e04c4 */
  if (!C.zf) goto L_122e04c4;
L_122e04b1:;
  /* 122e04b1 call 0x122de6f0 */
  push32(0x122e04b6u); f_122de6f0();
  /* 122e04b6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122e04bc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e04bf jmp 0x122e054e */
  goto L_122e054e;
L_122e04c4:;
  /* 122e04c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e04c7 push edx */
  push32((uint32_t)(EDX));
  /* 122e04c8 call 0x122dec20 */
  push32(0x122e04cdu); f_122dec20();
  /* 122e04cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e04d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e04d3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122e04d6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e04d9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122e04dc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e04df mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122e04e6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 122e04eb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 122e04ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e04f0 je 0x122e052d */
  if (C.zf) goto L_122e052d;
  /* 122e04f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e04f5 push ecx */
  push32((uint32_t)(ECX));
  /* 122e04f6 call 0x122deaa0 */
  push32(0x122e04fbu); f_122deaa0();
  /* 122e04fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e04fe push eax */
  push32((uint32_t)(EAX));
  /* 122e04ff call dword ptr [0x123042e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042e8))), 0x122e0505u);
  /* 122e0505 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e0507 jne 0x122e0514 */
  if (!C.zf) goto L_122e0514;
  /* 122e0509 call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122e050fu);
  /* 122e050f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e0512 jmp 0x122e051b */
  goto L_122e051b;
L_122e0514:;
  /* 122e0514 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122e051b:;
  /* 122e051b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e051f jne 0x122e0523 */
  if (!C.zf) goto L_122e0523;
  /* 122e0521 jmp 0x122e053f */
  goto L_122e053f;
L_122e0523:;
  /* 122e0523 call 0x122de700 */
  push32(0x122e0528u); f_122de700();
  /* 122e0528 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e052b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122e052d:;
  /* 122e052d call 0x122de6f0 */
  push32(0x122e0532u); f_122de6f0();
  /* 122e0532 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122e0538 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e053f:;
  /* 122e053f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0542 push eax */
  push32((uint32_t)(EAX));
  /* 122e0543 call 0x122decb0 */
  push32(0x122e0548u); f_122decb0();
  /* 122e0548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e054b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122e054e:;
  /* 122e054e mov esp, ebp */
  ESP = (EBP);
  /* 122e0550 pop ebp */
  EBP = (pop32());
  /* 122e0551 ret  */
  ESPCHK(0x122e0480u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x122e0560 (219 bytes, 64 insns) */
void f_122e0560(void) {
  FTRACE(0x122e0560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0560 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0561 mov ebp, esp */
  EBP = (ESP);
  /* 122e0563 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0564 cmp dword ptr [0x1230196c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1230196c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e056b je 0x122e0601 */
  if (C.zf) goto L_122e0601;
  /* 122e0571 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 122e0573 push 0x122fda5c */
  push32((uint32_t)(0x122fda5cu));
  /* 122e0578 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e057a push 0xac */
  push32((uint32_t)(0xacu));
  /* 122e057f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0581 call 0x122d7590 */
  push32(0x122e0586u); f_122d7590();
  /* 122e0586 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e058c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0590 jne 0x122e059c */
  if (!C.zf) goto L_122e059c;
  /* 122e0592 mov eax, 1 */
  EAX = (0x1u);
  /* 122e0597 jmp 0x122e0637 */
  goto L_122e0637;
L_122e059c:;
  /* 122e059c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e059f push eax */
  push32((uint32_t)(EAX));
  /* 122e05a0 call 0x122e0640 */
  push32(0x122e05a5u); f_122e0640();
  /* 122e05a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e05a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e05aa je 0x122e05cd */
  if (C.zf) goto L_122e05cd;
  /* 122e05ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e05af push ecx */
  push32((uint32_t)(ECX));
  /* 122e05b0 call 0x122e0bd0 */
  push32(0x122e05b5u); f_122e0bd0();
  /* 122e05b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e05b8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e05ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e05bd push edx */
  push32((uint32_t)(EDX));
  /* 122e05be call 0x122d7c10 */
  push32(0x122e05c3u); f_122d7c10();
  /* 122e05c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e05c6 mov eax, 1 */
  EAX = (0x1u);
  /* 122e05cb jmp 0x122e0637 */
  goto L_122e0637;
L_122e05cd:;
  /* 122e05cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e05d0 mov dword ptr [0x12300ca8], eax */
  w32((uint32_t)(0x12300ca8), (EAX));
  /* 122e05d5 mov ecx, dword ptr [0x12301980] */
  ECX = (r32((uint32_t)(0x12301980)));
  /* 122e05db push ecx */
  push32((uint32_t)(ECX));
  /* 122e05dc call 0x122e0bd0 */
  push32(0x122e05e1u); f_122e0bd0();
  /* 122e05e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e05e4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e05e6 mov edx, dword ptr [0x12301980] */
  EDX = (r32((uint32_t)(0x12301980)));
  /* 122e05ec push edx */
  push32((uint32_t)(EDX));
  /* 122e05ed call 0x122d7c10 */
  push32(0x122e05f2u); f_122d7c10();
  /* 122e05f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e05f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e05f8 mov dword ptr [0x12301980], eax */
  w32((uint32_t)(0x12301980), (EAX));
  /* 122e05fd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e05ff jmp 0x122e0637 */
  goto L_122e0637;
L_122e0601:;
  /* 122e0601 mov dword ptr [0x12300ca8], 0x12300cb0 */
  w32((uint32_t)(0x12300ca8), (0x12300cb0u));
  /* 122e060b mov ecx, dword ptr [0x12301980] */
  ECX = (r32((uint32_t)(0x12301980)));
  /* 122e0611 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0612 call 0x122e0bd0 */
  push32(0x122e0617u); f_122e0bd0();
  /* 122e0617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e061a push 2 */
  push32((uint32_t)(0x2u));
  /* 122e061c mov edx, dword ptr [0x12301980] */
  EDX = (r32((uint32_t)(0x12301980)));
  /* 122e0622 push edx */
  push32((uint32_t)(EDX));
  /* 122e0623 call 0x122d7c10 */
  push32(0x122e0628u); f_122d7c10();
  /* 122e0628 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e062b mov dword ptr [0x12301980], 0 */
  w32((uint32_t)(0x12301980), (0x0u));
  /* 122e0635 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e0637:;
  /* 122e0637 mov esp, ebp */
  ESP = (EBP);
  /* 122e0639 pop ebp */
  EBP = (pop32());
  /* 122e063a ret  */
  ESPCHK(0x122e0560u, _esp0);
  ESP += 4; return;
}

/* FUN_10010640 @ 0x122e0640 (1423 bytes, 533 insns) */
void f_122e0640(void) {
  FTRACE(0x122e0640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0640 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0641 mov ebp, esp */
  EBP = (ESP);
  /* 122e0643 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e0646 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122e064d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e064f mov ax, word ptr [0x123019ba] */
  AX = (r16((uint32_t)(0x123019ba)));
  /* 122e0655 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e0658 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e065a mov cx, word ptr [0x123019bc] */
  CX = (r16((uint32_t)(0x123019bc)));
  /* 122e0661 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e0664 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0668 jne 0x122e0672 */
  if (!C.zf) goto L_122e0672;
  /* 122e066a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e066d jmp 0x122e0bcb */
  goto L_122e0bcb;
L_122e0672:;
  /* 122e0672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0675 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0678 push edx */
  push32((uint32_t)(EDX));
  /* 122e0679 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 122e067b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e067e push eax */
  push32((uint32_t)(EAX));
  /* 122e067f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0681 call 0x122e4120 */
  push32(0x122e0686u); f_122e4120();
  /* 122e0686 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0689 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e068c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e068e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0691 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0694 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0697 push edx */
  push32((uint32_t)(EDX));
  /* 122e0698 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 122e069a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e069d push eax */
  push32((uint32_t)(EAX));
  /* 122e069e push 1 */
  push32((uint32_t)(0x1u));
  /* 122e06a0 call 0x122e4120 */
  push32(0x122e06a5u); f_122e4120();
  /* 122e06a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e06ab or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e06ad mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e06b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e06b3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06b6 push edx */
  push32((uint32_t)(EDX));
  /* 122e06b7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 122e06b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e06bc push eax */
  push32((uint32_t)(EAX));
  /* 122e06bd push 1 */
  push32((uint32_t)(0x1u));
  /* 122e06bf call 0x122e4120 */
  push32(0x122e06c4u); f_122e4120();
  /* 122e06c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06c7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e06ca or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e06cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e06cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e06d2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06d5 push edx */
  push32((uint32_t)(EDX));
  /* 122e06d6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 122e06d8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e06db push eax */
  push32((uint32_t)(EAX));
  /* 122e06dc push 1 */
  push32((uint32_t)(0x1u));
  /* 122e06de call 0x122e4120 */
  push32(0x122e06e3u); f_122e4120();
  /* 122e06e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e06e9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e06eb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e06ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e06f1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e06f4 push edx */
  push32((uint32_t)(EDX));
  /* 122e06f5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 122e06f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e06fa push eax */
  push32((uint32_t)(EAX));
  /* 122e06fb push 1 */
  push32((uint32_t)(0x1u));
  /* 122e06fd call 0x122e4120 */
  push32(0x122e0702u); f_122e4120();
  /* 122e0702 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0705 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0708 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e070a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e070d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0710 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0713 push edx */
  push32((uint32_t)(EDX));
  /* 122e0714 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 122e0716 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0719 push eax */
  push32((uint32_t)(EAX));
  /* 122e071a push 1 */
  push32((uint32_t)(0x1u));
  /* 122e071c call 0x122e4120 */
  push32(0x122e0721u); f_122e4120();
  /* 122e0721 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0724 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0727 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0729 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e072c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e072f push edx */
  push32((uint32_t)(EDX));
  /* 122e0730 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 122e0732 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0735 push eax */
  push32((uint32_t)(EAX));
  /* 122e0736 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0738 call 0x122e4120 */
  push32(0x122e073du); f_122e4120();
  /* 122e073d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0740 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0743 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0745 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0748 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e074b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e074e push edx */
  push32((uint32_t)(EDX));
  /* 122e074f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 122e0751 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0754 push eax */
  push32((uint32_t)(EAX));
  /* 122e0755 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0757 call 0x122e4120 */
  push32(0x122e075cu); f_122e4120();
  /* 122e075c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e075f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0762 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0764 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0767 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e076a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e076d push edx */
  push32((uint32_t)(EDX));
  /* 122e076e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 122e0770 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0773 push eax */
  push32((uint32_t)(EAX));
  /* 122e0774 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0776 call 0x122e4120 */
  push32(0x122e077bu); f_122e4120();
  /* 122e077b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e077e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0781 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0783 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0786 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0789 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e078c push edx */
  push32((uint32_t)(EDX));
  /* 122e078d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 122e078f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0792 push eax */
  push32((uint32_t)(EAX));
  /* 122e0793 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0795 call 0x122e4120 */
  push32(0x122e079au); f_122e4120();
  /* 122e079a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e079d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e07a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e07a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e07a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e07a8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07ab push edx */
  push32((uint32_t)(EDX));
  /* 122e07ac push 0x2d */
  push32((uint32_t)(0x2du));
  /* 122e07ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e07b1 push eax */
  push32((uint32_t)(EAX));
  /* 122e07b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e07b4 call 0x122e4120 */
  push32(0x122e07b9u); f_122e4120();
  /* 122e07b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e07bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e07c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e07c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e07c7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07ca push edx */
  push32((uint32_t)(EDX));
  /* 122e07cb push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 122e07cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e07d0 push eax */
  push32((uint32_t)(EAX));
  /* 122e07d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e07d3 call 0x122e4120 */
  push32(0x122e07d8u); f_122e4120();
  /* 122e07d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e07de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e07e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e07e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e07e6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07e9 push edx */
  push32((uint32_t)(EDX));
  /* 122e07ea push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 122e07ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e07ef push eax */
  push32((uint32_t)(EAX));
  /* 122e07f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e07f2 call 0x122e4120 */
  push32(0x122e07f7u); f_122e4120();
  /* 122e07f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e07fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e07fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e07ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0802 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0805 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0808 push edx */
  push32((uint32_t)(EDX));
  /* 122e0809 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122e080b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e080e push eax */
  push32((uint32_t)(EAX));
  /* 122e080f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0811 call 0x122e4120 */
  push32(0x122e0816u); f_122e4120();
  /* 122e0816 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0819 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e081c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e081e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0821 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0824 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0827 push edx */
  push32((uint32_t)(EDX));
  /* 122e0828 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 122e082a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e082d push eax */
  push32((uint32_t)(EAX));
  /* 122e082e push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0830 call 0x122e4120 */
  push32(0x122e0835u); f_122e4120();
  /* 122e0835 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0838 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e083b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e083d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0840 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0843 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0846 push edx */
  push32((uint32_t)(EDX));
  /* 122e0847 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 122e0849 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e084c push eax */
  push32((uint32_t)(EAX));
  /* 122e084d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e084f call 0x122e4120 */
  push32(0x122e0854u); f_122e4120();
  /* 122e0854 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e085a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e085c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e085f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0862 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0865 push edx */
  push32((uint32_t)(EDX));
  /* 122e0866 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 122e0868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e086b push eax */
  push32((uint32_t)(EAX));
  /* 122e086c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e086e call 0x122e4120 */
  push32(0x122e0873u); f_122e4120();
  /* 122e0873 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0876 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0879 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e087b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e087e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0881 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0884 push edx */
  push32((uint32_t)(EDX));
  /* 122e0885 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 122e0887 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e088a push eax */
  push32((uint32_t)(EAX));
  /* 122e088b push 1 */
  push32((uint32_t)(0x1u));
  /* 122e088d call 0x122e4120 */
  push32(0x122e0892u); f_122e4120();
  /* 122e0892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0895 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0898 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e089a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e089d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e08a0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08a3 push edx */
  push32((uint32_t)(EDX));
  /* 122e08a4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 122e08a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e08a9 push eax */
  push32((uint32_t)(EAX));
  /* 122e08aa push 1 */
  push32((uint32_t)(0x1u));
  /* 122e08ac call 0x122e4120 */
  push32(0x122e08b1u); f_122e4120();
  /* 122e08b1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08b4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e08b7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e08b9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e08bc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e08bf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08c2 push edx */
  push32((uint32_t)(EDX));
  /* 122e08c3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 122e08c5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e08c8 push eax */
  push32((uint32_t)(EAX));
  /* 122e08c9 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e08cb call 0x122e4120 */
  push32(0x122e08d0u); f_122e4120();
  /* 122e08d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e08d6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e08d8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e08db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e08de add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08e1 push edx */
  push32((uint32_t)(EDX));
  /* 122e08e2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 122e08e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e08e7 push eax */
  push32((uint32_t)(EAX));
  /* 122e08e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e08ea call 0x122e4120 */
  push32(0x122e08efu); f_122e4120();
  /* 122e08ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e08f2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e08f5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e08f7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e08fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e08fd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0900 push edx */
  push32((uint32_t)(EDX));
  /* 122e0901 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 122e0903 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0906 push eax */
  push32((uint32_t)(EAX));
  /* 122e0907 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0909 call 0x122e4120 */
  push32(0x122e090eu); f_122e4120();
  /* 122e090e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0914 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0916 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0919 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e091c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e091f push edx */
  push32((uint32_t)(EDX));
  /* 122e0920 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 122e0922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0925 push eax */
  push32((uint32_t)(EAX));
  /* 122e0926 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0928 call 0x122e4120 */
  push32(0x122e092du); f_122e4120();
  /* 122e092d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0930 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0933 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0935 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0938 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e093b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e093e push edx */
  push32((uint32_t)(EDX));
  /* 122e093f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 122e0941 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0944 push eax */
  push32((uint32_t)(EAX));
  /* 122e0945 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0947 call 0x122e4120 */
  push32(0x122e094cu); f_122e4120();
  /* 122e094c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e094f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0952 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0954 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e095a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e095d push edx */
  push32((uint32_t)(EDX));
  /* 122e095e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 122e0960 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0963 push eax */
  push32((uint32_t)(EAX));
  /* 122e0964 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0966 call 0x122e4120 */
  push32(0x122e096bu); f_122e4120();
  /* 122e096b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e096e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0971 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0973 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0976 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0979 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e097c push edx */
  push32((uint32_t)(EDX));
  /* 122e097d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 122e097f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0982 push eax */
  push32((uint32_t)(EAX));
  /* 122e0983 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0985 call 0x122e4120 */
  push32(0x122e098au); f_122e4120();
  /* 122e098a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e098d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0990 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0992 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0995 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0998 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e099b push edx */
  push32((uint32_t)(EDX));
  /* 122e099c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 122e099e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e09a1 push eax */
  push32((uint32_t)(EAX));
  /* 122e09a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e09a4 call 0x122e4120 */
  push32(0x122e09a9u); f_122e4120();
  /* 122e09a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09ac mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e09af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e09b1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e09b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e09b7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09ba push edx */
  push32((uint32_t)(EDX));
  /* 122e09bb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 122e09bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e09c0 push eax */
  push32((uint32_t)(EAX));
  /* 122e09c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e09c3 call 0x122e4120 */
  push32(0x122e09c8u); f_122e4120();
  /* 122e09c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e09ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e09d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e09d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e09d6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09d9 push edx */
  push32((uint32_t)(EDX));
  /* 122e09da push 0x3a */
  push32((uint32_t)(0x3au));
  /* 122e09dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e09df push eax */
  push32((uint32_t)(EAX));
  /* 122e09e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e09e2 call 0x122e4120 */
  push32(0x122e09e7u); f_122e4120();
  /* 122e09e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09ea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e09ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e09ef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e09f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e09f5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e09f8 push edx */
  push32((uint32_t)(EDX));
  /* 122e09f9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 122e09fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e09fe push eax */
  push32((uint32_t)(EAX));
  /* 122e09ff push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0a01 call 0x122e4120 */
  push32(0x122e0a06u); f_122e4120();
  /* 122e0a06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a09 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0a0c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0a0e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0a11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0a14 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a17 push edx */
  push32((uint32_t)(EDX));
  /* 122e0a18 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 122e0a1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0a1d push eax */
  push32((uint32_t)(EAX));
  /* 122e0a1e push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0a20 call 0x122e4120 */
  push32(0x122e0a25u); f_122e4120();
  /* 122e0a25 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a28 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0a2b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0a2d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0a30 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0a33 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a36 push edx */
  push32((uint32_t)(EDX));
  /* 122e0a37 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122e0a39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0a3c push eax */
  push32((uint32_t)(EAX));
  /* 122e0a3d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0a3f call 0x122e4120 */
  push32(0x122e0a44u); f_122e4120();
  /* 122e0a44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a47 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0a4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0a4c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0a4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0a52 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a58 push edx */
  push32((uint32_t)(EDX));
  /* 122e0a59 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 122e0a5b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0a5e push eax */
  push32((uint32_t)(EAX));
  /* 122e0a5f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0a61 call 0x122e4120 */
  push32(0x122e0a66u); f_122e4120();
  /* 122e0a66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0a6c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0a6e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0a71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0a74 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a7a push edx */
  push32((uint32_t)(EDX));
  /* 122e0a7b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122e0a7d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0a80 push eax */
  push32((uint32_t)(EAX));
  /* 122e0a81 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0a83 call 0x122e4120 */
  push32(0x122e0a88u); f_122e4120();
  /* 122e0a88 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0a8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0a90 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0a93 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0a96 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0a9c push edx */
  push32((uint32_t)(EDX));
  /* 122e0a9d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122e0a9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0aa2 push eax */
  push32((uint32_t)(EAX));
  /* 122e0aa3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0aa5 call 0x122e4120 */
  push32(0x122e0aaau); f_122e4120();
  /* 122e0aaa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0aad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0ab0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0ab2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0ab5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0ab8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0abe push edx */
  push32((uint32_t)(EDX));
  /* 122e0abf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 122e0ac1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0ac4 push eax */
  push32((uint32_t)(EAX));
  /* 122e0ac5 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0ac7 call 0x122e4120 */
  push32(0x122e0accu); f_122e4120();
  /* 122e0acc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0acf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0ad2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0ad4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0ad7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0ada add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ae0 push edx */
  push32((uint32_t)(EDX));
  /* 122e0ae1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 122e0ae3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0ae6 push eax */
  push32((uint32_t)(EAX));
  /* 122e0ae7 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0ae9 call 0x122e4120 */
  push32(0x122e0aeeu); f_122e4120();
  /* 122e0aee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0af1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0af4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0af6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0af9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0afc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b02 push edx */
  push32((uint32_t)(EDX));
  /* 122e0b03 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 122e0b05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0b08 push eax */
  push32((uint32_t)(EAX));
  /* 122e0b09 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0b0b call 0x122e4120 */
  push32(0x122e0b10u); f_122e4120();
  /* 122e0b10 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b13 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0b16 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0b18 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0b1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0b1e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b24 push edx */
  push32((uint32_t)(EDX));
  /* 122e0b25 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 122e0b27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0b2a push eax */
  push32((uint32_t)(EAX));
  /* 122e0b2b push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0b2d call 0x122e4120 */
  push32(0x122e0b32u); f_122e4120();
  /* 122e0b32 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0b38 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0b3a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0b3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0b40 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b46 push edx */
  push32((uint32_t)(EDX));
  /* 122e0b47 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 122e0b49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0b4c push eax */
  push32((uint32_t)(EAX));
  /* 122e0b4d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0b4f call 0x122e4120 */
  push32(0x122e0b54u); f_122e4120();
  /* 122e0b54 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b57 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0b5a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0b5c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0b5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0b62 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b68 push edx */
  push32((uint32_t)(EDX));
  /* 122e0b69 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 122e0b6b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0b6e push eax */
  push32((uint32_t)(EAX));
  /* 122e0b6f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0b71 call 0x122e4120 */
  push32(0x122e0b76u); f_122e4120();
  /* 122e0b76 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b79 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0b7c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0b7e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0b81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0b84 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b8a push edx */
  push32((uint32_t)(EDX));
  /* 122e0b8b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 122e0b8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0b90 push eax */
  push32((uint32_t)(EAX));
  /* 122e0b91 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0b93 call 0x122e4120 */
  push32(0x122e0b98u); f_122e4120();
  /* 122e0b98 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0b9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0b9e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0ba0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0ba3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0ba6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0bac push edx */
  push32((uint32_t)(EDX));
  /* 122e0bad push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 122e0bb2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0bb5 push eax */
  push32((uint32_t)(EAX));
  /* 122e0bb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0bb8 call 0x122e4120 */
  push32(0x122e0bbdu); f_122e4120();
  /* 122e0bbd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0bc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e0bc3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0bc5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e0bc8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_122e0bcb:;
  /* 122e0bcb mov esp, ebp */
  ESP = (EBP);
  /* 122e0bcd pop ebp */
  EBP = (pop32());
  /* 122e0bce ret  */
  ESPCHK(0x122e0640u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x122e0bd0 (779 bytes, 265 insns) */
void f_122e0bd0(void) {
  FTRACE(0x122e0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 122e0bd3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0bd7 jne 0x122e0bde */
  if (!C.zf) goto L_122e0bde;
  /* 122e0bd9 jmp 0x122e0ed9 */
  goto L_122e0ed9;
L_122e0bde:;
  /* 122e0bde push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0be0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0be3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122e0be6 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0be7 call 0x122d7c10 */
  push32(0x122e0becu); f_122d7c10();
  /* 122e0bec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0bef push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0bf1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0bf4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122e0bf7 push eax */
  push32((uint32_t)(EAX));
  /* 122e0bf8 call 0x122d7c10 */
  push32(0x122e0bfdu); f_122d7c10();
  /* 122e0bfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c00 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c05 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e0c08 push edx */
  push32((uint32_t)(EDX));
  /* 122e0c09 call 0x122d7c10 */
  push32(0x122e0c0eu); f_122d7c10();
  /* 122e0c0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c11 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c16 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122e0c19 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0c1a call 0x122d7c10 */
  push32(0x122e0c1fu); f_122d7c10();
  /* 122e0c1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c22 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c27 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e0c2a push eax */
  push32((uint32_t)(EAX));
  /* 122e0c2b call 0x122d7c10 */
  push32(0x122e0c30u); f_122d7c10();
  /* 122e0c30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c33 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c35 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c38 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122e0c3b push edx */
  push32((uint32_t)(EDX));
  /* 122e0c3c call 0x122d7c10 */
  push32(0x122e0c41u); f_122d7c10();
  /* 122e0c41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c44 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e0c4b push ecx */
  push32((uint32_t)(ECX));
  /* 122e0c4c call 0x122d7c10 */
  push32(0x122e0c51u); f_122d7c10();
  /* 122e0c51 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c54 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c56 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c59 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 122e0c5c push eax */
  push32((uint32_t)(EAX));
  /* 122e0c5d call 0x122d7c10 */
  push32(0x122e0c62u); f_122d7c10();
  /* 122e0c62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c65 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c6a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 122e0c6d push edx */
  push32((uint32_t)(EDX));
  /* 122e0c6e call 0x122d7c10 */
  push32(0x122e0c73u); f_122d7c10();
  /* 122e0c73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c76 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c7b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 122e0c7e push ecx */
  push32((uint32_t)(ECX));
  /* 122e0c7f call 0x122d7c10 */
  push32(0x122e0c84u); f_122d7c10();
  /* 122e0c84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c87 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c8c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 122e0c8f push eax */
  push32((uint32_t)(EAX));
  /* 122e0c90 call 0x122d7c10 */
  push32(0x122e0c95u); f_122d7c10();
  /* 122e0c95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0c98 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0c9a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0c9d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 122e0ca0 push edx */
  push32((uint32_t)(EDX));
  /* 122e0ca1 call 0x122d7c10 */
  push32(0x122e0ca6u); f_122d7c10();
  /* 122e0ca6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ca9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0cab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0cae mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 122e0cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0cb2 call 0x122d7c10 */
  push32(0x122e0cb7u); f_122d7c10();
  /* 122e0cb7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0cba push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0cbc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0cbf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e0cc2 push eax */
  push32((uint32_t)(EAX));
  /* 122e0cc3 call 0x122d7c10 */
  push32(0x122e0cc8u); f_122d7c10();
  /* 122e0cc8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ccb push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0ccd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0cd0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 122e0cd3 push edx */
  push32((uint32_t)(EDX));
  /* 122e0cd4 call 0x122d7c10 */
  push32(0x122e0cd9u); f_122d7c10();
  /* 122e0cd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0cdc push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0cde mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0ce1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 122e0ce4 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0ce5 call 0x122d7c10 */
  push32(0x122e0ceau); f_122d7c10();
  /* 122e0cea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ced push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0cef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0cf2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 122e0cf5 push eax */
  push32((uint32_t)(EAX));
  /* 122e0cf6 call 0x122d7c10 */
  push32(0x122e0cfbu); f_122d7c10();
  /* 122e0cfb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0cfe push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d03 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 122e0d06 push edx */
  push32((uint32_t)(EDX));
  /* 122e0d07 call 0x122d7c10 */
  push32(0x122e0d0cu); f_122d7c10();
  /* 122e0d0c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d0f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d11 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d14 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 122e0d17 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0d18 call 0x122d7c10 */
  push32(0x122e0d1du); f_122d7c10();
  /* 122e0d1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d20 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d22 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d25 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 122e0d28 push eax */
  push32((uint32_t)(EAX));
  /* 122e0d29 call 0x122d7c10 */
  push32(0x122e0d2eu); f_122d7c10();
  /* 122e0d2e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d31 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d36 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 122e0d39 push edx */
  push32((uint32_t)(EDX));
  /* 122e0d3a call 0x122d7c10 */
  push32(0x122e0d3fu); f_122d7c10();
  /* 122e0d3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d42 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d47 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 122e0d4a push ecx */
  push32((uint32_t)(ECX));
  /* 122e0d4b call 0x122d7c10 */
  push32(0x122e0d50u); f_122d7c10();
  /* 122e0d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d53 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d58 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 122e0d5b push eax */
  push32((uint32_t)(EAX));
  /* 122e0d5c call 0x122d7c10 */
  push32(0x122e0d61u); f_122d7c10();
  /* 122e0d61 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d64 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d69 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 122e0d6c push edx */
  push32((uint32_t)(EDX));
  /* 122e0d6d call 0x122d7c10 */
  push32(0x122e0d72u); f_122d7c10();
  /* 122e0d72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d75 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d77 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d7a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 122e0d7d push ecx */
  push32((uint32_t)(ECX));
  /* 122e0d7e call 0x122d7c10 */
  push32(0x122e0d83u); f_122d7c10();
  /* 122e0d83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d86 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d8b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 122e0d8e push eax */
  push32((uint32_t)(EAX));
  /* 122e0d8f call 0x122d7c10 */
  push32(0x122e0d94u); f_122d7c10();
  /* 122e0d94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0d97 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0d99 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0d9c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 122e0d9f push edx */
  push32((uint32_t)(EDX));
  /* 122e0da0 call 0x122d7c10 */
  push32(0x122e0da5u); f_122d7c10();
  /* 122e0da5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0da8 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0daa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0dad mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 122e0db0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0db1 call 0x122d7c10 */
  push32(0x122e0db6u); f_122d7c10();
  /* 122e0db6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0db9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0dbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0dbe mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 122e0dc1 push eax */
  push32((uint32_t)(EAX));
  /* 122e0dc2 call 0x122d7c10 */
  push32(0x122e0dc7u); f_122d7c10();
  /* 122e0dc7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0dca push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0dcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0dcf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 122e0dd2 push edx */
  push32((uint32_t)(EDX));
  /* 122e0dd3 call 0x122d7c10 */
  push32(0x122e0dd8u); f_122d7c10();
  /* 122e0dd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ddb push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0ddd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0de0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 122e0de3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0de4 call 0x122d7c10 */
  push32(0x122e0de9u); f_122d7c10();
  /* 122e0de9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0dec push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0dee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0df1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 122e0df4 push eax */
  push32((uint32_t)(EAX));
  /* 122e0df5 call 0x122d7c10 */
  push32(0x122e0dfau); f_122d7c10();
  /* 122e0dfa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0dfd push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0dff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e02 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 122e0e08 push edx */
  push32((uint32_t)(EDX));
  /* 122e0e09 call 0x122d7c10 */
  push32(0x122e0e0eu); f_122d7c10();
  /* 122e0e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e11 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e16 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 122e0e1c push ecx */
  push32((uint32_t)(ECX));
  /* 122e0e1d call 0x122d7c10 */
  push32(0x122e0e22u); f_122d7c10();
  /* 122e0e22 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e25 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e2a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 122e0e30 push eax */
  push32((uint32_t)(EAX));
  /* 122e0e31 call 0x122d7c10 */
  push32(0x122e0e36u); f_122d7c10();
  /* 122e0e36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e39 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e3e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 122e0e44 push edx */
  push32((uint32_t)(EDX));
  /* 122e0e45 call 0x122d7c10 */
  push32(0x122e0e4au); f_122d7c10();
  /* 122e0e4a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e4d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e52 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 122e0e58 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0e59 call 0x122d7c10 */
  push32(0x122e0e5eu); f_122d7c10();
  /* 122e0e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e61 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e63 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e66 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 122e0e6c push eax */
  push32((uint32_t)(EAX));
  /* 122e0e6d call 0x122d7c10 */
  push32(0x122e0e72u); f_122d7c10();
  /* 122e0e72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e75 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e77 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e7a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 122e0e80 push edx */
  push32((uint32_t)(EDX));
  /* 122e0e81 call 0x122d7c10 */
  push32(0x122e0e86u); f_122d7c10();
  /* 122e0e86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e89 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0e8e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 122e0e94 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0e95 call 0x122d7c10 */
  push32(0x122e0e9au); f_122d7c10();
  /* 122e0e9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0e9d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0e9f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0ea2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 122e0ea8 push eax */
  push32((uint32_t)(EAX));
  /* 122e0ea9 call 0x122d7c10 */
  push32(0x122e0eaeu); f_122d7c10();
  /* 122e0eae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0eb1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0eb3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0eb6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 122e0ebc push edx */
  push32((uint32_t)(EDX));
  /* 122e0ebd call 0x122d7c10 */
  push32(0x122e0ec2u); f_122d7c10();
  /* 122e0ec2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ec5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0ec7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e0eca mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 122e0ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0ed1 call 0x122d7c10 */
  push32(0x122e0ed6u); f_122d7c10();
  /* 122e0ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e0ed9:;
  /* 122e0ed9 pop ebp */
  EBP = (pop32());
  /* 122e0eda ret  */
  ESPCHK(0x122e0bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ee0 @ 0x122e0ee0 (678 bytes, 180 insns) */
void f_122e0ee0(void) {
  FTRACE(0x122e0ee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e0ee0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e0ee1 mov ebp, esp */
  EBP = (ESP);
  /* 122e0ee3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e0ee6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e0eed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e0eef mov ax, word ptr [0x123019b6] */
  AX = (r16((uint32_t)(0x123019b6)));
  /* 122e0ef5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e0ef8 cmp dword ptr [0x12301968], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301968))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0eff je 0x122e105a */
  if (C.zf) goto L_122e105a;
  /* 122e0f05 push 0x12301984 */
  push32((uint32_t)(0x12301984u));
  /* 122e0f0a push 0xe */
  push32((uint32_t)(0xeu));
  /* 122e0f0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0f0f push ecx */
  push32((uint32_t)(ECX));
  /* 122e0f10 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0f12 call 0x122e4120 */
  push32(0x122e0f17u); f_122e4120();
  /* 122e0f17 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f1a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0f1d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 122e0f1f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e0f22 push 0x12301988 */
  push32((uint32_t)(0x12301988u));
  /* 122e0f27 push 0xf */
  push32((uint32_t)(0xfu));
  /* 122e0f29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0f2c push eax */
  push32((uint32_t)(EAX));
  /* 122e0f2d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0f2f call 0x122e4120 */
  push32(0x122e0f34u); f_122e4120();
  /* 122e0f34 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0f3a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0f3c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e0f3f push 0x1230198c */
  push32((uint32_t)(0x1230198cu));
  /* 122e0f44 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 122e0f46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e0f49 push edx */
  push32((uint32_t)(EDX));
  /* 122e0f4a push 1 */
  push32((uint32_t)(0x1u));
  /* 122e0f4c call 0x122e4120 */
  push32(0x122e0f51u); f_122e4120();
  /* 122e0f51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e0f57 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e0f59 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e0f5c mov edx, dword ptr [0x1230198c] */
  EDX = (r32((uint32_t)(0x1230198c)));
  /* 122e0f62 push edx */
  push32((uint32_t)(EDX));
  /* 122e0f63 call 0x122e1190 */
  push32(0x122e0f68u); f_122e1190();
  /* 122e0f68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0f6f je 0x122e0fc9 */
  if (C.zf) goto L_122e0fc9;
  /* 122e0f71 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0f73 mov eax, dword ptr [0x12301984] */
  EAX = (r32((uint32_t)(0x12301984)));
  /* 122e0f78 push eax */
  push32((uint32_t)(EAX));
  /* 122e0f79 call 0x122d7c10 */
  push32(0x122e0f7eu); f_122d7c10();
  /* 122e0f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f81 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0f83 mov ecx, dword ptr [0x12301988] */
  ECX = (r32((uint32_t)(0x12301988)));
  /* 122e0f89 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0f8a call 0x122d7c10 */
  push32(0x122e0f8fu); f_122d7c10();
  /* 122e0f8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0f92 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0f94 mov edx, dword ptr [0x1230198c] */
  EDX = (r32((uint32_t)(0x1230198c)));
  /* 122e0f9a push edx */
  push32((uint32_t)(EDX));
  /* 122e0f9b call 0x122d7c10 */
  push32(0x122e0fa0u); f_122d7c10();
  /* 122e0fa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0fa3 mov dword ptr [0x12301984], 0 */
  w32((uint32_t)(0x12301984), (0x0u));
  /* 122e0fad mov dword ptr [0x12301988], 0 */
  w32((uint32_t)(0x12301988), (0x0u));
  /* 122e0fb7 mov dword ptr [0x1230198c], 0 */
  w32((uint32_t)(0x1230198c), (0x0u));
  /* 122e0fc1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e0fc4 jmp 0x122e1182 */
  goto L_122e1182;
L_122e0fc9:;
  /* 122e0fc9 mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e0fce cmp dword ptr [eax], 0x12300d60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x12300d60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e0fd4 je 0x122e1010 */
  if (C.zf) goto L_122e1010;
  /* 122e0fd6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0fd8 mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e0fde mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e0fe0 push edx */
  push32((uint32_t)(EDX));
  /* 122e0fe1 call 0x122d7c10 */
  push32(0x122e0fe6u); f_122d7c10();
  /* 122e0fe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0fe9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0feb mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e0ff0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122e0ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e0ff4 call 0x122d7c10 */
  push32(0x122e0ff9u); f_122d7c10();
  /* 122e0ff9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e0ffc push 2 */
  push32((uint32_t)(0x2u));
  /* 122e0ffe mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e1004 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122e1007 push eax */
  push32((uint32_t)(EAX));
  /* 122e1008 call 0x122d7c10 */
  push32(0x122e100du); f_122d7c10();
  /* 122e100d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1010:;
  /* 122e1010 mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1016 mov edx, dword ptr [0x12301984] */
  EDX = (r32((uint32_t)(0x12301984)));
  /* 122e101c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 122e101e mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e1023 mov ecx, dword ptr [0x12301988] */
  ECX = (r32((uint32_t)(0x12301988)));
  /* 122e1029 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 122e102c mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e1032 mov eax, dword ptr [0x1230198c] */
  EAX = (r32((uint32_t)(0x1230198c)));
  /* 122e1037 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 122e103a mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1040 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e1042 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e1044 mov byte ptr [0x1230015c], al */
  w8((uint32_t)(0x1230015c), (AL));
  /* 122e1049 mov dword ptr [0x12300160], 1 */
  w32((uint32_t)(0x12300160), (0x1u));
  /* 122e1053 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1055 jmp 0x122e1182 */
  goto L_122e1182;
L_122e105a:;
  /* 122e105a push 2 */
  push32((uint32_t)(0x2u));
  /* 122e105c mov ecx, dword ptr [0x12301984] */
  ECX = (r32((uint32_t)(0x12301984)));
  /* 122e1062 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1063 call 0x122d7c10 */
  push32(0x122e1068u); f_122d7c10();
  /* 122e1068 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e106b push 2 */
  push32((uint32_t)(0x2u));
  /* 122e106d mov edx, dword ptr [0x12301988] */
  EDX = (r32((uint32_t)(0x12301988)));
  /* 122e1073 push edx */
  push32((uint32_t)(EDX));
  /* 122e1074 call 0x122d7c10 */
  push32(0x122e1079u); f_122d7c10();
  /* 122e1079 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e107c push 2 */
  push32((uint32_t)(0x2u));
  /* 122e107e mov eax, dword ptr [0x1230198c] */
  EAX = (r32((uint32_t)(0x1230198c)));
  /* 122e1083 push eax */
  push32((uint32_t)(EAX));
  /* 122e1084 call 0x122d7c10 */
  push32(0x122e1089u); f_122d7c10();
  /* 122e1089 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e108c mov dword ptr [0x12301984], 0 */
  w32((uint32_t)(0x12301984), (0x0u));
  /* 122e1096 mov dword ptr [0x12301988], 0 */
  w32((uint32_t)(0x12301988), (0x0u));
  /* 122e10a0 mov dword ptr [0x1230198c], 0 */
  w32((uint32_t)(0x1230198c), (0x0u));
  /* 122e10aa push 0x88 */
  push32((uint32_t)(0x88u));
  /* 122e10af push 0x122fda68 */
  push32((uint32_t)(0x122fda68u));
  /* 122e10b4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e10b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e10b8 call 0x122d7180 */
  push32(0x122e10bdu); f_122d7180();
  /* 122e10bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e10c0 mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e10c6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e10c8 mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e10ce cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e10d1 jne 0x122e10db */
  if (!C.zf) goto L_122e10db;
  /* 122e10d3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e10d6 jmp 0x122e1182 */
  goto L_122e1182;
L_122e10db:;
  /* 122e10db push 0x122fda04 */
  push32((uint32_t)(0x122fda04u));
  /* 122e10e0 mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e10e5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e10e7 push ecx */
  push32((uint32_t)(ECX));
  /* 122e10e8 call 0x122da130 */
  push32(0x122e10edu); f_122da130();
  /* 122e10ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e10f0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 122e10f5 push 0x122fda68 */
  push32((uint32_t)(0x122fda68u));
  /* 122e10fa push 2 */
  push32((uint32_t)(0x2u));
  /* 122e10fc push 2 */
  push32((uint32_t)(0x2u));
  /* 122e10fe call 0x122d7180 */
  push32(0x122e1103u); f_122d7180();
  /* 122e1103 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1106 mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e110c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 122e110f mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e1114 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1118 jne 0x122e111f */
  if (!C.zf) goto L_122e111f;
  /* 122e111a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e111d jmp 0x122e1182 */
  goto L_122e1182;
L_122e111f:;
  /* 122e111f mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1125 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122e1128 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122e112b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 122e1130 push 0x122fda68 */
  push32((uint32_t)(0x122fda68u));
  /* 122e1135 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1137 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1139 call 0x122d7180 */
  push32(0x122e113eu); f_122d7180();
  /* 122e113e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1141 mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1147 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 122e114a mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e1150 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1154 jne 0x122e115b */
  if (!C.zf) goto L_122e115b;
  /* 122e1156 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e1159 jmp 0x122e1182 */
  goto L_122e1182;
L_122e115b:;
  /* 122e115b mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e1160 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122e1163 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 122e1166 mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e116c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e116e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e1170 mov byte ptr [0x1230015c], cl */
  w8((uint32_t)(0x1230015c), (CL));
  /* 122e1176 mov dword ptr [0x12300160], 1 */
  w32((uint32_t)(0x12300160), (0x1u));
  /* 122e1180 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e1182:;
  /* 122e1182 mov esp, ebp */
  ESP = (EBP);
  /* 122e1184 pop ebp */
  EBP = (pop32());
  /* 122e1185 ret  */
  ESPCHK(0x122e0ee0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x122e1190 (125 bytes, 49 insns) */
void f_122e1190(void) {
  FTRACE(0x122e1190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1190 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1191 mov ebp, esp */
  EBP = (ESP);
  /* 122e1193 push ecx */
  push32((uint32_t)(ECX));
L_122e1194:;
  /* 122e1194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1197 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e119a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e119c je 0x122e1209 */
  if (C.zf) goto L_122e1209;
  /* 122e119e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11a1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e11a4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e11a7 jl 0x122e11cd */
  if ((C.sf!=C.of)) goto L_122e11cd;
  /* 122e11a9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11ac movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e11af cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e11b2 jg 0x122e11cd */
  if ((!C.zf&&C.sf==C.of)) goto L_122e11cd;
  /* 122e11b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11b7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e11ba sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e11bd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11c0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122e11c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e11c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e11cb jmp 0x122e1207 */
  goto L_122e1207;
L_122e11cd:;
  /* 122e11cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11d0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e11d3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e11d6 jne 0x122e11fe */
  if (!C.zf) goto L_122e11fe;
  /* 122e11d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e11db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e11de:;
  /* 122e11de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e11e1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e11e4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122e11e7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e11e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e11ec add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e11ef mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e11f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e11f5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e11f8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e11fa jne 0x122e11de */
  if (!C.zf) goto L_122e11de;
  /* 122e11fc jmp 0x122e1207 */
  goto L_122e1207;
L_122e11fe:;
  /* 122e11fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1201 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1204 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122e1207:;
  /* 122e1207 jmp 0x122e1194 */
  goto L_122e1194;
L_122e1209:;
  /* 122e1209 mov esp, ebp */
  ESP = (EBP);
  /* 122e120b pop ebp */
  EBP = (pop32());
  /* 122e120c ret  */
  ESPCHK(0x122e1190u, _esp0);
  ESP += 4; return;
}

/* FUN_10011210 @ 0x122e1210 (304 bytes, 85 insns) */
void f_122e1210(void) {
  FTRACE(0x122e1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1210 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1211 mov ebp, esp */
  EBP = (ESP);
  /* 122e1213 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1214 cmp dword ptr [0x12301964], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301964))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e121b je 0x122e12dc */
  if (C.zf) goto L_122e12dc;
  /* 122e1221 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 122e1223 push 0x122fda74 */
  push32((uint32_t)(0x122fda74u));
  /* 122e1228 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e122a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122e122c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e122e call 0x122d7590 */
  push32(0x122e1233u); f_122d7590();
  /* 122e1233 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1236 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e1239 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e123d jne 0x122e1249 */
  if (!C.zf) goto L_122e1249;
  /* 122e123f mov eax, 1 */
  EAX = (0x1u);
  /* 122e1244 jmp 0x122e133c */
  goto L_122e133c;
L_122e1249:;
  /* 122e1249 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e124c push eax */
  push32((uint32_t)(EAX));
  /* 122e124d call 0x122e1340 */
  push32(0x122e1252u); f_122e1340();
  /* 122e1252 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1255 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1257 je 0x122e127d */
  if (C.zf) goto L_122e127d;
  /* 122e1259 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e125c push ecx */
  push32((uint32_t)(ECX));
  /* 122e125d call 0x122e15d0 */
  push32(0x122e1262u); f_122e15d0();
  /* 122e1262 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1265 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1267 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e126a push edx */
  push32((uint32_t)(EDX));
  /* 122e126b call 0x122d7c10 */
  push32(0x122e1270u); f_122d7c10();
  /* 122e1270 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1273 mov eax, 1 */
  EAX = (0x1u);
  /* 122e1278 jmp 0x122e133c */
  goto L_122e133c;
L_122e127d:;
  /* 122e127d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1280 mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1286 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e1288 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e128a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e128d mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e1293 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122e1296 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 122e1299 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e129c mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e12a2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 122e12a5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 122e12a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e12ab mov dword ptr [0x12300d98], eax */
  w32((uint32_t)(0x12300d98), (EAX));
  /* 122e12b0 mov ecx, dword ptr [0x12301990] */
  ECX = (r32((uint32_t)(0x12301990)));
  /* 122e12b6 push ecx */
  push32((uint32_t)(ECX));
  /* 122e12b7 call 0x122e15d0 */
  push32(0x122e12bcu); f_122e15d0();
  /* 122e12bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e12bf push 2 */
  push32((uint32_t)(0x2u));
  /* 122e12c1 mov edx, dword ptr [0x12301990] */
  EDX = (r32((uint32_t)(0x12301990)));
  /* 122e12c7 push edx */
  push32((uint32_t)(EDX));
  /* 122e12c8 call 0x122d7c10 */
  push32(0x122e12cdu); f_122d7c10();
  /* 122e12cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e12d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e12d3 mov dword ptr [0x12301990], eax */
  w32((uint32_t)(0x12301990), (EAX));
  /* 122e12d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e12da jmp 0x122e133c */
  goto L_122e133c;
L_122e12dc:;
  /* 122e12dc mov ecx, dword ptr [0x12300d98] */
  ECX = (r32((uint32_t)(0x12300d98)));
  /* 122e12e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e12e4 mov dword ptr [0x12300d68], edx */
  w32((uint32_t)(0x12300d68), (EDX));
  /* 122e12ea mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e12ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122e12f2 mov dword ptr [0x12300d6c], ecx */
  w32((uint32_t)(0x12300d6c), (ECX));
  /* 122e12f8 mov edx, dword ptr [0x12300d98] */
  EDX = (r32((uint32_t)(0x12300d98)));
  /* 122e12fe mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122e1301 mov dword ptr [0x12300d70], eax */
  w32((uint32_t)(0x12300d70), (EAX));
  /* 122e1306 mov dword ptr [0x12300d98], 0x12300d68 */
  w32((uint32_t)(0x12300d98), (0x12300d68u));
  /* 122e1310 mov ecx, dword ptr [0x12301990] */
  ECX = (r32((uint32_t)(0x12301990)));
  /* 122e1316 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1317 call 0x122e15d0 */
  push32(0x122e131cu); f_122e15d0();
  /* 122e131c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e131f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1321 mov edx, dword ptr [0x12301990] */
  EDX = (r32((uint32_t)(0x12301990)));
  /* 122e1327 push edx */
  push32((uint32_t)(EDX));
  /* 122e1328 call 0x122d7c10 */
  push32(0x122e132du); f_122d7c10();
  /* 122e132d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1330 mov dword ptr [0x12301990], 0 */
  w32((uint32_t)(0x12301990), (0x0u));
  /* 122e133a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e133c:;
  /* 122e133c mov esp, ebp */
  ESP = (EBP);
  /* 122e133e pop ebp */
  EBP = (pop32());
  /* 122e133f ret  */
  ESPCHK(0x122e1210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011340 @ 0x122e1340 (525 bytes, 200 insns) */
void f_122e1340(void) {
  FTRACE(0x122e1340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1340 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1341 mov ebp, esp */
  EBP = (ESP);
  /* 122e1343 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1346 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e134d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e134f mov ax, word ptr [0x123019b0] */
  AX = (r16((uint32_t)(0x123019b0)));
  /* 122e1355 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e1358 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e135c jne 0x122e1366 */
  if (!C.zf) goto L_122e1366;
  /* 122e135e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e1361 jmp 0x122e1549 */
  goto L_122e1549;
L_122e1366:;
  /* 122e1366 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1369 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e136c push ecx */
  push32((uint32_t)(ECX));
  /* 122e136d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 122e136f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1372 push edx */
  push32((uint32_t)(EDX));
  /* 122e1373 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1375 call 0x122e4120 */
  push32(0x122e137au); f_122e4120();
  /* 122e137a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e137d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1380 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1382 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e1385 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1388 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e138b push edx */
  push32((uint32_t)(EDX));
  /* 122e138c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 122e138e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1391 push eax */
  push32((uint32_t)(EAX));
  /* 122e1392 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1394 call 0x122e4120 */
  push32(0x122e1399u); f_122e4120();
  /* 122e1399 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e139c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e139f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e13a1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e13a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e13a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13aa push edx */
  push32((uint32_t)(EDX));
  /* 122e13ab push 0x16 */
  push32((uint32_t)(0x16u));
  /* 122e13ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e13b0 push eax */
  push32((uint32_t)(EAX));
  /* 122e13b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e13b3 call 0x122e4120 */
  push32(0x122e13b8u); f_122e4120();
  /* 122e13b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13bb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e13be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e13c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e13c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e13c6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13c9 push edx */
  push32((uint32_t)(EDX));
  /* 122e13ca push 0x17 */
  push32((uint32_t)(0x17u));
  /* 122e13cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e13cf push eax */
  push32((uint32_t)(EAX));
  /* 122e13d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e13d2 call 0x122e4120 */
  push32(0x122e13d7u); f_122e4120();
  /* 122e13d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13da mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e13dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e13df mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e13e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e13e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13e8 push edx */
  push32((uint32_t)(EDX));
  /* 122e13e9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 122e13eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e13ee push eax */
  push32((uint32_t)(EAX));
  /* 122e13ef push 1 */
  push32((uint32_t)(0x1u));
  /* 122e13f1 call 0x122e4120 */
  push32(0x122e13f6u); f_122e4120();
  /* 122e13f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e13f9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e13fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e13fe mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e1401 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1404 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e1407 push eax */
  push32((uint32_t)(EAX));
  /* 122e1408 call 0x122e1550 */
  push32(0x122e140du); f_122e1550();
  /* 122e140d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1410 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1413 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1416 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1417 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 122e1419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e141c push edx */
  push32((uint32_t)(EDX));
  /* 122e141d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e141f call 0x122e4120 */
  push32(0x122e1424u); f_122e4120();
  /* 122e1424 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1427 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e142a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e142c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e142f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1432 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1435 push edx */
  push32((uint32_t)(EDX));
  /* 122e1436 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 122e1438 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e143b push eax */
  push32((uint32_t)(EAX));
  /* 122e143c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e143e call 0x122e4120 */
  push32(0x122e1443u); f_122e4120();
  /* 122e1443 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1446 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1449 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e144b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e144e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1451 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1454 push edx */
  push32((uint32_t)(EDX));
  /* 122e1455 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 122e1457 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e145a push eax */
  push32((uint32_t)(EAX));
  /* 122e145b push 0 */
  push32((uint32_t)(0x0u));
  /* 122e145d call 0x122e4120 */
  push32(0x122e1462u); f_122e4120();
  /* 122e1462 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1465 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1468 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e146a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e146d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1470 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1473 push edx */
  push32((uint32_t)(EDX));
  /* 122e1474 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122e1476 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1479 push eax */
  push32((uint32_t)(EAX));
  /* 122e147a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e147c call 0x122e4120 */
  push32(0x122e1481u); f_122e4120();
  /* 122e1481 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1484 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1487 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1489 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e148c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e148f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1492 push edx */
  push32((uint32_t)(EDX));
  /* 122e1493 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 122e1495 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1498 push eax */
  push32((uint32_t)(EAX));
  /* 122e1499 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e149b call 0x122e4120 */
  push32(0x122e14a0u); f_122e4120();
  /* 122e14a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14a3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e14a6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e14a8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e14ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e14ae add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14b1 push edx */
  push32((uint32_t)(EDX));
  /* 122e14b2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 122e14b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e14b7 push eax */
  push32((uint32_t)(EAX));
  /* 122e14b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e14ba call 0x122e4120 */
  push32(0x122e14bfu); f_122e4120();
  /* 122e14bf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e14c5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e14c7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e14ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e14cd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14d0 push edx */
  push32((uint32_t)(EDX));
  /* 122e14d1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 122e14d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e14d6 push eax */
  push32((uint32_t)(EAX));
  /* 122e14d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e14d9 call 0x122e4120 */
  push32(0x122e14deu); f_122e4120();
  /* 122e14de add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14e1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e14e4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e14e6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e14e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e14ec add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e14ef push edx */
  push32((uint32_t)(EDX));
  /* 122e14f0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 122e14f2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e14f5 push eax */
  push32((uint32_t)(EAX));
  /* 122e14f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e14f8 call 0x122e4120 */
  push32(0x122e14fdu); f_122e4120();
  /* 122e14fd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1500 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1503 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1505 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e1508 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e150b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e150e push edx */
  push32((uint32_t)(EDX));
  /* 122e150f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 122e1511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1514 push eax */
  push32((uint32_t)(EAX));
  /* 122e1515 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e1517 call 0x122e4120 */
  push32(0x122e151cu); f_122e4120();
  /* 122e151c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e151f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1522 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1524 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e1527 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e152a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e152d push edx */
  push32((uint32_t)(EDX));
  /* 122e152e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 122e1530 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1533 push eax */
  push32((uint32_t)(EAX));
  /* 122e1534 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e1536 call 0x122e4120 */
  push32(0x122e153bu); f_122e4120();
  /* 122e153b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e153e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1541 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1543 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e1546 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122e1549:;
  /* 122e1549 mov esp, ebp */
  ESP = (EBP);
  /* 122e154b pop ebp */
  EBP = (pop32());
  /* 122e154c ret  */
  ESPCHK(0x122e1340u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x122e1550 (125 bytes, 49 insns) */
void f_122e1550(void) {
  FTRACE(0x122e1550u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1550 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1551 mov ebp, esp */
  EBP = (ESP);
  /* 122e1553 push ecx */
  push32((uint32_t)(ECX));
L_122e1554:;
  /* 122e1554 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1557 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e155a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e155c je 0x122e15c9 */
  if (C.zf) goto L_122e15c9;
  /* 122e155e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1561 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e1564 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1567 jl 0x122e158d */
  if ((C.sf!=C.of)) goto L_122e158d;
  /* 122e1569 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e156c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e156f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1572 jg 0x122e158d */
  if ((!C.zf&&C.sf==C.of)) goto L_122e158d;
  /* 122e1574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1577 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e157a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e157d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1580 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122e1582 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1585 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1588 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e158b jmp 0x122e15c7 */
  goto L_122e15c7;
L_122e158d:;
  /* 122e158d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1590 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e1593 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1596 jne 0x122e15be */
  if (!C.zf) goto L_122e15be;
  /* 122e1598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e159b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e159e:;
  /* 122e159e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e15a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e15a4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122e15a7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e15a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e15ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e15af mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e15b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e15b5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e15b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e15ba jne 0x122e159e */
  if (!C.zf) goto L_122e159e;
  /* 122e15bc jmp 0x122e15c7 */
  goto L_122e15c7;
L_122e15be:;
  /* 122e15be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e15c1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e15c4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122e15c7:;
  /* 122e15c7 jmp 0x122e1554 */
  goto L_122e1554;
L_122e15c9:;
  /* 122e15c9 mov esp, ebp */
  ESP = (EBP);
  /* 122e15cb pop ebp */
  EBP = (pop32());
  /* 122e15cc ret  */
  ESPCHK(0x122e1550u, _esp0);
  ESP += 4; return;
}

/* FUN_100115d0 @ 0x122e15d0 (147 bytes, 52 insns) */
void f_122e15d0(void) {
  FTRACE(0x122e15d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e15d0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e15d1 mov ebp, esp */
  EBP = (ESP);
  /* 122e15d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e15d7 jne 0x122e15de */
  if (!C.zf) goto L_122e15de;
  /* 122e15d9 jmp 0x122e1661 */
  goto L_122e1661;
L_122e15de:;
  /* 122e15de mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e15e1 cmp dword ptr [eax + 0xc], 0x123019ec */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x123019ecu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e15e8 je 0x122e1661 */
  if (C.zf) goto L_122e1661;
  /* 122e15ea push 2 */
  push32((uint32_t)(0x2u));
  /* 122e15ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e15ef mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e15f2 push edx */
  push32((uint32_t)(EDX));
  /* 122e15f3 call 0x122d7c10 */
  push32(0x122e15f8u); f_122d7c10();
  /* 122e15f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e15fb push 2 */
  push32((uint32_t)(0x2u));
  /* 122e15fd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1600 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122e1603 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1604 call 0x122d7c10 */
  push32(0x122e1609u); f_122d7c10();
  /* 122e1609 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e160c push 2 */
  push32((uint32_t)(0x2u));
  /* 122e160e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1611 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e1614 push eax */
  push32((uint32_t)(EAX));
  /* 122e1615 call 0x122d7c10 */
  push32(0x122e161au); f_122d7c10();
  /* 122e161a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e161d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e161f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1622 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122e1625 push edx */
  push32((uint32_t)(EDX));
  /* 122e1626 call 0x122d7c10 */
  push32(0x122e162bu); f_122d7c10();
  /* 122e162b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e162e push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1630 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1633 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e1636 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1637 call 0x122d7c10 */
  push32(0x122e163cu); f_122d7c10();
  /* 122e163c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e163f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1641 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1644 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 122e1647 push eax */
  push32((uint32_t)(EAX));
  /* 122e1648 call 0x122d7c10 */
  push32(0x122e164du); f_122d7c10();
  /* 122e164d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1650 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1652 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1655 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 122e1658 push edx */
  push32((uint32_t)(EDX));
  /* 122e1659 call 0x122d7c10 */
  push32(0x122e165eu); f_122d7c10();
  /* 122e165e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1661:;
  /* 122e1661 pop ebp */
  EBP = (pop32());
  /* 122e1662 ret  */
  ESPCHK(0x122e15d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011670 @ 0x122e1670 (928 bytes, 284 insns) */
void f_122e1670(void) {
  FTRACE(0x122e1670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1670 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1671 mov ebp, esp */
  EBP = (ESP);
  /* 122e1673 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1676 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 122e167d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 122e1684 cmp dword ptr [0x12301960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e168b je 0x122e19c1 */
  if (C.zf) goto L_122e19c1;
  /* 122e1691 cmp dword ptr [0x12301970], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301970))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1698 jne 0x122e16c0 */
  if (!C.zf) goto L_122e16c0;
  /* 122e169a push 0x12301970 */
  push32((uint32_t)(0x12301970u));
  /* 122e169f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 122e16a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e16a6 mov ax, word ptr [0x123019a8] */
  AX = (r16((uint32_t)(0x123019a8)));
  /* 122e16ac push eax */
  push32((uint32_t)(EAX));
  /* 122e16ad push 0 */
  push32((uint32_t)(0x0u));
  /* 122e16af call 0x122e4120 */
  push32(0x122e16b4u); f_122e4120();
  /* 122e16b4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e16b7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e16b9 je 0x122e16c0 */
  if (C.zf) goto L_122e16c0;
  /* 122e16bb jmp 0x122e1982 */
  goto L_122e1982;
L_122e16c0:;
  /* 122e16c0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 122e16c2 push 0x122fda80 */
  push32((uint32_t)(0x122fda80u));
  /* 122e16c7 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e16c9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 122e16ce call 0x122d7180 */
  push32(0x122e16d3u); f_122d7180();
  /* 122e16d3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e16d6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 122e16d9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 122e16db push 0x122fda80 */
  push32((uint32_t)(0x122fda80u));
  /* 122e16e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e16e2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 122e16e7 call 0x122d7180 */
  push32(0x122e16ecu); f_122d7180();
  /* 122e16ec add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e16ef mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e16f2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 122e16f4 push 0x122fda80 */
  push32((uint32_t)(0x122fda80u));
  /* 122e16f9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e16fb push 0x101 */
  push32((uint32_t)(0x101u));
  /* 122e1700 call 0x122d7180 */
  push32(0x122e1705u); f_122d7180();
  /* 122e1705 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1708 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 122e170b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 122e170d push 0x122fda80 */
  push32((uint32_t)(0x122fda80u));
  /* 122e1712 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1714 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 122e1719 call 0x122d7180 */
  push32(0x122e171eu); f_122d7180();
  /* 122e171e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1721 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122e1724 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1728 je 0x122e173c */
  if (C.zf) goto L_122e173c;
  /* 122e172a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e172e je 0x122e173c */
  if (C.zf) goto L_122e173c;
  /* 122e1730 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1734 je 0x122e173c */
  if (C.zf) goto L_122e173c;
  /* 122e1736 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e173a jne 0x122e1741 */
  if (!C.zf) goto L_122e1741;
L_122e173c:;
  /* 122e173c jmp 0x122e1982 */
  goto L_122e1982;
L_122e1741:;
  /* 122e1741 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e1744 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122e1747 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122e174e jmp 0x122e1759 */
  goto L_122e1759;
L_122e1750:;
  /* 122e1750 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e1753 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1756 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_122e1759:;
  /* 122e1759 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1760 jge 0x122e1775 */
  if ((C.sf==C.of)) goto L_122e1775;
  /* 122e1762 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e1765 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 122e1768 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 122e176a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e176d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1770 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122e1773 jmp 0x122e1750 */
  goto L_122e1750;
L_122e1775:;
  /* 122e1775 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 122e1778 push eax */
  push32((uint32_t)(EAX));
  /* 122e1779 mov ecx, dword ptr [0x12301970] */
  ECX = (r32((uint32_t)(0x12301970)));
  /* 122e177f push ecx */
  push32((uint32_t)(ECX));
  /* 122e1780 call dword ptr [0x123042c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c0))), 0x122e1786u);
  /* 122e1786 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1788 jne 0x122e178f */
  if (!C.zf) goto L_122e178f;
  /* 122e178a jmp 0x122e1982 */
  goto L_122e1982;
L_122e178f:;
  /* 122e178f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1793 jbe 0x122e179a */
  if ((C.cf||C.zf)) goto L_122e179a;
  /* 122e1795 jmp 0x122e1982 */
  goto L_122e1982;
L_122e179a:;
  /* 122e179a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e179d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e17a3 mov dword ptr [0x12300158], edx */
  w32((uint32_t)(0x12300158), (EDX));
  /* 122e17a9 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e17b0 jle 0x122e1809 */
  if ((C.zf||C.sf!=C.of)) goto L_122e1809;
  /* 122e17b2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 122e17b5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122e17b8 jmp 0x122e17c3 */
  goto L_122e17c3;
L_122e17ba:;
  /* 122e17ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e17bd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e17c0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_122e17c3:;
  /* 122e17c3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e17c6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e17c8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e17ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e17cc je 0x122e1809 */
  if (C.zf) goto L_122e1809;
  /* 122e17ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e17d1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e17d3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122e17d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e17d8 je 0x122e1809 */
  if (C.zf) goto L_122e1809;
  /* 122e17da mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e17dd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e17df mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e17e1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122e17e4 jmp 0x122e17ef */
  goto L_122e17ef;
L_122e17e6:;
  /* 122e17e6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e17e9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e17ec mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_122e17ef:;
  /* 122e17ef mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e17f2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e17f4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122e17f7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e17fa jg 0x122e1807 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e1807;
  /* 122e17fc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e17ff add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1802 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122e1805 jmp 0x122e17e6 */
  goto L_122e17e6;
L_122e1807:;
  /* 122e1807 jmp 0x122e17ba */
  goto L_122e17ba;
L_122e1809:;
  /* 122e1809 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e180b push 0 */
  push32((uint32_t)(0x0u));
  /* 122e180d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e180f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e1812 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1815 push eax */
  push32((uint32_t)(EAX));
  /* 122e1816 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122e181b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e181e push ecx */
  push32((uint32_t)(ECX));
  /* 122e181f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1821 call 0x122dfe10 */
  push32(0x122e1826u); f_122dfe10();
  /* 122e1826 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1829 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e182b jne 0x122e1832 */
  if (!C.zf) goto L_122e1832;
  /* 122e182d jmp 0x122e1982 */
  goto L_122e1982;
L_122e1832:;
  /* 122e1832 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e1835 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 122e183a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e183d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122e1840 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122e1847 jmp 0x122e1852 */
  goto L_122e1852;
L_122e1849:;
  /* 122e1849 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e184c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e184f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_122e1852:;
  /* 122e1852 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1859 jge 0x122e1870 */
  if ((C.sf==C.of)) goto L_122e1870;
  /* 122e185b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e185e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 122e1862 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 122e1865 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e1868 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e186b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122e186e jmp 0x122e1849 */
  goto L_122e1849;
L_122e1870:;
  /* 122e1870 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e1872 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e1874 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e1877 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e187a push edx */
  push32((uint32_t)(EDX));
  /* 122e187b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122e1880 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e1883 push eax */
  push32((uint32_t)(EAX));
  /* 122e1884 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1886 call 0x122e43c0 */
  push32(0x122e188bu); f_122e43c0();
  /* 122e188b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e188e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1890 jne 0x122e1897 */
  if (!C.zf) goto L_122e1897;
  /* 122e1892 jmp 0x122e1982 */
  goto L_122e1982;
L_122e1897:;
  /* 122e1897 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e189a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 122e189f cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e18a6 jle 0x122e1903 */
  if ((C.zf||C.sf!=C.of)) goto L_122e1903;
  /* 122e18a8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 122e18ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122e18ae jmp 0x122e18b9 */
  goto L_122e18b9;
L_122e18b0:;
  /* 122e18b0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e18b3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e18b6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_122e18b9:;
  /* 122e18b9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e18bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e18be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e18c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e18c2 je 0x122e1903 */
  if (C.zf) goto L_122e1903;
  /* 122e18c4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e18c7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e18c9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122e18cc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e18ce je 0x122e1903 */
  if (C.zf) goto L_122e1903;
  /* 122e18d0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e18d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e18d5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e18d7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122e18da jmp 0x122e18e5 */
  goto L_122e18e5;
L_122e18dc:;
  /* 122e18dc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e18df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e18e2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_122e18e5:;
  /* 122e18e5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e18e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e18ea mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122e18ed cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e18f0 jg 0x122e1901 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e1901;
  /* 122e18f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e18f5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e18f8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 122e18ff jmp 0x122e18dc */
  goto L_122e18dc;
L_122e1901:;
  /* 122e1901 jmp 0x122e18b0 */
  goto L_122e18b0;
L_122e1903:;
  /* 122e1903 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e1906 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1909 mov dword ptr [0x122ffde8], eax */
  w32((uint32_t)(0x122ffde8), (EAX));
  /* 122e190e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e1911 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1914 mov dword ptr [0x122ffdec], ecx */
  w32((uint32_t)(0x122ffdec), (ECX));
  /* 122e191a cmp dword ptr [0x12301994], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301994))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1921 je 0x122e1934 */
  if (C.zf) goto L_122e1934;
  /* 122e1923 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1925 mov edx, dword ptr [0x12301994] */
  EDX = (r32((uint32_t)(0x12301994)));
  /* 122e192b push edx */
  push32((uint32_t)(EDX));
  /* 122e192c call 0x122d7c10 */
  push32(0x122e1931u); f_122d7c10();
  /* 122e1931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1934:;
  /* 122e1934 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e1937 mov dword ptr [0x12301994], eax */
  w32((uint32_t)(0x12301994), (EAX));
  /* 122e193c cmp dword ptr [0x12301998], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301998))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1943 je 0x122e1956 */
  if (C.zf) goto L_122e1956;
  /* 122e1945 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1947 mov ecx, dword ptr [0x12301998] */
  ECX = (r32((uint32_t)(0x12301998)));
  /* 122e194d push ecx */
  push32((uint32_t)(ECX));
  /* 122e194e call 0x122d7c10 */
  push32(0x122e1953u); f_122d7c10();
  /* 122e1953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1956:;
  /* 122e1956 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e1959 mov dword ptr [0x12301998], edx */
  w32((uint32_t)(0x12301998), (EDX));
  /* 122e195f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1961 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e1964 push eax */
  push32((uint32_t)(EAX));
  /* 122e1965 call 0x122d7c10 */
  push32(0x122e196au); f_122d7c10();
  /* 122e196a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e196d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e196f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e1972 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1973 call 0x122d7c10 */
  push32(0x122e1978u); f_122d7c10();
  /* 122e1978 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e197b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e197d jmp 0x122e1a0c */
  goto L_122e1a0c;
L_122e1982:;
  /* 122e1982 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1984 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e1987 push edx */
  push32((uint32_t)(EDX));
  /* 122e1988 call 0x122d7c10 */
  push32(0x122e198du); f_122d7c10();
  /* 122e198d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1990 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e1992 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e1995 push eax */
  push32((uint32_t)(EAX));
  /* 122e1996 call 0x122d7c10 */
  push32(0x122e199bu); f_122d7c10();
  /* 122e199b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e199e push 2 */
  push32((uint32_t)(0x2u));
  /* 122e19a0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e19a3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e19a4 call 0x122d7c10 */
  push32(0x122e19a9u); f_122d7c10();
  /* 122e19a9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e19ac push 2 */
  push32((uint32_t)(0x2u));
  /* 122e19ae mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e19b1 push edx */
  push32((uint32_t)(EDX));
  /* 122e19b2 call 0x122d7c10 */
  push32(0x122e19b7u); f_122d7c10();
  /* 122e19b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e19ba mov eax, 1 */
  EAX = (0x1u);
  /* 122e19bf jmp 0x122e1a0c */
  goto L_122e1a0c;
L_122e19c1:;
  /* 122e19c1 mov dword ptr [0x122ffde8], 0x122ffdf2 */
  w32((uint32_t)(0x122ffde8), (0x122ffdf2u));
  /* 122e19cb mov dword ptr [0x122ffdec], 0x122ffdf2 */
  w32((uint32_t)(0x122ffdec), (0x122ffdf2u));
  /* 122e19d5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e19d7 mov eax, dword ptr [0x12301994] */
  EAX = (r32((uint32_t)(0x12301994)));
  /* 122e19dc push eax */
  push32((uint32_t)(EAX));
  /* 122e19dd call 0x122d7c10 */
  push32(0x122e19e2u); f_122d7c10();
  /* 122e19e2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e19e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e19e7 mov ecx, dword ptr [0x12301998] */
  ECX = (r32((uint32_t)(0x12301998)));
  /* 122e19ed push ecx */
  push32((uint32_t)(ECX));
  /* 122e19ee call 0x122d7c10 */
  push32(0x122e19f3u); f_122d7c10();
  /* 122e19f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e19f6 mov dword ptr [0x12301994], 0 */
  w32((uint32_t)(0x12301994), (0x0u));
  /* 122e1a00 mov dword ptr [0x12301998], 0 */
  w32((uint32_t)(0x12301998), (0x0u));
  /* 122e1a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e1a0c:;
  /* 122e1a0c mov esp, ebp */
  ESP = (EBP);
  /* 122e1a0e pop ebp */
  EBP = (pop32());
  /* 122e1a0f ret  */
  ESPCHK(0x122e1670u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x122e1a10 (7 bytes, 5 insns) */
void f_122e1a10(void) {
  FTRACE(0x122e1a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1a10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1a11 mov ebp, esp */
  EBP = (ESP);
  /* 122e1a13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1a15 pop ebp */
  EBP = (pop32());
  /* 122e1a16 ret  */
  ESPCHK(0x122e1a10u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x122e1a20 (129 bytes, 56 insns) */
void f_122e1a20(void) {
  FTRACE(0x122e1a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1a20 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 122e1a24 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e1a28 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122e1a2e jne 0x122e1a6c */
  if (!C.zf) goto L_122e1a6c;
L_122e1a30:;
  /* 122e1a30 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e1a32 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a34 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a36 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1a38 je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a3a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a3d jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a3f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122e1a41 je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a43 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122e1a46 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a49 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a4b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1a4d je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a4f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a52 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a54 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1a57 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1a5a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122e1a5c jne 0x122e1a30 */
  if (!C.zf) goto L_122e1a30;
  /* 122e1a5e mov edi, edi */
  EDI = (EDI);
L_122e1a60:;
  /* 122e1a60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1a62 ret  */
  ESPCHK(0x122e1a20u, _esp0);
  ESP += 4; return;
  /* 122e1a63 nop  */
  /* nop */
L_122e1a64:;
  /* 122e1a64 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1a66 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e1a68 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 122e1a69 ret  */
  ESPCHK(0x122e1a20u, _esp0);
  ESP += 4; return;
  /* 122e1a6a mov edi, edi */
  EDI = (EDI);
L_122e1a6c:;
  /* 122e1a6c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 122e1a72 je 0x122e1a88 */
  if (C.zf) goto L_122e1a88;
  /* 122e1a74 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e1a76 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122e1a77 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a79 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a7b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122e1a7c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1a7e je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a80 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 122e1a86 je 0x122e1a30 */
  if (C.zf) goto L_122e1a30;
L_122e1a88:;
  /* 122e1a88 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 122e1a8b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1a8e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a90 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a92 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1a94 je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a96 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1a99 jne 0x122e1a64 */
  if (!C.zf) goto L_122e1a64;
  /* 122e1a9b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122e1a9d je 0x122e1a60 */
  if (C.zf) goto L_122e1a60;
  /* 122e1a9f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1aa2 jmp 0x122e1a30 */
  goto L_122e1a30;
}

/* FUN_10011ab0 @ 0x122e1ab0 (62 bytes, 35 insns) */
void f_122e1ab0(void) {
  FTRACE(0x122e1ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1ab1 mov ebp, esp */
  EBP = (ESP);
  /* 122e1ab3 push esi */
  push32((uint32_t)(ESI));
  /* 122e1ab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1ab6 push eax */
  push32((uint32_t)(EAX));
  /* 122e1ab7 push eax */
  push32((uint32_t)(EAX));
  /* 122e1ab8 push eax */
  push32((uint32_t)(EAX));
  /* 122e1ab9 push eax */
  push32((uint32_t)(EAX));
  /* 122e1aba push eax */
  push32((uint32_t)(EAX));
  /* 122e1abb push eax */
  push32((uint32_t)(EAX));
  /* 122e1abc push eax */
  push32((uint32_t)(EAX));
  /* 122e1abd push eax */
  push32((uint32_t)(EAX));
  /* 122e1abe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1ac1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122e1ac4:;
  /* 122e1ac4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e1ac6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1ac8 je 0x122e1ad1 */
  if (C.zf) goto L_122e1ad1;
  /* 122e1aca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122e1acb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x122e1acb");
  /* 122e1acf jmp 0x122e1ac4 */
  goto L_122e1ac4;
L_122e1ad1:;
  /* 122e1ad1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1ad4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122e1ad7 nop  */
  /* nop */
L_122e1ad8:;
  /* 122e1ad8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 122e1ad9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122e1adb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1add je 0x122e1ae6 */
  if (C.zf) goto L_122e1ae6;
  /* 122e1adf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e1ae0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x122e1ae0");
  /* 122e1ae4 jae 0x122e1ad8 */
  if (!C.cf) goto L_122e1ad8;
L_122e1ae6:;
  /* 122e1ae6 mov eax, ecx */
  EAX = (ECX);
  /* 122e1ae8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1aeb pop esi */
  ESI = (pop32());
  /* 122e1aec leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122e1aed ret  */
  ESPCHK(0x122e1ab0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x122e1af0 (56 bytes, 31 insns) */
void f_122e1af0(void) {
  FTRACE(0x122e1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1af1 mov ebp, esp */
  EBP = (ESP);
  /* 122e1af3 push edi */
  push32((uint32_t)(EDI));
  /* 122e1af4 push esi */
  push32((uint32_t)(ESI));
  /* 122e1af5 push ebx */
  push32((uint32_t)(EBX));
  /* 122e1af6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1af9 jecxz 0x122e1b21 */
  x86_unimpl("jecxz @ 0x122e1af9");
  /* 122e1afb mov ebx, ecx */
  EBX = (ECX);
  /* 122e1afd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1b00 mov esi, edi */
  ESI = (EDI);
  /* 122e1b02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1b04 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 122e1b06 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e1b08 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1b0a mov edi, esi */
  EDI = (ESI);
  /* 122e1b0c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1b0f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 122e1b11 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 122e1b14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1b16 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e1b19 ja 0x122e1b1f */
  if ((!C.cf&&!C.zf)) goto L_122e1b1f;
  /* 122e1b1b je 0x122e1b21 */
  if (C.zf) goto L_122e1b21;
  /* 122e1b1d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122e1b1e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_122e1b1f:;
  /* 122e1b1f not ecx */
  ECX = (~(ECX));
L_122e1b21:;
  /* 122e1b21 mov eax, ecx */
  EAX = (ECX);
  /* 122e1b23 pop ebx */
  EBX = (pop32());
  /* 122e1b24 pop esi */
  ESI = (pop32());
  /* 122e1b25 pop edi */
  EDI = (pop32());
  /* 122e1b26 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122e1b27 ret  */
  ESPCHK(0x122e1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x122e1b30 (58 bytes, 32 insns) */
void f_122e1b30(void) {
  FTRACE(0x122e1b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1b30 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1b31 mov ebp, esp */
  EBP = (ESP);
  /* 122e1b33 push esi */
  push32((uint32_t)(ESI));
  /* 122e1b34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1b36 push eax */
  push32((uint32_t)(EAX));
  /* 122e1b37 push eax */
  push32((uint32_t)(EAX));
  /* 122e1b38 push eax */
  push32((uint32_t)(EAX));
  /* 122e1b39 push eax */
  push32((uint32_t)(EAX));
  /* 122e1b3a push eax */
  push32((uint32_t)(EAX));
  /* 122e1b3b push eax */
  push32((uint32_t)(EAX));
  /* 122e1b3c push eax */
  push32((uint32_t)(EAX));
  /* 122e1b3d push eax */
  push32((uint32_t)(EAX));
  /* 122e1b3e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1b41 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122e1b44:;
  /* 122e1b44 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e1b46 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1b48 je 0x122e1b51 */
  if (C.zf) goto L_122e1b51;
  /* 122e1b4a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122e1b4b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x122e1b4b");
  /* 122e1b4f jmp 0x122e1b44 */
  goto L_122e1b44;
L_122e1b51:;
  /* 122e1b51 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_122e1b54:;
  /* 122e1b54 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122e1b56 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e1b58 je 0x122e1b64 */
  if (C.zf) goto L_122e1b64;
  /* 122e1b5a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e1b5b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x122e1b5b");
  /* 122e1b5f jae 0x122e1b54 */
  if (!C.cf) goto L_122e1b54;
  /* 122e1b61 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_122e1b64:;
  /* 122e1b64 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1b67 pop esi */
  ESI = (pop32());
  /* 122e1b68 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122e1b69 ret  */
  ESPCHK(0x122e1b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b70 @ 0x122e1b70 (512 bytes, 147 insns) */
void f_122e1b70(void) {
  FTRACE(0x122e1b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1b70 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1b71 mov ebp, esp */
  EBP = (ESP);
  /* 122e1b73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1b76 cmp dword ptr [0x123019e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1b7d jne 0x122e1ba2 */
  if (!C.zf) goto L_122e1ba2;
  /* 122e1b7f call 0x122e2640 */
  push32(0x122e1b84u); f_122e2640();
  /* 122e1b84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1b86 je 0x122e1b92 */
  if (C.zf) goto L_122e1b92;
  /* 122e1b88 mov eax, dword ptr [0x123042f4] */
  EAX = (r32((uint32_t)(0x123042f4)));
  /* 122e1b8d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e1b90 jmp 0x122e1b99 */
  goto L_122e1b99;
L_122e1b92:;
  /* 122e1b92 mov dword ptr [ebp - 8], 0x122e2690 */
  w32((uint32_t)(EBP + -0x8), (0x122e2690u));
L_122e1b99:;
  /* 122e1b99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e1b9c mov dword ptr [0x123019e0], ecx */
  w32((uint32_t)(0x123019e0), (ECX));
L_122e1ba2:;
  /* 122e1ba2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1ba6 jne 0x122e1bb2 */
  if (!C.zf) goto L_122e1bb2;
  /* 122e1ba8 call 0x122e2490 */
  push32(0x122e1badu); f_122e2490();
  /* 122e1bad jmp 0x122e1c7e */
  goto L_122e1c7e;
L_122e1bb2:;
  /* 122e1bb2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1bb5 mov dword ptr [0x123019d0], edx */
  w32((uint32_t)(0x123019d0), (EDX));
  /* 122e1bbb cmp dword ptr [0x123019d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1bc2 je 0x122e1be4 */
  if (C.zf) goto L_122e1be4;
  /* 122e1bc4 mov eax, dword ptr [0x123019d0] */
  EAX = (r32((uint32_t)(0x123019d0)));
  /* 122e1bc9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e1bcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e1bce je 0x122e1be4 */
  if (C.zf) goto L_122e1be4;
  /* 122e1bd0 push 0x123019d0 */
  push32((uint32_t)(0x123019d0u));
  /* 122e1bd5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122e1bd7 push 0x12300a90 */
  push32((uint32_t)(0x12300a90u));
  /* 122e1bdc call 0x122e1d70 */
  push32(0x122e1be1u); f_122e1d70();
  /* 122e1be1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1be4:;
  /* 122e1be4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1be7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1bea mov dword ptr [0x123019d4], edx */
  w32((uint32_t)(0x123019d4), (EDX));
  /* 122e1bf0 cmp dword ptr [0x123019d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1bf7 je 0x122e1c19 */
  if (C.zf) goto L_122e1c19;
  /* 122e1bf9 mov eax, dword ptr [0x123019d4] */
  EAX = (r32((uint32_t)(0x123019d4)));
  /* 122e1bfe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e1c01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e1c03 je 0x122e1c19 */
  if (C.zf) goto L_122e1c19;
  /* 122e1c05 push 0x123019d4 */
  push32((uint32_t)(0x123019d4u));
  /* 122e1c0a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 122e1c0c push 0x123009d8 */
  push32((uint32_t)(0x123009d8u));
  /* 122e1c11 call 0x122e1d70 */
  push32(0x122e1c16u); f_122e1d70();
  /* 122e1c16 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1c19:;
  /* 122e1c19 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e1c23 cmp dword ptr [0x123019d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1c2a je 0x122e1c5d */
  if (C.zf) goto L_122e1c5d;
  /* 122e1c2c mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e1c32 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e1c35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1c37 je 0x122e1c5d */
  if (C.zf) goto L_122e1c5d;
  /* 122e1c39 cmp dword ptr [0x123019d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1c40 je 0x122e1c56 */
  if (C.zf) goto L_122e1c56;
  /* 122e1c42 mov ecx, dword ptr [0x123019d4] */
  ECX = (r32((uint32_t)(0x123019d4)));
  /* 122e1c48 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e1c4b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e1c4d je 0x122e1c56 */
  if (C.zf) goto L_122e1c56;
  /* 122e1c4f call 0x122e1e00 */
  push32(0x122e1c54u); f_122e1e00();
  /* 122e1c54 jmp 0x122e1c5b */
  goto L_122e1c5b;
L_122e1c56:;
  /* 122e1c56 call 0x122e21f0 */
  push32(0x122e1c5bu); f_122e21f0();
L_122e1c5b:;
  /* 122e1c5b jmp 0x122e1c7e */
  goto L_122e1c7e;
L_122e1c5d:;
  /* 122e1c5d cmp dword ptr [0x123019d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1c64 je 0x122e1c79 */
  if (C.zf) goto L_122e1c79;
  /* 122e1c66 mov eax, dword ptr [0x123019d4] */
  EAX = (r32((uint32_t)(0x123019d4)));
  /* 122e1c6b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e1c6e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e1c70 je 0x122e1c79 */
  if (C.zf) goto L_122e1c79;
  /* 122e1c72 call 0x122e2390 */
  push32(0x122e1c77u); f_122e2390();
  /* 122e1c77 jmp 0x122e1c7e */
  goto L_122e1c7e;
L_122e1c79:;
  /* 122e1c79 call 0x122e2490 */
  push32(0x122e1c7eu); f_122e2490();
L_122e1c7e:;
  /* 122e1c7e cmp dword ptr [0x123019d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1c85 jne 0x122e1c8e */
  if (!C.zf) goto L_122e1c8e;
  /* 122e1c87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1c89 jmp 0x122e1d6c */
  goto L_122e1d6c;
L_122e1c8e:;
  /* 122e1c8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1c91 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1c97 push edx */
  push32((uint32_t)(EDX));
  /* 122e1c98 call 0x122e24c0 */
  push32(0x122e1c9du); f_122e24c0();
  /* 122e1c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1ca0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e1ca3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1ca7 je 0x122e1cbc */
  if (C.zf) goto L_122e1cbc;
  /* 122e1ca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1cac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e1cb1 push eax */
  push32((uint32_t)(EAX));
  /* 122e1cb2 call dword ptr [0x123042f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f0))), 0x122e1cb8u);
  /* 122e1cb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1cba jne 0x122e1cc3 */
  if (!C.zf) goto L_122e1cc3;
L_122e1cbc:;
  /* 122e1cbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1cbe jmp 0x122e1d6c */
  goto L_122e1d6c;
L_122e1cc3:;
  /* 122e1cc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1cc5 mov ecx, dword ptr [0x123019c0] */
  ECX = (r32((uint32_t)(0x123019c0)));
  /* 122e1ccb push ecx */
  push32((uint32_t)(ECX));
  /* 122e1ccc call dword ptr [0x123042ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042ec))), 0x122e1cd2u);
  /* 122e1cd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1cd4 jne 0x122e1cdd */
  if (!C.zf) goto L_122e1cdd;
  /* 122e1cd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1cd8 jmp 0x122e1d6c */
  goto L_122e1d6c;
L_122e1cdd:;
  /* 122e1cdd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1ce1 je 0x122e1d08 */
  if (C.zf) goto L_122e1d08;
  /* 122e1ce3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1ce6 mov ax, word ptr [0x123019c0] */
  AX = (r16((uint32_t)(0x123019c0)));
  /* 122e1cec mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 122e1cef mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1cf2 mov dx, word ptr [0x123019dc] */
  DX = (r16((uint32_t)(0x123019dc)));
  /* 122e1cf9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 122e1cfd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e1d00 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 122e1d04 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_122e1d08:;
  /* 122e1d08 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1d0c je 0x122e1d67 */
  if (C.zf) goto L_122e1d67;
  /* 122e1d0e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122e1d10 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1d13 push edx */
  push32((uint32_t)(EDX));
  /* 122e1d14 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 122e1d19 mov eax, dword ptr [0x123019c0] */
  EAX = (r32((uint32_t)(0x123019c0)));
  /* 122e1d1e push eax */
  push32((uint32_t)(EAX));
  /* 122e1d1f call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e1d25u);
  /* 122e1d25 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1d27 jne 0x122e1d2d */
  if (!C.zf) goto L_122e1d2d;
  /* 122e1d29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1d2b jmp 0x122e1d6c */
  goto L_122e1d6c;
L_122e1d2d:;
  /* 122e1d2d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 122e1d2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1d32 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1d35 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1d36 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 122e1d3b mov edx, dword ptr [0x123019dc] */
  EDX = (r32((uint32_t)(0x123019dc)));
  /* 122e1d41 push edx */
  push32((uint32_t)(EDX));
  /* 122e1d42 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e1d48u);
  /* 122e1d48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1d4a jne 0x122e1d50 */
  if (!C.zf) goto L_122e1d50;
  /* 122e1d4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e1d4e jmp 0x122e1d6c */
  goto L_122e1d6c;
L_122e1d50:;
  /* 122e1d50 push 0xa */
  push32((uint32_t)(0xau));
  /* 122e1d52 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1d55 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1d5a push eax */
  push32((uint32_t)(EAX));
  /* 122e1d5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1d5e push ecx */
  push32((uint32_t)(ECX));
  /* 122e1d5f call 0x122d9cc0 */
  push32(0x122e1d64u); f_122d9cc0();
  /* 122e1d64 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e1d67:;
  /* 122e1d67 mov eax, 1 */
  EAX = (0x1u);
L_122e1d6c:;
  /* 122e1d6c mov esp, ebp */
  ESP = (EBP);
  /* 122e1d6e pop ebp */
  EBP = (pop32());
  /* 122e1d6f ret  */
  ESPCHK(0x122e1b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d70 @ 0x122e1d70 (130 bytes, 47 insns) */
void f_122e1d70(void) {
  FTRACE(0x122e1d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1d70 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1d71 mov ebp, esp */
  EBP = (ESP);
  /* 122e1d73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1d76 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122e1d7d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_122e1d84:;
  /* 122e1d84 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e1d87 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1d8a jg 0x122e1dee */
  if ((!C.zf&&C.sf==C.of)) goto L_122e1dee;
  /* 122e1d8c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1d90 je 0x122e1dee */
  if (C.zf) goto L_122e1dee;
  /* 122e1d92 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e1d95 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1d98 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e1d99 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1d9b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e1d9d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e1da0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1da3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1da6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 122e1da9 push eax */
  push32((uint32_t)(EAX));
  /* 122e1daa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1dad mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e1daf push edx */
  push32((uint32_t)(EDX));
  /* 122e1db0 call 0x122e4630 */
  push32(0x122e1db5u); f_122e4630();
  /* 122e1db5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1db8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e1dbb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1dbf jne 0x122e1dd2 */
  if (!C.zf) goto L_122e1dd2;
  /* 122e1dc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1dc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1dc7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 122e1dcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e1dce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e1dd0 jmp 0x122e1dec */
  goto L_122e1dec;
L_122e1dd2:;
  /* 122e1dd2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1dd6 jge 0x122e1de3 */
  if ((C.sf==C.of)) goto L_122e1de3;
  /* 122e1dd8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1ddb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1dde mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 122e1de1 jmp 0x122e1dec */
  goto L_122e1dec;
L_122e1de3:;
  /* 122e1de3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1de6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1de9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122e1dec:;
  /* 122e1dec jmp 0x122e1d84 */
  goto L_122e1d84;
L_122e1dee:;
  /* 122e1dee mov esp, ebp */
  ESP = (EBP);
  /* 122e1df0 pop ebp */
  EBP = (pop32());
  /* 122e1df1 ret  */
  ESPCHK(0x122e1d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x122e1e00 (186 bytes, 50 insns) */
void f_122e1e00(void) {
  FTRACE(0x122e1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1e01 mov ebp, esp */
  EBP = (ESP);
  /* 122e1e03 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1e04 mov eax, dword ptr [0x123019d0] */
  EAX = (r32((uint32_t)(0x123019d0)));
  /* 122e1e09 push eax */
  push32((uint32_t)(EAX));
  /* 122e1e0a call 0x122d9fb0 */
  push32(0x122e1e0fu); f_122d9fb0();
  /* 122e1e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1e12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1e14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1e17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122e1e1a mov dword ptr [0x123019cc], ecx */
  w32((uint32_t)(0x123019cc), (ECX));
  /* 122e1e20 mov edx, dword ptr [0x123019d4] */
  EDX = (r32((uint32_t)(0x123019d4)));
  /* 122e1e26 push edx */
  push32((uint32_t)(EDX));
  /* 122e1e27 call 0x122d9fb0 */
  push32(0x122e1e2cu); f_122d9fb0();
  /* 122e1e2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1e2f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e1e31 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1e34 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122e1e37 mov dword ptr [0x123019c4], ecx */
  w32((uint32_t)(0x123019c4), (ECX));
  /* 122e1e3d mov dword ptr [0x123019c0], 0 */
  w32((uint32_t)(0x123019c0), (0x0u));
  /* 122e1e47 cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1e4e je 0x122e1e59 */
  if (C.zf) goto L_122e1e59;
  /* 122e1e50 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122e1e57 jmp 0x122e1e6b */
  goto L_122e1e6b;
L_122e1e59:;
  /* 122e1e59 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e1e5f push edx */
  push32((uint32_t)(EDX));
  /* 122e1e60 call 0x122e28a0 */
  push32(0x122e1e65u); f_122e28a0();
  /* 122e1e65 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1e68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e1e6b:;
  /* 122e1e6b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e1e6e mov dword ptr [0x123019c8], eax */
  w32((uint32_t)(0x123019c8), (EAX));
  /* 122e1e73 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e1e75 push 0x122e1ec0 */
  push32((uint32_t)(0x122e1ec0u));
  /* 122e1e7a call dword ptr [0x123042d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042d4))), 0x122e1e80u);
  /* 122e1e80 mov ecx, dword ptr [0x123019d8] */
  ECX = (r32((uint32_t)(0x123019d8)));
  /* 122e1e86 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 122e1e8c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e1e8e je 0x122e1eac */
  if (C.zf) goto L_122e1eac;
  /* 122e1e90 mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e1e96 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 122e1e9c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e1e9e je 0x122e1eac */
  if (C.zf) goto L_122e1eac;
  /* 122e1ea0 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e1ea5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 122e1ea8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1eaa jne 0x122e1eb6 */
  if (!C.zf) goto L_122e1eb6;
L_122e1eac:;
  /* 122e1eac mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
L_122e1eb6:;
  /* 122e1eb6 mov esp, ebp */
  ESP = (EBP);
  /* 122e1eb8 pop ebp */
  EBP = (pop32());
  /* 122e1eb9 ret  */
  ESPCHK(0x122e1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x122e1ec0 (804 bytes, 220 insns) */
void f_122e1ec0(void) {
  FTRACE(0x122e1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 122e1ec3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e1ec9 push eax */
  push32((uint32_t)(EAX));
  /* 122e1eca call 0x122e2820 */
  push32(0x122e1ecfu); f_122e2820();
  /* 122e1ecf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1ed2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122e1ed5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e1ed7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e1eda push ecx */
  push32((uint32_t)(ECX));
  /* 122e1edb mov edx, dword ptr [0x123019c4] */
  EDX = (r32((uint32_t)(0x123019c4)));
  /* 122e1ee1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e1ee3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1ee5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 122e1eeb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1ef1 push edx */
  push32((uint32_t)(EDX));
  /* 122e1ef2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e1ef5 push eax */
  push32((uint32_t)(EAX));
  /* 122e1ef6 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e1efcu);
  /* 122e1efc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1efe jne 0x122e1f14 */
  if (!C.zf) goto L_122e1f14;
  /* 122e1f00 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e1f0a mov eax, 1 */
  EAX = (0x1u);
  /* 122e1f0f jmp 0x122e21de */
  goto L_122e21de;
L_122e1f14:;
  /* 122e1f14 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e1f17 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1f18 mov edx, dword ptr [0x123019d4] */
  EDX = (r32((uint32_t)(0x123019d4)));
  /* 122e1f1e push edx */
  push32((uint32_t)(EDX));
  /* 122e1f1f call 0x122e4630 */
  push32(0x122e1f24u); f_122e4630();
  /* 122e1f24 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1f27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1f29 jne 0x122e204f */
  if (!C.zf) goto L_122e204f;
  /* 122e1f2f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e1f31 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122e1f34 push eax */
  push32((uint32_t)(EAX));
  /* 122e1f35 mov ecx, dword ptr [0x123019cc] */
  ECX = (r32((uint32_t)(0x123019cc)));
  /* 122e1f3b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e1f3d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e1f3f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122e1f45 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1f4b push ecx */
  push32((uint32_t)(ECX));
  /* 122e1f4c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e1f4f push edx */
  push32((uint32_t)(EDX));
  /* 122e1f50 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e1f56u);
  /* 122e1f56 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1f58 jne 0x122e1f6e */
  if (!C.zf) goto L_122e1f6e;
  /* 122e1f5a mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e1f64 mov eax, 1 */
  EAX = (0x1u);
  /* 122e1f69 jmp 0x122e21de */
  goto L_122e21de;
L_122e1f6e:;
  /* 122e1f6e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122e1f71 push eax */
  push32((uint32_t)(EAX));
  /* 122e1f72 mov ecx, dword ptr [0x123019d0] */
  ECX = (r32((uint32_t)(0x123019d0)));
  /* 122e1f78 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1f79 call 0x122e4630 */
  push32(0x122e1f7eu); f_122e4630();
  /* 122e1f7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1f81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1f83 jne 0x122e1fb0 */
  if (!C.zf) goto L_122e1fb0;
  /* 122e1f85 mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e1f8b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 122e1f91 mov dword ptr [0x123019d8], edx */
  w32((uint32_t)(0x123019d8), (EDX));
  /* 122e1f97 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e1f9a mov dword ptr [0x123019dc], eax */
  w32((uint32_t)(0x123019dc), (EAX));
  /* 122e1f9f mov ecx, dword ptr [0x123019dc] */
  ECX = (r32((uint32_t)(0x123019dc)));
  /* 122e1fa5 mov dword ptr [0x123019c0], ecx */
  w32((uint32_t)(0x123019c0), (ECX));
  /* 122e1fab jmp 0x122e204f */
  goto L_122e204f;
L_122e1fb0:;
  /* 122e1fb0 mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e1fb6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 122e1fb9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e1fbb jne 0x122e204f */
  if (!C.zf) goto L_122e204f;
  /* 122e1fc1 cmp dword ptr [0x123019c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e1fc8 je 0x122e201d */
  if (C.zf) goto L_122e201d;
  /* 122e1fca mov eax, dword ptr [0x123019c8] */
  EAX = (r32((uint32_t)(0x123019c8)));
  /* 122e1fcf push eax */
  push32((uint32_t)(EAX));
  /* 122e1fd0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e1fd3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e1fd4 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e1fda push edx */
  push32((uint32_t)(EDX));
  /* 122e1fdb call 0x122e4700 */
  push32(0x122e1fe0u); f_122e4700();
  /* 122e1fe0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e1fe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e1fe5 jne 0x122e201d */
  if (!C.zf) goto L_122e201d;
  /* 122e1fe7 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e1fec or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 122e1fee mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e1ff3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e1ff6 mov dword ptr [0x123019dc], ecx */
  w32((uint32_t)(0x123019dc), (ECX));
  /* 122e1ffc mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e2002 push edx */
  push32((uint32_t)(EDX));
  /* 122e2003 call 0x122d9fb0 */
  push32(0x122e2008u); f_122d9fb0();
  /* 122e2008 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e200b cmp eax, dword ptr [0x123019c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123019c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2011 jne 0x122e201b */
  if (!C.zf) goto L_122e201b;
  /* 122e2013 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2016 mov dword ptr [0x123019c0], eax */
  w32((uint32_t)(0x123019c0), (EAX));
L_122e201b:;
  /* 122e201b jmp 0x122e204f */
  goto L_122e204f;
L_122e201d:;
  /* 122e201d mov ecx, dword ptr [0x123019d8] */
  ECX = (r32((uint32_t)(0x123019d8)));
  /* 122e2023 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122e2026 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e2028 jne 0x122e204f */
  if (!C.zf) goto L_122e204f;
  /* 122e202a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e202d push edx */
  push32((uint32_t)(EDX));
  /* 122e202e call 0x122e2560 */
  push32(0x122e2033u); f_122e2560();
  /* 122e2033 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2038 je 0x122e204f */
  if (C.zf) goto L_122e204f;
  /* 122e203a mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e203f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 122e2041 mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e2046 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2049 mov dword ptr [0x123019dc], ecx */
  w32((uint32_t)(0x123019dc), (ECX));
L_122e204f:;
  /* 122e204f mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e2055 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 122e205b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2061 je 0x122e21d1 */
  if (C.zf) goto L_122e21d1;
  /* 122e2067 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e2069 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122e206c push eax */
  push32((uint32_t)(EAX));
  /* 122e206d mov ecx, dword ptr [0x123019cc] */
  ECX = (r32((uint32_t)(0x123019cc)));
  /* 122e2073 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e2075 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2077 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 122e207d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2083 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2084 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2087 push edx */
  push32((uint32_t)(EDX));
  /* 122e2088 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e208eu);
  /* 122e208e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2090 jne 0x122e20a6 */
  if (!C.zf) goto L_122e20a6;
  /* 122e2092 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e209c mov eax, 1 */
  EAX = (0x1u);
  /* 122e20a1 jmp 0x122e21de */
  goto L_122e21de;
L_122e20a6:;
  /* 122e20a6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122e20a9 push eax */
  push32((uint32_t)(EAX));
  /* 122e20aa mov ecx, dword ptr [0x123019d0] */
  ECX = (r32((uint32_t)(0x123019d0)));
  /* 122e20b0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e20b1 call 0x122e4630 */
  push32(0x122e20b6u); f_122e4630();
  /* 122e20b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e20b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e20bb jne 0x122e2170 */
  if (!C.zf) goto L_122e2170;
  /* 122e20c1 mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e20c7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 122e20ca mov dword ptr [0x123019d8], edx */
  w32((uint32_t)(0x123019d8), (EDX));
  /* 122e20d0 cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e20d7 je 0x122e20fa */
  if (C.zf) goto L_122e20fa;
  /* 122e20d9 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e20de or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122e20e1 mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e20e6 cmp dword ptr [0x123019c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e20ed jne 0x122e20f8 */
  if (!C.zf) goto L_122e20f8;
  /* 122e20ef mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e20f2 mov dword ptr [0x123019c0], ecx */
  w32((uint32_t)(0x123019c0), (ECX));
L_122e20f8:;
  /* 122e20f8 jmp 0x122e216e */
  goto L_122e216e;
L_122e20fa:;
  /* 122e20fa cmp dword ptr [0x123019c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2101 je 0x122e214f */
  if (C.zf) goto L_122e214f;
  /* 122e2103 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e2109 push edx */
  push32((uint32_t)(EDX));
  /* 122e210a call 0x122d9fb0 */
  push32(0x122e210fu); f_122d9fb0();
  /* 122e210f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2112 cmp eax, dword ptr [0x123019c8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x123019c8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2118 jne 0x122e214f */
  if (!C.zf) goto L_122e214f;
  /* 122e211a push 1 */
  push32((uint32_t)(0x1u));
  /* 122e211c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e211f push eax */
  push32((uint32_t)(EAX));
  /* 122e2120 call 0x122e25b0 */
  push32(0x122e2125u); f_122e25b0();
  /* 122e2125 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2128 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e212a je 0x122e214d */
  if (C.zf) goto L_122e214d;
  /* 122e212c mov ecx, dword ptr [0x123019d8] */
  ECX = (r32((uint32_t)(0x123019d8)));
  /* 122e2132 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 122e2135 mov dword ptr [0x123019d8], ecx */
  w32((uint32_t)(0x123019d8), (ECX));
  /* 122e213b cmp dword ptr [0x123019c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2142 jne 0x122e214d */
  if (!C.zf) goto L_122e214d;
  /* 122e2144 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2147 mov dword ptr [0x123019c0], edx */
  w32((uint32_t)(0x123019c0), (EDX));
L_122e214d:;
  /* 122e214d jmp 0x122e216e */
  goto L_122e216e;
L_122e214f:;
  /* 122e214f mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e2154 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122e2157 mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e215c cmp dword ptr [0x123019c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2163 jne 0x122e216e */
  if (!C.zf) goto L_122e216e;
  /* 122e2165 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2168 mov dword ptr [0x123019c0], ecx */
  w32((uint32_t)(0x123019c0), (ECX));
L_122e216e:;
  /* 122e216e jmp 0x122e21d1 */
  goto L_122e21d1;
L_122e2170:;
  /* 122e2170 cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2177 jne 0x122e21d1 */
  if (!C.zf) goto L_122e21d1;
  /* 122e2179 cmp dword ptr [0x123019c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2180 je 0x122e21d1 */
  if (C.zf) goto L_122e21d1;
  /* 122e2182 mov edx, dword ptr [0x123019c8] */
  EDX = (r32((uint32_t)(0x123019c8)));
  /* 122e2188 push edx */
  push32((uint32_t)(EDX));
  /* 122e2189 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 122e218c push eax */
  push32((uint32_t)(EAX));
  /* 122e218d mov ecx, dword ptr [0x123019d0] */
  ECX = (r32((uint32_t)(0x123019d0)));
  /* 122e2193 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2194 call 0x122e4700 */
  push32(0x122e2199u); f_122e4700();
  /* 122e2199 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e219c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e219e jne 0x122e21d1 */
  if (!C.zf) goto L_122e21d1;
  /* 122e21a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e21a2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e21a5 push edx */
  push32((uint32_t)(EDX));
  /* 122e21a6 call 0x122e25b0 */
  push32(0x122e21abu); f_122e25b0();
  /* 122e21ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e21ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e21b0 je 0x122e21d1 */
  if (C.zf) goto L_122e21d1;
  /* 122e21b2 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e21b7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 122e21ba mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e21bf cmp dword ptr [0x123019c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e21c6 jne 0x122e21d1 */
  if (!C.zf) goto L_122e21d1;
  /* 122e21c8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e21cb mov dword ptr [0x123019c0], ecx */
  w32((uint32_t)(0x123019c0), (ECX));
L_122e21d1:;
  /* 122e21d1 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e21d6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122e21d9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e21db sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e21dd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122e21de:;
  /* 122e21de mov esp, ebp */
  ESP = (EBP);
  /* 122e21e0 pop ebp */
  EBP = (pop32());
  /* 122e21e1 ret 4 */
  ESPCHK(0x122e1ec0u, _esp0);
  ESP += 8; return;
}

/* FUN_100121f0 @ 0x122e21f0 (116 bytes, 33 insns) */
void f_122e21f0(void) {
  FTRACE(0x122e21f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e21f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e21f1 mov ebp, esp */
  EBP = (ESP);
  /* 122e21f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e21f4 mov eax, dword ptr [0x123019d0] */
  EAX = (r32((uint32_t)(0x123019d0)));
  /* 122e21f9 push eax */
  push32((uint32_t)(EAX));
  /* 122e21fa call 0x122d9fb0 */
  push32(0x122e21ffu); f_122d9fb0();
  /* 122e21ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2202 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e2204 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2207 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122e220a mov dword ptr [0x123019cc], ecx */
  w32((uint32_t)(0x123019cc), (ECX));
  /* 122e2210 cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2217 je 0x122e2222 */
  if (C.zf) goto L_122e2222;
  /* 122e2219 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122e2220 jmp 0x122e2234 */
  goto L_122e2234;
L_122e2222:;
  /* 122e2222 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e2228 push edx */
  push32((uint32_t)(EDX));
  /* 122e2229 call 0x122e28a0 */
  push32(0x122e222eu); f_122e28a0();
  /* 122e222e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2231 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e2234:;
  /* 122e2234 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2237 mov dword ptr [0x123019c8], eax */
  w32((uint32_t)(0x123019c8), (EAX));
  /* 122e223c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e223e push 0x122e2270 */
  push32((uint32_t)(0x122e2270u));
  /* 122e2243 call dword ptr [0x123042d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042d4))), 0x122e2249u);
  /* 122e2249 mov ecx, dword ptr [0x123019d8] */
  ECX = (r32((uint32_t)(0x123019d8)));
  /* 122e224f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122e2252 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e2254 jne 0x122e2260 */
  if (!C.zf) goto L_122e2260;
  /* 122e2256 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
L_122e2260:;
  /* 122e2260 mov esp, ebp */
  ESP = (EBP);
  /* 122e2262 pop ebp */
  EBP = (pop32());
  /* 122e2263 ret  */
  ESPCHK(0x122e21f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x122e2270 (287 bytes, 86 insns) */
void f_122e2270(void) {
  FTRACE(0x122e2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2270 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2271 mov ebp, esp */
  EBP = (ESP);
  /* 122e2273 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2276 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2279 push eax */
  push32((uint32_t)(EAX));
  /* 122e227a call 0x122e2820 */
  push32(0x122e227fu); f_122e2820();
  /* 122e227f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2282 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122e2285 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e2287 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e228a push ecx */
  push32((uint32_t)(ECX));
  /* 122e228b mov edx, dword ptr [0x123019cc] */
  EDX = (r32((uint32_t)(0x123019cc)));
  /* 122e2291 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e2293 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2295 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 122e229b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e22a1 push edx */
  push32((uint32_t)(EDX));
  /* 122e22a2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e22a5 push eax */
  push32((uint32_t)(EAX));
  /* 122e22a6 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e22acu);
  /* 122e22ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e22ae jne 0x122e22c4 */
  if (!C.zf) goto L_122e22c4;
  /* 122e22b0 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e22ba mov eax, 1 */
  EAX = (0x1u);
  /* 122e22bf jmp 0x122e2389 */
  goto L_122e2389;
L_122e22c4:;
  /* 122e22c4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e22c7 push ecx */
  push32((uint32_t)(ECX));
  /* 122e22c8 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e22ce push edx */
  push32((uint32_t)(EDX));
  /* 122e22cf call 0x122e4630 */
  push32(0x122e22d4u); f_122e4630();
  /* 122e22d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e22d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e22d9 jne 0x122e2319 */
  if (!C.zf) goto L_122e2319;
  /* 122e22db cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e22e2 jne 0x122e22f6 */
  if (!C.zf) goto L_122e22f6;
  /* 122e22e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e22e6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e22e9 push eax */
  push32((uint32_t)(EAX));
  /* 122e22ea call 0x122e25b0 */
  push32(0x122e22efu); f_122e25b0();
  /* 122e22ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e22f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e22f4 je 0x122e2317 */
  if (C.zf) goto L_122e2317;
L_122e22f6:;
  /* 122e22f6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e22f9 mov dword ptr [0x123019dc], ecx */
  w32((uint32_t)(0x123019dc), (ECX));
  /* 122e22ff mov edx, dword ptr [0x123019dc] */
  EDX = (r32((uint32_t)(0x123019dc)));
  /* 122e2305 mov dword ptr [0x123019c0], edx */
  w32((uint32_t)(0x123019c0), (EDX));
  /* 122e230b mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e2310 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122e2312 mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
L_122e2317:;
  /* 122e2317 jmp 0x122e237c */
  goto L_122e237c;
L_122e2319:;
  /* 122e2319 cmp dword ptr [0x123019cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2320 jne 0x122e237c */
  if (!C.zf) goto L_122e237c;
  /* 122e2322 cmp dword ptr [0x123019c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2329 je 0x122e237c */
  if (C.zf) goto L_122e237c;
  /* 122e232b mov ecx, dword ptr [0x123019c8] */
  ECX = (r32((uint32_t)(0x123019c8)));
  /* 122e2331 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2332 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 122e2335 push edx */
  push32((uint32_t)(EDX));
  /* 122e2336 mov eax, dword ptr [0x123019d0] */
  EAX = (r32((uint32_t)(0x123019d0)));
  /* 122e233b push eax */
  push32((uint32_t)(EAX));
  /* 122e233c call 0x122e4700 */
  push32(0x122e2341u); f_122e4700();
  /* 122e2341 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2344 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2346 jne 0x122e237c */
  if (!C.zf) goto L_122e237c;
  /* 122e2348 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e234a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e234d push ecx */
  push32((uint32_t)(ECX));
  /* 122e234e call 0x122e25b0 */
  push32(0x122e2353u); f_122e25b0();
  /* 122e2353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2358 je 0x122e237c */
  if (C.zf) goto L_122e237c;
  /* 122e235a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e235d mov dword ptr [0x123019dc], edx */
  w32((uint32_t)(0x123019dc), (EDX));
  /* 122e2363 mov eax, dword ptr [0x123019dc] */
  EAX = (r32((uint32_t)(0x123019dc)));
  /* 122e2368 mov dword ptr [0x123019c0], eax */
  w32((uint32_t)(0x123019c0), (EAX));
  /* 122e236d mov ecx, dword ptr [0x123019d8] */
  ECX = (r32((uint32_t)(0x123019d8)));
  /* 122e2373 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122e2376 mov dword ptr [0x123019d8], ecx */
  w32((uint32_t)(0x123019d8), (ECX));
L_122e237c:;
  /* 122e237c mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e2381 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122e2384 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e2386 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2388 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122e2389:;
  /* 122e2389 mov esp, ebp */
  ESP = (EBP);
  /* 122e238b pop ebp */
  EBP = (pop32());
  /* 122e238c ret 4 */
  ESPCHK(0x122e2270u, _esp0);
  ESP += 8; return;
}

/* FUN_10012390 @ 0x122e2390 (69 bytes, 20 insns) */
void f_122e2390(void) {
  FTRACE(0x122e2390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2390 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2391 mov ebp, esp */
  EBP = (ESP);
  /* 122e2393 mov eax, dword ptr [0x123019d4] */
  EAX = (r32((uint32_t)(0x123019d4)));
  /* 122e2398 push eax */
  push32((uint32_t)(EAX));
  /* 122e2399 call 0x122d9fb0 */
  push32(0x122e239eu); f_122d9fb0();
  /* 122e239e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e23a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e23a3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e23a6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 122e23a9 mov dword ptr [0x123019c4], ecx */
  w32((uint32_t)(0x123019c4), (ECX));
  /* 122e23af push 1 */
  push32((uint32_t)(0x1u));
  /* 122e23b1 push 0x122e23e0 */
  push32((uint32_t)(0x122e23e0u));
  /* 122e23b6 call dword ptr [0x123042d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042d4))), 0x122e23bcu);
  /* 122e23bc mov edx, dword ptr [0x123019d8] */
  EDX = (r32((uint32_t)(0x123019d8)));
  /* 122e23c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122e23c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e23c7 jne 0x122e23d3 */
  if (!C.zf) goto L_122e23d3;
  /* 122e23c9 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
L_122e23d3:;
  /* 122e23d3 pop ebp */
  EBP = (pop32());
  /* 122e23d4 ret  */
  ESPCHK(0x122e2390u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x122e23e0 (172 bytes, 54 insns) */
void f_122e23e0(void) {
  FTRACE(0x122e23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e23e1 mov ebp, esp */
  EBP = (ESP);
  /* 122e23e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e23e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e23e9 push eax */
  push32((uint32_t)(EAX));
  /* 122e23ea call 0x122e2820 */
  push32(0x122e23efu); f_122e2820();
  /* 122e23ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e23f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 122e23f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e23f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e23fa push ecx */
  push32((uint32_t)(ECX));
  /* 122e23fb mov edx, dword ptr [0x123019c4] */
  EDX = (r32((uint32_t)(0x123019c4)));
  /* 122e2401 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e2403 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2405 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 122e240b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2411 push edx */
  push32((uint32_t)(EDX));
  /* 122e2412 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e2415 push eax */
  push32((uint32_t)(EAX));
  /* 122e2416 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e241cu);
  /* 122e241c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e241e jne 0x122e2431 */
  if (!C.zf) goto L_122e2431;
  /* 122e2420 mov dword ptr [0x123019d8], 0 */
  w32((uint32_t)(0x123019d8), (0x0u));
  /* 122e242a mov eax, 1 */
  EAX = (0x1u);
  /* 122e242f jmp 0x122e2486 */
  goto L_122e2486;
L_122e2431:;
  /* 122e2431 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 122e2434 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2435 mov edx, dword ptr [0x123019d4] */
  EDX = (r32((uint32_t)(0x123019d4)));
  /* 122e243b push edx */
  push32((uint32_t)(EDX));
  /* 122e243c call 0x122e4630 */
  push32(0x122e2441u); f_122e4630();
  /* 122e2441 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2444 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2446 jne 0x122e2479 */
  if (!C.zf) goto L_122e2479;
  /* 122e2448 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e244b push eax */
  push32((uint32_t)(EAX));
  /* 122e244c call 0x122e2560 */
  push32(0x122e2451u); f_122e2560();
  /* 122e2451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2454 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2456 je 0x122e2479 */
  if (C.zf) goto L_122e2479;
  /* 122e2458 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 122e245b mov dword ptr [0x123019dc], ecx */
  w32((uint32_t)(0x123019dc), (ECX));
  /* 122e2461 mov edx, dword ptr [0x123019dc] */
  EDX = (r32((uint32_t)(0x123019dc)));
  /* 122e2467 mov dword ptr [0x123019c0], edx */
  w32((uint32_t)(0x123019c0), (EDX));
  /* 122e246d mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e2472 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 122e2474 mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
L_122e2479:;
  /* 122e2479 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e247e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 122e2481 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e2483 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2485 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_122e2486:;
  /* 122e2486 mov esp, ebp */
  ESP = (EBP);
  /* 122e2488 pop ebp */
  EBP = (pop32());
  /* 122e2489 ret 4 */
  ESPCHK(0x122e23e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10012490 @ 0x122e2490 (43 bytes, 11 insns) */
void f_122e2490(void) {
  FTRACE(0x122e2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2490 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2491 mov ebp, esp */
  EBP = (ESP);
  /* 122e2493 mov eax, dword ptr [0x123019d8] */
  EAX = (r32((uint32_t)(0x123019d8)));
  /* 122e2498 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 122e249d mov dword ptr [0x123019d8], eax */
  w32((uint32_t)(0x123019d8), (EAX));
  /* 122e24a2 call dword ptr [0x123042d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042d8))), 0x122e24a8u);
  /* 122e24a8 mov dword ptr [0x123019dc], eax */
  w32((uint32_t)(0x123019dc), (EAX));
  /* 122e24ad mov ecx, dword ptr [0x123019dc] */
  ECX = (r32((uint32_t)(0x123019dc)));
  /* 122e24b3 mov dword ptr [0x123019c0], ecx */
  w32((uint32_t)(0x123019c0), (ECX));
  /* 122e24b9 pop ebp */
  EBP = (pop32());
  /* 122e24ba ret  */
  ESPCHK(0x122e2490u, _esp0);
  ESP += 4; return;
}

/* FUN_100124c0 @ 0x122e24c0 (155 bytes, 57 insns) */
void f_122e24c0(void) {
  FTRACE(0x122e24c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e24c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e24c1 mov ebp, esp */
  EBP = (ESP);
  /* 122e24c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e24c6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e24ca je 0x122e24eb */
  if (C.zf) goto L_122e24eb;
  /* 122e24cc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e24cf movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e24d2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e24d4 je 0x122e24eb */
  if (C.zf) goto L_122e24eb;
  /* 122e24d6 push 0x122fe110 */
  push32((uint32_t)(0x122fe110u));
  /* 122e24db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e24de push edx */
  push32((uint32_t)(EDX));
  /* 122e24df call 0x122e1a20 */
  push32(0x122e24e4u); f_122e1a20();
  /* 122e24e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e24e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e24e9 jne 0x122e2513 */
  if (!C.zf) goto L_122e2513;
L_122e24eb:;
  /* 122e24eb push 8 */
  push32((uint32_t)(0x8u));
  /* 122e24ed lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122e24f0 push eax */
  push32((uint32_t)(EAX));
  /* 122e24f1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 122e24f6 mov ecx, dword ptr [0x123019dc] */
  ECX = (r32((uint32_t)(0x123019dc)));
  /* 122e24fc push ecx */
  push32((uint32_t)(ECX));
  /* 122e24fd call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e2503u);
  /* 122e2503 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2505 jne 0x122e250b */
  if (!C.zf) goto L_122e250b;
  /* 122e2507 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e2509 jmp 0x122e2557 */
  goto L_122e2557;
L_122e250b:;
  /* 122e250b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 122e250e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122e2511 jmp 0x122e254b */
  goto L_122e254b;
L_122e2513:;
  /* 122e2513 push 0x122fe10c */
  push32((uint32_t)(0x122fe10cu));
  /* 122e2518 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e251b push eax */
  push32((uint32_t)(EAX));
  /* 122e251c call 0x122e1a20 */
  push32(0x122e2521u); f_122e1a20();
  /* 122e2521 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2524 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2526 jne 0x122e254b */
  if (!C.zf) goto L_122e254b;
  /* 122e2528 push 8 */
  push32((uint32_t)(0x8u));
  /* 122e252a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122e252d push ecx */
  push32((uint32_t)(ECX));
  /* 122e252e push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e2530 mov edx, dword ptr [0x123019dc] */
  EDX = (r32((uint32_t)(0x123019dc)));
  /* 122e2536 push edx */
  push32((uint32_t)(EDX));
  /* 122e2537 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e253du);
  /* 122e253d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e253f jne 0x122e2545 */
  if (!C.zf) goto L_122e2545;
  /* 122e2541 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e2543 jmp 0x122e2557 */
  goto L_122e2557;
L_122e2545:;
  /* 122e2545 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122e2548 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122e254b:;
  /* 122e254b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e254e push ecx */
  push32((uint32_t)(ECX));
  /* 122e254f call 0x122e4810 */
  push32(0x122e2554u); f_122e4810();
  /* 122e2554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e2557:;
  /* 122e2557 mov esp, ebp */
  ESP = (EBP);
  /* 122e2559 pop ebp */
  EBP = (pop32());
  /* 122e255a ret  */
  ESPCHK(0x122e24c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012560 @ 0x122e2560 (79 bytes, 26 insns) */
void f_122e2560(void) {
  FTRACE(0x122e2560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2560 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2561 mov ebp, esp */
  EBP = (ESP);
  /* 122e2563 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2566 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 122e256a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 122e256e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e2575 jmp 0x122e2580 */
  goto L_122e2580;
L_122e2577:;
  /* 122e2577 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e257a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e257d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122e2580:;
  /* 122e2580 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2584 jae 0x122e25a6 */
  if (!C.cf) goto L_122e25a6;
  /* 122e2586 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2589 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e258f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e2592 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e2594 mov cx, word ptr [eax*2 + 0x123009c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x123009c4)));
  /* 122e259c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e259e jne 0x122e25a4 */
  if (!C.zf) goto L_122e25a4;
  /* 122e25a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e25a2 jmp 0x122e25ab */
  goto L_122e25ab;
L_122e25a4:;
  /* 122e25a4 jmp 0x122e2577 */
  goto L_122e2577;
L_122e25a6:;
  /* 122e25a6 mov eax, 1 */
  EAX = (0x1u);
L_122e25ab:;
  /* 122e25ab mov esp, ebp */
  ESP = (EBP);
  /* 122e25ad pop ebp */
  EBP = (pop32());
  /* 122e25ae ret  */
  ESPCHK(0x122e2560u, _esp0);
  ESP += 4; return;
}

/* FUN_100125b0 @ 0x122e25b0 (135 bytes, 48 insns) */
void f_122e25b0(void) {
  FTRACE(0x122e25b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e25b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e25b1 mov ebp, esp */
  EBP = (ESP);
  /* 122e25b3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e25b6 push esi */
  push32((uint32_t)(ESI));
  /* 122e25b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e25ba and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e25bf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e25c4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e25c9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 122e25cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e25d1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e25d4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 122e25d6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 122e25d9 push ecx */
  push32((uint32_t)(ECX));
  /* 122e25da push 1 */
  push32((uint32_t)(0x1u));
  /* 122e25dc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e25df push edx */
  push32((uint32_t)(EDX));
  /* 122e25e0 call dword ptr [0x123019e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123019e0))), 0x122e25e6u);
  /* 122e25e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e25e8 jne 0x122e25ee */
  if (!C.zf) goto L_122e25ee;
  /* 122e25ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e25ec jmp 0x122e2632 */
  goto L_122e2632;
L_122e25ee:;
  /* 122e25ee lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 122e25f1 push eax */
  push32((uint32_t)(EAX));
  /* 122e25f2 call 0x122e2820 */
  push32(0x122e25f7u); f_122e2820();
  /* 122e25f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e25fa cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e25fd je 0x122e262d */
  if (C.zf) goto L_122e262d;
  /* 122e25ff cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2603 je 0x122e262d */
  if (C.zf) goto L_122e262d;
  /* 122e2605 mov ecx, dword ptr [0x123019d0] */
  ECX = (r32((uint32_t)(0x123019d0)));
  /* 122e260b push ecx */
  push32((uint32_t)(ECX));
  /* 122e260c call 0x122e28a0 */
  push32(0x122e2611u); f_122e28a0();
  /* 122e2611 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2614 mov esi, eax */
  ESI = (EAX);
  /* 122e2616 mov edx, dword ptr [0x123019d0] */
  EDX = (r32((uint32_t)(0x123019d0)));
  /* 122e261c push edx */
  push32((uint32_t)(EDX));
  /* 122e261d call 0x122d9fb0 */
  push32(0x122e2622u); f_122d9fb0();
  /* 122e2622 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2625 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2627 jne 0x122e262d */
  if (!C.zf) goto L_122e262d;
  /* 122e2629 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e262b jmp 0x122e2632 */
  goto L_122e2632;
L_122e262d:;
  /* 122e262d mov eax, 1 */
  EAX = (0x1u);
L_122e2632:;
  /* 122e2632 pop esi */
  ESI = (pop32());
  /* 122e2633 mov esp, ebp */
  ESP = (EBP);
  /* 122e2635 pop ebp */
  EBP = (pop32());
  /* 122e2636 ret  */
  ESPCHK(0x122e25b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012640 @ 0x122e2640 (77 bytes, 18 insns) */
void f_122e2640(void) {
  FTRACE(0x122e2640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2640 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2641 mov ebp, esp */
  EBP = (ESP);
  /* 122e2643 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2649 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 122e2653 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 122e2659 push eax */
  push32((uint32_t)(EAX));
  /* 122e265a call dword ptr [0x123042fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042fc))), 0x122e2660u);
  /* 122e2660 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2662 je 0x122e2679 */
  if (C.zf) goto L_122e2679;
  /* 122e2664 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e266b jne 0x122e2679 */
  if (!C.zf) goto L_122e2679;
  /* 122e266d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 122e2677 jmp 0x122e2683 */
  goto L_122e2683;
L_122e2679:;
  /* 122e2679 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_122e2683:;
  /* 122e2683 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122e2689 mov esp, ebp */
  ESP = (EBP);
  /* 122e268b pop ebp */
  EBP = (pop32());
  /* 122e268c ret  */
  ESPCHK(0x122e2640u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x122e2690 (388 bytes, 118 insns) */
void f_122e2690(void) {
  FTRACE(0x122e2690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2690 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2691 mov ebp, esp */
  EBP = (ESP);
  /* 122e2693 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2696 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e269d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 122e26a4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122e26ab:;
  /* 122e26ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e26ae cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26b1 jg 0x122e27f8 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e27f8;
  /* 122e26b7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e26ba add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e26bd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e26be sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e26c0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e26c2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e26c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e26c8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e26cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e26ce cmp edx, dword ptr [ecx + 0x12300520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x12300520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26d4 jne 0x122e27ce */
  if (!C.zf) goto L_122e27ce;
  /* 122e26da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e26dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e26e0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26e4 ja 0x122e2707 */
  if ((!C.cf&&!C.zf)) goto L_122e2707;
  /* 122e26e6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26ea je 0x122e2779 */
  if (C.zf) goto L_122e2779;
  /* 122e26f0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26f4 je 0x122e2724 */
  if (C.zf) goto L_122e2724;
  /* 122e26f6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e26fa je 0x122e2746 */
  if (C.zf) goto L_122e2746;
  /* 122e26fc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2700 je 0x122e2768 */
  if (C.zf) goto L_122e2768;
  /* 122e2702 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2707:;
  /* 122e2707 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e270e je 0x122e2735 */
  if (C.zf) goto L_122e2735;
  /* 122e2710 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2717 je 0x122e2757 */
  if (C.zf) goto L_122e2757;
  /* 122e2719 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2720 je 0x122e278a */
  if (C.zf) goto L_122e278a;
  /* 122e2722 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2724:;
  /* 122e2724 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2727 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e272a add ecx, 0x12300524 */
  { uint32_t _a=(ECX),_b=(0x12300524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2730 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e2733 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2735:;
  /* 122e2735 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2738 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e273b mov eax, dword ptr [edx + 0x1230052c] */
  EAX = (r32((uint32_t)(EDX + 0x1230052c)));
  /* 122e2741 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e2744 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2746:;
  /* 122e2746 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2749 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e274c add ecx, 0x12300530 */
  { uint32_t _a=(ECX),_b=(0x12300530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2752 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e2755 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2757:;
  /* 122e2757 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e275a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e275d mov eax, dword ptr [edx + 0x12300534] */
  EAX = (r32((uint32_t)(EDX + 0x12300534)));
  /* 122e2763 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e2766 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2768:;
  /* 122e2768 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e276b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e276e add ecx, 0x12300538 */
  { uint32_t _a=(ECX),_b=(0x12300538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2774 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e2777 jmp 0x122e2798 */
  goto L_122e2798;
L_122e2779:;
  /* 122e2779 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e277c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e277f add edx, 0x1230053c */
  { uint32_t _a=(EDX),_b=(0x1230053cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2785 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e2788 jmp 0x122e2798 */
  goto L_122e2798;
L_122e278a:;
  /* 122e278a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e278d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e2790 add eax, 0x12300544 */
  { uint32_t _a=(EAX),_b=(0x12300544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2795 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e2798:;
  /* 122e2798 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e279c je 0x122e27a4 */
  if (C.zf) goto L_122e27a4;
  /* 122e279e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e27a2 jge 0x122e27a6 */
  if ((C.sf==C.of)) goto L_122e27a6;
L_122e27a4:;
  /* 122e27a4 jmp 0x122e27f8 */
  goto L_122e27f8;
L_122e27a6:;
  /* 122e27a6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e27a9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e27ac push ecx */
  push32((uint32_t)(ECX));
  /* 122e27ad mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e27b0 push edx */
  push32((uint32_t)(EDX));
  /* 122e27b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e27b4 push eax */
  push32((uint32_t)(EAX));
  /* 122e27b5 call 0x122da9a0 */
  push32(0x122e27bau); f_122da9a0();
  /* 122e27ba add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e27bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e27c0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e27c3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 122e27c7 mov eax, 1 */
  EAX = (0x1u);
  /* 122e27cc jmp 0x122e280e */
  goto L_122e280e;
L_122e27ce:;
  /* 122e27ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e27d1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e27d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e27d7 cmp eax, dword ptr [edx + 0x12300520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x12300520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e27dd jae 0x122e27ea */
  if (!C.cf) goto L_122e27ea;
  /* 122e27df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e27e2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e27e5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e27e8 jmp 0x122e27f3 */
  goto L_122e27f3;
L_122e27ea:;
  /* 122e27ea mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e27ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e27f0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e27f3:;
  /* 122e27f3 jmp 0x122e26ab */
  goto L_122e26ab;
L_122e27f8:;
  /* 122e27f8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e27fb push eax */
  push32((uint32_t)(EAX));
  /* 122e27fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e27ff push ecx */
  push32((uint32_t)(ECX));
  /* 122e2800 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e2803 push edx */
  push32((uint32_t)(EDX));
  /* 122e2804 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2807 push eax */
  push32((uint32_t)(EAX));
  /* 122e2808 call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e280eu);
L_122e280e:;
  /* 122e280e mov esp, ebp */
  ESP = (EBP);
  /* 122e2810 pop ebp */
  EBP = (pop32());
  /* 122e2811 ret 0x10 */
  ESPCHK(0x122e2690u, _esp0);
  ESP += 20; return;
}

/* FUN_10012820 @ 0x122e2820 (118 bytes, 42 insns) */
void f_122e2820(void) {
  FTRACE(0x122e2820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2820 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2821 mov ebp, esp */
  EBP = (ESP);
  /* 122e2823 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2826 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122e282d:;
  /* 122e282d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2830 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e2832 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 122e2835 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e2839 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e283c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e283f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e2842 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e2844 je 0x122e288f */
  if (C.zf) goto L_122e288f;
  /* 122e2846 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e284a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e284d jl 0x122e2862 */
  if ((C.sf!=C.of)) goto L_122e2862;
  /* 122e284f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e2853 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2856 jg 0x122e2862 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e2862;
  /* 122e2858 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122e285b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e285d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 122e2860 jmp 0x122e287c */
  goto L_122e287c;
L_122e2862:;
  /* 122e2862 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e2866 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2869 jl 0x122e287c */
  if ((C.sf!=C.of)) goto L_122e287c;
  /* 122e286b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e286f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2872 jg 0x122e287c */
  if ((!C.zf&&C.sf==C.of)) goto L_122e287c;
  /* 122e2874 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122e2877 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e2879 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_122e287c:;
  /* 122e287c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e287f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 122e2882 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e2886 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 122e288a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e288d jmp 0x122e282d */
  goto L_122e282d;
L_122e288f:;
  /* 122e288f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2892 mov esp, ebp */
  ESP = (EBP);
  /* 122e2894 pop ebp */
  EBP = (pop32());
  /* 122e2895 ret  */
  ESPCHK(0x122e2820u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x122e28a0 (101 bytes, 36 insns) */
void f_122e28a0(void) {
  FTRACE(0x122e28a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e28a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e28a1 mov ebp, esp */
  EBP = (ESP);
  /* 122e28a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e28a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e28ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e28b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e28b2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 122e28b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e28b8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e28bb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122e28be:;
  /* 122e28be movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122e28c2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e28c5 jl 0x122e28d0 */
  if ((C.sf!=C.of)) goto L_122e28d0;
  /* 122e28c7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122e28cb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e28ce jle 0x122e28e2 */
  if ((C.zf||C.sf!=C.of)) goto L_122e28e2;
L_122e28d0:;
  /* 122e28d0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122e28d4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e28d7 jl 0x122e28fe */
  if ((C.sf!=C.of)) goto L_122e28fe;
  /* 122e28d9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 122e28dd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e28e0 jg 0x122e28fe */
  if ((!C.zf&&C.sf==C.of)) goto L_122e28fe;
L_122e28e2:;
  /* 122e28e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e28e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e28e8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e28eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e28ee mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e28f0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 122e28f3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e28f6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e28f9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122e28fc jmp 0x122e28be */
  goto L_122e28be;
L_122e28fe:;
  /* 122e28fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e2901 mov esp, ebp */
  ESP = (EBP);
  /* 122e2903 pop ebp */
  EBP = (pop32());
  /* 122e2904 ret  */
  ESPCHK(0x122e28a0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x122e2908 (32 bytes, 18 insns) */
void f_122e2908(void) {
  FTRACE(0x122e2908u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2908 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2909 mov ebp, esp */
  EBP = (ESP);
  /* 122e290b push ebx */
  push32((uint32_t)(EBX));
  /* 122e290c push esi */
  push32((uint32_t)(ESI));
  /* 122e290d push edi */
  push32((uint32_t)(EDI));
  /* 122e290e push ebp */
  push32((uint32_t)(EBP));
  /* 122e290f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e2911 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e2913 push 0x122e2920 */
  push32((uint32_t)(0x122e2920u));
  /* 122e2918 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 122e291b call 0x122e66ec */
  push32(0x122e2920u); f_122e66ec();
  /* 122e2920 pop ebp */
  EBP = (pop32());
  /* 122e2921 pop edi */
  EDI = (pop32());
  /* 122e2922 pop esi */
  ESI = (pop32());
  /* 122e2923 pop ebx */
  EBX = (pop32());
  /* 122e2924 mov esp, ebp */
  ESP = (EBP);
  /* 122e2926 pop ebp */
  EBP = (pop32());
  /* 122e2927 ret  */
  ESPCHK(0x122e2908u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x122e294a (104 bytes, 33 insns) */
void f_122e294a(void) {
  FTRACE(0x122e294au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e294a push ebx */
  push32((uint32_t)(EBX));
  /* 122e294b push esi */
  push32((uint32_t)(ESI));
  /* 122e294c push edi */
  push32((uint32_t)(EDI));
  /* 122e294d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 122e2951 push eax */
  push32((uint32_t)(EAX));
  /* 122e2952 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 122e2954 push 0x122e2928 */
  push32((uint32_t)(0x122e2928u));
  /* 122e2959 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 122e2960 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_122e2967:;
  /* 122e2967 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 122e296b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 122e296e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 122e2971 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2974 je 0x122e29a4 */
  if (C.zf) goto L_122e29a4;
  /* 122e2976 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e297a je 0x122e29a4 */
  if (C.zf) goto L_122e29a4;
  /* 122e297c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 122e297f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 122e2982 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 122e2986 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 122e2989 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e298e jne 0x122e29a2 */
  if (!C.zf) goto L_122e29a2;
  /* 122e2990 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 122e2995 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 122e2999 call 0x122e29de */
  push32(0x122e299eu); f_122e29de();
  /* 122e299e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x122e29a2u);
L_122e29a2:;
  /* 122e29a2 jmp 0x122e2967 */
  goto L_122e2967;
L_122e29a4:;
  /* 122e29a4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 122e29ab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e29ae pop edi */
  EDI = (pop32());
  /* 122e29af pop esi */
  ESI = (pop32());
  /* 122e29b0 pop ebx */
  EBX = (pop32());
  /* 122e29b1 ret  */
  ESPCHK(0x122e294au, _esp0);
  ESP += 4; return;
}

/* FUN_100129de @ 0x122e29de (24 bytes, 10 insns) */
void f_122e29de(void) {
  FTRACE(0x122e29deu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e29de push ebx */
  push32((uint32_t)(EBX));
  /* 122e29df push ecx */
  push32((uint32_t)(ECX));
  /* 122e29e0 mov ebx, 0x12300c98 */
  EBX = (0x12300c98u);
  /* 122e29e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e29e8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 122e29eb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 122e29ee mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 122e29f1 pop ecx */
  ECX = (pop32());
  /* 122e29f2 pop ebx */
  EBX = (pop32());
  /* 122e29f3 ret 4 */
  ESPCHK(0x122e29deu, _esp0);
  ESP += 8; return;
}

/* FUN_10012abd @ 0x122e2abd (27 bytes, 11 insns) */
void f_122e2abd(void) {
  FTRACE(0x122e2abdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2abd push ebp */
  push32((uint32_t)(EBP));
  /* 122e2abe mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e2ac2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 122e2ac4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122e2ac7 push eax */
  push32((uint32_t)(EAX));
  /* 122e2ac8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 122e2acb push eax */
  push32((uint32_t)(EAX));
  /* 122e2acc call 0x122e294a */
  push32(0x122e2ad1u); f_122e294a();
  /* 122e2ad1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ad4 pop ebp */
  EBP = (pop32());
  /* 122e2ad5 ret 4 */
  ESPCHK(0x122e2abdu, _esp0);
  ESP += 8; return;
}

/* FUN_10012ae0 @ 0x122e2ae0 (122 bytes, 39 insns) */
void f_122e2ae0(void) {
  FTRACE(0x122e2ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2ae1 mov ebp, esp */
  EBP = (ESP);
  /* 122e2ae3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2ae4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2ae7 cmp eax, dword ptr [0x1230325c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1230325c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2aed jae 0x122e2b11 */
  if (!C.cf) goto L_122e2b11;
  /* 122e2aef mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2af2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 122e2af5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2af8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 122e2afb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e2afe mov eax, dword ptr [ecx*4 + 0x12303120] */
  EAX = (r32((uint32_t)(ECX*4 + 0x12303120)));
  /* 122e2b05 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 122e2b0a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122e2b0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e2b0f jne 0x122e2b2c */
  if (!C.zf) goto L_122e2b2c;
L_122e2b11:;
  /* 122e2b11 call 0x122de6f0 */
  push32(0x122e2b16u); f_122de6f0();
  /* 122e2b16 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 122e2b1c call 0x122de700 */
  push32(0x122e2b21u); f_122de700();
  /* 122e2b21 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122e2b27 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e2b2a jmp 0x122e2b56 */
  goto L_122e2b56;
L_122e2b2c:;
  /* 122e2b2c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2b2f push edx */
  push32((uint32_t)(EDX));
  /* 122e2b30 call 0x122dec20 */
  push32(0x122e2b35u); f_122dec20();
  /* 122e2b35 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b38 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2b3b push eax */
  push32((uint32_t)(EAX));
  /* 122e2b3c call 0x122e2b60 */
  push32(0x122e2b41u); f_122e2b60();
  /* 122e2b41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e2b47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2b4a push ecx */
  push32((uint32_t)(ECX));
  /* 122e2b4b call 0x122decb0 */
  push32(0x122e2b50u); f_122decb0();
  /* 122e2b50 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122e2b56:;
  /* 122e2b56 mov esp, ebp */
  ESP = (EBP);
  /* 122e2b58 pop ebp */
  EBP = (pop32());
  /* 122e2b59 ret  */
  ESPCHK(0x122e2ae0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x122e2b60 (170 bytes, 59 insns) */
void f_122e2b60(void) {
  FTRACE(0x122e2b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2b60 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2b61 mov ebp, esp */
  EBP = (ESP);
  /* 122e2b63 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2b64 push esi */
  push32((uint32_t)(ESI));
  /* 122e2b65 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2b68 push eax */
  push32((uint32_t)(EAX));
  /* 122e2b69 call 0x122deaa0 */
  push32(0x122e2b6eu); f_122deaa0();
  /* 122e2b6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b71 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2b74 je 0x122e2bb3 */
  if (C.zf) goto L_122e2bb3;
  /* 122e2b76 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2b7a je 0x122e2b82 */
  if (C.zf) goto L_122e2b82;
  /* 122e2b7c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2b80 jne 0x122e2b9c */
  if (!C.zf) goto L_122e2b9c;
L_122e2b82:;
  /* 122e2b82 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e2b84 call 0x122deaa0 */
  push32(0x122e2b89u); f_122deaa0();
  /* 122e2b89 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b8c mov esi, eax */
  ESI = (EAX);
  /* 122e2b8e push 2 */
  push32((uint32_t)(0x2u));
  /* 122e2b90 call 0x122deaa0 */
  push32(0x122e2b95u); f_122deaa0();
  /* 122e2b95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2b98 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2b9a je 0x122e2bb3 */
  if (C.zf) goto L_122e2bb3;
L_122e2b9c:;
  /* 122e2b9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2b9f push ecx */
  push32((uint32_t)(ECX));
  /* 122e2ba0 call 0x122deaa0 */
  push32(0x122e2ba5u); f_122deaa0();
  /* 122e2ba5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ba8 push eax */
  push32((uint32_t)(EAX));
  /* 122e2ba9 call dword ptr [0x12304304] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304304))), 0x122e2bafu);
  /* 122e2baf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2bb1 je 0x122e2bbc */
  if (C.zf) goto L_122e2bbc;
L_122e2bb3:;
  /* 122e2bb3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e2bba jmp 0x122e2bc5 */
  goto L_122e2bc5;
L_122e2bbc:;
  /* 122e2bbc call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122e2bc2u);
  /* 122e2bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e2bc5:;
  /* 122e2bc5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2bc8 push edx */
  push32((uint32_t)(EDX));
  /* 122e2bc9 call 0x122de9c0 */
  push32(0x122e2bceu); f_122de9c0();
  /* 122e2bce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2bd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2bd4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 122e2bd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2bda and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 122e2bdd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e2be0 mov edx, dword ptr [eax*4 + 0x12303120] */
  EDX = (r32((uint32_t)(EAX*4 + 0x12303120)));
  /* 122e2be7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 122e2bec cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2bf0 je 0x122e2c03 */
  if (C.zf) goto L_122e2c03;
  /* 122e2bf2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2bf5 push eax */
  push32((uint32_t)(EAX));
  /* 122e2bf6 call 0x122de650 */
  push32(0x122e2bfbu); f_122de650();
  /* 122e2bfb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2bfe or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e2c01 jmp 0x122e2c05 */
  goto L_122e2c05;
L_122e2c03:;
  /* 122e2c03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e2c05:;
  /* 122e2c05 pop esi */
  ESI = (pop32());
  /* 122e2c06 mov esp, ebp */
  ESP = (EBP);
  /* 122e2c08 pop ebp */
  EBP = (pop32());
  /* 122e2c09 ret  */
  ESPCHK(0x122e2b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c10 @ 0x122e2c10 (146 bytes, 52 insns) */
void f_122e2c10(void) {
  FTRACE(0x122e2c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2c10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2c11 mov ebp, esp */
  EBP = (ESP);
  /* 122e2c13 push ebx */
  push32((uint32_t)(EBX));
  /* 122e2c14 push esi */
  push32((uint32_t)(ESI));
  /* 122e2c15 push edi */
  push32((uint32_t)(EDI));
L_122e2c16:;
  /* 122e2c16 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2c1a jne 0x122e2c3a */
  if (!C.zf) goto L_122e2c3a;
  /* 122e2c1c push 0x122fda4c */
  push32((uint32_t)(0x122fda4cu));
  /* 122e2c21 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e2c23 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 122e2c25 push 0x122fe114 */
  push32((uint32_t)(0x122fe114u));
  /* 122e2c2a push 2 */
  push32((uint32_t)(0x2u));
  /* 122e2c2c call 0x122d5120 */
  push32(0x122e2c31u); f_122d5120();
  /* 122e2c31 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2c34 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2c37 jne 0x122e2c3a */
  if (!C.zf) goto L_122e2c3a;
  /* 122e2c39 int3  */
  x86_unimpl("int3 @ 0x122e2c39");
L_122e2c3a:;
  /* 122e2c3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e2c3c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e2c3e jne 0x122e2c16 */
  if (!C.zf) goto L_122e2c16;
  /* 122e2c40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c43 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e2c46 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 122e2c4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e2c4e je 0x122e2c9d */
  if (C.zf) goto L_122e2c9d;
  /* 122e2c50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c53 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 122e2c56 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 122e2c59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e2c5b je 0x122e2c9d */
  if (C.zf) goto L_122e2c9d;
  /* 122e2c5d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e2c5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c62 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122e2c65 push eax */
  push32((uint32_t)(EAX));
  /* 122e2c66 call 0x122d7c10 */
  push32(0x122e2c6bu); f_122d7c10();
  /* 122e2c6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2c6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c71 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e2c74 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 122e2c7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c7d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 122e2c80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c83 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 122e2c89 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c8c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 122e2c93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e2c96 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_122e2c9d:;
  /* 122e2c9d pop edi */
  EDI = (pop32());
  /* 122e2c9e pop esi */
  ESI = (pop32());
  /* 122e2c9f pop ebx */
  EBX = (pop32());
  /* 122e2ca0 pop ebp */
  EBP = (pop32());
  /* 122e2ca1 ret  */
  ESPCHK(0x122e2c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x122e2cb0 (289 bytes, 97 insns) */
void f_122e2cb0(void) {
  FTRACE(0x122e2cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2cb1 mov ebp, esp */
  EBP = (ESP);
  /* 122e2cb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2cb6 push esi */
  push32((uint32_t)(ESI));
  /* 122e2cb7 mov eax, dword ptr [0x12300ca8] */
  EAX = (r32((uint32_t)(0x12300ca8)));
  /* 122e2cbc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e2cbf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e2cc6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2ccd jmp 0x122e2cd8 */
  goto L_122e2cd8;
L_122e2ccf:;
  /* 122e2ccf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2cd2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2cd5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122e2cd8:;
  /* 122e2cd8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2cdc jae 0x122e2d11 */
  if (!C.cf) goto L_122e2d11;
  /* 122e2cde mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2ce1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2ce4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122e2ce7 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2ce8 call 0x122d9fb0 */
  push32(0x122e2cedu); f_122d9fb0();
  /* 122e2ced add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2cf0 mov esi, eax */
  ESI = (EAX);
  /* 122e2cf2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2cf5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2cf8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 122e2cfc push ecx */
  push32((uint32_t)(ECX));
  /* 122e2cfd call 0x122d9fb0 */
  push32(0x122e2d02u); f_122d9fb0();
  /* 122e2d02 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d05 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d08 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122e2d0c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e2d0f jmp 0x122e2ccf */
  goto L_122e2ccf;
L_122e2d11:;
  /* 122e2d11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e2d14 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d17 push eax */
  push32((uint32_t)(EAX));
  /* 122e2d18 call 0x122d7160 */
  push32(0x122e2d1du); f_122d7160();
  /* 122e2d1d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d20 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e2d23 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2d27 je 0x122e2dc9 */
  if (C.zf) goto L_122e2dc9;
  /* 122e2d2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2d30 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2d33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2d3a jmp 0x122e2d45 */
  goto L_122e2d45;
L_122e2d3c:;
  /* 122e2d3c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2d3f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d42 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e2d45:;
  /* 122e2d45 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2d49 jae 0x122e2dba */
  if (!C.cf) goto L_122e2dba;
  /* 122e2d4b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d4e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 122e2d51 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d54 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d57 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2d5a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2d5d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2d60 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122e2d63 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2d64 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d67 push edx */
  push32((uint32_t)(EDX));
  /* 122e2d68 call 0x122da130 */
  push32(0x122e2d6du); f_122da130();
  /* 122e2d6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d70 push eax */
  push32((uint32_t)(EAX));
  /* 122e2d71 call 0x122d9fb0 */
  push32(0x122e2d76u); f_122d9fb0();
  /* 122e2d76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d79 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d7c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d7e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2d81 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d84 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 122e2d87 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2d8d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e2d90 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2d93 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2d96 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 122e2d9a push eax */
  push32((uint32_t)(EAX));
  /* 122e2d9b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2d9e push ecx */
  push32((uint32_t)(ECX));
  /* 122e2d9f call 0x122da130 */
  push32(0x122e2da4u); f_122da130();
  /* 122e2da4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2da7 push eax */
  push32((uint32_t)(EAX));
  /* 122e2da8 call 0x122d9fb0 */
  push32(0x122e2dadu); f_122d9fb0();
  /* 122e2dad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2db0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2db3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2db5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e2db8 jmp 0x122e2d3c */
  goto L_122e2d3c;
L_122e2dba:;
  /* 122e2dba mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2dbd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122e2dc0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2dc3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2dc6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122e2dc9:;
  /* 122e2dc9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2dcc pop esi */
  ESI = (pop32());
  /* 122e2dcd mov esp, ebp */
  ESP = (EBP);
  /* 122e2dcf pop ebp */
  EBP = (pop32());
  /* 122e2dd0 ret  */
  ESPCHK(0x122e2cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012de0 @ 0x122e2de0 (291 bytes, 97 insns) */
void f_122e2de0(void) {
  FTRACE(0x122e2de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2de0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2de1 mov ebp, esp */
  EBP = (ESP);
  /* 122e2de3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2de6 push esi */
  push32((uint32_t)(ESI));
  /* 122e2de7 mov eax, dword ptr [0x12300ca8] */
  EAX = (r32((uint32_t)(0x12300ca8)));
  /* 122e2dec mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e2def mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e2df6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2dfd jmp 0x122e2e08 */
  goto L_122e2e08;
L_122e2dff:;
  /* 122e2dff mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2e02 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e05 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122e2e08:;
  /* 122e2e08 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2e0c jae 0x122e2e42 */
  if (!C.cf) goto L_122e2e42;
  /* 122e2e0e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2e11 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2e14 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 122e2e18 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2e19 call 0x122d9fb0 */
  push32(0x122e2e1eu); f_122d9fb0();
  /* 122e2e1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e21 mov esi, eax */
  ESI = (EAX);
  /* 122e2e23 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2e26 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2e29 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 122e2e2d push ecx */
  push32((uint32_t)(ECX));
  /* 122e2e2e call 0x122d9fb0 */
  push32(0x122e2e33u); f_122d9fb0();
  /* 122e2e33 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e36 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e39 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122e2e3d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e2e40 jmp 0x122e2dff */
  goto L_122e2dff;
L_122e2e42:;
  /* 122e2e42 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e2e45 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e48 push eax */
  push32((uint32_t)(EAX));
  /* 122e2e49 call 0x122d7160 */
  push32(0x122e2e4eu); f_122d7160();
  /* 122e2e4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e51 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e2e54 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2e58 je 0x122e2efb */
  if (C.zf) goto L_122e2efb;
  /* 122e2e5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2e61 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2e64 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2e6b jmp 0x122e2e76 */
  goto L_122e2e76;
L_122e2e6d:;
  /* 122e2e6d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2e70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e73 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e2e76:;
  /* 122e2e76 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2e7a jae 0x122e2eec */
  if (!C.cf) goto L_122e2eec;
  /* 122e2e7c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2e7f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 122e2e82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2e85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2e88 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2e8b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2e8e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2e91 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 122e2e95 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2e96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2e99 push edx */
  push32((uint32_t)(EDX));
  /* 122e2e9a call 0x122da130 */
  push32(0x122e2e9fu); f_122da130();
  /* 122e2e9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ea2 push eax */
  push32((uint32_t)(EAX));
  /* 122e2ea3 call 0x122d9fb0 */
  push32(0x122e2ea8u); f_122d9fb0();
  /* 122e2ea8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2eab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2eae add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2eb0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e2eb3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2eb6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 122e2eb9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2ebc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ebf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e2ec2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2ec5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2ec8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122e2ecc push eax */
  push32((uint32_t)(EAX));
  /* 122e2ecd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2ed0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2ed1 call 0x122da130 */
  push32(0x122e2ed6u); f_122da130();
  /* 122e2ed6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ed9 push eax */
  push32((uint32_t)(EAX));
  /* 122e2eda call 0x122d9fb0 */
  push32(0x122e2edfu); f_122d9fb0();
  /* 122e2edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ee2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2ee5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ee7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e2eea jmp 0x122e2e6d */
  goto L_122e2e6d;
L_122e2eec:;
  /* 122e2eec mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2eef mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122e2ef2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e2ef5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2ef8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_122e2efb:;
  /* 122e2efb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e2efe pop esi */
  ESI = (pop32());
  /* 122e2eff mov esp, ebp */
  ESP = (EBP);
  /* 122e2f01 pop ebp */
  EBP = (pop32());
  /* 122e2f02 ret  */
  ESPCHK(0x122e2de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f10 @ 0x122e2f10 (878 bytes, 273 insns) */
void f_122e2f10(void) {
  FTRACE(0x122e2f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e2f10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e2f11 mov ebp, esp */
  EBP = (ESP);
  /* 122e2f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e2f16 push esi */
  push32((uint32_t)(ESI));
  /* 122e2f17 mov eax, dword ptr [0x12300ca8] */
  EAX = (r32((uint32_t)(0x12300ca8)));
  /* 122e2f1c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e2f1f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e2f26 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2f2d jmp 0x122e2f38 */
  goto L_122e2f38;
L_122e2f2f:;
  /* 122e2f2f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2f32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f35 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122e2f38:;
  /* 122e2f38 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2f3c jae 0x122e2f71 */
  if (!C.cf) goto L_122e2f71;
  /* 122e2f3e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2f41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2f44 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 122e2f47 push ecx */
  push32((uint32_t)(ECX));
  /* 122e2f48 call 0x122d9fb0 */
  push32(0x122e2f4du); f_122d9fb0();
  /* 122e2f4d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f50 mov esi, eax */
  ESI = (EAX);
  /* 122e2f52 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2f58 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 122e2f5c push ecx */
  push32((uint32_t)(ECX));
  /* 122e2f5d call 0x122d9fb0 */
  push32(0x122e2f62u); f_122d9fb0();
  /* 122e2f62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f65 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f68 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122e2f6c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e2f6f jmp 0x122e2f2f */
  goto L_122e2f2f;
L_122e2f71:;
  /* 122e2f71 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e2f78 jmp 0x122e2f83 */
  goto L_122e2f83;
L_122e2f7a:;
  /* 122e2f7a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2f7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f80 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122e2f83:;
  /* 122e2f83 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e2f87 jae 0x122e2fbd */
  if (!C.cf) goto L_122e2fbd;
  /* 122e2f89 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2f8c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2f8f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122e2f93 push eax */
  push32((uint32_t)(EAX));
  /* 122e2f94 call 0x122d9fb0 */
  push32(0x122e2f99u); f_122d9fb0();
  /* 122e2f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2f9c mov esi, eax */
  ESI = (EAX);
  /* 122e2f9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e2fa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2fa4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122e2fa8 push eax */
  push32((uint32_t)(EAX));
  /* 122e2fa9 call 0x122d9fb0 */
  push32(0x122e2faeu); f_122d9fb0();
  /* 122e2fae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fb1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fb4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122e2fb8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e2fbb jmp 0x122e2f7a */
  goto L_122e2f7a;
L_122e2fbd:;
  /* 122e2fbd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2fc0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 122e2fc6 push eax */
  push32((uint32_t)(EAX));
  /* 122e2fc7 call 0x122d9fb0 */
  push32(0x122e2fccu); f_122d9fb0();
  /* 122e2fcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fcf mov esi, eax */
  ESI = (EAX);
  /* 122e2fd1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2fd4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 122e2fda push edx */
  push32((uint32_t)(EDX));
  /* 122e2fdb call 0x122d9fb0 */
  push32(0x122e2fe0u); f_122d9fb0();
  /* 122e2fe0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fe3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fe6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 122e2fea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e2fed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e2ff0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 122e2ff6 push edx */
  push32((uint32_t)(EDX));
  /* 122e2ff7 call 0x122d9fb0 */
  push32(0x122e2ffcu); f_122d9fb0();
  /* 122e2ffc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e2fff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3002 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e3006 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e3009 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e300c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 122e3012 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3013 call 0x122d9fb0 */
  push32(0x122e3018u); f_122d9fb0();
  /* 122e3018 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e301b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e301e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122e3022 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e3025 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3028 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122e302e push edx */
  push32((uint32_t)(EDX));
  /* 122e302f call 0x122d9fb0 */
  push32(0x122e3034u); f_122d9fb0();
  /* 122e3034 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3037 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e303a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e303e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e3041 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3044 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3049 push eax */
  push32((uint32_t)(EAX));
  /* 122e304a call 0x122d7160 */
  push32(0x122e304fu); f_122d7160();
  /* 122e304f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3052 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e3055 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3059 je 0x122e3276 */
  if (C.zf) goto L_122e3276;
  /* 122e305f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3062 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 122e3065 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3068 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e306e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e3071 push 0xac */
  push32((uint32_t)(0xacu));
  /* 122e3076 mov eax, dword ptr [0x12300ca8] */
  EAX = (r32((uint32_t)(0x12300ca8)));
  /* 122e307b push eax */
  push32((uint32_t)(EAX));
  /* 122e307c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e307f push ecx */
  push32((uint32_t)(ECX));
  /* 122e3080 call 0x122de310 */
  push32(0x122e3085u); f_122de310();
  /* 122e3085 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3088 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e308f jmp 0x122e309a */
  goto L_122e309a;
L_122e3091:;
  /* 122e3091 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3094 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3097 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e309a:;
  /* 122e309a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e309e jae 0x122e310e */
  if (!C.cf) goto L_122e310e;
  /* 122e30a0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e30a3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e30a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e30a9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 122e30ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e30af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e30b2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122e30b5 push edx */
  push32((uint32_t)(EDX));
  /* 122e30b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e30b9 push eax */
  push32((uint32_t)(EAX));
  /* 122e30ba call 0x122da130 */
  push32(0x122e30bfu); f_122da130();
  /* 122e30bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e30c2 push eax */
  push32((uint32_t)(EAX));
  /* 122e30c3 call 0x122d9fb0 */
  push32(0x122e30c8u); f_122d9fb0();
  /* 122e30c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e30cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e30ce lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e30d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e30d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e30d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e30db mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e30de mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 122e30e2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e30e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e30e8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 122e30ec push edx */
  push32((uint32_t)(EDX));
  /* 122e30ed mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e30f0 push eax */
  push32((uint32_t)(EAX));
  /* 122e30f1 call 0x122da130 */
  push32(0x122e30f6u); f_122da130();
  /* 122e30f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e30f9 push eax */
  push32((uint32_t)(EAX));
  /* 122e30fa call 0x122d9fb0 */
  push32(0x122e30ffu); f_122d9fb0();
  /* 122e30ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3102 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3105 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e3109 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e310c jmp 0x122e3091 */
  goto L_122e3091;
L_122e310e:;
  /* 122e310e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e3115 jmp 0x122e3120 */
  goto L_122e3120;
L_122e3117:;
  /* 122e3117 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e311a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e311d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122e3120:;
  /* 122e3120 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3124 jae 0x122e3196 */
  if (!C.cf) goto L_122e3196;
  /* 122e3126 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3129 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e312c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e312f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 122e3133 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3136 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3139 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122e313d push eax */
  push32((uint32_t)(EAX));
  /* 122e313e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3141 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3142 call 0x122da130 */
  push32(0x122e3147u); f_122da130();
  /* 122e3147 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e314a push eax */
  push32((uint32_t)(EAX));
  /* 122e314b call 0x122d9fb0 */
  push32(0x122e3150u); f_122d9fb0();
  /* 122e3150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3153 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3156 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122e315a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e315d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3160 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3163 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3166 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 122e316a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e316d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3170 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122e3174 push eax */
  push32((uint32_t)(EAX));
  /* 122e3175 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3178 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3179 call 0x122da130 */
  push32(0x122e317eu); f_122da130();
  /* 122e317e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3181 push eax */
  push32((uint32_t)(EAX));
  /* 122e3182 call 0x122d9fb0 */
  push32(0x122e3187u); f_122d9fb0();
  /* 122e3187 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e318a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e318d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122e3191 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e3194 jmp 0x122e3117 */
  goto L_122e3117;
L_122e3196:;
  /* 122e3196 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3199 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e319c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 122e31a2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e31a5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 122e31ab push ecx */
  push32((uint32_t)(ECX));
  /* 122e31ac mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e31af push edx */
  push32((uint32_t)(EDX));
  /* 122e31b0 call 0x122da130 */
  push32(0x122e31b5u); f_122da130();
  /* 122e31b5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e31b8 push eax */
  push32((uint32_t)(EAX));
  /* 122e31b9 call 0x122d9fb0 */
  push32(0x122e31beu); f_122d9fb0();
  /* 122e31be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e31c1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e31c4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e31c8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e31cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e31ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e31d1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 122e31d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e31da mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122e31e0 push eax */
  push32((uint32_t)(EAX));
  /* 122e31e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e31e4 push ecx */
  push32((uint32_t)(ECX));
  /* 122e31e5 call 0x122da130 */
  push32(0x122e31eau); f_122da130();
  /* 122e31ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e31ed push eax */
  push32((uint32_t)(EAX));
  /* 122e31ee call 0x122d9fb0 */
  push32(0x122e31f3u); f_122d9fb0();
  /* 122e31f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e31f6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e31f9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122e31fd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e3200 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3203 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3206 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 122e320c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e320f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 122e3215 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3216 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3219 push edx */
  push32((uint32_t)(EDX));
  /* 122e321a call 0x122da130 */
  push32(0x122e321fu); f_122da130();
  /* 122e321f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3222 push eax */
  push32((uint32_t)(EAX));
  /* 122e3223 call 0x122d9fb0 */
  push32(0x122e3228u); f_122d9fb0();
  /* 122e3228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e322b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e322e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 122e3232 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e3235 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3238 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e323b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 122e3241 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3244 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122e324a push eax */
  push32((uint32_t)(EAX));
  /* 122e324b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e324e push ecx */
  push32((uint32_t)(ECX));
  /* 122e324f call 0x122da130 */
  push32(0x122e3254u); f_122da130();
  /* 122e3254 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3257 push eax */
  push32((uint32_t)(EAX));
  /* 122e3258 call 0x122d9fb0 */
  push32(0x122e325du); f_122d9fb0();
  /* 122e325d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3260 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3263 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 122e3267 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e326a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e326d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3270 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_122e3276:;
  /* 122e3276 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3279 pop esi */
  ESI = (pop32());
  /* 122e327a mov esp, ebp */
  ESP = (EBP);
  /* 122e327c pop ebp */
  EBP = (pop32());
  /* 122e327d ret  */
  ESPCHK(0x122e2f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10013280 @ 0x122e3280 (31 bytes, 15 insns) */
void f_122e3280(void) {
  FTRACE(0x122e3280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3280 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3281 mov ebp, esp */
  EBP = (ESP);
  /* 122e3283 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e3285 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3288 push eax */
  push32((uint32_t)(EAX));
  /* 122e3289 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e328c push ecx */
  push32((uint32_t)(ECX));
  /* 122e328d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3290 push edx */
  push32((uint32_t)(EDX));
  /* 122e3291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3294 push eax */
  push32((uint32_t)(EAX));
  /* 122e3295 call 0x122e32a0 */
  push32(0x122e329au); f_122e32a0();
  /* 122e329a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e329d pop ebp */
  EBP = (pop32());
  /* 122e329e ret  */
  ESPCHK(0x122e3280u, _esp0);
  ESP += 4; return;
}

/* FUN_100132a0 @ 0x122e32a0 (394 bytes, 123 insns) */
void f_122e32a0(void) {
  FTRACE(0x122e32a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e32a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e32a1 mov ebp, esp */
  EBP = (ESP);
  /* 122e32a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e32a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e32a9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e32ac push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e32b1 call dword ptr [0x12304224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304224))), 0x122e32b7u);
  /* 122e32b7 cmp dword ptr [0x12301ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e32be je 0x122e32de */
  if (C.zf) goto L_122e32de;
  /* 122e32c0 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e32c5 call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122e32cbu);
  /* 122e32cb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e32cd call 0x122db530 */
  push32(0x122e32d2u); f_122db530();
  /* 122e32d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e32d5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 122e32dc jmp 0x122e32e5 */
  goto L_122e32e5;
L_122e32de:;
  /* 122e32de mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122e32e5:;
  /* 122e32e5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e32e9 jne 0x122e32f6 */
  if (!C.zf) goto L_122e32f6;
  /* 122e32eb mov ecx, dword ptr [0x12300ca8] */
  ECX = (r32((uint32_t)(0x12300ca8)));
  /* 122e32f1 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122e32f4 jmp 0x122e32fc */
  goto L_122e32fc;
L_122e32f6:;
  /* 122e32f6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e32f9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e32fc:;
  /* 122e32fc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e32ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e3302:;
  /* 122e3302 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3306 jbe 0x122e33f3 */
  if ((C.cf||C.zf)) goto L_122e33f3;
  /* 122e330c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e330f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e3311 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 122e3314 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e3318 je 0x122e3322 */
  if (C.zf) goto L_122e3322;
  /* 122e331a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e331e je 0x122e3327 */
  if (C.zf) goto L_122e3327;
  /* 122e3320 jmp 0x122e3381 */
  goto L_122e3381;
L_122e3322:;
  /* 122e3322 jmp 0x122e33f3 */
  goto L_122e33f3;
L_122e3327:;
  /* 122e3327 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e332a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e332d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 122e3330 mov dword ptr [0x12301ac0], 0 */
  w32((uint32_t)(0x12301ac0), (0x0u));
  /* 122e333a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e333d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e3340 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3343 jne 0x122e3358 */
  if (!C.zf) goto L_122e3358;
  /* 122e3345 mov dword ptr [0x12301ac0], 1 */
  w32((uint32_t)(0x12301ac0), (0x1u));
  /* 122e334f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3352 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3355 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_122e3358:;
  /* 122e3358 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e335b push ecx */
  push32((uint32_t)(ECX));
  /* 122e335c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 122e335f push edx */
  push32((uint32_t)(EDX));
  /* 122e3360 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 122e3363 push eax */
  push32((uint32_t)(EAX));
  /* 122e3364 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3367 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3368 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e336b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e336d push eax */
  push32((uint32_t)(EAX));
  /* 122e336e call 0x122e3430 */
  push32(0x122e3373u); f_122e3430();
  /* 122e3373 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3376 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3379 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e337c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122e337f jmp 0x122e33ee */
  goto L_122e33ee;
L_122e3381:;
  /* 122e3381 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e3386 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3388 mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e338e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e3390 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e3394 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122e339a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e339c je 0x122e33c9 */
  if (C.zf) goto L_122e33c9;
  /* 122e339e cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e33a2 jbe 0x122e33c9 */
  if ((C.cf||C.zf)) goto L_122e33c9;
  /* 122e33a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e33a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e33aa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e33ac mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122e33ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e33b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e33b4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e33b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e33ba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e33bd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122e33c0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e33c3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e33c6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122e33c9:;
  /* 122e33c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e33cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e33cf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e33d1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122e33d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e33d6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e33d9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e33dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e33df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e33e2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 122e33e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e33e8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e33eb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122e33ee:;
  /* 122e33ee jmp 0x122e3302 */
  goto L_122e3302;
L_122e33f3:;
  /* 122e33f3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e33f7 je 0x122e3405 */
  if (C.zf) goto L_122e3405;
  /* 122e33f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e33fb call 0x122db5d0 */
  push32(0x122e3400u); f_122db5d0();
  /* 122e3400 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3403 jmp 0x122e3410 */
  goto L_122e3410;
L_122e3405:;
  /* 122e3405 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e340a call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122e3410u);
L_122e3410:;
  /* 122e3410 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3414 jbe 0x122e3424 */
  if ((C.cf||C.zf)) goto L_122e3424;
  /* 122e3416 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3419 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122e341c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e341f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3422 jmp 0x122e3426 */
  goto L_122e3426;
L_122e3424:;
  /* 122e3424 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e3426:;
  /* 122e3426 mov esp, ebp */
  ESP = (EBP);
  /* 122e3428 pop ebp */
  EBP = (pop32());
  /* 122e3429 ret  */
  ESPCHK(0x122e32a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013430 @ 0x122e3430 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_122e3430(void) {
  FTRACE(0x122e3430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3430 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3431 mov ebp, esp */
  EBP = (ESP);
  /* 122e3433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3436 push esi */
  push32((uint32_t)(ESI));
  /* 122e3437 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 122e343b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e343e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3441 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3444 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e3447 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e344b ja 0x122e3998 */
  if ((!C.cf&&!C.zf)) goto L_122e3998;
  /* 122e3451 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3454 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e3456 mov dl, byte ptr [eax + 0x122e39f9] */
  DL = (r8((uint32_t)(EAX + 0x122e39f9)));
  /* 122e345c jmp dword ptr [edx*4 + 0x122e399d] */
  switch (EDX) {
    case 0: goto L_122e3976;
    case 1: goto L_122e3485;
    case 2: goto L_122e34cb;
    case 3: goto L_122e3618;
    case 4: goto L_122e3640;
    case 5: goto L_122e36df;
    case 6: goto L_122e374b;
    case 7: goto L_122e3774;
    case 8: goto L_122e37b5;
    case 9: goto L_122e3897;
    case 10: goto L_122e38fe;
    case 11: goto L_122e394b;
    case 12: goto L_122e3463;
    case 13: goto L_122e34a8;
    case 14: goto L_122e34ee;
    case 15: goto L_122e35ee;
    case 16: goto L_122e3685;
    case 17: goto L_122e36b2;
    case 18: goto L_122e3707;
    case 19: goto L_122e378b;
    case 20: goto L_122e3839;
    case 21: goto L_122e38c8;
    case 22: goto L_122e3998;
    default: x86_unimpl("switch@0x122e345c out of table"); return;
  }
L_122e3463:;
  /* 122e3463 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3466 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3467 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e346a push edx */
  push32((uint32_t)(EDX));
  /* 122e346b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e346e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122e3471 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3474 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 122e3477 push eax */
  push32((uint32_t)(EAX));
  /* 122e3478 call 0x122e3a50 */
  push32(0x122e347du); f_122e3a50();
  /* 122e347d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3480 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3485:;
  /* 122e3485 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3488 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3489 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e348c push edx */
  push32((uint32_t)(EDX));
  /* 122e348d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3490 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 122e3493 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3496 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 122e349a push eax */
  push32((uint32_t)(EAX));
  /* 122e349b call 0x122e3a50 */
  push32(0x122e34a0u); f_122e3a50();
  /* 122e34a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e34a3 jmp 0x122e3998 */
  goto L_122e3998;
L_122e34a8:;
  /* 122e34a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e34ab push ecx */
  push32((uint32_t)(ECX));
  /* 122e34ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e34af push edx */
  push32((uint32_t)(EDX));
  /* 122e34b0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e34b3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122e34b6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e34b9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 122e34bd push eax */
  push32((uint32_t)(EAX));
  /* 122e34be call 0x122e3a50 */
  push32(0x122e34c3u); f_122e3a50();
  /* 122e34c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e34c6 jmp 0x122e3998 */
  goto L_122e3998;
L_122e34cb:;
  /* 122e34cb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e34ce push ecx */
  push32((uint32_t)(ECX));
  /* 122e34cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e34d2 push edx */
  push32((uint32_t)(EDX));
  /* 122e34d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e34d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 122e34d9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e34dc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 122e34e0 push eax */
  push32((uint32_t)(EAX));
  /* 122e34e1 call 0x122e3a50 */
  push32(0x122e34e6u); f_122e3a50();
  /* 122e34e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e34e9 jmp 0x122e3998 */
  goto L_122e3998;
L_122e34ee:;
  /* 122e34ee cmp dword ptr [0x12301ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e34f5 je 0x122e3576 */
  if (C.zf) goto L_122e3576;
  /* 122e34f7 mov dword ptr [0x12301ac0], 0 */
  w32((uint32_t)(0x12301ac0), (0x0u));
  /* 122e3501 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3504 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3505 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3508 push edx */
  push32((uint32_t)(EDX));
  /* 122e3509 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e350c push eax */
  push32((uint32_t)(EAX));
  /* 122e350d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3510 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3511 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3514 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 122e351a push eax */
  push32((uint32_t)(EAX));
  /* 122e351b call 0x122e3c00 */
  push32(0x122e3520u); f_122e3c00();
  /* 122e3520 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3523 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3526 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3529 jne 0x122e3530 */
  if (!C.zf) goto L_122e3530;
  /* 122e352b jmp 0x122e3998 */
  goto L_122e3998;
L_122e3530:;
  /* 122e3530 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3533 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3535 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 122e3538 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e353b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e353d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3540 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3543 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e3545 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3548 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e354a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e354d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3550 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e3552 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3555 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3556 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3559 push edx */
  push32((uint32_t)(EDX));
  /* 122e355a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e355d push eax */
  push32((uint32_t)(EAX));
  /* 122e355e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3561 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3562 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3565 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 122e356b push eax */
  push32((uint32_t)(EAX));
  /* 122e356c call 0x122e3c00 */
  push32(0x122e3571u); f_122e3c00();
  /* 122e3571 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3574 jmp 0x122e35e9 */
  goto L_122e35e9;
L_122e3576:;
  /* 122e3576 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3579 push ecx */
  push32((uint32_t)(ECX));
  /* 122e357a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e357d push edx */
  push32((uint32_t)(EDX));
  /* 122e357e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3581 push eax */
  push32((uint32_t)(EAX));
  /* 122e3582 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3585 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3586 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3589 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 122e358f push eax */
  push32((uint32_t)(EAX));
  /* 122e3590 call 0x122e3c00 */
  push32(0x122e3595u); f_122e3c00();
  /* 122e3595 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3598 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e359b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e359e jne 0x122e35a5 */
  if (!C.zf) goto L_122e35a5;
  /* 122e35a0 jmp 0x122e3998 */
  goto L_122e3998;
L_122e35a5:;
  /* 122e35a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e35a8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e35aa mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 122e35ad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e35b0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e35b2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e35b5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e35b8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e35ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e35bd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e35bf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e35c2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e35c5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e35c7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e35ca push ecx */
  push32((uint32_t)(ECX));
  /* 122e35cb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e35ce push edx */
  push32((uint32_t)(EDX));
  /* 122e35cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e35d2 push eax */
  push32((uint32_t)(EAX));
  /* 122e35d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e35d6 push ecx */
  push32((uint32_t)(ECX));
  /* 122e35d7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e35da mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 122e35e0 push eax */
  push32((uint32_t)(EAX));
  /* 122e35e1 call 0x122e3c00 */
  push32(0x122e35e6u); f_122e3c00();
  /* 122e35e6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e35e9:;
  /* 122e35e9 jmp 0x122e3998 */
  goto L_122e3998;
L_122e35ee:;
  /* 122e35ee mov ecx, dword ptr [0x12301ac0] */
  ECX = (r32((uint32_t)(0x12301ac0)));
  /* 122e35f4 mov dword ptr [0x12301ad0], ecx */
  w32((uint32_t)(0x12301ad0), (ECX));
  /* 122e35fa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e35fd push edx */
  push32((uint32_t)(EDX));
  /* 122e35fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3601 push eax */
  push32((uint32_t)(EAX));
  /* 122e3602 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e3604 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3607 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 122e360a push edx */
  push32((uint32_t)(EDX));
  /* 122e360b call 0x122e3aa0 */
  push32(0x122e3610u); f_122e3aa0();
  /* 122e3610 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3613 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3618:;
  /* 122e3618 mov eax, dword ptr [0x12301ac0] */
  EAX = (r32((uint32_t)(0x12301ac0)));
  /* 122e361d mov dword ptr [0x12301ad0], eax */
  w32((uint32_t)(0x12301ad0), (EAX));
  /* 122e3622 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3625 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3626 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3629 push edx */
  push32((uint32_t)(EDX));
  /* 122e362a push 2 */
  push32((uint32_t)(0x2u));
  /* 122e362c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e362f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 122e3632 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3633 call 0x122e3aa0 */
  push32(0x122e3638u); f_122e3aa0();
  /* 122e3638 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e363b jmp 0x122e3998 */
  goto L_122e3998;
L_122e3640:;
  /* 122e3640 mov edx, dword ptr [0x12301ac0] */
  EDX = (r32((uint32_t)(0x12301ac0)));
  /* 122e3646 mov dword ptr [0x12301ad0], edx */
  w32((uint32_t)(0x12301ad0), (EDX));
  /* 122e364c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e364f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 122e3652 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3653 mov ecx, 0xc */
  ECX = (0xcu);
  /* 122e3658 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e365a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e365d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3661 jne 0x122e366a */
  if (!C.zf) goto L_122e366a;
  /* 122e3663 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_122e366a:;
  /* 122e366a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e366d push edx */
  push32((uint32_t)(EDX));
  /* 122e366e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3671 push eax */
  push32((uint32_t)(EAX));
  /* 122e3672 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e3674 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3677 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3678 call 0x122e3aa0 */
  push32(0x122e367du); f_122e3aa0();
  /* 122e367d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3680 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3685:;
  /* 122e3685 mov edx, dword ptr [0x12301ac0] */
  EDX = (r32((uint32_t)(0x12301ac0)));
  /* 122e368b mov dword ptr [0x12301ad0], edx */
  w32((uint32_t)(0x12301ad0), (EDX));
  /* 122e3691 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3694 push eax */
  push32((uint32_t)(EAX));
  /* 122e3695 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3698 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3699 push 3 */
  push32((uint32_t)(0x3u));
  /* 122e369b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e369e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e36a1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e36a4 push eax */
  push32((uint32_t)(EAX));
  /* 122e36a5 call 0x122e3aa0 */
  push32(0x122e36aau); f_122e3aa0();
  /* 122e36aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e36ad jmp 0x122e3998 */
  goto L_122e3998;
L_122e36b2:;
  /* 122e36b2 mov ecx, dword ptr [0x12301ac0] */
  ECX = (r32((uint32_t)(0x12301ac0)));
  /* 122e36b8 mov dword ptr [0x12301ad0], ecx */
  w32((uint32_t)(0x12301ad0), (ECX));
  /* 122e36be mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e36c1 push edx */
  push32((uint32_t)(EDX));
  /* 122e36c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e36c5 push eax */
  push32((uint32_t)(EAX));
  /* 122e36c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e36c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e36cb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 122e36ce add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e36d1 push edx */
  push32((uint32_t)(EDX));
  /* 122e36d2 call 0x122e3aa0 */
  push32(0x122e36d7u); f_122e3aa0();
  /* 122e36d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e36da jmp 0x122e3998 */
  goto L_122e3998;
L_122e36df:;
  /* 122e36df mov eax, dword ptr [0x12301ac0] */
  EAX = (r32((uint32_t)(0x12301ac0)));
  /* 122e36e4 mov dword ptr [0x12301ad0], eax */
  w32((uint32_t)(0x12301ad0), (EAX));
  /* 122e36e9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e36ec push ecx */
  push32((uint32_t)(ECX));
  /* 122e36ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e36f0 push edx */
  push32((uint32_t)(EDX));
  /* 122e36f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e36f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e36f6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 122e36f9 push ecx */
  push32((uint32_t)(ECX));
  /* 122e36fa call 0x122e3aa0 */
  push32(0x122e36ffu); f_122e3aa0();
  /* 122e36ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3702 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3707:;
  /* 122e3707 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e370a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e370e jg 0x122e372c */
  if ((!C.zf&&C.sf==C.of)) goto L_122e372c;
  /* 122e3710 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3713 push eax */
  push32((uint32_t)(EAX));
  /* 122e3714 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3717 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3718 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e371b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 122e3721 push eax */
  push32((uint32_t)(EAX));
  /* 122e3722 call 0x122e3a50 */
  push32(0x122e3727u); f_122e3a50();
  /* 122e3727 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e372a jmp 0x122e3746 */
  goto L_122e3746;
L_122e372c:;
  /* 122e372c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e372f push ecx */
  push32((uint32_t)(ECX));
  /* 122e3730 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3733 push edx */
  push32((uint32_t)(EDX));
  /* 122e3734 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3737 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 122e373d push ecx */
  push32((uint32_t)(ECX));
  /* 122e373e call 0x122e3a50 */
  push32(0x122e3743u); f_122e3a50();
  /* 122e3743 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e3746:;
  /* 122e3746 jmp 0x122e3998 */
  goto L_122e3998;
L_122e374b:;
  /* 122e374b mov edx, dword ptr [0x12301ac0] */
  EDX = (r32((uint32_t)(0x12301ac0)));
  /* 122e3751 mov dword ptr [0x12301ad0], edx */
  w32((uint32_t)(0x12301ad0), (EDX));
  /* 122e3757 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e375a push eax */
  push32((uint32_t)(EAX));
  /* 122e375b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e375e push ecx */
  push32((uint32_t)(ECX));
  /* 122e375f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e3761 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3764 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3766 push eax */
  push32((uint32_t)(EAX));
  /* 122e3767 call 0x122e3aa0 */
  push32(0x122e376cu); f_122e3aa0();
  /* 122e376c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e376f jmp 0x122e3998 */
  goto L_122e3998;
L_122e3774:;
  /* 122e3774 mov ecx, dword ptr [0x12301ac0] */
  ECX = (r32((uint32_t)(0x12301ac0)));
  /* 122e377a mov dword ptr [0x12301ad0], ecx */
  w32((uint32_t)(0x12301ad0), (ECX));
  /* 122e3780 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3783 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 122e3786 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e3789 jmp 0x122e37dd */
  goto L_122e37dd;
L_122e378b:;
  /* 122e378b mov ecx, dword ptr [0x12301ac0] */
  ECX = (r32((uint32_t)(0x12301ac0)));
  /* 122e3791 mov dword ptr [0x12301ad0], ecx */
  w32((uint32_t)(0x12301ad0), (ECX));
  /* 122e3797 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e379a push edx */
  push32((uint32_t)(EDX));
  /* 122e379b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e379e push eax */
  push32((uint32_t)(EAX));
  /* 122e379f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e37a1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e37a4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 122e37a7 push edx */
  push32((uint32_t)(EDX));
  /* 122e37a8 call 0x122e3aa0 */
  push32(0x122e37adu); f_122e3aa0();
  /* 122e37ad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e37b0 jmp 0x122e3998 */
  goto L_122e3998;
L_122e37b5:;
  /* 122e37b5 mov eax, dword ptr [0x12301ac0] */
  EAX = (r32((uint32_t)(0x12301ac0)));
  /* 122e37ba mov dword ptr [0x12301ad0], eax */
  w32((uint32_t)(0x12301ad0), (EAX));
  /* 122e37bf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e37c2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e37c6 jne 0x122e37d1 */
  if (!C.zf) goto L_122e37d1;
  /* 122e37c8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 122e37cf jmp 0x122e37dd */
  goto L_122e37dd;
L_122e37d1:;
  /* 122e37d1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e37d4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 122e37d7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e37da mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e37dd:;
  /* 122e37dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e37e0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122e37e3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e37e6 jge 0x122e37f1 */
  if ((C.sf==C.of)) goto L_122e37f1;
  /* 122e37e8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e37ef jmp 0x122e381e */
  goto L_122e381e;
L_122e37f1:;
  /* 122e37f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e37f4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e37f7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e37f8 mov ecx, 7 */
  ECX = (0x7u);
  /* 122e37fd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e37ff mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e3802 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3805 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e3808 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3809 mov ecx, 7 */
  ECX = (0x7u);
  /* 122e380e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3810 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3813 jl 0x122e381e */
  if ((C.sf!=C.of)) goto L_122e381e;
  /* 122e3815 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3818 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e381b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_122e381e:;
  /* 122e381e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3821 push eax */
  push32((uint32_t)(EAX));
  /* 122e3822 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3825 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3826 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e3828 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e382b push edx */
  push32((uint32_t)(EDX));
  /* 122e382c call 0x122e3aa0 */
  push32(0x122e3831u); f_122e3aa0();
  /* 122e3831 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3834 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3839:;
  /* 122e3839 cmp dword ptr [0x12301ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3840 je 0x122e3870 */
  if (C.zf) goto L_122e3870;
  /* 122e3842 mov dword ptr [0x12301ac0], 0 */
  w32((uint32_t)(0x12301ac0), (0x0u));
  /* 122e384c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e384f push eax */
  push32((uint32_t)(EAX));
  /* 122e3850 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3853 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3854 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3857 push edx */
  push32((uint32_t)(EDX));
  /* 122e3858 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e385b push eax */
  push32((uint32_t)(EAX));
  /* 122e385c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e385f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 122e3865 push edx */
  push32((uint32_t)(EDX));
  /* 122e3866 call 0x122e3c00 */
  push32(0x122e386bu); f_122e3c00();
  /* 122e386b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e386e jmp 0x122e3892 */
  goto L_122e3892;
L_122e3870:;
  /* 122e3870 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3873 push eax */
  push32((uint32_t)(EAX));
  /* 122e3874 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3877 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3878 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e387b push edx */
  push32((uint32_t)(EDX));
  /* 122e387c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e387f push eax */
  push32((uint32_t)(EAX));
  /* 122e3880 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3883 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 122e3889 push edx */
  push32((uint32_t)(EDX));
  /* 122e388a call 0x122e3c00 */
  push32(0x122e388fu); f_122e3c00();
  /* 122e388f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e3892:;
  /* 122e3892 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3897:;
  /* 122e3897 mov dword ptr [0x12301ac0], 0 */
  w32((uint32_t)(0x12301ac0), (0x0u));
  /* 122e38a1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e38a4 push eax */
  push32((uint32_t)(EAX));
  /* 122e38a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e38a8 push ecx */
  push32((uint32_t)(ECX));
  /* 122e38a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e38ac push edx */
  push32((uint32_t)(EDX));
  /* 122e38ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e38b0 push eax */
  push32((uint32_t)(EAX));
  /* 122e38b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e38b4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 122e38ba push edx */
  push32((uint32_t)(EDX));
  /* 122e38bb call 0x122e3c00 */
  push32(0x122e38c0u); f_122e3c00();
  /* 122e38c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e38c3 jmp 0x122e3998 */
  goto L_122e3998;
L_122e38c8:;
  /* 122e38c8 mov eax, dword ptr [0x12301ac0] */
  EAX = (r32((uint32_t)(0x12301ac0)));
  /* 122e38cd mov dword ptr [0x12301ad0], eax */
  w32((uint32_t)(0x12301ad0), (EAX));
  /* 122e38d2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e38d5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 122e38d8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e38d9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 122e38de idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e38e0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e38e3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e38e6 push edx */
  push32((uint32_t)(EDX));
  /* 122e38e7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e38ea push eax */
  push32((uint32_t)(EAX));
  /* 122e38eb push 2 */
  push32((uint32_t)(0x2u));
  /* 122e38ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e38f0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e38f1 call 0x122e3aa0 */
  push32(0x122e38f6u); f_122e3aa0();
  /* 122e38f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e38f9 jmp 0x122e3998 */
  goto L_122e3998;
L_122e38fe:;
  /* 122e38fe mov edx, dword ptr [0x12301ac0] */
  EDX = (r32((uint32_t)(0x12301ac0)));
  /* 122e3904 mov dword ptr [0x12301ad0], edx */
  w32((uint32_t)(0x12301ad0), (EDX));
  /* 122e390a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e390d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 122e3910 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3911 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 122e3916 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3918 mov ecx, eax */
  ECX = (EAX);
  /* 122e391a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e391d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e3920 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3923 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e3926 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3927 mov esi, 0x64 */
  ESI = (0x64u);
  /* 122e392c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e392e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3930 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e3933 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3936 push eax */
  push32((uint32_t)(EAX));
  /* 122e3937 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e393a push ecx */
  push32((uint32_t)(ECX));
  /* 122e393b push 4 */
  push32((uint32_t)(0x4u));
  /* 122e393d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3940 push edx */
  push32((uint32_t)(EDX));
  /* 122e3941 call 0x122e3aa0 */
  push32(0x122e3946u); f_122e3aa0();
  /* 122e3946 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3949 jmp 0x122e3998 */
  goto L_122e3998;
L_122e394b:;
  /* 122e394b call 0x122e4a60 */
  push32(0x122e3950u); f_122e4a60();
  /* 122e3950 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3953 push eax */
  push32((uint32_t)(EAX));
  /* 122e3954 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3957 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3958 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e395b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e395d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3961 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 122e3964 mov ecx, dword ptr [eax*4 + 0x12300e2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12300e2c)));
  /* 122e396b push ecx */
  push32((uint32_t)(ECX));
  /* 122e396c call 0x122e3a50 */
  push32(0x122e3971u); f_122e3a50();
  /* 122e3971 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3974 jmp 0x122e3998 */
  goto L_122e3998;
L_122e3976:;
  /* 122e3976 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3979 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e397b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 122e397e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3981 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3983 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3986 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3989 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e398b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e398e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3990 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3993 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3996 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122e3998:;
  /* 122e3998 pop esi */
  ESI = (pop32());
  /* 122e3999 mov esp, ebp */
  ESP = (EBP);
  /* 122e399b pop ebp */
  EBP = (pop32());
  /* 122e399c ret  */
  ESPCHK(0x122e3430u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x122e3a50 (72 bytes, 30 insns) */
void f_122e3a50(void) {
  FTRACE(0x122e3a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3a50 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3a51 mov ebp, esp */
  EBP = (ESP);
L_122e3a53:;
  /* 122e3a53 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3a56 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3a59 je 0x122e3a96 */
  if (C.zf) goto L_122e3a96;
  /* 122e3a5b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3a5e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e3a61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e3a63 je 0x122e3a96 */
  if (C.zf) goto L_122e3a96;
  /* 122e3a65 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3a68 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3a6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3a6d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3a6f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e3a71 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3a74 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3a76 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3a79 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3a7c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e3a7e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3a81 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3a84 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122e3a87 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3a8a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3a8c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3a8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3a92 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e3a94 jmp 0x122e3a53 */
  goto L_122e3a53;
L_122e3a96:;
  /* 122e3a96 pop ebp */
  EBP = (pop32());
  /* 122e3a97 ret  */
  ESPCHK(0x122e3a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013aa0 @ 0x122e3aa0 (173 bytes, 64 insns) */
void f_122e3aa0(void) {
  FTRACE(0x122e3aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3aa1 mov ebp, esp */
  EBP = (ESP);
  /* 122e3aa3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e3aab cmp dword ptr [0x12301ad0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3ab2 je 0x122e3aca */
  if (C.zf) goto L_122e3aca;
  /* 122e3ab4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3ab7 push eax */
  push32((uint32_t)(EAX));
  /* 122e3ab8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3abb push ecx */
  push32((uint32_t)(ECX));
  /* 122e3abc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3abf push edx */
  push32((uint32_t)(EDX));
  /* 122e3ac0 call 0x122e3b50 */
  push32(0x122e3ac5u); f_122e3b50();
  /* 122e3ac5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3ac8 jmp 0x122e3b49 */
  goto L_122e3b49;
L_122e3aca:;
  /* 122e3aca mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3acd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3ad0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3ad2 jae 0x122e3b40 */
  if (!C.cf) goto L_122e3b40;
  /* 122e3ad4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3ad7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ada mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 122e3add jmp 0x122e3ae8 */
  goto L_122e3ae8;
L_122e3adf:;
  /* 122e3adf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3ae2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ae5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_122e3ae8:;
  /* 122e3ae8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3aeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3aee test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e3af0 je 0x122e3b24 */
  if (C.zf) goto L_122e3b24;
  /* 122e3af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3af5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3af6 mov ecx, 0xa */
  ECX = (0xau);
  /* 122e3afb idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3afd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3b00 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b03 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3b05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3b08 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 122e3b0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3b0e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3b0f mov ecx, 0xa */
  ECX = (0xau);
  /* 122e3b14 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3b16 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e3b19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3b1c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3b1f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e3b22 jmp 0x122e3adf */
  goto L_122e3adf;
L_122e3b24:;
  /* 122e3b24 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3b29 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3b2c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b2f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122e3b31 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3b34 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3b36 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3b39 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3b3c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122e3b3e jmp 0x122e3b49 */
  goto L_122e3b49;
L_122e3b40:;
  /* 122e3b40 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3b43 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122e3b49:;
  /* 122e3b49 mov esp, ebp */
  ESP = (EBP);
  /* 122e3b4b pop ebp */
  EBP = (pop32());
  /* 122e3b4c ret  */
  ESPCHK(0x122e3aa0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x122e3b50 (172 bytes, 65 insns) */
void f_122e3b50(void) {
  FTRACE(0x122e3b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3b50 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3b51 mov ebp, esp */
  EBP = (ESP);
  /* 122e3b53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3b56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3b59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3b5b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e3b5e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b61 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3b64 jbe 0x122e3bab */
  if ((C.cf||C.zf)) goto L_122e3bab;
L_122e3b66:;
  /* 122e3b66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3b69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3b6a mov ecx, 0xa */
  ECX = (0xau);
  /* 122e3b6f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3b71 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3b74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3b77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122e3b79 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3b7c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3b7f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e3b82 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b85 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3b87 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3b8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3b8d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e3b8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3b92 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e3b93 mov ecx, 0xa */
  ECX = (0xau);
  /* 122e3b98 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e3b9a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e3b9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3ba1 jle 0x122e3bab */
  if ((C.zf||C.sf!=C.of)) goto L_122e3bab;
  /* 122e3ba3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3ba6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3ba9 ja 0x122e3b66 */
  if ((!C.cf&&!C.zf)) goto L_122e3b66;
L_122e3bab:;
  /* 122e3bab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3bae mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3bb0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e3bb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3bb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3bb9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122e3bbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3bbe sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3bc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122e3bc4:;
  /* 122e3bc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3bc7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3bc9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 122e3bcc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3bcf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3bd2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3bd4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e3bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3bd9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3bdc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e3bdf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3be2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 122e3be5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 122e3be7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3bea add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3bed mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e3bf0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e3bf3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3bf6 jb 0x122e3bc4 */
  if (C.cf) goto L_122e3bc4;
  /* 122e3bf8 mov esp, ebp */
  ESP = (EBP);
  /* 122e3bfa pop ebp */
  EBP = (pop32());
  /* 122e3bfb ret  */
  ESPCHK(0x122e3b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c00 @ 0x122e3c00 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_122e3c00(void) {
  FTRACE(0x122e3c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e3c00 push ebp */
  push32((uint32_t)(EBP));
  /* 122e3c01 mov ebp, esp */
  EBP = (ESP);
  /* 122e3c03 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122e3c06:;
  /* 122e3c06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3c09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e3c0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e3c0e je 0x122e407c */
  if (C.zf) goto L_122e407c;
  /* 122e3c14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3c17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3c1a je 0x122e407c */
  if (C.zf) goto L_122e407c;
  /* 122e3c20 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 122e3c24 mov dword ptr [0x12301ad0], 0 */
  w32((uint32_t)(0x12301ad0), (0x0u));
  /* 122e3c2e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122e3c35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3c38 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e3c3b jmp 0x122e3c46 */
  goto L_122e3c46;
L_122e3c3d:;
  /* 122e3c3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3c40 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3c43 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122e3c46:;
  /* 122e3c46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3c49 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e3c4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3c4f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e3c52 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3c55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3c58 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e3c5b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3c5d jne 0x122e3c61 */
  if (!C.zf) goto L_122e3c61;
  /* 122e3c5f jmp 0x122e3c3d */
  goto L_122e3c3d;
L_122e3c61:;
  /* 122e3c61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3c64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3c67 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e3c6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3c6d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e3c70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e3c73 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3c76 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3c79 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 122e3c7c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3c80 ja 0x122e3fd0 */
  if ((!C.cf&&!C.zf)) goto L_122e3fd0;
  /* 122e3c86 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e3c89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e3c8b mov al, byte ptr [ecx + 0x122e40ac] */
  AL = (r8((uint32_t)(ECX + 0x122e40ac)));
  /* 122e3c91 jmp dword ptr [eax*4 + 0x122e4080] */
  switch (EAX) {
    case 0: goto L_122e3eef;
    case 1: goto L_122e3dd3;
    case 2: goto L_122e3d5e;
    case 3: goto L_122e3c98;
    case 4: goto L_122e3cd6;
    case 5: goto L_122e3d37;
    case 6: goto L_122e3d85;
    case 7: goto L_122e3dac;
    case 8: goto L_122e3e1a;
    case 9: goto L_122e3d14;
    case 10: goto L_122e3fd0;
    default: x86_unimpl("switch@0x122e3c91 out of table"); return;
  }
L_122e3c98:;
  /* 122e3c98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3c9b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 122e3c9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3ca1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ca4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122e3ca7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3cab ja 0x122e3cd1 */
  if ((!C.cf&&!C.zf)) goto L_122e3cd1;
  /* 122e3cad mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e3cb0 jmp dword ptr [ecx*4 + 0x122e40ff] */
  switch (ECX) {
    case 0: goto L_122e3cb7;
    case 1: goto L_122e3cc1;
    case 2: goto L_122e3cc7;
    case 3: goto L_122e3ccd;
    case 4: goto L_122e3cf5;
    case 5: goto L_122e3cff;
    case 6: goto L_122e3d05;
    case 7: goto L_122e3d0b;
    default: x86_unimpl("switch@0x122e3cb0 out of table"); return;
  }
L_122e3cb7:;
  /* 122e3cb7 mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3cc1:;
  /* 122e3cc1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 122e3cc5 jmp 0x122e3cd1 */
  goto L_122e3cd1;
L_122e3cc7:;
  /* 122e3cc7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 122e3ccb jmp 0x122e3cd1 */
  goto L_122e3cd1;
L_122e3ccd:;
  /* 122e3ccd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_122e3cd1:;
  /* 122e3cd1 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3cd6:;
  /* 122e3cd6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3cd9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 122e3cdc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e3cdf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ce2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e3ce5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3ce9 ja 0x122e3d0f */
  if ((!C.cf&&!C.zf)) goto L_122e3d0f;
  /* 122e3ceb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e3cee jmp dword ptr [ecx*4 + 0x122e410f] */
  switch (ECX) {
    case 0: goto L_122e3cf5;
    case 1: goto L_122e3cff;
    case 2: goto L_122e3d05;
    case 3: goto L_122e3d0b;
    default: x86_unimpl("switch@0x122e3cee out of table"); return;
  }
L_122e3cf5:;
  /* 122e3cf5 mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3cff:;
  /* 122e3cff mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 122e3d03 jmp 0x122e3d0f */
  goto L_122e3d0f;
L_122e3d05:;
  /* 122e3d05 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 122e3d09 jmp 0x122e3d0f */
  goto L_122e3d0f;
L_122e3d0b:;
  /* 122e3d0b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_122e3d0f:;
  /* 122e3d0f jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3d14:;
  /* 122e3d14 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3d17 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 122e3d1a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d1e je 0x122e3d28 */
  if (C.zf) goto L_122e3d28;
  /* 122e3d20 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d24 je 0x122e3d2e */
  if (C.zf) goto L_122e3d2e;
  /* 122e3d26 jmp 0x122e3d32 */
  goto L_122e3d32;
L_122e3d28:;
  /* 122e3d28 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 122e3d2c jmp 0x122e3d32 */
  goto L_122e3d32;
L_122e3d2e:;
  /* 122e3d2e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_122e3d32:;
  /* 122e3d32 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3d37:;
  /* 122e3d37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3d3a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122e3d3d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d41 je 0x122e3d4b */
  if (C.zf) goto L_122e3d4b;
  /* 122e3d43 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d47 je 0x122e3d55 */
  if (C.zf) goto L_122e3d55;
  /* 122e3d49 jmp 0x122e3d59 */
  goto L_122e3d59;
L_122e3d4b:;
  /* 122e3d4b mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3d55:;
  /* 122e3d55 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_122e3d59:;
  /* 122e3d59 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3d5e:;
  /* 122e3d5e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3d61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122e3d64 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d68 je 0x122e3d72 */
  if (C.zf) goto L_122e3d72;
  /* 122e3d6a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d6e je 0x122e3d7c */
  if (C.zf) goto L_122e3d7c;
  /* 122e3d70 jmp 0x122e3d80 */
  goto L_122e3d80;
L_122e3d72:;
  /* 122e3d72 mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3d7c:;
  /* 122e3d7c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_122e3d80:;
  /* 122e3d80 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3d85:;
  /* 122e3d85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3d88 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 122e3d8b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d8f je 0x122e3d99 */
  if (C.zf) goto L_122e3d99;
  /* 122e3d91 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3d95 je 0x122e3da3 */
  if (C.zf) goto L_122e3da3;
  /* 122e3d97 jmp 0x122e3da7 */
  goto L_122e3da7;
L_122e3d99:;
  /* 122e3d99 mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3da3:;
  /* 122e3da3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_122e3da7:;
  /* 122e3da7 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3dac:;
  /* 122e3dac mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3daf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 122e3db2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3db6 je 0x122e3dc0 */
  if (C.zf) goto L_122e3dc0;
  /* 122e3db8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3dbc je 0x122e3dca */
  if (C.zf) goto L_122e3dca;
  /* 122e3dbe jmp 0x122e3dce */
  goto L_122e3dce;
L_122e3dc0:;
  /* 122e3dc0 mov dword ptr [0x12301ad0], 1 */
  w32((uint32_t)(0x12301ad0), (0x1u));
L_122e3dca:;
  /* 122e3dca mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_122e3dce:;
  /* 122e3dce jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3dd3:;
  /* 122e3dd3 push 0x122fe248 */
  push32((uint32_t)(0x122fe248u));
  /* 122e3dd8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3ddb push ecx */
  push32((uint32_t)(ECX));
  /* 122e3ddc call 0x122e4630 */
  push32(0x122e3de1u); f_122e4630();
  /* 122e3de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3de4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e3de6 jne 0x122e3df3 */
  if (!C.zf) goto L_122e3df3;
  /* 122e3de8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3deb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3dee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e3df1 jmp 0x122e3e11 */
  goto L_122e3e11;
L_122e3df3:;
  /* 122e3df3 push 0x122fe244 */
  push32((uint32_t)(0x122fe244u));
  /* 122e3df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3dfb push eax */
  push32((uint32_t)(EAX));
  /* 122e3dfc call 0x122e4630 */
  push32(0x122e3e01u); f_122e4630();
  /* 122e3e01 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3e04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e3e06 jne 0x122e3e11 */
  if (!C.zf) goto L_122e3e11;
  /* 122e3e08 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3e0b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3e0e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122e3e11:;
  /* 122e3e11 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 122e3e15 jmp 0x122e3fd0 */
  goto L_122e3fd0;
L_122e3e1a:;
  /* 122e3e1a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3e1d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3e21 jg 0x122e3e31 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e3e31;
  /* 122e3e23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3e26 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 122e3e2c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122e3e2f jmp 0x122e3e3d */
  goto L_122e3e3d;
L_122e3e31:;
  /* 122e3e31 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3e34 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 122e3e3a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_122e3e3d:;
  /* 122e3e3d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3e41 jle 0x122e3ee4 */
  if ((C.zf||C.sf!=C.of)) goto L_122e3ee4;
  /* 122e3e47 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3e4a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3e4d jbe 0x122e3ee4 */
  if ((C.cf||C.zf)) goto L_122e3ee4;
  /* 122e3e53 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3e56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e3e58 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3e5a mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e3e60 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e3e62 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e3e66 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122e3e6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e3e6e je 0x122e3ea7 */
  if (C.zf) goto L_122e3ea7;
  /* 122e3e70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3e73 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3e76 jbe 0x122e3ea7 */
  if ((C.cf||C.zf)) goto L_122e3ea7;
  /* 122e3e78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3e7b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3e7d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3e80 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e3e82 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122e3e84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3e87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3e89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3e8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3e8f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e3e91 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3e94 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3e97 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 122e3e9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3e9d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3e9f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ea2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3ea5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_122e3ea7:;
  /* 122e3ea7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3eaa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3eac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3eaf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e3eb1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e3eb3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3eb6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3eb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3ebb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3ebe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e3ec0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e3ec3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3ec6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122e3ec9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3ecc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3ece sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3ed1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3ed4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e3ed6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3ed9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3edc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122e3edf jmp 0x122e3e3d */
  goto L_122e3e3d;
L_122e3ee4:;
  /* 122e3ee4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3ee7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e3eea jmp 0x122e3c06 */
  goto L_122e3c06;
L_122e3eef:;
  /* 122e3eef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e3ef2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122e3ef5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e3ef7 je 0x122e3fc2 */
  if (C.zf) goto L_122e3fc2;
  /* 122e3efd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f00 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3f03 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122e3f06:;
  /* 122e3f06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f09 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e3f0c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e3f0e je 0x122e3fc0 */
  if (C.zf) goto L_122e3fc0;
  /* 122e3f14 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3f17 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3f1a je 0x122e3fc0 */
  if (C.zf) goto L_122e3fc0;
  /* 122e3f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f23 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e3f26 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3f29 jne 0x122e3f39 */
  if (!C.zf) goto L_122e3f39;
  /* 122e3f2b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f2e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3f31 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122e3f34 jmp 0x122e3fc0 */
  goto L_122e3fc0;
L_122e3f39:;
  /* 122e3f39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e3f3e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e3f40 mov edx, dword ptr [0x122ffde8] */
  EDX = (r32((uint32_t)(0x122ffde8)));
  /* 122e3f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e3f48 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 122e3f4c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 122e3f51 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e3f53 je 0x122e3f8c */
  if (C.zf) goto L_122e3f8c;
  /* 122e3f55 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3f58 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e3f5b jbe 0x122e3f8c */
  if ((C.cf||C.zf)) goto L_122e3f8c;
  /* 122e3f5d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3f60 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3f62 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f65 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e3f67 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122e3f69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3f6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3f6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3f71 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3f74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122e3f76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f79 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3f7c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e3f7f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3f82 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3f84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3f87 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3f8a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122e3f8c:;
  /* 122e3f8c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3f8f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e3f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3f94 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e3f96 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 122e3f98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3f9b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e3f9d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3fa0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3fa3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e3fa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3fa8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3fab mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122e3fae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3fb1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e3fb3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e3fb6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3fb9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122e3fbb jmp 0x122e3f06 */
  goto L_122e3f06;
L_122e3fc0:;
  /* 122e3fc0 jmp 0x122e3fcb */
  goto L_122e3fcb;
L_122e3fc2:;
  /* 122e3fc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3fc5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3fc8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122e3fcb:;
  /* 122e3fcb jmp 0x122e3c06 */
  goto L_122e3c06;
L_122e3fd0:;
  /* 122e3fd0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 122e3fd4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e3fd6 je 0x122e3ffc */
  if (C.zf) goto L_122e3ffc;
  /* 122e3fd8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e3fdb push edx */
  push32((uint32_t)(EDX));
  /* 122e3fdc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e3fdf push eax */
  push32((uint32_t)(EAX));
  /* 122e3fe0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e3fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e3fe4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e3fe7 push edx */
  push32((uint32_t)(EDX));
  /* 122e3fe8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 122e3feb push eax */
  push32((uint32_t)(EAX));
  /* 122e3fec call 0x122e3430 */
  push32(0x122e3ff1u); f_122e3430();
  /* 122e3ff1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e3ff4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e3ff7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122e3ffa jmp 0x122e4077 */
  goto L_122e4077;
L_122e3ffc:;
  /* 122e3ffc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e3fff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4001 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e4003 mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e4009 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e400b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e400f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 122e4015 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e4017 je 0x122e4048 */
  if (C.zf) goto L_122e4048;
  /* 122e4019 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e401c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e401e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4021 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e4023 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e4025 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4028 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e402a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e402d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4030 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 122e4032 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4035 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4038 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122e403b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e403e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e4040 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4043 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e4046 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_122e4048:;
  /* 122e4048 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e404b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e404d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4050 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e4052 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 122e4054 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4057 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e4059 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e405c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e405f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 122e4061 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4064 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4067 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e406a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e406d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e406f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4072 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e4075 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_122e4077:;
  /* 122e4077 jmp 0x122e3c06 */
  goto L_122e3c06;
L_122e407c:;
  /* 122e407c mov esp, ebp */
  ESP = (EBP);
  /* 122e407e pop ebp */
  EBP = (pop32());
  /* 122e407f ret  */
  ESPCHK(0x122e3c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10014120 @ 0x122e4120 (650 bytes, 178 insns) */
void f_122e4120(void) {
  FTRACE(0x122e4120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4120 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4121 mov ebp, esp */
  EBP = (ESP);
  /* 122e4123 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4129 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e412d jne 0x122e4289 */
  if (!C.zf) goto L_122e4289;
  /* 122e4133 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e4136 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 122e413c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 122e4142 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4145 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e414c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 122e4156 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4158 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 122e415e push edx */
  push32((uint32_t)(EDX));
  /* 122e415f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4162 push eax */
  push32((uint32_t)(EAX));
  /* 122e4163 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4166 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4167 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e416a push edx */
  push32((uint32_t)(EDX));
  /* 122e416b call 0x122e5540 */
  push32(0x122e4170u); f_122e5540();
  /* 122e4170 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4173 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e4176 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e417a jne 0x122e420f */
  if (!C.zf) goto L_122e420f;
  /* 122e4180 call dword ptr [0x12304250] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304250))), 0x122e4186u);
  /* 122e4186 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4189 je 0x122e4190 */
  if (C.zf) goto L_122e4190;
  /* 122e418b jmp 0x122e426d */
  goto L_122e426d;
L_122e4190:;
  /* 122e4190 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4192 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4194 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4196 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4199 push eax */
  push32((uint32_t)(EAX));
  /* 122e419a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e419d push ecx */
  push32((uint32_t)(ECX));
  /* 122e419e call 0x122e5540 */
  push32(0x122e41a3u); f_122e5540();
  /* 122e41a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e41a6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 122e41ac cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e41b3 jne 0x122e41ba */
  if (!C.zf) goto L_122e41ba;
  /* 122e41b5 jmp 0x122e426d */
  goto L_122e426d;
L_122e41ba:;
  /* 122e41ba push 0x58 */
  push32((uint32_t)(0x58u));
  /* 122e41bc push 0x122fe250 */
  push32((uint32_t)(0x122fe250u));
  /* 122e41c1 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e41c3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 122e41c9 push edx */
  push32((uint32_t)(EDX));
  /* 122e41ca call 0x122d7180 */
  push32(0x122e41cfu); f_122d7180();
  /* 122e41cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e41d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e41d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e41d9 jne 0x122e41e0 */
  if (!C.zf) goto L_122e41e0;
  /* 122e41db jmp 0x122e426d */
  goto L_122e426d;
L_122e41e0:;
  /* 122e41e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122e41e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e41e9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 122e41ef push eax */
  push32((uint32_t)(EAX));
  /* 122e41f0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e41f3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e41f4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e41f7 push edx */
  push32((uint32_t)(EDX));
  /* 122e41f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e41fb push eax */
  push32((uint32_t)(EAX));
  /* 122e41fc call 0x122e5540 */
  push32(0x122e4201u); f_122e5540();
  /* 122e4201 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4204 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e4207 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e420b jne 0x122e420f */
  if (!C.zf) goto L_122e420f;
  /* 122e420d jmp 0x122e426d */
  goto L_122e426d;
L_122e420f:;
  /* 122e420f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 122e4211 push 0x122fe250 */
  push32((uint32_t)(0x122fe250u));
  /* 122e4216 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e4218 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e421b push ecx */
  push32((uint32_t)(ECX));
  /* 122e421c call 0x122d7180 */
  push32(0x122e4221u); f_122d7180();
  /* 122e4221 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4224 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 122e422a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 122e422c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122e4232 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4235 jne 0x122e4239 */
  if (!C.zf) goto L_122e4239;
  /* 122e4237 jmp 0x122e426d */
  goto L_122e426d;
L_122e4239:;
  /* 122e4239 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e423c push ecx */
  push32((uint32_t)(ECX));
  /* 122e423d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4240 push edx */
  push32((uint32_t)(EDX));
  /* 122e4241 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 122e4247 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e4249 push ecx */
  push32((uint32_t)(ECX));
  /* 122e424a call 0x122da9a0 */
  push32(0x122e424fu); f_122da9a0();
  /* 122e424f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4252 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4256 je 0x122e4266 */
  if (C.zf) goto L_122e4266;
  /* 122e4258 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e425a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e425d push edx */
  push32((uint32_t)(EDX));
  /* 122e425e call 0x122d7c10 */
  push32(0x122e4263u); f_122d7c10();
  /* 122e4263 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e4266:;
  /* 122e4266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4268 jmp 0x122e43a6 */
  goto L_122e43a6;
L_122e426d:;
  /* 122e426d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4271 je 0x122e4281 */
  if (C.zf) goto L_122e4281;
  /* 122e4273 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e4275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4278 push eax */
  push32((uint32_t)(EAX));
  /* 122e4279 call 0x122d7c10 */
  push32(0x122e427eu); f_122d7c10();
  /* 122e427e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e4281:;
  /* 122e4281 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e4284 jmp 0x122e43a6 */
  goto L_122e43a6;
L_122e4289:;
  /* 122e4289 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e428d jne 0x122e43a3 */
  if (!C.zf) goto L_122e43a3;
  /* 122e4293 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 122e429d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e42a0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 122e42a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e42a8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 122e42ae push edx */
  push32((uint32_t)(EDX));
  /* 122e42af push 0x123019e4 */
  push32((uint32_t)(0x123019e4u));
  /* 122e42b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e42b7 push eax */
  push32((uint32_t)(EAX));
  /* 122e42b8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e42bb push ecx */
  push32((uint32_t)(ECX));
  /* 122e42bc call 0x122e53a0 */
  push32(0x122e42c1u); f_122e53a0();
  /* 122e42c1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e42c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e42c6 jne 0x122e42d0 */
  if (!C.zf) goto L_122e42d0;
  /* 122e42c8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e42cb jmp 0x122e43a6 */
  goto L_122e43a6;
L_122e42d0:;
  /* 122e42d0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122e42d6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 122e42d9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 122e42e3 jmp 0x122e42f4 */
  goto L_122e42f4;
L_122e42e5:;
  /* 122e42e5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122e42eb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e42ee mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_122e42f4:;
  /* 122e42f4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e42fb jge 0x122e439f */
  if ((C.sf==C.of)) goto L_122e439f;
  /* 122e4301 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4308 jle 0x122e433b */
  if ((C.zf||C.sf!=C.of)) goto L_122e433b;
  /* 122e430a push 4 */
  push32((uint32_t)(0x4u));
  /* 122e430c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122e4312 mov dl, byte ptr [ecx*2 + 0x123019e4] */
  DL = (r8((uint32_t)(ECX*2 + 0x123019e4)));
  /* 122e4319 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122e431f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122e4325 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e432a push eax */
  push32((uint32_t)(EAX));
  /* 122e432b call 0x122dda40 */
  push32(0x122e4330u); f_122dda40();
  /* 122e4330 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4333 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 122e4339 jmp 0x122e436e */
  goto L_122e436e;
L_122e433b:;
  /* 122e433b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 122e4341 mov dl, byte ptr [ecx*2 + 0x123019e4] */
  DL = (r8((uint32_t)(ECX*2 + 0x123019e4)));
  /* 122e4348 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 122e434e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 122e4354 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e4359 mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e435f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4361 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e4365 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122e4368 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_122e436e:;
  /* 122e436e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4375 je 0x122e4398 */
  if (C.zf) goto L_122e4398;
  /* 122e4377 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122e437d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e4380 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4383 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 122e438a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 122e438e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 122e4394 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 122e4396 jmp 0x122e439a */
  goto L_122e439a;
L_122e4398:;
  /* 122e4398 jmp 0x122e439f */
  goto L_122e439f;
L_122e439a:;
  /* 122e439a jmp 0x122e42e5 */
  goto L_122e42e5;
L_122e439f:;
  /* 122e439f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e43a1 jmp 0x122e43a6 */
  goto L_122e43a6;
L_122e43a3:;
  /* 122e43a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_122e43a6:;
  /* 122e43a6 mov esp, ebp */
  ESP = (EBP);
  /* 122e43a8 pop ebp */
  EBP = (pop32());
  /* 122e43a9 ret  */
  ESPCHK(0x122e4120u, _esp0);
  ESP += 4; return;
}

/* FUN_100143b0 @ 0x122e43b0 (10 bytes, 5 insns) */
void f_122e43b0(void) {
  FTRACE(0x122e43b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e43b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e43b1 mov ebp, esp */
  EBP = (ESP);
  /* 122e43b3 mov eax, dword ptr [0x12300d98] */
  EAX = (r32((uint32_t)(0x12300d98)));
  /* 122e43b8 pop ebp */
  EBP = (pop32());
  /* 122e43b9 ret  */
  ESPCHK(0x122e43b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100143c0 @ 0x122e43c0 (575 bytes, 196 insns) */
void f_122e43c0(void) {
  FTRACE(0x122e43c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e43c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e43c1 mov ebp, esp */
  EBP = (ESP);
  /* 122e43c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e43c5 push 0x122fe260 */
  push32((uint32_t)(0x122fe260u));
  /* 122e43ca push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122e43cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122e43d5 push eax */
  push32((uint32_t)(EAX));
  /* 122e43d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122e43dd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e43e0 push ebx */
  push32((uint32_t)(EBX));
  /* 122e43e1 push esi */
  push32((uint32_t)(ESI));
  /* 122e43e2 push edi */
  push32((uint32_t)(EDI));
  /* 122e43e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e43e6 cmp dword ptr [0x123019f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e43ed jne 0x122e443e */
  if (!C.zf) goto L_122e443e;
  /* 122e43ef lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 122e43f2 push eax */
  push32((uint32_t)(EAX));
  /* 122e43f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e43f5 push 0x122fda10 */
  push32((uint32_t)(0x122fda10u));
  /* 122e43fa push 1 */
  push32((uint32_t)(0x1u));
  /* 122e43fc call dword ptr [0x123042dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042dc))), 0x122e4402u);
  /* 122e4402 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4404 je 0x122e4412 */
  if (C.zf) goto L_122e4412;
  /* 122e4406 mov dword ptr [0x123019f0], 1 */
  w32((uint32_t)(0x123019f0), (0x1u));
  /* 122e4410 jmp 0x122e443e */
  goto L_122e443e;
L_122e4412:;
  /* 122e4412 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 122e4415 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4416 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e4418 push 0x122fda0c */
  push32((uint32_t)(0x122fda0cu));
  /* 122e441d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e441f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4421 call dword ptr [0x12304290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304290))), 0x122e4427u);
  /* 122e4427 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4429 je 0x122e4437 */
  if (C.zf) goto L_122e4437;
  /* 122e442b mov dword ptr [0x123019f0], 2 */
  w32((uint32_t)(0x123019f0), (0x2u));
  /* 122e4435 jmp 0x122e443e */
  goto L_122e443e;
L_122e4437:;
  /* 122e4437 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4439 jmp 0x122e4619 */
  goto L_122e4619;
L_122e443e:;
  /* 122e443e cmp dword ptr [0x123019f0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x123019f0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4445 jne 0x122e4462 */
  if (!C.zf) goto L_122e4462;
  /* 122e4447 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e444a push edx */
  push32((uint32_t)(EDX));
  /* 122e444b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e444e push eax */
  push32((uint32_t)(EAX));
  /* 122e444f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e4452 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4453 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4456 push edx */
  push32((uint32_t)(EDX));
  /* 122e4457 call dword ptr [0x123042dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042dc))), 0x122e445du);
  /* 122e445d jmp 0x122e4619 */
  goto L_122e4619;
L_122e4462:;
  /* 122e4462 cmp dword ptr [0x123019f0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x123019f0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4469 jne 0x122e4617 */
  if (!C.zf) goto L_122e4617;
  /* 122e446f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4473 jne 0x122e447d */
  if (!C.zf) goto L_122e447d;
  /* 122e4475 mov eax, dword ptr [0x12301970] */
  EAX = (r32((uint32_t)(0x12301970)));
  /* 122e447a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_122e447d:;
  /* 122e447d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e447f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4481 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4483 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4485 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4488 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4489 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e448c push edx */
  push32((uint32_t)(EDX));
  /* 122e448d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e4492 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e4495 push eax */
  push32((uint32_t)(EAX));
  /* 122e4496 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e449cu);
  /* 122e449c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 122e449f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e44a3 jne 0x122e44ac */
  if (!C.zf) goto L_122e44ac;
  /* 122e44a5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e44a7 jmp 0x122e4619 */
  goto L_122e4619;
L_122e44ac:;
  /* 122e44ac mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e44b3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e44b6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e44b9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e44bb call 0x122da320 */
  push32(0x122e44c0u); f_122da320();
  /* 122e44c0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 122e44c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e44c6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 122e44c9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 122e44cc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e44cf push edx */
  push32((uint32_t)(EDX));
  /* 122e44d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e44d2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e44d5 push eax */
  push32((uint32_t)(EAX));
  /* 122e44d6 call 0x122db8a0 */
  push32(0x122e44dbu); f_122db8a0();
  /* 122e44db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e44de mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e44e5 jmp 0x122e44fe */
  goto L_122e44fe;
  /* 122e44e7 mov eax, 1 */
  EAX = (0x1u);
  /* 122e44ec ret  */
  ESPCHK(0x122e43c0u, _esp0);
  ESP += 4; return;
  /* 122e44ed mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e44f0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 122e44f7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e44fe:;
  /* 122e44fe cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4502 jne 0x122e450b */
  if (!C.zf) goto L_122e450b;
  /* 122e4504 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4506 jmp 0x122e4619 */
  goto L_122e4619;
L_122e450b:;
  /* 122e450b push 0 */
  push32((uint32_t)(0x0u));
  /* 122e450d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e450f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e4512 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4513 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e4516 push edx */
  push32((uint32_t)(EDX));
  /* 122e4517 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e451a push eax */
  push32((uint32_t)(EAX));
  /* 122e451b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e451e push ecx */
  push32((uint32_t)(ECX));
  /* 122e451f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e4524 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e4527 push edx */
  push32((uint32_t)(EDX));
  /* 122e4528 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e452eu);
  /* 122e452e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4530 jne 0x122e4539 */
  if (!C.zf) goto L_122e4539;
  /* 122e4532 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4534 jmp 0x122e4619 */
  goto L_122e4619;
L_122e4539:;
  /* 122e4539 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122e4540 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e4543 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 122e4547 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e454a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e454c call 0x122da320 */
  push32(0x122e4551u); f_122da320();
  /* 122e4551 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 122e4554 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e4557 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 122e455a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122e455d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e4564 jmp 0x122e457d */
  goto L_122e457d;
  /* 122e4566 mov eax, 1 */
  EAX = (0x1u);
  /* 122e456b ret  */
  ESPCHK(0x122e43c0u, _esp0);
  ESP += 4; return;
  /* 122e456c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e456f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122e4576 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e457d:;
  /* 122e457d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4581 jne 0x122e458a */
  if (!C.zf) goto L_122e458a;
  /* 122e4583 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4585 jmp 0x122e4619 */
  goto L_122e4619;
L_122e458a:;
  /* 122e458a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e458e jne 0x122e4599 */
  if (!C.zf) goto L_122e4599;
  /* 122e4590 mov edx, dword ptr [0x12301960] */
  EDX = (r32((uint32_t)(0x12301960)));
  /* 122e4596 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_122e4599:;
  /* 122e4599 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e459c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e459f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 122e45a5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e45a8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e45ab mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 122e45b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e45b5 push ecx */
  push32((uint32_t)(ECX));
  /* 122e45b6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e45b9 push edx */
  push32((uint32_t)(EDX));
  /* 122e45ba mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 122e45bd push eax */
  push32((uint32_t)(EAX));
  /* 122e45be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e45c1 push ecx */
  push32((uint32_t)(ECX));
  /* 122e45c2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e45c5 push edx */
  push32((uint32_t)(EDX));
  /* 122e45c6 call dword ptr [0x12304290] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304290))), 0x122e45ccu);
  /* 122e45cc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122e45cf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e45d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e45d5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e45d7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 122e45dc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e45e2 je 0x122e45f8 */
  if (C.zf) goto L_122e45f8;
  /* 122e45e4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e45e7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e45ea xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e45ec mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e45f0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e45f6 je 0x122e45fc */
  if (C.zf) goto L_122e45fc;
L_122e45f8:;
  /* 122e45f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e45fa jmp 0x122e4619 */
  goto L_122e4619;
L_122e45fc:;
  /* 122e45fc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e45ff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e4601 push eax */
  push32((uint32_t)(EAX));
  /* 122e4602 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e4605 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4606 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e4609 push edx */
  push32((uint32_t)(EDX));
  /* 122e460a call 0x122dfad0 */
  push32(0x122e460fu); f_122dfad0();
  /* 122e460f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4612 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e4615 jmp 0x122e4619 */
  goto L_122e4619;
L_122e4617:;
  /* 122e4617 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e4619:;
  /* 122e4619 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 122e461c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e461f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122e4626 pop edi */
  EDI = (pop32());
  /* 122e4627 pop esi */
  ESI = (pop32());
  /* 122e4628 pop ebx */
  EBX = (pop32());
  /* 122e4629 mov esp, ebp */
  ESP = (EBP);
  /* 122e462b pop ebp */
  EBP = (pop32());
  /* 122e462c ret  */
  ESPCHK(0x122e43c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014630 @ 0x122e4630 (208 bytes, 85 insns) */
void f_122e4630(void) {
  FTRACE(0x122e4630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4630 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4631 mov ebp, esp */
  EBP = (ESP);
  /* 122e4633 push edi */
  push32((uint32_t)(EDI));
  /* 122e4634 push esi */
  push32((uint32_t)(ESI));
  /* 122e4635 push ebx */
  push32((uint32_t)(EBX));
  /* 122e4636 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 122e4639 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 122e463c lea eax, [0x12301958] */
  EAX = ((uint32_t)(0x12301958));
  /* 122e4642 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4646 jne 0x122e4683 */
  if (!C.zf) goto L_122e4683;
  /* 122e4648 mov al, 0xff */
  AL = (0xffu);
  /* 122e464a mov edi, edi */
  EDI = (EDI);
L_122e464c:;
  /* 122e464c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e464e je 0x122e467e */
  if (C.zf) goto L_122e467e;
  /* 122e4650 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122e4652 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e4653 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 122e4655 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122e4656 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4658 je 0x122e464c */
  if (C.zf) goto L_122e464c;
  /* 122e465a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122e465c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e465e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122e4660 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122e4663 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e4665 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e4667 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 122e4669 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122e466b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e466d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122e466f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 122e4672 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e4674 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 122e4676 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4678 je 0x122e464c */
  if (C.zf) goto L_122e464c;
  /* 122e467a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 122e467c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_122e467e:;
  /* 122e467e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 122e4681 jmp 0x122e46fb */
  goto L_122e46fb;
L_122e4683:;
  /* 122e4683 lock inc dword ptr [0x12301ae4] */
  x86_unimpl("lock inc @ 0x122e4683");
  /* 122e468a cmp dword ptr [0x12301ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4691 jg 0x122e4697 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e4697;
  /* 122e4693 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4695 jmp 0x122e46ac */
  goto L_122e46ac;
L_122e4697:;
  /* 122e4697 lock dec dword ptr [0x12301ae4] */
  x86_unimpl("lock dec @ 0x122e4697");
  /* 122e469e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e46a0 call 0x122db530 */
  push32(0x122e46a5u); f_122db530();
  /* 122e46a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_122e46ac:;
  /* 122e46ac mov eax, 0xff */
  EAX = (0xffu);
  /* 122e46b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122e46b3 nop  */
  /* nop */
L_122e46b4:;
  /* 122e46b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e46b6 je 0x122e46df */
  if (C.zf) goto L_122e46df;
  /* 122e46b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122e46ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e46bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 122e46bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122e46be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e46c0 je 0x122e46b4 */
  if (C.zf) goto L_122e46b4;
  /* 122e46c2 push eax */
  push32((uint32_t)(EAX));
  /* 122e46c3 push ebx */
  push32((uint32_t)(EBX));
  /* 122e46c4 call 0x122e57a0 */
  push32(0x122e46c9u); f_122e57a0();
  /* 122e46c9 mov ebx, eax */
  EBX = (EAX);
  /* 122e46cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e46ce call 0x122e57a0 */
  push32(0x122e46d3u); f_122e57a0();
  /* 122e46d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e46d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e46d8 je 0x122e46b4 */
  if (C.zf) goto L_122e46b4;
  /* 122e46da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e46dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122e46df:;
  /* 122e46df mov ebx, eax */
  EBX = (EAX);
  /* 122e46e1 pop eax */
  EAX = (pop32());
  /* 122e46e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e46e4 jne 0x122e46ef */
  if (!C.zf) goto L_122e46ef;
  /* 122e46e6 lock dec dword ptr [0x12301ae4] */
  x86_unimpl("lock dec @ 0x122e46e6");
  /* 122e46ed jmp 0x122e46f9 */
  goto L_122e46f9;
L_122e46ef:;
  /* 122e46ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e46f1 call 0x122db5d0 */
  push32(0x122e46f6u); f_122db5d0();
  /* 122e46f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e46f9:;
  /* 122e46f9 mov eax, ebx */
  EAX = (EBX);
L_122e46fb:;
  /* 122e46fb pop ebx */
  EBX = (pop32());
  /* 122e46fc pop esi */
  ESI = (pop32());
  /* 122e46fd pop edi */
  EDI = (pop32());
  /* 122e46fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122e46ff ret  */
  ESPCHK(0x122e4630u, _esp0);
  ESP += 4; return;
}

/* FUN_10014700 @ 0x122e4700 (257 bytes, 103 insns) */
void f_122e4700(void) {
  FTRACE(0x122e4700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4700 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4701 mov ebp, esp */
  EBP = (ESP);
  /* 122e4703 push edi */
  push32((uint32_t)(EDI));
  /* 122e4704 push esi */
  push32((uint32_t)(ESI));
  /* 122e4705 push ebx */
  push32((uint32_t)(EBX));
  /* 122e4706 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e4709 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e470b je 0x122e47fa */
  if (C.zf) goto L_122e47fa;
  /* 122e4711 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4714 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 122e4717 lea eax, [0x12301958] */
  EAX = ((uint32_t)(0x12301958));
  /* 122e471d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4721 jne 0x122e4771 */
  if (!C.zf) goto L_122e4771;
  /* 122e4723 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 122e4725 mov bl, 0x5a */
  BL = (0x5au);
  /* 122e4727 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 122e4729 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_122e472c:;
  /* 122e472c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 122e472e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 122e4730 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 122e4732 je 0x122e4755 */
  if (C.zf) goto L_122e4755;
  /* 122e4734 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 122e4736 je 0x122e4755 */
  if (C.zf) goto L_122e4755;
  /* 122e4738 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e4739 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122e473a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e473c jb 0x122e4744 */
  if (C.cf) goto L_122e4744;
  /* 122e473e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4740 ja 0x122e4744 */
  if ((!C.cf&&!C.zf)) goto L_122e4744;
  /* 122e4742 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_122e4744:;
  /* 122e4744 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4746 jb 0x122e474e */
  if (C.cf) goto L_122e474e;
  /* 122e4748 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e474a ja 0x122e474e */
  if ((!C.cf&&!C.zf)) goto L_122e474e;
  /* 122e474c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_122e474e:;
  /* 122e474e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4750 jne 0x122e475f */
  if (!C.zf) goto L_122e475f;
  /* 122e4752 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122e4753 jne 0x122e472c */
  if (!C.zf) goto L_122e472c;
L_122e4755:;
  /* 122e4755 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4757 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e4759 je 0x122e47fa */
  if (C.zf) goto L_122e47fa;
L_122e475f:;
  /* 122e475f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 122e4764 jb 0x122e47fa */
  if (C.cf) goto L_122e47fa;
  /* 122e476a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e476c jmp 0x122e47fa */
  goto L_122e47fa;
L_122e4771:;
  /* 122e4771 lock inc dword ptr [0x12301ae4] */
  x86_unimpl("lock inc @ 0x122e4771");
  /* 122e4778 cmp dword ptr [0x12301ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e477f jg 0x122e4785 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e4785;
  /* 122e4781 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4783 jmp 0x122e479e */
  goto L_122e479e;
L_122e4785:;
  /* 122e4785 lock dec dword ptr [0x12301ae4] */
  x86_unimpl("lock dec @ 0x122e4785");
  /* 122e478c mov ebx, ecx */
  EBX = (ECX);
  /* 122e478e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e4790 call 0x122db530 */
  push32(0x122e4795u); f_122db530();
  /* 122e4795 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 122e479c mov ecx, ebx */
  ECX = (EBX);
L_122e479e:;
  /* 122e479e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e47a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122e47a2 mov edi, edi */
  EDI = (EDI);
L_122e47a4:;
  /* 122e47a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 122e47a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e47a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 122e47aa je 0x122e47cf */
  if (C.zf) goto L_122e47cf;
  /* 122e47ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 122e47ae je 0x122e47cf */
  if (C.zf) goto L_122e47cf;
  /* 122e47b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 122e47b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 122e47b2 push ecx */
  push32((uint32_t)(ECX));
  /* 122e47b3 push eax */
  push32((uint32_t)(EAX));
  /* 122e47b4 push ebx */
  push32((uint32_t)(EBX));
  /* 122e47b5 call 0x122e57a0 */
  push32(0x122e47bau); f_122e57a0();
  /* 122e47ba mov ebx, eax */
  EBX = (EAX);
  /* 122e47bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e47bf call 0x122e57a0 */
  push32(0x122e47c4u); f_122e57a0();
  /* 122e47c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e47c7 pop ecx */
  ECX = (pop32());
  /* 122e47c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e47ca jne 0x122e47d5 */
  if (!C.zf) goto L_122e47d5;
  /* 122e47cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 122e47cd jne 0x122e47a4 */
  if (!C.zf) goto L_122e47a4;
L_122e47cf:;
  /* 122e47cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e47d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e47d3 je 0x122e47de */
  if (C.zf) goto L_122e47de;
L_122e47d5:;
  /* 122e47d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 122e47da jb 0x122e47de */
  if (C.cf) goto L_122e47de;
  /* 122e47dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_122e47de:;
  /* 122e47de pop eax */
  EAX = (pop32());
  /* 122e47df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e47e1 jne 0x122e47ec */
  if (!C.zf) goto L_122e47ec;
  /* 122e47e3 lock dec dword ptr [0x12301ae4] */
  x86_unimpl("lock dec @ 0x122e47e3");
  /* 122e47ea jmp 0x122e47fa */
  goto L_122e47fa;
L_122e47ec:;
  /* 122e47ec mov ebx, ecx */
  EBX = (ECX);
  /* 122e47ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e47f0 call 0x122db5d0 */
  push32(0x122e47f5u); f_122db5d0();
  /* 122e47f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e47f8 mov ecx, ebx */
  ECX = (EBX);
L_122e47fa:;
  /* 122e47fa mov eax, ecx */
  EAX = (ECX);
  /* 122e47fc pop ebx */
  EBX = (pop32());
  /* 122e47fd pop esi */
  ESI = (pop32());
  /* 122e47fe pop edi */
  EDI = (pop32());
  /* 122e47ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 122e4800 ret  */
  ESPCHK(0x122e4700u, _esp0);
  ESP += 4; return;
}

/* FUN_10014810 @ 0x122e4810 (255 bytes, 88 insns) */
void f_122e4810(void) {
  FTRACE(0x122e4810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4810 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4811 mov ebp, esp */
  EBP = (ESP);
  /* 122e4813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_122e4816:;
  /* 122e4816 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e481d jle 0x122e4836 */
  if ((C.zf||C.sf!=C.of)) goto L_122e4836;
  /* 122e481f push 8 */
  push32((uint32_t)(0x8u));
  /* 122e4821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4824 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4826 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e4828 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4829 call 0x122dda40 */
  push32(0x122e482eu); f_122dda40();
  /* 122e482e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4831 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122e4834 jmp 0x122e484f */
  goto L_122e484f;
L_122e4836:;
  /* 122e4836 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4839 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e483b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e483d mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e4843 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4845 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e4849 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122e484c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e484f:;
  /* 122e484f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4853 je 0x122e4860 */
  if (C.zf) goto L_122e4860;
  /* 122e4855 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4858 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e485b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e485e jmp 0x122e4816 */
  goto L_122e4816;
L_122e4860:;
  /* 122e4860 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4863 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4865 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e4867 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e486a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e486d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4870 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e4873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e4876 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4879 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e487d je 0x122e4885 */
  if (C.zf) goto L_122e4885;
  /* 122e487f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4883 jne 0x122e4898 */
  if (!C.zf) goto L_122e4898;
L_122e4885:;
  /* 122e4885 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e488a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e488c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e488f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4892 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4895 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122e4898:;
  /* 122e4898 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122e489f:;
  /* 122e489f cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e48a6 jle 0x122e48bb */
  if ((C.zf||C.sf!=C.of)) goto L_122e48bb;
  /* 122e48a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 122e48aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e48ad push edx */
  push32((uint32_t)(EDX));
  /* 122e48ae call 0x122dda40 */
  push32(0x122e48b3u); f_122dda40();
  /* 122e48b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e48b6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e48b9 jmp 0x122e48d0 */
  goto L_122e48d0;
L_122e48bb:;
  /* 122e48bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e48be mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e48c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e48c6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e48ca and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122e48cd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122e48d0:;
  /* 122e48d0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e48d4 je 0x122e48fb */
  if (C.zf) goto L_122e48fb;
  /* 122e48d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e48d9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e48dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e48df lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 122e48e3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e48e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e48e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e48eb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e48ed mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e48f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e48f3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e48f6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122e48f9 jmp 0x122e489f */
  goto L_122e489f;
L_122e48fb:;
  /* 122e48fb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e48ff jne 0x122e4908 */
  if (!C.zf) goto L_122e4908;
  /* 122e4901 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e4904 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e4906 jmp 0x122e490b */
  goto L_122e490b;
L_122e4908:;
  /* 122e4908 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_122e490b:;
  /* 122e490b mov esp, ebp */
  ESP = (EBP);
  /* 122e490d pop ebp */
  EBP = (pop32());
  /* 122e490e ret  */
  ESPCHK(0x122e4810u, _esp0);
  ESP += 4; return;
}

/* FUN_10014910 @ 0x122e4910 (17 bytes, 8 insns) */
void f_122e4910(void) {
  FTRACE(0x122e4910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4910 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4911 mov ebp, esp */
  EBP = (ESP);
  /* 122e4913 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4916 push eax */
  push32((uint32_t)(EAX));
  /* 122e4917 call 0x122e4810 */
  push32(0x122e491cu); f_122e4810();
  /* 122e491c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e491f pop ebp */
  EBP = (pop32());
  /* 122e4920 ret  */
  ESPCHK(0x122e4910u, _esp0);
  ESP += 4; return;
}

/* FUN_10014930 @ 0x122e4930 (297 bytes, 106 insns) */
void f_122e4930(void) {
  FTRACE(0x122e4930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4930 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4931 mov ebp, esp */
  EBP = (ESP);
  /* 122e4933 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4936 push esi */
  push32((uint32_t)(ESI));
L_122e4937:;
  /* 122e4937 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e493e jle 0x122e4957 */
  if ((C.zf||C.sf!=C.of)) goto L_122e4957;
  /* 122e4940 push 8 */
  push32((uint32_t)(0x8u));
  /* 122e4942 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4945 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4947 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e4949 push ecx */
  push32((uint32_t)(ECX));
  /* 122e494a call 0x122dda40 */
  push32(0x122e494fu); f_122dda40();
  /* 122e494f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4952 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e4955 jmp 0x122e4970 */
  goto L_122e4970;
L_122e4957:;
  /* 122e4957 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e495a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e495c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e495e mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e4964 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4966 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e496a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 122e496d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_122e4970:;
  /* 122e4970 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4974 je 0x122e4981 */
  if (C.zf) goto L_122e4981;
  /* 122e4976 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4979 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e497c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e497f jmp 0x122e4937 */
  goto L_122e4937;
L_122e4981:;
  /* 122e4981 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4986 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e4988 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e498b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e498e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4991 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e4994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e4997 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122e499a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e499e je 0x122e49a6 */
  if (C.zf) goto L_122e49a6;
  /* 122e49a0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e49a4 jne 0x122e49b9 */
  if (!C.zf) goto L_122e49b9;
L_122e49a6:;
  /* 122e49a6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e49a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e49ab mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e49ad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e49b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e49b3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e49b6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_122e49b9:;
  /* 122e49b9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 122e49c0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_122e49c7:;
  /* 122e49c7 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e49ce jle 0x122e49e3 */
  if ((C.zf||C.sf!=C.of)) goto L_122e49e3;
  /* 122e49d0 push 4 */
  push32((uint32_t)(0x4u));
  /* 122e49d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e49d5 push edx */
  push32((uint32_t)(EDX));
  /* 122e49d6 call 0x122dda40 */
  push32(0x122e49dbu); f_122dda40();
  /* 122e49db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e49de mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122e49e1 jmp 0x122e49f8 */
  goto L_122e49f8;
L_122e49e3:;
  /* 122e49e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e49e6 mov ecx, dword ptr [0x122ffde8] */
  ECX = (r32((uint32_t)(0x122ffde8)));
  /* 122e49ec xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e49ee mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 122e49f2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 122e49f5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_122e49f8:;
  /* 122e49f8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e49fc je 0x122e4a39 */
  if (C.zf) goto L_122e4a39;
  /* 122e49fe push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4a00 push 0xa */
  push32((uint32_t)(0xau));
  /* 122e4a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e4a05 push eax */
  push32((uint32_t)(EAX));
  /* 122e4a06 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4a09 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4a0a call 0x122e58d0 */
  push32(0x122e4a0fu); f_122e58d0();
  /* 122e4a0f mov ecx, eax */
  ECX = (EAX);
  /* 122e4a11 mov esi, edx */
  ESI = (EDX);
  /* 122e4a13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e4a16 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4a19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e4a1a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a1c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a1e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4a21 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 122e4a24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4a27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4a29 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e4a2b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e4a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4a31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 122e4a37 jmp 0x122e49c7 */
  goto L_122e49c7;
L_122e4a39:;
  /* 122e4a39 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4a3d jne 0x122e4a4e */
  if (!C.zf) goto L_122e4a4e;
  /* 122e4a3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4a42 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e4a44 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e4a47 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a4a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e4a4c jmp 0x122e4a54 */
  goto L_122e4a54;
L_122e4a4e:;
  /* 122e4a4e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4a51 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_122e4a54:;
  /* 122e4a54 pop esi */
  ESI = (pop32());
  /* 122e4a55 mov esp, ebp */
  ESP = (EBP);
  /* 122e4a57 pop ebp */
  EBP = (pop32());
  /* 122e4a58 ret  */
  ESPCHK(0x122e4930u, _esp0);
  ESP += 4; return;
}

/* FUN_10014a60 @ 0x122e4a60 (61 bytes, 18 insns) */
void f_122e4a60(void) {
  FTRACE(0x122e4a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4a60 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4a61 mov ebp, esp */
  EBP = (ESP);
  /* 122e4a63 cmp dword ptr [0x12301ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4a6a jne 0x122e4a9b */
  if (!C.zf) goto L_122e4a9b;
  /* 122e4a6c push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4a6e call 0x122db530 */
  push32(0x122e4a73u); f_122db530();
  /* 122e4a73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a76 cmp dword ptr [0x12301ab0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4a7d jne 0x122e4a91 */
  if (!C.zf) goto L_122e4a91;
  /* 122e4a7f call 0x122e4ac0 */
  push32(0x122e4a84u); f_122e4ac0();
  /* 122e4a84 mov eax, dword ptr [0x12301ab0] */
  EAX = (r32((uint32_t)(0x12301ab0)));
  /* 122e4a89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4a8c mov dword ptr [0x12301ab0], eax */
  w32((uint32_t)(0x12301ab0), (EAX));
L_122e4a91:;
  /* 122e4a91 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4a93 call 0x122db5d0 */
  push32(0x122e4a98u); f_122db5d0();
  /* 122e4a98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e4a9b:;
  /* 122e4a9b pop ebp */
  EBP = (pop32());
  /* 122e4a9c ret  */
  ESPCHK(0x122e4a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10014aa0 @ 0x122e4aa0 (30 bytes, 11 insns) */
void f_122e4aa0(void) {
  FTRACE(0x122e4aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4aa1 mov ebp, esp */
  EBP = (ESP);
  /* 122e4aa3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4aa5 call 0x122db530 */
  push32(0x122e4aaau); f_122db530();
  /* 122e4aaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4aad call 0x122e4ac0 */
  push32(0x122e4ab2u); f_122e4ac0();
  /* 122e4ab2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4ab4 call 0x122db5d0 */
  push32(0x122e4ab9u); f_122db5d0();
  /* 122e4ab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4abc pop ebp */
  EBP = (pop32());
  /* 122e4abd ret  */
  ESPCHK(0x122e4aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ac0 @ 0x122e4ac0 (939 bytes, 266 insns) */
void f_122e4ac0(void) {
  FTRACE(0x122e4ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4ac1 mov ebp, esp */
  EBP = (ESP);
  /* 122e4ac3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4ac6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e4acd push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e4acf call 0x122db530 */
  push32(0x122e4ad4u); f_122db530();
  /* 122e4ad4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4ad7 mov dword ptr [0x123019f8], 0 */
  w32((uint32_t)(0x123019f8), (0x0u));
  /* 122e4ae1 mov dword ptr [0x12300e48], 0xffffffff */
  w32((uint32_t)(0x12300e48), (0xffffffffu));
  /* 122e4aeb mov eax, dword ptr [0x12300e48] */
  EAX = (r32((uint32_t)(0x12300e48)));
  /* 122e4af0 mov dword ptr [0x12300e38], eax */
  w32((uint32_t)(0x12300e38), (EAX));
  /* 122e4af5 push 0x122fe2c0 */
  push32((uint32_t)(0x122fe2c0u));
  /* 122e4afa call 0x122e5940 */
  push32(0x122e4affu); f_122e5940();
  /* 122e4aff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4b02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e4b05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4b09 jne 0x122e4c43 */
  if (!C.zf) goto L_122e4c43;
  /* 122e4b0f push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e4b11 call 0x122db5d0 */
  push32(0x122e4b16u); f_122db5d0();
  /* 122e4b16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4b19 push 0x12301a00 */
  push32((uint32_t)(0x12301a00u));
  /* 122e4b1e call dword ptr [0x123042f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f8))), 0x122e4b24u);
  /* 122e4b24 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4b27 je 0x122e4c3e */
  if (C.zf) goto L_122e4c3e;
  /* 122e4b2d mov dword ptr [0x123019f8], 1 */
  w32((uint32_t)(0x123019f8), (0x1u));
  /* 122e4b37 mov ecx, dword ptr [0x12301a00] */
  ECX = (r32((uint32_t)(0x12301a00)));
  /* 122e4b3d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4b40 mov dword ptr [0x12300da0], ecx */
  w32((uint32_t)(0x12300da0), (ECX));
  /* 122e4b46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4b48 mov dx, word ptr [0x12301a46] */
  DX = (r16((uint32_t)(0x12301a46)));
  /* 122e4b4f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e4b51 je 0x122e4b69 */
  if (C.zf) goto L_122e4b69;
  /* 122e4b53 mov eax, dword ptr [0x12301a54] */
  EAX = (r32((uint32_t)(0x12301a54)));
  /* 122e4b58 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4b5b mov ecx, dword ptr [0x12300da0] */
  ECX = (r32((uint32_t)(0x12300da0)));
  /* 122e4b61 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4b63 mov dword ptr [0x12300da0], ecx */
  w32((uint32_t)(0x12300da0), (ECX));
L_122e4b69:;
  /* 122e4b69 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4b6b mov dx, word ptr [0x12301a9a] */
  DX = (r16((uint32_t)(0x12301a9a)));
  /* 122e4b72 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e4b74 je 0x122e4b9e */
  if (C.zf) goto L_122e4b9e;
  /* 122e4b76 cmp dword ptr [0x12301aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4b7d je 0x122e4b9e */
  if (C.zf) goto L_122e4b9e;
  /* 122e4b7f mov dword ptr [0x12300da4], 1 */
  w32((uint32_t)(0x12300da4), (0x1u));
  /* 122e4b89 mov eax, dword ptr [0x12301aa8] */
  EAX = (r32((uint32_t)(0x12301aa8)));
  /* 122e4b8e sub eax, dword ptr [0x12301a54] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12301a54))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e4b94 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4b97 mov dword ptr [0x12300da8], eax */
  w32((uint32_t)(0x12300da8), (EAX));
  /* 122e4b9c jmp 0x122e4bb2 */
  goto L_122e4bb2;
L_122e4b9e:;
  /* 122e4b9e mov dword ptr [0x12300da4], 0 */
  w32((uint32_t)(0x12300da4), (0x0u));
  /* 122e4ba8 mov dword ptr [0x12300da8], 0 */
  w32((uint32_t)(0x12300da8), (0x0u));
L_122e4bb2:;
  /* 122e4bb2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122e4bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4bb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4bb8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122e4bba mov edx, dword ptr [0x12300e2c] */
  EDX = (r32((uint32_t)(0x12300e2c)));
  /* 122e4bc0 push edx */
  push32((uint32_t)(EDX));
  /* 122e4bc1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e4bc3 push 0x12301a04 */
  push32((uint32_t)(0x12301a04u));
  /* 122e4bc8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e4bcd mov eax, dword ptr [0x12301970] */
  EAX = (r32((uint32_t)(0x12301970)));
  /* 122e4bd2 push eax */
  push32((uint32_t)(EAX));
  /* 122e4bd3 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e4bd9u);
  /* 122e4bd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4bdb je 0x122e4bef */
  if (C.zf) goto L_122e4bef;
  /* 122e4bdd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4be1 jne 0x122e4bef */
  if (!C.zf) goto L_122e4bef;
  /* 122e4be3 mov ecx, dword ptr [0x12300e2c] */
  ECX = (r32((uint32_t)(0x12300e2c)));
  /* 122e4be9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 122e4bed jmp 0x122e4bf8 */
  goto L_122e4bf8;
L_122e4bef:;
  /* 122e4bef mov edx, dword ptr [0x12300e2c] */
  EDX = (r32((uint32_t)(0x12300e2c)));
  /* 122e4bf5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_122e4bf8:;
  /* 122e4bf8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 122e4bfb push eax */
  push32((uint32_t)(EAX));
  /* 122e4bfc push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4bfe push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 122e4c00 mov ecx, dword ptr [0x12300e30] */
  ECX = (r32((uint32_t)(0x12300e30)));
  /* 122e4c06 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4c07 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e4c09 push 0x12301a58 */
  push32((uint32_t)(0x12301a58u));
  /* 122e4c0e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e4c13 mov edx, dword ptr [0x12301970] */
  EDX = (r32((uint32_t)(0x12301970)));
  /* 122e4c19 push edx */
  push32((uint32_t)(EDX));
  /* 122e4c1a call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e4c20u);
  /* 122e4c20 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4c22 je 0x122e4c35 */
  if (C.zf) goto L_122e4c35;
  /* 122e4c24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4c28 jne 0x122e4c35 */
  if (!C.zf) goto L_122e4c35;
  /* 122e4c2a mov eax, dword ptr [0x12300e30] */
  EAX = (r32((uint32_t)(0x12300e30)));
  /* 122e4c2f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 122e4c33 jmp 0x122e4c3e */
  goto L_122e4c3e;
L_122e4c35:;
  /* 122e4c35 mov ecx, dword ptr [0x12300e30] */
  ECX = (r32((uint32_t)(0x12300e30)));
  /* 122e4c3b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_122e4c3e:;
  /* 122e4c3e jmp 0x122e4e67 */
  goto L_122e4e67;
L_122e4c43:;
  /* 122e4c43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4c46 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4c49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4c4b je 0x122e4c6d */
  if (C.zf) goto L_122e4c6d;
  /* 122e4c4d cmp dword ptr [0x12301aac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301aac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4c54 je 0x122e4c7c */
  if (C.zf) goto L_122e4c7c;
  /* 122e4c56 mov ecx, dword ptr [0x12301aac] */
  ECX = (r32((uint32_t)(0x12301aac)));
  /* 122e4c5c push ecx */
  push32((uint32_t)(ECX));
  /* 122e4c5d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4c60 push edx */
  push32((uint32_t)(EDX));
  /* 122e4c61 call 0x122e1a20 */
  push32(0x122e4c66u); f_122e1a20();
  /* 122e4c66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4c69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e4c6b jne 0x122e4c7c */
  if (!C.zf) goto L_122e4c7c;
L_122e4c6d:;
  /* 122e4c6d push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e4c6f call 0x122db5d0 */
  push32(0x122e4c74u); f_122db5d0();
  /* 122e4c74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4c77 jmp 0x122e4e67 */
  goto L_122e4e67;
L_122e4c7c:;
  /* 122e4c7c push 2 */
  push32((uint32_t)(0x2u));
  /* 122e4c7e mov eax, dword ptr [0x12301aac] */
  EAX = (r32((uint32_t)(0x12301aac)));
  /* 122e4c83 push eax */
  push32((uint32_t)(EAX));
  /* 122e4c84 call 0x122d7c10 */
  push32(0x122e4c89u); f_122d7c10();
  /* 122e4c89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4c8c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 122e4c91 push 0x122fe2b8 */
  push32((uint32_t)(0x122fe2b8u));
  /* 122e4c96 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e4c98 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4c9b push ecx */
  push32((uint32_t)(ECX));
  /* 122e4c9c call 0x122d9fb0 */
  push32(0x122e4ca1u); f_122d9fb0();
  /* 122e4ca1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4ca4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4ca7 push eax */
  push32((uint32_t)(EAX));
  /* 122e4ca8 call 0x122d7180 */
  push32(0x122e4cadu); f_122d7180();
  /* 122e4cad add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4cb0 mov dword ptr [0x12301aac], eax */
  w32((uint32_t)(0x12301aac), (EAX));
  /* 122e4cb5 cmp dword ptr [0x12301aac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301aac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4cbc jne 0x122e4ccd */
  if (!C.zf) goto L_122e4ccd;
  /* 122e4cbe push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e4cc0 call 0x122db5d0 */
  push32(0x122e4cc5u); f_122db5d0();
  /* 122e4cc5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4cc8 jmp 0x122e4e67 */
  goto L_122e4e67;
L_122e4ccd:;
  /* 122e4ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4cd0 push edx */
  push32((uint32_t)(EDX));
  /* 122e4cd1 mov eax, dword ptr [0x12301aac] */
  EAX = (r32((uint32_t)(0x12301aac)));
  /* 122e4cd6 push eax */
  push32((uint32_t)(EAX));
  /* 122e4cd7 call 0x122da130 */
  push32(0x122e4cdcu); f_122da130();
  /* 122e4cdc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4cdf push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e4ce1 call 0x122db5d0 */
  push32(0x122e4ce6u); f_122db5d0();
  /* 122e4ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4ce9 push 3 */
  push32((uint32_t)(0x3u));
  /* 122e4ceb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4cee push ecx */
  push32((uint32_t)(ECX));
  /* 122e4cef mov edx, dword ptr [0x12300e2c] */
  EDX = (r32((uint32_t)(0x12300e2c)));
  /* 122e4cf5 push edx */
  push32((uint32_t)(EDX));
  /* 122e4cf6 call 0x122da9a0 */
  push32(0x122e4cfbu); f_122da9a0();
  /* 122e4cfb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4cfe mov eax, dword ptr [0x12300e2c] */
  EAX = (r32((uint32_t)(0x12300e2c)));
  /* 122e4d03 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 122e4d07 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d0a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d0d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4d10 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d13 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4d16 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4d19 jne 0x122e4d2d */
  if (!C.zf) goto L_122e4d2d;
  /* 122e4d1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e4d1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e4d24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d27 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d2a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122e4d2d:;
  /* 122e4d2d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d30 push eax */
  push32((uint32_t)(EAX));
  /* 122e4d31 call 0x122e4810 */
  push32(0x122e4d36u); f_122e4810();
  /* 122e4d36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d39 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4d3f mov dword ptr [0x12300da0], eax */
  w32((uint32_t)(0x12300da0), (EAX));
L_122e4d44:;
  /* 122e4d44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d47 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e4d4a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4d4d je 0x122e4d65 */
  if (C.zf) goto L_122e4d65;
  /* 122e4d4f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d52 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e4d55 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4d58 jl 0x122e4d70 */
  if ((C.sf!=C.of)) goto L_122e4d70;
  /* 122e4d5a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d5d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4d60 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4d63 jg 0x122e4d70 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e4d70;
L_122e4d65:;
  /* 122e4d65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d68 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d6b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4d6e jmp 0x122e4d44 */
  goto L_122e4d44;
L_122e4d70:;
  /* 122e4d70 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d73 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4d76 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4d79 jne 0x122e4e15 */
  if (!C.zf) goto L_122e4e15;
  /* 122e4d7f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d85 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4d88 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4d8b push edx */
  push32((uint32_t)(EDX));
  /* 122e4d8c call 0x122e4810 */
  push32(0x122e4d91u); f_122e4810();
  /* 122e4d91 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d94 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e4d97 mov ecx, dword ptr [0x12300da0] */
  ECX = (r32((uint32_t)(0x12300da0)));
  /* 122e4d9d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4d9f mov dword ptr [0x12300da0], ecx */
  w32((uint32_t)(0x12300da0), (ECX));
L_122e4da5:;
  /* 122e4da5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4da8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4dab cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4dae jl 0x122e4dc6 */
  if ((C.sf!=C.of)) goto L_122e4dc6;
  /* 122e4db0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4db3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e4db6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4db9 jg 0x122e4dc6 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e4dc6;
  /* 122e4dbb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4dbe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4dc1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e4dc4 jmp 0x122e4da5 */
  goto L_122e4da5;
L_122e4dc6:;
  /* 122e4dc6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4dc9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e4dcc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4dcf jne 0x122e4e15 */
  if (!C.zf) goto L_122e4e15;
  /* 122e4dd1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4dd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4dd7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e4dda mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4ddd push ecx */
  push32((uint32_t)(ECX));
  /* 122e4dde call 0x122e4810 */
  push32(0x122e4de3u); f_122e4810();
  /* 122e4de3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4de6 mov edx, dword ptr [0x12300da0] */
  EDX = (r32((uint32_t)(0x12300da0)));
  /* 122e4dec add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4dee mov dword ptr [0x12300da0], edx */
  w32((uint32_t)(0x12300da0), (EDX));
L_122e4df4:;
  /* 122e4df4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4df7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e4dfa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4dfd jl 0x122e4e15 */
  if ((C.sf!=C.of)) goto L_122e4e15;
  /* 122e4dff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4e02 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 122e4e05 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4e08 jg 0x122e4e15 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e4e15;
  /* 122e4e0a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4e0d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4e10 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e4e13 jmp 0x122e4df4 */
  goto L_122e4df4;
L_122e4e15:;
  /* 122e4e15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4e19 je 0x122e4e29 */
  if (C.zf) goto L_122e4e29;
  /* 122e4e1b mov edx, dword ptr [0x12300da0] */
  EDX = (r32((uint32_t)(0x12300da0)));
  /* 122e4e21 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e4e23 mov dword ptr [0x12300da0], edx */
  w32((uint32_t)(0x12300da0), (EDX));
L_122e4e29:;
  /* 122e4e29 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4e2c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 122e4e2f mov dword ptr [0x12300da4], ecx */
  w32((uint32_t)(0x12300da4), (ECX));
  /* 122e4e35 cmp dword ptr [0x12300da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12300da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4e3c je 0x122e4e5e */
  if (C.zf) goto L_122e4e5e;
  /* 122e4e3e push 3 */
  push32((uint32_t)(0x3u));
  /* 122e4e40 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e4e43 push edx */
  push32((uint32_t)(EDX));
  /* 122e4e44 mov eax, dword ptr [0x12300e30] */
  EAX = (r32((uint32_t)(0x12300e30)));
  /* 122e4e49 push eax */
  push32((uint32_t)(EAX));
  /* 122e4e4a call 0x122da9a0 */
  push32(0x122e4e4fu); f_122da9a0();
  /* 122e4e4f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4e52 mov ecx, dword ptr [0x12300e30] */
  ECX = (r32((uint32_t)(0x12300e30)));
  /* 122e4e58 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 122e4e5c jmp 0x122e4e67 */
  goto L_122e4e67;
L_122e4e5e:;
  /* 122e4e5e mov edx, dword ptr [0x12300e30] */
  EDX = (r32((uint32_t)(0x12300e30)));
  /* 122e4e64 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_122e4e67:;
  /* 122e4e67 mov esp, ebp */
  ESP = (EBP);
  /* 122e4e69 pop ebp */
  EBP = (pop32());
  /* 122e4e6a ret  */
  ESPCHK(0x122e4ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014e70 @ 0x122e4e70 (46 bytes, 18 insns) */
void f_122e4e70(void) {
  FTRACE(0x122e4e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4e70 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4e71 mov ebp, esp */
  EBP = (ESP);
  /* 122e4e73 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4e74 push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4e76 call 0x122db530 */
  push32(0x122e4e7bu); f_122db530();
  /* 122e4e7b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4e7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4e81 push eax */
  push32((uint32_t)(EAX));
  /* 122e4e82 call 0x122e4ea0 */
  push32(0x122e4e87u); f_122e4ea0();
  /* 122e4e87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4e8a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e4e8d push 0xb */
  push32((uint32_t)(0xbu));
  /* 122e4e8f call 0x122db5d0 */
  push32(0x122e4e94u); f_122db5d0();
  /* 122e4e94 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4e97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e4e9a mov esp, ebp */
  ESP = (EBP);
  /* 122e4e9c pop ebp */
  EBP = (pop32());
  /* 122e4e9d ret  */
  ESPCHK(0x122e4e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x122e4ea0 (762 bytes, 246 insns) */
void f_122e4ea0(void) {
  FTRACE(0x122e4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 122e4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4ea4 cmp dword ptr [0x12300da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12300da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4eab jne 0x122e4eb4 */
  if (!C.zf) goto L_122e4eb4;
  /* 122e4ead xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4eaf jmp 0x122e5196 */
  goto L_122e5196;
L_122e4eb4:;
  /* 122e4eb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4eb7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122e4eba cmp ecx, dword ptr [0x12300e38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300e38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4ec0 jne 0x122e4ed4 */
  if (!C.zf) goto L_122e4ed4;
  /* 122e4ec2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4ec5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e4ec8 cmp eax, dword ptr [0x12300e48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300e48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4ece je 0x122e509b */
  if (C.zf) goto L_122e509b;
L_122e4ed4:;
  /* 122e4ed4 cmp dword ptr [0x123019f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x123019f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e4edb je 0x122e5055 */
  if (C.zf) goto L_122e5055;
  /* 122e4ee1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4ee3 mov cx, word ptr [0x12301a98] */
  CX = (r16((uint32_t)(0x12301a98)));
  /* 122e4eea test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e4eec jne 0x122e4f49 */
  if (!C.zf) goto L_122e4f49;
  /* 122e4eee xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4ef0 mov dx, word ptr [0x12301aa6] */
  DX = (r16((uint32_t)(0x12301aa6)));
  /* 122e4ef7 push edx */
  push32((uint32_t)(EDX));
  /* 122e4ef8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4efa mov ax, word ptr [0x12301aa4] */
  AX = (r16((uint32_t)(0x12301aa4)));
  /* 122e4f00 push eax */
  push32((uint32_t)(EAX));
  /* 122e4f01 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4f03 mov cx, word ptr [0x12301aa2] */
  CX = (r16((uint32_t)(0x12301aa2)));
  /* 122e4f0a push ecx */
  push32((uint32_t)(ECX));
  /* 122e4f0b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4f0d mov dx, word ptr [0x12301aa0] */
  DX = (r16((uint32_t)(0x12301aa0)));
  /* 122e4f14 push edx */
  push32((uint32_t)(EDX));
  /* 122e4f15 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4f17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4f19 mov ax, word ptr [0x12301a9c] */
  AX = (r16((uint32_t)(0x12301a9c)));
  /* 122e4f1f push eax */
  push32((uint32_t)(EAX));
  /* 122e4f20 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4f22 mov cx, word ptr [0x12301a9e] */
  CX = (r16((uint32_t)(0x12301a9e)));
  /* 122e4f29 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4f2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4f2c mov dx, word ptr [0x12301a9a] */
  DX = (r16((uint32_t)(0x12301a9a)));
  /* 122e4f33 push edx */
  push32((uint32_t)(EDX));
  /* 122e4f34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4f37 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122e4f3a push ecx */
  push32((uint32_t)(ECX));
  /* 122e4f3b push 1 */
  push32((uint32_t)(0x1u));
  /* 122e4f3d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e4f3f call 0x122e51a0 */
  push32(0x122e4f44u); f_122e51a0();
  /* 122e4f44 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e4f47 jmp 0x122e4f9a */
  goto L_122e4f9a;
L_122e4f49:;
  /* 122e4f49 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4f4b mov dx, word ptr [0x12301aa6] */
  DX = (r16((uint32_t)(0x12301aa6)));
  /* 122e4f52 push edx */
  push32((uint32_t)(EDX));
  /* 122e4f53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4f55 mov ax, word ptr [0x12301aa4] */
  AX = (r16((uint32_t)(0x12301aa4)));
  /* 122e4f5b push eax */
  push32((uint32_t)(EAX));
  /* 122e4f5c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4f5e mov cx, word ptr [0x12301aa2] */
  CX = (r16((uint32_t)(0x12301aa2)));
  /* 122e4f65 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4f66 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4f68 mov dx, word ptr [0x12301aa0] */
  DX = (r16((uint32_t)(0x12301aa0)));
  /* 122e4f6f push edx */
  push32((uint32_t)(EDX));
  /* 122e4f70 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4f72 mov ax, word ptr [0x12301a9e] */
  AX = (r16((uint32_t)(0x12301a9e)));
  /* 122e4f78 push eax */
  push32((uint32_t)(EAX));
  /* 122e4f79 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4f7b push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4f7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4f7f mov cx, word ptr [0x12301a9a] */
  CX = (r16((uint32_t)(0x12301a9a)));
  /* 122e4f86 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4f87 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4f8a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e4f8d push eax */
  push32((uint32_t)(EAX));
  /* 122e4f8e push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4f90 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e4f92 call 0x122e51a0 */
  push32(0x122e4f97u); f_122e51a0();
  /* 122e4f97 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e4f9a:;
  /* 122e4f9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4f9c mov cx, word ptr [0x12301a44] */
  CX = (r16((uint32_t)(0x12301a44)));
  /* 122e4fa3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e4fa5 jne 0x122e5002 */
  if (!C.zf) goto L_122e5002;
  /* 122e4fa7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4fa9 mov dx, word ptr [0x12301a52] */
  DX = (r16((uint32_t)(0x12301a52)));
  /* 122e4fb0 push edx */
  push32((uint32_t)(EDX));
  /* 122e4fb1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4fb3 mov ax, word ptr [0x12301a50] */
  AX = (r16((uint32_t)(0x12301a50)));
  /* 122e4fb9 push eax */
  push32((uint32_t)(EAX));
  /* 122e4fba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4fbc mov cx, word ptr [0x12301a4e] */
  CX = (r16((uint32_t)(0x12301a4e)));
  /* 122e4fc3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4fc4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4fc6 mov dx, word ptr [0x12301a4c] */
  DX = (r16((uint32_t)(0x12301a4c)));
  /* 122e4fcd push edx */
  push32((uint32_t)(EDX));
  /* 122e4fce push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4fd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e4fd2 mov ax, word ptr [0x12301a48] */
  AX = (r16((uint32_t)(0x12301a48)));
  /* 122e4fd8 push eax */
  push32((uint32_t)(EAX));
  /* 122e4fd9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e4fdb mov cx, word ptr [0x12301a4a] */
  CX = (r16((uint32_t)(0x12301a4a)));
  /* 122e4fe2 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4fe3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e4fe5 mov dx, word ptr [0x12301a46] */
  DX = (r16((uint32_t)(0x12301a46)));
  /* 122e4fec push edx */
  push32((uint32_t)(EDX));
  /* 122e4fed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e4ff0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122e4ff3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e4ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e4ff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e4ff8 call 0x122e51a0 */
  push32(0x122e4ffdu); f_122e51a0();
  /* 122e4ffd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5000 jmp 0x122e5053 */
  goto L_122e5053;
L_122e5002:;
  /* 122e5002 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5004 mov dx, word ptr [0x12301a52] */
  DX = (r16((uint32_t)(0x12301a52)));
  /* 122e500b push edx */
  push32((uint32_t)(EDX));
  /* 122e500c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e500e mov ax, word ptr [0x12301a50] */
  AX = (r16((uint32_t)(0x12301a50)));
  /* 122e5014 push eax */
  push32((uint32_t)(EAX));
  /* 122e5015 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5017 mov cx, word ptr [0x12301a4e] */
  CX = (r16((uint32_t)(0x12301a4e)));
  /* 122e501e push ecx */
  push32((uint32_t)(ECX));
  /* 122e501f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5021 mov dx, word ptr [0x12301a4c] */
  DX = (r16((uint32_t)(0x12301a4c)));
  /* 122e5028 push edx */
  push32((uint32_t)(EDX));
  /* 122e5029 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e502b mov ax, word ptr [0x12301a4a] */
  AX = (r16((uint32_t)(0x12301a4a)));
  /* 122e5031 push eax */
  push32((uint32_t)(EAX));
  /* 122e5032 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5034 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5036 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5038 mov cx, word ptr [0x12301a46] */
  CX = (r16((uint32_t)(0x12301a46)));
  /* 122e503f push ecx */
  push32((uint32_t)(ECX));
  /* 122e5040 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5043 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 122e5046 push eax */
  push32((uint32_t)(EAX));
  /* 122e5047 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5049 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e504b call 0x122e51a0 */
  push32(0x122e5050u); f_122e51a0();
  /* 122e5050 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e5053:;
  /* 122e5053 jmp 0x122e509b */
  goto L_122e509b;
L_122e5055:;
  /* 122e5055 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5057 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5059 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e505b push 2 */
  push32((uint32_t)(0x2u));
  /* 122e505d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e505f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5061 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5063 push 4 */
  push32((uint32_t)(0x4u));
  /* 122e5065 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5068 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 122e506b push edx */
  push32((uint32_t)(EDX));
  /* 122e506c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e506e push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5070 call 0x122e51a0 */
  push32(0x122e5075u); f_122e51a0();
  /* 122e5075 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5078 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e507a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e507c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e507e push 2 */
  push32((uint32_t)(0x2u));
  /* 122e5080 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5082 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5084 push 5 */
  push32((uint32_t)(0x5u));
  /* 122e5086 push 0xa */
  push32((uint32_t)(0xau));
  /* 122e5088 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e508b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 122e508e push ecx */
  push32((uint32_t)(ECX));
  /* 122e508f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5091 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5093 call 0x122e51a0 */
  push32(0x122e5098u); f_122e51a0();
  /* 122e5098 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e509b:;
  /* 122e509b mov edx, dword ptr [0x12300e3c] */
  EDX = (r32((uint32_t)(0x12300e3c)));
  /* 122e50a1 cmp edx, dword ptr [0x12300e4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12300e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e50a7 jge 0x122e50f4 */
  if ((C.sf==C.of)) goto L_122e50f4;
  /* 122e50a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e50ac mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e50af cmp ecx, dword ptr [0x12300e3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e50b5 jl 0x122e50c5 */
  if ((C.sf!=C.of)) goto L_122e50c5;
  /* 122e50b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e50ba mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e50bd cmp eax, dword ptr [0x12300e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e50c3 jle 0x122e50cc */
  if ((C.zf||C.sf!=C.of)) goto L_122e50cc;
L_122e50c5:;
  /* 122e50c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e50c7 jmp 0x122e5196 */
  goto L_122e5196;
L_122e50cc:;
  /* 122e50cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e50cf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122e50d2 cmp edx, dword ptr [0x12300e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12300e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e50d8 jle 0x122e50f2 */
  if ((C.zf||C.sf!=C.of)) goto L_122e50f2;
  /* 122e50da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e50dd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e50e0 cmp ecx, dword ptr [0x12300e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e50e6 jge 0x122e50f2 */
  if ((C.sf==C.of)) goto L_122e50f2;
  /* 122e50e8 mov eax, 1 */
  EAX = (0x1u);
  /* 122e50ed jmp 0x122e5196 */
  goto L_122e5196;
L_122e50f2:;
  /* 122e50f2 jmp 0x122e5137 */
  goto L_122e5137;
L_122e50f4:;
  /* 122e50f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e50f7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e50fa cmp eax, dword ptr [0x12300e4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5100 jl 0x122e5110 */
  if ((C.sf!=C.of)) goto L_122e5110;
  /* 122e5102 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5105 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122e5108 cmp edx, dword ptr [0x12300e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12300e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e510e jle 0x122e5117 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5117;
L_122e5110:;
  /* 122e5110 mov eax, 1 */
  EAX = (0x1u);
  /* 122e5115 jmp 0x122e5196 */
  goto L_122e5196;
L_122e5117:;
  /* 122e5117 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e511a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 122e511d cmp ecx, dword ptr [0x12300e4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300e4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5123 jle 0x122e5137 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5137;
  /* 122e5125 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5128 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 122e512b cmp eax, dword ptr [0x12300e3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5131 jge 0x122e5137 */
  if ((C.sf==C.of)) goto L_122e5137;
  /* 122e5133 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5135 jmp 0x122e5196 */
  goto L_122e5196;
L_122e5137:;
  /* 122e5137 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e513a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 122e513d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5140 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5143 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e5145 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5147 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e514a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 122e514d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5153 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5155 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e515b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e515e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5161 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 122e5164 cmp edx, dword ptr [0x12300e3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x12300e3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e516a jne 0x122e5182 */
  if (!C.zf) goto L_122e5182;
  /* 122e516c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e516f cmp eax, dword ptr [0x12300e40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12300e40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5175 jl 0x122e517e */
  if ((C.sf!=C.of)) goto L_122e517e;
  /* 122e5177 mov eax, 1 */
  EAX = (0x1u);
  /* 122e517c jmp 0x122e5196 */
  goto L_122e5196;
L_122e517e:;
  /* 122e517e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5180 jmp 0x122e5196 */
  goto L_122e5196;
L_122e5182:;
  /* 122e5182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5185 cmp ecx, dword ptr [0x12300e50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12300e50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e518b jge 0x122e5194 */
  if ((C.sf==C.of)) goto L_122e5194;
  /* 122e518d mov eax, 1 */
  EAX = (0x1u);
  /* 122e5192 jmp 0x122e5196 */
  goto L_122e5196;
L_122e5194:;
  /* 122e5194 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e5196:;
  /* 122e5196 mov esp, ebp */
  ESP = (EBP);
  /* 122e5198 pop ebp */
  EBP = (pop32());
  /* 122e5199 ret  */
  ESPCHK(0x122e4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_100151a0 @ 0x122e51a0 (504 bytes, 145 insns) */
void f_122e51a0(void) {
  FTRACE(0x122e51a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e51a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e51a1 mov ebp, esp */
  EBP = (ESP);
  /* 122e51a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e51a6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e51aa jne 0x122e527c */
  if (!C.zf) goto L_122e527c;
  /* 122e51b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e51b3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 122e51b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e51b8 jne 0x122e51c9 */
  if (!C.zf) goto L_122e51c9;
  /* 122e51ba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e51bd mov edx, dword ptr [ecx*4 + 0x12300e5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12300e5c)));
  /* 122e51c4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122e51c7 jmp 0x122e51d6 */
  goto L_122e51d6;
L_122e51c9:;
  /* 122e51c9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e51cc mov ecx, dword ptr [eax*4 + 0x12300e90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12300e90)));
  /* 122e51d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_122e51d6:;
  /* 122e51d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e51d9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e51dc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e51df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e51e2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e51e5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e51eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e51ee add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e51f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e51f3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e51f6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 122e51f9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 122e51fd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 122e51fe mov ecx, 7 */
  ECX = (0x7u);
  /* 122e5203 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 122e5205 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e5208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e520b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e520e jg 0x122e5229 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e5229;
  /* 122e5210 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e5213 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5216 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5219 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e521c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e521f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5222 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5224 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e5227 jmp 0x122e523d */
  goto L_122e523d;
L_122e5229:;
  /* 122e5229 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e522c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e522f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5232 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5235 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5238 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e523a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e523d:;
  /* 122e523d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5241 jne 0x122e527a */
  if (!C.zf) goto L_122e527a;
  /* 122e5243 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5246 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 122e5249 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e524b jne 0x122e525c */
  if (!C.zf) goto L_122e525c;
  /* 122e524d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5250 mov eax, dword ptr [edx*4 + 0x12300e60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12300e60)));
  /* 122e5257 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122e525a jmp 0x122e5269 */
  goto L_122e5269;
L_122e525c:;
  /* 122e525c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e525f mov edx, dword ptr [ecx*4 + 0x12300e94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x12300e94)));
  /* 122e5266 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_122e5269:;
  /* 122e5269 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e526c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e526f jle 0x122e527a */
  if ((C.zf||C.sf!=C.of)) goto L_122e527a;
  /* 122e5271 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e5274 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5277 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122e527a:;
  /* 122e527a jmp 0x122e52b1 */
  goto L_122e52b1;
L_122e527c:;
  /* 122e527c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e527f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 122e5282 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5284 jne 0x122e5295 */
  if (!C.zf) goto L_122e5295;
  /* 122e5286 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5289 mov ecx, dword ptr [eax*4 + 0x12300e5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x12300e5c)));
  /* 122e5290 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 122e5293 jmp 0x122e52a2 */
  goto L_122e52a2;
L_122e5295:;
  /* 122e5295 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5298 mov eax, dword ptr [edx*4 + 0x12300e90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x12300e90)));
  /* 122e529f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_122e52a2:;
  /* 122e52a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e52a5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 122e52a8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e52ab add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e52ae mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_122e52b1:;
  /* 122e52b1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e52b5 jne 0x122e52f1 */
  if (!C.zf) goto L_122e52f1;
  /* 122e52b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e52ba mov dword ptr [0x12300e3c], eax */
  w32((uint32_t)(0x12300e3c), (EAX));
  /* 122e52bf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 122e52c2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e52c5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122e52c8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e52ca imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e52cd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122e52d0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e52d2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e52d8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122e52db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e52dd mov dword ptr [0x12300e40], ecx */
  w32((uint32_t)(0x12300e40), (ECX));
  /* 122e52e3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e52e6 mov dword ptr [0x12300e38], edx */
  w32((uint32_t)(0x12300e38), (EDX));
  /* 122e52ec jmp 0x122e5394 */
  goto L_122e5394;
L_122e52f1:;
  /* 122e52f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e52f4 mov dword ptr [0x12300e4c], eax */
  w32((uint32_t)(0x12300e4c), (EAX));
  /* 122e52f9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 122e52fc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e52ff mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 122e5302 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5304 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5307 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 122e530a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e530c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5312 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 122e5315 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5317 mov dword ptr [0x12300e50], ecx */
  w32((uint32_t)(0x12300e50), (ECX));
  /* 122e531d mov edx, dword ptr [0x12300da8] */
  EDX = (r32((uint32_t)(0x12300da8)));
  /* 122e5323 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 122e5329 mov eax, dword ptr [0x12300e50] */
  EAX = (r32((uint32_t)(0x12300e50)));
  /* 122e532e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5330 mov dword ptr [0x12300e50], eax */
  w32((uint32_t)(0x12300e50), (EAX));
  /* 122e5335 cmp dword ptr [0x12300e50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12300e50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e533c jge 0x122e5361 */
  if ((C.sf==C.of)) goto L_122e5361;
  /* 122e533e mov ecx, dword ptr [0x12300e50] */
  ECX = (r32((uint32_t)(0x12300e50)));
  /* 122e5344 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e534a mov dword ptr [0x12300e50], ecx */
  w32((uint32_t)(0x12300e50), (ECX));
  /* 122e5350 mov edx, dword ptr [0x12300e4c] */
  EDX = (r32((uint32_t)(0x12300e4c)));
  /* 122e5356 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5359 mov dword ptr [0x12300e4c], edx */
  w32((uint32_t)(0x12300e4c), (EDX));
  /* 122e535f jmp 0x122e538b */
  goto L_122e538b;
L_122e5361:;
  /* 122e5361 cmp dword ptr [0x12300e50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x12300e50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e536b jl 0x122e538b */
  if ((C.sf!=C.of)) goto L_122e538b;
  /* 122e536d mov eax, dword ptr [0x12300e50] */
  EAX = (r32((uint32_t)(0x12300e50)));
  /* 122e5372 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5377 mov dword ptr [0x12300e50], eax */
  w32((uint32_t)(0x12300e50), (EAX));
  /* 122e537c mov ecx, dword ptr [0x12300e4c] */
  ECX = (r32((uint32_t)(0x12300e4c)));
  /* 122e5382 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5385 mov dword ptr [0x12300e4c], ecx */
  w32((uint32_t)(0x12300e4c), (ECX));
L_122e538b:;
  /* 122e538b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e538e mov dword ptr [0x12300e48], edx */
  w32((uint32_t)(0x12300e48), (EDX));
L_122e5394:;
  /* 122e5394 mov esp, ebp */
  ESP = (EBP);
  /* 122e5396 pop ebp */
  EBP = (pop32());
  /* 122e5397 ret  */
  ESPCHK(0x122e51a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100153a0 @ 0x122e53a0 (382 bytes, 135 insns) */
void f_122e53a0(void) {
  FTRACE(0x122e53a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e53a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e53a1 mov ebp, esp */
  EBP = (ESP);
  /* 122e53a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e53a5 push 0x122fe2c8 */
  push32((uint32_t)(0x122fe2c8u));
  /* 122e53aa push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122e53af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122e53b5 push eax */
  push32((uint32_t)(EAX));
  /* 122e53b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122e53bd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e53c0 push ebx */
  push32((uint32_t)(EBX));
  /* 122e53c1 push esi */
  push32((uint32_t)(ESI));
  /* 122e53c2 push edi */
  push32((uint32_t)(EDI));
  /* 122e53c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e53c6 cmp dword ptr [0x12301ab4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e53cd jne 0x122e5412 */
  if (!C.zf) goto L_122e5412;
  /* 122e53cf push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e53d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53d7 call dword ptr [0x1230430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230430c))), 0x122e53ddu);
  /* 122e53dd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e53df je 0x122e53ed */
  if (C.zf) goto L_122e53ed;
  /* 122e53e1 mov dword ptr [0x12301ab4], 1 */
  w32((uint32_t)(0x12301ab4), (0x1u));
  /* 122e53eb jmp 0x122e5412 */
  goto L_122e5412;
L_122e53ed:;
  /* 122e53ed push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53ef push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53f1 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e53f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e53f5 call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e53fbu);
  /* 122e53fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e53fd je 0x122e540b */
  if (C.zf) goto L_122e540b;
  /* 122e53ff mov dword ptr [0x12301ab4], 2 */
  w32((uint32_t)(0x12301ab4), (0x2u));
  /* 122e5409 jmp 0x122e5412 */
  goto L_122e5412;
L_122e540b:;
  /* 122e540b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e540d jmp 0x122e5521 */
  goto L_122e5521;
L_122e5412:;
  /* 122e5412 cmp dword ptr [0x12301ab4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5419 jne 0x122e5436 */
  if (!C.zf) goto L_122e5436;
  /* 122e541b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e541e push eax */
  push32((uint32_t)(EAX));
  /* 122e541f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5422 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5423 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5426 push edx */
  push32((uint32_t)(EDX));
  /* 122e5427 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e542a push eax */
  push32((uint32_t)(EAX));
  /* 122e542b call dword ptr [0x1230430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230430c))), 0x122e5431u);
  /* 122e5431 jmp 0x122e5521 */
  goto L_122e5521;
L_122e5436:;
  /* 122e5436 cmp dword ptr [0x12301ab4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e543d jne 0x122e551f */
  if (!C.zf) goto L_122e551f;
  /* 122e5443 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5447 jne 0x122e5452 */
  if (!C.zf) goto L_122e5452;
  /* 122e5449 mov ecx, dword ptr [0x12301970] */
  ECX = (r32((uint32_t)(0x12301970)));
  /* 122e544f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_122e5452:;
  /* 122e5452 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5454 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5456 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5459 push edx */
  push32((uint32_t)(EDX));
  /* 122e545a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e545d push eax */
  push32((uint32_t)(EAX));
  /* 122e545e call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e5464u);
  /* 122e5464 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e5467 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e546b jne 0x122e5474 */
  if (!C.zf) goto L_122e5474;
  /* 122e546d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e546f jmp 0x122e5521 */
  goto L_122e5521;
L_122e5474:;
  /* 122e5474 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e547b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e547e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5481 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e5483 call 0x122da320 */
  push32(0x122e5488u); f_122da320();
  /* 122e5488 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 122e548b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e548e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e5491 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122e5494 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e549b jmp 0x122e54b4 */
  goto L_122e54b4;
  /* 122e549d mov eax, 1 */
  EAX = (0x1u);
  /* 122e54a2 ret  */
  ESPCHK(0x122e53a0u, _esp0);
  ESP += 4; return;
  /* 122e54a3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e54a6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122e54ad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e54b4:;
  /* 122e54b4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e54b8 jne 0x122e54be */
  if (!C.zf) goto L_122e54be;
  /* 122e54ba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e54bc jmp 0x122e5521 */
  goto L_122e5521;
L_122e54be:;
  /* 122e54be mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e54c1 push edx */
  push32((uint32_t)(EDX));
  /* 122e54c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e54c5 push eax */
  push32((uint32_t)(EAX));
  /* 122e54c6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e54c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122e54ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e54cd push edx */
  push32((uint32_t)(EDX));
  /* 122e54ce call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e54d4u);
  /* 122e54d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e54d6 jne 0x122e54dc */
  if (!C.zf) goto L_122e54dc;
  /* 122e54d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e54da jmp 0x122e5521 */
  goto L_122e5521;
L_122e54dc:;
  /* 122e54dc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e54e0 jne 0x122e54fd */
  if (!C.zf) goto L_122e54fd;
  /* 122e54e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e54e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e54e6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e54e8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e54eb push eax */
  push32((uint32_t)(EAX));
  /* 122e54ec push 1 */
  push32((uint32_t)(0x1u));
  /* 122e54ee mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e54f1 push ecx */
  push32((uint32_t)(ECX));
  /* 122e54f2 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e54f8u);
  /* 122e54f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122e54fb jmp 0x122e551a */
  goto L_122e551a;
L_122e54fd:;
  /* 122e54fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5500 push edx */
  push32((uint32_t)(EDX));
  /* 122e5501 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5504 push eax */
  push32((uint32_t)(EAX));
  /* 122e5505 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e5507 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e550a push ecx */
  push32((uint32_t)(ECX));
  /* 122e550b push 1 */
  push32((uint32_t)(0x1u));
  /* 122e550d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5510 push edx */
  push32((uint32_t)(EDX));
  /* 122e5511 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e5517u);
  /* 122e5517 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122e551a:;
  /* 122e551a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e551d jmp 0x122e5521 */
  goto L_122e5521;
L_122e551f:;
  /* 122e551f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e5521:;
  /* 122e5521 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122e5524 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e5527 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122e552e pop edi */
  EDI = (pop32());
  /* 122e552f pop esi */
  ESI = (pop32());
  /* 122e5530 pop ebx */
  EBX = (pop32());
  /* 122e5531 mov esp, ebp */
  ESP = (EBP);
  /* 122e5533 pop ebp */
  EBP = (pop32());
  /* 122e5534 ret  */
  ESPCHK(0x122e53a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015540 @ 0x122e5540 (398 bytes, 140 insns) */
void f_122e5540(void) {
  FTRACE(0x122e5540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5540 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5541 mov ebp, esp */
  EBP = (ESP);
  /* 122e5543 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e5545 push 0x122fe2d8 */
  push32((uint32_t)(0x122fe2d8u));
  /* 122e554a push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122e554f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122e5555 push eax */
  push32((uint32_t)(EAX));
  /* 122e5556 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122e555d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5560 push ebx */
  push32((uint32_t)(EBX));
  /* 122e5561 push esi */
  push32((uint32_t)(ESI));
  /* 122e5562 push edi */
  push32((uint32_t)(EDI));
  /* 122e5563 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e5566 cmp dword ptr [0x12301ab8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e556d jne 0x122e55b2 */
  if (!C.zf) goto L_122e55b2;
  /* 122e556f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5571 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5573 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5575 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5577 call dword ptr [0x1230430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230430c))), 0x122e557du);
  /* 122e557d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e557f je 0x122e558d */
  if (C.zf) goto L_122e558d;
  /* 122e5581 mov dword ptr [0x12301ab8], 1 */
  w32((uint32_t)(0x12301ab8), (0x1u));
  /* 122e558b jmp 0x122e55b2 */
  goto L_122e55b2;
L_122e558d:;
  /* 122e558d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e558f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5591 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5593 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5595 call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e559bu);
  /* 122e559b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e559d je 0x122e55ab */
  if (C.zf) goto L_122e55ab;
  /* 122e559f mov dword ptr [0x12301ab8], 2 */
  w32((uint32_t)(0x12301ab8), (0x2u));
  /* 122e55a9 jmp 0x122e55b2 */
  goto L_122e55b2;
L_122e55ab:;
  /* 122e55ab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e55ad jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e55b2:;
  /* 122e55b2 cmp dword ptr [0x12301ab8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e55b9 jne 0x122e55d6 */
  if (!C.zf) goto L_122e55d6;
  /* 122e55bb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e55be push eax */
  push32((uint32_t)(EAX));
  /* 122e55bf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e55c2 push ecx */
  push32((uint32_t)(ECX));
  /* 122e55c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e55c6 push edx */
  push32((uint32_t)(EDX));
  /* 122e55c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e55ca push eax */
  push32((uint32_t)(EAX));
  /* 122e55cb call dword ptr [0x123042f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042f4))), 0x122e55d1u);
  /* 122e55d1 jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e55d6:;
  /* 122e55d6 cmp dword ptr [0x12301ab8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301ab8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e55dd jne 0x122e56cf */
  if (!C.zf) goto L_122e56cf;
  /* 122e55e3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e55e7 jne 0x122e55f2 */
  if (!C.zf) goto L_122e55f2;
  /* 122e55e9 mov ecx, dword ptr [0x12301970] */
  ECX = (r32((uint32_t)(0x12301970)));
  /* 122e55ef mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_122e55f2:;
  /* 122e55f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e55f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e55f6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e55f9 push edx */
  push32((uint32_t)(EDX));
  /* 122e55fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e55fd push eax */
  push32((uint32_t)(EAX));
  /* 122e55fe call dword ptr [0x1230430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230430c))), 0x122e5604u);
  /* 122e5604 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e5607 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e560b jne 0x122e5614 */
  if (!C.zf) goto L_122e5614;
  /* 122e560d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e560f jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e5614:;
  /* 122e5614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e561b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e561e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e5620 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5623 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e5625 call 0x122da320 */
  push32(0x122e562au); f_122da320();
  /* 122e562a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 122e562d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e5630 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e5633 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 122e5636 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e563d jmp 0x122e5656 */
  goto L_122e5656;
  /* 122e563f mov eax, 1 */
  EAX = (0x1u);
  /* 122e5644 ret  */
  ESPCHK(0x122e5540u, _esp0);
  ESP += 4; return;
  /* 122e5645 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e5648 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 122e564f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e5656:;
  /* 122e5656 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e565a jne 0x122e5660 */
  if (!C.zf) goto L_122e5660;
  /* 122e565c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e565e jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e5660:;
  /* 122e5660 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e5663 push edx */
  push32((uint32_t)(EDX));
  /* 122e5664 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e5667 push eax */
  push32((uint32_t)(EAX));
  /* 122e5668 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e566b push ecx */
  push32((uint32_t)(ECX));
  /* 122e566c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e566f push edx */
  push32((uint32_t)(EDX));
  /* 122e5670 call dword ptr [0x1230430c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230430c))), 0x122e5676u);
  /* 122e5676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5678 jne 0x122e567e */
  if (!C.zf) goto L_122e567e;
  /* 122e567a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e567c jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e567e:;
  /* 122e567e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5682 jne 0x122e56a6 */
  if (!C.zf) goto L_122e56a6;
  /* 122e5684 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5686 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5688 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e568a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e568c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e568e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e5691 push eax */
  push32((uint32_t)(EAX));
  /* 122e5692 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e5697 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e569a push ecx */
  push32((uint32_t)(ECX));
  /* 122e569b call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e56a1u);
  /* 122e56a1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 122e56a4 jmp 0x122e56ca */
  goto L_122e56ca;
L_122e56a6:;
  /* 122e56a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e56a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e56aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e56ad push edx */
  push32((uint32_t)(EDX));
  /* 122e56ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e56b1 push eax */
  push32((uint32_t)(EAX));
  /* 122e56b2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e56b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e56b7 push ecx */
  push32((uint32_t)(ECX));
  /* 122e56b8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 122e56bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e56c0 push edx */
  push32((uint32_t)(EDX));
  /* 122e56c1 call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e56c7u);
  /* 122e56c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_122e56ca:;
  /* 122e56ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e56cd jmp 0x122e56d1 */
  goto L_122e56d1;
L_122e56cf:;
  /* 122e56cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e56d1:;
  /* 122e56d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 122e56d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e56d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122e56de pop edi */
  EDI = (pop32());
  /* 122e56df pop esi */
  ESI = (pop32());
  /* 122e56e0 pop ebx */
  EBX = (pop32());
  /* 122e56e1 mov esp, ebp */
  ESP = (EBP);
  /* 122e56e3 pop ebp */
  EBP = (pop32());
  /* 122e56e4 ret  */
  ESPCHK(0x122e5540u, _esp0);
  ESP += 4; return;
}

/* FUN_100156f0 @ 0x122e56f0 (11 bytes, 6 insns) */
void f_122e56f0(void) {
  FTRACE(0x122e56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e56f1 mov ebp, esp */
  EBP = (ESP);
  /* 122e56f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e56f6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e56f9 pop ebp */
  EBP = (pop32());
  /* 122e56fa ret  */
  ESPCHK(0x122e56f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10015700 @ 0x122e5700 (147 bytes, 43 insns) */
void f_122e5700(void) {
  FTRACE(0x122e5700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5700 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5701 mov ebp, esp */
  EBP = (ESP);
  /* 122e5703 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5704 cmp dword ptr [0x12301960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e570b jne 0x122e5727 */
  if (!C.zf) goto L_122e5727;
  /* 122e570d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5711 jl 0x122e5722 */
  if ((C.sf!=C.of)) goto L_122e5722;
  /* 122e5713 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5717 jg 0x122e5722 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e5722;
  /* 122e5719 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e571c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e571f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122e5722:;
  /* 122e5722 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5725 jmp 0x122e578f */
  goto L_122e578f;
L_122e5727:;
  /* 122e5727 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e572c call dword ptr [0x12304224] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304224))), 0x122e5732u);
  /* 122e5732 cmp dword ptr [0x12301ad4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301ad4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5739 je 0x122e5759 */
  if (C.zf) goto L_122e5759;
  /* 122e573b push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e5740 call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122e5746u);
  /* 122e5746 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e5748 call 0x122db530 */
  push32(0x122e574du); f_122db530();
  /* 122e574d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5750 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122e5757 jmp 0x122e5760 */
  goto L_122e5760;
L_122e5759:;
  /* 122e5759 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_122e5760:;
  /* 122e5760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5763 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5764 call 0x122e57a0 */
  push32(0x122e5769u); f_122e57a0();
  /* 122e5769 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e576c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 122e576f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5773 je 0x122e5781 */
  if (C.zf) goto L_122e5781;
  /* 122e5775 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 122e5777 call 0x122db5d0 */
  push32(0x122e577cu); f_122db5d0();
  /* 122e577c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e577f jmp 0x122e578c */
  goto L_122e578c;
L_122e5781:;
  /* 122e5781 push 0x12301ae4 */
  push32((uint32_t)(0x12301ae4u));
  /* 122e5786 call dword ptr [0x12304218] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304218))), 0x122e578cu);
L_122e578c:;
  /* 122e578c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_122e578f:;
  /* 122e578f mov esp, ebp */
  ESP = (EBP);
  /* 122e5791 pop ebp */
  EBP = (pop32());
  /* 122e5792 ret  */
  ESPCHK(0x122e5700u, _esp0);
  ESP += 4; return;
}

/* FUN_100157a0 @ 0x122e57a0 (299 bytes, 91 insns) */
void f_122e57a0(void) {
  FTRACE(0x122e57a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e57a0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e57a1 mov ebp, esp */
  EBP = (ESP);
  /* 122e57a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e57a6 cmp dword ptr [0x12301960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e57ad jne 0x122e57cc */
  if (!C.zf) goto L_122e57cc;
  /* 122e57af cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e57b3 jl 0x122e57c4 */
  if ((C.sf!=C.of)) goto L_122e57c4;
  /* 122e57b5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e57b9 jg 0x122e57c4 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e57c4;
  /* 122e57bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e57be add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e57c1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_122e57c4:;
  /* 122e57c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e57c7 jmp 0x122e58c7 */
  goto L_122e58c7;
L_122e57cc:;
  /* 122e57cc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e57d3 jge 0x122e5813 */
  if ((C.sf==C.of)) goto L_122e5813;
  /* 122e57d5 cmp dword ptr [0x12300158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12300158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e57dc jle 0x122e57f1 */
  if ((C.zf||C.sf!=C.of)) goto L_122e57f1;
  /* 122e57de push 1 */
  push32((uint32_t)(0x1u));
  /* 122e57e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e57e3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e57e4 call 0x122dda40 */
  push32(0x122e57e9u); f_122dda40();
  /* 122e57e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e57ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122e57ef jmp 0x122e5805 */
  goto L_122e5805;
L_122e57f1:;
  /* 122e57f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e57f4 mov eax, dword ptr [0x122ffde8] */
  EAX = (r32((uint32_t)(0x122ffde8)));
  /* 122e57f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e57fb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122e57ff and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 122e5802 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_122e5805:;
  /* 122e5805 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5809 jne 0x122e5813 */
  if (!C.zf) goto L_122e5813;
  /* 122e580b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e580e jmp 0x122e58c7 */
  goto L_122e58c7;
L_122e5813:;
  /* 122e5813 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5816 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122e5819 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e581f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e5825 mov eax, dword ptr [0x122ffde8] */
  EAX = (r32((uint32_t)(0x122ffde8)));
  /* 122e582a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e582c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 122e5830 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 122e5836 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e5838 je 0x122e585c */
  if (C.zf) goto L_122e585c;
  /* 122e583a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e583d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122e5840 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e5846 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 122e5849 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 122e584c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 122e584f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 122e5853 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 122e585a jmp 0x122e586d */
  goto L_122e586d;
L_122e585c:;
  /* 122e585c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 122e585f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 122e5862 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 122e5866 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_122e586d:;
  /* 122e586d push 1 */
  push32((uint32_t)(0x1u));
  /* 122e586f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5871 push 3 */
  push32((uint32_t)(0x3u));
  /* 122e5873 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 122e5876 push edx */
  push32((uint32_t)(EDX));
  /* 122e5877 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e587a push eax */
  push32((uint32_t)(EAX));
  /* 122e587b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 122e587e push ecx */
  push32((uint32_t)(ECX));
  /* 122e587f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 122e5884 mov edx, dword ptr [0x12301960] */
  EDX = (r32((uint32_t)(0x12301960)));
  /* 122e588a push edx */
  push32((uint32_t)(EDX));
  /* 122e588b call 0x122dffd0 */
  push32(0x122e5890u); f_122dffd0();
  /* 122e5890 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5893 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e5896 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e589a jne 0x122e58a1 */
  if (!C.zf) goto L_122e58a1;
  /* 122e589c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e589f jmp 0x122e58c7 */
  goto L_122e58c7;
L_122e58a1:;
  /* 122e58a1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e58a5 jne 0x122e58b1 */
  if (!C.zf) goto L_122e58b1;
  /* 122e58a7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e58aa and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e58af jmp 0x122e58c7 */
  goto L_122e58c7;
L_122e58b1:;
  /* 122e58b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e58b4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e58b9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 122e58bc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 122e58c2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 122e58c5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_122e58c7:;
  /* 122e58c7 mov esp, ebp */
  ESP = (EBP);
  /* 122e58c9 pop ebp */
  EBP = (pop32());
  /* 122e58ca ret  */
  ESPCHK(0x122e57a0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x122e58d0 (52 bytes, 19 insns) */
void f_122e58d0(void) {
  FTRACE(0x122e58d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e58d0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e58d4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 122e58d8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 122e58da mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 122e58de jne 0x122e58e9 */
  if (!C.zf) goto L_122e58e9;
  /* 122e58e0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 122e58e4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122e58e6 ret 0x10 */
  ESPCHK(0x122e58d0u, _esp0);
  ESP += 20; return;
L_122e58e9:;
  /* 122e58e9 push ebx */
  push32((uint32_t)(EBX));
  /* 122e58ea mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122e58ec mov ebx, eax */
  EBX = (EAX);
  /* 122e58ee mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e58f2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122e58f6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e58f8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e58fc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 122e58fe add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5900 pop ebx */
  EBX = (pop32());
  /* 122e5901 ret 0x10 */
  ESPCHK(0x122e58d0u, _esp0);
  ESP += 20; return;
}

/* FUN_10015910 @ 0x122e5910 (46 bytes, 18 insns) */
void f_122e5910(void) {
  FTRACE(0x122e5910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5910 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5911 mov ebp, esp */
  EBP = (ESP);
  /* 122e5913 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5914 push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e5916 call 0x122db530 */
  push32(0x122e591bu); f_122db530();
  /* 122e591b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e591e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5921 push eax */
  push32((uint32_t)(EAX));
  /* 122e5922 call 0x122e5940 */
  push32(0x122e5927u); f_122e5940();
  /* 122e5927 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e592a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e592d push 0xc */
  push32((uint32_t)(0xcu));
  /* 122e592f call 0x122db5d0 */
  push32(0x122e5934u); f_122db5d0();
  /* 122e5934 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5937 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e593a mov esp, ebp */
  ESP = (EBP);
  /* 122e593c pop ebp */
  EBP = (pop32());
  /* 122e593d ret  */
  ESPCHK(0x122e5910u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x122e5940 (198 bytes, 69 insns) */
void f_122e5940(void) {
  FTRACE(0x122e5940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5940 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5941 mov ebp, esp */
  EBP = (ESP);
  /* 122e5943 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5946 mov eax, dword ptr [0x12301770] */
  EAX = (r32((uint32_t)(0x12301770)));
  /* 122e594b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e594e cmp dword ptr [0x12303260], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12303260))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5955 jne 0x122e595e */
  if (!C.zf) goto L_122e595e;
  /* 122e5957 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5959 jmp 0x122e5a02 */
  goto L_122e5a02;
L_122e595e:;
  /* 122e595e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5962 jne 0x122e5986 */
  if (!C.zf) goto L_122e5986;
  /* 122e5964 cmp dword ptr [0x12301778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e596b je 0x122e5986 */
  if (C.zf) goto L_122e5986;
  /* 122e596d call 0x122e5a60 */
  push32(0x122e5972u); f_122e5a60();
  /* 122e5972 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5974 je 0x122e597d */
  if (C.zf) goto L_122e597d;
  /* 122e5976 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5978 jmp 0x122e5a02 */
  goto L_122e5a02;
L_122e597d:;
  /* 122e597d mov ecx, dword ptr [0x12301770] */
  ECX = (r32((uint32_t)(0x12301770)));
  /* 122e5983 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_122e5986:;
  /* 122e5986 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e598a je 0x122e5a00 */
  if (C.zf) goto L_122e5a00;
  /* 122e598c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5990 je 0x122e5a00 */
  if (C.zf) goto L_122e5a00;
  /* 122e5992 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5995 push edx */
  push32((uint32_t)(EDX));
  /* 122e5996 call 0x122d9fb0 */
  push32(0x122e599bu); f_122d9fb0();
  /* 122e599b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e599e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e59a1:;
  /* 122e59a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59a4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e59a7 je 0x122e5a00 */
  if (C.zf) goto L_122e5a00;
  /* 122e59a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59ac mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e59ae push edx */
  push32((uint32_t)(EDX));
  /* 122e59af call 0x122d9fb0 */
  push32(0x122e59b4u); f_122d9fb0();
  /* 122e59b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e59b7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e59ba jbe 0x122e59f5 */
  if ((C.cf||C.zf)) goto L_122e59f5;
  /* 122e59bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59bf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e59c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e59c4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 122e59c8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e59cb jne 0x122e59f5 */
  if (!C.zf) goto L_122e59f5;
  /* 122e59cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e59d0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e59d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e59d4 push edx */
  push32((uint32_t)(EDX));
  /* 122e59d5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59d8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e59da push ecx */
  push32((uint32_t)(ECX));
  /* 122e59db call 0x122e5a10 */
  push32(0x122e59e0u); f_122e5a10();
  /* 122e59e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e59e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e59e5 jne 0x122e59f5 */
  if (!C.zf) goto L_122e59f5;
  /* 122e59e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59ea mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e59ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e59ef lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 122e59f3 jmp 0x122e5a02 */
  goto L_122e5a02;
L_122e59f5:;
  /* 122e59f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e59f8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e59fb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e59fe jmp 0x122e59a1 */
  goto L_122e59a1;
L_122e5a00:;
  /* 122e5a00 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e5a02:;
  /* 122e5a02 mov esp, ebp */
  ESP = (EBP);
  /* 122e5a04 pop ebp */
  EBP = (pop32());
  /* 122e5a05 ret  */
  ESPCHK(0x122e5940u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x122e5a10 (79 bytes, 32 insns) */
void f_122e5a10(void) {
  FTRACE(0x122e5a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5a10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5a11 mov ebp, esp */
  EBP = (ESP);
  /* 122e5a13 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5a14 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5a18 jne 0x122e5a1e */
  if (!C.zf) goto L_122e5a1e;
  /* 122e5a1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5a1c jmp 0x122e5a5b */
  goto L_122e5a5b;
L_122e5a1e:;
  /* 122e5a1e mov eax, dword ptr [0x12301ae8] */
  EAX = (r32((uint32_t)(0x12301ae8)));
  /* 122e5a23 push eax */
  push32((uint32_t)(EAX));
  /* 122e5a24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5a27 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5a28 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5a2b push edx */
  push32((uint32_t)(EDX));
  /* 122e5a2c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5a2f push eax */
  push32((uint32_t)(EAX));
  /* 122e5a30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5a33 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5a34 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5a36 mov edx, dword ptr [0x12301d84] */
  EDX = (r32((uint32_t)(0x12301d84)));
  /* 122e5a3c push edx */
  push32((uint32_t)(EDX));
  /* 122e5a3d call 0x122e5b10 */
  push32(0x122e5a42u); f_122e5b10();
  /* 122e5a42 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5a45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e5a48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5a4c jne 0x122e5a55 */
  if (!C.zf) goto L_122e5a55;
  /* 122e5a4e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 122e5a53 jmp 0x122e5a5b */
  goto L_122e5a5b;
L_122e5a55:;
  /* 122e5a55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5a58 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_122e5a5b:;
  /* 122e5a5b mov esp, ebp */
  ESP = (EBP);
  /* 122e5a5d pop ebp */
  EBP = (pop32());
  /* 122e5a5e ret  */
  ESPCHK(0x122e5a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015a60 @ 0x122e5a60 (174 bytes, 66 insns) */
void f_122e5a60(void) {
  FTRACE(0x122e5a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5a60 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5a61 mov ebp, esp */
  EBP = (ESP);
  /* 122e5a63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5a66 mov eax, dword ptr [0x12301778] */
  EAX = (r32((uint32_t)(0x12301778)));
  /* 122e5a6b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_122e5a6e:;
  /* 122e5a6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5a71 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5a74 je 0x122e5b08 */
  if (C.zf) goto L_122e5b08;
  /* 122e5a7a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5a80 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5a82 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e5a84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5a87 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e5a89 push eax */
  push32((uint32_t)(EAX));
  /* 122e5a8a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5a8c push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5a8e call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e5a94u);
  /* 122e5a94 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e5a97 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5a9b jne 0x122e5aa2 */
  if (!C.zf) goto L_122e5aa2;
  /* 122e5a9d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e5aa0 jmp 0x122e5b0a */
  goto L_122e5b0a;
L_122e5aa2:;
  /* 122e5aa2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122e5aa4 push 0x122fe2e4 */
  push32((uint32_t)(0x122fe2e4u));
  /* 122e5aa9 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e5aab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e5aae push ecx */
  push32((uint32_t)(ECX));
  /* 122e5aaf call 0x122d7180 */
  push32(0x122e5ab4u); f_122d7180();
  /* 122e5ab4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5ab7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e5aba cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5abe jne 0x122e5ac5 */
  if (!C.zf) goto L_122e5ac5;
  /* 122e5ac0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e5ac3 jmp 0x122e5b0a */
  goto L_122e5b0a;
L_122e5ac5:;
  /* 122e5ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5ac9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e5acc push edx */
  push32((uint32_t)(EDX));
  /* 122e5acd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e5ad0 push eax */
  push32((uint32_t)(EAX));
  /* 122e5ad1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e5ad3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5ad6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e5ad8 push edx */
  push32((uint32_t)(EDX));
  /* 122e5ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5adb push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5add call dword ptr [0x1230427c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230427c))), 0x122e5ae3u);
  /* 122e5ae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5ae5 jne 0x122e5aec */
  if (!C.zf) goto L_122e5aec;
  /* 122e5ae7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e5aea jmp 0x122e5b0a */
  goto L_122e5b0a;
L_122e5aec:;
  /* 122e5aec push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5aee mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e5af1 push eax */
  push32((uint32_t)(EAX));
  /* 122e5af2 call 0x122e5f60 */
  push32(0x122e5af7u); f_122e5f60();
  /* 122e5af7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5afa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5afd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5b00 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e5b03 jmp 0x122e5a6e */
  goto L_122e5a6e;
L_122e5b08:;
  /* 122e5b08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e5b0a:;
  /* 122e5b0a mov esp, ebp */
  ESP = (EBP);
  /* 122e5b0c pop ebp */
  EBP = (pop32());
  /* 122e5b0d ret  */
  ESPCHK(0x122e5a60u, _esp0);
  ESP += 4; return;
}

/* FUN_10015b10 @ 0x122e5b10 (970 bytes, 340 insns) */
void f_122e5b10(void) {
  FTRACE(0x122e5b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5b10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5b11 mov ebp, esp */
  EBP = (ESP);
  /* 122e5b13 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 122e5b15 push 0x122fe338 */
  push32((uint32_t)(0x122fe338u));
  /* 122e5b1a push 0x122e2a00 */
  push32((uint32_t)(0x122e2a00u));
  /* 122e5b1f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 122e5b25 push eax */
  push32((uint32_t)(EAX));
  /* 122e5b26 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 122e5b2d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5b30 push ebx */
  push32((uint32_t)(EBX));
  /* 122e5b31 push esi */
  push32((uint32_t)(ESI));
  /* 122e5b32 push edi */
  push32((uint32_t)(EDI));
  /* 122e5b33 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e5b36 cmp dword ptr [0x12301abc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301abc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5b3d jne 0x122e5b96 */
  if (!C.zf) goto L_122e5b96;
  /* 122e5b3f push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5b41 push 0x122fda10 */
  push32((uint32_t)(0x122fda10u));
  /* 122e5b46 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5b48 push 0x122fda10 */
  push32((uint32_t)(0x122fda10u));
  /* 122e5b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5b4f push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5b51 call dword ptr [0x12304308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304308))), 0x122e5b57u);
  /* 122e5b57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5b59 je 0x122e5b67 */
  if (C.zf) goto L_122e5b67;
  /* 122e5b5b mov dword ptr [0x12301abc], 1 */
  w32((uint32_t)(0x12301abc), (0x1u));
  /* 122e5b65 jmp 0x122e5b96 */
  goto L_122e5b96;
L_122e5b67:;
  /* 122e5b67 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5b69 push 0x122fda0c */
  push32((uint32_t)(0x122fda0cu));
  /* 122e5b6e push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5b70 push 0x122fda0c */
  push32((uint32_t)(0x122fda0cu));
  /* 122e5b75 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5b77 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5b79 call dword ptr [0x12304310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304310))), 0x122e5b7fu);
  /* 122e5b7f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5b81 je 0x122e5b8f */
  if (C.zf) goto L_122e5b8f;
  /* 122e5b83 mov dword ptr [0x12301abc], 2 */
  w32((uint32_t)(0x12301abc), (0x2u));
  /* 122e5b8d jmp 0x122e5b96 */
  goto L_122e5b96;
L_122e5b8f:;
  /* 122e5b8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5b91 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5b96:;
  /* 122e5b96 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5b9a jle 0x122e5baf */
  if ((C.zf||C.sf!=C.of)) goto L_122e5baf;
  /* 122e5b9c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5b9f push eax */
  push32((uint32_t)(EAX));
  /* 122e5ba0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5ba4 call 0x122e5f10 */
  push32(0x122e5ba9u); f_122e5f10();
  /* 122e5ba9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5bac mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_122e5baf:;
  /* 122e5baf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5bb3 jle 0x122e5bc8 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5bc8;
  /* 122e5bb5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e5bb8 push edx */
  push32((uint32_t)(EDX));
  /* 122e5bb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5bbc push eax */
  push32((uint32_t)(EAX));
  /* 122e5bbd call 0x122e5f10 */
  push32(0x122e5bc2u); f_122e5f10();
  /* 122e5bc2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5bc5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_122e5bc8:;
  /* 122e5bc8 cmp dword ptr [0x12301abc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x12301abc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5bcf jne 0x122e5bf4 */
  if (!C.zf) goto L_122e5bf4;
  /* 122e5bd1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e5bd4 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5bd5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5bd8 push edx */
  push32((uint32_t)(EDX));
  /* 122e5bd9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5bdc push eax */
  push32((uint32_t)(EAX));
  /* 122e5bdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5be0 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5be1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5be4 push edx */
  push32((uint32_t)(EDX));
  /* 122e5be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5be8 push eax */
  push32((uint32_t)(EAX));
  /* 122e5be9 call dword ptr [0x12304310] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304310))), 0x122e5befu);
  /* 122e5bef jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5bf4:;
  /* 122e5bf4 cmp dword ptr [0x12301abc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x12301abc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5bfb jne 0x122e5ef2 */
  if (!C.zf) goto L_122e5ef2;
  /* 122e5c01 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c05 jne 0x122e5c10 */
  if (!C.zf) goto L_122e5c10;
  /* 122e5c07 mov ecx, dword ptr [0x12301970] */
  ECX = (r32((uint32_t)(0x12301970)));
  /* 122e5c0d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_122e5c10:;
  /* 122e5c10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c14 je 0x122e5c20 */
  if (C.zf) goto L_122e5c20;
  /* 122e5c16 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c1a jne 0x122e5d9c */
  if (!C.zf) goto L_122e5d9c;
L_122e5c20:;
  /* 122e5c20 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5c23 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c26 jne 0x122e5c32 */
  if (!C.zf) goto L_122e5c32;
  /* 122e5c28 mov eax, 2 */
  EAX = (0x2u);
  /* 122e5c2d jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5c32:;
  /* 122e5c32 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c36 jle 0x122e5c42 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5c42;
  /* 122e5c38 mov eax, 1 */
  EAX = (0x1u);
  /* 122e5c3d jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5c42:;
  /* 122e5c42 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c46 jle 0x122e5c52 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5c52;
  /* 122e5c48 mov eax, 3 */
  EAX = (0x3u);
  /* 122e5c4d jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5c52:;
  /* 122e5c52 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 122e5c55 push eax */
  push32((uint32_t)(EAX));
  /* 122e5c56 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e5c59 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5c5a call dword ptr [0x123042c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x123042c0))), 0x122e5c60u);
  /* 122e5c60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5c62 jne 0x122e5c6b */
  if (!C.zf) goto L_122e5c6b;
  /* 122e5c64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5c66 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5c6b:;
  /* 122e5c6b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c6f jne 0x122e5c77 */
  if (!C.zf) goto L_122e5c77;
  /* 122e5c71 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c75 je 0x122e5ca4 */
  if (C.zf) goto L_122e5ca4;
L_122e5c77:;
  /* 122e5c77 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c7b jne 0x122e5c83 */
  if (!C.zf) goto L_122e5c83;
  /* 122e5c7d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5c81 je 0x122e5ca4 */
  if (C.zf) goto L_122e5ca4;
L_122e5c83:;
  /* 122e5c83 push 0x122fe2f8 */
  push32((uint32_t)(0x122fe2f8u));
  /* 122e5c88 push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5c8a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 122e5c8f push 0x122fe2f0 */
  push32((uint32_t)(0x122fe2f0u));
  /* 122e5c94 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e5c96 call 0x122d5120 */
  push32(0x122e5c9bu); f_122d5120();
  /* 122e5c9b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5c9e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5ca1 jne 0x122e5ca4 */
  if (!C.zf) goto L_122e5ca4;
  /* 122e5ca3 int3  */
  x86_unimpl("int3 @ 0x122e5ca3");
L_122e5ca4:;
  /* 122e5ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5ca6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5ca8 jne 0x122e5c6b */
  if (!C.zf) goto L_122e5c6b;
  /* 122e5caa cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5cae jle 0x122e5d23 */
  if ((C.zf||C.sf!=C.of)) goto L_122e5d23;
  /* 122e5cb0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5cb4 jae 0x122e5cc0 */
  if (!C.cf) goto L_122e5cc0;
  /* 122e5cb6 mov eax, 3 */
  EAX = (0x3u);
  /* 122e5cbb jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5cc0:;
  /* 122e5cc0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 122e5cc3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 122e5cc6 jmp 0x122e5cd1 */
  goto L_122e5cd1;
L_122e5cc8:;
  /* 122e5cc8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5ccb add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5cce mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_122e5cd1:;
  /* 122e5cd1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5cd4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5cd6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e5cd8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5cda je 0x122e5d19 */
  if (C.zf) goto L_122e5d19;
  /* 122e5cdc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5cdf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5ce1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 122e5ce4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5ce6 je 0x122e5d19 */
  if (C.zf) goto L_122e5d19;
  /* 122e5ce8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5ceb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5ced mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e5cef mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5cf2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5cf4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e5cf6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5cf8 jl 0x122e5d17 */
  if ((C.sf!=C.of)) goto L_122e5d17;
  /* 122e5cfa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5cff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e5d01 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d04 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5d06 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122e5d09 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5d0b jg 0x122e5d17 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e5d17;
  /* 122e5d0d mov eax, 2 */
  EAX = (0x2u);
  /* 122e5d12 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5d17:;
  /* 122e5d17 jmp 0x122e5cc8 */
  goto L_122e5cc8;
L_122e5d19:;
  /* 122e5d19 mov eax, 3 */
  EAX = (0x3u);
  /* 122e5d1e jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5d23:;
  /* 122e5d23 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5d27 jle 0x122e5d9c */
  if ((C.zf||C.sf!=C.of)) goto L_122e5d9c;
  /* 122e5d29 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5d2d jae 0x122e5d39 */
  if (!C.cf) goto L_122e5d39;
  /* 122e5d2f mov eax, 1 */
  EAX = (0x1u);
  /* 122e5d34 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5d39:;
  /* 122e5d39 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 122e5d3c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 122e5d3f jmp 0x122e5d4a */
  goto L_122e5d4a;
L_122e5d41:;
  /* 122e5d41 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d44 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5d47 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_122e5d4a:;
  /* 122e5d4a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5d4f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e5d51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5d53 je 0x122e5d92 */
  if (C.zf) goto L_122e5d92;
  /* 122e5d55 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d58 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5d5a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 122e5d5d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e5d5f je 0x122e5d92 */
  if (C.zf) goto L_122e5d92;
  /* 122e5d61 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5d64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5d66 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 122e5d68 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d6b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 122e5d6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 122e5d6f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5d71 jl 0x122e5d90 */
  if ((C.sf!=C.of)) goto L_122e5d90;
  /* 122e5d73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5d76 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e5d78 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e5d7a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 122e5d7d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5d7f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 122e5d82 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5d84 jg 0x122e5d90 */
  if ((!C.zf&&C.sf==C.of)) goto L_122e5d90;
  /* 122e5d86 mov eax, 2 */
  EAX = (0x2u);
  /* 122e5d8b jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5d90:;
  /* 122e5d90 jmp 0x122e5d41 */
  goto L_122e5d41;
L_122e5d92:;
  /* 122e5d92 mov eax, 1 */
  EAX = (0x1u);
  /* 122e5d97 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5d9c:;
  /* 122e5d9c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5d9e push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5da0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5da3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5da4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5da7 push edx */
  push32((uint32_t)(EDX));
  /* 122e5da8 push 9 */
  push32((uint32_t)(0x9u));
  /* 122e5daa mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e5dad push eax */
  push32((uint32_t)(EAX));
  /* 122e5dae call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e5db4u);
  /* 122e5db4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 122e5db7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5dbb jne 0x122e5dc4 */
  if (!C.zf) goto L_122e5dc4;
  /* 122e5dbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5dbf jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5dc4:;
  /* 122e5dc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 122e5dcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e5dce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e5dd0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5dd3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e5dd5 call 0x122da320 */
  push32(0x122e5ddau); f_122da320();
  /* 122e5dda mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 122e5ddd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e5de0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 122e5de3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 122e5de6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e5ded jmp 0x122e5e06 */
  goto L_122e5e06;
  /* 122e5def mov eax, 1 */
  EAX = (0x1u);
  /* 122e5df4 ret  */
  ESPCHK(0x122e5b10u, _esp0);
  ESP += 4; return;
  /* 122e5df5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e5df8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 122e5dff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e5e06:;
  /* 122e5e06 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5e0a jne 0x122e5e13 */
  if (!C.zf) goto L_122e5e13;
  /* 122e5e0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5e0e jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5e13:;
  /* 122e5e13 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e5e16 push edx */
  push32((uint32_t)(EDX));
  /* 122e5e17 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e5e1a push eax */
  push32((uint32_t)(EAX));
  /* 122e5e1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 122e5e1e push ecx */
  push32((uint32_t)(ECX));
  /* 122e5e1f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 122e5e22 push edx */
  push32((uint32_t)(EDX));
  /* 122e5e23 push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5e25 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e5e28 push eax */
  push32((uint32_t)(EAX));
  /* 122e5e29 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e5e2fu);
  /* 122e5e2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5e31 jne 0x122e5e3a */
  if (!C.zf) goto L_122e5e3a;
  /* 122e5e33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5e35 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5e3a:;
  /* 122e5e3a push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5e3c push 0 */
  push32((uint32_t)(0x0u));
  /* 122e5e3e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e5e41 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5e42 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5e45 push edx */
  push32((uint32_t)(EDX));
  /* 122e5e46 push 9 */
  push32((uint32_t)(0x9u));
  /* 122e5e48 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e5e4b push eax */
  push32((uint32_t)(EAX));
  /* 122e5e4c call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e5e52u);
  /* 122e5e52 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 122e5e55 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5e59 jne 0x122e5e62 */
  if (!C.zf) goto L_122e5e62;
  /* 122e5e5b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5e5d jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5e62:;
  /* 122e5e62 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 122e5e69 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e5e6c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 122e5e6e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5e71 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 122e5e73 call 0x122da320 */
  push32(0x122e5e78u); f_122da320();
  /* 122e5e78 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 122e5e7b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 122e5e7e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 122e5e81 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 122e5e84 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 122e5e8b jmp 0x122e5ea4 */
  goto L_122e5ea4;
  /* 122e5e8d mov eax, 1 */
  EAX = (0x1u);
  /* 122e5e92 ret  */
  ESPCHK(0x122e5b10u, _esp0);
  ESP += 4; return;
  /* 122e5e93 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 122e5e96 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 122e5e9d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_122e5ea4:;
  /* 122e5ea4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5ea8 jne 0x122e5eae */
  if (!C.zf) goto L_122e5eae;
  /* 122e5eaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5eac jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5eae:;
  /* 122e5eae mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e5eb1 push edx */
  push32((uint32_t)(EDX));
  /* 122e5eb2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e5eb5 push eax */
  push32((uint32_t)(EAX));
  /* 122e5eb6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 122e5eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5eba mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 122e5ebd push edx */
  push32((uint32_t)(EDX));
  /* 122e5ebe push 1 */
  push32((uint32_t)(0x1u));
  /* 122e5ec0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 122e5ec3 push eax */
  push32((uint32_t)(EAX));
  /* 122e5ec4 call dword ptr [0x1230428c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1230428c))), 0x122e5ecau);
  /* 122e5eca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5ecc jne 0x122e5ed2 */
  if (!C.zf) goto L_122e5ed2;
  /* 122e5ece xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5ed0 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5ed2:;
  /* 122e5ed2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 122e5ed5 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5ed6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 122e5ed9 push edx */
  push32((uint32_t)(EDX));
  /* 122e5eda mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 122e5edd push eax */
  push32((uint32_t)(EAX));
  /* 122e5ede mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 122e5ee1 push ecx */
  push32((uint32_t)(ECX));
  /* 122e5ee2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5ee5 push edx */
  push32((uint32_t)(EDX));
  /* 122e5ee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5ee9 push eax */
  push32((uint32_t)(EAX));
  /* 122e5eea call dword ptr [0x12304308] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304308))), 0x122e5ef0u);
  /* 122e5ef0 jmp 0x122e5ef4 */
  goto L_122e5ef4;
L_122e5ef2:;
  /* 122e5ef2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e5ef4:;
  /* 122e5ef4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 122e5ef7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e5efa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 122e5f01 pop edi */
  EDI = (pop32());
  /* 122e5f02 pop esi */
  ESI = (pop32());
  /* 122e5f03 pop ebx */
  EBX = (pop32());
  /* 122e5f04 mov esp, ebp */
  ESP = (EBP);
  /* 122e5f06 pop ebp */
  EBP = (pop32());
  /* 122e5f07 ret  */
  ESPCHK(0x122e5b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f10 @ 0x122e5f10 (80 bytes, 32 insns) */
void f_122e5f10(void) {
  FTRACE(0x122e5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5f11 mov ebp, esp */
  EBP = (ESP);
  /* 122e5f13 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5f16 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e5f19 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e5f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5f1f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122e5f22:;
  /* 122e5f22 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e5f25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e5f28 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5f2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e5f2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5f30 je 0x122e5f47 */
  if (C.zf) goto L_122e5f47;
  /* 122e5f32 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5f35 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e5f38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5f3a je 0x122e5f47 */
  if (C.zf) goto L_122e5f47;
  /* 122e5f3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5f3f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5f42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e5f45 jmp 0x122e5f22 */
  goto L_122e5f22;
L_122e5f47:;
  /* 122e5f47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5f4a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 122e5f4d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e5f4f jne 0x122e5f59 */
  if (!C.zf) goto L_122e5f59;
  /* 122e5f51 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e5f54 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5f57 jmp 0x122e5f5c */
  goto L_122e5f5c;
L_122e5f59:;
  /* 122e5f59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_122e5f5c:;
  /* 122e5f5c mov esp, ebp */
  ESP = (EBP);
  /* 122e5f5e pop ebp */
  EBP = (pop32());
  /* 122e5f5f ret  */
  ESPCHK(0x122e5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10015f60 @ 0x122e5f60 (736 bytes, 224 insns) */
void f_122e5f60(void) {
  FTRACE(0x122e5f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e5f60 push ebp */
  push32((uint32_t)(EBP));
  /* 122e5f61 mov ebp, esp */
  EBP = (ESP);
  /* 122e5f63 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5f66 push esi */
  push32((uint32_t)(ESI));
  /* 122e5f67 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5f6b je 0x122e5f8c */
  if (C.zf) goto L_122e5f8c;
  /* 122e5f6d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 122e5f6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5f72 push eax */
  push32((uint32_t)(EAX));
  /* 122e5f73 call 0x122e63b0 */
  push32(0x122e5f78u); f_122e63b0();
  /* 122e5f78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5f7b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 122e5f7e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5f82 je 0x122e5f8c */
  if (C.zf) goto L_122e5f8c;
  /* 122e5f84 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e5f87 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5f8a jne 0x122e5f94 */
  if (!C.zf) goto L_122e5f94;
L_122e5f8c:;
  /* 122e5f8c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e5f8f jmp 0x122e623b */
  goto L_122e623b;
L_122e5f94:;
  /* 122e5f94 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e5f97 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 122e5f9b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e5f9d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e5f9f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 122e5fa0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 122e5fa3 mov ecx, dword ptr [0x12301770] */
  ECX = (r32((uint32_t)(0x12301770)));
  /* 122e5fa9 cmp ecx, dword ptr [0x12301774] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x12301774))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5faf jne 0x122e5fc5 */
  if (!C.zf) goto L_122e5fc5;
  /* 122e5fb1 mov edx, dword ptr [0x12301770] */
  EDX = (r32((uint32_t)(0x12301770)));
  /* 122e5fb7 push edx */
  push32((uint32_t)(EDX));
  /* 122e5fb8 call 0x122e62c0 */
  push32(0x122e5fbdu); f_122e62c0();
  /* 122e5fbd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e5fc0 mov dword ptr [0x12301770], eax */
  w32((uint32_t)(0x12301770), (EAX));
L_122e5fc5:;
  /* 122e5fc5 cmp dword ptr [0x12301770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5fcc jne 0x122e6085 */
  if (!C.zf) goto L_122e6085;
  /* 122e5fd2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5fd6 je 0x122e5ff7 */
  if (C.zf) goto L_122e5ff7;
  /* 122e5fd8 cmp dword ptr [0x12301778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5fdf je 0x122e5ff7 */
  if (C.zf) goto L_122e5ff7;
  /* 122e5fe1 call 0x122e5a60 */
  push32(0x122e5fe6u); f_122e5a60();
  /* 122e5fe6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e5fe8 je 0x122e5ff2 */
  if (C.zf) goto L_122e5ff2;
  /* 122e5fea or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e5fed jmp 0x122e623b */
  goto L_122e623b;
L_122e5ff2:;
  /* 122e5ff2 jmp 0x122e6085 */
  goto L_122e6085;
L_122e5ff7:;
  /* 122e5ff7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e5ffb je 0x122e6004 */
  if (C.zf) goto L_122e6004;
  /* 122e5ffd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e5fff jmp 0x122e623b */
  goto L_122e623b;
L_122e6004:;
  /* 122e6004 cmp dword ptr [0x12301770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e600b jne 0x122e6044 */
  if (!C.zf) goto L_122e6044;
  /* 122e600d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 122e6012 push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e6017 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e6019 push 4 */
  push32((uint32_t)(0x4u));
  /* 122e601b call 0x122d7180 */
  push32(0x122e6020u); f_122d7180();
  /* 122e6020 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6023 mov dword ptr [0x12301770], eax */
  w32((uint32_t)(0x12301770), (EAX));
  /* 122e6028 cmp dword ptr [0x12301770], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301770))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e602f jne 0x122e6039 */
  if (!C.zf) goto L_122e6039;
  /* 122e6031 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e6034 jmp 0x122e623b */
  goto L_122e623b;
L_122e6039:;
  /* 122e6039 mov eax, dword ptr [0x12301770] */
  EAX = (r32((uint32_t)(0x12301770)));
  /* 122e603e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_122e6044:;
  /* 122e6044 cmp dword ptr [0x12301778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e604b jne 0x122e6085 */
  if (!C.zf) goto L_122e6085;
  /* 122e604d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 122e6052 push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e6057 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e6059 push 4 */
  push32((uint32_t)(0x4u));
  /* 122e605b call 0x122d7180 */
  push32(0x122e6060u); f_122d7180();
  /* 122e6060 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6063 mov dword ptr [0x12301778], eax */
  w32((uint32_t)(0x12301778), (EAX));
  /* 122e6068 cmp dword ptr [0x12301778], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301778))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e606f jne 0x122e6079 */
  if (!C.zf) goto L_122e6079;
  /* 122e6071 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e6074 jmp 0x122e623b */
  goto L_122e623b;
L_122e6079:;
  /* 122e6079 mov ecx, dword ptr [0x12301778] */
  ECX = (r32((uint32_t)(0x12301778)));
  /* 122e607f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_122e6085:;
  /* 122e6085 mov edx, dword ptr [0x12301770] */
  EDX = (r32((uint32_t)(0x12301770)));
  /* 122e608b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 122e608e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e6091 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e6094 push eax */
  push32((uint32_t)(EAX));
  /* 122e6095 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6098 push ecx */
  push32((uint32_t)(ECX));
  /* 122e6099 call 0x122e6240 */
  push32(0x122e609eu); f_122e6240();
  /* 122e609e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e60a1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e60a4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e60a8 jl 0x122e6141 */
  if ((C.sf!=C.of)) goto L_122e6141;
  /* 122e60ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e60b1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e60b4 je 0x122e6141 */
  if (C.zf) goto L_122e6141;
  /* 122e60ba cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e60be je 0x122e6133 */
  if (C.zf) goto L_122e6133;
  /* 122e60c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e60c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e60c5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e60c8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 122e60cb push edx */
  push32((uint32_t)(EDX));
  /* 122e60cc call 0x122d7c10 */
  push32(0x122e60d1u); f_122d7c10();
  /* 122e60d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e60d4 jmp 0x122e60df */
  goto L_122e60df;
L_122e60d6:;
  /* 122e60d6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e60d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e60dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e60df:;
  /* 122e60df mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e60e2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e60e5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e60e9 je 0x122e6100 */
  if (C.zf) goto L_122e6100;
  /* 122e60eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e60ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e60f1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e60f4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 122e60f7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 122e60fb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 122e60fe jmp 0x122e60d6 */
  goto L_122e60d6;
L_122e6100:;
  /* 122e6100 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 122e6105 push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e610a push 2 */
  push32((uint32_t)(0x2u));
  /* 122e610c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e610f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122e6112 push eax */
  push32((uint32_t)(EAX));
  /* 122e6113 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e6116 push ecx */
  push32((uint32_t)(ECX));
  /* 122e6117 call 0x122d7610 */
  push32(0x122e611cu); f_122d7610();
  /* 122e611c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e611f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e6122 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6126 je 0x122e6131 */
  if (C.zf) goto L_122e6131;
  /* 122e6128 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e612b mov dword ptr [0x12301770], edx */
  w32((uint32_t)(0x12301770), (EDX));
L_122e6131:;
  /* 122e6131 jmp 0x122e613f */
  goto L_122e613f;
L_122e6133:;
  /* 122e6133 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6136 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e6139 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e613c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_122e613f:;
  /* 122e613f jmp 0x122e61b4 */
  goto L_122e61b4;
L_122e6141:;
  /* 122e6141 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6145 jne 0x122e61ad */
  if (!C.zf) goto L_122e61ad;
  /* 122e6147 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e614b jge 0x122e6155 */
  if ((C.sf==C.of)) goto L_122e6155;
  /* 122e614d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6150 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e6152 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_122e6155:;
  /* 122e6155 push 0xce */
  push32((uint32_t)(0xceu));
  /* 122e615a push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e615f push 2 */
  push32((uint32_t)(0x2u));
  /* 122e6161 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6164 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 122e616b push edx */
  push32((uint32_t)(EDX));
  /* 122e616c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e616f push eax */
  push32((uint32_t)(EAX));
  /* 122e6170 call 0x122d7610 */
  push32(0x122e6175u); f_122d7610();
  /* 122e6175 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6178 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e617b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e617f jne 0x122e6189 */
  if (!C.zf) goto L_122e6189;
  /* 122e6181 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e6184 jmp 0x122e623b */
  goto L_122e623b;
L_122e6189:;
  /* 122e6189 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e618c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e618f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6192 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 122e6195 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6198 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e619b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 122e61a3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e61a6 mov dword ptr [0x12301770], eax */
  w32((uint32_t)(0x12301770), (EAX));
  /* 122e61ab jmp 0x122e61b4 */
  goto L_122e61b4;
L_122e61ad:;
  /* 122e61ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e61af jmp 0x122e623b */
  goto L_122e623b;
L_122e61b4:;
  /* 122e61b4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e61b8 je 0x122e6239 */
  if (C.zf) goto L_122e6239;
  /* 122e61ba push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 122e61bf push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e61c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e61c6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e61c9 push ecx */
  push32((uint32_t)(ECX));
  /* 122e61ca call 0x122d9fb0 */
  push32(0x122e61cfu); f_122d9fb0();
  /* 122e61cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e61d2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e61d5 push eax */
  push32((uint32_t)(EAX));
  /* 122e61d6 call 0x122d7180 */
  push32(0x122e61dbu); f_122d7180();
  /* 122e61db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e61de mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 122e61e1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e61e5 je 0x122e6239 */
  if (C.zf) goto L_122e6239;
  /* 122e61e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e61ea push edx */
  push32((uint32_t)(EDX));
  /* 122e61eb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e61ee push eax */
  push32((uint32_t)(EAX));
  /* 122e61ef call 0x122da130 */
  push32(0x122e61f4u); f_122da130();
  /* 122e61f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e61f7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 122e61fa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e61fd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e6200 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6202 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 122e6205 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6208 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 122e620b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e620e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6211 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e6214 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 122e6217 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 122e6219 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e621b not edx */
  EDX = (~(EDX));
  /* 122e621d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 122e6220 push edx */
  push32((uint32_t)(EDX));
  /* 122e6221 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e6224 push eax */
  push32((uint32_t)(EAX));
  /* 122e6225 call dword ptr [0x12304314] */
  call_ind((uint32_t)(r32((uint32_t)(0x12304314))), 0x122e622bu);
  /* 122e622b push 2 */
  push32((uint32_t)(0x2u));
  /* 122e622d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e6230 push ecx */
  push32((uint32_t)(ECX));
  /* 122e6231 call 0x122d7c10 */
  push32(0x122e6236u); f_122d7c10();
  /* 122e6236 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e6239:;
  /* 122e6239 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e623b:;
  /* 122e623b pop esi */
  ESI = (pop32());
  /* 122e623c mov esp, ebp */
  ESP = (EBP);
  /* 122e623e pop ebp */
  EBP = (pop32());
  /* 122e623f ret  */
  ESPCHK(0x122e5f60u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x122e6240 (124 bytes, 47 insns) */
void f_122e6240(void) {
  FTRACE(0x122e6240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e6240 push ebp */
  push32((uint32_t)(EBP));
  /* 122e6241 mov ebp, esp */
  EBP = (ESP);
  /* 122e6243 push ecx */
  push32((uint32_t)(ECX));
  /* 122e6244 mov eax, dword ptr [0x12301770] */
  EAX = (r32((uint32_t)(0x12301770)));
  /* 122e6249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 122e624c jmp 0x122e6257 */
  goto L_122e6257;
L_122e624e:;
  /* 122e624e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6251 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6254 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_122e6257:;
  /* 122e6257 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e625a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e625d je 0x122e62aa */
  if (C.zf) goto L_122e62aa;
  /* 122e625f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e6262 push eax */
  push32((uint32_t)(EAX));
  /* 122e6263 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6266 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e6268 push edx */
  push32((uint32_t)(EDX));
  /* 122e6269 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e626c push eax */
  push32((uint32_t)(EAX));
  /* 122e626d call 0x122e5a10 */
  push32(0x122e6272u); f_122e5a10();
  /* 122e6272 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6275 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 122e6277 jne 0x122e62a8 */
  if (!C.zf) goto L_122e62a8;
  /* 122e6279 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e627c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e627e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e6281 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 122e6285 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6288 je 0x122e629a */
  if (C.zf) goto L_122e629a;
  /* 122e628a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e628d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e628f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e6292 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 122e6296 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e6298 jne 0x122e62a8 */
  if (!C.zf) goto L_122e62a8;
L_122e629a:;
  /* 122e629a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e629d sub eax, dword ptr [0x12301770] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12301770))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e62a3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122e62a6 jmp 0x122e62b8 */
  goto L_122e62b8;
L_122e62a8:;
  /* 122e62a8 jmp 0x122e624e */
  goto L_122e624e;
L_122e62aa:;
  /* 122e62aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e62ad sub eax, dword ptr [0x12301770] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x12301770))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e62b3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 122e62b6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_122e62b8:;
  /* 122e62b8 mov esp, ebp */
  ESP = (EBP);
  /* 122e62ba pop ebp */
  EBP = (pop32());
  /* 122e62bb ret  */
  ESPCHK(0x122e6240u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x122e62c0 (238 bytes, 80 insns) */
void f_122e62c0(void) {
  FTRACE(0x122e62c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e62c0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e62c1 mov ebp, esp */
  EBP = (ESP);
  /* 122e62c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e62c6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 122e62cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e62d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e62d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e62d7 jne 0x122e62e0 */
  if (!C.zf) goto L_122e62e0;
  /* 122e62d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e62db jmp 0x122e63aa */
  goto L_122e63aa;
L_122e62e0:;
  /* 122e62e0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e62e3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e62e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e62e8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e62eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 122e62ee test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e62f0 je 0x122e62fd */
  if (C.zf) goto L_122e62fd;
  /* 122e62f2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e62f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e62f8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 122e62fb jmp 0x122e62e0 */
  goto L_122e62e0;
L_122e62fd:;
  /* 122e62fd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 122e6302 push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e6307 push 2 */
  push32((uint32_t)(0x2u));
  /* 122e6309 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 122e630c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 122e6313 push eax */
  push32((uint32_t)(EAX));
  /* 122e6314 call 0x122d7180 */
  push32(0x122e6319u); f_122d7180();
  /* 122e6319 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e631c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 122e631f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6322 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 122e6325 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6329 jne 0x122e6335 */
  if (!C.zf) goto L_122e6335;
  /* 122e632b push 9 */
  push32((uint32_t)(0x9u));
  /* 122e632d call 0x122d4fd0 */
  push32(0x122e6332u); f_122d4fd0();
  /* 122e6332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e6335:;
  /* 122e6335 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6338 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_122e633b:;
  /* 122e633b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e633e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6341 je 0x122e639e */
  if (C.zf) goto L_122e639e;
  /* 122e6343 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 122e6348 push 0x122fe350 */
  push32((uint32_t)(0x122fe350u));
  /* 122e634d push 2 */
  push32((uint32_t)(0x2u));
  /* 122e634f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e6352 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 122e6354 push edx */
  push32((uint32_t)(EDX));
  /* 122e6355 call 0x122d9fb0 */
  push32(0x122e635au); f_122d9fb0();
  /* 122e635a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e635d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6360 push eax */
  push32((uint32_t)(EAX));
  /* 122e6361 call 0x122d7180 */
  push32(0x122e6366u); f_122d7180();
  /* 122e6366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6369 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e636c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 122e636e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6371 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6374 je 0x122e638a */
  if (C.zf) goto L_122e638a;
  /* 122e6376 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e6379 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 122e637b push ecx */
  push32((uint32_t)(ECX));
  /* 122e637c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e637f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 122e6381 push eax */
  push32((uint32_t)(EAX));
  /* 122e6382 call 0x122da130 */
  push32(0x122e6387u); f_122da130();
  /* 122e6387 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_122e638a:;
  /* 122e638a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 122e638d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6390 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 122e6393 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e6396 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6399 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 122e639c jmp 0x122e633b */
  goto L_122e633b;
L_122e639e:;
  /* 122e639e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 122e63a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 122e63a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_122e63aa:;
  /* 122e63aa mov esp, ebp */
  ESP = (EBP);
  /* 122e63ac pop ebp */
  EBP = (pop32());
  /* 122e63ad ret  */
  ESPCHK(0x122e62c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100163b0 @ 0x122e63b0 (237 bytes, 81 insns) */
void f_122e63b0(void) {
  FTRACE(0x122e63b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e63b0 push ebp */
  push32((uint32_t)(EBP));
  /* 122e63b1 mov ebp, esp */
  EBP = (ESP);
  /* 122e63b3 push ecx */
  push32((uint32_t)(ECX));
  /* 122e63b4 cmp dword ptr [0x12301b6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x12301b6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e63bb jne 0x122e63d2 */
  if (!C.zf) goto L_122e63d2;
  /* 122e63bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 122e63c0 push eax */
  push32((uint32_t)(EAX));
  /* 122e63c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e63c4 push ecx */
  push32((uint32_t)(ECX));
  /* 122e63c5 call 0x122e64b0 */
  push32(0x122e63cau); f_122e64b0();
  /* 122e63ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e63cd jmp 0x122e6499 */
  goto L_122e6499;
L_122e63d2:;
  /* 122e63d2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122e63d4 call 0x122db530 */
  push32(0x122e63d9u); f_122db530();
  /* 122e63d9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e63dc jmp 0x122e63e7 */
  goto L_122e63e7;
L_122e63de:;
  /* 122e63de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e63e1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e63e4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_122e63e7:;
  /* 122e63e7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e63ea movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 122e63ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 122e63f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e63f5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e63fb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 122e63fd je 0x122e647b */
  if (C.zf) goto L_122e647b;
  /* 122e63ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6402 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e6407 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e6409 mov cl, byte ptr [eax + 0x12301c81] */
  CL = (r8((uint32_t)(EAX + 0x12301c81)));
  /* 122e640f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 122e6412 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e6414 je 0x122e6466 */
  if (C.zf) goto L_122e6466;
  /* 122e6416 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6419 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e641c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 122e641f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6422 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e6424 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e6426 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 122e6428 jne 0x122e6438 */
  if (!C.zf) goto L_122e6438;
  /* 122e642a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122e642c call 0x122db5d0 */
  push32(0x122e6431u); f_122db5d0();
  /* 122e6431 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e6436 jmp 0x122e6499 */
  goto L_122e6499;
L_122e6438:;
  /* 122e6438 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e643b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e6441 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 122e6444 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6447 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 122e6449 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 122e644b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 122e644d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6450 jne 0x122e6464 */
  if (!C.zf) goto L_122e6464;
  /* 122e6452 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122e6454 call 0x122db5d0 */
  push32(0x122e6459u); f_122db5d0();
  /* 122e6459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e645c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e645f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 122e6462 jmp 0x122e6499 */
  goto L_122e6499;
L_122e6464:;
  /* 122e6464 jmp 0x122e6476 */
  goto L_122e6476;
L_122e6466:;
  /* 122e6466 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6469 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 122e646f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6472 jne 0x122e6476 */
  if (!C.zf) goto L_122e6476;
  /* 122e6474 jmp 0x122e647b */
  goto L_122e647b;
L_122e6476:;
  /* 122e6476 jmp 0x122e63de */
  goto L_122e63de;
L_122e647b:;
  /* 122e647b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 122e647d call 0x122db5d0 */
  push32(0x122e6482u); f_122db5d0();
  /* 122e6482 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6485 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 122e6488 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e648d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 122e6490 jne 0x122e6497 */
  if (!C.zf) goto L_122e6497;
  /* 122e6492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 122e6495 jmp 0x122e6499 */
  goto L_122e6499;
L_122e6497:;
  /* 122e6497 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_122e6499:;
  /* 122e6499 mov esp, ebp */
  ESP = (EBP);
  /* 122e649b pop ebp */
  EBP = (pop32());
  /* 122e649c ret  */
  ESPCHK(0x122e63b0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x122e64b0 (193 bytes, 87 insns) */
void f_122e64b0(void) {
  FTRACE(0x122e64b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e64b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e64b2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 122e64b6 push ebx */
  push32((uint32_t)(EBX));
  /* 122e64b7 mov ebx, eax */
  EBX = (EAX);
  /* 122e64b9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 122e64bc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 122e64c0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122e64c6 je 0x122e64db */
  if (C.zf) goto L_122e64db;
L_122e64c8:;
  /* 122e64c8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 122e64ca inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 122e64cb cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e64cd je 0x122e64a0 */
  if (C.zf) { jmp_ind(0x122e64a0u); return; }
  /* 122e64cf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 122e64d1 je 0x122e6524 */
  if (C.zf) goto L_122e6524;
  /* 122e64d3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 122e64d9 jne 0x122e64c8 */
  if (!C.zf) goto L_122e64c8;
L_122e64db:;
  /* 122e64db or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 122e64dd push edi */
  push32((uint32_t)(EDI));
  /* 122e64de mov eax, ebx */
  EAX = (EBX);
  /* 122e64e0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 122e64e3 push esi */
  push32((uint32_t)(ESI));
  /* 122e64e4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_122e64e6:;
  /* 122e64e6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 122e64e8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 122e64ed mov eax, ecx */
  EAX = (ECX);
  /* 122e64ef mov esi, edi */
  ESI = (EDI);
  /* 122e64f1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 122e64f3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 122e64f5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 122e64f7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 122e64fa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 122e64fd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 122e64ff xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 122e6501 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 122e6504 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 122e650a jne 0x122e6528 */
  if (!C.zf) goto L_122e6528;
  /* 122e650c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122e6511 je 0x122e64e6 */
  if (C.zf) goto L_122e64e6;
  /* 122e6513 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 122e6518 jne 0x122e6522 */
  if (!C.zf) goto L_122e6522;
  /* 122e651a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 122e6520 jne 0x122e64e6 */
  if (!C.zf) goto L_122e64e6;
L_122e6522:;
  /* 122e6522 pop esi */
  ESI = (pop32());
  /* 122e6523 pop edi */
  EDI = (pop32());
L_122e6524:;
  /* 122e6524 pop ebx */
  EBX = (pop32());
  /* 122e6525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 122e6527 ret  */
  ESPCHK(0x122e64b0u, _esp0);
  ESP += 4; return;
L_122e6528:;
  /* 122e6528 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 122e652b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e652d je 0x122e6565 */
  if (C.zf) goto L_122e6565;
  /* 122e652f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122e6531 je 0x122e6522 */
  if (C.zf) goto L_122e6522;
  /* 122e6533 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e6535 je 0x122e655e */
  if (C.zf) goto L_122e655e;
  /* 122e6537 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122e6539 je 0x122e6522 */
  if (C.zf) goto L_122e6522;
  /* 122e653b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 122e653e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e6540 je 0x122e6557 */
  if (C.zf) goto L_122e6557;
  /* 122e6542 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 122e6544 je 0x122e6522 */
  if (C.zf) goto L_122e6522;
  /* 122e6546 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 122e6548 je 0x122e6550 */
  if (C.zf) goto L_122e6550;
  /* 122e654a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 122e654c je 0x122e6522 */
  if (C.zf) goto L_122e6522;
  /* 122e654e jmp 0x122e64e6 */
  goto L_122e64e6;
L_122e6550:;
  /* 122e6550 pop esi */
  ESI = (pop32());
  /* 122e6551 pop edi */
  EDI = (pop32());
  /* 122e6552 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 122e6555 pop ebx */
  EBX = (pop32());
  /* 122e6556 ret  */
  ESPCHK(0x122e64b0u, _esp0);
  ESP += 4; return;
L_122e6557:;
  /* 122e6557 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 122e655a pop esi */
  ESI = (pop32());
  /* 122e655b pop edi */
  EDI = (pop32());
  /* 122e655c pop ebx */
  EBX = (pop32());
  /* 122e655d ret  */
  ESPCHK(0x122e64b0u, _esp0);
  ESP += 4; return;
L_122e655e:;
  /* 122e655e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 122e6561 pop esi */
  ESI = (pop32());
  /* 122e6562 pop edi */
  EDI = (pop32());
  /* 122e6563 pop ebx */
  EBX = (pop32());
  /* 122e6564 ret  */
  ESPCHK(0x122e64b0u, _esp0);
  ESP += 4; return;
L_122e6565:;
  /* 122e6565 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 122e6568 pop esi */
  ESI = (pop32());
  /* 122e6569 pop edi */
  EDI = (pop32());
  /* 122e656a pop ebx */
  EBX = (pop32());
  /* 122e656b ret  */
  ESPCHK(0x122e64b0u, _esp0);
  ESP += 4; return;
  /* 122e656c jmp dword ptr [0x12304204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12304204)))); return;
}

/* RtlUnwind @ 0x122e66ec (6 bytes, 1 insns) */
void f_122e66ec(void) {
  FTRACE(0x122e66ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 122e66ec jmp dword ptr [0x12304300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x12304300)))); return;
}

